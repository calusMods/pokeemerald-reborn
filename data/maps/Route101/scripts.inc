Route101_OnResume::
# 2 "data/maps/Route101/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Common_EventScript_RemoveStaticPokemonEncounter
	return


Route101_EventScript_HideEncounters::
# 6 "data/maps/Route101/scripts.pory"
	setflag FLAG_TEMP_5
# 7 "data/maps/Route101/scripts.pory"
	setflag FLAG_TEMP_6
	return


Route101_EventScript_RandomizeEnconters::
# 12 "data/maps/Route101/scripts.pory"
	setflag FLAG_TEMP_5
# 13 "data/maps/Route101/scripts.pory"
	random 10
# 14 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_lt Route101_EventScript_RandomizeEnconters_2
Route101_EventScript_RandomizeEnconters_1:
# 19 "data/maps/Route101/scripts.pory"
	setflag FLAG_TEMP_6
# 20 "data/maps/Route101/scripts.pory"
	random 10
# 21 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_lt Route101_EventScript_RandomizeEnconters_5
Route101_EventScript_RandomizeEnconters_4:
# 26 "data/maps/Route101/scripts.pory"
	setflag FLAG_TEMP_7
# 27 "data/maps/Route101/scripts.pory"
	random 10
# 28 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_lt Route101_EventScript_RandomizeEnconters_8
Route101_EventScript_RandomizeEnconters_7:
# 33 "data/maps/Route101/scripts.pory"
	setflag FLAG_TEMP_8
# 34 "data/maps/Route101/scripts.pory"
	random 10
# 35 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_lt Route101_EventScript_RandomizeEnconters_10
	return

Route101_EventScript_RandomizeEnconters_2:
# 15 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_RandomizeEncounterVar5
# 16 "data/maps/Route101/scripts.pory"
	clearflag FLAG_TEMP_5
	goto Route101_EventScript_RandomizeEnconters_1

Route101_EventScript_RandomizeEnconters_5:
# 22 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_RandomizeEncounterVar6
# 23 "data/maps/Route101/scripts.pory"
	clearflag FLAG_TEMP_6
	goto Route101_EventScript_RandomizeEnconters_4

Route101_EventScript_RandomizeEnconters_8:
# 29 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_RandomizeEncounterVar7
# 30 "data/maps/Route101/scripts.pory"
	clearflag FLAG_TEMP_7
	goto Route101_EventScript_RandomizeEnconters_7

Route101_EventScript_RandomizeEnconters_10:
# 36 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_RandomizeEncounterVar8
# 37 "data/maps/Route101/scripts.pory"
	clearflag FLAG_TEMP_8
	return


Route101_EventScript_RandomizeEncounterVar5::
# 42 "data/maps/Route101/scripts.pory"
	random 8
# 43 "data/maps/Route101/scripts.pory"
	switch VAR_RESULT
# 44 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_RandomizeEncounterVar5_2
# 45 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_RandomizeEncounterVar5_2
# 46 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_RandomizeEncounterVar5_2
# 49 "data/maps/Route101/scripts.pory"
	case 3, Route101_EventScript_RandomizeEncounterVar5_3
# 50 "data/maps/Route101/scripts.pory"
	case 4, Route101_EventScript_RandomizeEncounterVar5_3
# 51 "data/maps/Route101/scripts.pory"
	case 5, Route101_EventScript_RandomizeEncounterVar5_3
# 54 "data/maps/Route101/scripts.pory"
	case 6, Route101_EventScript_RandomizeEncounterVar5_4
# 55 "data/maps/Route101/scripts.pory"
	case 7, Route101_EventScript_RandomizeEncounterVar5_4
	return

Route101_EventScript_RandomizeEncounterVar5_2:
# 47 "data/maps/Route101/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( ZIGZAGOON )
# 48 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_5, 0
	return

Route101_EventScript_RandomizeEncounterVar5_3:
# 52 "data/maps/Route101/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( POOCHYENA )
# 53 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

Route101_EventScript_RandomizeEncounterVar5_4:
# 56 "data/maps/Route101/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( WURMPLE )
# 57 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_5, 2
	return


Route101_EventScript_EncounterVar5::
# 62 "data/maps/Route101/scripts.pory"
	lock
# 63 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_5
# 64 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_EncounterVar5_3
# 76 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_EncounterVar5_4
# 88 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_EncounterVar5_5
Route101_EventScript_EncounterVar5_1:
# 101 "data/maps/Route101/scripts.pory"
	release
	return

Route101_EventScript_EncounterVar5_3:
# 65 "data/maps/Route101/scripts.pory"
	random 5
# 66 "data/maps/Route101/scripts.pory"
	switch VAR_RESULT
# 67 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_EncounterVar5_7
# 68 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_EncounterVar5_7
# 70 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_EncounterVar5_8
# 71 "data/maps/Route101/scripts.pory"
	case 3, Route101_EventScript_EncounterVar5_8
# 73 "data/maps/Route101/scripts.pory"
	case 4, Route101_EventScript_EncounterVar5_9
	goto Route101_EventScript_EncounterVar5_1

Route101_EventScript_EncounterVar5_4:
# 77 "data/maps/Route101/scripts.pory"
	random 5
# 78 "data/maps/Route101/scripts.pory"
	switch VAR_RESULT
# 79 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_EncounterVar5_11
# 80 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_EncounterVar5_11
# 82 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_EncounterVar5_12
# 83 "data/maps/Route101/scripts.pory"
	case 3, Route101_EventScript_EncounterVar5_12
# 85 "data/maps/Route101/scripts.pory"
	case 4, Route101_EventScript_EncounterVar5_13
	goto Route101_EventScript_EncounterVar5_1

Route101_EventScript_EncounterVar5_5:
# 89 "data/maps/Route101/scripts.pory"
	random 5
# 90 "data/maps/Route101/scripts.pory"
	switch VAR_RESULT
# 91 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_EncounterVar5_15
# 92 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_EncounterVar5_15
# 94 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_EncounterVar5_16
# 95 "data/maps/Route101/scripts.pory"
	case 3, Route101_EventScript_EncounterVar5_16
# 97 "data/maps/Route101/scripts.pory"
	case 4, Route101_EventScript_EncounterVar5_17
	goto Route101_EventScript_EncounterVar5_1

Route101_EventScript_EncounterVar5_7:
# 69 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 2, FLAG_TEMP_5
	goto Route101_EventScript_EncounterVar5_1

Route101_EventScript_EncounterVar5_8:
# 72 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 3, FLAG_TEMP_5
	goto Route101_EventScript_EncounterVar5_1

Route101_EventScript_EncounterVar5_9:
# 74 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 4, FLAG_TEMP_5
	goto Route101_EventScript_EncounterVar5_1

Route101_EventScript_EncounterVar5_11:
# 81 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 2, FLAG_TEMP_5
	goto Route101_EventScript_EncounterVar5_1

Route101_EventScript_EncounterVar5_12:
# 84 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 3, FLAG_TEMP_5
	goto Route101_EventScript_EncounterVar5_1

Route101_EventScript_EncounterVar5_13:
# 86 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 4, FLAG_TEMP_5
	goto Route101_EventScript_EncounterVar5_1

Route101_EventScript_EncounterVar5_15:
# 93 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 2, FLAG_TEMP_5
	goto Route101_EventScript_EncounterVar5_1

Route101_EventScript_EncounterVar5_16:
# 96 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 3, FLAG_TEMP_5
	goto Route101_EventScript_EncounterVar5_1

Route101_EventScript_EncounterVar5_17:
# 98 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 4, FLAG_TEMP_5
	goto Route101_EventScript_EncounterVar5_1


Route101_EventScript_RandomizeEncounterVar6::
# 105 "data/maps/Route101/scripts.pory"
	random 10
# 106 "data/maps/Route101/scripts.pory"
	switch VAR_RESULT
# 107 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_RandomizeEncounterVar6_2
# 108 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_RandomizeEncounterVar6_2
# 109 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_RandomizeEncounterVar6_2
# 112 "data/maps/Route101/scripts.pory"
	case 3, Route101_EventScript_RandomizeEncounterVar6_3
# 113 "data/maps/Route101/scripts.pory"
	case 4, Route101_EventScript_RandomizeEncounterVar6_3
# 114 "data/maps/Route101/scripts.pory"
	case 5, Route101_EventScript_RandomizeEncounterVar6_3
# 117 "data/maps/Route101/scripts.pory"
	case 6, Route101_EventScript_RandomizeEncounterVar6_4
# 118 "data/maps/Route101/scripts.pory"
	case 7, Route101_EventScript_RandomizeEncounterVar6_4
# 121 "data/maps/Route101/scripts.pory"
	case 8, Route101_EventScript_RandomizeEncounterVar6_5
# 124 "data/maps/Route101/scripts.pory"
	case 9, Route101_EventScript_RandomizeEncounterVar6_6
	return

Route101_EventScript_RandomizeEncounterVar6_2:
# 110 "data/maps/Route101/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( POOCHYENA )
# 111 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_6, 0
	return

Route101_EventScript_RandomizeEncounterVar6_3:
# 115 "data/maps/Route101/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( ZIGZAGOON )
# 116 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_6, 1
	return

Route101_EventScript_RandomizeEncounterVar6_4:
# 119 "data/maps/Route101/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( WURMPLE )
# 120 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_6, 2
	return

Route101_EventScript_RandomizeEncounterVar6_5:
# 122 "data/maps/Route101/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( ROOKIDEE )
# 123 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_6, 3
	return

Route101_EventScript_RandomizeEncounterVar6_6:
# 125 "data/maps/Route101/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( BLIPBUG )
# 126 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_6, 4
	return


Route101_EventScript_EncounterVar6::
# 131 "data/maps/Route101/scripts.pory"
	lock
# 132 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_6
# 133 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_EncounterVar6_3
# 145 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_EncounterVar6_4
# 157 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_EncounterVar6_5
# 169 "data/maps/Route101/scripts.pory"
	case 3, Route101_EventScript_EncounterVar6_6
# 181 "data/maps/Route101/scripts.pory"
	case 4, Route101_EventScript_EncounterVar6_7
Route101_EventScript_EncounterVar6_1:
# 194 "data/maps/Route101/scripts.pory"
	release
	return

Route101_EventScript_EncounterVar6_3:
# 134 "data/maps/Route101/scripts.pory"
	random 5
# 135 "data/maps/Route101/scripts.pory"
	switch VAR_RESULT
# 136 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_EncounterVar6_9
# 137 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_EncounterVar6_9
# 139 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_EncounterVar6_10
# 140 "data/maps/Route101/scripts.pory"
	case 3, Route101_EventScript_EncounterVar6_10
# 142 "data/maps/Route101/scripts.pory"
	case 4, Route101_EventScript_EncounterVar6_11
	goto Route101_EventScript_EncounterVar6_1

Route101_EventScript_EncounterVar6_4:
# 146 "data/maps/Route101/scripts.pory"
	random 5
# 147 "data/maps/Route101/scripts.pory"
	switch VAR_RESULT
# 148 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_EncounterVar6_13
# 149 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_EncounterVar6_13
# 151 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_EncounterVar6_14
# 152 "data/maps/Route101/scripts.pory"
	case 3, Route101_EventScript_EncounterVar6_14
# 154 "data/maps/Route101/scripts.pory"
	case 4, Route101_EventScript_EncounterVar6_15
	goto Route101_EventScript_EncounterVar6_1

Route101_EventScript_EncounterVar6_5:
# 158 "data/maps/Route101/scripts.pory"
	random 5
# 159 "data/maps/Route101/scripts.pory"
	switch VAR_RESULT
# 160 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_EncounterVar6_17
# 161 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_EncounterVar6_17
# 163 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_EncounterVar6_18
# 164 "data/maps/Route101/scripts.pory"
	case 3, Route101_EventScript_EncounterVar6_18
# 166 "data/maps/Route101/scripts.pory"
	case 4, Route101_EventScript_EncounterVar6_19
	goto Route101_EventScript_EncounterVar6_1

Route101_EventScript_EncounterVar6_6:
# 170 "data/maps/Route101/scripts.pory"
	random 5
# 171 "data/maps/Route101/scripts.pory"
	switch VAR_RESULT
# 172 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_EncounterVar6_21
# 173 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_EncounterVar6_21
# 175 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_EncounterVar6_22
# 176 "data/maps/Route101/scripts.pory"
	case 3, Route101_EventScript_EncounterVar6_22
# 178 "data/maps/Route101/scripts.pory"
	case 4, Route101_EventScript_EncounterVar6_23
	goto Route101_EventScript_EncounterVar6_1

Route101_EventScript_EncounterVar6_7:
# 182 "data/maps/Route101/scripts.pory"
	random 5
# 183 "data/maps/Route101/scripts.pory"
	switch VAR_RESULT
# 184 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_EncounterVar6_25
# 185 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_EncounterVar6_25
# 187 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_EncounterVar6_26
# 188 "data/maps/Route101/scripts.pory"
	case 3, Route101_EventScript_EncounterVar6_26
# 190 "data/maps/Route101/scripts.pory"
	case 4, Route101_EventScript_EncounterVar6_27
	goto Route101_EventScript_EncounterVar6_1

Route101_EventScript_EncounterVar6_9:
# 138 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 2, FLAG_TEMP_6
	goto Route101_EventScript_EncounterVar6_1

Route101_EventScript_EncounterVar6_10:
# 141 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 3, FLAG_TEMP_6
	goto Route101_EventScript_EncounterVar6_1

Route101_EventScript_EncounterVar6_11:
# 143 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 4, FLAG_TEMP_6
	goto Route101_EventScript_EncounterVar6_1

Route101_EventScript_EncounterVar6_13:
# 150 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 2, FLAG_TEMP_6
	goto Route101_EventScript_EncounterVar6_1

Route101_EventScript_EncounterVar6_14:
# 153 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 3, FLAG_TEMP_6
	goto Route101_EventScript_EncounterVar6_1

Route101_EventScript_EncounterVar6_15:
# 155 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 4, FLAG_TEMP_6
	goto Route101_EventScript_EncounterVar6_1

Route101_EventScript_EncounterVar6_17:
# 162 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 2, FLAG_TEMP_6
	goto Route101_EventScript_EncounterVar6_1

Route101_EventScript_EncounterVar6_18:
# 165 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 3, FLAG_TEMP_6
	goto Route101_EventScript_EncounterVar6_1

Route101_EventScript_EncounterVar6_19:
# 167 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 4, FLAG_TEMP_6
	goto Route101_EventScript_EncounterVar6_1

Route101_EventScript_EncounterVar6_21:
# 174 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 2, FLAG_TEMP_6
	goto Route101_EventScript_EncounterVar6_1

Route101_EventScript_EncounterVar6_22:
# 177 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 3, FLAG_TEMP_6
	goto Route101_EventScript_EncounterVar6_1

Route101_EventScript_EncounterVar6_23:
# 179 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 4, FLAG_TEMP_6
	goto Route101_EventScript_EncounterVar6_1

Route101_EventScript_EncounterVar6_25:
# 186 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_BLIPBUG, 2, FLAG_TEMP_6
	goto Route101_EventScript_EncounterVar6_1

Route101_EventScript_EncounterVar6_26:
# 189 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_BLIPBUG, 3, FLAG_TEMP_6
	goto Route101_EventScript_EncounterVar6_1

Route101_EventScript_EncounterVar6_27:
# 191 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_BLIPBUG, 4, FLAG_TEMP_6
	goto Route101_EventScript_EncounterVar6_1


Route101_EventScript_RandomizeEncounterVar7::
# 198 "data/maps/Route101/scripts.pory"
	random 5
# 199 "data/maps/Route101/scripts.pory"
	switch VAR_RESULT
# 200 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_RandomizeEncounterVar7_2
# 203 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_RandomizeEncounterVar7_3
# 206 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_RandomizeEncounterVar7_4
# 209 "data/maps/Route101/scripts.pory"
	case 3, Route101_EventScript_RandomizeEncounterVar7_5
# 212 "data/maps/Route101/scripts.pory"
	case 4, Route101_EventScript_RandomizeEncounterVar7_6
	return

Route101_EventScript_RandomizeEncounterVar7_2:
# 201 "data/maps/Route101/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( ZIGZAGOON )
# 202 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_7, 0
	return

Route101_EventScript_RandomizeEncounterVar7_3:
# 204 "data/maps/Route101/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( POOCHYENA )
# 205 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_7, 1
	return

Route101_EventScript_RandomizeEncounterVar7_4:
# 207 "data/maps/Route101/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( WURMPLE )
# 208 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_7, 2
	return

Route101_EventScript_RandomizeEncounterVar7_5:
# 210 "data/maps/Route101/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( ROOKIDEE )
# 211 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_7, 3
	return

Route101_EventScript_RandomizeEncounterVar7_6:
# 213 "data/maps/Route101/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( BLIPBUG )
# 214 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_7, 4
	return


Route101_EventScript_EncounterVar7::
# 219 "data/maps/Route101/scripts.pory"
	lock
# 220 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_7
# 221 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_EncounterVar7_3
# 233 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_EncounterVar7_4
# 245 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_EncounterVar7_5
# 257 "data/maps/Route101/scripts.pory"
	case 3, Route101_EventScript_EncounterVar7_6
# 269 "data/maps/Route101/scripts.pory"
	case 4, Route101_EventScript_EncounterVar7_7
Route101_EventScript_EncounterVar7_1:
# 282 "data/maps/Route101/scripts.pory"
	release
	return

Route101_EventScript_EncounterVar7_3:
# 222 "data/maps/Route101/scripts.pory"
	random 5
# 223 "data/maps/Route101/scripts.pory"
	switch VAR_RESULT
# 224 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_EncounterVar7_9
# 225 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_EncounterVar7_9
# 227 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_EncounterVar7_10
# 228 "data/maps/Route101/scripts.pory"
	case 3, Route101_EventScript_EncounterVar7_10
# 230 "data/maps/Route101/scripts.pory"
	case 4, Route101_EventScript_EncounterVar7_11
	goto Route101_EventScript_EncounterVar7_1

Route101_EventScript_EncounterVar7_4:
# 234 "data/maps/Route101/scripts.pory"
	random 5
# 235 "data/maps/Route101/scripts.pory"
	switch VAR_RESULT
# 236 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_EncounterVar7_13
# 237 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_EncounterVar7_13
# 239 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_EncounterVar7_14
# 240 "data/maps/Route101/scripts.pory"
	case 3, Route101_EventScript_EncounterVar7_14
# 242 "data/maps/Route101/scripts.pory"
	case 4, Route101_EventScript_EncounterVar7_15
	goto Route101_EventScript_EncounterVar7_1

Route101_EventScript_EncounterVar7_5:
# 246 "data/maps/Route101/scripts.pory"
	random 5
# 247 "data/maps/Route101/scripts.pory"
	switch VAR_RESULT
# 248 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_EncounterVar7_17
# 249 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_EncounterVar7_17
# 251 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_EncounterVar7_18
# 252 "data/maps/Route101/scripts.pory"
	case 3, Route101_EventScript_EncounterVar7_18
# 254 "data/maps/Route101/scripts.pory"
	case 4, Route101_EventScript_EncounterVar7_19
	goto Route101_EventScript_EncounterVar7_1

Route101_EventScript_EncounterVar7_6:
# 258 "data/maps/Route101/scripts.pory"
	random 5
# 259 "data/maps/Route101/scripts.pory"
	switch VAR_RESULT
# 260 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_EncounterVar7_21
# 261 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_EncounterVar7_21
# 263 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_EncounterVar7_22
# 264 "data/maps/Route101/scripts.pory"
	case 3, Route101_EventScript_EncounterVar7_22
# 266 "data/maps/Route101/scripts.pory"
	case 4, Route101_EventScript_EncounterVar7_23
	goto Route101_EventScript_EncounterVar7_1

Route101_EventScript_EncounterVar7_7:
# 270 "data/maps/Route101/scripts.pory"
	random 5
# 271 "data/maps/Route101/scripts.pory"
	switch VAR_RESULT
# 272 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_EncounterVar7_25
# 273 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_EncounterVar7_25
# 275 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_EncounterVar7_26
# 276 "data/maps/Route101/scripts.pory"
	case 3, Route101_EventScript_EncounterVar7_26
# 278 "data/maps/Route101/scripts.pory"
	case 4, Route101_EventScript_EncounterVar7_27
	goto Route101_EventScript_EncounterVar7_1

Route101_EventScript_EncounterVar7_9:
# 226 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 2, FLAG_TEMP_7
	goto Route101_EventScript_EncounterVar7_1

Route101_EventScript_EncounterVar7_10:
# 229 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 3, FLAG_TEMP_7
	goto Route101_EventScript_EncounterVar7_1

Route101_EventScript_EncounterVar7_11:
# 231 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 4, FLAG_TEMP_7
	goto Route101_EventScript_EncounterVar7_1

Route101_EventScript_EncounterVar7_13:
# 238 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 2, FLAG_TEMP_7
	goto Route101_EventScript_EncounterVar7_1

Route101_EventScript_EncounterVar7_14:
# 241 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 3, FLAG_TEMP_7
	goto Route101_EventScript_EncounterVar7_1

Route101_EventScript_EncounterVar7_15:
# 243 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 4, FLAG_TEMP_7
	goto Route101_EventScript_EncounterVar7_1

Route101_EventScript_EncounterVar7_17:
# 250 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 2, FLAG_TEMP_7
	goto Route101_EventScript_EncounterVar7_1

Route101_EventScript_EncounterVar7_18:
# 253 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 3, FLAG_TEMP_7
	goto Route101_EventScript_EncounterVar7_1

Route101_EventScript_EncounterVar7_19:
# 255 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 4, FLAG_TEMP_7
	goto Route101_EventScript_EncounterVar7_1

Route101_EventScript_EncounterVar7_21:
# 262 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 2, FLAG_TEMP_7
	goto Route101_EventScript_EncounterVar7_1

Route101_EventScript_EncounterVar7_22:
# 265 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 3, FLAG_TEMP_7
	goto Route101_EventScript_EncounterVar7_1

Route101_EventScript_EncounterVar7_23:
# 267 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 4, FLAG_TEMP_7
	goto Route101_EventScript_EncounterVar7_1

Route101_EventScript_EncounterVar7_25:
# 274 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_BLIPBUG, 2, FLAG_TEMP_7
	goto Route101_EventScript_EncounterVar7_1

Route101_EventScript_EncounterVar7_26:
# 277 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_BLIPBUG, 3, FLAG_TEMP_7
	goto Route101_EventScript_EncounterVar7_1

Route101_EventScript_EncounterVar7_27:
# 279 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_BLIPBUG, 4, FLAG_TEMP_7
	goto Route101_EventScript_EncounterVar7_1


Route101_EventScript_RandomizeEncounterVar8::
# 286 "data/maps/Route101/scripts.pory"
	random 8
# 287 "data/maps/Route101/scripts.pory"
	switch VAR_RESULT
# 288 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_RandomizeEncounterVar8_2
# 291 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_RandomizeEncounterVar8_3
# 294 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_RandomizeEncounterVar8_4
# 295 "data/maps/Route101/scripts.pory"
	case 3, Route101_EventScript_RandomizeEncounterVar8_4
# 298 "data/maps/Route101/scripts.pory"
	case 4, Route101_EventScript_RandomizeEncounterVar8_5
# 299 "data/maps/Route101/scripts.pory"
	case 5, Route101_EventScript_RandomizeEncounterVar8_5
# 302 "data/maps/Route101/scripts.pory"
	case 6, Route101_EventScript_RandomizeEncounterVar8_6
# 303 "data/maps/Route101/scripts.pory"
	case 7, Route101_EventScript_RandomizeEncounterVar8_6
	return

Route101_EventScript_RandomizeEncounterVar8_2:
# 289 "data/maps/Route101/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( POOCHYENA )
# 290 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_8, 0
	return

Route101_EventScript_RandomizeEncounterVar8_3:
# 292 "data/maps/Route101/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( ZIGZAGOON )
# 293 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_8, 1
	return

Route101_EventScript_RandomizeEncounterVar8_4:
# 296 "data/maps/Route101/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( WURMPLE )
# 297 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_8, 2
	return

Route101_EventScript_RandomizeEncounterVar8_5:
# 300 "data/maps/Route101/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( ROOKIDEE )
# 301 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_8, 3
	return

Route101_EventScript_RandomizeEncounterVar8_6:
# 304 "data/maps/Route101/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( BLIPBUG )
# 305 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_8, 4
	return


Route101_EventScript_EncounterVar8::
# 310 "data/maps/Route101/scripts.pory"
	lock
# 311 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_8
# 312 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_EncounterVar8_3
# 324 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_EncounterVar8_4
# 336 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_EncounterVar8_5
# 348 "data/maps/Route101/scripts.pory"
	case 3, Route101_EventScript_EncounterVar8_6
# 360 "data/maps/Route101/scripts.pory"
	case 4, Route101_EventScript_EncounterVar8_7
Route101_EventScript_EncounterVar8_1:
# 373 "data/maps/Route101/scripts.pory"
	release
	return

Route101_EventScript_EncounterVar8_3:
# 313 "data/maps/Route101/scripts.pory"
	random 5
# 314 "data/maps/Route101/scripts.pory"
	switch VAR_RESULT
# 315 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_EncounterVar8_9
# 316 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_EncounterVar8_9
# 318 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_EncounterVar8_10
# 319 "data/maps/Route101/scripts.pory"
	case 3, Route101_EventScript_EncounterVar8_10
# 321 "data/maps/Route101/scripts.pory"
	case 4, Route101_EventScript_EncounterVar8_11
	goto Route101_EventScript_EncounterVar8_1

Route101_EventScript_EncounterVar8_4:
# 325 "data/maps/Route101/scripts.pory"
	random 5
# 326 "data/maps/Route101/scripts.pory"
	switch VAR_RESULT
# 327 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_EncounterVar8_13
# 328 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_EncounterVar8_13
# 330 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_EncounterVar8_14
# 331 "data/maps/Route101/scripts.pory"
	case 3, Route101_EventScript_EncounterVar8_14
# 333 "data/maps/Route101/scripts.pory"
	case 4, Route101_EventScript_EncounterVar8_15
	goto Route101_EventScript_EncounterVar8_1

Route101_EventScript_EncounterVar8_5:
# 337 "data/maps/Route101/scripts.pory"
	random 5
# 338 "data/maps/Route101/scripts.pory"
	switch VAR_RESULT
# 339 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_EncounterVar8_17
# 340 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_EncounterVar8_17
# 342 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_EncounterVar8_18
# 343 "data/maps/Route101/scripts.pory"
	case 3, Route101_EventScript_EncounterVar8_18
# 345 "data/maps/Route101/scripts.pory"
	case 4, Route101_EventScript_EncounterVar8_19
	goto Route101_EventScript_EncounterVar8_1

Route101_EventScript_EncounterVar8_6:
# 349 "data/maps/Route101/scripts.pory"
	random 5
# 350 "data/maps/Route101/scripts.pory"
	switch VAR_RESULT
# 351 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_EncounterVar8_21
# 352 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_EncounterVar8_21
# 354 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_EncounterVar8_22
# 355 "data/maps/Route101/scripts.pory"
	case 3, Route101_EventScript_EncounterVar8_22
# 357 "data/maps/Route101/scripts.pory"
	case 4, Route101_EventScript_EncounterVar8_23
	goto Route101_EventScript_EncounterVar8_1

Route101_EventScript_EncounterVar8_7:
# 361 "data/maps/Route101/scripts.pory"
	random 5
# 362 "data/maps/Route101/scripts.pory"
	switch VAR_RESULT
# 363 "data/maps/Route101/scripts.pory"
	case 0, Route101_EventScript_EncounterVar8_25
# 364 "data/maps/Route101/scripts.pory"
	case 1, Route101_EventScript_EncounterVar8_25
# 366 "data/maps/Route101/scripts.pory"
	case 2, Route101_EventScript_EncounterVar8_26
# 367 "data/maps/Route101/scripts.pory"
	case 3, Route101_EventScript_EncounterVar8_26
# 369 "data/maps/Route101/scripts.pory"
	case 4, Route101_EventScript_EncounterVar8_27
	goto Route101_EventScript_EncounterVar8_1

Route101_EventScript_EncounterVar8_9:
# 317 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 2, FLAG_TEMP_8
	goto Route101_EventScript_EncounterVar8_1

Route101_EventScript_EncounterVar8_10:
# 320 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 3, FLAG_TEMP_8
	goto Route101_EventScript_EncounterVar8_1

Route101_EventScript_EncounterVar8_11:
# 322 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 4, FLAG_TEMP_8
	goto Route101_EventScript_EncounterVar8_1

Route101_EventScript_EncounterVar8_13:
# 329 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 2, FLAG_TEMP_8
	goto Route101_EventScript_EncounterVar8_1

Route101_EventScript_EncounterVar8_14:
# 332 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 3, FLAG_TEMP_8
	goto Route101_EventScript_EncounterVar8_1

Route101_EventScript_EncounterVar8_15:
# 334 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 4, FLAG_TEMP_8
	goto Route101_EventScript_EncounterVar8_1

Route101_EventScript_EncounterVar8_17:
# 341 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 2, FLAG_TEMP_8
	goto Route101_EventScript_EncounterVar8_1

Route101_EventScript_EncounterVar8_18:
# 344 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 3, FLAG_TEMP_8
	goto Route101_EventScript_EncounterVar8_1

Route101_EventScript_EncounterVar8_19:
# 346 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 4, FLAG_TEMP_8
	goto Route101_EventScript_EncounterVar8_1

Route101_EventScript_EncounterVar8_21:
# 353 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 2, FLAG_TEMP_8
	goto Route101_EventScript_EncounterVar8_1

Route101_EventScript_EncounterVar8_22:
# 356 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 3, FLAG_TEMP_8
	goto Route101_EventScript_EncounterVar8_1

Route101_EventScript_EncounterVar8_23:
# 358 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 4, FLAG_TEMP_8
	goto Route101_EventScript_EncounterVar8_1

Route101_EventScript_EncounterVar8_25:
# 365 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_BLIPBUG, 2, FLAG_TEMP_8
	goto Route101_EventScript_EncounterVar8_1

Route101_EventScript_EncounterVar8_26:
# 368 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_BLIPBUG, 3, FLAG_TEMP_8
	goto Route101_EventScript_EncounterVar8_1

Route101_EventScript_EncounterVar8_27:
# 370 "data/maps/Route101/scripts.pory"
	dowildencounter SPECIES_BLIPBUG, 4, FLAG_TEMP_8
	goto Route101_EventScript_EncounterVar8_1


# 376 "data/maps/Route101/scripts.pory"

# 377 "data/maps/Route101/scripts.pory"
.set LOCALID_BIRCH, 2
# 378 "data/maps/Route101/scripts.pory"
.set LOCALID_ZIGZAGOON, 4
# 379 "data/maps/Route101/scripts.pory"

# 380 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 381 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 382 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
# 383 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route101_OnResume
# 384 "data/maps/Route101/scripts.pory"
	.byte 0
# 385 "data/maps/Route101/scripts.pory"

# 386 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 387 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 388 "data/maps/Route101/scripts.pory"
	call Route101_EventScript_RandomizeEnconters
# 389 "data/maps/Route101/scripts.pory"
	call_if_set FLAG_HIDE_ROUTE_101_BOY Route101_EventScript_HideEncounters
# 390 "data/maps/Route101/scripts.pory"
	end
# 391 "data/maps/Route101/scripts.pory"

# 392 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 393 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 394 "data/maps/Route101/scripts.pory"
	.2byte 0
# 395 "data/maps/Route101/scripts.pory"

# 396 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 397 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 398 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 399 "data/maps/Route101/scripts.pory"
	end
# 400 "data/maps/Route101/scripts.pory"

# 401 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 402 "data/maps/Route101/scripts.pory"
	lockall
# 403 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 404 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 405 "data/maps/Route101/scripts.pory"
	closemessage
# 406 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_BIRCH, 0, 15
# 407 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ZIGZAGOON, 0, 16
# 408 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 409 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
# 410 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 411 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 412 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 413 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
# 414 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 415 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 416 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 417 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 418 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 419 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 420 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 421 "data/maps/Route101/scripts.pory"
	closemessage
# 422 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 423 "data/maps/Route101/scripts.pory"
	releaseall
# 424 "data/maps/Route101/scripts.pory"
	end
# 425 "data/maps/Route101/scripts.pory"

# 426 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 427 "data/maps/Route101/scripts.pory"
	lockall
# 428 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 429 "data/maps/Route101/scripts.pory"
	closemessage
# 430 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 431 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 432 "data/maps/Route101/scripts.pory"
	releaseall
# 433 "data/maps/Route101/scripts.pory"
	end
# 434 "data/maps/Route101/scripts.pory"

# 435 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 436 "data/maps/Route101/scripts.pory"
	lockall
# 437 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 438 "data/maps/Route101/scripts.pory"
	closemessage
# 439 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 440 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 441 "data/maps/Route101/scripts.pory"
	releaseall
# 442 "data/maps/Route101/scripts.pory"
	end
# 443 "data/maps/Route101/scripts.pory"

# 444 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 445 "data/maps/Route101/scripts.pory"
	lockall
# 446 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 447 "data/maps/Route101/scripts.pory"
	closemessage
# 448 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 449 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 450 "data/maps/Route101/scripts.pory"
	releaseall
# 451 "data/maps/Route101/scripts.pory"
	end
# 452 "data/maps/Route101/scripts.pory"

# 453 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 454 "data/maps/Route101/scripts.pory"
	walk_up
# 455 "data/maps/Route101/scripts.pory"
	step_end
# 456 "data/maps/Route101/scripts.pory"

# 457 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 458 "data/maps/Route101/scripts.pory"
	walk_right
# 459 "data/maps/Route101/scripts.pory"
	step_end
# 460 "data/maps/Route101/scripts.pory"

# 461 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 462 "data/maps/Route101/scripts.pory"
	walk_down
# 463 "data/maps/Route101/scripts.pory"
	step_end
# 464 "data/maps/Route101/scripts.pory"

# 465 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 466 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 467 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 468 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 469 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 470 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 471 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 472 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 473 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 474 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 475 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 476 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 477 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 478 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 479 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 480 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 481 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 482 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 483 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 484 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 485 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 486 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 487 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 488 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 489 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 490 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 491 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 492 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 493 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 494 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 495 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 496 "data/maps/Route101/scripts.pory"
	step_end
# 497 "data/maps/Route101/scripts.pory"

# 498 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 499 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 500 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 501 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 502 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 503 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 504 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 505 "data/maps/Route101/scripts.pory"
	step_end
# 506 "data/maps/Route101/scripts.pory"

# 507 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 508 "data/maps/Route101/scripts.pory"
	step_end
# 509 "data/maps/Route101/scripts.pory"

# 510 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 511 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 512 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 513 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 514 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 515 "data/maps/Route101/scripts.pory"
	step_end
# 516 "data/maps/Route101/scripts.pory"

# 517 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 518 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 519 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 520 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 521 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 522 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 523 "data/maps/Route101/scripts.pory"
	step_end
# 524 "data/maps/Route101/scripts.pory"

# 525 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 526 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 527 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 528 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 529 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 530 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 531 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 532 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 533 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 534 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 535 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 536 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 537 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 538 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 539 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 540 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 541 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 542 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 543 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 544 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 545 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 546 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 547 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 548 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 549 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 550 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 551 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 552 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 553 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 554 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 555 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 556 "data/maps/Route101/scripts.pory"
	step_end
# 557 "data/maps/Route101/scripts.pory"

# 558 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 559 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 560 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 561 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 562 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 563 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 564 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 565 "data/maps/Route101/scripts.pory"
	step_end
# 566 "data/maps/Route101/scripts.pory"

# 567 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 568 "data/maps/Route101/scripts.pory"
	step_end
# 569 "data/maps/Route101/scripts.pory"

# 570 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 571 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 572 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 573 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 574 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 575 "data/maps/Route101/scripts.pory"
	step_end
# 576 "data/maps/Route101/scripts.pory"

# 577 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 578 "data/maps/Route101/scripts.pory"
	walk_up
# 579 "data/maps/Route101/scripts.pory"
	walk_up
# 580 "data/maps/Route101/scripts.pory"
	step_end
# 581 "data/maps/Route101/scripts.pory"

# 582 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 583 "data/maps/Route101/scripts.pory"
	walk_up
# 584 "data/maps/Route101/scripts.pory"
	walk_left
# 585 "data/maps/Route101/scripts.pory"
	walk_up
# 586 "data/maps/Route101/scripts.pory"
	step_end
# 587 "data/maps/Route101/scripts.pory"

# 588 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 589 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 590 "data/maps/Route101/scripts.pory"
	end
# 591 "data/maps/Route101/scripts.pory"

# 592 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 593 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 594 "data/maps/Route101/scripts.pory"
	end
# 595 "data/maps/Route101/scripts.pory"

# 596 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 597 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 598 "data/maps/Route101/scripts.pory"
	end
# 599 "data/maps/Route101/scripts.pory"

# 600 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 601 "data/maps/Route101/scripts.pory"
	lock
# 602 "data/maps/Route101/scripts.pory"
	faceplayer
# 603 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 604 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 605 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 606 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ZIGZAGOON
# 607 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
# 608 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 609 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 610 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 611 "data/maps/Route101/scripts.pory"
	waitstate
# 612 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
# 613 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 614 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 615 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 616 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 617 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 618 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 619 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 620 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 621 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 622 "data/maps/Route101/scripts.pory"
	checkplayergender
# 623 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 624 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 625 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 626 "data/maps/Route101/scripts.pory"
	waitstate
# 627 "data/maps/Route101/scripts.pory"
	release
# 628 "data/maps/Route101/scripts.pory"
	end
# 629 "data/maps/Route101/scripts.pory"

# 630 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 631 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 632 "data/maps/Route101/scripts.pory"
	return
# 633 "data/maps/Route101/scripts.pory"

# 634 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 635 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 636 "data/maps/Route101/scripts.pory"
	return
# 637 "data/maps/Route101/scripts.pory"

# 638 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 639 "data/maps/Route101/scripts.pory"
	walk_right
# 640 "data/maps/Route101/scripts.pory"
	step_end
# 641 "data/maps/Route101/scripts.pory"

# 642 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 643 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 644 "data/maps/Route101/scripts.pory"

# 645 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 646 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 647 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 648 "data/maps/Route101/scripts.pory"
	.string "In my BAG!\n"
# 649 "data/maps/Route101/scripts.pory"
	.string "There's a POKé BALL!$"
# 650 "data/maps/Route101/scripts.pory"

# 651 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 652 "data/maps/Route101/scripts.pory"
	.string "Wh-Where are you going?!\n"
# 653 "data/maps/Route101/scripts.pory"
	.string "Don't leave me like this!$"
# 654 "data/maps/Route101/scripts.pory"

# 655 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 656 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 657 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 658 "data/maps/Route101/scripts.pory"
	.string "POKéMON when I was jumped.\p"
# 659 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 660 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 661 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 662 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 663 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 664 "data/maps/Route101/scripts.pory"
	.string "by my POKéMON LAB later, okay?$"
# 665 "data/maps/Route101/scripts.pory"

# 666 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 667 "data/maps/Route101/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 668 "data/maps/Route101/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 669 "data/maps/Route101/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 670 "data/maps/Route101/scripts.pory"
	.string "TOWN right close by.$"
# 671 "data/maps/Route101/scripts.pory"

# 672 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 673 "data/maps/Route101/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 674 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 675 "data/maps/Route101/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 676 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 677 "data/maps/Route101/scripts.pory"

# 678 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 679 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
# 680 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} OLDALE TOWN$"
