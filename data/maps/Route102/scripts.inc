Route102_OnTransition::
# 2 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_RandomizeEnconters
# 3 "data/maps/Route102/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 1, Route102_EventScript_HideEncounters
	return


Route102_OnResume::
# 7 "data/maps/Route102/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Common_EventScript_RemoveStaticPokemonEncounter
	return


Route102_EventScript_HideEncounters::
# 11 "data/maps/Route102/scripts.pory"
	setflag FLAG_TEMP_A
	return


Route102_EventScript_RandomizeEnconters::
# 16 "data/maps/Route102/scripts.pory"
	setflag FLAG_TEMP_5
# 17 "data/maps/Route102/scripts.pory"
	random 10
# 18 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_lt Route102_EventScript_RandomizeEnconters_2
Route102_EventScript_RandomizeEnconters_1:
# 23 "data/maps/Route102/scripts.pory"
	setflag FLAG_TEMP_6
# 24 "data/maps/Route102/scripts.pory"
	random 10
# 25 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_lt Route102_EventScript_RandomizeEnconters_5
Route102_EventScript_RandomizeEnconters_4:
# 30 "data/maps/Route102/scripts.pory"
	setflag FLAG_TEMP_7
# 31 "data/maps/Route102/scripts.pory"
	random 10
# 32 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_lt Route102_EventScript_RandomizeEnconters_8
Route102_EventScript_RandomizeEnconters_7:
# 37 "data/maps/Route102/scripts.pory"
	setflag FLAG_TEMP_8
# 38 "data/maps/Route102/scripts.pory"
	random 10
# 39 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_lt Route102_EventScript_RandomizeEnconters_11
Route102_EventScript_RandomizeEnconters_10:
# 44 "data/maps/Route102/scripts.pory"
	setflag FLAG_TEMP_9
# 45 "data/maps/Route102/scripts.pory"
	random 10
# 46 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_lt Route102_EventScript_RandomizeEnconters_14
Route102_EventScript_RandomizeEnconters_13:
# 51 "data/maps/Route102/scripts.pory"
	setflag FLAG_TEMP_A
# 52 "data/maps/Route102/scripts.pory"
	random 10
# 53 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_lt Route102_EventScript_RandomizeEnconters_17
Route102_EventScript_RandomizeEnconters_16:
# 58 "data/maps/Route102/scripts.pory"
	setflag FLAG_TEMP_B
# 59 "data/maps/Route102/scripts.pory"
	random 10
# 60 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_lt Route102_EventScript_RandomizeEnconters_19
	return

Route102_EventScript_RandomizeEnconters_2:
# 19 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_RandomizeEncounterVar5
# 20 "data/maps/Route102/scripts.pory"
	clearflag FLAG_TEMP_5
	goto Route102_EventScript_RandomizeEnconters_1

Route102_EventScript_RandomizeEnconters_5:
# 26 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_RandomizeEncounterVar6
# 27 "data/maps/Route102/scripts.pory"
	clearflag FLAG_TEMP_6
	goto Route102_EventScript_RandomizeEnconters_4

Route102_EventScript_RandomizeEnconters_8:
# 33 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_RandomizeEncounterVar7
# 34 "data/maps/Route102/scripts.pory"
	clearflag FLAG_TEMP_7
	goto Route102_EventScript_RandomizeEnconters_7

Route102_EventScript_RandomizeEnconters_11:
# 40 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_RandomizeEncounterVar8
# 41 "data/maps/Route102/scripts.pory"
	clearflag FLAG_TEMP_8
	goto Route102_EventScript_RandomizeEnconters_10

Route102_EventScript_RandomizeEnconters_14:
# 47 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_RandomizeEncounterVar9
# 48 "data/maps/Route102/scripts.pory"
	clearflag FLAG_TEMP_9
	goto Route102_EventScript_RandomizeEnconters_13

Route102_EventScript_RandomizeEnconters_17:
# 54 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_RandomizeEncounterVarA
# 55 "data/maps/Route102/scripts.pory"
	clearflag FLAG_TEMP_A
	goto Route102_EventScript_RandomizeEnconters_16

Route102_EventScript_RandomizeEnconters_19:
# 61 "data/maps/Route102/scripts.pory"
	call Route102_EventScript_RandomizeEncounterVarB
# 62 "data/maps/Route102/scripts.pory"
	clearflag FLAG_TEMP_B
	return


Route102_EventScript_RandomizeEncounterVar5::
# 67 "data/maps/Route102/scripts.pory"
	random 6
# 68 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 69 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_RandomizeEncounterVar5_2
# 70 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_RandomizeEncounterVar5_2
# 73 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_RandomizeEncounterVar5_3
# 74 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_RandomizeEncounterVar5_3
# 77 "data/maps/Route102/scripts.pory"
	case 4, Route102_EventScript_RandomizeEncounterVar5_4
# 80 "data/maps/Route102/scripts.pory"
	case 5, Route102_EventScript_RandomizeEncounterVar5_5
	return

Route102_EventScript_RandomizeEncounterVar5_2:
# 71 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( ZIGZAGOON )
# 72 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_5, 0
	return

Route102_EventScript_RandomizeEncounterVar5_3:
# 75 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( LOTAD )
# 76 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

Route102_EventScript_RandomizeEncounterVar5_4:
# 78 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( WURMPLE )
# 79 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

Route102_EventScript_RandomizeEncounterVar5_5:
# 81 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( AZURILL )
# 82 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_5, 3
	return


Route102_EventScript_EncounterVar5::
# 87 "data/maps/Route102/scripts.pory"
	lock
# 88 "data/maps/Route102/scripts.pory"
	switch VAR_TEMP_5
# 89 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar5_3
# 100 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar5_4
# 111 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar5_5
# 122 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar5_6
Route102_EventScript_EncounterVar5_1:
# 134 "data/maps/Route102/scripts.pory"
	release
	return

Route102_EventScript_EncounterVar5_3:
# 90 "data/maps/Route102/scripts.pory"
	random 4
# 91 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 92 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar5_8
# 94 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar5_9
# 95 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar5_9
# 97 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar5_10
	goto Route102_EventScript_EncounterVar5_1

Route102_EventScript_EncounterVar5_4:
# 101 "data/maps/Route102/scripts.pory"
	random 4
# 102 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 103 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar5_12
# 105 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar5_13
# 106 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar5_13
# 108 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar5_14
	goto Route102_EventScript_EncounterVar5_1

Route102_EventScript_EncounterVar5_5:
# 112 "data/maps/Route102/scripts.pory"
	random 4
# 113 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 114 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar5_16
# 116 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar5_17
# 117 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar5_17
# 119 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar5_18
	goto Route102_EventScript_EncounterVar5_1

Route102_EventScript_EncounterVar5_6:
# 123 "data/maps/Route102/scripts.pory"
	random 4
# 124 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 125 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar5_20
# 127 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar5_21
# 128 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar5_21
# 130 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar5_22
	goto Route102_EventScript_EncounterVar5_1

Route102_EventScript_EncounterVar5_8:
# 93 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 3, FLAG_TEMP_5
	goto Route102_EventScript_EncounterVar5_1

Route102_EventScript_EncounterVar5_9:
# 96 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 4, FLAG_TEMP_5
	goto Route102_EventScript_EncounterVar5_1

Route102_EventScript_EncounterVar5_10:
# 98 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 5, FLAG_TEMP_5
	goto Route102_EventScript_EncounterVar5_1

Route102_EventScript_EncounterVar5_12:
# 104 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_LOTAD, 3, FLAG_TEMP_5
	goto Route102_EventScript_EncounterVar5_1

Route102_EventScript_EncounterVar5_13:
# 107 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_LOTAD, 4, FLAG_TEMP_5
	goto Route102_EventScript_EncounterVar5_1

Route102_EventScript_EncounterVar5_14:
# 109 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_LOTAD, 5, FLAG_TEMP_5
	goto Route102_EventScript_EncounterVar5_1

Route102_EventScript_EncounterVar5_16:
# 115 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 3, FLAG_TEMP_5
	goto Route102_EventScript_EncounterVar5_1

Route102_EventScript_EncounterVar5_17:
# 118 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 4, FLAG_TEMP_5
	goto Route102_EventScript_EncounterVar5_1

Route102_EventScript_EncounterVar5_18:
# 120 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 5, FLAG_TEMP_5
	goto Route102_EventScript_EncounterVar5_1

Route102_EventScript_EncounterVar5_20:
# 126 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_AZURILL, 3, FLAG_TEMP_5
	goto Route102_EventScript_EncounterVar5_1

Route102_EventScript_EncounterVar5_21:
# 129 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_AZURILL, 4, FLAG_TEMP_5
	goto Route102_EventScript_EncounterVar5_1

Route102_EventScript_EncounterVar5_22:
# 131 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_AZURILL, 5, FLAG_TEMP_5
	goto Route102_EventScript_EncounterVar5_1


Route102_EventScript_RandomizeEncounterVar6::
# 138 "data/maps/Route102/scripts.pory"
	random 5
# 139 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 140 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_RandomizeEncounterVar6_2
# 141 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_RandomizeEncounterVar6_2
# 144 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_RandomizeEncounterVar6_3
# 147 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_RandomizeEncounterVar6_4
# 150 "data/maps/Route102/scripts.pory"
	case 4, Route102_EventScript_RandomizeEncounterVar6_5
	return

Route102_EventScript_RandomizeEncounterVar6_2:
# 142 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( ZIGZAGOON )
# 143 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_6, 0
	return

Route102_EventScript_RandomizeEncounterVar6_3:
# 145 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( WURMPLE )
# 146 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_6, 1
	return

Route102_EventScript_RandomizeEncounterVar6_4:
# 148 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( POOCHYENA )
# 149 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_6, 2
	return

Route102_EventScript_RandomizeEncounterVar6_5:
# 151 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( BUDEW )
# 152 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_6, 3
	return


Route102_EventScript_EncounterVar6::
# 157 "data/maps/Route102/scripts.pory"
	lock
# 158 "data/maps/Route102/scripts.pory"
	switch VAR_TEMP_6
# 159 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar6_3
# 170 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar6_4
# 181 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar6_5
# 192 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar6_6
Route102_EventScript_EncounterVar6_1:
# 204 "data/maps/Route102/scripts.pory"
	release
	return

Route102_EventScript_EncounterVar6_3:
# 160 "data/maps/Route102/scripts.pory"
	random 4
# 161 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 162 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar6_8
# 164 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar6_9
# 165 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar6_9
# 167 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar6_10
	goto Route102_EventScript_EncounterVar6_1

Route102_EventScript_EncounterVar6_4:
# 171 "data/maps/Route102/scripts.pory"
	random 4
# 172 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 173 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar6_12
# 175 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar6_13
# 176 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar6_13
# 178 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar6_14
	goto Route102_EventScript_EncounterVar6_1

Route102_EventScript_EncounterVar6_5:
# 182 "data/maps/Route102/scripts.pory"
	random 4
# 183 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 184 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar6_16
# 186 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar6_17
# 187 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar6_17
# 189 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar6_18
	goto Route102_EventScript_EncounterVar6_1

Route102_EventScript_EncounterVar6_6:
# 193 "data/maps/Route102/scripts.pory"
	random 4
# 194 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 195 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar6_20
# 197 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar6_21
# 198 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar6_21
# 200 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar6_22
	goto Route102_EventScript_EncounterVar6_1

Route102_EventScript_EncounterVar6_8:
# 163 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 3, FLAG_TEMP_6
	goto Route102_EventScript_EncounterVar6_1

Route102_EventScript_EncounterVar6_9:
# 166 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 4, FLAG_TEMP_6
	goto Route102_EventScript_EncounterVar6_1

Route102_EventScript_EncounterVar6_10:
# 168 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 5, FLAG_TEMP_6
	goto Route102_EventScript_EncounterVar6_1

Route102_EventScript_EncounterVar6_12:
# 174 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 3, FLAG_TEMP_6
	goto Route102_EventScript_EncounterVar6_1

Route102_EventScript_EncounterVar6_13:
# 177 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 4, FLAG_TEMP_6
	goto Route102_EventScript_EncounterVar6_1

Route102_EventScript_EncounterVar6_14:
# 179 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 5, FLAG_TEMP_6
	goto Route102_EventScript_EncounterVar6_1

Route102_EventScript_EncounterVar6_16:
# 185 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 3, FLAG_TEMP_6
	goto Route102_EventScript_EncounterVar6_1

Route102_EventScript_EncounterVar6_17:
# 188 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 4, FLAG_TEMP_6
	goto Route102_EventScript_EncounterVar6_1

Route102_EventScript_EncounterVar6_18:
# 190 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 5, FLAG_TEMP_6
	goto Route102_EventScript_EncounterVar6_1

Route102_EventScript_EncounterVar6_20:
# 196 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_BUDEW, 3, FLAG_TEMP_6
	goto Route102_EventScript_EncounterVar6_1

Route102_EventScript_EncounterVar6_21:
# 199 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_BUDEW, 4, FLAG_TEMP_6
	goto Route102_EventScript_EncounterVar6_1

Route102_EventScript_EncounterVar6_22:
# 201 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_BUDEW, 5, FLAG_TEMP_6
	goto Route102_EventScript_EncounterVar6_1


Route102_EventScript_RandomizeEncounterVar7::
# 208 "data/maps/Route102/scripts.pory"
	random 5
# 209 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 210 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_RandomizeEncounterVar7_2
# 213 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_RandomizeEncounterVar7_3
# 214 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_RandomizeEncounterVar7_3
# 217 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_RandomizeEncounterVar7_4
# 220 "data/maps/Route102/scripts.pory"
	case 4, Route102_EventScript_RandomizeEncounterVar7_5
	return

Route102_EventScript_RandomizeEncounterVar7_2:
# 211 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( ZIGZAGOON )
# 212 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_7, 0
	return

Route102_EventScript_RandomizeEncounterVar7_3:
# 215 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( WURMPLE )
# 216 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_7, 1
	return

Route102_EventScript_RandomizeEncounterVar7_4:
# 218 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( POOCHYENA )
# 219 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_7, 2
	return

Route102_EventScript_RandomizeEncounterVar7_5:
# 221 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( BUDEW )
# 222 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_7, 3
	return


Route102_EventScript_EncounterVar7::
# 227 "data/maps/Route102/scripts.pory"
	lock
# 228 "data/maps/Route102/scripts.pory"
	switch VAR_TEMP_7
# 229 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar7_3
# 240 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar7_4
# 251 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar7_5
# 262 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar7_6
Route102_EventScript_EncounterVar7_1:
# 274 "data/maps/Route102/scripts.pory"
	release
	return

Route102_EventScript_EncounterVar7_3:
# 230 "data/maps/Route102/scripts.pory"
	random 4
# 231 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 232 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar7_8
# 234 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar7_9
# 235 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar7_9
# 237 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar7_10
	goto Route102_EventScript_EncounterVar7_1

Route102_EventScript_EncounterVar7_4:
# 241 "data/maps/Route102/scripts.pory"
	random 4
# 242 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 243 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar7_12
# 245 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar7_13
# 246 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar7_13
# 248 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar7_14
	goto Route102_EventScript_EncounterVar7_1

Route102_EventScript_EncounterVar7_5:
# 252 "data/maps/Route102/scripts.pory"
	random 4
# 253 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 254 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar7_16
# 256 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar7_17
# 257 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar7_17
# 259 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar7_18
	goto Route102_EventScript_EncounterVar7_1

Route102_EventScript_EncounterVar7_6:
# 263 "data/maps/Route102/scripts.pory"
	random 4
# 264 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 265 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar7_20
# 267 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar7_21
# 268 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar7_21
# 270 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar7_22
	goto Route102_EventScript_EncounterVar7_1

Route102_EventScript_EncounterVar7_8:
# 233 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 3, FLAG_TEMP_7
	goto Route102_EventScript_EncounterVar7_1

Route102_EventScript_EncounterVar7_9:
# 236 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 4, FLAG_TEMP_7
	goto Route102_EventScript_EncounterVar7_1

Route102_EventScript_EncounterVar7_10:
# 238 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 5, FLAG_TEMP_7
	goto Route102_EventScript_EncounterVar7_1

Route102_EventScript_EncounterVar7_12:
# 244 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 3, FLAG_TEMP_7
	goto Route102_EventScript_EncounterVar7_1

Route102_EventScript_EncounterVar7_13:
# 247 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 4, FLAG_TEMP_7
	goto Route102_EventScript_EncounterVar7_1

Route102_EventScript_EncounterVar7_14:
# 249 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 5, FLAG_TEMP_7
	goto Route102_EventScript_EncounterVar7_1

Route102_EventScript_EncounterVar7_16:
# 255 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 3, FLAG_TEMP_7
	goto Route102_EventScript_EncounterVar7_1

Route102_EventScript_EncounterVar7_17:
# 258 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 4, FLAG_TEMP_7
	goto Route102_EventScript_EncounterVar7_1

Route102_EventScript_EncounterVar7_18:
# 260 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 5, FLAG_TEMP_7
	goto Route102_EventScript_EncounterVar7_1

Route102_EventScript_EncounterVar7_20:
# 266 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_BUDEW, 3, FLAG_TEMP_7
	goto Route102_EventScript_EncounterVar7_1

Route102_EventScript_EncounterVar7_21:
# 269 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_BUDEW, 4, FLAG_TEMP_7
	goto Route102_EventScript_EncounterVar7_1

Route102_EventScript_EncounterVar7_22:
# 271 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_BUDEW, 5, FLAG_TEMP_7
	goto Route102_EventScript_EncounterVar7_1


Route102_EventScript_RandomizeEncounterVar8::
# 278 "data/maps/Route102/scripts.pory"
	random 10
# 279 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 280 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_RandomizeEncounterVar8_2
# 281 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_RandomizeEncounterVar8_2
# 282 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_RandomizeEncounterVar8_2
# 285 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_RandomizeEncounterVar8_3
# 286 "data/maps/Route102/scripts.pory"
	case 4, Route102_EventScript_RandomizeEncounterVar8_3
# 289 "data/maps/Route102/scripts.pory"
	case 5, Route102_EventScript_RandomizeEncounterVar8_4
# 290 "data/maps/Route102/scripts.pory"
	case 6, Route102_EventScript_RandomizeEncounterVar8_4
# 293 "data/maps/Route102/scripts.pory"
	case 7, Route102_EventScript_RandomizeEncounterVar8_5
# 296 "data/maps/Route102/scripts.pory"
	case 8, Route102_EventScript_RandomizeEncounterVar8_6
# 299 "data/maps/Route102/scripts.pory"
	case 9, Route102_EventScript_RandomizeEncounterVar8_7
	return

Route102_EventScript_RandomizeEncounterVar8_2:
# 283 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( ZIGZAGOON )
# 284 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_8, 0
	return

Route102_EventScript_RandomizeEncounterVar8_3:
# 287 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( LOTAD )
# 288 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_8, 1
	return

Route102_EventScript_RandomizeEncounterVar8_4:
# 291 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( WURMPLE )
# 292 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_8, 2
	return

Route102_EventScript_RandomizeEncounterVar8_5:
# 294 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( POOCHYENA )
# 295 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_8, 3
	return

Route102_EventScript_RandomizeEncounterVar8_6:
# 297 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( AZURILL )
# 298 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_8, 4
	return

Route102_EventScript_RandomizeEncounterVar8_7:
# 300 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( BUDEW )
# 301 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_8, 5
	return


Route102_EventScript_EncounterVar8::
# 306 "data/maps/Route102/scripts.pory"
	lock
# 307 "data/maps/Route102/scripts.pory"
	switch VAR_TEMP_8
# 308 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar8_3
# 319 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar8_4
# 330 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar8_5
# 341 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar8_6
# 352 "data/maps/Route102/scripts.pory"
	case 4, Route102_EventScript_EncounterVar8_7
# 363 "data/maps/Route102/scripts.pory"
	case 5, Route102_EventScript_EncounterVar8_8
Route102_EventScript_EncounterVar8_1:
# 375 "data/maps/Route102/scripts.pory"
	release
	return

Route102_EventScript_EncounterVar8_3:
# 309 "data/maps/Route102/scripts.pory"
	random 4
# 310 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 311 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar8_10
# 313 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar8_11
# 314 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar8_11
# 316 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar8_12
	goto Route102_EventScript_EncounterVar8_1

Route102_EventScript_EncounterVar8_4:
# 320 "data/maps/Route102/scripts.pory"
	random 4
# 321 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 322 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar8_14
# 324 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar8_15
# 325 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar8_15
# 327 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar8_16
	goto Route102_EventScript_EncounterVar8_1

Route102_EventScript_EncounterVar8_5:
# 331 "data/maps/Route102/scripts.pory"
	random 4
# 332 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 333 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar8_18
# 335 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar8_19
# 336 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar8_19
# 338 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar8_20
	goto Route102_EventScript_EncounterVar8_1

Route102_EventScript_EncounterVar8_6:
# 342 "data/maps/Route102/scripts.pory"
	random 4
# 343 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 344 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar8_22
# 346 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar8_23
# 347 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar8_23
# 349 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar8_24
	goto Route102_EventScript_EncounterVar8_1

Route102_EventScript_EncounterVar8_7:
# 353 "data/maps/Route102/scripts.pory"
	random 4
# 354 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 355 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar8_26
# 357 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar8_27
# 358 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar8_27
# 360 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar8_28
	goto Route102_EventScript_EncounterVar8_1

Route102_EventScript_EncounterVar8_8:
# 364 "data/maps/Route102/scripts.pory"
	random 4
# 365 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 366 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar8_30
# 368 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar8_31
# 369 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar8_31
# 371 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar8_32
	goto Route102_EventScript_EncounterVar8_1

Route102_EventScript_EncounterVar8_10:
# 312 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 3, FLAG_TEMP_8
	goto Route102_EventScript_EncounterVar8_1

Route102_EventScript_EncounterVar8_11:
# 315 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 4, FLAG_TEMP_8
	goto Route102_EventScript_EncounterVar8_1

Route102_EventScript_EncounterVar8_12:
# 317 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 5, FLAG_TEMP_8
	goto Route102_EventScript_EncounterVar8_1

Route102_EventScript_EncounterVar8_14:
# 323 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_LOTAD, 3, FLAG_TEMP_8
	goto Route102_EventScript_EncounterVar8_1

Route102_EventScript_EncounterVar8_15:
# 326 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_LOTAD, 4, FLAG_TEMP_8
	goto Route102_EventScript_EncounterVar8_1

Route102_EventScript_EncounterVar8_16:
# 328 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_LOTAD, 5, FLAG_TEMP_8
	goto Route102_EventScript_EncounterVar8_1

Route102_EventScript_EncounterVar8_18:
# 334 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 3, FLAG_TEMP_8
	goto Route102_EventScript_EncounterVar8_1

Route102_EventScript_EncounterVar8_19:
# 337 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 4, FLAG_TEMP_8
	goto Route102_EventScript_EncounterVar8_1

Route102_EventScript_EncounterVar8_20:
# 339 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 5, FLAG_TEMP_8
	goto Route102_EventScript_EncounterVar8_1

Route102_EventScript_EncounterVar8_22:
# 345 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 3, FLAG_TEMP_8
	goto Route102_EventScript_EncounterVar8_1

Route102_EventScript_EncounterVar8_23:
# 348 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 4, FLAG_TEMP_8
	goto Route102_EventScript_EncounterVar8_1

Route102_EventScript_EncounterVar8_24:
# 350 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 5, FLAG_TEMP_8
	goto Route102_EventScript_EncounterVar8_1

Route102_EventScript_EncounterVar8_26:
# 356 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_AZURILL, 3, FLAG_TEMP_8
	goto Route102_EventScript_EncounterVar8_1

Route102_EventScript_EncounterVar8_27:
# 359 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_AZURILL, 4, FLAG_TEMP_8
	goto Route102_EventScript_EncounterVar8_1

Route102_EventScript_EncounterVar8_28:
# 361 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_AZURILL, 5, FLAG_TEMP_8
	goto Route102_EventScript_EncounterVar8_1

Route102_EventScript_EncounterVar8_30:
# 367 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_BUDEW, 3, FLAG_TEMP_8
	goto Route102_EventScript_EncounterVar8_1

Route102_EventScript_EncounterVar8_31:
# 370 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_BUDEW, 4, FLAG_TEMP_8
	goto Route102_EventScript_EncounterVar8_1

Route102_EventScript_EncounterVar8_32:
# 372 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_BUDEW, 5, FLAG_TEMP_8
	goto Route102_EventScript_EncounterVar8_1


Route102_EventScript_RandomizeEncounterVar9::
# 379 "data/maps/Route102/scripts.pory"
	random 10
# 380 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 381 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_RandomizeEncounterVar9_2
# 382 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_RandomizeEncounterVar9_2
# 385 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_RandomizeEncounterVar9_3
# 386 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_RandomizeEncounterVar9_3
# 389 "data/maps/Route102/scripts.pory"
	case 4, Route102_EventScript_RandomizeEncounterVar9_4
# 390 "data/maps/Route102/scripts.pory"
	case 5, Route102_EventScript_RandomizeEncounterVar9_4
# 393 "data/maps/Route102/scripts.pory"
	case 6, Route102_EventScript_RandomizeEncounterVar9_5
# 394 "data/maps/Route102/scripts.pory"
	case 7, Route102_EventScript_RandomizeEncounterVar9_5
# 397 "data/maps/Route102/scripts.pory"
	case 8, Route102_EventScript_RandomizeEncounterVar9_6
# 400 "data/maps/Route102/scripts.pory"
	case 9, Route102_EventScript_RandomizeEncounterVar9_7
	return

Route102_EventScript_RandomizeEncounterVar9_2:
# 383 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_9, OBJ_EVENT_GFX_SPECIES ( ZIGZAGOON )
# 384 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_9, 0
	return

Route102_EventScript_RandomizeEncounterVar9_3:
# 387 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_9, OBJ_EVENT_GFX_SPECIES ( LOTAD )
# 388 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_9, 1
	return

Route102_EventScript_RandomizeEncounterVar9_4:
# 391 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_9, OBJ_EVENT_GFX_SPECIES ( WURMPLE )
# 392 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_9, 2
	return

Route102_EventScript_RandomizeEncounterVar9_5:
# 395 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_9, OBJ_EVENT_GFX_SPECIES ( POOCHYENA )
# 396 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_9, 3
	return

Route102_EventScript_RandomizeEncounterVar9_6:
# 398 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_9, OBJ_EVENT_GFX_SPECIES ( AZURILL )
# 399 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_9, 4
	return

Route102_EventScript_RandomizeEncounterVar9_7:
# 401 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_9, OBJ_EVENT_GFX_SPECIES ( BUDEW )
# 402 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_9, 5
	return


Route102_EventScript_EncounterVar9::
# 407 "data/maps/Route102/scripts.pory"
	lock
# 408 "data/maps/Route102/scripts.pory"
	switch VAR_TEMP_9
# 409 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar9_3
# 420 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar9_4
# 431 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar9_5
# 442 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar9_6
# 453 "data/maps/Route102/scripts.pory"
	case 4, Route102_EventScript_EncounterVar9_7
# 464 "data/maps/Route102/scripts.pory"
	case 5, Route102_EventScript_EncounterVar9_8
Route102_EventScript_EncounterVar9_1:
# 476 "data/maps/Route102/scripts.pory"
	release
	return

Route102_EventScript_EncounterVar9_3:
# 410 "data/maps/Route102/scripts.pory"
	random 4
# 411 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 412 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar9_10
# 414 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar9_11
# 415 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar9_11
# 417 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar9_12
	goto Route102_EventScript_EncounterVar9_1

Route102_EventScript_EncounterVar9_4:
# 421 "data/maps/Route102/scripts.pory"
	random 4
# 422 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 423 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar9_14
# 425 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar9_15
# 426 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar9_15
# 428 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar9_16
	goto Route102_EventScript_EncounterVar9_1

Route102_EventScript_EncounterVar9_5:
# 432 "data/maps/Route102/scripts.pory"
	random 4
# 433 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 434 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar9_18
# 436 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar9_19
# 437 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar9_19
# 439 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar9_20
	goto Route102_EventScript_EncounterVar9_1

Route102_EventScript_EncounterVar9_6:
# 443 "data/maps/Route102/scripts.pory"
	random 4
# 444 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 445 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar9_22
# 447 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar9_23
# 448 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar9_23
# 450 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar9_24
	goto Route102_EventScript_EncounterVar9_1

Route102_EventScript_EncounterVar9_7:
# 454 "data/maps/Route102/scripts.pory"
	random 4
# 455 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 456 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar9_26
# 458 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar9_27
# 459 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar9_27
# 461 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar9_28
	goto Route102_EventScript_EncounterVar9_1

Route102_EventScript_EncounterVar9_8:
# 465 "data/maps/Route102/scripts.pory"
	random 4
# 466 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 467 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVar9_30
# 469 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVar9_31
# 470 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVar9_31
# 472 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVar9_32
	goto Route102_EventScript_EncounterVar9_1

Route102_EventScript_EncounterVar9_10:
# 413 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 3, FLAG_TEMP_9
	goto Route102_EventScript_EncounterVar9_1

Route102_EventScript_EncounterVar9_11:
# 416 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 4, FLAG_TEMP_9
	goto Route102_EventScript_EncounterVar9_1

Route102_EventScript_EncounterVar9_12:
# 418 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 5, FLAG_TEMP_9
	goto Route102_EventScript_EncounterVar9_1

Route102_EventScript_EncounterVar9_14:
# 424 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_LOTAD, 3, FLAG_TEMP_9
	goto Route102_EventScript_EncounterVar9_1

Route102_EventScript_EncounterVar9_15:
# 427 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_LOTAD, 4, FLAG_TEMP_9
	goto Route102_EventScript_EncounterVar9_1

Route102_EventScript_EncounterVar9_16:
# 429 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_LOTAD, 5, FLAG_TEMP_9
	goto Route102_EventScript_EncounterVar9_1

Route102_EventScript_EncounterVar9_18:
# 435 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 3, FLAG_TEMP_9
	goto Route102_EventScript_EncounterVar9_1

Route102_EventScript_EncounterVar9_19:
# 438 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 4, FLAG_TEMP_9
	goto Route102_EventScript_EncounterVar9_1

Route102_EventScript_EncounterVar9_20:
# 440 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 5, FLAG_TEMP_9
	goto Route102_EventScript_EncounterVar9_1

Route102_EventScript_EncounterVar9_22:
# 446 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 3, FLAG_TEMP_9
	goto Route102_EventScript_EncounterVar9_1

Route102_EventScript_EncounterVar9_23:
# 449 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 4, FLAG_TEMP_9
	goto Route102_EventScript_EncounterVar9_1

Route102_EventScript_EncounterVar9_24:
# 451 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 5, FLAG_TEMP_9
	goto Route102_EventScript_EncounterVar9_1

Route102_EventScript_EncounterVar9_26:
# 457 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_AZURILL, 3, FLAG_TEMP_9
	goto Route102_EventScript_EncounterVar9_1

Route102_EventScript_EncounterVar9_27:
# 460 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_AZURILL, 4, FLAG_TEMP_9
	goto Route102_EventScript_EncounterVar9_1

Route102_EventScript_EncounterVar9_28:
# 462 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_AZURILL, 5, FLAG_TEMP_9
	goto Route102_EventScript_EncounterVar9_1

Route102_EventScript_EncounterVar9_30:
# 468 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_BUDEW, 3, FLAG_TEMP_9
	goto Route102_EventScript_EncounterVar9_1

Route102_EventScript_EncounterVar9_31:
# 471 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_BUDEW, 4, FLAG_TEMP_9
	goto Route102_EventScript_EncounterVar9_1

Route102_EventScript_EncounterVar9_32:
# 473 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_BUDEW, 5, FLAG_TEMP_9
	goto Route102_EventScript_EncounterVar9_1


Route102_EventScript_RandomizeEncounterVarA::
# 480 "data/maps/Route102/scripts.pory"
	random 5
# 481 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 482 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_RandomizeEncounterVarA_2
# 485 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_RandomizeEncounterVarA_3
# 488 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_RandomizeEncounterVarA_4
# 491 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_RandomizeEncounterVarA_5
# 494 "data/maps/Route102/scripts.pory"
	case 4, Route102_EventScript_RandomizeEncounterVarA_6
	return

Route102_EventScript_RandomizeEncounterVarA_2:
# 483 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SPECIES ( ZIGZAGOON )
# 484 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_A, 0
	return

Route102_EventScript_RandomizeEncounterVarA_3:
# 486 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SPECIES ( WURMPLE )
# 487 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_A, 1
	return

Route102_EventScript_RandomizeEncounterVarA_4:
# 489 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SPECIES ( POOCHYENA )
# 490 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_A, 2
	return

Route102_EventScript_RandomizeEncounterVarA_5:
# 492 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SPECIES ( BUDEW )
# 493 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_A, 3
	return

Route102_EventScript_RandomizeEncounterVarA_6:
# 495 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SPECIES ( RALTS )
# 496 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_A, 4
	return


Route102_EventScript_EncounterVarA::
# 501 "data/maps/Route102/scripts.pory"
	lock
# 502 "data/maps/Route102/scripts.pory"
	switch VAR_TEMP_A
# 503 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVarA_3
# 515 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVarA_4
# 527 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVarA_5
# 539 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVarA_6
# 551 "data/maps/Route102/scripts.pory"
	case 4, Route102_EventScript_EncounterVarA_7
Route102_EventScript_EncounterVarA_1:
# 564 "data/maps/Route102/scripts.pory"
	release
	return

Route102_EventScript_EncounterVarA_3:
# 504 "data/maps/Route102/scripts.pory"
	random 5
# 505 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 506 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVarA_9
# 508 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVarA_10
# 509 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVarA_10
# 511 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVarA_11
# 512 "data/maps/Route102/scripts.pory"
	case 4, Route102_EventScript_EncounterVarA_11
	goto Route102_EventScript_EncounterVarA_1

Route102_EventScript_EncounterVarA_4:
# 516 "data/maps/Route102/scripts.pory"
	random 5
# 517 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 518 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVarA_13
# 520 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVarA_14
# 521 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVarA_14
# 523 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVarA_15
# 524 "data/maps/Route102/scripts.pory"
	case 4, Route102_EventScript_EncounterVarA_15
	goto Route102_EventScript_EncounterVarA_1

Route102_EventScript_EncounterVarA_5:
# 528 "data/maps/Route102/scripts.pory"
	random 5
# 529 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 530 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVarA_17
# 532 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVarA_18
# 533 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVarA_18
# 535 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVarA_19
# 536 "data/maps/Route102/scripts.pory"
	case 4, Route102_EventScript_EncounterVarA_19
	goto Route102_EventScript_EncounterVarA_1

Route102_EventScript_EncounterVarA_6:
# 540 "data/maps/Route102/scripts.pory"
	random 5
# 541 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 542 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVarA_21
# 544 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVarA_22
# 545 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVarA_22
# 547 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVarA_23
# 548 "data/maps/Route102/scripts.pory"
	case 4, Route102_EventScript_EncounterVarA_23
	goto Route102_EventScript_EncounterVarA_1

Route102_EventScript_EncounterVarA_7:
# 552 "data/maps/Route102/scripts.pory"
	random 5
# 553 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 554 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVarA_25
# 556 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVarA_26
# 557 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVarA_26
# 559 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVarA_27
# 560 "data/maps/Route102/scripts.pory"
	case 4, Route102_EventScript_EncounterVarA_27
	goto Route102_EventScript_EncounterVarA_1

Route102_EventScript_EncounterVarA_9:
# 507 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 3, FLAG_TEMP_A
	goto Route102_EventScript_EncounterVarA_1

Route102_EventScript_EncounterVarA_10:
# 510 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 4, FLAG_TEMP_A
	goto Route102_EventScript_EncounterVarA_1

Route102_EventScript_EncounterVarA_11:
# 513 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 5, FLAG_TEMP_A
	goto Route102_EventScript_EncounterVarA_1

Route102_EventScript_EncounterVarA_13:
# 519 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 3, FLAG_TEMP_A
	goto Route102_EventScript_EncounterVarA_1

Route102_EventScript_EncounterVarA_14:
# 522 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 4, FLAG_TEMP_A
	goto Route102_EventScript_EncounterVarA_1

Route102_EventScript_EncounterVarA_15:
# 525 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 5, FLAG_TEMP_A
	goto Route102_EventScript_EncounterVarA_1

Route102_EventScript_EncounterVarA_17:
# 531 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 3, FLAG_TEMP_A
	goto Route102_EventScript_EncounterVarA_1

Route102_EventScript_EncounterVarA_18:
# 534 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 4, FLAG_TEMP_A
	goto Route102_EventScript_EncounterVarA_1

Route102_EventScript_EncounterVarA_19:
# 537 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 5, FLAG_TEMP_A
	goto Route102_EventScript_EncounterVarA_1

Route102_EventScript_EncounterVarA_21:
# 543 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_BUDEW, 3, FLAG_TEMP_A
	goto Route102_EventScript_EncounterVarA_1

Route102_EventScript_EncounterVarA_22:
# 546 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_BUDEW, 4, FLAG_TEMP_A
	goto Route102_EventScript_EncounterVarA_1

Route102_EventScript_EncounterVarA_23:
# 549 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_BUDEW, 5, FLAG_TEMP_A
	goto Route102_EventScript_EncounterVarA_1

Route102_EventScript_EncounterVarA_25:
# 555 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_RALTS, 3, FLAG_TEMP_A
	goto Route102_EventScript_EncounterVarA_1

Route102_EventScript_EncounterVarA_26:
# 558 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_RALTS, 4, FLAG_TEMP_A
	goto Route102_EventScript_EncounterVarA_1

Route102_EventScript_EncounterVarA_27:
# 561 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_RALTS, 5, FLAG_TEMP_A
	goto Route102_EventScript_EncounterVarA_1


Route102_EventScript_RandomizeEncounterVarB::
# 568 "data/maps/Route102/scripts.pory"
	random 4
# 569 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 570 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_RandomizeEncounterVarB_2
# 571 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_RandomizeEncounterVarB_2
# 574 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_RandomizeEncounterVarB_3
# 577 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_RandomizeEncounterVarB_4
	return

Route102_EventScript_RandomizeEncounterVarB_2:
# 572 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_SPECIES ( WURMPLE )
# 573 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_B, 0
	return

Route102_EventScript_RandomizeEncounterVarB_3:
# 575 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_SPECIES ( BUDEW )
# 576 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_B, 1
	return

Route102_EventScript_RandomizeEncounterVarB_4:
# 578 "data/maps/Route102/scripts.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_SPECIES ( RALTS )
# 579 "data/maps/Route102/scripts.pory"
	setvar VAR_TEMP_B, 2
	return


Route102_EventScript_EncounterVarB::
# 584 "data/maps/Route102/scripts.pory"
	lock
# 585 "data/maps/Route102/scripts.pory"
	switch VAR_TEMP_B
# 586 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVarB_3
# 598 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVarB_4
# 610 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVarB_5
Route102_EventScript_EncounterVarB_1:
# 623 "data/maps/Route102/scripts.pory"
	release
	return

Route102_EventScript_EncounterVarB_3:
# 587 "data/maps/Route102/scripts.pory"
	random 5
# 588 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 589 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVarB_7
# 591 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVarB_8
# 592 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVarB_8
# 594 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVarB_9
# 595 "data/maps/Route102/scripts.pory"
	case 4, Route102_EventScript_EncounterVarB_9
	goto Route102_EventScript_EncounterVarB_1

Route102_EventScript_EncounterVarB_4:
# 599 "data/maps/Route102/scripts.pory"
	random 5
# 600 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 601 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVarB_11
# 603 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVarB_12
# 604 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVarB_12
# 606 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVarB_13
# 607 "data/maps/Route102/scripts.pory"
	case 4, Route102_EventScript_EncounterVarB_13
	goto Route102_EventScript_EncounterVarB_1

Route102_EventScript_EncounterVarB_5:
# 611 "data/maps/Route102/scripts.pory"
	random 5
# 612 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 613 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_EncounterVarB_15
# 615 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_EncounterVarB_16
# 616 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_EncounterVarB_16
# 618 "data/maps/Route102/scripts.pory"
	case 3, Route102_EventScript_EncounterVarB_17
# 619 "data/maps/Route102/scripts.pory"
	case 4, Route102_EventScript_EncounterVarB_17
	goto Route102_EventScript_EncounterVarB_1

Route102_EventScript_EncounterVarB_7:
# 590 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 3, FLAG_TEMP_A
	goto Route102_EventScript_EncounterVarB_1

Route102_EventScript_EncounterVarB_8:
# 593 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 4, FLAG_TEMP_A
	goto Route102_EventScript_EncounterVarB_1

Route102_EventScript_EncounterVarB_9:
# 596 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 5, FLAG_TEMP_A
	goto Route102_EventScript_EncounterVarB_1

Route102_EventScript_EncounterVarB_11:
# 602 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_BUDEW, 3, FLAG_TEMP_A
	goto Route102_EventScript_EncounterVarB_1

Route102_EventScript_EncounterVarB_12:
# 605 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_BUDEW, 4, FLAG_TEMP_A
	goto Route102_EventScript_EncounterVarB_1

Route102_EventScript_EncounterVarB_13:
# 608 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_BUDEW, 5, FLAG_TEMP_A
	goto Route102_EventScript_EncounterVarB_1

Route102_EventScript_EncounterVarB_15:
# 614 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_RALTS, 3, FLAG_TEMP_A
	goto Route102_EventScript_EncounterVarB_1

Route102_EventScript_EncounterVarB_16:
# 617 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_RALTS, 4, FLAG_TEMP_A
	goto Route102_EventScript_EncounterVarB_1

Route102_EventScript_EncounterVarB_17:
# 620 "data/maps/Route102/scripts.pory"
	dowildencounter SPECIES_RALTS, 5, FLAG_TEMP_A
	goto Route102_EventScript_EncounterVarB_1


# 626 "data/maps/Route102/scripts.pory"

# 627 "data/maps/Route102/scripts.pory"
Route102_MapScripts::
# 628 "data/maps/Route102/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route102_OnTransition
# 629 "data/maps/Route102/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route102_OnResume
# 630 "data/maps/Route102/scripts.pory"
	.byte 0
# 631 "data/maps/Route102/scripts.pory"

# 632 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 633 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 634 "data/maps/Route102/scripts.pory"
	end
# 635 "data/maps/Route102/scripts.pory"

# 636 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 637 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 638 "data/maps/Route102/scripts.pory"
	end
# 639 "data/maps/Route102/scripts.pory"

# 640 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 641 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 642 "data/maps/Route102/scripts.pory"
	end
# 643 "data/maps/Route102/scripts.pory"

# 644 "data/maps/Route102/scripts.pory"
Route102_EventScript_Boy::
# 645 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
# 646 "data/maps/Route102/scripts.pory"
	end
# 647 "data/maps/Route102/scripts.pory"

# 648 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 649 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 650 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 651 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
# 652 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 653 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 654 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
# 655 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 656 "data/maps/Route102/scripts.pory"
	release
# 657 "data/maps/Route102/scripts.pory"
	end
# 658 "data/maps/Route102/scripts.pory"

# 659 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 660 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 661 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 662 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 663 "data/maps/Route102/scripts.pory"
	release
# 664 "data/maps/Route102/scripts.pory"
	end
# 665 "data/maps/Route102/scripts.pory"

# 666 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 667 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 668 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 669 "data/maps/Route102/scripts.pory"
	release
# 670 "data/maps/Route102/scripts.pory"
	end
# 671 "data/maps/Route102/scripts.pory"

# 672 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 673 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 674 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 675 "data/maps/Route102/scripts.pory"
	release
# 676 "data/maps/Route102/scripts.pory"
	end
# 677 "data/maps/Route102/scripts.pory"

# 678 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegister::
# 679 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 680 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 681 "data/maps/Route102/scripts.pory"
	release
# 682 "data/maps/Route102/scripts.pory"
	end
# 683 "data/maps/Route102/scripts.pory"

# 684 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRematch::
# 685 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 686 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 687 "data/maps/Route102/scripts.pory"
	end
# 688 "data/maps/Route102/scripts.pory"

# 689 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 690 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 691 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 692 "data/maps/Route102/scripts.pory"
	end
# 693 "data/maps/Route102/scripts.pory"

# 694 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 695 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 696 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 697 "data/maps/Route102/scripts.pory"
	end
# 698 "data/maps/Route102/scripts.pory"

# 699 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 700 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 701 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 702 "data/maps/Route102/scripts.pory"
	end
# 703 "data/maps/Route102/scripts.pory"

# 704 "data/maps/Route102/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 705 "data/maps/Route102/scripts.pory"
	.string "WALLY: {PLAYER}…\n"
# 706 "data/maps/Route102/scripts.pory"
	.string "POKéMON hide in tall grass like this,\l"
# 707 "data/maps/Route102/scripts.pory"
	.string "don't they?\p"
# 708 "data/maps/Route102/scripts.pory"
	.string "Please watch me and see if I can\n"
# 709 "data/maps/Route102/scripts.pory"
	.string "catch one properly.\p"
# 710 "data/maps/Route102/scripts.pory"
	.string "…Whoa!$"
# 711 "data/maps/Route102/scripts.pory"

# 712 "data/maps/Route102/scripts.pory"
Route102_Text_WallyIDidIt:
# 713 "data/maps/Route102/scripts.pory"
	.string "WALLY: I did it… It's my…\n"
# 714 "data/maps/Route102/scripts.pory"
	.string "My POKéMON!$"
# 715 "data/maps/Route102/scripts.pory"

# 716 "data/maps/Route102/scripts.pory"
Route102_Text_LetsGoBack:
# 717 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
# 718 "data/maps/Route102/scripts.pory"
	.string "Let's go back to the GYM!$"
# 719 "data/maps/Route102/scripts.pory"

# 720 "data/maps/Route102/scripts.pory"
Route102_Text_ImNotVeryTall:
# 721 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
# 722 "data/maps/Route102/scripts.pory"
	.string "into tall grass.\p"
# 723 "data/maps/Route102/scripts.pory"
	.string "The grass goes up my nose and…\n"
# 724 "data/maps/Route102/scripts.pory"
	.string "Fwafwafwafwafwa…\p"
# 725 "data/maps/Route102/scripts.pory"
	.string "Fwatchoo!$"
# 726 "data/maps/Route102/scripts.pory"

# 727 "data/maps/Route102/scripts.pory"
Route102_Text_CatchWholeBunchOfPokemon:
# 728 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
# 729 "data/maps/Route102/scripts.pory"
	.string "POKéMON!$"
# 730 "data/maps/Route102/scripts.pory"

# 731 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignOldale:
# 732 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 733 "data/maps/Route102/scripts.pory"
	.string "{RIGHT_ARROW} OLDALE TOWN$"
# 734 "data/maps/Route102/scripts.pory"

# 735 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 736 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 737 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} PETALBURG CITY$"
