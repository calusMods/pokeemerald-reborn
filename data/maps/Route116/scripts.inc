Route116_OnResume::
# 2 "data/maps/Route116/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Common_EventScript_RemoveStaticPokemonEncounter
	return


Route116_EventScript_RandomizeEncounters::
# 7 "data/maps/Route116/scripts.pory"
	setflag FLAG_TEMP_5
# 8 "data/maps/Route116/scripts.pory"
	random 10
# 9 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_lt Route116_EventScript_RandomizeEncounters_2
Route116_EventScript_RandomizeEncounters_1:
# 14 "data/maps/Route116/scripts.pory"
	setflag FLAG_TEMP_6
# 15 "data/maps/Route116/scripts.pory"
	random 10
# 16 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_lt Route116_EventScript_RandomizeEncounters_5
Route116_EventScript_RandomizeEncounters_4:
# 21 "data/maps/Route116/scripts.pory"
	setflag FLAG_TEMP_7
# 22 "data/maps/Route116/scripts.pory"
	random 10
# 23 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_lt Route116_EventScript_RandomizeEncounters_8
Route116_EventScript_RandomizeEncounters_7:
# 28 "data/maps/Route116/scripts.pory"
	setflag FLAG_TEMP_8
# 29 "data/maps/Route116/scripts.pory"
	random 10
# 30 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_lt Route116_EventScript_RandomizeEncounters_10
	return

Route116_EventScript_RandomizeEncounters_2:
# 10 "data/maps/Route116/scripts.pory"
	call Route116_EventScript_RandomizeEncounterVar5
# 11 "data/maps/Route116/scripts.pory"
	clearflag FLAG_TEMP_5
	goto Route116_EventScript_RandomizeEncounters_1

Route116_EventScript_RandomizeEncounters_5:
# 17 "data/maps/Route116/scripts.pory"
	call Route116_EventScript_RandomizeEncounterVar6
# 18 "data/maps/Route116/scripts.pory"
	clearflag FLAG_TEMP_6
	goto Route116_EventScript_RandomizeEncounters_4

Route116_EventScript_RandomizeEncounters_8:
# 24 "data/maps/Route116/scripts.pory"
	call Route116_EventScript_RandomizeEncounterVar7
# 25 "data/maps/Route116/scripts.pory"
	clearflag FLAG_TEMP_7
	goto Route116_EventScript_RandomizeEncounters_7

Route116_EventScript_RandomizeEncounters_10:
# 31 "data/maps/Route116/scripts.pory"
	call Route116_EventScript_RandomizeEncounterVar8
# 32 "data/maps/Route116/scripts.pory"
	clearflag FLAG_TEMP_8
	return


Route116_EventScript_RandomizeEncounterVar5::
# 37 "data/maps/Route116/scripts.pory"
	random 10
# 38 "data/maps/Route116/scripts.pory"
	switch VAR_RESULT
# 39 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_RandomizeEncounterVar5_2
# 40 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_RandomizeEncounterVar5_2
# 41 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_RandomizeEncounterVar5_2
# 44 "data/maps/Route116/scripts.pory"
	case 3, Route116_EventScript_RandomizeEncounterVar5_3
# 45 "data/maps/Route116/scripts.pory"
	case 4, Route116_EventScript_RandomizeEncounterVar5_3
# 48 "data/maps/Route116/scripts.pory"
	case 5, Route116_EventScript_RandomizeEncounterVar5_4
# 49 "data/maps/Route116/scripts.pory"
	case 6, Route116_EventScript_RandomizeEncounterVar5_4
# 52 "data/maps/Route116/scripts.pory"
	case 7, Route116_EventScript_RandomizeEncounterVar5_5
# 53 "data/maps/Route116/scripts.pory"
	case 8, Route116_EventScript_RandomizeEncounterVar5_5
# 56 "data/maps/Route116/scripts.pory"
	case 9, Route116_EventScript_RandomizeEncounterVar5_6
	return

Route116_EventScript_RandomizeEncounterVar5_2:
# 42 "data/maps/Route116/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( KRICKETOT )
# 43 "data/maps/Route116/scripts.pory"
	setvar VAR_TEMP_5, 0
	return

Route116_EventScript_RandomizeEncounterVar5_3:
# 46 "data/maps/Route116/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( ABRA )
# 47 "data/maps/Route116/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

Route116_EventScript_RandomizeEncounterVar5_4:
# 50 "data/maps/Route116/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( NINCADA )
# 51 "data/maps/Route116/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

Route116_EventScript_RandomizeEncounterVar5_5:
# 54 "data/maps/Route116/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( MEOWTH_GALAR )
# 55 "data/maps/Route116/scripts.pory"
	setvar VAR_TEMP_5, 3
	return

Route116_EventScript_RandomizeEncounterVar5_6:
# 57 "data/maps/Route116/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( SKITTY )
# 58 "data/maps/Route116/scripts.pory"
	setvar VAR_TEMP_5, 4
	return


Route116_EventScript_EncounterVar5::
# 63 "data/maps/Route116/scripts.pory"
	lock
# 64 "data/maps/Route116/scripts.pory"
	switch VAR_TEMP_5
# 65 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_EncounterVar5_3
# 77 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_EncounterVar5_4
# 89 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_EncounterVar5_5
# 101 "data/maps/Route116/scripts.pory"
	case 3, Route116_EventScript_EncounterVar5_6
# 113 "data/maps/Route116/scripts.pory"
	case 4, Route116_EventScript_EncounterVar5_7
Route116_EventScript_EncounterVar5_1:
# 126 "data/maps/Route116/scripts.pory"
	release
	return

Route116_EventScript_EncounterVar5_3:
# 66 "data/maps/Route116/scripts.pory"
	random 5
# 67 "data/maps/Route116/scripts.pory"
	switch VAR_RESULT
# 68 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_EncounterVar5_9
# 70 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_EncounterVar5_10
# 71 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_EncounterVar5_10
# 73 "data/maps/Route116/scripts.pory"
	case 3, Route116_EventScript_EncounterVar5_11
# 74 "data/maps/Route116/scripts.pory"
	case 4, Route116_EventScript_EncounterVar5_11
	goto Route116_EventScript_EncounterVar5_1

Route116_EventScript_EncounterVar5_4:
# 78 "data/maps/Route116/scripts.pory"
	random 5
# 79 "data/maps/Route116/scripts.pory"
	switch VAR_RESULT
# 80 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_EncounterVar5_13
# 82 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_EncounterVar5_14
# 83 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_EncounterVar5_14
# 85 "data/maps/Route116/scripts.pory"
	case 3, Route116_EventScript_EncounterVar5_15
# 86 "data/maps/Route116/scripts.pory"
	case 4, Route116_EventScript_EncounterVar5_15
	goto Route116_EventScript_EncounterVar5_1

Route116_EventScript_EncounterVar5_5:
# 90 "data/maps/Route116/scripts.pory"
	random 5
# 91 "data/maps/Route116/scripts.pory"
	switch VAR_RESULT
# 92 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_EncounterVar5_17
# 94 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_EncounterVar5_18
# 95 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_EncounterVar5_18
# 97 "data/maps/Route116/scripts.pory"
	case 3, Route116_EventScript_EncounterVar5_19
# 98 "data/maps/Route116/scripts.pory"
	case 4, Route116_EventScript_EncounterVar5_19
	goto Route116_EventScript_EncounterVar5_1

Route116_EventScript_EncounterVar5_6:
# 102 "data/maps/Route116/scripts.pory"
	random 5
# 103 "data/maps/Route116/scripts.pory"
	switch VAR_RESULT
# 104 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_EncounterVar5_21
# 106 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_EncounterVar5_22
# 107 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_EncounterVar5_22
# 109 "data/maps/Route116/scripts.pory"
	case 3, Route116_EventScript_EncounterVar5_23
# 110 "data/maps/Route116/scripts.pory"
	case 4, Route116_EventScript_EncounterVar5_23
	goto Route116_EventScript_EncounterVar5_1

Route116_EventScript_EncounterVar5_7:
# 114 "data/maps/Route116/scripts.pory"
	random 5
# 115 "data/maps/Route116/scripts.pory"
	switch VAR_RESULT
# 116 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_EncounterVar5_25
# 118 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_EncounterVar5_26
# 119 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_EncounterVar5_26
# 121 "data/maps/Route116/scripts.pory"
	case 3, Route116_EventScript_EncounterVar5_27
# 122 "data/maps/Route116/scripts.pory"
	case 5, Route116_EventScript_EncounterVar5_27
	goto Route116_EventScript_EncounterVar5_1

Route116_EventScript_EncounterVar5_9:
# 69 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_KRICKETOT, 6, FLAG_TEMP_5
	goto Route116_EventScript_EncounterVar5_1

Route116_EventScript_EncounterVar5_10:
# 72 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_KRICKETOT, 7, FLAG_TEMP_5
	goto Route116_EventScript_EncounterVar5_1

Route116_EventScript_EncounterVar5_11:
# 75 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_KRICKETOT, 8, FLAG_TEMP_5
	goto Route116_EventScript_EncounterVar5_1

Route116_EventScript_EncounterVar5_13:
# 81 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_ABRA, 6, FLAG_TEMP_5
	goto Route116_EventScript_EncounterVar5_1

Route116_EventScript_EncounterVar5_14:
# 84 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_ABRA, 7, FLAG_TEMP_5
	goto Route116_EventScript_EncounterVar5_1

Route116_EventScript_EncounterVar5_15:
# 87 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_ABRA, 8, FLAG_TEMP_5
	goto Route116_EventScript_EncounterVar5_1

Route116_EventScript_EncounterVar5_17:
# 93 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_NINCADA, 6, FLAG_TEMP_5
	goto Route116_EventScript_EncounterVar5_1

Route116_EventScript_EncounterVar5_18:
# 96 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_NINCADA, 7, FLAG_TEMP_5
	goto Route116_EventScript_EncounterVar5_1

Route116_EventScript_EncounterVar5_19:
# 99 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_NINCADA, 8, FLAG_TEMP_5
	goto Route116_EventScript_EncounterVar5_1

Route116_EventScript_EncounterVar5_21:
# 105 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_MEOWTH_GALAR, 6, FLAG_TEMP_5
	goto Route116_EventScript_EncounterVar5_1

Route116_EventScript_EncounterVar5_22:
# 108 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_MEOWTH_GALAR, 7, FLAG_TEMP_5
	goto Route116_EventScript_EncounterVar5_1

Route116_EventScript_EncounterVar5_23:
# 111 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_MEOWTH_GALAR, 8, FLAG_TEMP_5
	goto Route116_EventScript_EncounterVar5_1

Route116_EventScript_EncounterVar5_25:
# 117 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_SKITTY, 6, FLAG_TEMP_5
	goto Route116_EventScript_EncounterVar5_1

Route116_EventScript_EncounterVar5_26:
# 120 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_SKITTY, 7, FLAG_TEMP_5
	goto Route116_EventScript_EncounterVar5_1

Route116_EventScript_EncounterVar5_27:
# 123 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_SKITTY, 8, FLAG_TEMP_5
	goto Route116_EventScript_EncounterVar5_1


Route116_EventScript_RandomizeEncounterVar6::
# 130 "data/maps/Route116/scripts.pory"
	random 10
# 131 "data/maps/Route116/scripts.pory"
	switch VAR_RESULT
# 132 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_RandomizeEncounterVar6_2
# 133 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_RandomizeEncounterVar6_2
# 134 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_RandomizeEncounterVar6_2
# 137 "data/maps/Route116/scripts.pory"
	case 3, Route116_EventScript_RandomizeEncounterVar6_3
# 138 "data/maps/Route116/scripts.pory"
	case 4, Route116_EventScript_RandomizeEncounterVar6_3
# 141 "data/maps/Route116/scripts.pory"
	case 5, Route116_EventScript_RandomizeEncounterVar6_4
# 142 "data/maps/Route116/scripts.pory"
	case 6, Route116_EventScript_RandomizeEncounterVar6_4
# 145 "data/maps/Route116/scripts.pory"
	case 7, Route116_EventScript_RandomizeEncounterVar6_5
# 146 "data/maps/Route116/scripts.pory"
	case 8, Route116_EventScript_RandomizeEncounterVar6_5
# 149 "data/maps/Route116/scripts.pory"
	case 9, Route116_EventScript_RandomizeEncounterVar6_6
	return

Route116_EventScript_RandomizeEncounterVar6_2:
# 135 "data/maps/Route116/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( KRICKETOT )
# 136 "data/maps/Route116/scripts.pory"
	setvar VAR_TEMP_6, 0
	return

Route116_EventScript_RandomizeEncounterVar6_3:
# 139 "data/maps/Route116/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( ABRA )
# 140 "data/maps/Route116/scripts.pory"
	setvar VAR_TEMP_6, 1
	return

Route116_EventScript_RandomizeEncounterVar6_4:
# 143 "data/maps/Route116/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( NINCADA )
# 144 "data/maps/Route116/scripts.pory"
	setvar VAR_TEMP_6, 2
	return

Route116_EventScript_RandomizeEncounterVar6_5:
# 147 "data/maps/Route116/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( MEOWTH_GALAR )
# 148 "data/maps/Route116/scripts.pory"
	setvar VAR_TEMP_6, 3
	return

Route116_EventScript_RandomizeEncounterVar6_6:
# 150 "data/maps/Route116/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( SKITTY )
# 151 "data/maps/Route116/scripts.pory"
	setvar VAR_TEMP_6, 4
	return


Route116_EventScript_EncounterVar6::
# 156 "data/maps/Route116/scripts.pory"
	lock
# 157 "data/maps/Route116/scripts.pory"
	switch VAR_TEMP_6
# 158 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_EncounterVar6_3
# 170 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_EncounterVar6_4
# 182 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_EncounterVar6_5
# 194 "data/maps/Route116/scripts.pory"
	case 3, Route116_EventScript_EncounterVar6_6
# 206 "data/maps/Route116/scripts.pory"
	case 4, Route116_EventScript_EncounterVar6_7
Route116_EventScript_EncounterVar6_1:
# 219 "data/maps/Route116/scripts.pory"
	release
	return

Route116_EventScript_EncounterVar6_3:
# 159 "data/maps/Route116/scripts.pory"
	random 5
# 160 "data/maps/Route116/scripts.pory"
	switch VAR_RESULT
# 161 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_EncounterVar6_9
# 163 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_EncounterVar6_10
# 164 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_EncounterVar6_10
# 166 "data/maps/Route116/scripts.pory"
	case 3, Route116_EventScript_EncounterVar6_11
# 167 "data/maps/Route116/scripts.pory"
	case 4, Route116_EventScript_EncounterVar6_11
	goto Route116_EventScript_EncounterVar6_1

Route116_EventScript_EncounterVar6_4:
# 171 "data/maps/Route116/scripts.pory"
	random 5
# 172 "data/maps/Route116/scripts.pory"
	switch VAR_RESULT
# 173 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_EncounterVar6_13
# 175 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_EncounterVar6_14
# 176 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_EncounterVar6_14
# 178 "data/maps/Route116/scripts.pory"
	case 3, Route116_EventScript_EncounterVar6_15
# 179 "data/maps/Route116/scripts.pory"
	case 4, Route116_EventScript_EncounterVar6_15
	goto Route116_EventScript_EncounterVar6_1

Route116_EventScript_EncounterVar6_5:
# 183 "data/maps/Route116/scripts.pory"
	random 5
# 184 "data/maps/Route116/scripts.pory"
	switch VAR_RESULT
# 185 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_EncounterVar6_17
# 187 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_EncounterVar6_18
# 188 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_EncounterVar6_18
# 190 "data/maps/Route116/scripts.pory"
	case 3, Route116_EventScript_EncounterVar6_19
# 191 "data/maps/Route116/scripts.pory"
	case 4, Route116_EventScript_EncounterVar6_19
	goto Route116_EventScript_EncounterVar6_1

Route116_EventScript_EncounterVar6_6:
# 195 "data/maps/Route116/scripts.pory"
	random 5
# 196 "data/maps/Route116/scripts.pory"
	switch VAR_RESULT
# 197 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_EncounterVar6_21
# 199 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_EncounterVar6_22
# 200 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_EncounterVar6_22
# 202 "data/maps/Route116/scripts.pory"
	case 3, Route116_EventScript_EncounterVar6_23
# 203 "data/maps/Route116/scripts.pory"
	case 4, Route116_EventScript_EncounterVar6_23
	goto Route116_EventScript_EncounterVar6_1

Route116_EventScript_EncounterVar6_7:
# 207 "data/maps/Route116/scripts.pory"
	random 5
# 208 "data/maps/Route116/scripts.pory"
	switch VAR_RESULT
# 209 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_EncounterVar6_25
# 211 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_EncounterVar6_26
# 212 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_EncounterVar6_26
# 214 "data/maps/Route116/scripts.pory"
	case 3, Route116_EventScript_EncounterVar6_27
# 215 "data/maps/Route116/scripts.pory"
	case 5, Route116_EventScript_EncounterVar6_27
	goto Route116_EventScript_EncounterVar6_1

Route116_EventScript_EncounterVar6_9:
# 162 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_KRICKETOT, 6, FLAG_TEMP_6
	goto Route116_EventScript_EncounterVar6_1

Route116_EventScript_EncounterVar6_10:
# 165 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_KRICKETOT, 7, FLAG_TEMP_6
	goto Route116_EventScript_EncounterVar6_1

Route116_EventScript_EncounterVar6_11:
# 168 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_KRICKETOT, 8, FLAG_TEMP_6
	goto Route116_EventScript_EncounterVar6_1

Route116_EventScript_EncounterVar6_13:
# 174 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_ABRA, 6, FLAG_TEMP_6
	goto Route116_EventScript_EncounterVar6_1

Route116_EventScript_EncounterVar6_14:
# 177 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_ABRA, 7, FLAG_TEMP_6
	goto Route116_EventScript_EncounterVar6_1

Route116_EventScript_EncounterVar6_15:
# 180 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_ABRA, 8, FLAG_TEMP_6
	goto Route116_EventScript_EncounterVar6_1

Route116_EventScript_EncounterVar6_17:
# 186 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_NINCADA, 6, FLAG_TEMP_6
	goto Route116_EventScript_EncounterVar6_1

Route116_EventScript_EncounterVar6_18:
# 189 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_NINCADA, 7, FLAG_TEMP_6
	goto Route116_EventScript_EncounterVar6_1

Route116_EventScript_EncounterVar6_19:
# 192 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_NINCADA, 8, FLAG_TEMP_6
	goto Route116_EventScript_EncounterVar6_1

Route116_EventScript_EncounterVar6_21:
# 198 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_MEOWTH_GALAR, 6, FLAG_TEMP_6
	goto Route116_EventScript_EncounterVar6_1

Route116_EventScript_EncounterVar6_22:
# 201 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_MEOWTH_GALAR, 7, FLAG_TEMP_6
	goto Route116_EventScript_EncounterVar6_1

Route116_EventScript_EncounterVar6_23:
# 204 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_MEOWTH_GALAR, 8, FLAG_TEMP_6
	goto Route116_EventScript_EncounterVar6_1

Route116_EventScript_EncounterVar6_25:
# 210 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_SKITTY, 6, FLAG_TEMP_6
	goto Route116_EventScript_EncounterVar6_1

Route116_EventScript_EncounterVar6_26:
# 213 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_SKITTY, 7, FLAG_TEMP_6
	goto Route116_EventScript_EncounterVar6_1

Route116_EventScript_EncounterVar6_27:
# 216 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_SKITTY, 8, FLAG_TEMP_6
	goto Route116_EventScript_EncounterVar6_1


Route116_EventScript_RandomizeEncounterVar7::
# 223 "data/maps/Route116/scripts.pory"
	random 10
# 224 "data/maps/Route116/scripts.pory"
	switch VAR_RESULT
# 225 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_RandomizeEncounterVar7_2
# 226 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_RandomizeEncounterVar7_2
# 227 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_RandomizeEncounterVar7_2
# 230 "data/maps/Route116/scripts.pory"
	case 3, Route116_EventScript_RandomizeEncounterVar7_3
# 231 "data/maps/Route116/scripts.pory"
	case 4, Route116_EventScript_RandomizeEncounterVar7_3
# 234 "data/maps/Route116/scripts.pory"
	case 5, Route116_EventScript_RandomizeEncounterVar7_4
# 235 "data/maps/Route116/scripts.pory"
	case 6, Route116_EventScript_RandomizeEncounterVar7_4
# 238 "data/maps/Route116/scripts.pory"
	case 7, Route116_EventScript_RandomizeEncounterVar7_5
# 239 "data/maps/Route116/scripts.pory"
	case 8, Route116_EventScript_RandomizeEncounterVar7_5
# 242 "data/maps/Route116/scripts.pory"
	case 9, Route116_EventScript_RandomizeEncounterVar7_6
	return

Route116_EventScript_RandomizeEncounterVar7_2:
# 228 "data/maps/Route116/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( KRICKETOT )
# 229 "data/maps/Route116/scripts.pory"
	setvar VAR_TEMP_7, 0
	return

Route116_EventScript_RandomizeEncounterVar7_3:
# 232 "data/maps/Route116/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( ABRA )
# 233 "data/maps/Route116/scripts.pory"
	setvar VAR_TEMP_7, 1
	return

Route116_EventScript_RandomizeEncounterVar7_4:
# 236 "data/maps/Route116/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( NINCADA )
# 237 "data/maps/Route116/scripts.pory"
	setvar VAR_TEMP_7, 2
	return

Route116_EventScript_RandomizeEncounterVar7_5:
# 240 "data/maps/Route116/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( MEOWTH_GALAR )
# 241 "data/maps/Route116/scripts.pory"
	setvar VAR_TEMP_7, 3
	return

Route116_EventScript_RandomizeEncounterVar7_6:
# 243 "data/maps/Route116/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( SKITTY )
# 244 "data/maps/Route116/scripts.pory"
	setvar VAR_TEMP_7, 4
	return


Route116_EventScript_EncounterVar7::
# 249 "data/maps/Route116/scripts.pory"
	lock
# 250 "data/maps/Route116/scripts.pory"
	switch VAR_TEMP_7
# 251 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_EncounterVar7_3
# 263 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_EncounterVar7_4
# 275 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_EncounterVar7_5
# 287 "data/maps/Route116/scripts.pory"
	case 3, Route116_EventScript_EncounterVar7_6
# 299 "data/maps/Route116/scripts.pory"
	case 4, Route116_EventScript_EncounterVar7_7
Route116_EventScript_EncounterVar7_1:
# 312 "data/maps/Route116/scripts.pory"
	release
	return

Route116_EventScript_EncounterVar7_3:
# 252 "data/maps/Route116/scripts.pory"
	random 5
# 253 "data/maps/Route116/scripts.pory"
	switch VAR_RESULT
# 254 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_EncounterVar7_9
# 256 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_EncounterVar7_10
# 257 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_EncounterVar7_10
# 259 "data/maps/Route116/scripts.pory"
	case 3, Route116_EventScript_EncounterVar7_11
# 260 "data/maps/Route116/scripts.pory"
	case 4, Route116_EventScript_EncounterVar7_11
	goto Route116_EventScript_EncounterVar7_1

Route116_EventScript_EncounterVar7_4:
# 264 "data/maps/Route116/scripts.pory"
	random 5
# 265 "data/maps/Route116/scripts.pory"
	switch VAR_RESULT
# 266 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_EncounterVar7_13
# 268 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_EncounterVar7_14
# 269 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_EncounterVar7_14
# 271 "data/maps/Route116/scripts.pory"
	case 3, Route116_EventScript_EncounterVar7_15
# 272 "data/maps/Route116/scripts.pory"
	case 4, Route116_EventScript_EncounterVar7_15
	goto Route116_EventScript_EncounterVar7_1

Route116_EventScript_EncounterVar7_5:
# 276 "data/maps/Route116/scripts.pory"
	random 5
# 277 "data/maps/Route116/scripts.pory"
	switch VAR_RESULT
# 278 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_EncounterVar7_17
# 280 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_EncounterVar7_18
# 281 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_EncounterVar7_18
# 283 "data/maps/Route116/scripts.pory"
	case 3, Route116_EventScript_EncounterVar7_19
# 284 "data/maps/Route116/scripts.pory"
	case 4, Route116_EventScript_EncounterVar7_19
	goto Route116_EventScript_EncounterVar7_1

Route116_EventScript_EncounterVar7_6:
# 288 "data/maps/Route116/scripts.pory"
	random 5
# 289 "data/maps/Route116/scripts.pory"
	switch VAR_RESULT
# 290 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_EncounterVar7_21
# 292 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_EncounterVar7_22
# 293 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_EncounterVar7_22
# 295 "data/maps/Route116/scripts.pory"
	case 3, Route116_EventScript_EncounterVar7_23
# 296 "data/maps/Route116/scripts.pory"
	case 4, Route116_EventScript_EncounterVar7_23
	goto Route116_EventScript_EncounterVar7_1

Route116_EventScript_EncounterVar7_7:
# 300 "data/maps/Route116/scripts.pory"
	random 5
# 301 "data/maps/Route116/scripts.pory"
	switch VAR_RESULT
# 302 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_EncounterVar7_25
# 304 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_EncounterVar7_26
# 305 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_EncounterVar7_26
# 307 "data/maps/Route116/scripts.pory"
	case 3, Route116_EventScript_EncounterVar7_27
# 308 "data/maps/Route116/scripts.pory"
	case 5, Route116_EventScript_EncounterVar7_27
	goto Route116_EventScript_EncounterVar7_1

Route116_EventScript_EncounterVar7_9:
# 255 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_KRICKETOT, 6, FLAG_TEMP_7
	goto Route116_EventScript_EncounterVar7_1

Route116_EventScript_EncounterVar7_10:
# 258 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_KRICKETOT, 7, FLAG_TEMP_7
	goto Route116_EventScript_EncounterVar7_1

Route116_EventScript_EncounterVar7_11:
# 261 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_KRICKETOT, 8, FLAG_TEMP_7
	goto Route116_EventScript_EncounterVar7_1

Route116_EventScript_EncounterVar7_13:
# 267 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_ABRA, 6, FLAG_TEMP_7
	goto Route116_EventScript_EncounterVar7_1

Route116_EventScript_EncounterVar7_14:
# 270 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_ABRA, 7, FLAG_TEMP_7
	goto Route116_EventScript_EncounterVar7_1

Route116_EventScript_EncounterVar7_15:
# 273 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_ABRA, 8, FLAG_TEMP_7
	goto Route116_EventScript_EncounterVar7_1

Route116_EventScript_EncounterVar7_17:
# 279 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_NINCADA, 6, FLAG_TEMP_7
	goto Route116_EventScript_EncounterVar7_1

Route116_EventScript_EncounterVar7_18:
# 282 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_NINCADA, 7, FLAG_TEMP_7
	goto Route116_EventScript_EncounterVar7_1

Route116_EventScript_EncounterVar7_19:
# 285 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_NINCADA, 8, FLAG_TEMP_7
	goto Route116_EventScript_EncounterVar7_1

Route116_EventScript_EncounterVar7_21:
# 291 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_MEOWTH_GALAR, 6, FLAG_TEMP_7
	goto Route116_EventScript_EncounterVar7_1

Route116_EventScript_EncounterVar7_22:
# 294 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_MEOWTH_GALAR, 7, FLAG_TEMP_7
	goto Route116_EventScript_EncounterVar7_1

Route116_EventScript_EncounterVar7_23:
# 297 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_MEOWTH_GALAR, 8, FLAG_TEMP_7
	goto Route116_EventScript_EncounterVar7_1

Route116_EventScript_EncounterVar7_25:
# 303 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_SKITTY, 6, FLAG_TEMP_7
	goto Route116_EventScript_EncounterVar7_1

Route116_EventScript_EncounterVar7_26:
# 306 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_SKITTY, 7, FLAG_TEMP_7
	goto Route116_EventScript_EncounterVar7_1

Route116_EventScript_EncounterVar7_27:
# 309 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_SKITTY, 8, FLAG_TEMP_7
	goto Route116_EventScript_EncounterVar7_1


Route116_EventScript_RandomizeEncounterVar8::
# 316 "data/maps/Route116/scripts.pory"
	random 5
# 317 "data/maps/Route116/scripts.pory"
	switch VAR_RESULT
# 318 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_RandomizeEncounterVar8_2
# 319 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_RandomizeEncounterVar8_2
# 322 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_RandomizeEncounterVar8_3
# 323 "data/maps/Route116/scripts.pory"
	case 3, Route116_EventScript_RandomizeEncounterVar8_3
# 326 "data/maps/Route116/scripts.pory"
	case 4, Route116_EventScript_RandomizeEncounterVar8_4
	return

Route116_EventScript_RandomizeEncounterVar8_2:
# 320 "data/maps/Route116/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( KRICKETOT )
# 321 "data/maps/Route116/scripts.pory"
	setvar VAR_TEMP_8, 0
	return

Route116_EventScript_RandomizeEncounterVar8_3:
# 324 "data/maps/Route116/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( MEOWTH_GALAR )
# 325 "data/maps/Route116/scripts.pory"
	setvar VAR_TEMP_8, 1
	return

Route116_EventScript_RandomizeEncounterVar8_4:
# 327 "data/maps/Route116/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( SKITTY )
# 328 "data/maps/Route116/scripts.pory"
	setvar VAR_TEMP_8, 2
	return


Route116_EventScript_EncounterVar8::
# 333 "data/maps/Route116/scripts.pory"
	lock
# 334 "data/maps/Route116/scripts.pory"
	switch VAR_TEMP_8
# 335 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_EncounterVar8_3
# 347 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_EncounterVar8_4
# 359 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_EncounterVar8_5
Route116_EventScript_EncounterVar8_1:
# 372 "data/maps/Route116/scripts.pory"
	release
	return

Route116_EventScript_EncounterVar8_3:
# 336 "data/maps/Route116/scripts.pory"
	random 5
# 337 "data/maps/Route116/scripts.pory"
	switch VAR_RESULT
# 338 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_EncounterVar8_7
# 340 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_EncounterVar8_8
# 341 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_EncounterVar8_8
# 343 "data/maps/Route116/scripts.pory"
	case 3, Route116_EventScript_EncounterVar8_9
# 344 "data/maps/Route116/scripts.pory"
	case 4, Route116_EventScript_EncounterVar8_9
	goto Route116_EventScript_EncounterVar8_1

Route116_EventScript_EncounterVar8_4:
# 348 "data/maps/Route116/scripts.pory"
	random 5
# 349 "data/maps/Route116/scripts.pory"
	switch VAR_RESULT
# 350 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_EncounterVar8_11
# 352 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_EncounterVar8_12
# 353 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_EncounterVar8_12
# 355 "data/maps/Route116/scripts.pory"
	case 3, Route116_EventScript_EncounterVar8_13
# 356 "data/maps/Route116/scripts.pory"
	case 4, Route116_EventScript_EncounterVar8_13
	goto Route116_EventScript_EncounterVar8_1

Route116_EventScript_EncounterVar8_5:
# 360 "data/maps/Route116/scripts.pory"
	random 5
# 361 "data/maps/Route116/scripts.pory"
	switch VAR_RESULT
# 362 "data/maps/Route116/scripts.pory"
	case 0, Route116_EventScript_EncounterVar8_15
# 364 "data/maps/Route116/scripts.pory"
	case 1, Route116_EventScript_EncounterVar8_16
# 365 "data/maps/Route116/scripts.pory"
	case 2, Route116_EventScript_EncounterVar8_16
# 367 "data/maps/Route116/scripts.pory"
	case 3, Route116_EventScript_EncounterVar8_17
# 368 "data/maps/Route116/scripts.pory"
	case 5, Route116_EventScript_EncounterVar8_17
	goto Route116_EventScript_EncounterVar8_1

Route116_EventScript_EncounterVar8_7:
# 339 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_KRICKETOT, 6, FLAG_TEMP_8
	goto Route116_EventScript_EncounterVar8_1

Route116_EventScript_EncounterVar8_8:
# 342 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_KRICKETOT, 7, FLAG_TEMP_8
	goto Route116_EventScript_EncounterVar8_1

Route116_EventScript_EncounterVar8_9:
# 345 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_KRICKETOT, 8, FLAG_TEMP_8
	goto Route116_EventScript_EncounterVar8_1

Route116_EventScript_EncounterVar8_11:
# 351 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_MEOWTH_GALAR, 6, FLAG_TEMP_8
	goto Route116_EventScript_EncounterVar8_1

Route116_EventScript_EncounterVar8_12:
# 354 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_MEOWTH_GALAR, 7, FLAG_TEMP_8
	goto Route116_EventScript_EncounterVar8_1

Route116_EventScript_EncounterVar8_13:
# 357 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_MEOWTH_GALAR, 8, FLAG_TEMP_8
	goto Route116_EventScript_EncounterVar8_1

Route116_EventScript_EncounterVar8_15:
# 363 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_SKITTY, 6, FLAG_TEMP_8
	goto Route116_EventScript_EncounterVar8_1

Route116_EventScript_EncounterVar8_16:
# 366 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_SKITTY, 7, FLAG_TEMP_8
	goto Route116_EventScript_EncounterVar8_1

Route116_EventScript_EncounterVar8_17:
# 369 "data/maps/Route116/scripts.pory"
	dowildencounter SPECIES_SKITTY, 8, FLAG_TEMP_8
	goto Route116_EventScript_EncounterVar8_1


# 375 "data/maps/Route116/scripts.pory"

# 376 "data/maps/Route116/scripts.pory"
.set LOCALID_BRINEY, 11
# 377 "data/maps/Route116/scripts.pory"
.set LOCALID_WANDAS_BF_OUTSIDE, 21
# 378 "data/maps/Route116/scripts.pory"

# 379 "data/maps/Route116/scripts.pory"
Route116_MapScripts::
# 380 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_OnTransition
# 381 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route116_OnLoad
# 382 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route116_OnFrame
# 383 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route116_OnResume
# 384 "data/maps/Route116/scripts.pory"
	.byte 0
# 385 "data/maps/Route116/scripts.pory"

# 386 "data/maps/Route116/scripts.pory"
Route116_OnTransition:
# 387 "data/maps/Route116/scripts.pory"
	call_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_SetWandasBoyfriendPos
# 388 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 389 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH, AbnormalWeather_StartGroudonWeather
# 390 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH, AbnormalWeather_StartGroudonWeather
# 391 "data/maps/Route116/scripts.pory"
	call Route116_EventScript_RandomizeEncounters
# 392 "data/maps/Route116/scripts.pory"
	end
# 393 "data/maps/Route116/scripts.pory"

# 394 "data/maps/Route116/scripts.pory"
Route116_EventScript_SetWandasBoyfriendPos::
# 395 "data/maps/Route116/scripts.pory"
	setobjectxyperm LOCALID_WANDAS_BF_OUTSIDE, 38, 10
# 396 "data/maps/Route116/scripts.pory"
	return
# 397 "data/maps/Route116/scripts.pory"

# 398 "data/maps/Route116/scripts.pory"
Route116_OnLoad:
# 399 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute116North
# 400 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute116South
# 401 "data/maps/Route116/scripts.pory"
	end
# 402 "data/maps/Route116/scripts.pory"

# 403 "data/maps/Route116/scripts.pory"
Route116_OnFrame:
# 404 "data/maps/Route116/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 405 "data/maps/Route116/scripts.pory"
	.2byte 0
# 406 "data/maps/Route116/scripts.pory"

# 407 "data/maps/Route116/scripts.pory"
Route116_EventScript_WandasBoyfriend::
# 408 "data/maps/Route116/scripts.pory"
	lock
# 409 "data/maps/Route116/scripts.pory"
	faceplayer
# 410 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_BoyfriendGruntLeftTunnel
# 411 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, Route116_EventScript_BoyfriendGruntInTunnel
# 412 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_WantToDigTunnel, MSGBOX_DEFAULT
# 413 "data/maps/Route116/scripts.pory"
	release
# 414 "data/maps/Route116/scripts.pory"
	end
# 415 "data/maps/Route116/scripts.pory"

# 416 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntLeftTunnel::
# 417 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_GoonHightailedItOutOfTunnel, MSGBOX_DEFAULT
# 418 "data/maps/Route116/scripts.pory"
	release
# 419 "data/maps/Route116/scripts.pory"
	end
# 420 "data/maps/Route116/scripts.pory"

# 421 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntInTunnel::
# 422 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DiggingTunnelWhenGoonOrderedMeOut, MSGBOX_DEFAULT
# 423 "data/maps/Route116/scripts.pory"
	release
# 424 "data/maps/Route116/scripts.pory"
	end
# 425 "data/maps/Route116/scripts.pory"

# 426 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployee::
# 427 "data/maps/Route116/scripts.pory"
	lock
# 428 "data/maps/Route116/scripts.pory"
	faceplayer
# 429 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, Route116_EventScript_TryGiveRepeatBallAgain
# 430 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ThankYouTokenOfAppreciation, MSGBOX_DEFAULT
# 431 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 432 "data/maps/Route116/scripts.pory"
	end
# 433 "data/maps/Route116/scripts.pory"

# 434 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveRepeatBall::
# 435 "data/maps/Route116/scripts.pory"
	setflag FLAG_MET_DEVON_EMPLOYEE
# 436 "data/maps/Route116/scripts.pory"
	giveitem ITEM_REPEAT_BALL
# 437 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_NoRoomForRepeatBall
# 438 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NewBallAvailableAtMart, MSGBOX_DEFAULT
# 439 "data/maps/Route116/scripts.pory"
	closemessage
# 440 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_DevonEmployeeExit
# 441 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_DevonEmployeeExit
# 442 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_DevonEmployeeExit
# 443 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_DevonEmployeeExitEast
# 444 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 445 "data/maps/Route116/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 446 "data/maps/Route116/scripts.pory"
	setflag FLAG_RECEIVED_REPEAT_BALL
# 447 "data/maps/Route116/scripts.pory"
	release
# 448 "data/maps/Route116/scripts.pory"
	end
# 449 "data/maps/Route116/scripts.pory"

# 450 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExit::
# 451 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExit
# 452 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 453 "data/maps/Route116/scripts.pory"
	return
# 454 "data/maps/Route116/scripts.pory"

# 455 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExitEast::
# 456 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExitEast
# 457 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 458 "data/maps/Route116/scripts.pory"
	return
# 459 "data/maps/Route116/scripts.pory"

# 460 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryGiveRepeatBallAgain::
# 461 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TokenOfAppreciation, MSGBOX_DEFAULT
# 462 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 463 "data/maps/Route116/scripts.pory"
	end
# 464 "data/maps/Route116/scripts.pory"

# 465 "data/maps/Route116/scripts.pory"
Route116_EventScript_NoRoomForRepeatBall::
# 466 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_BagIsJamPacked, MSGBOX_DEFAULT
# 467 "data/maps/Route116/scripts.pory"
	release
# 468 "data/maps/Route116/scripts.pory"
	end
# 469 "data/maps/Route116/scripts.pory"

# 470 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExit:
# 471 "data/maps/Route116/scripts.pory"
	walk_left
# 472 "data/maps/Route116/scripts.pory"
	walk_left
# 473 "data/maps/Route116/scripts.pory"
	walk_left
# 474 "data/maps/Route116/scripts.pory"
	walk_left
# 475 "data/maps/Route116/scripts.pory"
	walk_left
# 476 "data/maps/Route116/scripts.pory"
	walk_left
# 477 "data/maps/Route116/scripts.pory"
	walk_left
# 478 "data/maps/Route116/scripts.pory"
	walk_left
# 479 "data/maps/Route116/scripts.pory"
	step_end
# 480 "data/maps/Route116/scripts.pory"

# 481 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExitEast:
# 482 "data/maps/Route116/scripts.pory"
	walk_down
# 483 "data/maps/Route116/scripts.pory"
	walk_left
# 484 "data/maps/Route116/scripts.pory"
	walk_left
# 485 "data/maps/Route116/scripts.pory"
	walk_left
# 486 "data/maps/Route116/scripts.pory"
	walk_left
# 487 "data/maps/Route116/scripts.pory"
	walk_left
# 488 "data/maps/Route116/scripts.pory"
	walk_left
# 489 "data/maps/Route116/scripts.pory"
	walk_left
# 490 "data/maps/Route116/scripts.pory"
	walk_left
# 491 "data/maps/Route116/scripts.pory"
	walk_left
# 492 "data/maps/Route116/scripts.pory"
	step_end
# 493 "data/maps/Route116/scripts.pory"

# 494 "data/maps/Route116/scripts.pory"
Route116_EventScript_RouteSignRustboro::
# 495 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RouteSignRustboro, MSGBOX_SIGN
# 496 "data/maps/Route116/scripts.pory"
	end
# 497 "data/maps/Route116/scripts.pory"

# 498 "data/maps/Route116/scripts.pory"
Route116_EventScript_RusturfTunnelSign::
# 499 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RusturfTunnelSign, MSGBOX_SIGN
# 500 "data/maps/Route116/scripts.pory"
	end
# 501 "data/maps/Route116/scripts.pory"

# 502 "data/maps/Route116/scripts.pory"
Route116_EventScript_TunnelersRestHouseSign::
# 503 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TunnelersRestHouse, MSGBOX_SIGN
# 504 "data/maps/Route116/scripts.pory"
	end
# 505 "data/maps/Route116/scripts.pory"

# 506 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBToStopEvolution::
# 507 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBToStopEvolution, MSGBOX_SIGN
# 508 "data/maps/Route116/scripts.pory"
	end
# 509 "data/maps/Route116/scripts.pory"

# 510 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBagHasPockets::
# 511 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBagHasPockets, MSGBOX_SIGN
# 512 "data/maps/Route116/scripts.pory"
	end
# 513 "data/maps/Route116/scripts.pory"

# 514 "data/maps/Route116/scripts.pory"
Route116_EventScript_Briney::
# 515 "data/maps/Route116/scripts.pory"
	lock
# 516 "data/maps/Route116/scripts.pory"
	faceplayer
# 517 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 518 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 519 "data/maps/Route116/scripts.pory"
	release
# 520 "data/maps/Route116/scripts.pory"
	end
# 521 "data/maps/Route116/scripts.pory"

# 522 "data/maps/Route116/scripts.pory"
Route116_EventScript_BrineyTrigger::
# 523 "data/maps/Route116/scripts.pory"
	lockall
# 524 "data/maps/Route116/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_WalkInPlaceFasterRight
# 525 "data/maps/Route116/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 526 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 527 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 528 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 529 "data/maps/Route116/scripts.pory"
	releaseall
# 530 "data/maps/Route116/scripts.pory"
	end
# 531 "data/maps/Route116/scripts.pory"

# 532 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesMan::
# 533 "data/maps/Route116/scripts.pory"
	lock
# 534 "data/maps/Route116/scripts.pory"
	faceplayer
# 535 "data/maps/Route116/scripts.pory"
	checkitem ITEM_BLACK_GLASSES
# 536 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_PlayerHasGlasses
# 537 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 538 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_FoundGlassesNotOnPlayer
# 539 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 540 "data/maps/Route116/scripts.pory"
	release
# 541 "data/maps/Route116/scripts.pory"
	end
# 542 "data/maps/Route116/scripts.pory"

# 543 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesNotOnPlayer::
# 544 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CantFindGlassesNotHere, MSGBOX_DEFAULT
# 545 "data/maps/Route116/scripts.pory"
	closemessage
# 546 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 547 "data/maps/Route116/scripts.pory"
	end
# 548 "data/maps/Route116/scripts.pory"

# 549 "data/maps/Route116/scripts.pory"
Route116_EventScript_PlayerHasGlasses::
# 550 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 551 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_MayISeeThoseGlasses, MSGBOX_DEFAULT
# 552 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 553 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_FoundGlassesOnPlayer
# 554 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingFor, MSGBOX_DEFAULT
# 555 "data/maps/Route116/scripts.pory"
	release
# 556 "data/maps/Route116/scripts.pory"
	end
# 557 "data/maps/Route116/scripts.pory"

# 558 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesOnPlayer::
# 559 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingForMaybeTheyArentHere, MSGBOX_DEFAULT
# 560 "data/maps/Route116/scripts.pory"
	closemessage
# 561 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 562 "data/maps/Route116/scripts.pory"
	end
# 563 "data/maps/Route116/scripts.pory"

# 564 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExit::
# 565 "data/maps/Route116/scripts.pory"
	delay 20
# 566 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_GlassesManExitNormal
# 567 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_GlassesManExitNormal
# 568 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_GlassesManExitNormal
# 569 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_GlassesManExitEast
# 570 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 571 "data/maps/Route116/scripts.pory"
	release
# 572 "data/maps/Route116/scripts.pory"
	end
# 573 "data/maps/Route116/scripts.pory"

# 574 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitNormal::
# 575 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExit
# 576 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 577 "data/maps/Route116/scripts.pory"
	return
# 578 "data/maps/Route116/scripts.pory"

# 579 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitEast::
# 580 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExitEast
# 581 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 582 "data/maps/Route116/scripts.pory"
	return
# 583 "data/maps/Route116/scripts.pory"

# 584 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExit:
# 585 "data/maps/Route116/scripts.pory"
	walk_left
# 586 "data/maps/Route116/scripts.pory"
	walk_left
# 587 "data/maps/Route116/scripts.pory"
	walk_left
# 588 "data/maps/Route116/scripts.pory"
	walk_left
# 589 "data/maps/Route116/scripts.pory"
	walk_left
# 590 "data/maps/Route116/scripts.pory"
	walk_left
# 591 "data/maps/Route116/scripts.pory"
	walk_left
# 592 "data/maps/Route116/scripts.pory"
	walk_left
# 593 "data/maps/Route116/scripts.pory"
	walk_left
# 594 "data/maps/Route116/scripts.pory"
	step_end
# 595 "data/maps/Route116/scripts.pory"

# 596 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExitEast:
# 597 "data/maps/Route116/scripts.pory"
	walk_up
# 598 "data/maps/Route116/scripts.pory"
	walk_left
# 599 "data/maps/Route116/scripts.pory"
	walk_left
# 600 "data/maps/Route116/scripts.pory"
	walk_left
# 601 "data/maps/Route116/scripts.pory"
	walk_left
# 602 "data/maps/Route116/scripts.pory"
	walk_left
# 603 "data/maps/Route116/scripts.pory"
	walk_left
# 604 "data/maps/Route116/scripts.pory"
	walk_left
# 605 "data/maps/Route116/scripts.pory"
	walk_left
# 606 "data/maps/Route116/scripts.pory"
	walk_left
# 607 "data/maps/Route116/scripts.pory"
	step_end
# 608 "data/maps/Route116/scripts.pory"

# 609 "data/maps/Route116/scripts.pory"
Route116_EventScript_Joey::
# 610 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOEY, Route116_Text_JoeyIntro, Route116_Text_JoeyDefeat
# 611 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
# 612 "data/maps/Route116/scripts.pory"
	end
# 613 "data/maps/Route116/scripts.pory"

# 614 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jose::
# 615 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOSE, Route116_Text_JoseIntro, Route116_Text_JoseDefeat
# 616 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JosePostBattle, MSGBOX_AUTOCLOSE
# 617 "data/maps/Route116/scripts.pory"
	end
# 618 "data/maps/Route116/scripts.pory"

# 619 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jerry::
# 620 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JERRY_1, Route116_Text_JerryIntro, Route116_Text_JerryDefeat, Route116_EventScript_TryRegisterJerryAfterBattle
# 621 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 622 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_RematchJerry
# 623 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_JERRY_1
# 624 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 625 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_TryRegisterJerry
# 626 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 627 "data/maps/Route116/scripts.pory"
	release
# 628 "data/maps/Route116/scripts.pory"
	end
# 629 "data/maps/Route116/scripts.pory"

# 630 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerryAfterBattle::
# 631 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerryAfterBattle
# 632 "data/maps/Route116/scripts.pory"
	release
# 633 "data/maps/Route116/scripts.pory"
	end
# 634 "data/maps/Route116/scripts.pory"

# 635 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerryAfterBattle::
# 636 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 637 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 638 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister2, MSGBOX_DEFAULT
# 639 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 640 "data/maps/Route116/scripts.pory"
	release
# 641 "data/maps/Route116/scripts.pory"
	end
# 642 "data/maps/Route116/scripts.pory"

# 643 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerry::
# 644 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerry
# 645 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 646 "data/maps/Route116/scripts.pory"
	release
# 647 "data/maps/Route116/scripts.pory"
	end
# 648 "data/maps/Route116/scripts.pory"

# 649 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerry::
# 650 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister1, MSGBOX_DEFAULT
# 651 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 652 "data/maps/Route116/scripts.pory"
	release
# 653 "data/maps/Route116/scripts.pory"
	end
# 654 "data/maps/Route116/scripts.pory"

# 655 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchJerry::
# 656 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_JERRY_1, Route116_Text_JerryRematchIntro, Route116_Text_JerryRematchDefeat
# 657 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostRematch, MSGBOX_AUTOCLOSE
# 658 "data/maps/Route116/scripts.pory"
	end
# 659 "data/maps/Route116/scripts.pory"

# 660 "data/maps/Route116/scripts.pory"
Route116_EventScript_Clark::
# 661 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_CLARK, Route116_Text_ClarkIntro, Route116_Text_ClarkDefeat
# 662 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ClarkPostBattle, MSGBOX_AUTOCLOSE
# 663 "data/maps/Route116/scripts.pory"
	end
# 664 "data/maps/Route116/scripts.pory"

# 665 "data/maps/Route116/scripts.pory"
Route116_EventScript_Janice::
# 666 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JANICE, Route116_Text_JaniceIntro, Route116_Text_JaniceDefeat
# 667 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
# 668 "data/maps/Route116/scripts.pory"
	end
# 669 "data/maps/Route116/scripts.pory"

# 670 "data/maps/Route116/scripts.pory"
Route116_EventScript_Karen::
# 671 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_KAREN_1, Route116_Text_KarenIntro, Route116_Text_KarenDefeat, Route116_EventScript_TryRegisterKarenAfterBattle
# 672 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 673 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_RematchKaren
# 674 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_KAREN_1
# 675 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 676 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_TryRegisterKaren
# 677 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 678 "data/maps/Route116/scripts.pory"
	release
# 679 "data/maps/Route116/scripts.pory"
	end
# 680 "data/maps/Route116/scripts.pory"

# 681 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKarenAfterBattle::
# 682 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKarenAfterBattle
# 683 "data/maps/Route116/scripts.pory"
	release
# 684 "data/maps/Route116/scripts.pory"
	end
# 685 "data/maps/Route116/scripts.pory"

# 686 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKarenAfterBattle::
# 687 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 688 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 689 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister2, MSGBOX_DEFAULT
# 690 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 691 "data/maps/Route116/scripts.pory"
	release
# 692 "data/maps/Route116/scripts.pory"
	end
# 693 "data/maps/Route116/scripts.pory"

# 694 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKaren::
# 695 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKaren
# 696 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 697 "data/maps/Route116/scripts.pory"
	release
# 698 "data/maps/Route116/scripts.pory"
	end
# 699 "data/maps/Route116/scripts.pory"

# 700 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKaren::
# 701 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister1, MSGBOX_DEFAULT
# 702 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 703 "data/maps/Route116/scripts.pory"
	release
# 704 "data/maps/Route116/scripts.pory"
	end
# 705 "data/maps/Route116/scripts.pory"

# 706 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchKaren::
# 707 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_KAREN_1, Route116_Text_KarenRematchIntro, Route116_Text_KarenRematchDefeat
# 708 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostRematch, MSGBOX_AUTOCLOSE
# 709 "data/maps/Route116/scripts.pory"
	end
# 710 "data/maps/Route116/scripts.pory"

# 711 "data/maps/Route116/scripts.pory"
Route116_EventScript_Sarah::
# 712 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_SARAH, Route116_Text_SarahIntro, Route116_Text_SarahDefeat
# 713 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
# 714 "data/maps/Route116/scripts.pory"
	end
# 715 "data/maps/Route116/scripts.pory"

# 716 "data/maps/Route116/scripts.pory"
Route116_EventScript_Dawson::
# 717 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DAWSON, Route116_Text_DawsonIntro, Route116_Text_DawsonDefeat
# 718 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 719 "data/maps/Route116/scripts.pory"
	end
# 720 "data/maps/Route116/scripts.pory"

# 721 "data/maps/Route116/scripts.pory"
Route116_EventScript_Devan::
# 722 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DEVAN, Route116_Text_DevanIntro, Route116_Text_DevanDefeat
# 723 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DevanPostBattle, MSGBOX_AUTOCLOSE
# 724 "data/maps/Route116/scripts.pory"
	end
# 725 "data/maps/Route116/scripts.pory"

# 726 "data/maps/Route116/scripts.pory"
Route116_EventScript_Johnson::
# 727 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOHNSON, Route116_Text_JohnsonIntro, Route116_Text_JohnsonDefeat
# 728 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
# 729 "data/maps/Route116/scripts.pory"
	end
# 730 "data/maps/Route116/scripts.pory"

# 731 "data/maps/Route116/scripts.pory"
Route116_Text_ScoundrelMadeOffWithPeeko:
# 732 "data/maps/Route116/scripts.pory"
	.string "Ohhh, what am I to do?\p"
# 733 "data/maps/Route116/scripts.pory"
	.string "We were on our walk, PEEKO and I, when\n"
# 734 "data/maps/Route116/scripts.pory"
	.string "we were jumped by an odd thug…\p"
# 735 "data/maps/Route116/scripts.pory"
	.string "The scoundrel made off with my\n"
# 736 "data/maps/Route116/scripts.pory"
	.string "darling PEEKO!\p"
# 737 "data/maps/Route116/scripts.pory"
	.string "Wrrrooooooaaaar! PEEKO!$"
# 738 "data/maps/Route116/scripts.pory"

# 739 "data/maps/Route116/scripts.pory"
Route116_Text_WantToDigTunnel:
# 740 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
# 741 "data/maps/Route116/scripts.pory"
	.string "I want to dig that tunnel!$"
# 742 "data/maps/Route116/scripts.pory"

# 743 "data/maps/Route116/scripts.pory"
Route116_Text_DiggingTunnelWhenGoonOrderedMeOut:
# 744 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\n"
# 745 "data/maps/Route116/scripts.pory"
	.string "What's going on?\p"
# 746 "data/maps/Route116/scripts.pory"
	.string "I was digging the tunnel without any\n"
# 747 "data/maps/Route116/scripts.pory"
	.string "tools when some goon ordered me out!\p"
# 748 "data/maps/Route116/scripts.pory"
	.string "That tunnel's filled with POKéMON\n"
# 749 "data/maps/Route116/scripts.pory"
	.string "that react badly to loud noises.\l"
# 750 "data/maps/Route116/scripts.pory"
	.string "They could cause an uproar.\p"
# 751 "data/maps/Route116/scripts.pory"
	.string "That's why we stopped using heavy\n"
# 752 "data/maps/Route116/scripts.pory"
	.string "equipment for tunneling…\p"
# 753 "data/maps/Route116/scripts.pory"
	.string "I'm worried that the goon will do\n"
# 754 "data/maps/Route116/scripts.pory"
	.string "something stupid and startle the\l"
# 755 "data/maps/Route116/scripts.pory"
	.string "POKéMON into an uproar.$"
# 756 "data/maps/Route116/scripts.pory"

# 757 "data/maps/Route116/scripts.pory"
Route116_Text_GoonHightailedItOutOfTunnel:
# 758 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
# 759 "data/maps/Route116/scripts.pory"
	.string "That goofy goon hightailed it out of\n"
# 760 "data/maps/Route116/scripts.pory"
	.string "the tunnel! I can go back to digging!$"
# 761 "data/maps/Route116/scripts.pory"

# 762 "data/maps/Route116/scripts.pory"
Route116_Text_ThankYouTokenOfAppreciation:
# 763 "data/maps/Route116/scripts.pory"
	.string "Oh! It's you!\p"
# 764 "data/maps/Route116/scripts.pory"
	.string "You're that person who not only helped\n"
# 765 "data/maps/Route116/scripts.pory"
	.string "me in PETALBURG WOODS, but also got\l"
# 766 "data/maps/Route116/scripts.pory"
	.string "back my stolen package and then even\l"
# 767 "data/maps/Route116/scripts.pory"
	.string "graciously delivered it to SLATEPORT!\p"
# 768 "data/maps/Route116/scripts.pory"
	.string "CAPT. STERN informed us that the\n"
# 769 "data/maps/Route116/scripts.pory"
	.string "package arrived, too!\p"
# 770 "data/maps/Route116/scripts.pory"
	.string "I thank you very, very much!\p"
# 771 "data/maps/Route116/scripts.pory"
	.string "Why, if I were a rain cloud, I would\n"
# 772 "data/maps/Route116/scripts.pory"
	.string "shower you with gratitude and hail\l"
# 773 "data/maps/Route116/scripts.pory"
	.string "you as a hero!\p"
# 774 "data/maps/Route116/scripts.pory"
	.string "For you, the most wonderful TRAINER,\n"
# 775 "data/maps/Route116/scripts.pory"
	.string "I bear good news!\p"
# 776 "data/maps/Route116/scripts.pory"
	.string "Recently, our company developed\n"
# 777 "data/maps/Route116/scripts.pory"
	.string "a new kind of POKé BALL.\p"
# 778 "data/maps/Route116/scripts.pory"
	.string "As a token of our appreciation, this\n"
# 779 "data/maps/Route116/scripts.pory"
	.string "is our gift to our wonderful TRAINER!$"
# 780 "data/maps/Route116/scripts.pory"

# 781 "data/maps/Route116/scripts.pory"
Route116_Text_NewBallAvailableAtMart:
# 782 "data/maps/Route116/scripts.pory"
	.string "Our new POKé BALL will be available\n"
# 783 "data/maps/Route116/scripts.pory"
	.string "at the POKéMON MART in RUSTBORO.\p"
# 784 "data/maps/Route116/scripts.pory"
	.string "Please do try it out!\n"
# 785 "data/maps/Route116/scripts.pory"
	.string "Thank you and bye-bye!$"
# 786 "data/maps/Route116/scripts.pory"

# 787 "data/maps/Route116/scripts.pory"
Route116_Text_BagIsJamPacked:
# 788 "data/maps/Route116/scripts.pory"
	.string "Your BAG is jam-packed.\n"
# 789 "data/maps/Route116/scripts.pory"
	.string "I can't give you this REPEAT BALL.$"
# 790 "data/maps/Route116/scripts.pory"

# 791 "data/maps/Route116/scripts.pory"
Route116_Text_TokenOfAppreciation:
# 792 "data/maps/Route116/scripts.pory"
	.string "As a token of our appreciation for\n"
# 793 "data/maps/Route116/scripts.pory"
	.string "your delivering our package, I have\l"
# 794 "data/maps/Route116/scripts.pory"
	.string "a gift of a new kind of POKé BALL\l"
# 795 "data/maps/Route116/scripts.pory"
	.string "for our most wonderful TRAINER!$"
# 796 "data/maps/Route116/scripts.pory"

# 797 "data/maps/Route116/scripts.pory"
Route116_Text_CanYouHelpMeFindGlasses:
# 798 "data/maps/Route116/scripts.pory"
	.string "I dropped my glasses…\n"
# 799 "data/maps/Route116/scripts.pory"
	.string "Can you help me find them?$"
# 800 "data/maps/Route116/scripts.pory"

# 801 "data/maps/Route116/scripts.pory"
Route116_Text_MayISeeThoseGlasses:
# 802 "data/maps/Route116/scripts.pory"
	.string "Those glasses!\n"
# 803 "data/maps/Route116/scripts.pory"
	.string "May I see them for a second?$"
# 804 "data/maps/Route116/scripts.pory"

# 805 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingForMaybeTheyArentHere:
# 806 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 807 "data/maps/Route116/scripts.pory"
	.string "These are BLACKGLASSES.\l"
# 808 "data/maps/Route116/scripts.pory"
	.string "They're not what I'm looking for…\p"
# 809 "data/maps/Route116/scripts.pory"
	.string "Maybe my glasses aren't around\n"
# 810 "data/maps/Route116/scripts.pory"
	.string "here…$"
# 811 "data/maps/Route116/scripts.pory"

# 812 "data/maps/Route116/scripts.pory"
Route116_Text_CantFindGlassesNotHere:
# 813 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 814 "data/maps/Route116/scripts.pory"
	.string "I can't find my glasses anywhere…\l"
# 815 "data/maps/Route116/scripts.pory"
	.string "Maybe they're not around here…$"
# 816 "data/maps/Route116/scripts.pory"

# 817 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingFor:
# 818 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 819 "data/maps/Route116/scripts.pory"
	.string "These are BLACKGLASSES.\l"
# 820 "data/maps/Route116/scripts.pory"
	.string "They're not what I'm looking for…$"
# 821 "data/maps/Route116/scripts.pory"

# 822 "data/maps/Route116/scripts.pory"
Route116_Text_RouteSignRustboro:
# 823 "data/maps/Route116/scripts.pory"
	.string "ROUTE 116\n"
# 824 "data/maps/Route116/scripts.pory"
	.string "{LEFT_ARROW} RUSTBORO CITY$"
# 825 "data/maps/Route116/scripts.pory"

# 826 "data/maps/Route116/scripts.pory"
Route116_Text_RusturfTunnelSign:
# 827 "data/maps/Route116/scripts.pory"
	.string "RUSTURF TUNNEL\n"
# 828 "data/maps/Route116/scripts.pory"
	.string "“Linking RUSTBORO and VERDANTURF\p"
# 829 "data/maps/Route116/scripts.pory"
	.string "“The tunnel project has been\n"
# 830 "data/maps/Route116/scripts.pory"
	.string "canceled.”$"
# 831 "data/maps/Route116/scripts.pory"

# 832 "data/maps/Route116/scripts.pory"
Route116_Text_TunnelersRestHouse:
# 833 "data/maps/Route116/scripts.pory"
	.string "TUNNELER'S REST HOUSE$"
# 834 "data/maps/Route116/scripts.pory"

# 835 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBToStopEvolution:
# 836 "data/maps/Route116/scripts.pory"
	.string "TRAINER TIPS\p"
# 837 "data/maps/Route116/scripts.pory"
	.string "If you want to stop a POKéMON from\n"
# 838 "data/maps/Route116/scripts.pory"
	.string "evolving, press the B Button while it\l"
# 839 "data/maps/Route116/scripts.pory"
	.string "is trying to evolve.\l"
# 840 "data/maps/Route116/scripts.pory"
	.string "The startled POKéMON will stop.\p"
# 841 "data/maps/Route116/scripts.pory"
	.string "This is called an evolution cancel.$"
# 842 "data/maps/Route116/scripts.pory"

# 843 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBagHasPockets:
# 844 "data/maps/Route116/scripts.pory"
	.string "TRAINER TIPS\p"
# 845 "data/maps/Route116/scripts.pory"
	.string "Your BAG has several POCKETS.\p"
# 846 "data/maps/Route116/scripts.pory"
	.string "Items you obtain are automatically\n"
# 847 "data/maps/Route116/scripts.pory"
	.string "placed in the appropriate POCKETS.\p"
# 848 "data/maps/Route116/scripts.pory"
	.string "No TRAINER can afford to be without\n"
# 849 "data/maps/Route116/scripts.pory"
	.string "a BAG of their own.$"
