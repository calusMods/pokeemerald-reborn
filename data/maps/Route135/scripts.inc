Route135_OnTransition::
# 2 "data/maps/Route135/scripts.pory"
	call Route135_EventScript_RandomizeEncounters
	return


Route135_OnResume::
# 6 "data/maps/Route135/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Common_EventScript_RemoveStaticPokemonEncounter
	return


Route135_EventScript_RandomizeEncounters::
# 11 "data/maps/Route135/scripts.pory"
	setflag FLAG_TEMP_5
# 12 "data/maps/Route135/scripts.pory"
	random 10
# 13 "data/maps/Route135/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_lt Route135_EventScript_RandomizeEncounters_2
Route135_EventScript_RandomizeEncounters_1:
# 18 "data/maps/Route135/scripts.pory"
	setflag FLAG_TEMP_6
# 19 "data/maps/Route135/scripts.pory"
	random 10
# 20 "data/maps/Route135/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_lt Route135_EventScript_RandomizeEncounters_5
Route135_EventScript_RandomizeEncounters_4:
# 25 "data/maps/Route135/scripts.pory"
	setflag FLAG_TEMP_7
# 26 "data/maps/Route135/scripts.pory"
	random 10
# 27 "data/maps/Route135/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_lt Route135_EventScript_RandomizeEncounters_8
Route135_EventScript_RandomizeEncounters_7:
# 32 "data/maps/Route135/scripts.pory"
	setflag FLAG_TEMP_8
# 33 "data/maps/Route135/scripts.pory"
	random 10
# 34 "data/maps/Route135/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_lt Route135_EventScript_RandomizeEncounters_10
	return

Route135_EventScript_RandomizeEncounters_2:
# 14 "data/maps/Route135/scripts.pory"
	call Route135_EventScript_RandomizeEncounterVar5
# 15 "data/maps/Route135/scripts.pory"
	clearflag FLAG_TEMP_5
	goto Route135_EventScript_RandomizeEncounters_1

Route135_EventScript_RandomizeEncounters_5:
# 21 "data/maps/Route135/scripts.pory"
	call Route135_EventScript_RandomizeEncounterVar6
# 22 "data/maps/Route135/scripts.pory"
	clearflag FLAG_TEMP_6
	goto Route135_EventScript_RandomizeEncounters_4

Route135_EventScript_RandomizeEncounters_8:
# 28 "data/maps/Route135/scripts.pory"
	call Route135_EventScript_RandomizeEncounterVar7
# 29 "data/maps/Route135/scripts.pory"
	clearflag FLAG_TEMP_7
	goto Route135_EventScript_RandomizeEncounters_7

Route135_EventScript_RandomizeEncounters_10:
# 35 "data/maps/Route135/scripts.pory"
	call Route135_EventScript_RandomizeEncounterVar8
# 36 "data/maps/Route135/scripts.pory"
	clearflag FLAG_TEMP_8
	return


Route135_EventScript_RandomizeEncounterVar5::
# 41 "data/maps/Route135/scripts.pory"
	random 5
# 42 "data/maps/Route135/scripts.pory"
	switch VAR_RESULT
# 43 "data/maps/Route135/scripts.pory"
	case 0, Route135_EventScript_RandomizeEncounterVar5_2
# 44 "data/maps/Route135/scripts.pory"
	case 1, Route135_EventScript_RandomizeEncounterVar5_2
# 47 "data/maps/Route135/scripts.pory"
	case 2, Route135_EventScript_RandomizeEncounterVar5_3
# 48 "data/maps/Route135/scripts.pory"
	case 3, Route135_EventScript_RandomizeEncounterVar5_3
# 51 "data/maps/Route135/scripts.pory"
	case 4, Route135_EventScript_RandomizeEncounterVar5_4
	return

Route135_EventScript_RandomizeEncounterVar5_2:
# 45 "data/maps/Route135/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( POOCHYENA )
# 46 "data/maps/Route135/scripts.pory"
	setvar VAR_TEMP_5, 0
	return

Route135_EventScript_RandomizeEncounterVar5_3:
# 49 "data/maps/Route135/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( BIDOOF )
# 50 "data/maps/Route135/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

Route135_EventScript_RandomizeEncounterVar5_4:
# 52 "data/maps/Route135/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( ROOKIDEE )
# 53 "data/maps/Route135/scripts.pory"
	setvar VAR_TEMP_5, 2
	return


Route135_EventScript_EncounterVar5::
# 58 "data/maps/Route135/scripts.pory"
	lock
# 59 "data/maps/Route135/scripts.pory"
	switch VAR_TEMP_5
# 60 "data/maps/Route135/scripts.pory"
	case 0, Route135_EventScript_EncounterVar5_3
# 71 "data/maps/Route135/scripts.pory"
	case 1, Route135_EventScript_EncounterVar5_4
# 82 "data/maps/Route135/scripts.pory"
	case 2, Route135_EventScript_EncounterVar5_5
Route135_EventScript_EncounterVar5_1:
# 94 "data/maps/Route135/scripts.pory"
	release
	return

Route135_EventScript_EncounterVar5_3:
# 61 "data/maps/Route135/scripts.pory"
	random 4
# 62 "data/maps/Route135/scripts.pory"
	switch VAR_RESULT
# 63 "data/maps/Route135/scripts.pory"
	case 0, Route135_EventScript_EncounterVar5_7
# 65 "data/maps/Route135/scripts.pory"
	case 1, Route135_EventScript_EncounterVar5_8
# 66 "data/maps/Route135/scripts.pory"
	case 2, Route135_EventScript_EncounterVar5_8
# 68 "data/maps/Route135/scripts.pory"
	case 3, Route135_EventScript_EncounterVar5_9
	goto Route135_EventScript_EncounterVar5_1

Route135_EventScript_EncounterVar5_4:
# 72 "data/maps/Route135/scripts.pory"
	random 4
# 73 "data/maps/Route135/scripts.pory"
	switch VAR_RESULT
# 74 "data/maps/Route135/scripts.pory"
	case 0, Route135_EventScript_EncounterVar5_11
# 76 "data/maps/Route135/scripts.pory"
	case 1, Route135_EventScript_EncounterVar5_12
# 77 "data/maps/Route135/scripts.pory"
	case 2, Route135_EventScript_EncounterVar5_12
# 79 "data/maps/Route135/scripts.pory"
	case 3, Route135_EventScript_EncounterVar5_13
	goto Route135_EventScript_EncounterVar5_1

Route135_EventScript_EncounterVar5_5:
# 83 "data/maps/Route135/scripts.pory"
	random 4
# 84 "data/maps/Route135/scripts.pory"
	switch VAR_RESULT
# 85 "data/maps/Route135/scripts.pory"
	case 0, Route135_EventScript_EncounterVar5_15
# 87 "data/maps/Route135/scripts.pory"
	case 1, Route135_EventScript_EncounterVar5_16
# 88 "data/maps/Route135/scripts.pory"
	case 2, Route135_EventScript_EncounterVar5_16
# 90 "data/maps/Route135/scripts.pory"
	case 3, Route135_EventScript_EncounterVar5_17
	goto Route135_EventScript_EncounterVar5_1

Route135_EventScript_EncounterVar5_7:
# 64 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 2, FLAG_TEMP_5
	goto Route135_EventScript_EncounterVar5_1

Route135_EventScript_EncounterVar5_8:
# 67 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 3, FLAG_TEMP_5
	goto Route135_EventScript_EncounterVar5_1

Route135_EventScript_EncounterVar5_9:
# 69 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 4, FLAG_TEMP_5
	goto Route135_EventScript_EncounterVar5_1

Route135_EventScript_EncounterVar5_11:
# 75 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_BIDOOF, 2, FLAG_TEMP_5
	goto Route135_EventScript_EncounterVar5_1

Route135_EventScript_EncounterVar5_12:
# 78 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_BIDOOF, 3, FLAG_TEMP_5
	goto Route135_EventScript_EncounterVar5_1

Route135_EventScript_EncounterVar5_13:
# 80 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_BIDOOF, 4, FLAG_TEMP_5
	goto Route135_EventScript_EncounterVar5_1

Route135_EventScript_EncounterVar5_15:
# 86 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 2, FLAG_TEMP_5
	goto Route135_EventScript_EncounterVar5_1

Route135_EventScript_EncounterVar5_16:
# 89 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 3, FLAG_TEMP_5
	goto Route135_EventScript_EncounterVar5_1

Route135_EventScript_EncounterVar5_17:
# 91 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 4, FLAG_TEMP_5
	goto Route135_EventScript_EncounterVar5_1


Route135_EventScript_RandomizeEncounterVar6::
# 98 "data/maps/Route135/scripts.pory"
	random 4
# 99 "data/maps/Route135/scripts.pory"
	switch VAR_RESULT
# 100 "data/maps/Route135/scripts.pory"
	case 0, Route135_EventScript_RandomizeEncounterVar6_2
# 101 "data/maps/Route135/scripts.pory"
	case 1, Route135_EventScript_RandomizeEncounterVar6_2
# 104 "data/maps/Route135/scripts.pory"
	case 2, Route135_EventScript_RandomizeEncounterVar6_3
# 107 "data/maps/Route135/scripts.pory"
	case 3, Route135_EventScript_RandomizeEncounterVar6_4
	return

Route135_EventScript_RandomizeEncounterVar6_2:
# 102 "data/maps/Route135/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( BIDOOF )
# 103 "data/maps/Route135/scripts.pory"
	setvar VAR_TEMP_6, 0
	return

Route135_EventScript_RandomizeEncounterVar6_3:
# 105 "data/maps/Route135/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( AZURILL )
# 106 "data/maps/Route135/scripts.pory"
	setvar VAR_TEMP_6, 1
	return

Route135_EventScript_RandomizeEncounterVar6_4:
# 108 "data/maps/Route135/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( SURSKIT )
# 109 "data/maps/Route135/scripts.pory"
	setvar VAR_TEMP_6, 2
	return


Route135_EventScript_EncounterVar6::
# 114 "data/maps/Route135/scripts.pory"
	lock
# 115 "data/maps/Route135/scripts.pory"
	switch VAR_TEMP_6
# 116 "data/maps/Route135/scripts.pory"
	case 0, Route135_EventScript_EncounterVar6_3
# 127 "data/maps/Route135/scripts.pory"
	case 1, Route135_EventScript_EncounterVar6_4
# 138 "data/maps/Route135/scripts.pory"
	case 2, Route135_EventScript_EncounterVar6_5
Route135_EventScript_EncounterVar6_1:
# 150 "data/maps/Route135/scripts.pory"
	release
	return

Route135_EventScript_EncounterVar6_3:
# 117 "data/maps/Route135/scripts.pory"
	random 4
# 118 "data/maps/Route135/scripts.pory"
	switch VAR_RESULT
# 119 "data/maps/Route135/scripts.pory"
	case 0, Route135_EventScript_EncounterVar6_7
# 121 "data/maps/Route135/scripts.pory"
	case 1, Route135_EventScript_EncounterVar6_8
# 122 "data/maps/Route135/scripts.pory"
	case 2, Route135_EventScript_EncounterVar6_8
# 124 "data/maps/Route135/scripts.pory"
	case 3, Route135_EventScript_EncounterVar6_9
	goto Route135_EventScript_EncounterVar6_1

Route135_EventScript_EncounterVar6_4:
# 128 "data/maps/Route135/scripts.pory"
	random 4
# 129 "data/maps/Route135/scripts.pory"
	switch VAR_RESULT
# 130 "data/maps/Route135/scripts.pory"
	case 0, Route135_EventScript_EncounterVar6_11
# 132 "data/maps/Route135/scripts.pory"
	case 1, Route135_EventScript_EncounterVar6_12
# 133 "data/maps/Route135/scripts.pory"
	case 2, Route135_EventScript_EncounterVar6_12
# 135 "data/maps/Route135/scripts.pory"
	case 3, Route135_EventScript_EncounterVar6_13
	goto Route135_EventScript_EncounterVar6_1

Route135_EventScript_EncounterVar6_5:
# 139 "data/maps/Route135/scripts.pory"
	random 4
# 140 "data/maps/Route135/scripts.pory"
	switch VAR_RESULT
# 141 "data/maps/Route135/scripts.pory"
	case 0, Route135_EventScript_EncounterVar6_15
# 143 "data/maps/Route135/scripts.pory"
	case 1, Route135_EventScript_EncounterVar6_16
# 144 "data/maps/Route135/scripts.pory"
	case 2, Route135_EventScript_EncounterVar6_16
# 146 "data/maps/Route135/scripts.pory"
	case 3, Route135_EventScript_EncounterVar6_17
	goto Route135_EventScript_EncounterVar6_1

Route135_EventScript_EncounterVar6_7:
# 120 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_BIDOOF, 2, FLAG_TEMP_6
	goto Route135_EventScript_EncounterVar6_1

Route135_EventScript_EncounterVar6_8:
# 123 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_BIDOOF, 3, FLAG_TEMP_6
	goto Route135_EventScript_EncounterVar6_1

Route135_EventScript_EncounterVar6_9:
# 125 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_BIDOOF, 4, FLAG_TEMP_6
	goto Route135_EventScript_EncounterVar6_1

Route135_EventScript_EncounterVar6_11:
# 131 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_AZURILL, 2, FLAG_TEMP_6
	goto Route135_EventScript_EncounterVar6_1

Route135_EventScript_EncounterVar6_12:
# 134 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_AZURILL, 3, FLAG_TEMP_6
	goto Route135_EventScript_EncounterVar6_1

Route135_EventScript_EncounterVar6_13:
# 136 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_AZURILL, 4, FLAG_TEMP_6
	goto Route135_EventScript_EncounterVar6_1

Route135_EventScript_EncounterVar6_15:
# 142 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_SURSKIT, 2, FLAG_TEMP_6
	goto Route135_EventScript_EncounterVar6_1

Route135_EventScript_EncounterVar6_16:
# 145 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_SURSKIT, 3, FLAG_TEMP_6
	goto Route135_EventScript_EncounterVar6_1

Route135_EventScript_EncounterVar6_17:
# 147 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_SURSKIT, 4, FLAG_TEMP_6
	goto Route135_EventScript_EncounterVar6_1


Route135_EventScript_RandomizeEncounterVar7::
# 154 "data/maps/Route135/scripts.pory"
	random 10
# 155 "data/maps/Route135/scripts.pory"
	switch VAR_RESULT
# 156 "data/maps/Route135/scripts.pory"
	case 0, Route135_EventScript_RandomizeEncounterVar7_2
# 157 "data/maps/Route135/scripts.pory"
	case 1, Route135_EventScript_RandomizeEncounterVar7_2
# 158 "data/maps/Route135/scripts.pory"
	case 2, Route135_EventScript_RandomizeEncounterVar7_2
# 161 "data/maps/Route135/scripts.pory"
	case 3, Route135_EventScript_RandomizeEncounterVar7_3
# 162 "data/maps/Route135/scripts.pory"
	case 4, Route135_EventScript_RandomizeEncounterVar7_3
# 163 "data/maps/Route135/scripts.pory"
	case 5, Route135_EventScript_RandomizeEncounterVar7_3
# 166 "data/maps/Route135/scripts.pory"
	case 6, Route135_EventScript_RandomizeEncounterVar7_4
# 167 "data/maps/Route135/scripts.pory"
	case 7, Route135_EventScript_RandomizeEncounterVar7_4
# 170 "data/maps/Route135/scripts.pory"
	case 8, Route135_EventScript_RandomizeEncounterVar7_5
# 173 "data/maps/Route135/scripts.pory"
	case 9, Route135_EventScript_RandomizeEncounterVar7_6
	return

Route135_EventScript_RandomizeEncounterVar7_2:
# 159 "data/maps/Route135/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( POOCHYENA )
# 160 "data/maps/Route135/scripts.pory"
	setvar VAR_TEMP_7, 0
	return

Route135_EventScript_RandomizeEncounterVar7_3:
# 164 "data/maps/Route135/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( BIDOOF )
# 165 "data/maps/Route135/scripts.pory"
	setvar VAR_TEMP_7, 1
	return

Route135_EventScript_RandomizeEncounterVar7_4:
# 168 "data/maps/Route135/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( SURSKIT )
# 169 "data/maps/Route135/scripts.pory"
	setvar VAR_TEMP_7, 2
	return

Route135_EventScript_RandomizeEncounterVar7_5:
# 171 "data/maps/Route135/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( ROOKIDEE )
# 172 "data/maps/Route135/scripts.pory"
	setvar VAR_TEMP_7, 3
	return

Route135_EventScript_RandomizeEncounterVar7_6:
# 174 "data/maps/Route135/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( AZURILL )
# 175 "data/maps/Route135/scripts.pory"
	setvar VAR_TEMP_7, 4
	return


Route135_EventScript_EncounterVar7::
# 180 "data/maps/Route135/scripts.pory"
	lock
# 181 "data/maps/Route135/scripts.pory"
	switch VAR_TEMP_7
# 182 "data/maps/Route135/scripts.pory"
	case 0, Route135_EventScript_EncounterVar7_3
# 193 "data/maps/Route135/scripts.pory"
	case 1, Route135_EventScript_EncounterVar7_4
# 204 "data/maps/Route135/scripts.pory"
	case 2, Route135_EventScript_EncounterVar7_5
# 215 "data/maps/Route135/scripts.pory"
	case 3, Route135_EventScript_EncounterVar7_6
# 226 "data/maps/Route135/scripts.pory"
	case 4, Route135_EventScript_EncounterVar7_7
Route135_EventScript_EncounterVar7_1:
# 238 "data/maps/Route135/scripts.pory"
	release
	return

Route135_EventScript_EncounterVar7_3:
# 183 "data/maps/Route135/scripts.pory"
	random 4
# 184 "data/maps/Route135/scripts.pory"
	switch VAR_RESULT
# 185 "data/maps/Route135/scripts.pory"
	case 0, Route135_EventScript_EncounterVar7_9
# 187 "data/maps/Route135/scripts.pory"
	case 1, Route135_EventScript_EncounterVar7_10
# 188 "data/maps/Route135/scripts.pory"
	case 2, Route135_EventScript_EncounterVar7_10
# 190 "data/maps/Route135/scripts.pory"
	case 3, Route135_EventScript_EncounterVar7_11
	goto Route135_EventScript_EncounterVar7_1

Route135_EventScript_EncounterVar7_4:
# 194 "data/maps/Route135/scripts.pory"
	random 4
# 195 "data/maps/Route135/scripts.pory"
	switch VAR_RESULT
# 196 "data/maps/Route135/scripts.pory"
	case 0, Route135_EventScript_EncounterVar7_13
# 198 "data/maps/Route135/scripts.pory"
	case 1, Route135_EventScript_EncounterVar7_14
# 199 "data/maps/Route135/scripts.pory"
	case 2, Route135_EventScript_EncounterVar7_14
# 201 "data/maps/Route135/scripts.pory"
	case 3, Route135_EventScript_EncounterVar7_15
	goto Route135_EventScript_EncounterVar7_1

Route135_EventScript_EncounterVar7_5:
# 205 "data/maps/Route135/scripts.pory"
	random 4
# 206 "data/maps/Route135/scripts.pory"
	switch VAR_RESULT
# 207 "data/maps/Route135/scripts.pory"
	case 0, Route135_EventScript_EncounterVar7_17
# 209 "data/maps/Route135/scripts.pory"
	case 1, Route135_EventScript_EncounterVar7_18
# 210 "data/maps/Route135/scripts.pory"
	case 2, Route135_EventScript_EncounterVar7_18
# 212 "data/maps/Route135/scripts.pory"
	case 3, Route135_EventScript_EncounterVar7_19
	goto Route135_EventScript_EncounterVar7_1

Route135_EventScript_EncounterVar7_6:
# 216 "data/maps/Route135/scripts.pory"
	random 4
# 217 "data/maps/Route135/scripts.pory"
	switch VAR_RESULT
# 218 "data/maps/Route135/scripts.pory"
	case 0, Route135_EventScript_EncounterVar7_21
# 220 "data/maps/Route135/scripts.pory"
	case 1, Route135_EventScript_EncounterVar7_22
# 221 "data/maps/Route135/scripts.pory"
	case 2, Route135_EventScript_EncounterVar7_22
# 223 "data/maps/Route135/scripts.pory"
	case 3, Route135_EventScript_EncounterVar7_23
	goto Route135_EventScript_EncounterVar7_1

Route135_EventScript_EncounterVar7_7:
# 227 "data/maps/Route135/scripts.pory"
	random 4
# 228 "data/maps/Route135/scripts.pory"
	switch VAR_RESULT
# 229 "data/maps/Route135/scripts.pory"
	case 0, Route135_EventScript_EncounterVar7_25
# 231 "data/maps/Route135/scripts.pory"
	case 1, Route135_EventScript_EncounterVar7_26
# 232 "data/maps/Route135/scripts.pory"
	case 2, Route135_EventScript_EncounterVar7_26
# 234 "data/maps/Route135/scripts.pory"
	case 3, Route135_EventScript_EncounterVar7_27
	goto Route135_EventScript_EncounterVar7_1

Route135_EventScript_EncounterVar7_9:
# 186 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 2, FLAG_TEMP_7
	goto Route135_EventScript_EncounterVar7_1

Route135_EventScript_EncounterVar7_10:
# 189 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 3, FLAG_TEMP_7
	goto Route135_EventScript_EncounterVar7_1

Route135_EventScript_EncounterVar7_11:
# 191 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 4, FLAG_TEMP_7
	goto Route135_EventScript_EncounterVar7_1

Route135_EventScript_EncounterVar7_13:
# 197 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_BIDOOF, 2, FLAG_TEMP_7
	goto Route135_EventScript_EncounterVar7_1

Route135_EventScript_EncounterVar7_14:
# 200 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_BIDOOF, 3, FLAG_TEMP_7
	goto Route135_EventScript_EncounterVar7_1

Route135_EventScript_EncounterVar7_15:
# 202 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_BIDOOF, 4, FLAG_TEMP_7
	goto Route135_EventScript_EncounterVar7_1

Route135_EventScript_EncounterVar7_17:
# 208 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_SURSKIT, 2, FLAG_TEMP_7
	goto Route135_EventScript_EncounterVar7_1

Route135_EventScript_EncounterVar7_18:
# 211 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_SURSKIT, 3, FLAG_TEMP_7
	goto Route135_EventScript_EncounterVar7_1

Route135_EventScript_EncounterVar7_19:
# 213 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_SURSKIT, 4, FLAG_TEMP_7
	goto Route135_EventScript_EncounterVar7_1

Route135_EventScript_EncounterVar7_21:
# 219 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 2, FLAG_TEMP_7
	goto Route135_EventScript_EncounterVar7_1

Route135_EventScript_EncounterVar7_22:
# 222 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 3, FLAG_TEMP_7
	goto Route135_EventScript_EncounterVar7_1

Route135_EventScript_EncounterVar7_23:
# 224 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 4, FLAG_TEMP_7
	goto Route135_EventScript_EncounterVar7_1

Route135_EventScript_EncounterVar7_25:
# 230 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_AZURILL, 2, FLAG_TEMP_7
	goto Route135_EventScript_EncounterVar7_1

Route135_EventScript_EncounterVar7_26:
# 233 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_AZURILL, 3, FLAG_TEMP_7
	goto Route135_EventScript_EncounterVar7_1

Route135_EventScript_EncounterVar7_27:
# 235 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_AZURILL, 4, FLAG_TEMP_7
	goto Route135_EventScript_EncounterVar7_1


Route135_EventScript_RandomizeEncounterVar8::
# 242 "data/maps/Route135/scripts.pory"
	random 3
# 243 "data/maps/Route135/scripts.pory"
	switch VAR_RESULT
# 244 "data/maps/Route135/scripts.pory"
	case 0, Route135_EventScript_RandomizeEncounterVar8_2
# 245 "data/maps/Route135/scripts.pory"
	case 1, Route135_EventScript_RandomizeEncounterVar8_2
# 248 "data/maps/Route135/scripts.pory"
	case 2, Route135_EventScript_RandomizeEncounterVar8_3
	return

Route135_EventScript_RandomizeEncounterVar8_2:
# 246 "data/maps/Route135/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( POOCHYENA )
# 247 "data/maps/Route135/scripts.pory"
	setvar VAR_TEMP_8, 0
	return

Route135_EventScript_RandomizeEncounterVar8_3:
# 249 "data/maps/Route135/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( ROOKIDEE )
# 250 "data/maps/Route135/scripts.pory"
	setvar VAR_TEMP_8, 1
	return


Route135_EventScript_EncounterVar8::
# 255 "data/maps/Route135/scripts.pory"
	lock
# 256 "data/maps/Route135/scripts.pory"
	switch VAR_TEMP_8
# 257 "data/maps/Route135/scripts.pory"
	case 0, Route135_EventScript_EncounterVar8_3
# 268 "data/maps/Route135/scripts.pory"
	case 1, Route135_EventScript_EncounterVar8_4
Route135_EventScript_EncounterVar8_1:
# 280 "data/maps/Route135/scripts.pory"
	release
	return

Route135_EventScript_EncounterVar8_3:
# 258 "data/maps/Route135/scripts.pory"
	random 4
# 259 "data/maps/Route135/scripts.pory"
	switch VAR_RESULT
# 260 "data/maps/Route135/scripts.pory"
	case 0, Route135_EventScript_EncounterVar8_6
# 262 "data/maps/Route135/scripts.pory"
	case 1, Route135_EventScript_EncounterVar8_7
# 263 "data/maps/Route135/scripts.pory"
	case 2, Route135_EventScript_EncounterVar8_7
# 265 "data/maps/Route135/scripts.pory"
	case 3, Route135_EventScript_EncounterVar8_8
	goto Route135_EventScript_EncounterVar8_1

Route135_EventScript_EncounterVar8_4:
# 269 "data/maps/Route135/scripts.pory"
	random 4
# 270 "data/maps/Route135/scripts.pory"
	switch VAR_RESULT
# 271 "data/maps/Route135/scripts.pory"
	case 0, Route135_EventScript_EncounterVar8_10
# 273 "data/maps/Route135/scripts.pory"
	case 1, Route135_EventScript_EncounterVar8_11
# 274 "data/maps/Route135/scripts.pory"
	case 2, Route135_EventScript_EncounterVar8_11
# 276 "data/maps/Route135/scripts.pory"
	case 3, Route135_EventScript_EncounterVar8_12
	goto Route135_EventScript_EncounterVar8_1

Route135_EventScript_EncounterVar8_6:
# 261 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 2, FLAG_TEMP_8
	goto Route135_EventScript_EncounterVar8_1

Route135_EventScript_EncounterVar8_7:
# 264 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 3, FLAG_TEMP_8
	goto Route135_EventScript_EncounterVar8_1

Route135_EventScript_EncounterVar8_8:
# 266 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_POOCHYENA, 4, FLAG_TEMP_8
	goto Route135_EventScript_EncounterVar8_1

Route135_EventScript_EncounterVar8_10:
# 272 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 2, FLAG_TEMP_8
	goto Route135_EventScript_EncounterVar8_1

Route135_EventScript_EncounterVar8_11:
# 275 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 3, FLAG_TEMP_8
	goto Route135_EventScript_EncounterVar8_1

Route135_EventScript_EncounterVar8_12:
# 277 "data/maps/Route135/scripts.pory"
	dowildencounter SPECIES_ROOKIDEE, 4, FLAG_TEMP_8
	goto Route135_EventScript_EncounterVar8_1


Route135_EventScript_SeasideCaveSign::
# 284 "data/maps/Route135/scripts.pory"
	lock
# 285 "data/maps/Route135/scripts.pory"
	msgbox Route135_Text_SeasideCaveSign, MSGBOX_SIGN
# 286 "data/maps/Route135/scripts.pory"
	release
	return


# 293 "data/maps/Route135/scripts.pory"

# 294 "data/maps/Route135/scripts.pory"
Route135_MapScripts::
# 295 "data/maps/Route135/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route135_OnTransition
# 296 "data/maps/Route135/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route135_OnResume
# 297 "data/maps/Route135/scripts.pory"
	.byte 0

Route135_Text_SeasideCaveSign::
# 289 "data/maps/Route135/scripts.pory"
	.string "SEASIDE CAVE\p"
	.string "A refreshing breeze from the sea fills\n"
	.string "the air inside the cave.$"
