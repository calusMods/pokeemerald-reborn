RusturfTunnel_OnResume::
# 2 "data/maps/RusturfTunnel/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Common_EventScript_RemoveStaticPokemonEncounter
	return


RusturfTunnel_EventScript_HideEncounters::
# 6 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_5
# 7 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_6
# 8 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_7
	return


RusturfTunnel_EventScript_RandomizeEncounters::
# 13 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_5
# 14 "data/maps/RusturfTunnel/scripts.pory"
	random 10
# 15 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_lt RusturfTunnel_EventScript_RandomizeEncounters_2
RusturfTunnel_EventScript_RandomizeEncounters_1:
# 20 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_6
# 21 "data/maps/RusturfTunnel/scripts.pory"
	random 10
# 22 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_lt RusturfTunnel_EventScript_RandomizeEncounters_5
RusturfTunnel_EventScript_RandomizeEncounters_4:
# 27 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_7
# 28 "data/maps/RusturfTunnel/scripts.pory"
	random 10
# 29 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_lt RusturfTunnel_EventScript_RandomizeEncounters_7
	return

RusturfTunnel_EventScript_RandomizeEncounters_2:
# 16 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_RandomizeEncounterVar5
# 17 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_TEMP_5
	goto RusturfTunnel_EventScript_RandomizeEncounters_1

RusturfTunnel_EventScript_RandomizeEncounters_5:
# 23 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_RandomizeEncounterVar6
# 24 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_TEMP_6
	goto RusturfTunnel_EventScript_RandomizeEncounters_4

RusturfTunnel_EventScript_RandomizeEncounters_7:
# 30 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_RandomizeEncounterVar7
# 31 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_TEMP_7
	return


RusturfTunnel_EventScript_RandomizeEncounterVar5::
# 36 "data/maps/RusturfTunnel/scripts.pory"
	random 10
# 37 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_RESULT
# 38 "data/maps/RusturfTunnel/scripts.pory"
	case 0, RusturfTunnel_EventScript_RandomizeEncounterVar5_2
# 39 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_RandomizeEncounterVar5_2
# 40 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_RandomizeEncounterVar5_2
# 41 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_RandomizeEncounterVar5_2
# 42 "data/maps/RusturfTunnel/scripts.pory"
	case 4, RusturfTunnel_EventScript_RandomizeEncounterVar5_2
# 45 "data/maps/RusturfTunnel/scripts.pory"
	case 5, RusturfTunnel_EventScript_RandomizeEncounterVar5_3
# 46 "data/maps/RusturfTunnel/scripts.pory"
	case 6, RusturfTunnel_EventScript_RandomizeEncounterVar5_3
# 49 "data/maps/RusturfTunnel/scripts.pory"
	case 7, RusturfTunnel_EventScript_RandomizeEncounterVar5_4
# 52 "data/maps/RusturfTunnel/scripts.pory"
	case 8, RusturfTunnel_EventScript_RandomizeEncounterVar5_5
# 55 "data/maps/RusturfTunnel/scripts.pory"
	case 9, RusturfTunnel_EventScript_RandomizeEncounterVar5_6
	return

RusturfTunnel_EventScript_RandomizeEncounterVar5_2:
# 43 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( WHISMUR )
# 44 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_5, 0
	return

RusturfTunnel_EventScript_RandomizeEncounterVar5_3:
# 47 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( ZUBAT )
# 48 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

RusturfTunnel_EventScript_RandomizeEncounterVar5_4:
# 50 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( GEODUDE_ALOLA )
# 51 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

RusturfTunnel_EventScript_RandomizeEncounterVar5_5:
# 53 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( DRILBUR )
# 54 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_5, 3
	return

RusturfTunnel_EventScript_RandomizeEncounterVar5_6:
# 56 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( GLIMMET )
# 57 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_5, 4
	return


RusturfTunnel_EventScript_EncounterVar5::
# 62 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 63 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_TEMP_5
# 64 "data/maps/RusturfTunnel/scripts.pory"
	case 0, RusturfTunnel_EventScript_EncounterVar5_3
# 76 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_EncounterVar5_4
# 88 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_EncounterVar5_5
# 100 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_EncounterVar5_6
# 112 "data/maps/RusturfTunnel/scripts.pory"
	case 4, RusturfTunnel_EventScript_EncounterVar5_7
RusturfTunnel_EventScript_EncounterVar5_1:
# 125 "data/maps/RusturfTunnel/scripts.pory"
	release
	return

RusturfTunnel_EventScript_EncounterVar5_3:
# 65 "data/maps/RusturfTunnel/scripts.pory"
	random 5
# 66 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_RESULT
# 67 "data/maps/RusturfTunnel/scripts.pory"
	case 0, RusturfTunnel_EventScript_EncounterVar5_9
# 68 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_EncounterVar5_9
# 70 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_EncounterVar5_10
# 71 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_EncounterVar5_10
# 73 "data/maps/RusturfTunnel/scripts.pory"
	case 4, RusturfTunnel_EventScript_EncounterVar5_11
	goto RusturfTunnel_EventScript_EncounterVar5_1

RusturfTunnel_EventScript_EncounterVar5_4:
# 77 "data/maps/RusturfTunnel/scripts.pory"
	random 5
# 78 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_RESULT
# 79 "data/maps/RusturfTunnel/scripts.pory"
	case 0, RusturfTunnel_EventScript_EncounterVar5_13
# 80 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_EncounterVar5_13
# 82 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_EncounterVar5_14
# 83 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_EncounterVar5_14
# 85 "data/maps/RusturfTunnel/scripts.pory"
	case 4, RusturfTunnel_EventScript_EncounterVar5_15
	goto RusturfTunnel_EventScript_EncounterVar5_1

RusturfTunnel_EventScript_EncounterVar5_5:
# 89 "data/maps/RusturfTunnel/scripts.pory"
	random 5
# 90 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_RESULT
# 91 "data/maps/RusturfTunnel/scripts.pory"
	case 0, RusturfTunnel_EventScript_EncounterVar5_17
# 92 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_EncounterVar5_17
# 94 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_EncounterVar5_18
# 95 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_EncounterVar5_18
# 97 "data/maps/RusturfTunnel/scripts.pory"
	case 4, RusturfTunnel_EventScript_EncounterVar5_19
	goto RusturfTunnel_EventScript_EncounterVar5_1

RusturfTunnel_EventScript_EncounterVar5_6:
# 101 "data/maps/RusturfTunnel/scripts.pory"
	random 5
# 102 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_RESULT
# 103 "data/maps/RusturfTunnel/scripts.pory"
	case 0, RusturfTunnel_EventScript_EncounterVar5_21
# 104 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_EncounterVar5_21
# 106 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_EncounterVar5_22
# 107 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_EncounterVar5_22
# 109 "data/maps/RusturfTunnel/scripts.pory"
	case 4, RusturfTunnel_EventScript_EncounterVar5_23
	goto RusturfTunnel_EventScript_EncounterVar5_1

RusturfTunnel_EventScript_EncounterVar5_7:
# 113 "data/maps/RusturfTunnel/scripts.pory"
	random 5
# 114 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_RESULT
# 115 "data/maps/RusturfTunnel/scripts.pory"
	case 0, RusturfTunnel_EventScript_EncounterVar5_25
# 116 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_EncounterVar5_25
# 118 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_EncounterVar5_26
# 119 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_EncounterVar5_26
# 121 "data/maps/RusturfTunnel/scripts.pory"
	case 4, RusturfTunnel_EventScript_EncounterVar5_27
	goto RusturfTunnel_EventScript_EncounterVar5_1

RusturfTunnel_EventScript_EncounterVar5_9:
# 69 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_WHISMUR, 7, FLAG_TEMP_5
	goto RusturfTunnel_EventScript_EncounterVar5_1

RusturfTunnel_EventScript_EncounterVar5_10:
# 72 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_WHISMUR, 8, FLAG_TEMP_5
	goto RusturfTunnel_EventScript_EncounterVar5_1

RusturfTunnel_EventScript_EncounterVar5_11:
# 74 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_WHISMUR, 9, FLAG_TEMP_5
	goto RusturfTunnel_EventScript_EncounterVar5_1

RusturfTunnel_EventScript_EncounterVar5_13:
# 81 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_ZUBAT, 7, FLAG_TEMP_5
	goto RusturfTunnel_EventScript_EncounterVar5_1

RusturfTunnel_EventScript_EncounterVar5_14:
# 84 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_ZUBAT, 8, FLAG_TEMP_5
	goto RusturfTunnel_EventScript_EncounterVar5_1

RusturfTunnel_EventScript_EncounterVar5_15:
# 86 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_ZUBAT, 9, FLAG_TEMP_5
	goto RusturfTunnel_EventScript_EncounterVar5_1

RusturfTunnel_EventScript_EncounterVar5_17:
# 93 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_GEODUDE_ALOLA, 7, FLAG_TEMP_5
	goto RusturfTunnel_EventScript_EncounterVar5_1

RusturfTunnel_EventScript_EncounterVar5_18:
# 96 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_GEODUDE_ALOLA, 8, FLAG_TEMP_5
	goto RusturfTunnel_EventScript_EncounterVar5_1

RusturfTunnel_EventScript_EncounterVar5_19:
# 98 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_GEODUDE_ALOLA, 9, FLAG_TEMP_5
	goto RusturfTunnel_EventScript_EncounterVar5_1

RusturfTunnel_EventScript_EncounterVar5_21:
# 105 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_DRILBUR, 7, FLAG_TEMP_5
	goto RusturfTunnel_EventScript_EncounterVar5_1

RusturfTunnel_EventScript_EncounterVar5_22:
# 108 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_DRILBUR, 8, FLAG_TEMP_5
	goto RusturfTunnel_EventScript_EncounterVar5_1

RusturfTunnel_EventScript_EncounterVar5_23:
# 110 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_DRILBUR, 9, FLAG_TEMP_5
	goto RusturfTunnel_EventScript_EncounterVar5_1

RusturfTunnel_EventScript_EncounterVar5_25:
# 117 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_GLIMMET, 7, FLAG_TEMP_5
	goto RusturfTunnel_EventScript_EncounterVar5_1

RusturfTunnel_EventScript_EncounterVar5_26:
# 120 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_GLIMMET, 8, FLAG_TEMP_5
	goto RusturfTunnel_EventScript_EncounterVar5_1

RusturfTunnel_EventScript_EncounterVar5_27:
# 122 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_GLIMMET, 9, FLAG_TEMP_5
	goto RusturfTunnel_EventScript_EncounterVar5_1


RusturfTunnel_EventScript_RandomizeEncounterVar6::
# 129 "data/maps/RusturfTunnel/scripts.pory"
	random 10
# 130 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_RESULT
# 131 "data/maps/RusturfTunnel/scripts.pory"
	case 0, RusturfTunnel_EventScript_RandomizeEncounterVar6_2
# 132 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_RandomizeEncounterVar6_2
# 133 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_RandomizeEncounterVar6_2
# 134 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_RandomizeEncounterVar6_2
# 135 "data/maps/RusturfTunnel/scripts.pory"
	case 4, RusturfTunnel_EventScript_RandomizeEncounterVar6_2
# 138 "data/maps/RusturfTunnel/scripts.pory"
	case 5, RusturfTunnel_EventScript_RandomizeEncounterVar6_3
# 139 "data/maps/RusturfTunnel/scripts.pory"
	case 6, RusturfTunnel_EventScript_RandomizeEncounterVar6_3
# 142 "data/maps/RusturfTunnel/scripts.pory"
	case 7, RusturfTunnel_EventScript_RandomizeEncounterVar6_4
# 145 "data/maps/RusturfTunnel/scripts.pory"
	case 8, RusturfTunnel_EventScript_RandomizeEncounterVar6_5
# 148 "data/maps/RusturfTunnel/scripts.pory"
	case 9, RusturfTunnel_EventScript_RandomizeEncounterVar6_6
	return

RusturfTunnel_EventScript_RandomizeEncounterVar6_2:
# 136 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( WHISMUR )
# 137 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_6, 0
	return

RusturfTunnel_EventScript_RandomizeEncounterVar6_3:
# 140 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( ZUBAT )
# 141 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_6, 1
	return

RusturfTunnel_EventScript_RandomizeEncounterVar6_4:
# 143 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( GEODUDE_ALOLA )
# 144 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_6, 2
	return

RusturfTunnel_EventScript_RandomizeEncounterVar6_5:
# 146 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( DRILBUR )
# 147 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_6, 3
	return

RusturfTunnel_EventScript_RandomizeEncounterVar6_6:
# 149 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( GLIMMET )
# 150 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_6, 4
	return


RusturfTunnel_EventScript_EncounterVar6::
# 155 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 156 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_TEMP_6
# 157 "data/maps/RusturfTunnel/scripts.pory"
	case 0, RusturfTunnel_EventScript_EncounterVar6_3
# 169 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_EncounterVar6_4
# 181 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_EncounterVar6_5
# 193 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_EncounterVar6_6
# 205 "data/maps/RusturfTunnel/scripts.pory"
	case 4, RusturfTunnel_EventScript_EncounterVar6_7
RusturfTunnel_EventScript_EncounterVar6_1:
# 218 "data/maps/RusturfTunnel/scripts.pory"
	release
	return

RusturfTunnel_EventScript_EncounterVar6_3:
# 158 "data/maps/RusturfTunnel/scripts.pory"
	random 5
# 159 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_RESULT
# 160 "data/maps/RusturfTunnel/scripts.pory"
	case 0, RusturfTunnel_EventScript_EncounterVar6_9
# 161 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_EncounterVar6_9
# 163 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_EncounterVar6_10
# 164 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_EncounterVar6_10
# 166 "data/maps/RusturfTunnel/scripts.pory"
	case 4, RusturfTunnel_EventScript_EncounterVar6_11
	goto RusturfTunnel_EventScript_EncounterVar6_1

RusturfTunnel_EventScript_EncounterVar6_4:
# 170 "data/maps/RusturfTunnel/scripts.pory"
	random 5
# 171 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_RESULT
# 172 "data/maps/RusturfTunnel/scripts.pory"
	case 0, RusturfTunnel_EventScript_EncounterVar6_13
# 173 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_EncounterVar6_13
# 175 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_EncounterVar6_14
# 176 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_EncounterVar6_14
# 178 "data/maps/RusturfTunnel/scripts.pory"
	case 4, RusturfTunnel_EventScript_EncounterVar6_15
	goto RusturfTunnel_EventScript_EncounterVar6_1

RusturfTunnel_EventScript_EncounterVar6_5:
# 182 "data/maps/RusturfTunnel/scripts.pory"
	random 5
# 183 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_RESULT
# 184 "data/maps/RusturfTunnel/scripts.pory"
	case 0, RusturfTunnel_EventScript_EncounterVar6_17
# 185 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_EncounterVar6_17
# 187 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_EncounterVar6_18
# 188 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_EncounterVar6_18
# 190 "data/maps/RusturfTunnel/scripts.pory"
	case 4, RusturfTunnel_EventScript_EncounterVar6_19
	goto RusturfTunnel_EventScript_EncounterVar6_1

RusturfTunnel_EventScript_EncounterVar6_6:
# 194 "data/maps/RusturfTunnel/scripts.pory"
	random 5
# 195 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_RESULT
# 196 "data/maps/RusturfTunnel/scripts.pory"
	case 0, RusturfTunnel_EventScript_EncounterVar6_21
# 197 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_EncounterVar6_21
# 199 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_EncounterVar6_22
# 200 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_EncounterVar6_22
# 202 "data/maps/RusturfTunnel/scripts.pory"
	case 4, RusturfTunnel_EventScript_EncounterVar6_23
	goto RusturfTunnel_EventScript_EncounterVar6_1

RusturfTunnel_EventScript_EncounterVar6_7:
# 206 "data/maps/RusturfTunnel/scripts.pory"
	random 5
# 207 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_RESULT
# 208 "data/maps/RusturfTunnel/scripts.pory"
	case 0, RusturfTunnel_EventScript_EncounterVar6_25
# 209 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_EncounterVar6_25
# 211 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_EncounterVar6_26
# 212 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_EncounterVar6_26
# 214 "data/maps/RusturfTunnel/scripts.pory"
	case 4, RusturfTunnel_EventScript_EncounterVar6_27
	goto RusturfTunnel_EventScript_EncounterVar6_1

RusturfTunnel_EventScript_EncounterVar6_9:
# 162 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_WHISMUR, 7, FLAG_TEMP_6
	goto RusturfTunnel_EventScript_EncounterVar6_1

RusturfTunnel_EventScript_EncounterVar6_10:
# 165 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_WHISMUR, 8, FLAG_TEMP_6
	goto RusturfTunnel_EventScript_EncounterVar6_1

RusturfTunnel_EventScript_EncounterVar6_11:
# 167 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_WHISMUR, 9, FLAG_TEMP_6
	goto RusturfTunnel_EventScript_EncounterVar6_1

RusturfTunnel_EventScript_EncounterVar6_13:
# 174 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_ZUBAT, 7, FLAG_TEMP_6
	goto RusturfTunnel_EventScript_EncounterVar6_1

RusturfTunnel_EventScript_EncounterVar6_14:
# 177 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_ZUBAT, 8, FLAG_TEMP_6
	goto RusturfTunnel_EventScript_EncounterVar6_1

RusturfTunnel_EventScript_EncounterVar6_15:
# 179 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_ZUBAT, 9, FLAG_TEMP_6
	goto RusturfTunnel_EventScript_EncounterVar6_1

RusturfTunnel_EventScript_EncounterVar6_17:
# 186 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_GEODUDE_ALOLA, 7, FLAG_TEMP_6
	goto RusturfTunnel_EventScript_EncounterVar6_1

RusturfTunnel_EventScript_EncounterVar6_18:
# 189 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_GEODUDE_ALOLA, 8, FLAG_TEMP_6
	goto RusturfTunnel_EventScript_EncounterVar6_1

RusturfTunnel_EventScript_EncounterVar6_19:
# 191 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_GEODUDE_ALOLA, 9, FLAG_TEMP_6
	goto RusturfTunnel_EventScript_EncounterVar6_1

RusturfTunnel_EventScript_EncounterVar6_21:
# 198 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_DRILBUR, 7, FLAG_TEMP_6
	goto RusturfTunnel_EventScript_EncounterVar6_1

RusturfTunnel_EventScript_EncounterVar6_22:
# 201 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_DRILBUR, 8, FLAG_TEMP_6
	goto RusturfTunnel_EventScript_EncounterVar6_1

RusturfTunnel_EventScript_EncounterVar6_23:
# 203 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_DRILBUR, 9, FLAG_TEMP_6
	goto RusturfTunnel_EventScript_EncounterVar6_1

RusturfTunnel_EventScript_EncounterVar6_25:
# 210 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_GLIMMET, 7, FLAG_TEMP_6
	goto RusturfTunnel_EventScript_EncounterVar6_1

RusturfTunnel_EventScript_EncounterVar6_26:
# 213 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_GLIMMET, 8, FLAG_TEMP_6
	goto RusturfTunnel_EventScript_EncounterVar6_1

RusturfTunnel_EventScript_EncounterVar6_27:
# 215 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_GLIMMET, 9, FLAG_TEMP_6
	goto RusturfTunnel_EventScript_EncounterVar6_1


RusturfTunnel_EventScript_RandomizeEncounterVar7::
# 222 "data/maps/RusturfTunnel/scripts.pory"
	random 10
# 223 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_RESULT
# 224 "data/maps/RusturfTunnel/scripts.pory"
	case 0, RusturfTunnel_EventScript_RandomizeEncounterVar7_2
# 225 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_RandomizeEncounterVar7_2
# 226 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_RandomizeEncounterVar7_2
# 227 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_RandomizeEncounterVar7_2
# 228 "data/maps/RusturfTunnel/scripts.pory"
	case 4, RusturfTunnel_EventScript_RandomizeEncounterVar7_2
# 231 "data/maps/RusturfTunnel/scripts.pory"
	case 5, RusturfTunnel_EventScript_RandomizeEncounterVar7_3
# 232 "data/maps/RusturfTunnel/scripts.pory"
	case 6, RusturfTunnel_EventScript_RandomizeEncounterVar7_3
# 235 "data/maps/RusturfTunnel/scripts.pory"
	case 7, RusturfTunnel_EventScript_RandomizeEncounterVar7_4
# 238 "data/maps/RusturfTunnel/scripts.pory"
	case 8, RusturfTunnel_EventScript_RandomizeEncounterVar7_5
# 241 "data/maps/RusturfTunnel/scripts.pory"
	case 9, RusturfTunnel_EventScript_RandomizeEncounterVar7_6
	return

RusturfTunnel_EventScript_RandomizeEncounterVar7_2:
# 229 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( WHISMUR )
# 230 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_7, 0
	return

RusturfTunnel_EventScript_RandomizeEncounterVar7_3:
# 233 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( ZUBAT )
# 234 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_7, 1
	return

RusturfTunnel_EventScript_RandomizeEncounterVar7_4:
# 236 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( GEODUDE_ALOLA )
# 237 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_7, 2
	return

RusturfTunnel_EventScript_RandomizeEncounterVar7_5:
# 239 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( DRILBUR )
# 240 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_7, 3
	return

RusturfTunnel_EventScript_RandomizeEncounterVar7_6:
# 242 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( GLIMMET )
# 243 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_7, 4
	return


RusturfTunnel_EventScript_EncounterVar7::
# 248 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 249 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_TEMP_7
# 250 "data/maps/RusturfTunnel/scripts.pory"
	case 0, RusturfTunnel_EventScript_EncounterVar7_3
# 262 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_EncounterVar7_4
# 274 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_EncounterVar7_5
# 286 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_EncounterVar7_6
# 298 "data/maps/RusturfTunnel/scripts.pory"
	case 4, RusturfTunnel_EventScript_EncounterVar7_7
RusturfTunnel_EventScript_EncounterVar7_1:
# 311 "data/maps/RusturfTunnel/scripts.pory"
	release
	return

RusturfTunnel_EventScript_EncounterVar7_3:
# 251 "data/maps/RusturfTunnel/scripts.pory"
	random 5
# 252 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_RESULT
# 253 "data/maps/RusturfTunnel/scripts.pory"
	case 0, RusturfTunnel_EventScript_EncounterVar7_9
# 254 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_EncounterVar7_9
# 256 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_EncounterVar7_10
# 257 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_EncounterVar7_10
# 259 "data/maps/RusturfTunnel/scripts.pory"
	case 4, RusturfTunnel_EventScript_EncounterVar7_11
	goto RusturfTunnel_EventScript_EncounterVar7_1

RusturfTunnel_EventScript_EncounterVar7_4:
# 263 "data/maps/RusturfTunnel/scripts.pory"
	random 5
# 264 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_RESULT
# 265 "data/maps/RusturfTunnel/scripts.pory"
	case 0, RusturfTunnel_EventScript_EncounterVar7_13
# 266 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_EncounterVar7_13
# 268 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_EncounterVar7_14
# 269 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_EncounterVar7_14
# 271 "data/maps/RusturfTunnel/scripts.pory"
	case 4, RusturfTunnel_EventScript_EncounterVar7_15
	goto RusturfTunnel_EventScript_EncounterVar7_1

RusturfTunnel_EventScript_EncounterVar7_5:
# 275 "data/maps/RusturfTunnel/scripts.pory"
	random 5
# 276 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_RESULT
# 277 "data/maps/RusturfTunnel/scripts.pory"
	case 0, RusturfTunnel_EventScript_EncounterVar7_17
# 278 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_EncounterVar7_17
# 280 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_EncounterVar7_18
# 281 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_EncounterVar7_18
# 283 "data/maps/RusturfTunnel/scripts.pory"
	case 4, RusturfTunnel_EventScript_EncounterVar7_19
	goto RusturfTunnel_EventScript_EncounterVar7_1

RusturfTunnel_EventScript_EncounterVar7_6:
# 287 "data/maps/RusturfTunnel/scripts.pory"
	random 5
# 288 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_RESULT
# 289 "data/maps/RusturfTunnel/scripts.pory"
	case 0, RusturfTunnel_EventScript_EncounterVar7_21
# 290 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_EncounterVar7_21
# 292 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_EncounterVar7_22
# 293 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_EncounterVar7_22
# 295 "data/maps/RusturfTunnel/scripts.pory"
	case 4, RusturfTunnel_EventScript_EncounterVar7_23
	goto RusturfTunnel_EventScript_EncounterVar7_1

RusturfTunnel_EventScript_EncounterVar7_7:
# 299 "data/maps/RusturfTunnel/scripts.pory"
	random 5
# 300 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_RESULT
# 301 "data/maps/RusturfTunnel/scripts.pory"
	case 0, RusturfTunnel_EventScript_EncounterVar7_25
# 302 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_EncounterVar7_25
# 304 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_EncounterVar7_26
# 305 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_EncounterVar7_26
# 307 "data/maps/RusturfTunnel/scripts.pory"
	case 4, RusturfTunnel_EventScript_EncounterVar7_27
	goto RusturfTunnel_EventScript_EncounterVar7_1

RusturfTunnel_EventScript_EncounterVar7_9:
# 255 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_WHISMUR, 7, FLAG_TEMP_7
	goto RusturfTunnel_EventScript_EncounterVar7_1

RusturfTunnel_EventScript_EncounterVar7_10:
# 258 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_WHISMUR, 8, FLAG_TEMP_7
	goto RusturfTunnel_EventScript_EncounterVar7_1

RusturfTunnel_EventScript_EncounterVar7_11:
# 260 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_WHISMUR, 9, FLAG_TEMP_7
	goto RusturfTunnel_EventScript_EncounterVar7_1

RusturfTunnel_EventScript_EncounterVar7_13:
# 267 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_ZUBAT, 7, FLAG_TEMP_7
	goto RusturfTunnel_EventScript_EncounterVar7_1

RusturfTunnel_EventScript_EncounterVar7_14:
# 270 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_ZUBAT, 8, FLAG_TEMP_7
	goto RusturfTunnel_EventScript_EncounterVar7_1

RusturfTunnel_EventScript_EncounterVar7_15:
# 272 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_ZUBAT, 9, FLAG_TEMP_7
	goto RusturfTunnel_EventScript_EncounterVar7_1

RusturfTunnel_EventScript_EncounterVar7_17:
# 279 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_GEODUDE_ALOLA, 7, FLAG_TEMP_7
	goto RusturfTunnel_EventScript_EncounterVar7_1

RusturfTunnel_EventScript_EncounterVar7_18:
# 282 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_GEODUDE_ALOLA, 8, FLAG_TEMP_7
	goto RusturfTunnel_EventScript_EncounterVar7_1

RusturfTunnel_EventScript_EncounterVar7_19:
# 284 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_GEODUDE_ALOLA, 9, FLAG_TEMP_7
	goto RusturfTunnel_EventScript_EncounterVar7_1

RusturfTunnel_EventScript_EncounterVar7_21:
# 291 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_DRILBUR, 7, FLAG_TEMP_7
	goto RusturfTunnel_EventScript_EncounterVar7_1

RusturfTunnel_EventScript_EncounterVar7_22:
# 294 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_DRILBUR, 8, FLAG_TEMP_7
	goto RusturfTunnel_EventScript_EncounterVar7_1

RusturfTunnel_EventScript_EncounterVar7_23:
# 296 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_DRILBUR, 9, FLAG_TEMP_7
	goto RusturfTunnel_EventScript_EncounterVar7_1

RusturfTunnel_EventScript_EncounterVar7_25:
# 303 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_GLIMMET, 7, FLAG_TEMP_7
	goto RusturfTunnel_EventScript_EncounterVar7_1

RusturfTunnel_EventScript_EncounterVar7_26:
# 306 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_GLIMMET, 8, FLAG_TEMP_7
	goto RusturfTunnel_EventScript_EncounterVar7_1

RusturfTunnel_EventScript_EncounterVar7_27:
# 308 "data/maps/RusturfTunnel/scripts.pory"
	dowildencounter SPECIES_GLIMMET, 9, FLAG_TEMP_7
	goto RusturfTunnel_EventScript_EncounterVar7_1


# 314 "data/maps/RusturfTunnel/scripts.pory"

# 315 "data/maps/RusturfTunnel/scripts.pory"
.equ LOCALID_WANDAS_BF, 1
# 316 "data/maps/RusturfTunnel/scripts.pory"
.set LOCALID_BRINEY, 5
# 317 "data/maps/RusturfTunnel/scripts.pory"
.set LOCALID_GRUNT, 6
# 318 "data/maps/RusturfTunnel/scripts.pory"
.set LOCALID_PEEKO, 7
# 319 "data/maps/RusturfTunnel/scripts.pory"
.equ LOCALID_WANDA, 10
# 320 "data/maps/RusturfTunnel/scripts.pory"

# 321 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_MapScripts::
# 322 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RusturfTunnel_OnTransition
# 323 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RusturfTunnel_OnFrame
# 324 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, RusturfTunnel_OnResume
# 325 "data/maps/RusturfTunnel/scripts.pory"
	.byte 0
# 326 "data/maps/RusturfTunnel/scripts.pory"

# 327 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnFrame:
# 328 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 4, RusturfTunnel_EventScript_ClearTunnelScene
# 329 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 5, RusturfTunnel_EventScript_ClearTunnelScene
# 330 "data/maps/RusturfTunnel/scripts.pory"
	.2byte 0
# 331 "data/maps/RusturfTunnel/scripts.pory"

# 332 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnTransition:
# 333 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_RandomizeEncounters
# 334 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_RUSTURF_TUNNEL_STATE, 2, RusturfTunnel_EventScript_HideEncounters
# 335 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_RUSTURF_TUNNEL_STATE, 2, RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos
# 336 "data/maps/RusturfTunnel/scripts.pory"
	end
# 337 "data/maps/RusturfTunnel/scripts.pory"

# 338 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos::
# 339 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_PEEKO, 13, 4
# 340 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_GRUNT, 13, 5
# 341 "data/maps/RusturfTunnel/scripts.pory"
	return
# 342 "data/maps/RusturfTunnel/scripts.pory"

# 343 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Wanda::
# 344 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 345 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 346 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_BoyfriendOnOtherSideOfRock, MSGBOX_DEFAULT
# 347 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 348 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 349 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 350 "data/maps/RusturfTunnel/scripts.pory"
	release
# 351 "data/maps/RusturfTunnel/scripts.pory"
	end
# 352 "data/maps/RusturfTunnel/scripts.pory"

# 353 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriend::
# 354 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 355 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 356 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_set FLAG_TEMP_1, RusturfTunnel_EventScript_AlreadySpokenTo
# 357 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_1
# 358 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WhyCantTheyKeepDigging, MSGBOX_DEFAULT
# 359 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 360 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 361 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 362 "data/maps/RusturfTunnel/scripts.pory"
	release
# 363 "data/maps/RusturfTunnel/scripts.pory"
	end
# 364 "data/maps/RusturfTunnel/scripts.pory"

# 365 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AlreadySpokenTo::
# 366 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ToGetToVerdanturf, MSGBOX_DEFAULT
# 367 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 368 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 369 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 370 "data/maps/RusturfTunnel/scripts.pory"
	release
# 371 "data/maps/RusturfTunnel/scripts.pory"
	end
# 372 "data/maps/RusturfTunnel/scripts.pory"

# 373 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene::
# 374 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 375 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_FaceWandasBoyfriend1
# 376 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_FaceWandasBoyfriend2
# 377 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_FaceWandasBoyfriend3
# 378 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_WandasBoyfriendNotice
# 379 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_YouShatteredBoulderTakeHM, MSGBOX_DEFAULT
# 380 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 381 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 382 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_HM_STRENGTH
# 383 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
# 384 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ExplainStrength, MSGBOX_DEFAULT
# 385 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 386 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_BoyfriendApproachWanda1
# 387 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_BoyfriendApproachWanda2
# 388 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_BoyfriendApproachWanda3
# 389 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WandaReunion, MSGBOX_DEFAULT
# 390 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 391 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_WandaAndBoyfriendExit1
# 392 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 393 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 394 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_SetRusturfTunnelOpen
# 395 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 396 "data/maps/RusturfTunnel/scripts.pory"
	end
# 397 "data/maps/RusturfTunnel/scripts.pory"

# 398 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda1::
# 399 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend1
# 400 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda1
# 401 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 402 "data/maps/RusturfTunnel/scripts.pory"
	return
# 403 "data/maps/RusturfTunnel/scripts.pory"

# 404 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda2::
# 405 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 406 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 407 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 408 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDA, Common_Movement_WalkInPlaceFasterDown
# 409 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 410 "data/maps/RusturfTunnel/scripts.pory"
	return
# 411 "data/maps/RusturfTunnel/scripts.pory"

# 412 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda3::
# 413 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 414 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 415 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 416 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDA, Common_Movement_WalkInPlaceFasterDown
# 417 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 418 "data/maps/RusturfTunnel/scripts.pory"
	return
# 419 "data/maps/RusturfTunnel/scripts.pory"

# 420 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend1::
# 421 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, Common_Movement_WalkInPlaceFasterUp
# 422 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 423 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 424 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 425 "data/maps/RusturfTunnel/scripts.pory"
	return
# 426 "data/maps/RusturfTunnel/scripts.pory"

# 427 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend2::
# 428 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendFaceRight
# 429 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 430 "data/maps/RusturfTunnel/scripts.pory"
	return
# 431 "data/maps/RusturfTunnel/scripts.pory"

# 432 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend3::
# 433 "data/maps/RusturfTunnel/scripts.pory"
	return
# 434 "data/maps/RusturfTunnel/scripts.pory"

# 435 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer::
# 436 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 437 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendApproachPlayer
# 438 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 439 "data/maps/RusturfTunnel/scripts.pory"
	return
# 440 "data/maps/RusturfTunnel/scripts.pory"

# 441 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit1::
# 442 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDA, RusturfTunnel_Movement_WandaExit1
# 443 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit1
# 444 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 445 "data/maps/RusturfTunnel/scripts.pory"
	return
# 446 "data/maps/RusturfTunnel/scripts.pory"

# 447 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit::
# 448 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchWandaExit
# 449 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDA, RusturfTunnel_Movement_WandaExit
# 450 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit
# 451 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 452 "data/maps/RusturfTunnel/scripts.pory"
	return
# 453 "data/maps/RusturfTunnel/scripts.pory"

# 454 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendNotice::
# 455 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_PIN
# 456 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, Common_Movement_ExclamationMark
# 457 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 458 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, Common_Movement_Delay48
# 459 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 460 "data/maps/RusturfTunnel/scripts.pory"
	return
# 461 "data/maps/RusturfTunnel/scripts.pory"

# 462 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit1:
# 463 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 464 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 465 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 466 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 467 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 468 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 469 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 470 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 471 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 472 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 473 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 474 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 475 "data/maps/RusturfTunnel/scripts.pory"

# 476 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit:
# 477 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 478 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 479 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 480 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 481 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 482 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 483 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 484 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 485 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 486 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 487 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 488 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 489 "data/maps/RusturfTunnel/scripts.pory"

# 490 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchWandaExit:
# 491 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 492 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 493 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 494 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 495 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 496 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 497 "data/maps/RusturfTunnel/scripts.pory"

# 498 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused1:
# 499 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 500 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 501 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 502 "data/maps/RusturfTunnel/scripts.pory"

# 503 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused2:
# 504 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 505 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 506 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 507 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 508 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 509 "data/maps/RusturfTunnel/scripts.pory"

# 510 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused3:
# 511 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 512 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_down
# 513 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 514 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 515 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 516 "data/maps/RusturfTunnel/scripts.pory"

# 517 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend1:
# 518 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 519 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 520 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 521 "data/maps/RusturfTunnel/scripts.pory"

# 522 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend:
# 523 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 524 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 525 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 526 "data/maps/RusturfTunnel/scripts.pory"

# 527 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendFaceRight:
# 528 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 529 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 530 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 531 "data/maps/RusturfTunnel/scripts.pory"

# 532 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit1:
# 533 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 534 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 535 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 536 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 537 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 538 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 539 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 540 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 541 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 542 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 543 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 544 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 545 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 546 "data/maps/RusturfTunnel/scripts.pory"

# 547 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit:
# 548 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 549 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 550 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 551 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 552 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 553 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 554 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 555 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 556 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 557 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 558 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 559 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 560 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 561 "data/maps/RusturfTunnel/scripts.pory"

# 562 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendApproachPlayer:
# 563 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 564 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 565 "data/maps/RusturfTunnel/scripts.pory"

# 566 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda1:
# 567 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 568 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 569 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_up
# 570 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 571 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 572 "data/maps/RusturfTunnel/scripts.pory"

# 573 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda:
# 574 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 575 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 576 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 577 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 578 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 579 "data/maps/RusturfTunnel/scripts.pory"

# 580 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos1::
# 581 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 1
# 582 "data/maps/RusturfTunnel/scripts.pory"
	end
# 583 "data/maps/RusturfTunnel/scripts.pory"

# 584 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos2::
# 585 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 2
# 586 "data/maps/RusturfTunnel/scripts.pory"
	end
# 587 "data/maps/RusturfTunnel/scripts.pory"

# 588 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos3::
# 589 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 3
# 590 "data/maps/RusturfTunnel/scripts.pory"
	end
# 591 "data/maps/RusturfTunnel/scripts.pory"

# 592 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AquaGruntBackUp::
# 593 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 594 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 595 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ComeAndGetSome, MSGBOX_DEFAULT
# 596 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 597 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_GRUNT, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 598 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PEEKO, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 599 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 600 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_GRUNT
# 601 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_PEEKO
# 602 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 3
# 603 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 604 "data/maps/RusturfTunnel/scripts.pory"
	end
# 605 "data/maps/RusturfTunnel/scripts.pory"

# 606 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntAndPeekoBackUp:
# 607 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 608 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 609 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 610 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 611 "data/maps/RusturfTunnel/scripts.pory"

# 612 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Peeko::
# 613 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 614 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 615 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 616 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 617 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_Peeko, MSGBOX_DEFAULT
# 618 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 619 "data/maps/RusturfTunnel/scripts.pory"
	release
# 620 "data/maps/RusturfTunnel/scripts.pory"
	end
# 621 "data/maps/RusturfTunnel/scripts.pory"

# 622 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt::
# 623 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 624 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 625 "data/maps/RusturfTunnel/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 626 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntIntro, MSGBOX_DEFAULT
# 627 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat
# 628 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntTakePackage, MSGBOX_DEFAULT
# 629 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 630 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 631 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PushPlayerAsideForGrunt
# 632 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_GRUNT, RusturfTunnel_Movement_GruntEscape
# 633 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 634 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_GRUNT
# 635 "data/maps/RusturfTunnel/scripts.pory"
	delay 50
# 636 "data/maps/RusturfTunnel/scripts.pory"
	addobject LOCALID_BRINEY
# 637 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko1
# 638 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 639 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerMoveAsideForBriney
# 640 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko2
# 641 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 642 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_PeekoGladToSeeYouSafe, MSGBOX_DEFAULT
# 643 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_FacePlayer
# 644 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 645 "data/maps/RusturfTunnel/scripts.pory"
	message RusturfTunnel_Text_ThankYouLetsGoHomePeeko
# 646 "data/maps/RusturfTunnel/scripts.pory"
	waitmessage
# 647 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 648 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 649 "data/maps/RusturfTunnel/scripts.pory"
	waitbuttonpress
# 650 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 651 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 652 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBrineyExit
# 653 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyExit
# 654 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PEEKO, RusturfTunnel_Movement_PeekoExit
# 655 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 656 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_BRINEY
# 657 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_PEEKO
# 658 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_DEVON_GOODS_STOLEN
# 659 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 660 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 4
# 661 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 662 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 663 "data/maps/RusturfTunnel/scripts.pory"
	release
# 664 "data/maps/RusturfTunnel/scripts.pory"
	end
# 665 "data/maps/RusturfTunnel/scripts.pory"

# 666 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PushPlayerAsideForGrunt:
# 667 "data/maps/RusturfTunnel/scripts.pory"
	face_down
# 668 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 669 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 670 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 671 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 672 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 673 "data/maps/RusturfTunnel/scripts.pory"

# 674 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerMoveAsideForBriney:
# 675 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 676 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 677 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 678 "data/maps/RusturfTunnel/scripts.pory"

# 679 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntEscape:
# 680 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 681 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 682 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 683 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 684 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 685 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 686 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 687 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 688 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 689 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 690 "data/maps/RusturfTunnel/scripts.pory"

# 691 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko1:
# 692 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 693 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 694 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 695 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 696 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 697 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 698 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 699 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 700 "data/maps/RusturfTunnel/scripts.pory"

# 701 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyExit:
# 702 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 703 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 704 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 705 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 706 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 707 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 708 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 709 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 710 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 711 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 712 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 713 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 714 "data/maps/RusturfTunnel/scripts.pory"

# 715 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBrineyExit:
# 716 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 717 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 718 "data/maps/RusturfTunnel/scripts.pory"
	delay_4
# 719 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 720 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 721 "data/maps/RusturfTunnel/scripts.pory"

# 722 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko2:
# 723 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 724 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 725 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 726 "data/maps/RusturfTunnel/scripts.pory"

# 727 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PeekoExit:
# 728 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 729 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 730 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 731 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 732 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 733 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 734 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 735 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 736 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 737 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 738 "data/maps/RusturfTunnel/scripts.pory"

# 739 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Mike::
# 740 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_single TRAINER_MIKE_2, RusturfTunnel_Text_MikeIntro, RusturfTunnel_Text_MikeDefeat
# 741 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_MikePostBattle, MSGBOX_AUTOCLOSE
# 742 "data/maps/RusturfTunnel/scripts.pory"
	end
# 743 "data/maps/RusturfTunnel/scripts.pory"

# 744 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ComeAndGetSome:
# 745 "data/maps/RusturfTunnel/scripts.pory"
	.string "What, are you coming?\n"
# 746 "data/maps/RusturfTunnel/scripts.pory"
	.string "Come and get some, then!$"
# 747 "data/maps/RusturfTunnel/scripts.pory"

# 748 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_Peeko:
# 749 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO: Pii pihyoh!$"
# 750 "data/maps/RusturfTunnel/scripts.pory"

# 751 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntIntro:
# 752 "data/maps/RusturfTunnel/scripts.pory"
	.string "Grah, keelhaul it all!\p"
# 753 "data/maps/RusturfTunnel/scripts.pory"
	.string "That hostage POKéMON turned out to\n"
# 754 "data/maps/RusturfTunnel/scripts.pory"
	.string "be worthless!\p"
# 755 "data/maps/RusturfTunnel/scripts.pory"
	.string "And to think I made a getaway…\n"
# 756 "data/maps/RusturfTunnel/scripts.pory"
	.string "In this tunnel to nowhere!\p"
# 757 "data/maps/RusturfTunnel/scripts.pory"
	.string "Hey! You!\n"
# 758 "data/maps/RusturfTunnel/scripts.pory"
	.string "So you want to battle me?$"
# 759 "data/maps/RusturfTunnel/scripts.pory"

# 760 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntDefeat:
# 761 "data/maps/RusturfTunnel/scripts.pory"
	.string "Urrrggh! My career in crime comes to\n"
# 762 "data/maps/RusturfTunnel/scripts.pory"
	.string "a dead end!$"
# 763 "data/maps/RusturfTunnel/scripts.pory"

# 764 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntTakePackage:
# 765 "data/maps/RusturfTunnel/scripts.pory"
	.string "This is plain not right…\p"
# 766 "data/maps/RusturfTunnel/scripts.pory"
	.string "The BOSS told me this would be a\n"
# 767 "data/maps/RusturfTunnel/scripts.pory"
	.string "slick-and-easy job to pull.\p"
# 768 "data/maps/RusturfTunnel/scripts.pory"
	.string "All I had to do was steal some package\n"
# 769 "data/maps/RusturfTunnel/scripts.pory"
	.string "from DEVON.\p"
# 770 "data/maps/RusturfTunnel/scripts.pory"
	.string "Tch!\n"
# 771 "data/maps/RusturfTunnel/scripts.pory"
	.string "You want it back that badly, take it!$"
# 772 "data/maps/RusturfTunnel/scripts.pory"

# 773 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_PeekoGladToSeeYouSafe:
# 774 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO!\n"
# 775 "data/maps/RusturfTunnel/scripts.pory"
	.string "Am I glad to see you're safe!$"
# 776 "data/maps/RusturfTunnel/scripts.pory"

# 777 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ThankYouLetsGoHomePeeko:
# 778 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO owes her life to you!\p"
# 779 "data/maps/RusturfTunnel/scripts.pory"
	.string "They call me MR. BRINEY.\n"
# 780 "data/maps/RusturfTunnel/scripts.pory"
	.string "And, you are?\p"
# 781 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\n"
# 782 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\p"
# 783 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ah, so you are {PLAYER}{KUN}!\n"
# 784 "data/maps/RusturfTunnel/scripts.pory"
	.string "I sincerely thank you!\p"
# 785 "data/maps/RusturfTunnel/scripts.pory"
	.string "Now, if there's anything that troubles\n"
# 786 "data/maps/RusturfTunnel/scripts.pory"
	.string "you, don't hesitate to tell me!\p"
# 787 "data/maps/RusturfTunnel/scripts.pory"
	.string "You can usually find me in my cottage\n"
# 788 "data/maps/RusturfTunnel/scripts.pory"
	.string "by the sea near PETALBURG WOODS.\p"
# 789 "data/maps/RusturfTunnel/scripts.pory"
	.string "Come, PEEKO, we should make our way\n"
# 790 "data/maps/RusturfTunnel/scripts.pory"
	.string "home.\p"
# 791 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO: Pihyoh!$"
# 792 "data/maps/RusturfTunnel/scripts.pory"

# 793 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WhyCantTheyKeepDigging:
# 794 "data/maps/RusturfTunnel/scripts.pory"
	.string "… …\p"
# 795 "data/maps/RusturfTunnel/scripts.pory"
	.string "Why can't they keep digging?\n"
# 796 "data/maps/RusturfTunnel/scripts.pory"
	.string "Is the bedrock too hard?\p"
# 797 "data/maps/RusturfTunnel/scripts.pory"
	.string "My beloved awaits me in VERDANTURF\n"
# 798 "data/maps/RusturfTunnel/scripts.pory"
	.string "TOWN just beyond here…\p"
# 799 "data/maps/RusturfTunnel/scripts.pory"
	.string "If RUSTBORO and VERDANTURF were\n"
# 800 "data/maps/RusturfTunnel/scripts.pory"
	.string "joined by this tunnel, I could visit\l"
# 801 "data/maps/RusturfTunnel/scripts.pory"
	.string "her every day…\p"
# 802 "data/maps/RusturfTunnel/scripts.pory"
	.string "But this…\n"
# 803 "data/maps/RusturfTunnel/scripts.pory"
	.string "What am I to do?$"
# 804 "data/maps/RusturfTunnel/scripts.pory"

# 805 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ToGetToVerdanturf:
# 806 "data/maps/RusturfTunnel/scripts.pory"
	.string "To get from RUSTBORO to VERDANTURF,\n"
# 807 "data/maps/RusturfTunnel/scripts.pory"
	.string "you need to go to DEWFORD, then pass\l"
# 808 "data/maps/RusturfTunnel/scripts.pory"
	.string "through SLATEPORT and MAUVILLE…$"
# 809 "data/maps/RusturfTunnel/scripts.pory"

# 810 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_YouShatteredBoulderTakeHM:
# 811 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wow! You shattered that boulder\n"
# 812 "data/maps/RusturfTunnel/scripts.pory"
	.string "blocking the way.\p"
# 813 "data/maps/RusturfTunnel/scripts.pory"
	.string "To show you how much I appreciate it,\n"
# 814 "data/maps/RusturfTunnel/scripts.pory"
	.string "I'd like you to have this HM.$"
# 815 "data/maps/RusturfTunnel/scripts.pory"

# 816 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ExplainStrength:
# 817 "data/maps/RusturfTunnel/scripts.pory"
	.string "That HM contains STRENGTH.\p"
# 818 "data/maps/RusturfTunnel/scripts.pory"
	.string "If a muscular POKéMON were to learn\n"
# 819 "data/maps/RusturfTunnel/scripts.pory"
	.string "that, it would be able to move even\l"
# 820 "data/maps/RusturfTunnel/scripts.pory"
	.string "large boulders.$"
# 821 "data/maps/RusturfTunnel/scripts.pory"

# 822 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WandaReunion:
# 823 "data/maps/RusturfTunnel/scripts.pory"
	.string "WANDA!\n"
# 824 "data/maps/RusturfTunnel/scripts.pory"
	.string "Now I can see you anytime!\p"
# 825 "data/maps/RusturfTunnel/scripts.pory"
	.string "WANDA: That's…wonderful.\p"
# 826 "data/maps/RusturfTunnel/scripts.pory"
	.string "Please, take some rest at my home.$"
# 827 "data/maps/RusturfTunnel/scripts.pory"

# 828 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_BoyfriendOnOtherSideOfRock:
# 829 "data/maps/RusturfTunnel/scripts.pory"
	.string "On the other side of this rock…\n"
# 830 "data/maps/RusturfTunnel/scripts.pory"
	.string "My boyfriend is there.\p"
# 831 "data/maps/RusturfTunnel/scripts.pory"
	.string "He… He's not just digging the tunnel\n"
# 832 "data/maps/RusturfTunnel/scripts.pory"
	.string "to come see me.\p"
# 833 "data/maps/RusturfTunnel/scripts.pory"
	.string "He works his hands raw and rough\n"
# 834 "data/maps/RusturfTunnel/scripts.pory"
	.string "for the benefit of everyone.$"
# 835 "data/maps/RusturfTunnel/scripts.pory"

# 836 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeIntro:
# 837 "data/maps/RusturfTunnel/scripts.pory"
	.string "What do you call a wild man up in the\n"
# 838 "data/maps/RusturfTunnel/scripts.pory"
	.string "mountains? A mountain man, right?\p"
# 839 "data/maps/RusturfTunnel/scripts.pory"
	.string "So why don't they call a POKéMON in\n"
# 840 "data/maps/RusturfTunnel/scripts.pory"
	.string "the mountains a mountain POKéMON?$"
# 841 "data/maps/RusturfTunnel/scripts.pory"

# 842 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeDefeat:
# 843 "data/maps/RusturfTunnel/scripts.pory"
	.string "My POKéMON…\n"
# 844 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ran out of power…$"
# 845 "data/maps/RusturfTunnel/scripts.pory"

# 846 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikePostBattle:
# 847 "data/maps/RusturfTunnel/scripts.pory"
	.string "They halted development here to\n"
# 848 "data/maps/RusturfTunnel/scripts.pory"
	.string "protect POKéMON, right?\l"
# 849 "data/maps/RusturfTunnel/scripts.pory"
	.string "There's a feel-good story!$"
