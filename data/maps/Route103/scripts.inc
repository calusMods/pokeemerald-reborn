Route103_OnResume::
# 2 "data/maps/Route103/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Common_EventScript_RemoveStaticPokemonEncounter
	return


Route103_EventScript_RandomizeEnconters::
# 7 "data/maps/Route103/scripts.pory"
	setflag FLAG_TEMP_5
# 8 "data/maps/Route103/scripts.pory"
	random 10
# 9 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_lt Route103_EventScript_RandomizeEnconters_2
Route103_EventScript_RandomizeEnconters_1:
# 14 "data/maps/Route103/scripts.pory"
	setflag FLAG_TEMP_6
# 15 "data/maps/Route103/scripts.pory"
	random 10
# 16 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_lt Route103_EventScript_RandomizeEnconters_5
Route103_EventScript_RandomizeEnconters_4:
# 21 "data/maps/Route103/scripts.pory"
	setflag FLAG_TEMP_7
# 22 "data/maps/Route103/scripts.pory"
	random 10
# 23 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_lt Route103_EventScript_RandomizeEnconters_7
	return

Route103_EventScript_RandomizeEnconters_2:
# 10 "data/maps/Route103/scripts.pory"
	call Route103_EventScript_RandomizeEncounterVar5
# 11 "data/maps/Route103/scripts.pory"
	clearflag FLAG_TEMP_5
	goto Route103_EventScript_RandomizeEnconters_1

Route103_EventScript_RandomizeEnconters_5:
# 17 "data/maps/Route103/scripts.pory"
	call Route103_EventScript_RandomizeEncounterVar6
# 18 "data/maps/Route103/scripts.pory"
	clearflag FLAG_TEMP_6
	goto Route103_EventScript_RandomizeEnconters_4

Route103_EventScript_RandomizeEnconters_7:
# 24 "data/maps/Route103/scripts.pory"
	call Route103_EventScript_RandomizeEncounterVar7
# 25 "data/maps/Route103/scripts.pory"
	clearflag FLAG_TEMP_7
	return


Route103_EventScript_RandomizeEncounterVar5::
# 30 "data/maps/Route103/scripts.pory"
	random 5
# 31 "data/maps/Route103/scripts.pory"
	switch VAR_RESULT
# 32 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_RandomizeEncounterVar5_2
# 33 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_RandomizeEncounterVar5_2
# 36 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_RandomizeEncounterVar5_3
# 37 "data/maps/Route103/scripts.pory"
	case 3, Route103_EventScript_RandomizeEncounterVar5_3
# 40 "data/maps/Route103/scripts.pory"
	case 4, Route103_EventScript_RandomizeEncounterVar5_4
	return

Route103_EventScript_RandomizeEncounterVar5_2:
# 34 "data/maps/Route103/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( POOCHYENA )
# 35 "data/maps/Route103/scripts.pory"
	setvar VAR_TEMP_5, 0
	return

Route103_EventScript_RandomizeEncounterVar5_3:
# 38 "data/maps/Route103/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( BIDOOF )
# 39 "data/maps/Route103/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

Route103_EventScript_RandomizeEncounterVar5_4:
# 41 "data/maps/Route103/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( ROOKIDEE )
# 42 "data/maps/Route103/scripts.pory"
	setvar VAR_TEMP_5, 2
	return


Route103_EventScript_EncounterVar5::
# 47 "data/maps/Route103/scripts.pory"
	lock
# 48 "data/maps/Route103/scripts.pory"
	switch VAR_TEMP_5
# 49 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_EncounterVar5_3
# 60 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_EncounterVar5_4
# 71 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_EncounterVar5_5
Route103_EventScript_EncounterVar5_1:
# 83 "data/maps/Route103/scripts.pory"
	release
	return

Route103_EventScript_EncounterVar5_3:
# 50 "data/maps/Route103/scripts.pory"
	random 4
# 51 "data/maps/Route103/scripts.pory"
	switch VAR_RESULT
# 52 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_EncounterVar5_7
# 54 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_EncounterVar5_8
# 55 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_EncounterVar5_8
# 57 "data/maps/Route103/scripts.pory"
	case 3, Route103_EventScript_EncounterVar5_9
	goto Route103_EventScript_EncounterVar5_1

Route103_EventScript_EncounterVar5_4:
# 61 "data/maps/Route103/scripts.pory"
	random 4
# 62 "data/maps/Route103/scripts.pory"
	switch VAR_RESULT
# 63 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_EncounterVar5_11
# 65 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_EncounterVar5_12
# 66 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_EncounterVar5_12
# 68 "data/maps/Route103/scripts.pory"
	case 3, Route103_EventScript_EncounterVar5_13
	goto Route103_EventScript_EncounterVar5_1

Route103_EventScript_EncounterVar5_5:
# 72 "data/maps/Route103/scripts.pory"
	random 4
# 73 "data/maps/Route103/scripts.pory"
	switch VAR_RESULT
# 74 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_EncounterVar5_15
# 76 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_EncounterVar5_16
# 77 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_EncounterVar5_16
# 79 "data/maps/Route103/scripts.pory"
	case 3, Route103_EventScript_EncounterVar5_17
	goto Route103_EventScript_EncounterVar5_1

Route103_EventScript_EncounterVar5_7:
# 53 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 2, FLAG_TEMP_5
	goto Route103_EventScript_EncounterVar5_1

Route103_EventScript_EncounterVar5_8:
# 56 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 3, FLAG_TEMP_5
	goto Route103_EventScript_EncounterVar5_1

Route103_EventScript_EncounterVar5_9:
# 58 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 4, FLAG_TEMP_5
	goto Route103_EventScript_EncounterVar5_1

Route103_EventScript_EncounterVar5_11:
# 64 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_BIDOOF, 2, FLAG_TEMP_5
	goto Route103_EventScript_EncounterVar5_1

Route103_EventScript_EncounterVar5_12:
# 67 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_BIDOOF, 3, FLAG_TEMP_5
	goto Route103_EventScript_EncounterVar5_1

Route103_EventScript_EncounterVar5_13:
# 69 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_BIDOOF, 4, FLAG_TEMP_5
	goto Route103_EventScript_EncounterVar5_1

Route103_EventScript_EncounterVar5_15:
# 75 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 2, FLAG_TEMP_5
	goto Route103_EventScript_EncounterVar5_1

Route103_EventScript_EncounterVar5_16:
# 78 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 3, FLAG_TEMP_5
	goto Route103_EventScript_EncounterVar5_1

Route103_EventScript_EncounterVar5_17:
# 80 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 4, FLAG_TEMP_5
	goto Route103_EventScript_EncounterVar5_1


Route103_EventScript_RandomizeEncounterVar6::
# 87 "data/maps/Route103/scripts.pory"
	random 6
# 88 "data/maps/Route103/scripts.pory"
	switch VAR_RESULT
# 89 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_RandomizeEncounterVar6_2
# 90 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_RandomizeEncounterVar6_2
# 93 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_RandomizeEncounterVar6_3
# 94 "data/maps/Route103/scripts.pory"
	case 3, Route103_EventScript_RandomizeEncounterVar6_3
# 97 "data/maps/Route103/scripts.pory"
	case 4, Route103_EventScript_RandomizeEncounterVar6_4
# 100 "data/maps/Route103/scripts.pory"
	case 5, Route103_EventScript_RandomizeEncounterVar6_5
	return

Route103_EventScript_RandomizeEncounterVar6_2:
# 91 "data/maps/Route103/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( POOCHYENA )
# 92 "data/maps/Route103/scripts.pory"
	setvar VAR_TEMP_6, 0
	return

Route103_EventScript_RandomizeEncounterVar6_3:
# 95 "data/maps/Route103/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( ROOKIDEE )
# 96 "data/maps/Route103/scripts.pory"
	setvar VAR_TEMP_6, 1
	return

Route103_EventScript_RandomizeEncounterVar6_4:
# 98 "data/maps/Route103/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( ZIGZAGOON )
# 99 "data/maps/Route103/scripts.pory"
	setvar VAR_TEMP_6, 2
	return

Route103_EventScript_RandomizeEncounterVar6_5:
# 101 "data/maps/Route103/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( BLIPBUG )
# 102 "data/maps/Route103/scripts.pory"
	setvar VAR_TEMP_6, 3
	return


Route103_EventScript_EncounterVar6::
# 107 "data/maps/Route103/scripts.pory"
	lock
# 108 "data/maps/Route103/scripts.pory"
	switch VAR_TEMP_6
# 109 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_EncounterVar6_3
# 120 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_EncounterVar6_4
# 131 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_EncounterVar6_5
# 142 "data/maps/Route103/scripts.pory"
	case 3, Route103_EventScript_EncounterVar6_6
Route103_EventScript_EncounterVar6_1:
# 154 "data/maps/Route103/scripts.pory"
	release
	return

Route103_EventScript_EncounterVar6_3:
# 110 "data/maps/Route103/scripts.pory"
	random 4
# 111 "data/maps/Route103/scripts.pory"
	switch VAR_RESULT
# 112 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_EncounterVar6_8
# 114 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_EncounterVar6_9
# 115 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_EncounterVar6_9
# 117 "data/maps/Route103/scripts.pory"
	case 3, Route103_EventScript_EncounterVar6_10
	goto Route103_EventScript_EncounterVar6_1

Route103_EventScript_EncounterVar6_4:
# 121 "data/maps/Route103/scripts.pory"
	random 4
# 122 "data/maps/Route103/scripts.pory"
	switch VAR_RESULT
# 123 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_EncounterVar6_12
# 125 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_EncounterVar6_13
# 126 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_EncounterVar6_13
# 128 "data/maps/Route103/scripts.pory"
	case 3, Route103_EventScript_EncounterVar6_14
	goto Route103_EventScript_EncounterVar6_1

Route103_EventScript_EncounterVar6_5:
# 132 "data/maps/Route103/scripts.pory"
	random 4
# 133 "data/maps/Route103/scripts.pory"
	switch VAR_RESULT
# 134 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_EncounterVar6_16
# 136 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_EncounterVar6_17
# 137 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_EncounterVar6_17
# 139 "data/maps/Route103/scripts.pory"
	case 3, Route103_EventScript_EncounterVar6_18
	goto Route103_EventScript_EncounterVar6_1

Route103_EventScript_EncounterVar6_6:
# 143 "data/maps/Route103/scripts.pory"
	random 4
# 144 "data/maps/Route103/scripts.pory"
	switch VAR_RESULT
# 145 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_EncounterVar6_20
# 147 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_EncounterVar6_21
# 148 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_EncounterVar6_21
# 150 "data/maps/Route103/scripts.pory"
	case 3, Route103_EventScript_EncounterVar6_22
	goto Route103_EventScript_EncounterVar6_1

Route103_EventScript_EncounterVar6_8:
# 113 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 2, FLAG_TEMP_6
	goto Route103_EventScript_EncounterVar6_1

Route103_EventScript_EncounterVar6_9:
# 116 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 3, FLAG_TEMP_6
	goto Route103_EventScript_EncounterVar6_1

Route103_EventScript_EncounterVar6_10:
# 118 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 4, FLAG_TEMP_6
	goto Route103_EventScript_EncounterVar6_1

Route103_EventScript_EncounterVar6_12:
# 124 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 2, FLAG_TEMP_6
	goto Route103_EventScript_EncounterVar6_1

Route103_EventScript_EncounterVar6_13:
# 127 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 3, FLAG_TEMP_6
	goto Route103_EventScript_EncounterVar6_1

Route103_EventScript_EncounterVar6_14:
# 129 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 4, FLAG_TEMP_6
	goto Route103_EventScript_EncounterVar6_1

Route103_EventScript_EncounterVar6_16:
# 135 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 2, FLAG_TEMP_6
	goto Route103_EventScript_EncounterVar6_1

Route103_EventScript_EncounterVar6_17:
# 138 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 3, FLAG_TEMP_6
	goto Route103_EventScript_EncounterVar6_1

Route103_EventScript_EncounterVar6_18:
# 140 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 4, FLAG_TEMP_6
	goto Route103_EventScript_EncounterVar6_1

Route103_EventScript_EncounterVar6_20:
# 146 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_BLIPBUG, 2, FLAG_TEMP_6
	goto Route103_EventScript_EncounterVar6_1

Route103_EventScript_EncounterVar6_21:
# 149 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_BLIPBUG, 3, FLAG_TEMP_6
	goto Route103_EventScript_EncounterVar6_1

Route103_EventScript_EncounterVar6_22:
# 151 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_BLIPBUG, 4, FLAG_TEMP_6
	goto Route103_EventScript_EncounterVar6_1


Route103_EventScript_RandomizeEncounterVar7::
# 158 "data/maps/Route103/scripts.pory"
	random 4
# 159 "data/maps/Route103/scripts.pory"
	switch VAR_RESULT
# 160 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_RandomizeEncounterVar7_2
# 161 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_RandomizeEncounterVar7_2
# 164 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_RandomizeEncounterVar7_3
# 167 "data/maps/Route103/scripts.pory"
	case 3, Route103_EventScript_RandomizeEncounterVar7_4
	return

Route103_EventScript_RandomizeEncounterVar7_2:
# 162 "data/maps/Route103/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( BIDOOF )
# 163 "data/maps/Route103/scripts.pory"
	setvar VAR_TEMP_7, 0
	return

Route103_EventScript_RandomizeEncounterVar7_3:
# 165 "data/maps/Route103/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( ROOKIDEE )
# 166 "data/maps/Route103/scripts.pory"
	setvar VAR_TEMP_7, 1
	return

Route103_EventScript_RandomizeEncounterVar7_4:
# 168 "data/maps/Route103/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( BLIPBUG )
# 169 "data/maps/Route103/scripts.pory"
	setvar VAR_TEMP_7, 2
	return


Route103_EventScript_EncounterVar7::
# 174 "data/maps/Route103/scripts.pory"
	lock
# 175 "data/maps/Route103/scripts.pory"
	switch VAR_TEMP_7
# 176 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_EncounterVar7_3
# 187 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_EncounterVar7_4
# 198 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_EncounterVar7_5
Route103_EventScript_EncounterVar7_1:
# 210 "data/maps/Route103/scripts.pory"
	release
	return

Route103_EventScript_EncounterVar7_3:
# 177 "data/maps/Route103/scripts.pory"
	random 4
# 178 "data/maps/Route103/scripts.pory"
	switch VAR_RESULT
# 179 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_EncounterVar7_7
# 181 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_EncounterVar7_8
# 182 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_EncounterVar7_8
# 184 "data/maps/Route103/scripts.pory"
	case 3, Route103_EventScript_EncounterVar7_9
	goto Route103_EventScript_EncounterVar7_1

Route103_EventScript_EncounterVar7_4:
# 188 "data/maps/Route103/scripts.pory"
	random 4
# 189 "data/maps/Route103/scripts.pory"
	switch VAR_RESULT
# 190 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_EncounterVar7_11
# 192 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_EncounterVar7_12
# 193 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_EncounterVar7_12
# 195 "data/maps/Route103/scripts.pory"
	case 3, Route103_EventScript_EncounterVar7_13
	goto Route103_EventScript_EncounterVar7_1

Route103_EventScript_EncounterVar7_5:
# 199 "data/maps/Route103/scripts.pory"
	random 4
# 200 "data/maps/Route103/scripts.pory"
	switch VAR_RESULT
# 201 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_EncounterVar7_15
# 203 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_EncounterVar7_16
# 204 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_EncounterVar7_16
# 206 "data/maps/Route103/scripts.pory"
	case 3, Route103_EventScript_EncounterVar7_17
	goto Route103_EventScript_EncounterVar7_1

Route103_EventScript_EncounterVar7_7:
# 180 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_BIDOOF, 2, FLAG_TEMP_7
	goto Route103_EventScript_EncounterVar7_1

Route103_EventScript_EncounterVar7_8:
# 183 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_BIDOOF, 3, FLAG_TEMP_7
	goto Route103_EventScript_EncounterVar7_1

Route103_EventScript_EncounterVar7_9:
# 185 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_BIDOOF, 4, FLAG_TEMP_7
	goto Route103_EventScript_EncounterVar7_1

Route103_EventScript_EncounterVar7_11:
# 191 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 2, FLAG_TEMP_7
	goto Route103_EventScript_EncounterVar7_1

Route103_EventScript_EncounterVar7_12:
# 194 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 3, FLAG_TEMP_7
	goto Route103_EventScript_EncounterVar7_1

Route103_EventScript_EncounterVar7_13:
# 196 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 4, FLAG_TEMP_7
	goto Route103_EventScript_EncounterVar7_1

Route103_EventScript_EncounterVar7_15:
# 202 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_BLIPBUG, 2, FLAG_TEMP_7
	goto Route103_EventScript_EncounterVar7_1

Route103_EventScript_EncounterVar7_16:
# 205 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_BLIPBUG, 3, FLAG_TEMP_7
	goto Route103_EventScript_EncounterVar7_1

Route103_EventScript_EncounterVar7_17:
# 207 "data/maps/Route103/scripts.pory"
	dowildencounter SPECIES_BLIPBUG, 4, FLAG_TEMP_7
	goto Route103_EventScript_EncounterVar7_1


Route103_EventScript_HideEncounters::
# 214 "data/maps/Route103/scripts.pory"
	setflag FLAG_TEMP_7
	return


# 217 "data/maps/Route103/scripts.pory"

# 218 "data/maps/Route103/scripts.pory"
.set LOCALID_RIVAL, 2
# 219 "data/maps/Route103/scripts.pory"

# 220 "data/maps/Route103/scripts.pory"
Route103_MapScripts::
# 221 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
# 222 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
# 223 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route103_OnResume
# 224 "data/maps/Route103/scripts.pory"
	.byte 0
# 225 "data/maps/Route103/scripts.pory"

# 226 "data/maps/Route103/scripts.pory"
Route103_OnTransition:
# 227 "data/maps/Route103/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 228 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 229 "data/maps/Route103/scripts.pory"
	call Route103_EventScript_RandomizeEnconters
# 230 "data/maps/Route103/scripts.pory"
	call_if_unset FLAG_DEFEATED_RIVAL_ROUTE103 Route103_EventScript_HideEncounters
# 231 "data/maps/Route103/scripts.pory"
	end
# 232 "data/maps/Route103/scripts.pory"

# 233 "data/maps/Route103/scripts.pory"
Route103_OnLoad:
# 234 "data/maps/Route103/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
# 235 "data/maps/Route103/scripts.pory"
	end
# 236 "data/maps/Route103/scripts.pory"

# 237 "data/maps/Route103/scripts.pory"
Route103_EventScript_OpenAlteringCave::
# 238 "data/maps/Route103/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
# 239 "data/maps/Route103/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
# 240 "data/maps/Route103/scripts.pory"
	return
# 241 "data/maps/Route103/scripts.pory"

# 242 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rival::
# 243 "data/maps/Route103/scripts.pory"
	lockall
# 244 "data/maps/Route103/scripts.pory"
	checkplayergender
# 245 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route103_EventScript_RivalMay
# 246 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route103_EventScript_RivalBrendan
# 247 "data/maps/Route103/scripts.pory"
	end
# 248 "data/maps/Route103/scripts.pory"

# 249 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalMay::
# 250 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
# 251 "data/maps/Route103/scripts.pory"
	closemessage
# 252 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 253 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 254 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 255 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 256 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 257 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 258 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 259 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
# 260 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 261 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartMayBattleTreecko
# 262 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartMayBattleTorchic
# 263 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartMayBattleMudkip
# 264 "data/maps/Route103/scripts.pory"
	end
# 265 "data/maps/Route103/scripts.pory"

# 266 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalBrendan::
# 267 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanRoute103Pokemon, MSGBOX_DEFAULT
# 268 "data/maps/Route103/scripts.pory"
	closemessage
# 269 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 270 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 271 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 272 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 273 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 274 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 275 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 276 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 277 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 278 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartBrendanBattleTreecko
# 279 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartBrendanBattleTorchic
# 280 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartBrendanBattleMudkip
# 281 "data/maps/Route103/scripts.pory"
	end
# 282 "data/maps/Route103/scripts.pory"

# 283 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTreecko::
# 284 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
# 285 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 286 "data/maps/Route103/scripts.pory"
	end
# 287 "data/maps/Route103/scripts.pory"

# 288 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTorchic::
# 289 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayDefeated
# 290 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 291 "data/maps/Route103/scripts.pory"
	end
# 292 "data/maps/Route103/scripts.pory"

# 293 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleMudkip::
# 294 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayDefeated
# 295 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 296 "data/maps/Route103/scripts.pory"
	end
# 297 "data/maps/Route103/scripts.pory"

# 298 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTreecko::
# 299 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanDefeated
# 300 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 301 "data/maps/Route103/scripts.pory"
	end
# 302 "data/maps/Route103/scripts.pory"

# 303 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTorchic::
# 304 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_BrendanDefeated
# 305 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 306 "data/maps/Route103/scripts.pory"
	end
# 307 "data/maps/Route103/scripts.pory"

# 308 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleMudkip::
# 309 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_BrendanDefeated
# 310 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 311 "data/maps/Route103/scripts.pory"
	end
# 312 "data/maps/Route103/scripts.pory"

# 313 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterMayBattle::
# 314 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
# 315 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 316 "data/maps/Route103/scripts.pory"
	end
# 317 "data/maps/Route103/scripts.pory"

# 318 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterBrendanBattle::
# 319 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
# 320 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 321 "data/maps/Route103/scripts.pory"
	end
# 322 "data/maps/Route103/scripts.pory"

# 323 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit::
# 324 "data/maps/Route103/scripts.pory"
	closemessage
# 325 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 326 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
# 327 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_RivalExitFacingNorth
# 328 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
# 329 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest
# 330 "data/maps/Route103/scripts.pory"
	end
# 331 "data/maps/Route103/scripts.pory"

# 332 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth::
# 333 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 334 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth1
# 335 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 336 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 337 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth2
# 338 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 339 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 340 "data/maps/Route103/scripts.pory"
	end
# 341 "data/maps/Route103/scripts.pory"

# 342 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingEastOrWest::
# 343 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 344 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 345 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 346 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 347 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 348 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 349 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 350 "data/maps/Route103/scripts.pory"
	end
# 351 "data/maps/Route103/scripts.pory"

# 352 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingSouth::
# 353 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 354 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 355 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 356 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 357 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 358 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 359 "data/maps/Route103/scripts.pory"
	end
# 360 "data/maps/Route103/scripts.pory"

# 361 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalEnd::
# 362 "data/maps/Route103/scripts.pory"
	removeobject LOCALID_RIVAL
# 363 "data/maps/Route103/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 364 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 365 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 366 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 367 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 368 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 369 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 370 "data/maps/Route103/scripts.pory"
	releaseall
# 371 "data/maps/Route103/scripts.pory"
	end
# 372 "data/maps/Route103/scripts.pory"

# 373 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth1:
# 374 "data/maps/Route103/scripts.pory"
	walk_left
# 375 "data/maps/Route103/scripts.pory"
	walk_down
# 376 "data/maps/Route103/scripts.pory"
	step_end
# 377 "data/maps/Route103/scripts.pory"

# 378 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth2:
# 379 "data/maps/Route103/scripts.pory"
	jump_2_down
# 380 "data/maps/Route103/scripts.pory"
	delay_16
# 381 "data/maps/Route103/scripts.pory"
	walk_down
# 382 "data/maps/Route103/scripts.pory"
	walk_down
# 383 "data/maps/Route103/scripts.pory"
	walk_down
# 384 "data/maps/Route103/scripts.pory"
	walk_down
# 385 "data/maps/Route103/scripts.pory"
	step_end
# 386 "data/maps/Route103/scripts.pory"

# 387 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 388 "data/maps/Route103/scripts.pory"
	delay_16
# 389 "data/maps/Route103/scripts.pory"
	delay_4
# 390 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 391 "data/maps/Route103/scripts.pory"
	delay_16
# 392 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 393 "data/maps/Route103/scripts.pory"
	step_end
# 394 "data/maps/Route103/scripts.pory"

# 395 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit1:
# 396 "data/maps/Route103/scripts.pory"
	walk_down
# 397 "data/maps/Route103/scripts.pory"
	step_end
# 398 "data/maps/Route103/scripts.pory"

# 399 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2:
# 400 "data/maps/Route103/scripts.pory"
	jump_2_down
# 401 "data/maps/Route103/scripts.pory"
	delay_16
# 402 "data/maps/Route103/scripts.pory"
	walk_down
# 403 "data/maps/Route103/scripts.pory"
	walk_down
# 404 "data/maps/Route103/scripts.pory"
	walk_down
# 405 "data/maps/Route103/scripts.pory"
	step_end
# 406 "data/maps/Route103/scripts.pory"

# 407 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 408 "data/maps/Route103/scripts.pory"
	delay_16
# 409 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 410 "data/maps/Route103/scripts.pory"
	step_end
# 411 "data/maps/Route103/scripts.pory"

# 412 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 413 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 414 "data/maps/Route103/scripts.pory"
	end
# 415 "data/maps/Route103/scripts.pory"

# 416 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 417 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 418 "data/maps/Route103/scripts.pory"
	end
# 419 "data/maps/Route103/scripts.pory"

# 420 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 421 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 422 "data/maps/Route103/scripts.pory"
	end
# 423 "data/maps/Route103/scripts.pory"

# 424 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 425 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 426 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 427 "data/maps/Route103/scripts.pory"
	end
# 428 "data/maps/Route103/scripts.pory"

# 429 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 430 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 431 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 432 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 433 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 434 "data/maps/Route103/scripts.pory"
	end
# 435 "data/maps/Route103/scripts.pory"

# 436 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 437 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 438 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 439 "data/maps/Route103/scripts.pory"
	release
# 440 "data/maps/Route103/scripts.pory"
	end
# 441 "data/maps/Route103/scripts.pory"

# 442 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 443 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 444 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 445 "data/maps/Route103/scripts.pory"
	end
# 446 "data/maps/Route103/scripts.pory"

# 447 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 448 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 449 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 450 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 451 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 452 "data/maps/Route103/scripts.pory"
	end
# 453 "data/maps/Route103/scripts.pory"

# 454 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 455 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 456 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 457 "data/maps/Route103/scripts.pory"
	release
# 458 "data/maps/Route103/scripts.pory"
	end
# 459 "data/maps/Route103/scripts.pory"

# 460 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 461 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 462 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 463 "data/maps/Route103/scripts.pory"
	end
# 464 "data/maps/Route103/scripts.pory"

# 465 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 466 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 467 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 468 "data/maps/Route103/scripts.pory"
	end
# 469 "data/maps/Route103/scripts.pory"

# 470 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 471 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 472 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 473 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 474 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 475 "data/maps/Route103/scripts.pory"
	release
# 476 "data/maps/Route103/scripts.pory"
	end
# 477 "data/maps/Route103/scripts.pory"

# 478 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 479 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 480 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 481 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 482 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 483 "data/maps/Route103/scripts.pory"
	release
# 484 "data/maps/Route103/scripts.pory"
	end
# 485 "data/maps/Route103/scripts.pory"

# 486 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 487 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 488 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 489 "data/maps/Route103/scripts.pory"
	end
# 490 "data/maps/Route103/scripts.pory"

# 491 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 492 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 493 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 494 "data/maps/Route103/scripts.pory"
	end
# 495 "data/maps/Route103/scripts.pory"

# 496 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 497 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 498 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 499 "data/maps/Route103/scripts.pory"
	end
# 500 "data/maps/Route103/scripts.pory"

# 501 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 502 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 503 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 504 "data/maps/Route103/scripts.pory"
	end
# 505 "data/maps/Route103/scripts.pory"

# 506 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 507 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 508 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 509 "data/maps/Route103/scripts.pory"
	end
# 510 "data/maps/Route103/scripts.pory"

# 511 "data/maps/Route103/scripts.pory"
Route103_Text_MayRoute103Pokemon:
# 512 "data/maps/Route103/scripts.pory"
	.string "MAY: Let's see… The POKéMON found\n"
# 513 "data/maps/Route103/scripts.pory"
	.string "on ROUTE 103 include…$"
# 514 "data/maps/Route103/scripts.pory"

# 515 "data/maps/Route103/scripts.pory"
Route103_Text_MayLetsBattle:
# 516 "data/maps/Route103/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
# 517 "data/maps/Route103/scripts.pory"
	.string "…Oh, I see, my dad gave you\n"
# 518 "data/maps/Route103/scripts.pory"
	.string "a POKéMON as a gift.\p"
# 519 "data/maps/Route103/scripts.pory"
	.string "Since we're here, let's have a quick\n"
# 520 "data/maps/Route103/scripts.pory"
	.string "battle!\p"
# 521 "data/maps/Route103/scripts.pory"
	.string "I'll give you a taste of what being\n"
# 522 "data/maps/Route103/scripts.pory"
	.string "a TRAINER is like.$"
# 523 "data/maps/Route103/scripts.pory"

# 524 "data/maps/Route103/scripts.pory"
Route103_Text_MayDefeated:
# 525 "data/maps/Route103/scripts.pory"
	.string "Wow! That's great!\n"
# 526 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}{KUN}, you're pretty good!$"
# 527 "data/maps/Route103/scripts.pory"

# 528 "data/maps/Route103/scripts.pory"
Route103_Text_MayTimeToHeadBack:
# 529 "data/maps/Route103/scripts.pory"
	.string "MAY: I think I know why my dad has\n"
# 530 "data/maps/Route103/scripts.pory"
	.string "an eye out for you now.\p"
# 531 "data/maps/Route103/scripts.pory"
	.string "I mean, you just got that POKéMON,\n"
# 532 "data/maps/Route103/scripts.pory"
	.string "but it already likes you.\p"
# 533 "data/maps/Route103/scripts.pory"
	.string "You might be able to befriend any\n"
# 534 "data/maps/Route103/scripts.pory"
	.string "kind of POKéMON easily.\p"
# 535 "data/maps/Route103/scripts.pory"
	.string "Well, it's time to head back to\n"
# 536 "data/maps/Route103/scripts.pory"
	.string "the LAB.$"
# 537 "data/maps/Route103/scripts.pory"

# 538 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanRoute103Pokemon:
# 539 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: Okay, so it's this one and\n"
# 540 "data/maps/Route103/scripts.pory"
	.string "that one that live on ROUTE 103…$"
# 541 "data/maps/Route103/scripts.pory"

# 542 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanLetsBattle:
# 543 "data/maps/Route103/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 544 "data/maps/Route103/scripts.pory"
	.string "…Oh, yeah, Dad gave you a POKéMON.\p"
# 545 "data/maps/Route103/scripts.pory"
	.string "Since we're here, how about a little\n"
# 546 "data/maps/Route103/scripts.pory"
	.string "battle?\p"
# 547 "data/maps/Route103/scripts.pory"
	.string "I'll teach you what being a TRAINER's\n"
# 548 "data/maps/Route103/scripts.pory"
	.string "about!$"
# 549 "data/maps/Route103/scripts.pory"

# 550 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanDefeated:
# 551 "data/maps/Route103/scripts.pory"
	.string "Huh, {PLAYER}, you're not too shabby.$"
# 552 "data/maps/Route103/scripts.pory"

# 553 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanTimeToHeadBack:
# 554 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: I think I get it.\n"
# 555 "data/maps/Route103/scripts.pory"
	.string "I think I know why my dad has his eye\l"
# 556 "data/maps/Route103/scripts.pory"
	.string "out for you now.\p"
# 557 "data/maps/Route103/scripts.pory"
	.string "Look, your POKéMON already likes you,\n"
# 558 "data/maps/Route103/scripts.pory"
	.string "even though you just got it.\p"
# 559 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}, I get the feeling that you\n"
# 560 "data/maps/Route103/scripts.pory"
	.string "could befriend any POKéMON with ease.\p"
# 561 "data/maps/Route103/scripts.pory"
	.string "We should head back to the LAB.$"
# 562 "data/maps/Route103/scripts.pory"

# 563 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 564 "data/maps/Route103/scripts.pory"
	.string "My POKéMON is staggeringly tired…\n"
# 565 "data/maps/Route103/scripts.pory"
	.string "I should have brought a POTION…$"
# 566 "data/maps/Route103/scripts.pory"

# 567 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale:
# 568 "data/maps/Route103/scripts.pory"
	.string "If you cross the sea from here,\n"
# 569 "data/maps/Route103/scripts.pory"
	.string "it'll be a shortcut to OLDALE TOWN.\p"
# 570 "data/maps/Route103/scripts.pory"
	.string "Fufufu, that's useful, isn't it?$"
# 571 "data/maps/Route103/scripts.pory"

# 572 "data/maps/Route103/scripts.pory"
Route103_Text_RouteSign:
# 573 "data/maps/Route103/scripts.pory"
	.string "ROUTE 103\n"
# 574 "data/maps/Route103/scripts.pory"
	.string "{DOWN_ARROW} OLDALE TOWN$"
