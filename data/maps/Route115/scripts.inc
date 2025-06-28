Route115_OnResume::
# 2 "data/maps/Route115/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Common_EventScript_RemoveStaticPokemonEncounter
	return


Route115_EventScript_RandomizeEncounters::
# 7 "data/maps/Route115/scripts.pory"
	setflag FLAG_TEMP_5
# 8 "data/maps/Route115/scripts.pory"
	random 10
# 9 "data/maps/Route115/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_lt Route115_EventScript_RandomizeEncounters_2
Route115_EventScript_RandomizeEncounters_1:
# 14 "data/maps/Route115/scripts.pory"
	setflag FLAG_TEMP_6
# 15 "data/maps/Route115/scripts.pory"
	random 10
# 16 "data/maps/Route115/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_lt Route115_EventScript_RandomizeEncounters_5
Route115_EventScript_RandomizeEncounters_4:
# 21 "data/maps/Route115/scripts.pory"
	setflag FLAG_TEMP_7
# 22 "data/maps/Route115/scripts.pory"
	random 10
# 23 "data/maps/Route115/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_lt Route115_EventScript_RandomizeEncounters_8
Route115_EventScript_RandomizeEncounters_7:
# 28 "data/maps/Route115/scripts.pory"
	setflag FLAG_TEMP_8
# 29 "data/maps/Route115/scripts.pory"
	random 10
# 30 "data/maps/Route115/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_lt Route115_EventScript_RandomizeEncounters_10
	return

Route115_EventScript_RandomizeEncounters_2:
# 10 "data/maps/Route115/scripts.pory"
	call Route115_EventScript_RandomizeEncounterVar5
# 11 "data/maps/Route115/scripts.pory"
	clearflag FLAG_TEMP_5
	goto Route115_EventScript_RandomizeEncounters_1

Route115_EventScript_RandomizeEncounters_5:
# 17 "data/maps/Route115/scripts.pory"
	call Route115_EventScript_RandomizeEncounterVar6
# 18 "data/maps/Route115/scripts.pory"
	clearflag FLAG_TEMP_6
	goto Route115_EventScript_RandomizeEncounters_4

Route115_EventScript_RandomizeEncounters_8:
# 24 "data/maps/Route115/scripts.pory"
	call Route115_EventScript_RandomizeEncounterVar7
# 25 "data/maps/Route115/scripts.pory"
	clearflag FLAG_TEMP_7
	goto Route115_EventScript_RandomizeEncounters_7

Route115_EventScript_RandomizeEncounters_10:
# 31 "data/maps/Route115/scripts.pory"
	call Route115_EventScript_RandomizeEncounterVar8
# 32 "data/maps/Route115/scripts.pory"
	clearflag FLAG_TEMP_8
	return


Route115_EventScript_RandomizeEncounterVar5::
# 37 "data/maps/Route115/scripts.pory"
	random 10
# 38 "data/maps/Route115/scripts.pory"
	switch VAR_RESULT
# 39 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_RandomizeEncounterVar5_2
# 40 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_RandomizeEncounterVar5_2
# 41 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_RandomizeEncounterVar5_2
# 44 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_RandomizeEncounterVar5_3
# 45 "data/maps/Route115/scripts.pory"
	case 4, Route115_EventScript_RandomizeEncounterVar5_3
# 48 "data/maps/Route115/scripts.pory"
	case 5, Route115_EventScript_RandomizeEncounterVar5_4
# 49 "data/maps/Route115/scripts.pory"
	case 6, Route115_EventScript_RandomizeEncounterVar5_4
# 52 "data/maps/Route115/scripts.pory"
	case 7, Route115_EventScript_RandomizeEncounterVar5_5
# 55 "data/maps/Route115/scripts.pory"
	case 8, Route115_EventScript_RandomizeEncounterVar5_6
# 58 "data/maps/Route115/scripts.pory"
	case 9, Route115_EventScript_RandomizeEncounterVar5_7
	return

Route115_EventScript_RandomizeEncounterVar5_2:
# 42 "data/maps/Route115/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( WINGULL )
# 43 "data/maps/Route115/scripts.pory"
	setvar VAR_TEMP_5, 0
	return

Route115_EventScript_RandomizeEncounterVar5_3:
# 46 "data/maps/Route115/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( LITLEO )
# 47 "data/maps/Route115/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

Route115_EventScript_RandomizeEncounterVar5_4:
# 50 "data/maps/Route115/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( FLETCHLING )
# 51 "data/maps/Route115/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

Route115_EventScript_RandomizeEncounterVar5_5:
# 53 "data/maps/Route115/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( SNUBBULL )
# 54 "data/maps/Route115/scripts.pory"
	setvar VAR_TEMP_5, 3
	return

Route115_EventScript_RandomizeEncounterVar5_6:
# 56 "data/maps/Route115/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( MANKEY )
# 57 "data/maps/Route115/scripts.pory"
	setvar VAR_TEMP_5, 4
	return

Route115_EventScript_RandomizeEncounterVar5_7:
# 59 "data/maps/Route115/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( AXEW )
# 60 "data/maps/Route115/scripts.pory"
	setvar VAR_TEMP_5, 5
	return


Route115_EventScript_EncounterVar5::
# 65 "data/maps/Route115/scripts.pory"
	lock
# 66 "data/maps/Route115/scripts.pory"
	switch VAR_TEMP_5
# 67 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_EncounterVar5_3
# 78 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_EncounterVar5_4
# 89 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_EncounterVar5_5
# 100 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_EncounterVar5_6
# 111 "data/maps/Route115/scripts.pory"
	case 4, Route115_EventScript_EncounterVar5_7
# 122 "data/maps/Route115/scripts.pory"
	case 5, Route115_EventScript_EncounterVar5_8
Route115_EventScript_EncounterVar5_1:
# 134 "data/maps/Route115/scripts.pory"
	release
	return

Route115_EventScript_EncounterVar5_3:
# 68 "data/maps/Route115/scripts.pory"
	random 4
# 69 "data/maps/Route115/scripts.pory"
	switch VAR_RESULT
# 70 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_EncounterVar5_10
# 72 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_EncounterVar5_11
# 73 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_EncounterVar5_11
# 75 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_EncounterVar5_12
	goto Route115_EventScript_EncounterVar5_1

Route115_EventScript_EncounterVar5_4:
# 79 "data/maps/Route115/scripts.pory"
	random 4
# 80 "data/maps/Route115/scripts.pory"
	switch VAR_RESULT
# 81 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_EncounterVar5_14
# 83 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_EncounterVar5_15
# 84 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_EncounterVar5_15
# 86 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_EncounterVar5_16
	goto Route115_EventScript_EncounterVar5_1

Route115_EventScript_EncounterVar5_5:
# 90 "data/maps/Route115/scripts.pory"
	random 4
# 91 "data/maps/Route115/scripts.pory"
	switch VAR_RESULT
# 92 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_EncounterVar5_18
# 94 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_EncounterVar5_19
# 95 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_EncounterVar5_19
# 97 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_EncounterVar5_20
	goto Route115_EventScript_EncounterVar5_1

Route115_EventScript_EncounterVar5_6:
# 101 "data/maps/Route115/scripts.pory"
	random 4
# 102 "data/maps/Route115/scripts.pory"
	switch VAR_RESULT
# 103 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_EncounterVar5_22
# 105 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_EncounterVar5_23
# 106 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_EncounterVar5_23
# 108 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_EncounterVar5_24
	goto Route115_EventScript_EncounterVar5_1

Route115_EventScript_EncounterVar5_7:
# 112 "data/maps/Route115/scripts.pory"
	random 4
# 113 "data/maps/Route115/scripts.pory"
	switch VAR_RESULT
# 114 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_EncounterVar5_26
# 116 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_EncounterVar5_27
# 117 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_EncounterVar5_27
# 119 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_EncounterVar5_28
	goto Route115_EventScript_EncounterVar5_1

Route115_EventScript_EncounterVar5_8:
# 123 "data/maps/Route115/scripts.pory"
	random 4
# 124 "data/maps/Route115/scripts.pory"
	switch VAR_RESULT
# 125 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_EncounterVar5_30
# 127 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_EncounterVar5_31
# 128 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_EncounterVar5_31
# 130 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_EncounterVar5_32
	goto Route115_EventScript_EncounterVar5_1

Route115_EventScript_EncounterVar5_10:
# 71 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_WINGULL, 6, FLAG_TEMP_5
	goto Route115_EventScript_EncounterVar5_1

Route115_EventScript_EncounterVar5_11:
# 74 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_WINGULL, 7, FLAG_TEMP_5
	goto Route115_EventScript_EncounterVar5_1

Route115_EventScript_EncounterVar5_12:
# 76 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_WINGULL, 8, FLAG_TEMP_5
	goto Route115_EventScript_EncounterVar5_1

Route115_EventScript_EncounterVar5_14:
# 82 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_LITLEO, 6, FLAG_TEMP_5
	goto Route115_EventScript_EncounterVar5_1

Route115_EventScript_EncounterVar5_15:
# 85 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_LITLEO, 7, FLAG_TEMP_5
	goto Route115_EventScript_EncounterVar5_1

Route115_EventScript_EncounterVar5_16:
# 87 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_LITLEO, 8, FLAG_TEMP_5
	goto Route115_EventScript_EncounterVar5_1

Route115_EventScript_EncounterVar5_18:
# 93 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_FLETCHLING, 6, FLAG_TEMP_5
	goto Route115_EventScript_EncounterVar5_1

Route115_EventScript_EncounterVar5_19:
# 96 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_FLETCHLING, 7, FLAG_TEMP_5
	goto Route115_EventScript_EncounterVar5_1

Route115_EventScript_EncounterVar5_20:
# 98 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_FLETCHLING, 8, FLAG_TEMP_5
	goto Route115_EventScript_EncounterVar5_1

Route115_EventScript_EncounterVar5_22:
# 104 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_SNUBBULL, 6, FLAG_TEMP_5
	goto Route115_EventScript_EncounterVar5_1

Route115_EventScript_EncounterVar5_23:
# 107 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_SNUBBULL, 7, FLAG_TEMP_5
	goto Route115_EventScript_EncounterVar5_1

Route115_EventScript_EncounterVar5_24:
# 109 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_SNUBBULL, 8, FLAG_TEMP_5
	goto Route115_EventScript_EncounterVar5_1

Route115_EventScript_EncounterVar5_26:
# 115 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_MANKEY, 6, FLAG_TEMP_5
	goto Route115_EventScript_EncounterVar5_1

Route115_EventScript_EncounterVar5_27:
# 118 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_MANKEY, 7, FLAG_TEMP_5
	goto Route115_EventScript_EncounterVar5_1

Route115_EventScript_EncounterVar5_28:
# 120 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_MANKEY, 8, FLAG_TEMP_5
	goto Route115_EventScript_EncounterVar5_1

Route115_EventScript_EncounterVar5_30:
# 126 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_AXEW, 6, FLAG_TEMP_5
	goto Route115_EventScript_EncounterVar5_1

Route115_EventScript_EncounterVar5_31:
# 129 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_AXEW, 7, FLAG_TEMP_5
	goto Route115_EventScript_EncounterVar5_1

Route115_EventScript_EncounterVar5_32:
# 131 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_AXEW, 8, FLAG_TEMP_5
	goto Route115_EventScript_EncounterVar5_1


Route115_EventScript_RandomizeEncounterVar6::
# 138 "data/maps/Route115/scripts.pory"
	random 7
# 139 "data/maps/Route115/scripts.pory"
	switch VAR_RESULT
# 140 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_RandomizeEncounterVar6_2
# 141 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_RandomizeEncounterVar6_2
# 144 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_RandomizeEncounterVar6_3
# 145 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_RandomizeEncounterVar6_3
# 148 "data/maps/Route115/scripts.pory"
	case 4, Route115_EventScript_RandomizeEncounterVar6_4
# 151 "data/maps/Route115/scripts.pory"
	case 5, Route115_EventScript_RandomizeEncounterVar6_5
# 154 "data/maps/Route115/scripts.pory"
	case 6, Route115_EventScript_RandomizeEncounterVar6_6
	return

Route115_EventScript_RandomizeEncounterVar6_2:
# 142 "data/maps/Route115/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( LITLEO )
# 143 "data/maps/Route115/scripts.pory"
	setvar VAR_TEMP_6, 0
	return

Route115_EventScript_RandomizeEncounterVar6_3:
# 146 "data/maps/Route115/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( FLETCHLING )
# 147 "data/maps/Route115/scripts.pory"
	setvar VAR_TEMP_6, 1
	return

Route115_EventScript_RandomizeEncounterVar6_4:
# 149 "data/maps/Route115/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( SNUBBULL )
# 150 "data/maps/Route115/scripts.pory"
	setvar VAR_TEMP_6, 2
	return

Route115_EventScript_RandomizeEncounterVar6_5:
# 152 "data/maps/Route115/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( MANKEY )
# 153 "data/maps/Route115/scripts.pory"
	setvar VAR_TEMP_6, 3
	return

Route115_EventScript_RandomizeEncounterVar6_6:
# 155 "data/maps/Route115/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( AXEW )
# 156 "data/maps/Route115/scripts.pory"
	setvar VAR_TEMP_6, 4
	return


Route115_EventScript_EncounterVar6::
# 161 "data/maps/Route115/scripts.pory"
	lock
# 162 "data/maps/Route115/scripts.pory"
	switch VAR_TEMP_6
# 163 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_EncounterVar6_3
# 174 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_EncounterVar6_4
# 185 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_EncounterVar6_5
# 196 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_EncounterVar6_6
# 207 "data/maps/Route115/scripts.pory"
	case 4, Route115_EventScript_EncounterVar6_7
Route115_EventScript_EncounterVar6_1:
# 219 "data/maps/Route115/scripts.pory"
	release
	return

Route115_EventScript_EncounterVar6_3:
# 164 "data/maps/Route115/scripts.pory"
	random 4
# 165 "data/maps/Route115/scripts.pory"
	switch VAR_RESULT
# 166 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_EncounterVar6_9
# 168 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_EncounterVar6_10
# 169 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_EncounterVar6_10
# 171 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_EncounterVar6_11
	goto Route115_EventScript_EncounterVar6_1

Route115_EventScript_EncounterVar6_4:
# 175 "data/maps/Route115/scripts.pory"
	random 4
# 176 "data/maps/Route115/scripts.pory"
	switch VAR_RESULT
# 177 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_EncounterVar6_13
# 179 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_EncounterVar6_14
# 180 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_EncounterVar6_14
# 182 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_EncounterVar6_15
	goto Route115_EventScript_EncounterVar6_1

Route115_EventScript_EncounterVar6_5:
# 186 "data/maps/Route115/scripts.pory"
	random 4
# 187 "data/maps/Route115/scripts.pory"
	switch VAR_RESULT
# 188 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_EncounterVar6_17
# 190 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_EncounterVar6_18
# 191 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_EncounterVar6_18
# 193 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_EncounterVar6_19
	goto Route115_EventScript_EncounterVar6_1

Route115_EventScript_EncounterVar6_6:
# 197 "data/maps/Route115/scripts.pory"
	random 4
# 198 "data/maps/Route115/scripts.pory"
	switch VAR_RESULT
# 199 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_EncounterVar6_21
# 201 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_EncounterVar6_22
# 202 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_EncounterVar6_22
# 204 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_EncounterVar6_23
	goto Route115_EventScript_EncounterVar6_1

Route115_EventScript_EncounterVar6_7:
# 208 "data/maps/Route115/scripts.pory"
	random 4
# 209 "data/maps/Route115/scripts.pory"
	switch VAR_RESULT
# 210 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_EncounterVar6_25
# 212 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_EncounterVar6_26
# 213 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_EncounterVar6_26
# 215 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_EncounterVar6_27
	goto Route115_EventScript_EncounterVar6_1

Route115_EventScript_EncounterVar6_9:
# 167 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_LITLEO, 6, FLAG_TEMP_6
	goto Route115_EventScript_EncounterVar6_1

Route115_EventScript_EncounterVar6_10:
# 170 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_LITLEO, 7, FLAG_TEMP_6
	goto Route115_EventScript_EncounterVar6_1

Route115_EventScript_EncounterVar6_11:
# 172 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_LITLEO, 8, FLAG_TEMP_6
	goto Route115_EventScript_EncounterVar6_1

Route115_EventScript_EncounterVar6_13:
# 178 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_FLETCHLING, 6, FLAG_TEMP_6
	goto Route115_EventScript_EncounterVar6_1

Route115_EventScript_EncounterVar6_14:
# 181 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_FLETCHLING, 7, FLAG_TEMP_6
	goto Route115_EventScript_EncounterVar6_1

Route115_EventScript_EncounterVar6_15:
# 183 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_FLETCHLING, 8, FLAG_TEMP_6
	goto Route115_EventScript_EncounterVar6_1

Route115_EventScript_EncounterVar6_17:
# 189 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_SNUBBULL, 6, FLAG_TEMP_6
	goto Route115_EventScript_EncounterVar6_1

Route115_EventScript_EncounterVar6_18:
# 192 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_SNUBBULL, 7, FLAG_TEMP_6
	goto Route115_EventScript_EncounterVar6_1

Route115_EventScript_EncounterVar6_19:
# 194 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_SNUBBULL, 8, FLAG_TEMP_6
	goto Route115_EventScript_EncounterVar6_1

Route115_EventScript_EncounterVar6_21:
# 200 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_MANKEY, 6, FLAG_TEMP_6
	goto Route115_EventScript_EncounterVar6_1

Route115_EventScript_EncounterVar6_22:
# 203 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_MANKEY, 7, FLAG_TEMP_6
	goto Route115_EventScript_EncounterVar6_1

Route115_EventScript_EncounterVar6_23:
# 205 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_MANKEY, 8, FLAG_TEMP_6
	goto Route115_EventScript_EncounterVar6_1

Route115_EventScript_EncounterVar6_25:
# 211 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_AXEW, 6, FLAG_TEMP_6
	goto Route115_EventScript_EncounterVar6_1

Route115_EventScript_EncounterVar6_26:
# 214 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_AXEW, 7, FLAG_TEMP_6
	goto Route115_EventScript_EncounterVar6_1

Route115_EventScript_EncounterVar6_27:
# 216 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_AXEW, 8, FLAG_TEMP_6
	goto Route115_EventScript_EncounterVar6_1


Route115_EventScript_RandomizeEncounterVar7::
# 223 "data/maps/Route115/scripts.pory"
	random 10
# 224 "data/maps/Route115/scripts.pory"
	switch VAR_RESULT
# 225 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_RandomizeEncounterVar7_2
# 226 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_RandomizeEncounterVar7_2
# 227 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_RandomizeEncounterVar7_2
# 230 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_RandomizeEncounterVar7_3
# 231 "data/maps/Route115/scripts.pory"
	case 4, Route115_EventScript_RandomizeEncounterVar7_3
# 234 "data/maps/Route115/scripts.pory"
	case 5, Route115_EventScript_RandomizeEncounterVar7_4
# 235 "data/maps/Route115/scripts.pory"
	case 6, Route115_EventScript_RandomizeEncounterVar7_4
# 238 "data/maps/Route115/scripts.pory"
	case 7, Route115_EventScript_RandomizeEncounterVar7_5
# 241 "data/maps/Route115/scripts.pory"
	case 8, Route115_EventScript_RandomizeEncounterVar7_6
# 244 "data/maps/Route115/scripts.pory"
	case 9, Route115_EventScript_RandomizeEncounterVar7_7
	return

Route115_EventScript_RandomizeEncounterVar7_2:
# 228 "data/maps/Route115/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( WINGULL )
# 229 "data/maps/Route115/scripts.pory"
	setvar VAR_TEMP_7, 0
	return

Route115_EventScript_RandomizeEncounterVar7_3:
# 232 "data/maps/Route115/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( LITLEO )
# 233 "data/maps/Route115/scripts.pory"
	setvar VAR_TEMP_7, 1
	return

Route115_EventScript_RandomizeEncounterVar7_4:
# 236 "data/maps/Route115/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( FLETCHLING )
# 237 "data/maps/Route115/scripts.pory"
	setvar VAR_TEMP_7, 2
	return

Route115_EventScript_RandomizeEncounterVar7_5:
# 239 "data/maps/Route115/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( SNUBBULL )
# 240 "data/maps/Route115/scripts.pory"
	setvar VAR_TEMP_7, 3
	return

Route115_EventScript_RandomizeEncounterVar7_6:
# 242 "data/maps/Route115/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( MANKEY )
# 243 "data/maps/Route115/scripts.pory"
	setvar VAR_TEMP_7, 4
	return

Route115_EventScript_RandomizeEncounterVar7_7:
# 245 "data/maps/Route115/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( AXEW )
# 246 "data/maps/Route115/scripts.pory"
	setvar VAR_TEMP_7, 5
	return


Route115_EventScript_EncounterVar7::
# 251 "data/maps/Route115/scripts.pory"
	lock
# 252 "data/maps/Route115/scripts.pory"
	switch VAR_TEMP_7
# 253 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_EncounterVar7_3
# 264 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_EncounterVar7_4
# 275 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_EncounterVar7_5
# 286 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_EncounterVar7_6
# 297 "data/maps/Route115/scripts.pory"
	case 4, Route115_EventScript_EncounterVar7_7
# 308 "data/maps/Route115/scripts.pory"
	case 5, Route115_EventScript_EncounterVar7_8
Route115_EventScript_EncounterVar7_1:
# 320 "data/maps/Route115/scripts.pory"
	release
	return

Route115_EventScript_EncounterVar7_3:
# 254 "data/maps/Route115/scripts.pory"
	random 4
# 255 "data/maps/Route115/scripts.pory"
	switch VAR_RESULT
# 256 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_EncounterVar7_10
# 258 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_EncounterVar7_11
# 259 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_EncounterVar7_11
# 261 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_EncounterVar7_12
	goto Route115_EventScript_EncounterVar7_1

Route115_EventScript_EncounterVar7_4:
# 265 "data/maps/Route115/scripts.pory"
	random 4
# 266 "data/maps/Route115/scripts.pory"
	switch VAR_RESULT
# 267 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_EncounterVar7_14
# 269 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_EncounterVar7_15
# 270 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_EncounterVar7_15
# 272 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_EncounterVar7_16
	goto Route115_EventScript_EncounterVar7_1

Route115_EventScript_EncounterVar7_5:
# 276 "data/maps/Route115/scripts.pory"
	random 4
# 277 "data/maps/Route115/scripts.pory"
	switch VAR_RESULT
# 278 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_EncounterVar7_18
# 280 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_EncounterVar7_19
# 281 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_EncounterVar7_19
# 283 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_EncounterVar7_20
	goto Route115_EventScript_EncounterVar7_1

Route115_EventScript_EncounterVar7_6:
# 287 "data/maps/Route115/scripts.pory"
	random 4
# 288 "data/maps/Route115/scripts.pory"
	switch VAR_RESULT
# 289 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_EncounterVar7_22
# 291 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_EncounterVar7_23
# 292 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_EncounterVar7_23
# 294 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_EncounterVar7_24
	goto Route115_EventScript_EncounterVar7_1

Route115_EventScript_EncounterVar7_7:
# 298 "data/maps/Route115/scripts.pory"
	random 4
# 299 "data/maps/Route115/scripts.pory"
	switch VAR_RESULT
# 300 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_EncounterVar7_26
# 302 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_EncounterVar7_27
# 303 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_EncounterVar7_27
# 305 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_EncounterVar7_28
	goto Route115_EventScript_EncounterVar7_1

Route115_EventScript_EncounterVar7_8:
# 309 "data/maps/Route115/scripts.pory"
	random 4
# 310 "data/maps/Route115/scripts.pory"
	switch VAR_RESULT
# 311 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_EncounterVar7_30
# 313 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_EncounterVar7_31
# 314 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_EncounterVar7_31
# 316 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_EncounterVar7_32
	goto Route115_EventScript_EncounterVar7_1

Route115_EventScript_EncounterVar7_10:
# 257 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_WINGULL, 6, FLAG_TEMP_7
	goto Route115_EventScript_EncounterVar7_1

Route115_EventScript_EncounterVar7_11:
# 260 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_WINGULL, 7, FLAG_TEMP_7
	goto Route115_EventScript_EncounterVar7_1

Route115_EventScript_EncounterVar7_12:
# 262 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_WINGULL, 8, FLAG_TEMP_7
	goto Route115_EventScript_EncounterVar7_1

Route115_EventScript_EncounterVar7_14:
# 268 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_LITLEO, 6, FLAG_TEMP_7
	goto Route115_EventScript_EncounterVar7_1

Route115_EventScript_EncounterVar7_15:
# 271 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_LITLEO, 7, FLAG_TEMP_7
	goto Route115_EventScript_EncounterVar7_1

Route115_EventScript_EncounterVar7_16:
# 273 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_LITLEO, 8, FLAG_TEMP_7
	goto Route115_EventScript_EncounterVar7_1

Route115_EventScript_EncounterVar7_18:
# 279 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_FLETCHLING, 6, FLAG_TEMP_7
	goto Route115_EventScript_EncounterVar7_1

Route115_EventScript_EncounterVar7_19:
# 282 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_FLETCHLING, 7, FLAG_TEMP_7
	goto Route115_EventScript_EncounterVar7_1

Route115_EventScript_EncounterVar7_20:
# 284 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_FLETCHLING, 8, FLAG_TEMP_7
	goto Route115_EventScript_EncounterVar7_1

Route115_EventScript_EncounterVar7_22:
# 290 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_SNUBBULL, 6, FLAG_TEMP_7
	goto Route115_EventScript_EncounterVar7_1

Route115_EventScript_EncounterVar7_23:
# 293 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_SNUBBULL, 7, FLAG_TEMP_7
	goto Route115_EventScript_EncounterVar7_1

Route115_EventScript_EncounterVar7_24:
# 295 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_SNUBBULL, 8, FLAG_TEMP_7
	goto Route115_EventScript_EncounterVar7_1

Route115_EventScript_EncounterVar7_26:
# 301 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_MANKEY, 6, FLAG_TEMP_7
	goto Route115_EventScript_EncounterVar7_1

Route115_EventScript_EncounterVar7_27:
# 304 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_MANKEY, 7, FLAG_TEMP_7
	goto Route115_EventScript_EncounterVar7_1

Route115_EventScript_EncounterVar7_28:
# 306 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_MANKEY, 8, FLAG_TEMP_7
	goto Route115_EventScript_EncounterVar7_1

Route115_EventScript_EncounterVar7_30:
# 312 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_AXEW, 6, FLAG_TEMP_7
	goto Route115_EventScript_EncounterVar7_1

Route115_EventScript_EncounterVar7_31:
# 315 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_AXEW, 7, FLAG_TEMP_7
	goto Route115_EventScript_EncounterVar7_1

Route115_EventScript_EncounterVar7_32:
# 317 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_AXEW, 8, FLAG_TEMP_7
	goto Route115_EventScript_EncounterVar7_1


Route115_EventScript_RandomizeEncounterVar8::
# 324 "data/maps/Route115/scripts.pory"
	random 6
# 325 "data/maps/Route115/scripts.pory"
	switch VAR_RESULT
# 326 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_RandomizeEncounterVar8_2
# 327 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_RandomizeEncounterVar8_2
# 328 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_RandomizeEncounterVar8_2
# 331 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_RandomizeEncounterVar8_3
# 332 "data/maps/Route115/scripts.pory"
	case 4, Route115_EventScript_RandomizeEncounterVar8_3
# 335 "data/maps/Route115/scripts.pory"
	case 5, Route115_EventScript_RandomizeEncounterVar8_4
	return

Route115_EventScript_RandomizeEncounterVar8_2:
# 329 "data/maps/Route115/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( WINGULL )
# 330 "data/maps/Route115/scripts.pory"
	setvar VAR_TEMP_8, 0
	return

Route115_EventScript_RandomizeEncounterVar8_3:
# 333 "data/maps/Route115/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( FLETCHLING )
# 334 "data/maps/Route115/scripts.pory"
	setvar VAR_TEMP_8, 1
	return

Route115_EventScript_RandomizeEncounterVar8_4:
# 336 "data/maps/Route115/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( MANKEY )
# 337 "data/maps/Route115/scripts.pory"
	setvar VAR_TEMP_8, 2
	return


Route115_EventScript_EncounterVar8::
# 342 "data/maps/Route115/scripts.pory"
	lock
# 343 "data/maps/Route115/scripts.pory"
	switch VAR_TEMP_8
# 344 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_EncounterVar8_3
# 355 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_EncounterVar8_4
# 366 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_EncounterVar8_5
Route115_EventScript_EncounterVar8_1:
# 378 "data/maps/Route115/scripts.pory"
	release
	return

Route115_EventScript_EncounterVar8_3:
# 345 "data/maps/Route115/scripts.pory"
	random 4
# 346 "data/maps/Route115/scripts.pory"
	switch VAR_RESULT
# 347 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_EncounterVar8_7
# 349 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_EncounterVar8_8
# 350 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_EncounterVar8_8
# 352 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_EncounterVar8_9
	goto Route115_EventScript_EncounterVar8_1

Route115_EventScript_EncounterVar8_4:
# 356 "data/maps/Route115/scripts.pory"
	random 4
# 357 "data/maps/Route115/scripts.pory"
	switch VAR_RESULT
# 358 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_EncounterVar8_11
# 360 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_EncounterVar8_12
# 361 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_EncounterVar8_12
# 363 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_EncounterVar8_13
	goto Route115_EventScript_EncounterVar8_1

Route115_EventScript_EncounterVar8_5:
# 367 "data/maps/Route115/scripts.pory"
	random 4
# 368 "data/maps/Route115/scripts.pory"
	switch VAR_RESULT
# 369 "data/maps/Route115/scripts.pory"
	case 0, Route115_EventScript_EncounterVar8_15
# 371 "data/maps/Route115/scripts.pory"
	case 1, Route115_EventScript_EncounterVar8_16
# 372 "data/maps/Route115/scripts.pory"
	case 2, Route115_EventScript_EncounterVar8_16
# 374 "data/maps/Route115/scripts.pory"
	case 3, Route115_EventScript_EncounterVar8_17
	goto Route115_EventScript_EncounterVar8_1

Route115_EventScript_EncounterVar8_7:
# 348 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_WINGULL, 6, FLAG_TEMP_8
	goto Route115_EventScript_EncounterVar8_1

Route115_EventScript_EncounterVar8_8:
# 351 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_WINGULL, 7, FLAG_TEMP_8
	goto Route115_EventScript_EncounterVar8_1

Route115_EventScript_EncounterVar8_9:
# 353 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_WINGULL, 8, FLAG_TEMP_8
	goto Route115_EventScript_EncounterVar8_1

Route115_EventScript_EncounterVar8_11:
# 359 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_FLETCHLING, 6, FLAG_TEMP_8
	goto Route115_EventScript_EncounterVar8_1

Route115_EventScript_EncounterVar8_12:
# 362 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_FLETCHLING, 7, FLAG_TEMP_8
	goto Route115_EventScript_EncounterVar8_1

Route115_EventScript_EncounterVar8_13:
# 364 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_FLETCHLING, 8, FLAG_TEMP_8
	goto Route115_EventScript_EncounterVar8_1

Route115_EventScript_EncounterVar8_15:
# 370 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_MANKEY, 6, FLAG_TEMP_8
	goto Route115_EventScript_EncounterVar8_1

Route115_EventScript_EncounterVar8_16:
# 373 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_MANKEY, 7, FLAG_TEMP_8
	goto Route115_EventScript_EncounterVar8_1

Route115_EventScript_EncounterVar8_17:
# 375 "data/maps/Route115/scripts.pory"
	dowildencounter SPECIES_MANKEY, 8, FLAG_TEMP_8
	goto Route115_EventScript_EncounterVar8_1


# 381 "data/maps/Route115/scripts.pory"

# 382 "data/maps/Route115/scripts.pory"
Route115_MapScripts::
# 383 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route115_OnLoad
# 384 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route115_OnTransition
# 385 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route115_OnFrame
# 386 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route115_OnResume
# 387 "data/maps/Route115/scripts.pory"
	.byte 0
# 388 "data/maps/Route115/scripts.pory"

# 389 "data/maps/Route115/scripts.pory"
Route115_OnLoad:
# 390 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_WEST, AbnormalWeather_EventScript_PlaceTilesRoute115West
# 391 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_EAST, AbnormalWeather_EventScript_PlaceTilesRoute115East
# 392 "data/maps/Route115/scripts.pory"
	end
# 393 "data/maps/Route115/scripts.pory"

# 394 "data/maps/Route115/scripts.pory"
Route115_OnTransition:
# 395 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 396 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_WEST, AbnormalWeather_StartGroudonWeather
# 397 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_EAST, AbnormalWeather_StartGroudonWeather
# 398 "data/maps/Route115/scripts.pory"
	call Route115_EventScript_RandomizeEncounters
# 399 "data/maps/Route115/scripts.pory"
	end
# 400 "data/maps/Route115/scripts.pory"

# 401 "data/maps/Route115/scripts.pory"
Route115_OnFrame:
# 402 "data/maps/Route115/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 403 "data/maps/Route115/scripts.pory"
	.2byte 0
# 404 "data/maps/Route115/scripts.pory"

# 405 "data/maps/Route115/scripts.pory"
Route115_EventScript_Woman::
# 406 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NeverKnowWhenCavePokemonWillAppear, MSGBOX_NPC
# 407 "data/maps/Route115/scripts.pory"
	end
# 408 "data/maps/Route115/scripts.pory"

# 409 "data/maps/Route115/scripts.pory"
Route115_EventScript_RouteSignRustboro::
# 410 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_RouteSignRustboro, MSGBOX_SIGN
# 411 "data/maps/Route115/scripts.pory"
	end
# 412 "data/maps/Route115/scripts.pory"

# 413 "data/maps/Route115/scripts.pory"
Route115_EventScript_MeteorFallsSign::
# 414 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_MeteorFallsSign, MSGBOX_SIGN
# 415 "data/maps/Route115/scripts.pory"
	end
# 416 "data/maps/Route115/scripts.pory"

# 417 "data/maps/Route115/scripts.pory"
Route115_EventScript_Timothy::
# 418 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_TIMOTHY_1, Route115_Text_TimothyIntro, Route115_Text_TimothyDefeat, Route115_EventScript_RegisterTimothy
# 419 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 420 "data/maps/Route115/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route115_EventScript_RematchTimothy
# 421 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyPostBattle, MSGBOX_DEFAULT
# 422 "data/maps/Route115/scripts.pory"
	release
# 423 "data/maps/Route115/scripts.pory"
	end
# 424 "data/maps/Route115/scripts.pory"

# 425 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterTimothy::
# 426 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 427 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 428 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyRegister, MSGBOX_DEFAULT
# 429 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_TIMOTHY_1
# 430 "data/maps/Route115/scripts.pory"
	release
# 431 "data/maps/Route115/scripts.pory"
	end
# 432 "data/maps/Route115/scripts.pory"

# 433 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchTimothy::
# 434 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_TIMOTHY_1, Route115_Text_TimothyRematchIntro, Route115_Text_TimothyRematchDefeat
# 435 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyPostRematch, MSGBOX_AUTOCLOSE
# 436 "data/maps/Route115/scripts.pory"
	end
# 437 "data/maps/Route115/scripts.pory"

# 438 "data/maps/Route115/scripts.pory"
Route115_EventScript_Koichi::
# 439 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_KOICHI, Route115_Text_KoichiIntro, Route115_Text_KoichiDefeat
# 440 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KoichiPostBattle, MSGBOX_AUTOCLOSE
# 441 "data/maps/Route115/scripts.pory"
	end
# 442 "data/maps/Route115/scripts.pory"

# 443 "data/maps/Route115/scripts.pory"
Route115_EventScript_Nob::
# 444 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_NOB_1, Route115_Text_NobIntro, Route115_Text_NobDefeat, Route115_EventScript_RegisterNob
# 445 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 446 "data/maps/Route115/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route115_EventScript_RematchNob
# 447 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobPostBattle, MSGBOX_DEFAULT
# 448 "data/maps/Route115/scripts.pory"
	release
# 449 "data/maps/Route115/scripts.pory"
	end
# 450 "data/maps/Route115/scripts.pory"

# 451 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterNob::
# 452 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 453 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 454 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobRegister, MSGBOX_DEFAULT
# 455 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_NOB_1
# 456 "data/maps/Route115/scripts.pory"
	release
# 457 "data/maps/Route115/scripts.pory"
	end
# 458 "data/maps/Route115/scripts.pory"

# 459 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchNob::
# 460 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_NOB_1, Route115_Text_NobRematchIntro, Route115_Text_NobRematchDefeat
# 461 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobPostRematch, MSGBOX_AUTOCLOSE
# 462 "data/maps/Route115/scripts.pory"
	end
# 463 "data/maps/Route115/scripts.pory"

# 464 "data/maps/Route115/scripts.pory"
Route115_EventScript_Cyndy::
# 465 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_CYNDY_1, Route115_Text_CyndyIntro, Route115_Text_CyndyDefeat, Route115_EventScript_RegisterCyndy
# 466 "data/maps/Route115/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 467 "data/maps/Route115/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route115_EventScript_RematchCyndy
# 468 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostBattle, MSGBOX_DEFAULT
# 469 "data/maps/Route115/scripts.pory"
	release
# 470 "data/maps/Route115/scripts.pory"
	end
# 471 "data/maps/Route115/scripts.pory"

# 472 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterCyndy::
# 473 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 474 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 475 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyRegister, MSGBOX_DEFAULT
# 476 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_CYNDY_1
# 477 "data/maps/Route115/scripts.pory"
	release
# 478 "data/maps/Route115/scripts.pory"
	end
# 479 "data/maps/Route115/scripts.pory"

# 480 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchCyndy::
# 481 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_CYNDY_1, Route115_Text_CyndyRematchIntro, Route115_Text_CyndyRematchDefeat
# 482 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostRematch, MSGBOX_AUTOCLOSE
# 483 "data/maps/Route115/scripts.pory"
	end
# 484 "data/maps/Route115/scripts.pory"

# 485 "data/maps/Route115/scripts.pory"
Route115_EventScript_Hector::
# 486 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_HECTOR, Route115_Text_HectorIntro, Route115_Text_HectorDefeat
# 487 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HectorPostBattle, MSGBOX_AUTOCLOSE
# 488 "data/maps/Route115/scripts.pory"
	end
# 489 "data/maps/Route115/scripts.pory"

# 490 "data/maps/Route115/scripts.pory"
Route115_EventScript_Kyra::
# 491 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_KYRA, Route115_Text_KyraIntro, Route115_Text_KyraDefeat
# 492 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KyraPostBattle, MSGBOX_AUTOCLOSE
# 493 "data/maps/Route115/scripts.pory"
	end
# 494 "data/maps/Route115/scripts.pory"

# 495 "data/maps/Route115/scripts.pory"
Route115_EventScript_Jaiden::
# 496 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_JAIDEN, Route115_Text_JaidenIntro, Route115_Text_JaidenDefeat
# 497 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_JaidenPostBattle, MSGBOX_AUTOCLOSE
# 498 "data/maps/Route115/scripts.pory"
	end
# 499 "data/maps/Route115/scripts.pory"

# 500 "data/maps/Route115/scripts.pory"
Route115_EventScript_Alix::
# 501 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_ALIX, Route115_Text_AlixIntro, Route115_Text_AlixDefeat
# 502 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_AlixPostBattle, MSGBOX_AUTOCLOSE
# 503 "data/maps/Route115/scripts.pory"
	end
# 504 "data/maps/Route115/scripts.pory"

# 505 "data/maps/Route115/scripts.pory"
Route115_EventScript_Helene::
# 506 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_HELENE, Route115_Text_HeleneIntro, Route115_Text_HeleneDefeat
# 507 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HelenePostBattle, MSGBOX_AUTOCLOSE
# 508 "data/maps/Route115/scripts.pory"
	end
# 509 "data/maps/Route115/scripts.pory"

# 510 "data/maps/Route115/scripts.pory"
Route115_EventScript_Marlene::
# 511 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_MARLENE, Route115_Text_MarleneIntro, Route115_Text_MarleneDefeat
# 512 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_MarlenePostBattle, MSGBOX_AUTOCLOSE
# 513 "data/maps/Route115/scripts.pory"
	end
# 514 "data/maps/Route115/scripts.pory"

# 515 "data/maps/Route115/scripts.pory"
Route115_Text_NeverKnowWhenCavePokemonWillAppear:
# 516 "data/maps/Route115/scripts.pory"
	.string "Exploring a cave isn't like walking\n"
# 517 "data/maps/Route115/scripts.pory"
	.string "on a road.\p"
# 518 "data/maps/Route115/scripts.pory"
	.string "You never know when wild POKéMON will\n"
# 519 "data/maps/Route115/scripts.pory"
	.string "appear. It's full of suspense.$"
# 520 "data/maps/Route115/scripts.pory"

# 521 "data/maps/Route115/scripts.pory"
Route115_Text_RouteSignRustboro:
# 522 "data/maps/Route115/scripts.pory"
	.string "ROUTE 115\n"
# 523 "data/maps/Route115/scripts.pory"
	.string "{DOWN_ARROW} RUSTBORO CITY$"
# 524 "data/maps/Route115/scripts.pory"

# 525 "data/maps/Route115/scripts.pory"
Route115_Text_MeteorFallsSign:
# 526 "data/maps/Route115/scripts.pory"
	.string "METEOR FALLS\n"
# 527 "data/maps/Route115/scripts.pory"
	.string "FALLARBOR TOWN THROUGH HERE$"
