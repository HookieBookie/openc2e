#include "Sound.h"

#include "Engine.h"
#include "SoundManager.h"
#include "audiobackend/AudioBackend.h"

Sound::Sound() = default;

Sound::operator bool() {
	return getState() == AUDIO_PLAYING;
}

void Sound::fadeOut() {
	if (auto source_data = soundmanager.getSoundData(*this)) {
		// fade out over 15 ticks, which in C3/DS is 3/4 of a second
		source_data->fade_start = std::chrono::steady_clock::now();
		source_data->fade_length = std::chrono::milliseconds(750);
	}
}

void Sound::stop() {
	if (auto source_data = soundmanager.getSoundData(*this)) {
		engine.audio->stopChannel(source_data->handle);
		// data will be destroyed later in tick() ?
	}
}

void Sound::setPosition(float x, float y, float width, float height) {
	if (auto source_data = soundmanager.getSoundData(*this)) {
		source_data->positioned = true;
		source_data->x = x;
		source_data->y = y;
		source_data->width = width;
		source_data->height = height;
		soundmanager.updateVolume(*source_data);
	}
}

AudioState Sound::getState() {
	if (auto source_data = soundmanager.getSoundData(*this)) {
		return engine.audio->getChannelState(source_data->handle);
	} else {
		return AUDIO_STOPPED;
	}
}
