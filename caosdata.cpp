/*
 *  caosdata.cpp
 *  openc2e
 *
 *  Created by Alyssa Milburn on Tue Jun 01 2004.
 *  Copyright (c) 2004 Alyssa Milburn. All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 */

/*
 Automatically generated by makedocs.pl.
*/

#include "caosVM_cmdinfo.h"
#include "caoshashes.h"

void setupCommandPointers() {
	cmds = new cmdinfo[cmd_RANGE];
	funcs = new cmdinfo[func_RANGE];

	CMDDEF(RTAR, 3)
DBLCMDDEF("NEW:")
DBLCMD("NEW: SIMP", NEW_SIMP, 7)
DBLCMD("NEW: COMP", NEW_COMP, 7)
DBLCMD("NEW: VHCL", NEW_VHCL, 7)
FUNCDEF(TARG, 0)
FUNCDEF(OWNR, 0)
FUNCDEF(NULL, 0)
CMDDEF(POSE, 1)
CMDDEF(ATTR, 1)
FUNCDEF(ATTR, 0)
CMDDEF(TICK, 1)
CMDDEF(BHVR, 1)
CMDDEF(TARG, 1)
FUNCDEF(FROM, 0)
FUNCDEF(POSE, 0)
CMDDEF(KILL, 1)
CMDDEF(ANIM, 1)
FUNCDEF(ABBA, 0)
CMDDEF(BASE, 1)
FUNCDEF(BASE, 0)
FUNCDEF(BHVR, 0)
FUNCDEF(CARR, 0)
FUNCDEF(FMLY, 0)
FUNCDEF(GNUS, 0)
FUNCDEF(SPCS, 0)
FUNCDEF(PLNE, 0)
FUNCDEF(PNTR, 0)
DBLCMDDEF("MESG")
DBLCMD("MESG WRIT", MESG_WRIT, 2)
DBLCMD("MESG WRT+", MESG_WRT, 5)
FUNCDEF(TOTL, 3)
CMDDEF(SHOW, 1)
FUNCDEF(POSX, 0)
FUNCDEF(POSY, 0)
CMDDEF(FRAT, 1)
CMDDEF(OVER, 0)
CMDDEF(PUHL, 3)
FUNCDEF(POSL, 0)
FUNCDEF(POST, 0)
FUNCDEF(POSR, 0)
FUNCDEF(POSB, 0)
FUNCDEF(WDTH, 0)
CMDDEF(PLNE, 1)
CMDDEF(TINT, 5)
CMDDEF(RNGE, 1)
FUNCDEF(RNGE, 0)
FUNCDEF(TRAN, 2)
CMDDEF(TRAN, 2)
FUNCDEF(HGHT, 0)
CMDDEF(META, 4)
CMDDEF(CMRT, 1)
CMDDEF(CMRA, 3)
CMDDEF(CMRP, 3)
FUNCDEF(CMRX, 0)
FUNCDEF(CMRY, 0)
FUNCDEF(WNDW, 0)
FUNCDEF(WNDH, 0)
FUNCDEF(WNDB, 0)
FUNCDEF(WNDL, 0)
FUNCDEF(WNDR, 0)
FUNCDEF(WNDT, 0)
CMDDEF(PART, 1)
DBLCMDDEF("PAT:")
DBLCMD("PAT: DULL", PAT_DULL, 6)
DBLCMD("PAT: BUTT", PAT_BUTT, 10)
DBLCMD("PAT: KILL", PAT_KILL, 1)
CMDDEF(FCUS, 0)
CMDDEF(OUTS, 1)
CMDDEF(OUTV, 1)
FUNCDEF(GAME, 1)
CMDDEF(SCRP, 4)
CMDDEF(RSCR, 0)
CMDDEF(ISCR, 0)
CMDDEF(ENDM, 0)
DBLCMDDEF("STIM")
DBLCMD("STIM WRIT", STIM_WRIT, 3)
DBLCMDDEF("SWAY")
DBLCMD("SWAY SHOU", SWAY_SHOU, 8)
CMDDEF(ASLP, 1)
CMDDEF(NOHH, 0)
CMDDEF(ZOMB, 1)
CMDDEF(DIRN, 1)
FUNCDEF(HHLD, 0)
CMDDEF(MVFT, 2)
CMDDEF(CHEM, 2)
DBLCMDDEF("DBG:")
DBLCMD("DBG: OUTS", DBG_OUTS, 1)
DBLCMD("DBG: OUTV", DBG_OUTV, 1)
DBLCMDDEF("TEST")
DBLCMD("TEST PASS", TEST_PASS, 0)
DBLCMD("TEST FAIL", TEST_FAIL, 0)
DBLCMD("TEST INIT", TEST_INIT, 1)
DBLCMD("TEST CHEK", TEST_CHEK, 1)
DBLCMD("TEST STRT", TEST_STRT, 0)
DBLCMD("TEST FINI", TEST_FINI, 0)
FUNCDEF(UNID, 0)
FUNCDEF(AGNT, 1)
CMDDEF(DOIF, 0)
cmds[phash_cmd(*(int *)"DOIF")].needscondition = true;
CMDDEF(ELIF, 0)
cmds[phash_cmd(*(int *)"ELIF")].needscondition = true;
CMDDEF(ELSE, 0)
CMDDEF(ENDI, 0)
CMDDEF(REPS, 1)
CMDDEF(REPE, 0)
CMDDEF(LOOP, 0)
CMDDEF(EVER, 0)
CMDDEF(UNTL, 0)
cmds[phash_cmd(*(int *)"UNTL")].needscondition = true;
CMDDEF(GSUB, 1)
CMDDEF(SUBR, 1)
CMDDEF(RETN, 0)
CMDDEF(NEXT, 0)
CMDDEF(ENUM, 3)
CMDDEF(ESEE, 3)
CMDDEF(ETCH, 3)
CMDDEF(EPAS, 3)
CMDDEF(CLAC, 1)
FUNCDEF(ADDM, 5)
CMDDEF(BRMI, 2)
CMDDEF(MAPD, 2)
CMDDEF(MAPK, 0)
FUNCDEF(ADDR, 7)
CMDDEF(RTYP, 2)
FUNCDEF(RTYP, 1)
CMDDEF(DOOR, 3)
CMDDEF(RATE, 5)
FUNCDEF(ROOM, 1)
FUNCDEF(LEFT, 0)
FUNCDEF(RGHT, 0)
FUNCDEFHACK(_UP_, 0, UP)
FUNCDEF(DOWN, 0)
CMDDEF(PROP, 3)
FUNCDEF(PROP, 2)
CMDDEF(PERM, 1)
FUNCDEF(PERM, 0)
FUNCDEF(GRAP, 2)
FUNCDEF(GMAP, 2)
CMDDEF(LINK, 3)
FUNCDEF(GRID, 2)
CMDDEF(EMIT, 2)
FUNCDEF(WALL, 0)
CMDDEF(ALTR, 3)
CMDDEF(ELAS, 1)
CMDDEF(MVTO, 2)
FUNCDEF(VELX, 0)
FUNCDEF(VELY, 0)
FUNCDEF(OBST, 1)
FUNCDEF(TMVT, 2)
FUNCDEF(TMVF, 2)
CMDDEF(ACCG, 1)
FUNCDEF(ACCG, 0)
CMDDEF(AERO, 1)
FUNCDEF(AERO, 0)
FUNCDEF(RELX, 2)
FUNCDEF(RELY, 2)
CMDDEF(VELO, 2)
CMDDEF(MVSF, 2)
FUNCDEF(FRIC, 0)
CMDDEF(FRIC, 1)
FUNCDEF(FALL, 0)
DBLCMDDEF("PRT:")
DBLCMD("PRT: BANG", PRT_BANG, 1)
DBLFUNCDEF("PRT:")
DBLFUNC("PRT: FRMA", PRT_FRMA, 1)
DBLFUNC("PRT: FROM", PRT_FROM, 1)
DBLCMD("PRT: INEW", PRT_INEW, 6)
DBLFUNC("PRT: ITOT", PRT_ITOT, 0)
DBLCMD("PRT: IZAP", PRT_IZAP, 1)
DBLCMD("PRT: JOIN", PRT_JOIN, 4)
DBLCMD("PRT: KRAK", PRT_KRAK, 3)
DBLFUNC("PRT: NAME", PRT_NAME, 3)
DBLCMD("PRT: ONEW", PRT_ONEW, 5)
DBLFUNC("PRT: OTOT", PRT_OTOT, 0)
DBLCMD("PRT: OZAP", PRT_OZAP, 1)
DBLCMD("PRT: SEND", PRT_SEND, 2)
DBLFUNCDEF("PRAY")
DBLFUNC("PRAY AGTI", PRAY_AGTI, 3)
DBLFUNC("PRAY AGTS", PRAY_AGTS, 3)
DBLFUNC("PRAY BACK", PRAY_BACK, 2)
DBLFUNC("PRAY COUN", PRAY_COUN, 1)
DBLFUNC("PRAY DEPS", PRAY_DEPS, 2)
DBLFUNC("PRAY EXPO", PRAY_EXPO, 1)
DBLFUNC("PRAY FILE", PRAY_FILE, 3)
DBLFUNC("PRAY FORE", PRAY_FORE, 2)
DBLCMDDEF("PRAY")
DBLCMD("PRAY GARB", PRAY_GARB, 1)
DBLFUNC("PRAY IMPO", PRAY_IMPO, 3)
DBLFUNC("PRAY INJT", PRAY_INJT, 3)
DBLFUNC("PRAY KILL", PRAY_KILL, 1)
DBLFUNC("PRAY MAKE", PRAY_MAKE, 5)
DBLFUNC("PRAY NEXT", PRAY_NEXT, 2)
DBLFUNC("PRAY PREV", PRAY_PREV, 2)
DBLCMD("PRAY REFR", PRAY_REFR, 0)
DBLFUNC("PRAY TEST", PRAY_TEST, 1)
CMDDEF(INST, 0)
CMDDEF(SLOW, 0)
CMDDEF(LOCK, 0)
CMDDEF(UNLK, 0)
CMDDEF(WAIT, 1)
CMDDEF(STOP, 0)
CMDDEF(SCRX, 4)
CMDDEF(SNDE, 1)
CMDDEF(SNDC, 1)
CMDDEF(SNDL, 1)
CMDDEF(MMSC, 3)
FUNCDEF(MMSC, 2)
CMDDEF(RMSC, 3)
FUNCDEF(RMSC, 2)
CMDDEF(FADE, 0)
FUNCDEF(PACE, 0)
FUNCDEF(VAxx, 0)
CMDDEF(SETS, 2)
CMDDEF(SETV, 2)
CMDDEF(SETA, 2)
FUNCDEF(OVxx, 0)
CMDDEF(MODV, 2)
CMDDEF(ANDV, 2)
CMDDEF(ORRV, 2)
CMDDEF(ADDV, 2)
CMDDEF(SUBV, 2)
CMDDEF(NEGV, 1)
CMDDEF(DIVV, 2)
CMDDEF(MULV, 2)
FUNCDEF(RAND, 2)
CMDDEF(REAF, 0)
FUNCDEF(UFOS, 0)
FUNCDEF(MODU, 0)
FUNCDEF(GNAM, 0)
CMDDEF(ABSV, 1)
FUNCDEF(ACOS, 1)
FUNCDEF(ASIN, 1)
FUNCDEF(ATAN, 1)
FUNCDEF(COS_, 1)
FUNCDEF(SIN_, 1)
FUNCDEF(TAN_, 1)
FUNCDEF(SQRT, 1)
FUNCDEFHACK(_P1_, 0, P1)
FUNCDEFHACK(_P2_, 0, P2)
CMDDEF(CABN, 4)
CMDDEF(CABW, 1)
CMDDEF(SPAS, 2)
CMDDEF(GPAS, 4)
CMDDEF(DPAS, 3)

}
