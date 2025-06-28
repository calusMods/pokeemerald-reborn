Route104_OnResume::
# 2 "data/maps/Route104/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Common_EventScript_RemoveStaticPokemonEncounter
	return


Route104_EventScript_HideEncounters::
# 6 "data/maps/Route104/scripts.pory"
	setflag FLAG_TEMP_B
	return


Route104_EventScript_RandomizeEnconters::
# 11 "data/maps/Route104/scripts.pory"
	setflag FLAG_TEMP_5
# 12 "data/maps/Route104/scripts.pory"
	random 10
# 13 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_lt Route104_EventScript_RandomizeEnconters_2
Route104_EventScript_RandomizeEnconters_1:
# 18 "data/maps/Route104/scripts.pory"
	setflag FLAG_TEMP_6
# 19 "data/maps/Route104/scripts.pory"
	random 10
# 20 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_lt Route104_EventScript_RandomizeEnconters_5
Route104_EventScript_RandomizeEnconters_4:
# 25 "data/maps/Route104/scripts.pory"
	setflag FLAG_TEMP_7
# 26 "data/maps/Route104/scripts.pory"
	random 10
# 27 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_lt Route104_EventScript_RandomizeEnconters_8
Route104_EventScript_RandomizeEnconters_7:
# 32 "data/maps/Route104/scripts.pory"
	setflag FLAG_TEMP_8
# 33 "data/maps/Route104/scripts.pory"
	random 10
# 34 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_lt Route104_EventScript_RandomizeEnconters_11
Route104_EventScript_RandomizeEnconters_10:
# 39 "data/maps/Route104/scripts.pory"
	setflag FLAG_TEMP_9
# 40 "data/maps/Route104/scripts.pory"
	random 10
# 41 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_lt Route104_EventScript_RandomizeEnconters_14
Route104_EventScript_RandomizeEnconters_13:
# 46 "data/maps/Route104/scripts.pory"
	setflag FLAG_TEMP_A
# 47 "data/maps/Route104/scripts.pory"
	random 10
# 48 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_lt Route104_EventScript_RandomizeEnconters_17
Route104_EventScript_RandomizeEnconters_16:
# 53 "data/maps/Route104/scripts.pory"
	setflag FLAG_TEMP_B
# 54 "data/maps/Route104/scripts.pory"
	random 10
# 55 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_lt Route104_EventScript_RandomizeEnconters_20
Route104_EventScript_RandomizeEnconters_19:
# 60 "data/maps/Route104/scripts.pory"
	setflag FLAG_TEMP_C
# 61 "data/maps/Route104/scripts.pory"
	random 10
# 62 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_lt Route104_EventScript_RandomizeEnconters_22
	return

Route104_EventScript_RandomizeEnconters_2:
# 14 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RandomizeEncounterVar5
# 15 "data/maps/Route104/scripts.pory"
	clearflag FLAG_TEMP_5
	goto Route104_EventScript_RandomizeEnconters_1

Route104_EventScript_RandomizeEnconters_5:
# 21 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RandomizeEncounterVar6
# 22 "data/maps/Route104/scripts.pory"
	clearflag FLAG_TEMP_6
	goto Route104_EventScript_RandomizeEnconters_4

Route104_EventScript_RandomizeEnconters_8:
# 28 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RandomizeEncounterVar7
# 29 "data/maps/Route104/scripts.pory"
	clearflag FLAG_TEMP_7
	goto Route104_EventScript_RandomizeEnconters_7

Route104_EventScript_RandomizeEnconters_11:
# 35 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RandomizeEncounterVar8
# 36 "data/maps/Route104/scripts.pory"
	clearflag FLAG_TEMP_8
	goto Route104_EventScript_RandomizeEnconters_10

Route104_EventScript_RandomizeEnconters_14:
# 42 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RandomizeEncounterVar9
# 43 "data/maps/Route104/scripts.pory"
	clearflag FLAG_TEMP_9
	goto Route104_EventScript_RandomizeEnconters_13

Route104_EventScript_RandomizeEnconters_17:
# 49 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RandomizeEncounterVarA
# 50 "data/maps/Route104/scripts.pory"
	clearflag FLAG_TEMP_A
	goto Route104_EventScript_RandomizeEnconters_16

Route104_EventScript_RandomizeEnconters_20:
# 56 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RandomizeEncounterVarB
# 57 "data/maps/Route104/scripts.pory"
	clearflag FLAG_TEMP_B
	goto Route104_EventScript_RandomizeEnconters_19

Route104_EventScript_RandomizeEnconters_22:
# 63 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RandomizeEncounterVarC
# 64 "data/maps/Route104/scripts.pory"
	clearflag FLAG_TEMP_C
	return


Route104_EventScript_RandomizeEncounterVar5::
# 69 "data/maps/Route104/scripts.pory"
	random 10
# 70 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 71 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_RandomizeEncounterVar5_2
# 72 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_RandomizeEncounterVar5_2
# 73 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_RandomizeEncounterVar5_2
# 76 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_RandomizeEncounterVar5_3
# 77 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_RandomizeEncounterVar5_3
# 80 "data/maps/Route104/scripts.pory"
	case 5, Route104_EventScript_RandomizeEncounterVar5_4
# 81 "data/maps/Route104/scripts.pory"
	case 6, Route104_EventScript_RandomizeEncounterVar5_4
# 84 "data/maps/Route104/scripts.pory"
	case 7, Route104_EventScript_RandomizeEncounterVar5_5
# 85 "data/maps/Route104/scripts.pory"
	case 8, Route104_EventScript_RandomizeEncounterVar5_5
# 88 "data/maps/Route104/scripts.pory"
	case 9, Route104_EventScript_RandomizeEncounterVar5_6
	return

Route104_EventScript_RandomizeEncounterVar5_2:
# 74 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( WINGULL )
# 75 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_5, 0
	return

Route104_EventScript_RandomizeEncounterVar5_3:
# 78 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( ZIGZAGOON )
# 79 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

Route104_EventScript_RandomizeEncounterVar5_4:
# 82 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( LOTAD )
# 83 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

Route104_EventScript_RandomizeEncounterVar5_5:
# 86 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( WURMPLE )
# 87 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_5, 3
	return

Route104_EventScript_RandomizeEncounterVar5_6:
# 89 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( AZURILL )
# 90 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_5, 4
	return


Route104_EventScript_EncounterVar5::
# 95 "data/maps/Route104/scripts.pory"
	lock
# 96 "data/maps/Route104/scripts.pory"
	switch VAR_TEMP_5
# 97 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVar5_3
# 109 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVar5_4
# 121 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVar5_5
# 133 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVar5_6
# 145 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVar5_7
Route104_EventScript_EncounterVar5_1:
# 158 "data/maps/Route104/scripts.pory"
	release
	return

Route104_EventScript_EncounterVar5_3:
# 98 "data/maps/Route104/scripts.pory"
	random 5
# 99 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 100 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVar5_9
# 101 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVar5_9
# 103 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVar5_10
# 104 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVar5_10
# 106 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVar5_11
	goto Route104_EventScript_EncounterVar5_1

Route104_EventScript_EncounterVar5_4:
# 110 "data/maps/Route104/scripts.pory"
	random 5
# 111 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 112 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVar5_13
# 113 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVar5_13
# 115 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVar5_14
# 116 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVar5_14
# 118 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVar5_15
	goto Route104_EventScript_EncounterVar5_1

Route104_EventScript_EncounterVar5_5:
# 122 "data/maps/Route104/scripts.pory"
	random 5
# 123 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 124 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVar5_17
# 125 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVar5_17
# 127 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVar5_18
# 128 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVar5_18
# 130 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVar5_19
	goto Route104_EventScript_EncounterVar5_1

Route104_EventScript_EncounterVar5_6:
# 134 "data/maps/Route104/scripts.pory"
	random 5
# 135 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 136 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVar5_21
# 137 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVar5_21
# 139 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVar5_22
# 140 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVar5_22
# 142 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVar5_23
	goto Route104_EventScript_EncounterVar5_1

Route104_EventScript_EncounterVar5_7:
# 146 "data/maps/Route104/scripts.pory"
	random 5
# 147 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 148 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVar5_25
# 149 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVar5_25
# 151 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVar5_26
# 152 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVar5_26
# 154 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVar5_27
	goto Route104_EventScript_EncounterVar5_1

Route104_EventScript_EncounterVar5_9:
# 102 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WINGULL, 4, FLAG_TEMP_5
	goto Route104_EventScript_EncounterVar5_1

Route104_EventScript_EncounterVar5_10:
# 105 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WINGULL, 5, FLAG_TEMP_5
	goto Route104_EventScript_EncounterVar5_1

Route104_EventScript_EncounterVar5_11:
# 107 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WINGULL, 6, FLAG_TEMP_5
	goto Route104_EventScript_EncounterVar5_1

Route104_EventScript_EncounterVar5_13:
# 114 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 4, FLAG_TEMP_5
	goto Route104_EventScript_EncounterVar5_1

Route104_EventScript_EncounterVar5_14:
# 117 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 5, FLAG_TEMP_5
	goto Route104_EventScript_EncounterVar5_1

Route104_EventScript_EncounterVar5_15:
# 119 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 6, FLAG_TEMP_5
	goto Route104_EventScript_EncounterVar5_1

Route104_EventScript_EncounterVar5_17:
# 126 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_LOTAD, 4, FLAG_TEMP_5
	goto Route104_EventScript_EncounterVar5_1

Route104_EventScript_EncounterVar5_18:
# 129 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_LOTAD, 5, FLAG_TEMP_5
	goto Route104_EventScript_EncounterVar5_1

Route104_EventScript_EncounterVar5_19:
# 131 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_LOTAD, 6, FLAG_TEMP_5
	goto Route104_EventScript_EncounterVar5_1

Route104_EventScript_EncounterVar5_21:
# 138 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 4, FLAG_TEMP_5
	goto Route104_EventScript_EncounterVar5_1

Route104_EventScript_EncounterVar5_22:
# 141 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 5, FLAG_TEMP_5
	goto Route104_EventScript_EncounterVar5_1

Route104_EventScript_EncounterVar5_23:
# 143 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 6, FLAG_TEMP_5
	goto Route104_EventScript_EncounterVar5_1

Route104_EventScript_EncounterVar5_25:
# 150 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_AZURILL, 4, FLAG_TEMP_5
	goto Route104_EventScript_EncounterVar5_1

Route104_EventScript_EncounterVar5_26:
# 153 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_AZURILL, 5, FLAG_TEMP_5
	goto Route104_EventScript_EncounterVar5_1

Route104_EventScript_EncounterVar5_27:
# 155 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_AZURILL, 6, FLAG_TEMP_5
	goto Route104_EventScript_EncounterVar5_1


Route104_EventScript_RandomizeEncounterVar6::
# 162 "data/maps/Route104/scripts.pory"
	random 5
# 163 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 164 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_RandomizeEncounterVar6_2
# 165 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_RandomizeEncounterVar6_2
# 166 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_RandomizeEncounterVar6_2
# 167 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_RandomizeEncounterVar6_2
# 170 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_RandomizeEncounterVar6_3
	return

Route104_EventScript_RandomizeEncounterVar6_2:
# 168 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( WINGULL )
# 169 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_6, 0
	return

Route104_EventScript_RandomizeEncounterVar6_3:
# 171 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( AZURILL )
# 172 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_6, 1
	return


Route104_EventScript_EncounterVar6::
# 177 "data/maps/Route104/scripts.pory"
	lock
# 178 "data/maps/Route104/scripts.pory"
	switch VAR_TEMP_6
# 179 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVar6_3
# 191 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVar6_4
Route104_EventScript_EncounterVar6_1:
# 204 "data/maps/Route104/scripts.pory"
	release
	return

Route104_EventScript_EncounterVar6_3:
# 180 "data/maps/Route104/scripts.pory"
	random 5
# 181 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 182 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVar6_6
# 183 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVar6_6
# 185 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVar6_7
# 186 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVar6_7
# 188 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVar6_8
	goto Route104_EventScript_EncounterVar6_1

Route104_EventScript_EncounterVar6_4:
# 192 "data/maps/Route104/scripts.pory"
	random 5
# 193 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 194 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVar6_10
# 195 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVar6_10
# 197 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVar6_11
# 198 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVar6_11
# 200 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVar6_12
	goto Route104_EventScript_EncounterVar6_1

Route104_EventScript_EncounterVar6_6:
# 184 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WINGULL, 4, FLAG_TEMP_6
	goto Route104_EventScript_EncounterVar6_1

Route104_EventScript_EncounterVar6_7:
# 187 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WINGULL, 5, FLAG_TEMP_6
	goto Route104_EventScript_EncounterVar6_1

Route104_EventScript_EncounterVar6_8:
# 189 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WINGULL, 6, FLAG_TEMP_6
	goto Route104_EventScript_EncounterVar6_1

Route104_EventScript_EncounterVar6_10:
# 196 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_AZURILL, 4, FLAG_TEMP_6
	goto Route104_EventScript_EncounterVar6_1

Route104_EventScript_EncounterVar6_11:
# 199 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_AZURILL, 5, FLAG_TEMP_6
	goto Route104_EventScript_EncounterVar6_1

Route104_EventScript_EncounterVar6_12:
# 201 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_AZURILL, 6, FLAG_TEMP_6
	goto Route104_EventScript_EncounterVar6_1


Route104_EventScript_RandomizeEncounterVar7::
# 208 "data/maps/Route104/scripts.pory"
	random 4
# 209 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 210 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_RandomizeEncounterVar7_2
# 211 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_RandomizeEncounterVar7_2
# 214 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_RandomizeEncounterVar7_3
# 217 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_RandomizeEncounterVar7_4
	return

Route104_EventScript_RandomizeEncounterVar7_2:
# 212 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( WURMPLE )
# 213 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_7, 0
	return

Route104_EventScript_RandomizeEncounterVar7_3:
# 215 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( LOTAD )
# 216 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_7, 1
	return

Route104_EventScript_RandomizeEncounterVar7_4:
# 218 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( ZIGZAGOON )
# 219 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_7, 2
	return


Route104_EventScript_EncounterVar7::
# 224 "data/maps/Route104/scripts.pory"
	lock
# 225 "data/maps/Route104/scripts.pory"
	switch VAR_TEMP_7
# 226 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVar7_3
# 238 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVar7_4
# 250 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVar7_5
Route104_EventScript_EncounterVar7_1:
# 263 "data/maps/Route104/scripts.pory"
	release
	return

Route104_EventScript_EncounterVar7_3:
# 227 "data/maps/Route104/scripts.pory"
	random 5
# 228 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 229 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVar7_7
# 230 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVar7_7
# 232 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVar7_8
# 233 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVar7_8
# 235 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVar7_9
	goto Route104_EventScript_EncounterVar7_1

Route104_EventScript_EncounterVar7_4:
# 239 "data/maps/Route104/scripts.pory"
	random 5
# 240 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 241 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVar7_11
# 242 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVar7_11
# 244 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVar7_12
# 245 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVar7_12
# 247 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVar7_13
	goto Route104_EventScript_EncounterVar7_1

Route104_EventScript_EncounterVar7_5:
# 251 "data/maps/Route104/scripts.pory"
	random 5
# 252 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 253 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVar7_15
# 254 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVar7_15
# 256 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVar7_16
# 257 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVar7_16
# 259 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVar7_17
	goto Route104_EventScript_EncounterVar7_1

Route104_EventScript_EncounterVar7_7:
# 231 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 4, FLAG_TEMP_7
	goto Route104_EventScript_EncounterVar7_1

Route104_EventScript_EncounterVar7_8:
# 234 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 5, FLAG_TEMP_7
	goto Route104_EventScript_EncounterVar7_1

Route104_EventScript_EncounterVar7_9:
# 236 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 6, FLAG_TEMP_7
	goto Route104_EventScript_EncounterVar7_1

Route104_EventScript_EncounterVar7_11:
# 243 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_LOTAD, 4, FLAG_TEMP_7
	goto Route104_EventScript_EncounterVar7_1

Route104_EventScript_EncounterVar7_12:
# 246 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_LOTAD, 5, FLAG_TEMP_7
	goto Route104_EventScript_EncounterVar7_1

Route104_EventScript_EncounterVar7_13:
# 248 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_LOTAD, 6, FLAG_TEMP_7
	goto Route104_EventScript_EncounterVar7_1

Route104_EventScript_EncounterVar7_15:
# 255 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 4, FLAG_TEMP_7
	goto Route104_EventScript_EncounterVar7_1

Route104_EventScript_EncounterVar7_16:
# 258 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 5, FLAG_TEMP_7
	goto Route104_EventScript_EncounterVar7_1

Route104_EventScript_EncounterVar7_17:
# 260 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 6, FLAG_TEMP_7
	goto Route104_EventScript_EncounterVar7_1


Route104_EventScript_RandomizeEncounterVar8::
# 267 "data/maps/Route104/scripts.pory"
	random 10
# 268 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 269 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_RandomizeEncounterVar8_2
# 270 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_RandomizeEncounterVar8_2
# 271 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_RandomizeEncounterVar8_2
# 274 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_RandomizeEncounterVar8_3
# 275 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_RandomizeEncounterVar8_3
# 278 "data/maps/Route104/scripts.pory"
	case 5, Route104_EventScript_RandomizeEncounterVar8_4
# 279 "data/maps/Route104/scripts.pory"
	case 6, Route104_EventScript_RandomizeEncounterVar8_4
# 282 "data/maps/Route104/scripts.pory"
	case 7, Route104_EventScript_RandomizeEncounterVar8_5
# 283 "data/maps/Route104/scripts.pory"
	case 8, Route104_EventScript_RandomizeEncounterVar8_5
# 286 "data/maps/Route104/scripts.pory"
	case 9, Route104_EventScript_RandomizeEncounterVar8_6
	return

Route104_EventScript_RandomizeEncounterVar8_2:
# 272 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( WINGULL )
# 273 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_8, 0
	return

Route104_EventScript_RandomizeEncounterVar8_3:
# 276 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( ZIGZAGOON )
# 277 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_8, 1
	return

Route104_EventScript_RandomizeEncounterVar8_4:
# 280 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( LOTAD )
# 281 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_8, 2
	return

Route104_EventScript_RandomizeEncounterVar8_5:
# 284 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( WURMPLE )
# 285 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_8, 3
	return

Route104_EventScript_RandomizeEncounterVar8_6:
# 287 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( AZURILL )
# 288 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_8, 4
	return


Route104_EventScript_EncounterVar8::
# 293 "data/maps/Route104/scripts.pory"
	lock
# 294 "data/maps/Route104/scripts.pory"
	switch VAR_TEMP_8
# 295 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVar8_3
# 307 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVar8_4
# 319 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVar8_5
# 331 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVar8_6
# 343 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVar8_7
Route104_EventScript_EncounterVar8_1:
# 356 "data/maps/Route104/scripts.pory"
	release
	return

Route104_EventScript_EncounterVar8_3:
# 296 "data/maps/Route104/scripts.pory"
	random 5
# 297 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 298 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVar8_9
# 299 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVar8_9
# 301 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVar8_10
# 302 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVar8_10
# 304 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVar8_11
	goto Route104_EventScript_EncounterVar8_1

Route104_EventScript_EncounterVar8_4:
# 308 "data/maps/Route104/scripts.pory"
	random 5
# 309 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 310 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVar8_13
# 311 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVar8_13
# 313 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVar8_14
# 314 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVar8_14
# 316 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVar8_15
	goto Route104_EventScript_EncounterVar8_1

Route104_EventScript_EncounterVar8_5:
# 320 "data/maps/Route104/scripts.pory"
	random 5
# 321 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 322 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVar8_17
# 323 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVar8_17
# 325 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVar8_18
# 326 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVar8_18
# 328 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVar8_19
	goto Route104_EventScript_EncounterVar8_1

Route104_EventScript_EncounterVar8_6:
# 332 "data/maps/Route104/scripts.pory"
	random 5
# 333 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 334 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVar8_21
# 335 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVar8_21
# 337 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVar8_22
# 338 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVar8_22
# 340 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVar8_23
	goto Route104_EventScript_EncounterVar8_1

Route104_EventScript_EncounterVar8_7:
# 344 "data/maps/Route104/scripts.pory"
	random 5
# 345 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 346 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVar8_25
# 347 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVar8_25
# 349 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVar8_26
# 350 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVar8_26
# 352 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVar8_27
	goto Route104_EventScript_EncounterVar8_1

Route104_EventScript_EncounterVar8_9:
# 300 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WINGULL, 4, FLAG_TEMP_8
	goto Route104_EventScript_EncounterVar8_1

Route104_EventScript_EncounterVar8_10:
# 303 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WINGULL, 5, FLAG_TEMP_8
	goto Route104_EventScript_EncounterVar8_1

Route104_EventScript_EncounterVar8_11:
# 305 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WINGULL, 6, FLAG_TEMP_8
	goto Route104_EventScript_EncounterVar8_1

Route104_EventScript_EncounterVar8_13:
# 312 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 4, FLAG_TEMP_8
	goto Route104_EventScript_EncounterVar8_1

Route104_EventScript_EncounterVar8_14:
# 315 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 5, FLAG_TEMP_8
	goto Route104_EventScript_EncounterVar8_1

Route104_EventScript_EncounterVar8_15:
# 317 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 6, FLAG_TEMP_8
	goto Route104_EventScript_EncounterVar8_1

Route104_EventScript_EncounterVar8_17:
# 324 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_LOTAD, 4, FLAG_TEMP_8
	goto Route104_EventScript_EncounterVar8_1

Route104_EventScript_EncounterVar8_18:
# 327 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_LOTAD, 5, FLAG_TEMP_8
	goto Route104_EventScript_EncounterVar8_1

Route104_EventScript_EncounterVar8_19:
# 329 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_LOTAD, 6, FLAG_TEMP_8
	goto Route104_EventScript_EncounterVar8_1

Route104_EventScript_EncounterVar8_21:
# 336 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 4, FLAG_TEMP_8
	goto Route104_EventScript_EncounterVar8_1

Route104_EventScript_EncounterVar8_22:
# 339 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 5, FLAG_TEMP_8
	goto Route104_EventScript_EncounterVar8_1

Route104_EventScript_EncounterVar8_23:
# 341 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 6, FLAG_TEMP_8
	goto Route104_EventScript_EncounterVar8_1

Route104_EventScript_EncounterVar8_25:
# 348 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_AZURILL, 4, FLAG_TEMP_8
	goto Route104_EventScript_EncounterVar8_1

Route104_EventScript_EncounterVar8_26:
# 351 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_AZURILL, 5, FLAG_TEMP_8
	goto Route104_EventScript_EncounterVar8_1

Route104_EventScript_EncounterVar8_27:
# 353 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_AZURILL, 6, FLAG_TEMP_8
	goto Route104_EventScript_EncounterVar8_1


Route104_EventScript_RandomizeEncounterVar9::
# 360 "data/maps/Route104/scripts.pory"
	random 8
# 361 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 362 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_RandomizeEncounterVar9_2
# 363 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_RandomizeEncounterVar9_2
# 364 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_RandomizeEncounterVar9_2
# 367 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_RandomizeEncounterVar9_3
# 368 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_RandomizeEncounterVar9_3
# 371 "data/maps/Route104/scripts.pory"
	case 5, Route104_EventScript_RandomizeEncounterVar9_4
# 372 "data/maps/Route104/scripts.pory"
	case 6, Route104_EventScript_RandomizeEncounterVar9_4
# 375 "data/maps/Route104/scripts.pory"
	case 7, Route104_EventScript_RandomizeEncounterVar9_5
	return

Route104_EventScript_RandomizeEncounterVar9_2:
# 365 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_9, OBJ_EVENT_GFX_SPECIES ( WINGULL )
# 366 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_9, 0
	return

Route104_EventScript_RandomizeEncounterVar9_3:
# 369 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_9, OBJ_EVENT_GFX_SPECIES ( ZIGZAGOON )
# 370 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_9, 1
	return

Route104_EventScript_RandomizeEncounterVar9_4:
# 373 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_9, OBJ_EVENT_GFX_SPECIES ( WURMPLE )
# 374 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_9, 2
	return

Route104_EventScript_RandomizeEncounterVar9_5:
# 376 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_9, OBJ_EVENT_GFX_SPECIES ( LOTAD )
# 377 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_9, 3
	return


Route104_EventScript_EncounterVar9::
# 382 "data/maps/Route104/scripts.pory"
	lock
# 383 "data/maps/Route104/scripts.pory"
	switch VAR_TEMP_9
# 384 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVar9_3
# 395 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVar9_4
# 406 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVar9_5
# 417 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVar9_6
Route104_EventScript_EncounterVar9_1:
# 429 "data/maps/Route104/scripts.pory"
	release
	return

Route104_EventScript_EncounterVar9_3:
# 385 "data/maps/Route104/scripts.pory"
	random 4
# 386 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 387 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVar9_8
# 389 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVar9_9
# 390 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVar9_9
# 392 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVar9_10
	goto Route104_EventScript_EncounterVar9_1

Route104_EventScript_EncounterVar9_4:
# 396 "data/maps/Route104/scripts.pory"
	random 4
# 397 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 398 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVar9_12
# 400 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVar9_13
# 401 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVar9_13
# 403 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVar9_14
	goto Route104_EventScript_EncounterVar9_1

Route104_EventScript_EncounterVar9_5:
# 407 "data/maps/Route104/scripts.pory"
	random 4
# 408 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 409 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVar9_16
# 411 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVar9_17
# 412 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVar9_17
# 414 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVar9_18
	goto Route104_EventScript_EncounterVar9_1

Route104_EventScript_EncounterVar9_6:
# 418 "data/maps/Route104/scripts.pory"
	random 4
# 419 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 420 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVar9_20
# 422 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVar9_21
# 423 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVar9_21
# 425 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVar9_22
	goto Route104_EventScript_EncounterVar9_1

Route104_EventScript_EncounterVar9_8:
# 388 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WINGULL, 4, FLAG_TEMP_9
	goto Route104_EventScript_EncounterVar9_1

Route104_EventScript_EncounterVar9_9:
# 391 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WINGULL, 5, FLAG_TEMP_9
	goto Route104_EventScript_EncounterVar9_1

Route104_EventScript_EncounterVar9_10:
# 393 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WINGULL, 6, FLAG_TEMP_9
	goto Route104_EventScript_EncounterVar9_1

Route104_EventScript_EncounterVar9_12:
# 399 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 4, FLAG_TEMP_9
	goto Route104_EventScript_EncounterVar9_1

Route104_EventScript_EncounterVar9_13:
# 402 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 5, FLAG_TEMP_9
	goto Route104_EventScript_EncounterVar9_1

Route104_EventScript_EncounterVar9_14:
# 404 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 6, FLAG_TEMP_9
	goto Route104_EventScript_EncounterVar9_1

Route104_EventScript_EncounterVar9_16:
# 410 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 4, FLAG_TEMP_9
	goto Route104_EventScript_EncounterVar9_1

Route104_EventScript_EncounterVar9_17:
# 413 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 5, FLAG_TEMP_9
	goto Route104_EventScript_EncounterVar9_1

Route104_EventScript_EncounterVar9_18:
# 415 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 6, FLAG_TEMP_9
	goto Route104_EventScript_EncounterVar9_1

Route104_EventScript_EncounterVar9_20:
# 421 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_LOTAD, 4, FLAG_TEMP_9
	goto Route104_EventScript_EncounterVar9_1

Route104_EventScript_EncounterVar9_21:
# 424 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_LOTAD, 5, FLAG_TEMP_9
	goto Route104_EventScript_EncounterVar9_1

Route104_EventScript_EncounterVar9_22:
# 426 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_LOTAD, 6, FLAG_TEMP_9
	goto Route104_EventScript_EncounterVar9_1


Route104_EventScript_RandomizeEncounterVarA::
# 433 "data/maps/Route104/scripts.pory"
	random 5
# 434 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 435 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_RandomizeEncounterVarA_2
# 436 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_RandomizeEncounterVarA_2
# 439 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_RandomizeEncounterVarA_3
# 440 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_RandomizeEncounterVarA_3
# 443 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_RandomizeEncounterVarA_4
	return

Route104_EventScript_RandomizeEncounterVarA_2:
# 437 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SPECIES ( LOTAD )
# 438 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_A, 0
	return

Route104_EventScript_RandomizeEncounterVarA_3:
# 441 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SPECIES ( AZURILL )
# 442 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_A, 1
	return

Route104_EventScript_RandomizeEncounterVarA_4:
# 444 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SPECIES ( WINGULL )
# 445 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_A, 2
	return


Route104_EventScript_EncounterVarA::
# 450 "data/maps/Route104/scripts.pory"
	lock
# 451 "data/maps/Route104/scripts.pory"
	switch VAR_TEMP_A
# 452 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVarA_3
# 464 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVarA_4
# 476 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVarA_5
Route104_EventScript_EncounterVarA_1:
# 489 "data/maps/Route104/scripts.pory"
	release
	return

Route104_EventScript_EncounterVarA_3:
# 453 "data/maps/Route104/scripts.pory"
	random 5
# 454 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 455 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVarA_7
# 457 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVarA_8
# 458 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVarA_8
# 460 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVarA_9
# 461 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVarA_9
	goto Route104_EventScript_EncounterVarA_1

Route104_EventScript_EncounterVarA_4:
# 465 "data/maps/Route104/scripts.pory"
	random 5
# 466 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 467 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVarA_11
# 469 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVarA_12
# 470 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVarA_12
# 472 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVarA_13
# 473 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVarA_13
	goto Route104_EventScript_EncounterVarA_1

Route104_EventScript_EncounterVarA_5:
# 477 "data/maps/Route104/scripts.pory"
	random 5
# 478 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 479 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVarA_15
# 481 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVarA_16
# 482 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVarA_16
# 484 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVarA_17
# 485 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVarA_17
	goto Route104_EventScript_EncounterVarA_1

Route104_EventScript_EncounterVarA_7:
# 456 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_LOTAD, 4, FLAG_TEMP_A
	goto Route104_EventScript_EncounterVarA_1

Route104_EventScript_EncounterVarA_8:
# 459 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_LOTAD, 5, FLAG_TEMP_A
	goto Route104_EventScript_EncounterVarA_1

Route104_EventScript_EncounterVarA_9:
# 462 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_LOTAD, 6, FLAG_TEMP_A
	goto Route104_EventScript_EncounterVarA_1

Route104_EventScript_EncounterVarA_11:
# 468 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_AZURILL, 4, FLAG_TEMP_A
	goto Route104_EventScript_EncounterVarA_1

Route104_EventScript_EncounterVarA_12:
# 471 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_AZURILL, 5, FLAG_TEMP_A
	goto Route104_EventScript_EncounterVarA_1

Route104_EventScript_EncounterVarA_13:
# 474 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_AZURILL, 6, FLAG_TEMP_A
	goto Route104_EventScript_EncounterVarA_1

Route104_EventScript_EncounterVarA_15:
# 480 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WINGULL, 4, FLAG_TEMP_A
	goto Route104_EventScript_EncounterVarA_1

Route104_EventScript_EncounterVarA_16:
# 483 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WINGULL, 5, FLAG_TEMP_A
	goto Route104_EventScript_EncounterVarA_1

Route104_EventScript_EncounterVarA_17:
# 486 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WINGULL, 6, FLAG_TEMP_A
	goto Route104_EventScript_EncounterVarA_1


Route104_EventScript_RandomizeEncounterVarB::
# 493 "data/maps/Route104/scripts.pory"
	random 5
# 494 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 495 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_RandomizeEncounterVarB_2
# 496 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_RandomizeEncounterVarB_2
# 499 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_RandomizeEncounterVarB_3
# 500 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_RandomizeEncounterVarB_3
# 503 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_RandomizeEncounterVarB_4
	return

Route104_EventScript_RandomizeEncounterVarB_2:
# 497 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_SPECIES ( ZIGZAGOON )
# 498 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_B, 0
	return

Route104_EventScript_RandomizeEncounterVarB_3:
# 501 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_SPECIES ( WURMPLE )
# 502 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_B, 1
	return

Route104_EventScript_RandomizeEncounterVarB_4:
# 504 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_SPECIES ( CRABRAWLER )
# 505 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_B, 2
	return


Route104_EventScript_EncounterVarB::
# 510 "data/maps/Route104/scripts.pory"
	lock
# 511 "data/maps/Route104/scripts.pory"
	switch VAR_TEMP_B
# 512 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVarB_3
# 524 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVarB_4
# 536 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVarB_5
Route104_EventScript_EncounterVarB_1:
# 549 "data/maps/Route104/scripts.pory"
	release
	return

Route104_EventScript_EncounterVarB_3:
# 513 "data/maps/Route104/scripts.pory"
	random 5
# 514 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 515 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVarB_7
# 517 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVarB_8
# 518 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVarB_8
# 520 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVarB_9
# 521 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVarB_9
	goto Route104_EventScript_EncounterVarB_1

Route104_EventScript_EncounterVarB_4:
# 525 "data/maps/Route104/scripts.pory"
	random 5
# 526 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 527 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVarB_11
# 529 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVarB_12
# 530 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVarB_12
# 532 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVarB_13
# 533 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVarB_13
	goto Route104_EventScript_EncounterVarB_1

Route104_EventScript_EncounterVarB_5:
# 537 "data/maps/Route104/scripts.pory"
	random 5
# 538 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 539 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVarB_15
# 541 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVarB_16
# 542 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVarB_16
# 544 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVarB_17
# 545 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVarB_17
	goto Route104_EventScript_EncounterVarB_1

Route104_EventScript_EncounterVarB_7:
# 516 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 4, FLAG_TEMP_B
	goto Route104_EventScript_EncounterVarB_1

Route104_EventScript_EncounterVarB_8:
# 519 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 5, FLAG_TEMP_B
	goto Route104_EventScript_EncounterVarB_1

Route104_EventScript_EncounterVarB_9:
# 522 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 6, FLAG_TEMP_B
	goto Route104_EventScript_EncounterVarB_1

Route104_EventScript_EncounterVarB_11:
# 528 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 4, FLAG_TEMP_B
	goto Route104_EventScript_EncounterVarB_1

Route104_EventScript_EncounterVarB_12:
# 531 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 5, FLAG_TEMP_B
	goto Route104_EventScript_EncounterVarB_1

Route104_EventScript_EncounterVarB_13:
# 534 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 6, FLAG_TEMP_B
	goto Route104_EventScript_EncounterVarB_1

Route104_EventScript_EncounterVarB_15:
# 540 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_CRABRAWLER, 4, FLAG_TEMP_B
	goto Route104_EventScript_EncounterVarB_1

Route104_EventScript_EncounterVarB_16:
# 543 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_CRABRAWLER, 5, FLAG_TEMP_B
	goto Route104_EventScript_EncounterVarB_1

Route104_EventScript_EncounterVarB_17:
# 546 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_CRABRAWLER, 6, FLAG_TEMP_B
	goto Route104_EventScript_EncounterVarB_1


Route104_EventScript_RandomizeEncounterVarC::
# 553 "data/maps/Route104/scripts.pory"
	random 5
# 554 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 555 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_RandomizeEncounterVarC_2
# 556 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_RandomizeEncounterVarC_2
# 559 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_RandomizeEncounterVarC_3
# 560 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_RandomizeEncounterVarC_3
# 563 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_RandomizeEncounterVarC_4
	return

Route104_EventScript_RandomizeEncounterVarC_2:
# 557 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_C, OBJ_EVENT_GFX_SPECIES ( LOTAD )
# 558 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_C, 0
	return

Route104_EventScript_RandomizeEncounterVarC_3:
# 561 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SPECIES ( AZURILL )
# 562 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_C, 1
	return

Route104_EventScript_RandomizeEncounterVarC_4:
# 564 "data/maps/Route104/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SPECIES ( WINGULL )
# 565 "data/maps/Route104/scripts.pory"
	setvar VAR_TEMP_C, 2
	return


Route104_EventScript_EncounterVarC::
# 570 "data/maps/Route104/scripts.pory"
	lock
# 571 "data/maps/Route104/scripts.pory"
	switch VAR_TEMP_C
# 572 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVarC_3
# 584 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVarC_4
# 596 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVarC_5
Route104_EventScript_EncounterVarC_1:
# 609 "data/maps/Route104/scripts.pory"
	release
	return

Route104_EventScript_EncounterVarC_3:
# 573 "data/maps/Route104/scripts.pory"
	random 5
# 574 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 575 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVarC_7
# 577 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVarC_8
# 578 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVarC_8
# 580 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVarC_9
# 581 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVarC_9
	goto Route104_EventScript_EncounterVarC_1

Route104_EventScript_EncounterVarC_4:
# 585 "data/maps/Route104/scripts.pory"
	random 5
# 586 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 587 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVarC_11
# 589 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVarC_12
# 590 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVarC_12
# 592 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVarC_13
# 593 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVarC_13
	goto Route104_EventScript_EncounterVarC_1

Route104_EventScript_EncounterVarC_5:
# 597 "data/maps/Route104/scripts.pory"
	random 5
# 598 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 599 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_EncounterVarC_15
# 601 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_EncounterVarC_16
# 602 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_EncounterVarC_16
# 604 "data/maps/Route104/scripts.pory"
	case 3, Route104_EventScript_EncounterVarC_17
# 605 "data/maps/Route104/scripts.pory"
	case 4, Route104_EventScript_EncounterVarC_17
	goto Route104_EventScript_EncounterVarC_1

Route104_EventScript_EncounterVarC_7:
# 576 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_LOTAD, 4, FLAG_TEMP_C
	goto Route104_EventScript_EncounterVarC_1

Route104_EventScript_EncounterVarC_8:
# 579 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_LOTAD, 5, FLAG_TEMP_C
	goto Route104_EventScript_EncounterVarC_1

Route104_EventScript_EncounterVarC_9:
# 582 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_LOTAD, 6, FLAG_TEMP_C
	goto Route104_EventScript_EncounterVarC_1

Route104_EventScript_EncounterVarC_11:
# 588 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_AZURILL, 4, FLAG_TEMP_C
	goto Route104_EventScript_EncounterVarC_1

Route104_EventScript_EncounterVarC_12:
# 591 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_AZURILL, 5, FLAG_TEMP_C
	goto Route104_EventScript_EncounterVarC_1

Route104_EventScript_EncounterVarC_13:
# 594 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_AZURILL, 6, FLAG_TEMP_C
	goto Route104_EventScript_EncounterVarC_1

Route104_EventScript_EncounterVarC_15:
# 600 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WINGULL, 4, FLAG_TEMP_C
	goto Route104_EventScript_EncounterVarC_1

Route104_EventScript_EncounterVarC_16:
# 603 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WINGULL, 5, FLAG_TEMP_C
	goto Route104_EventScript_EncounterVarC_1

Route104_EventScript_EncounterVarC_17:
# 606 "data/maps/Route104/scripts.pory"
	dowildencounter SPECIES_WINGULL, 6, FLAG_TEMP_C
	goto Route104_EventScript_EncounterVarC_1


# 612 "data/maps/Route104/scripts.pory"

# 613 "data/maps/Route104/scripts.pory"
@ NOTE: Route 104's sail to Dewford script references local IDs from Dewford's map.
# 614 "data/maps/Route104/scripts.pory"
@  These are labeled in DewfordTown/scripts.inc
# 615 "data/maps/Route104/scripts.pory"
.set LOCALID_RIVAL, 34
# 616 "data/maps/Route104/scripts.pory"

# 617 "data/maps/Route104/scripts.pory"
Route104_MapScripts::
# 618 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route104_OnFrame
# 619 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_OnTransition
# 620 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route104_OnResume
# 621 "data/maps/Route104/scripts.pory"
	.byte 0
# 622 "data/maps/Route104/scripts.pory"

# 623 "data/maps/Route104/scripts.pory"
Route104_OnFrame:
# 624 "data/maps/Route104/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_StartSailToDewford
# 625 "data/maps/Route104/scripts.pory"
	.2byte 0
# 626 "data/maps/Route104/scripts.pory"

# 627 "data/maps/Route104/scripts.pory"
Route104_EventScript_StartSailToDewford::
# 628 "data/maps/Route104/scripts.pory"
	lockall
# 629 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewford
# 630 "data/maps/Route104/scripts.pory"
	end
# 631 "data/maps/Route104/scripts.pory"

# 632 "data/maps/Route104/scripts.pory"
Route104_OnTransition:
# 633 "data/maps/Route104/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 634 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_TrySetRivalPos
# 635 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_ShowOrHideWhiteHerbFlorist
# 636 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RandomizeEnconters
# 637 "data/maps/Route104/scripts.pory"
	call_if_unset FLAG_DEFEATED_RIVAL_ROUTE103 Route104_EventScript_HideEncounters
# 638 "data/maps/Route104/scripts.pory"
	end
# 639 "data/maps/Route104/scripts.pory"

# 640 "data/maps/Route104/scripts.pory"
Route104_EventScript_ShowOrHideWhiteHerbFlorist::
# 641 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_EventScript_HideWhiteHerbFlorist
# 642 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_EventScript_HideWhiteHerbFlorist
# 643 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 644 "data/maps/Route104/scripts.pory"
	return
# 645 "data/maps/Route104/scripts.pory"

# 646 "data/maps/Route104/scripts.pory"
Route104_EventScript_HideWhiteHerbFlorist::
# 647 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 648 "data/maps/Route104/scripts.pory"
	return
# 649 "data/maps/Route104/scripts.pory"

# 650 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrySetRivalPos::
# 651 "data/maps/Route104/scripts.pory"
	goto_if_ge VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_DontSetRivalPos
# 652 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, Route104_EventScript_DontSetRivalPos
# 653 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_DontSetRivalPos
# 654 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 17, 52
# 655 "data/maps/Route104/scripts.pory"
	return
# 656 "data/maps/Route104/scripts.pory"

# 657 "data/maps/Route104/scripts.pory"
Route104_EventScript_DontSetRivalPos::
# 658 "data/maps/Route104/scripts.pory"
	return
# 659 "data/maps/Route104/scripts.pory"

# 660 "data/maps/Route104/scripts.pory"
Route104_EventScript_Rival::
# 661 "data/maps/Route104/scripts.pory"
	lockall
# 662 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 1
# 663 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 664 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 665 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 666 "data/maps/Route104/scripts.pory"

# 667 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalTrigger::
# 668 "data/maps/Route104/scripts.pory"
	lockall
# 669 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 670 "data/maps/Route104/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 671 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 672 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 673 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 674 "data/maps/Route104/scripts.pory"
	delay 10
# 675 "data/maps/Route104/scripts.pory"
	addobject LOCALID_RIVAL
# 676 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_RIVAL
# 677 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBackUp
# 678 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 679 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalExitBrineysCottage
# 680 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 681 "data/maps/Route104/scripts.pory"
	delay 20
# 682 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 0
# 683 "data/maps/Route104/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 684 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 685 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 686 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 687 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 688 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 689 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 690 "data/maps/Route104/scripts.pory"

# 691 "data/maps/Route104/scripts.pory"
@ Unused, shares script with Rustboro encounter instead
# 692 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayRivalMusic::
# 693 "data/maps/Route104/scripts.pory"
	checkplayergender
# 694 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_PlayMayMusic
# 695 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_PlayBrendanMusic
# 696 "data/maps/Route104/scripts.pory"
	return
# 697 "data/maps/Route104/scripts.pory"

# 698 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayMayMusic::
# 699 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 700 "data/maps/Route104/scripts.pory"
	return
# 701 "data/maps/Route104/scripts.pory"

# 702 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayBrendanMusic::
# 703 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 704 "data/maps/Route104/scripts.pory"
	return
# 705 "data/maps/Route104/scripts.pory"

# 706 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalEncounter::
# 707 "data/maps/Route104/scripts.pory"
	checkplayergender
# 708 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_MayEncounter
# 709 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_BrendanEncounter
# 710 "data/maps/Route104/scripts.pory"
	end
# 711 "data/maps/Route104/scripts.pory"

# 712 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayEncounter::
# 713 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_MayDefeated
# 714 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_MayAskToBattle
# 715 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 716 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayWeShouldRegister, MSGBOX_DEFAULT
# 717 "data/maps/Route104/scripts.pory"
	closemessage
# 718 "data/maps/Route104/scripts.pory"
	delay 30
# 719 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 720 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredMay, MSGBOX_DEFAULT
# 721 "data/maps/Route104/scripts.pory"
	waitfanfare
# 722 "data/maps/Route104/scripts.pory"
	closemessage
# 723 "data/maps/Route104/scripts.pory"
	delay 30
# 724 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 725 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 726 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 727 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHowsYourPokedex, MSGBOX_DEFAULT
# 728 "data/maps/Route104/scripts.pory"
	closemessage
# 729 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 730 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 731 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 732 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 733 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayMinesDecentLetsBattle, MSGBOX_YESNO
# 734 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 735 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 736 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 737 "data/maps/Route104/scripts.pory"
	releaseall
# 738 "data/maps/Route104/scripts.pory"
	end
# 739 "data/maps/Route104/scripts.pory"

# 740 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalWalkSlowLeft:
# 741 "data/maps/Route104/scripts.pory"
	walk_slow_left
# 742 "data/maps/Route104/scripts.pory"
	step_end
# 743 "data/maps/Route104/scripts.pory"

# 744 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalApproachPlayer:
# 745 "data/maps/Route104/scripts.pory"
	walk_down
# 746 "data/maps/Route104/scripts.pory"
	face_right
# 747 "data/maps/Route104/scripts.pory"
	step_end
# 748 "data/maps/Route104/scripts.pory"

# 749 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerFaceRival:
# 750 "data/maps/Route104/scripts.pory"
	delay_4
# 751 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 752 "data/maps/Route104/scripts.pory"
	step_end
# 753 "data/maps/Route104/scripts.pory"

# 754 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayAskToBattle::
# 755 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayLetsBattle, MSGBOX_YESNO
# 756 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 757 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 758 "data/maps/Route104/scripts.pory"
	releaseall
# 759 "data/maps/Route104/scripts.pory"
	end
# 760 "data/maps/Route104/scripts.pory"

# 761 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMay::
# 762 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayIntro, MSGBOX_DEFAULT
# 763 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 764 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleMayTreecko
# 765 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleMayTorchic
# 766 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleMayMudkip
# 767 "data/maps/Route104/scripts.pory"
	end
# 768 "data/maps/Route104/scripts.pory"

# 769 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayDefeated::
# 770 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayPostBattle, MSGBOX_DEFAULT
# 771 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 772 "data/maps/Route104/scripts.pory"
	releaseall
# 773 "data/maps/Route104/scripts.pory"
	end
# 774 "data/maps/Route104/scripts.pory"

# 775 "data/maps/Route104/scripts.pory"
Route104_EventScript_RestoreMusic::
# 776 "data/maps/Route104/scripts.pory"
	savebgm MUS_DUMMY
# 777 "data/maps/Route104/scripts.pory"
	fadedefaultbgm
# 778 "data/maps/Route104/scripts.pory"
	return
# 779 "data/maps/Route104/scripts.pory"

# 780 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTreecko::
# 781 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, Route104_Text_MayDefeat
# 782 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 783 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 784 "data/maps/Route104/scripts.pory"
	end
# 785 "data/maps/Route104/scripts.pory"

# 786 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTorchic::
# 787 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, Route104_Text_MayDefeat
# 788 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 789 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 790 "data/maps/Route104/scripts.pory"
	end
# 791 "data/maps/Route104/scripts.pory"

# 792 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayMudkip::
# 793 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, Route104_Text_MayDefeat
# 794 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 795 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 796 "data/maps/Route104/scripts.pory"
	end
# 797 "data/maps/Route104/scripts.pory"

# 798 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanEncounter::
# 799 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_BrendanDefeated
# 800 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_BrendanAskToBattle
# 801 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 802 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanWeShouldRegister, MSGBOX_DEFAULT
# 803 "data/maps/Route104/scripts.pory"
	closemessage
# 804 "data/maps/Route104/scripts.pory"
	delay 30
# 805 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 806 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 807 "data/maps/Route104/scripts.pory"
	waitfanfare
# 808 "data/maps/Route104/scripts.pory"
	closemessage
# 809 "data/maps/Route104/scripts.pory"
	delay 30
# 810 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 811 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 812 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 813 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanHowsYourPokedex, MSGBOX_DEFAULT
# 814 "data/maps/Route104/scripts.pory"
	closemessage
# 815 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 816 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 817 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 818 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 819 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanDoingGreatLetsBattle, MSGBOX_YESNO
# 820 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 821 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 822 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 823 "data/maps/Route104/scripts.pory"
	releaseall
# 824 "data/maps/Route104/scripts.pory"
	end
# 825 "data/maps/Route104/scripts.pory"

# 826 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanAskToBattle::
# 827 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanLetsBattle, MSGBOX_YESNO
# 828 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 829 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 830 "data/maps/Route104/scripts.pory"
	releaseall
# 831 "data/maps/Route104/scripts.pory"
	end
# 832 "data/maps/Route104/scripts.pory"

# 833 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendan::
# 834 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanIntro, MSGBOX_DEFAULT
# 835 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 836 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleBrendanTreecko
# 837 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleBrendanTorchic
# 838 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleBrendanMudkip
# 839 "data/maps/Route104/scripts.pory"
	end
# 840 "data/maps/Route104/scripts.pory"

# 841 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanDefeated::
# 842 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanPostBattle, MSGBOX_DEFAULT
# 843 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 844 "data/maps/Route104/scripts.pory"
	releaseall
# 845 "data/maps/Route104/scripts.pory"
	end
# 846 "data/maps/Route104/scripts.pory"

# 847 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTreecko::
# 848 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, Route104_Text_BrendanDefeat
# 849 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 850 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 851 "data/maps/Route104/scripts.pory"
	end
# 852 "data/maps/Route104/scripts.pory"

# 853 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTorchic::
# 854 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, Route104_Text_BrendanDefeat
# 855 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 856 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 857 "data/maps/Route104/scripts.pory"
	end
# 858 "data/maps/Route104/scripts.pory"

# 859 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanMudkip::
# 860 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, Route104_Text_BrendanDefeat
# 861 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 862 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 863 "data/maps/Route104/scripts.pory"
	end
# 864 "data/maps/Route104/scripts.pory"

# 865 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBackUp:
# 866 "data/maps/Route104/scripts.pory"
	lock_facing_direction
# 867 "data/maps/Route104/scripts.pory"
	walk_down
# 868 "data/maps/Route104/scripts.pory"
	unlock_facing_direction
# 869 "data/maps/Route104/scripts.pory"
	step_end
# 870 "data/maps/Route104/scripts.pory"

# 871 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalExitBrineysCottage:
# 872 "data/maps/Route104/scripts.pory"
	walk_down
# 873 "data/maps/Route104/scripts.pory"
	step_end
# 874 "data/maps/Route104/scripts.pory"

# 875 "data/maps/Route104/scripts.pory"
Route104_EventScript_ExpertF::
# 876 "data/maps/Route104/scripts.pory"
	lock
# 877 "data/maps/Route104/scripts.pory"
	faceplayer
# 878 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_EventScript_ReceivedBerry
# 879 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 880 "data/maps/Route104/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 881 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 882 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 883 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 884 "data/maps/Route104/scripts.pory"
	release
# 885 "data/maps/Route104/scripts.pory"
	end
# 886 "data/maps/Route104/scripts.pory"

# 887 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBerry::
# 888 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 889 "data/maps/Route104/scripts.pory"
	release
# 890 "data/maps/Route104/scripts.pory"
	end
# 891 "data/maps/Route104/scripts.pory"

# 892 "data/maps/Route104/scripts.pory"
Route104_EventScript_WhiteHerbFlorist::
# 893 "data/maps/Route104/scripts.pory"
	lock
# 894 "data/maps/Route104/scripts.pory"
	faceplayer
# 895 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_EventScript_ReceivedWhiteHerb
# 896 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 897 "data/maps/Route104/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 898 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 899 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 900 "data/maps/Route104/scripts.pory"
	release
# 901 "data/maps/Route104/scripts.pory"
	end
# 902 "data/maps/Route104/scripts.pory"

# 903 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedWhiteHerb::
# 904 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 905 "data/maps/Route104/scripts.pory"
	release
# 906 "data/maps/Route104/scripts.pory"
	end
# 907 "data/maps/Route104/scripts.pory"

# 908 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl1::
# 909 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 910 "data/maps/Route104/scripts.pory"
	end
# 911 "data/maps/Route104/scripts.pory"

# 912 "data/maps/Route104/scripts.pory"
Route104_EventScript_BugCatcher::
# 913 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 914 "data/maps/Route104/scripts.pory"
	end
# 915 "data/maps/Route104/scripts.pory"

# 916 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrineysCottageSign::
# 917 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 918 "data/maps/Route104/scripts.pory"
	end
# 919 "data/maps/Route104/scripts.pory"

# 920 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignPetalburg::
# 921 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 922 "data/maps/Route104/scripts.pory"
	end
# 923 "data/maps/Route104/scripts.pory"

# 924 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignRustboro::
# 925 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 926 "data/maps/Route104/scripts.pory"
	end
# 927 "data/maps/Route104/scripts.pory"

# 928 "data/maps/Route104/scripts.pory"
Route104_EventScript_FlowerShopSign::
# 929 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 930 "data/maps/Route104/scripts.pory"
	end
# 931 "data/maps/Route104/scripts.pory"

# 932 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrainerTipsDoubleBattles::
# 933 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 934 "data/maps/Route104/scripts.pory"
	end
# 935 "data/maps/Route104/scripts.pory"

# 936 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy1::
# 937 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 938 "data/maps/Route104/scripts.pory"
	end
# 939 "data/maps/Route104/scripts.pory"

# 940 "data/maps/Route104/scripts.pory"
Route104_EventScript_Woman::
# 941 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 942 "data/maps/Route104/scripts.pory"
	end
# 943 "data/maps/Route104/scripts.pory"

# 944 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy2::
# 945 "data/maps/Route104/scripts.pory"
	lock
# 946 "data/maps/Route104/scripts.pory"
	faceplayer
# 947 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_EventScript_ReceivedBulletSeed
# 948 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 949 "data/maps/Route104/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 950 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 951 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
# 952 "data/maps/Route104/scripts.pory"
	release
# 953 "data/maps/Route104/scripts.pory"
	end
# 954 "data/maps/Route104/scripts.pory"

# 955 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBulletSeed::
# 956 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 957 "data/maps/Route104/scripts.pory"
	release
# 958 "data/maps/Route104/scripts.pory"
	end
# 959 "data/maps/Route104/scripts.pory"

# 960 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl2::
# 961 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 962 "data/maps/Route104/scripts.pory"
	end
# 963 "data/maps/Route104/scripts.pory"

# 964 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford::
# 965 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R104, MAP_ROUTE104, 0
# 966 "data/maps/Route104/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104, 0
# 967 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_R104, Route104_Movement_BrineyBoardBoat
# 968 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 969 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_BRINEY_R104
# 970 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBoardBoat
# 971 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 972 "data/maps/Route104/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 973 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 974 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordNoCall
# 975 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordDadCalls
# 976 "data/maps/Route104/scripts.pory"
	end
# 977 "data/maps/Route104/scripts.pory"

# 978 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordNoCall::
# 979 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewford
# 980 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewford
# 981 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 982 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 983 "data/maps/Route104/scripts.pory"

# 984 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordDadCalls::
# 985 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordBeforeDadCalls
# 986 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 987 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 988 "data/maps/Route104/scripts.pory"
	pokenavcall Route104_Text_DadPokenavCall
# 989 "data/maps/Route104/scripts.pory"
	waitmessage
# 990 "data/maps/Route104/scripts.pory"
	delay 30
# 991 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 992 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 993 "data/maps/Route104/scripts.pory"
	waitfanfare
# 994 "data/maps/Route104/scripts.pory"
	closemessage
# 995 "data/maps/Route104/scripts.pory"
	delay 30
# 996 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 997 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordAfterDadCalls
# 998 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordAfterDadCalls, MAP_ROUTE104
# 999 "data/maps/Route104/scripts.pory"
	waitmovement LOCALID_BOAT_R104, MAP_ROUTE104
# 1000 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 1001 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 1002 "data/maps/Route104/scripts.pory"

# 1003 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford::
# 1004 "data/maps/Route104/scripts.pory"
	delay 50
# 1005 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerExitBoat
# 1006 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 1007 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 1008 "data/maps/Route104/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 1009 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerMoveForBriney
# 1010 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 1011 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 1012 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 1013 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 1014 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 1015 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route104_Movement_BrineyExitBoat
# 1016 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 1017 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 1018 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 1019 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 1020 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 1021 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_BOAT_R104, MAP_ROUTE104
# 1022 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 1023 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 1024 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 1025 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 1026 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 1027 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_DeliverLetterReminder
# 1028 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_LandedInDewford
# 1029 "data/maps/Route104/scripts.pory"
	end
# 1030 "data/maps/Route104/scripts.pory"

# 1031 "data/maps/Route104/scripts.pory"
Route104_EventScript_DeliverLetterReminder::
# 1032 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
# 1033 "data/maps/Route104/scripts.pory"
	releaseall
# 1034 "data/maps/Route104/scripts.pory"
	end
# 1035 "data/maps/Route104/scripts.pory"

# 1036 "data/maps/Route104/scripts.pory"
Route104_EventScript_LandedInDewford::
# 1037 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 1038 "data/maps/Route104/scripts.pory"
	releaseall
# 1039 "data/maps/Route104/scripts.pory"
	end
# 1040 "data/maps/Route104/scripts.pory"

# 1041 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
# 1042 "data/maps/Route104/scripts.pory"
	walk_down
# 1043 "data/maps/Route104/scripts.pory"
	walk_down
# 1044 "data/maps/Route104/scripts.pory"
	walk_down
# 1045 "data/maps/Route104/scripts.pory"
	walk_down
# 1046 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1047 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1048 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1049 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1050 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1051 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1052 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1053 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1054 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1055 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1056 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1057 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1058 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1059 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1060 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1061 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1062 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1063 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1064 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1065 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1066 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1067 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1068 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1069 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1070 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1071 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1072 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1073 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1074 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1075 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1076 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1077 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1078 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1079 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1080 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1081 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1082 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1083 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1084 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1085 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1086 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1087 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1088 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1089 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1090 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1091 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1092 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1093 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1094 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1095 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1096 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1097 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1098 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1099 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1100 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1101 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1102 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1103 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1104 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1105 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1106 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1107 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1108 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1109 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1110 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1111 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1112 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1113 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1114 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1115 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1116 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1117 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1118 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1119 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1120 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1121 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1122 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1123 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1124 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1125 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1126 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1127 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1128 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1129 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1130 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1131 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1132 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1133 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1134 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1135 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1136 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1137 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1138 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1139 "data/maps/Route104/scripts.pory"
	step_end
# 1140 "data/maps/Route104/scripts.pory"

# 1141 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls:
# 1142 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1143 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1144 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1145 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1146 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1147 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1148 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1149 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1150 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1151 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1152 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1153 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1154 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1155 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1156 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1157 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1158 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1159 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1160 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1161 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1162 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1163 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1164 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1165 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1166 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1167 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1168 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1169 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1170 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1171 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1172 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1173 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1174 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1175 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1176 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1177 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1178 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1179 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1180 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1181 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1182 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1183 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1184 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1185 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1186 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1187 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1188 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1189 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1190 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1191 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1192 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1193 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1194 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1195 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1196 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1197 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1198 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1199 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1200 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1201 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1202 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1203 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1204 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1205 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1206 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1207 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1208 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1209 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1210 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1211 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1212 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1213 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1214 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1215 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1216 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1217 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1218 "data/maps/Route104/scripts.pory"
	walk_right
# 1219 "data/maps/Route104/scripts.pory"
	walk_right
# 1220 "data/maps/Route104/scripts.pory"
	walk_down
# 1221 "data/maps/Route104/scripts.pory"
	walk_down
# 1222 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1223 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1224 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1225 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1226 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1227 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1228 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1229 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1230 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1231 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1232 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1233 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1234 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1235 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1236 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1237 "data/maps/Route104/scripts.pory"
	walk_down
# 1238 "data/maps/Route104/scripts.pory"
	walk_down
# 1239 "data/maps/Route104/scripts.pory"
	step_end
# 1240 "data/maps/Route104/scripts.pory"

# 1241 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford:
# 1242 "data/maps/Route104/scripts.pory"
	walk_down
# 1243 "data/maps/Route104/scripts.pory"
	walk_down
# 1244 "data/maps/Route104/scripts.pory"
	walk_down
# 1245 "data/maps/Route104/scripts.pory"
	walk_down
# 1246 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1247 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1248 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1249 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1250 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1251 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1252 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1253 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1254 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1255 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1256 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1257 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1258 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1259 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1260 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1261 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1262 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1263 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1264 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1265 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1266 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1267 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1268 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1269 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1270 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1271 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1272 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1273 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1274 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1275 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1276 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1277 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1278 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1279 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1280 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1281 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1282 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1283 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1284 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1285 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1286 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1287 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1288 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1289 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1290 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1291 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1292 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1293 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1294 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1295 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1296 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1297 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1298 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1299 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1300 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1301 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1302 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1303 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1304 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1305 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1306 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1307 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1308 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1309 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1310 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1311 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1312 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1313 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1314 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1315 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1316 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1317 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1318 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1319 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1320 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1321 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1322 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1323 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1324 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1325 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1326 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1327 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1328 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1329 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1330 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1331 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1332 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1333 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1334 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1335 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1336 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1337 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1338 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1339 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1340 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1341 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1342 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1343 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1344 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1345 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1346 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1347 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1348 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1349 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1350 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1351 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1352 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1353 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1354 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1355 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1356 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1357 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1358 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1359 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1360 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1361 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1362 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 1363 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1364 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1365 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1366 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1367 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1368 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1369 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1370 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1371 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1372 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1373 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1374 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1375 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1376 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1377 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1378 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1379 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1380 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1381 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1382 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1383 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1384 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1385 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1386 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1387 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1388 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1389 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1390 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1391 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1392 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1393 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1394 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1395 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1396 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1397 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1398 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1399 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1400 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1401 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1402 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1403 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1404 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1405 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1406 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1407 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1408 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1409 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1410 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 1411 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1412 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1413 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1414 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 1415 "data/maps/Route104/scripts.pory"
	walk_right
# 1416 "data/maps/Route104/scripts.pory"
	walk_right
# 1417 "data/maps/Route104/scripts.pory"
	walk_down
# 1418 "data/maps/Route104/scripts.pory"
	walk_down
# 1419 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1420 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1421 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1422 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1423 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1424 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1425 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1426 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1427 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1428 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1429 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1430 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1431 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1432 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1433 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 1434 "data/maps/Route104/scripts.pory"
	walk_down
# 1435 "data/maps/Route104/scripts.pory"
	walk_down
# 1436 "data/maps/Route104/scripts.pory"
	step_end
# 1437 "data/maps/Route104/scripts.pory"

# 1438 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBoardBoat:
# 1439 "data/maps/Route104/scripts.pory"
	walk_left
# 1440 "data/maps/Route104/scripts.pory"
	walk_down
# 1441 "data/maps/Route104/scripts.pory"
	walk_down
# 1442 "data/maps/Route104/scripts.pory"
	step_end
# 1443 "data/maps/Route104/scripts.pory"

# 1444 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerExitBoat:
# 1445 "data/maps/Route104/scripts.pory"
	walk_down
# 1446 "data/maps/Route104/scripts.pory"
	step_end
# 1447 "data/maps/Route104/scripts.pory"

# 1448 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerMoveForBriney:
# 1449 "data/maps/Route104/scripts.pory"
	walk_down
# 1450 "data/maps/Route104/scripts.pory"
	walk_left
# 1451 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_right
# 1452 "data/maps/Route104/scripts.pory"
	step_end
# 1453 "data/maps/Route104/scripts.pory"

# 1454 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyBoardBoat:
# 1455 "data/maps/Route104/scripts.pory"
	walk_down
# 1456 "data/maps/Route104/scripts.pory"
	walk_down
# 1457 "data/maps/Route104/scripts.pory"
	step_end
# 1458 "data/maps/Route104/scripts.pory"

# 1459 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyExitBoat:
# 1460 "data/maps/Route104/scripts.pory"
	walk_down
# 1461 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 1462 "data/maps/Route104/scripts.pory"
	step_end
# 1463 "data/maps/Route104/scripts.pory"

# 1464 "data/maps/Route104/scripts.pory"
Route104_EventScript_Ivan::
# 1465 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 1466 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 1467 "data/maps/Route104/scripts.pory"
	end
# 1468 "data/maps/Route104/scripts.pory"

# 1469 "data/maps/Route104/scripts.pory"
Route104_EventScript_Billy::
# 1470 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 1471 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 1472 "data/maps/Route104/scripts.pory"
	end
# 1473 "data/maps/Route104/scripts.pory"

# 1474 "data/maps/Route104/scripts.pory"
Route104_EventScript_Haley::
# 1475 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_EventScript_TryRegisterHaleyAfterBattle
# 1476 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1477 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchHaley
# 1478 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 1479 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 1480 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterHaley
# 1481 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 1482 "data/maps/Route104/scripts.pory"
	release
# 1483 "data/maps/Route104/scripts.pory"
	end
# 1484 "data/maps/Route104/scripts.pory"

# 1485 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaleyAfterBattle::
# 1486 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1487 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 1488 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaleyAfterBattle
# 1489 "data/maps/Route104/scripts.pory"
	release
# 1490 "data/maps/Route104/scripts.pory"
	end
# 1491 "data/maps/Route104/scripts.pory"

# 1492 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaleyAfterBattle::
# 1493 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 1494 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 1495 "data/maps/Route104/scripts.pory"
	release
# 1496 "data/maps/Route104/scripts.pory"
	end
# 1497 "data/maps/Route104/scripts.pory"

# 1498 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaley::
# 1499 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaley
# 1500 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 1501 "data/maps/Route104/scripts.pory"
	release
# 1502 "data/maps/Route104/scripts.pory"
	end
# 1503 "data/maps/Route104/scripts.pory"

# 1504 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaley::
# 1505 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 1506 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 1507 "data/maps/Route104/scripts.pory"
	release
# 1508 "data/maps/Route104/scripts.pory"
	end
# 1509 "data/maps/Route104/scripts.pory"

# 1510 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchHaley::
# 1511 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 1512 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 1513 "data/maps/Route104/scripts.pory"
	end
# 1514 "data/maps/Route104/scripts.pory"

# 1515 "data/maps/Route104/scripts.pory"
Route104_EventScript_Winston::
# 1516 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_EventScript_TryRegisterWinstonAfterBattle
# 1517 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1518 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchWinston
# 1519 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 1520 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 1521 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterWinston
# 1522 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 1523 "data/maps/Route104/scripts.pory"
	release
# 1524 "data/maps/Route104/scripts.pory"
	end
# 1525 "data/maps/Route104/scripts.pory"

# 1526 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinstonAfterBattle::
# 1527 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1528 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 1529 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinstonAfterBattle
# 1530 "data/maps/Route104/scripts.pory"
	release
# 1531 "data/maps/Route104/scripts.pory"
	end
# 1532 "data/maps/Route104/scripts.pory"

# 1533 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinstonAfterBattle::
# 1534 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 1535 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 1536 "data/maps/Route104/scripts.pory"
	release
# 1537 "data/maps/Route104/scripts.pory"
	end
# 1538 "data/maps/Route104/scripts.pory"

# 1539 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinston::
# 1540 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinston
# 1541 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 1542 "data/maps/Route104/scripts.pory"
	release
# 1543 "data/maps/Route104/scripts.pory"
	end
# 1544 "data/maps/Route104/scripts.pory"

# 1545 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinston::
# 1546 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 1547 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 1548 "data/maps/Route104/scripts.pory"
	release
# 1549 "data/maps/Route104/scripts.pory"
	end
# 1550 "data/maps/Route104/scripts.pory"

# 1551 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchWinston::
# 1552 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 1553 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 1554 "data/maps/Route104/scripts.pory"
	end
# 1555 "data/maps/Route104/scripts.pory"

# 1556 "data/maps/Route104/scripts.pory"
Route104_EventScript_Cindy::
# 1557 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_EventScript_TryRegisterCindyAfterBattle
# 1558 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1559 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchCindy
# 1560 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 1561 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 1562 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterCindy
# 1563 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 1564 "data/maps/Route104/scripts.pory"
	release
# 1565 "data/maps/Route104/scripts.pory"
	end
# 1566 "data/maps/Route104/scripts.pory"

# 1567 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindyAfterBattle::
# 1568 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1569 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 1570 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindyAfterBattle
# 1571 "data/maps/Route104/scripts.pory"
	release
# 1572 "data/maps/Route104/scripts.pory"
	end
# 1573 "data/maps/Route104/scripts.pory"

# 1574 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindyAfterBattle::
# 1575 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 1576 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 1577 "data/maps/Route104/scripts.pory"
	release
# 1578 "data/maps/Route104/scripts.pory"
	end
# 1579 "data/maps/Route104/scripts.pory"

# 1580 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindy::
# 1581 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindy
# 1582 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 1583 "data/maps/Route104/scripts.pory"
	release
# 1584 "data/maps/Route104/scripts.pory"
	end
# 1585 "data/maps/Route104/scripts.pory"

# 1586 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindy::
# 1587 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 1588 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 1589 "data/maps/Route104/scripts.pory"
	release
# 1590 "data/maps/Route104/scripts.pory"
	end
# 1591 "data/maps/Route104/scripts.pory"

# 1592 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchCindy::
# 1593 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 1594 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 1595 "data/maps/Route104/scripts.pory"
	end
# 1596 "data/maps/Route104/scripts.pory"

# 1597 "data/maps/Route104/scripts.pory"
Route104_EventScript_Gina::
# 1598 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 1599 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 1600 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 1601 "data/maps/Route104/scripts.pory"
	release
# 1602 "data/maps/Route104/scripts.pory"
	end
# 1603 "data/maps/Route104/scripts.pory"

# 1604 "data/maps/Route104/scripts.pory"
Route104_EventScript_Mia::
# 1605 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 1606 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 1607 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 1608 "data/maps/Route104/scripts.pory"
	release
# 1609 "data/maps/Route104/scripts.pory"
	end
# 1610 "data/maps/Route104/scripts.pory"

# 1611 "data/maps/Route104/scripts.pory"
Route104_EventScript_Darian::
# 1612 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 1613 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 1614 "data/maps/Route104/scripts.pory"
	end
# 1615 "data/maps/Route104/scripts.pory"

# 1616 "data/maps/Route104/scripts.pory"
Route104_Text_BrineyLivesInSeasideCottage:
# 1617 "data/maps/Route104/scripts.pory"
	.string "That seaside cottage is where\n"
# 1618 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY lives.\p"
# 1619 "data/maps/Route104/scripts.pory"
	.string "He was once a mighty sailor who never\n"
# 1620 "data/maps/Route104/scripts.pory"
	.string "feared the sea, however stormy.$"
# 1621 "data/maps/Route104/scripts.pory"

# 1622 "data/maps/Route104/scripts.pory"
Route104_Text_WhatsItLikeAtBottomOfSea:
# 1623 "data/maps/Route104/scripts.pory"
	.string "The sea, huh?\p"
# 1624 "data/maps/Route104/scripts.pory"
	.string "I wonder what it's like at the bottom\n"
# 1625 "data/maps/Route104/scripts.pory"
	.string "of the sea?$"
# 1626 "data/maps/Route104/scripts.pory"

# 1627 "data/maps/Route104/scripts.pory"
Route104_Text_ThrowBallAtWeakenedPokemon:
# 1628 "data/maps/Route104/scripts.pory"
	.string "If you're going to throw a POKé BALL,\n"
# 1629 "data/maps/Route104/scripts.pory"
	.string "weaken the wild POKéMON first.\p"
# 1630 "data/maps/Route104/scripts.pory"
	.string "It will be easier to catch if it's been\n"
# 1631 "data/maps/Route104/scripts.pory"
	.string "poisoned, burned, or lulled to sleep.$"
# 1632 "data/maps/Route104/scripts.pory"

# 1633 "data/maps/Route104/scripts.pory"
Route104_Text_OnlyThrowBallAtWildPokemon:
# 1634 "data/maps/Route104/scripts.pory"
	.string "You're a thief if you try to steal\n"
# 1635 "data/maps/Route104/scripts.pory"
	.string "someone else's POKéMON.\p"
# 1636 "data/maps/Route104/scripts.pory"
	.string "You should throw POKé BALLS only at\n"
# 1637 "data/maps/Route104/scripts.pory"
	.string "wild POKéMON.$"
# 1638 "data/maps/Route104/scripts.pory"

# 1639 "data/maps/Route104/scripts.pory"
Route104_Text_ImNotATrainer:
# 1640 "data/maps/Route104/scripts.pory"
	.string "Oh, no, I'm not a TRAINER.\p"
# 1641 "data/maps/Route104/scripts.pory"
	.string "But that's right, if TRAINERS lock eyes,\n"
# 1642 "data/maps/Route104/scripts.pory"
	.string "it's a challenge to battle.\p"
# 1643 "data/maps/Route104/scripts.pory"
	.string "If you don't want to battle, stay out\n"
# 1644 "data/maps/Route104/scripts.pory"
	.string "of their sight.$"
# 1645 "data/maps/Route104/scripts.pory"

# 1646 "data/maps/Route104/scripts.pory"
Route104_Text_LikeFillingMouthWithSeedsTakeThis:
# 1647 "data/maps/Route104/scripts.pory"
	.string "I like filling my mouth with seeds,\n"
# 1648 "data/maps/Route104/scripts.pory"
	.string "then spitting them out fast!\p"
# 1649 "data/maps/Route104/scripts.pory"
	.string "You can have this, so you try it out!\p"
# 1650 "data/maps/Route104/scripts.pory"
	.string "Use it on a POKéMON, and it will learn\n"
# 1651 "data/maps/Route104/scripts.pory"
	.string "a move for firing seeds rapidly.$"
# 1652 "data/maps/Route104/scripts.pory"

# 1653 "data/maps/Route104/scripts.pory"
Route104_Text_TMsAreOneTimeUse:
# 1654 "data/maps/Route104/scripts.pory"
	.string "A word of advice!\p"
# 1655 "data/maps/Route104/scripts.pory"
	.string "A TM, TECHNICAL MACHINE, is good only\n"
# 1656 "data/maps/Route104/scripts.pory"
	.string "for one-time use.\p"
# 1657 "data/maps/Route104/scripts.pory"
	.string "Once you use it, it's gone.\n"
# 1658 "data/maps/Route104/scripts.pory"
	.string "Think twice before using it!$"
# 1659 "data/maps/Route104/scripts.pory"

# 1660 "data/maps/Route104/scripts.pory"
Route104_Text_DontNeedThisTakeIt:
# 1661 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1662 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1663 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1664 "data/maps/Route104/scripts.pory"
	.string "shopping.\p"
# 1665 "data/maps/Route104/scripts.pory"
	.string "I don't need this WHITE HERB anymore.\n"
# 1666 "data/maps/Route104/scripts.pory"
	.string "Would you take it, please?$"
# 1667 "data/maps/Route104/scripts.pory"

# 1668 "data/maps/Route104/scripts.pory"
Route104_Text_FlowerShopSellingSaplings:
# 1669 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1670 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1671 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1672 "data/maps/Route104/scripts.pory"
	.string "shopping. Where should I put them?$"
# 1673 "data/maps/Route104/scripts.pory"

# 1674 "data/maps/Route104/scripts.pory"
Route104_Text_MrBrineysCottage:
# 1675 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY'S COTTAGE$"
# 1676 "data/maps/Route104/scripts.pory"

# 1677 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignPetalburg:
# 1678 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 1679 "data/maps/Route104/scripts.pory"
	.string "{RIGHT_ARROW} PETALBURG CITY$"
# 1680 "data/maps/Route104/scripts.pory"

# 1681 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignRustboro:
# 1682 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
# 1683 "data/maps/Route104/scripts.pory"
	.string "{UP_ARROW} RUSTBORO CITY$"
# 1684 "data/maps/Route104/scripts.pory"

# 1685 "data/maps/Route104/scripts.pory"
Route104_Text_PrettyPetalFlowShop:
# 1686 "data/maps/Route104/scripts.pory"
	.string "PRETTY PETAL FLOWER SHOP$"
# 1687 "data/maps/Route104/scripts.pory"

# 1688 "data/maps/Route104/scripts.pory"
Route104_Text_TrainerTipsDoubleBattles:
# 1689 "data/maps/Route104/scripts.pory"
	.string "TRAINER TIPS\p"
# 1690 "data/maps/Route104/scripts.pory"
	.string "In the HOENN region there are pairs\n"
# 1691 "data/maps/Route104/scripts.pory"
	.string "of TRAINERS who challenge others\l"
# 1692 "data/maps/Route104/scripts.pory"
	.string "for 2-on-2 POKéMON battles called\l"
# 1693 "data/maps/Route104/scripts.pory"
	.string "DOUBLE BATTLES.\p"
# 1694 "data/maps/Route104/scripts.pory"
	.string "In a DOUBLE BATTLE, the TRAINER must\n"
# 1695 "data/maps/Route104/scripts.pory"
	.string "send out two POKéMON, the one at the\l"
# 1696 "data/maps/Route104/scripts.pory"
	.string "left of the list and the top one.\l"
# 1697 "data/maps/Route104/scripts.pory"
	.string "Watch how POKéMON are lined up.$"
# 1698 "data/maps/Route104/scripts.pory"

# 1699 "data/maps/Route104/scripts.pory"
Route104_Text_MayWeShouldRegister:
# 1700 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1701 "data/maps/Route104/scripts.pory"
	.string "DEVON upgraded your POKéNAV with\n"
# 1702 "data/maps/Route104/scripts.pory"
	.string "the MATCH CALL system, huh?\p"
# 1703 "data/maps/Route104/scripts.pory"
	.string "We should register each other so we\n"
# 1704 "data/maps/Route104/scripts.pory"
	.string "can get in contact anytime.$"
# 1705 "data/maps/Route104/scripts.pory"

# 1706 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredMay:
# 1707 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered MAY\n"
# 1708 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 1709 "data/maps/Route104/scripts.pory"

# 1710 "data/maps/Route104/scripts.pory"
Route104_Text_MayHowsYourPokedex:
# 1711 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, by the way, {PLAYER}{KUN},\n"
# 1712 "data/maps/Route104/scripts.pory"
	.string "how's your POKéDEX coming along?$"
# 1713 "data/maps/Route104/scripts.pory"

# 1714 "data/maps/Route104/scripts.pory"
Route104_Text_MayMinesDecentLetsBattle:
# 1715 "data/maps/Route104/scripts.pory"
	.string "Mine's looking pretty decent.\n"
# 1716 "data/maps/Route104/scripts.pory"
	.string "So…\l"
# 1717 "data/maps/Route104/scripts.pory"
	.string "How about a little battle?$"
# 1718 "data/maps/Route104/scripts.pory"

# 1719 "data/maps/Route104/scripts.pory"
Route104_Text_MayHaventRaisedPokemon:
# 1720 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1721 "data/maps/Route104/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1722 "data/maps/Route104/scripts.pory"
	.string "POKéMON very much?\p"
# 1723 "data/maps/Route104/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1724 "data/maps/Route104/scripts.pory"

# 1725 "data/maps/Route104/scripts.pory"
Route104_Text_MayLetsBattle:
# 1726 "data/maps/Route104/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1727 "data/maps/Route104/scripts.pory"
	.string "How about a little battle here?$"
# 1728 "data/maps/Route104/scripts.pory"

# 1729 "data/maps/Route104/scripts.pory"
Route104_Text_MayIntro:
# 1730 "data/maps/Route104/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1731 "data/maps/Route104/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1732 "data/maps/Route104/scripts.pory"

# 1733 "data/maps/Route104/scripts.pory"
Route104_Text_MayDefeat:
# 1734 "data/maps/Route104/scripts.pory"
	.string "Yikes!\n"
# 1735 "data/maps/Route104/scripts.pory"
	.string "You're better than I expected!$"
# 1736 "data/maps/Route104/scripts.pory"

# 1737 "data/maps/Route104/scripts.pory"
Route104_Text_MayPostBattle:
# 1738 "data/maps/Route104/scripts.pory"
	.string "MAY: I can tell you've gotten pretty\n"
# 1739 "data/maps/Route104/scripts.pory"
	.string "good with the way you handle POKéMON.\p"
# 1740 "data/maps/Route104/scripts.pory"
	.string "But instead of only making them\n"
# 1741 "data/maps/Route104/scripts.pory"
	.string "battle, you should be like MR. BRINEY.\p"
# 1742 "data/maps/Route104/scripts.pory"
	.string "It's important to become friends with\n"
# 1743 "data/maps/Route104/scripts.pory"
	.string "POKéMON, too.$"
# 1744 "data/maps/Route104/scripts.pory"

# 1745 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanWeShouldRegister:
# 1746 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1747 "data/maps/Route104/scripts.pory"
	.string "Cool, you had DEVON install the MATCH\n"
# 1748 "data/maps/Route104/scripts.pory"
	.string "CALL system on your POKéNAV!\p"
# 1749 "data/maps/Route104/scripts.pory"
	.string "Let's register each other in our\n"
# 1750 "data/maps/Route104/scripts.pory"
	.string "POKéNAVS so we can keep in touch.$"
# 1751 "data/maps/Route104/scripts.pory"

# 1752 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredBrendan:
# 1753 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered BRENDAN\n"
# 1754 "data/maps/Route104/scripts.pory"
	.string "in the POKéNAV.$"
# 1755 "data/maps/Route104/scripts.pory"

# 1756 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanHowsYourPokedex:
# 1757 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: {PLAYER}, how's your POKéDEX?\n"
# 1758 "data/maps/Route104/scripts.pory"
	.string "Have you filled in any pages yet?$"
# 1759 "data/maps/Route104/scripts.pory"

# 1760 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDoingGreatLetsBattle:
# 1761 "data/maps/Route104/scripts.pory"
	.string "Me, I'm doing great!\p"
# 1762 "data/maps/Route104/scripts.pory"
	.string "Want to check out how good I am with\n"
# 1763 "data/maps/Route104/scripts.pory"
	.string "a battle?$"
# 1764 "data/maps/Route104/scripts.pory"

# 1765 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanNoConfidence:
# 1766 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1767 "data/maps/Route104/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1768 "data/maps/Route104/scripts.pory"

# 1769 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanLetsBattle:
# 1770 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1771 "data/maps/Route104/scripts.pory"
	.string "Want to have a battle with me?$"
# 1772 "data/maps/Route104/scripts.pory"

# 1773 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanIntro:
# 1774 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1775 "data/maps/Route104/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1776 "data/maps/Route104/scripts.pory"

# 1777 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDefeat:
# 1778 "data/maps/Route104/scripts.pory"
	.string "Hmm…\n"
# 1779 "data/maps/Route104/scripts.pory"
	.string "You're pretty good.$"
# 1780 "data/maps/Route104/scripts.pory"

# 1781 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanPostBattle:
# 1782 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: You've gotten pretty decent\n"
# 1783 "data/maps/Route104/scripts.pory"
	.string "at handling POKéMON.\p"
# 1784 "data/maps/Route104/scripts.pory"
	.string "But, you know, you shouldn't just be\n"
# 1785 "data/maps/Route104/scripts.pory"
	.string "making POKéMON battle.\p"
# 1786 "data/maps/Route104/scripts.pory"
	.string "Like MR. BRINEY, it's important to\n"
# 1787 "data/maps/Route104/scripts.pory"
	.string "become friends with your POKéMON.$"
