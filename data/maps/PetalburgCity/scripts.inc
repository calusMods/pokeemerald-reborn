PetalburgCity_OnResume::
# 2 "data/maps/PetalburgCity/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Common_EventScript_RemoveStaticPokemonEncounter
	return


PetalburgCity_EventScript_RandomizeEncounters::
# 7 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_TEMP_5
# 8 "data/maps/PetalburgCity/scripts.pory"
	random 10
# 9 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_lt PetalburgCity_EventScript_RandomizeEncounters_2
PetalburgCity_EventScript_RandomizeEncounters_1:
# 14 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_TEMP_6
# 15 "data/maps/PetalburgCity/scripts.pory"
	random 10
# 16 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_lt PetalburgCity_EventScript_RandomizeEncounters_5
PetalburgCity_EventScript_RandomizeEncounters_4:
# 21 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_TEMP_7
# 22 "data/maps/PetalburgCity/scripts.pory"
	random 10
# 23 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_lt PetalburgCity_EventScript_RandomizeEncounters_7
	return

PetalburgCity_EventScript_RandomizeEncounters_2:
# 10 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_RandomizeEncounterVar5
# 11 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_TEMP_5
	goto PetalburgCity_EventScript_RandomizeEncounters_1

PetalburgCity_EventScript_RandomizeEncounters_5:
# 17 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_RandomizeEncounterVar6
# 18 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_TEMP_6
	goto PetalburgCity_EventScript_RandomizeEncounters_4

PetalburgCity_EventScript_RandomizeEncounters_7:
# 24 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_RandomizeEncounterVar7
# 25 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_TEMP_7
	return


PetalburgCity_EventScript_RandomizeEncounterVar5::
# 30 "data/maps/PetalburgCity/scripts.pory"
	random 10
# 31 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_RESULT
# 32 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_RandomizeEncounterVar5_2
# 33 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_RandomizeEncounterVar5_2
# 34 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_RandomizeEncounterVar5_2
# 37 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_RandomizeEncounterVar5_3
# 38 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_EventScript_RandomizeEncounterVar5_3
# 41 "data/maps/PetalburgCity/scripts.pory"
	case 5, PetalburgCity_EventScript_RandomizeEncounterVar5_4
# 42 "data/maps/PetalburgCity/scripts.pory"
	case 6, PetalburgCity_EventScript_RandomizeEncounterVar5_4
# 45 "data/maps/PetalburgCity/scripts.pory"
	case 7, PetalburgCity_EventScript_RandomizeEncounterVar5_5
# 46 "data/maps/PetalburgCity/scripts.pory"
	case 8, PetalburgCity_EventScript_RandomizeEncounterVar5_5
# 49 "data/maps/PetalburgCity/scripts.pory"
	case 9, PetalburgCity_EventScript_RandomizeEncounterVar5_6
	return

PetalburgCity_EventScript_RandomizeEncounterVar5_2:
# 35 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( ZIGZAGOON )
# 36 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_TEMP_5, 0
	return

PetalburgCity_EventScript_RandomizeEncounterVar5_3:
# 39 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( LOTAD )
# 40 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

PetalburgCity_EventScript_RandomizeEncounterVar5_4:
# 43 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( WURMPLE )
# 44 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

PetalburgCity_EventScript_RandomizeEncounterVar5_5:
# 47 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( AZURILL )
# 48 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_TEMP_5, 3
	return

PetalburgCity_EventScript_RandomizeEncounterVar5_6:
# 50 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( BUDEW )
# 51 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_TEMP_5, 4
	return


PetalburgCity_EventScript_EncounterVar5::
# 56 "data/maps/PetalburgCity/scripts.pory"
	lock
# 57 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_TEMP_5
# 58 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_EncounterVar5_3
# 70 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_EncounterVar5_4
# 82 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_EncounterVar5_5
# 94 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_EncounterVar5_6
# 106 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_EventScript_EncounterVar5_7
PetalburgCity_EventScript_EncounterVar5_1:
# 119 "data/maps/PetalburgCity/scripts.pory"
	release
	return

PetalburgCity_EventScript_EncounterVar5_3:
# 59 "data/maps/PetalburgCity/scripts.pory"
	random 5
# 60 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_RESULT
# 61 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_EncounterVar5_9
# 63 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_EncounterVar5_10
# 64 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_EncounterVar5_10
# 66 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_EncounterVar5_11
# 67 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_EventScript_EncounterVar5_11
	goto PetalburgCity_EventScript_EncounterVar5_1

PetalburgCity_EventScript_EncounterVar5_4:
# 71 "data/maps/PetalburgCity/scripts.pory"
	random 5
# 72 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_RESULT
# 73 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_EncounterVar5_13
# 75 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_EncounterVar5_14
# 76 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_EncounterVar5_14
# 78 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_EncounterVar5_15
# 79 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_EventScript_EncounterVar5_15
	goto PetalburgCity_EventScript_EncounterVar5_1

PetalburgCity_EventScript_EncounterVar5_5:
# 83 "data/maps/PetalburgCity/scripts.pory"
	random 5
# 84 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_RESULT
# 85 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_EncounterVar5_17
# 87 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_EncounterVar5_18
# 88 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_EncounterVar5_18
# 90 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_EncounterVar5_19
# 91 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_EventScript_EncounterVar5_19
	goto PetalburgCity_EventScript_EncounterVar5_1

PetalburgCity_EventScript_EncounterVar5_6:
# 95 "data/maps/PetalburgCity/scripts.pory"
	random 5
# 96 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_RESULT
# 97 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_EncounterVar5_21
# 99 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_EncounterVar5_22
# 100 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_EncounterVar5_22
# 102 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_EncounterVar5_23
# 103 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_EventScript_EncounterVar5_23
	goto PetalburgCity_EventScript_EncounterVar5_1

PetalburgCity_EventScript_EncounterVar5_7:
# 107 "data/maps/PetalburgCity/scripts.pory"
	random 5
# 108 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_RESULT
# 109 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_EncounterVar5_25
# 111 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_EncounterVar5_26
# 112 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_EncounterVar5_26
# 114 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_EncounterVar5_27
# 115 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_EventScript_EncounterVar5_27
	goto PetalburgCity_EventScript_EncounterVar5_1

PetalburgCity_EventScript_EncounterVar5_9:
# 62 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 3, FLAG_TEMP_5
	goto PetalburgCity_EventScript_EncounterVar5_1

PetalburgCity_EventScript_EncounterVar5_10:
# 65 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 4, FLAG_TEMP_5
	goto PetalburgCity_EventScript_EncounterVar5_1

PetalburgCity_EventScript_EncounterVar5_11:
# 68 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 5, FLAG_TEMP_5
	goto PetalburgCity_EventScript_EncounterVar5_1

PetalburgCity_EventScript_EncounterVar5_13:
# 74 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_LOTAD, 3, FLAG_TEMP_5
	goto PetalburgCity_EventScript_EncounterVar5_1

PetalburgCity_EventScript_EncounterVar5_14:
# 77 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_LOTAD, 4, FLAG_TEMP_5
	goto PetalburgCity_EventScript_EncounterVar5_1

PetalburgCity_EventScript_EncounterVar5_15:
# 80 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_LOTAD, 5, FLAG_TEMP_5
	goto PetalburgCity_EventScript_EncounterVar5_1

PetalburgCity_EventScript_EncounterVar5_17:
# 86 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 3, FLAG_TEMP_5
	goto PetalburgCity_EventScript_EncounterVar5_1

PetalburgCity_EventScript_EncounterVar5_18:
# 89 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 4, FLAG_TEMP_5
	goto PetalburgCity_EventScript_EncounterVar5_1

PetalburgCity_EventScript_EncounterVar5_19:
# 92 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 5, FLAG_TEMP_5
	goto PetalburgCity_EventScript_EncounterVar5_1

PetalburgCity_EventScript_EncounterVar5_21:
# 98 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_AZURILL, 3, FLAG_TEMP_5
	goto PetalburgCity_EventScript_EncounterVar5_1

PetalburgCity_EventScript_EncounterVar5_22:
# 101 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_AZURILL, 4, FLAG_TEMP_5
	goto PetalburgCity_EventScript_EncounterVar5_1

PetalburgCity_EventScript_EncounterVar5_23:
# 104 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_AZURILL, 5, FLAG_TEMP_5
	goto PetalburgCity_EventScript_EncounterVar5_1

PetalburgCity_EventScript_EncounterVar5_25:
# 110 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_BUDEW, 3, FLAG_TEMP_5
	goto PetalburgCity_EventScript_EncounterVar5_1

PetalburgCity_EventScript_EncounterVar5_26:
# 113 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_BUDEW, 4, FLAG_TEMP_5
	goto PetalburgCity_EventScript_EncounterVar5_1

PetalburgCity_EventScript_EncounterVar5_27:
# 116 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_BUDEW, 5, FLAG_TEMP_5
	goto PetalburgCity_EventScript_EncounterVar5_1


PetalburgCity_EventScript_RandomizeEncounterVar6::
# 123 "data/maps/PetalburgCity/scripts.pory"
	random 10
# 124 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_RESULT
# 125 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_RandomizeEncounterVar6_2
# 126 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_RandomizeEncounterVar6_2
# 127 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_RandomizeEncounterVar6_2
# 130 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_RandomizeEncounterVar6_3
# 131 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_EventScript_RandomizeEncounterVar6_3
# 134 "data/maps/PetalburgCity/scripts.pory"
	case 5, PetalburgCity_EventScript_RandomizeEncounterVar6_4
# 135 "data/maps/PetalburgCity/scripts.pory"
	case 6, PetalburgCity_EventScript_RandomizeEncounterVar6_4
# 138 "data/maps/PetalburgCity/scripts.pory"
	case 7, PetalburgCity_EventScript_RandomizeEncounterVar6_5
# 139 "data/maps/PetalburgCity/scripts.pory"
	case 8, PetalburgCity_EventScript_RandomizeEncounterVar6_5
# 142 "data/maps/PetalburgCity/scripts.pory"
	case 9, PetalburgCity_EventScript_RandomizeEncounterVar6_6
	return

PetalburgCity_EventScript_RandomizeEncounterVar6_2:
# 128 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( ZIGZAGOON )
# 129 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_TEMP_6, 0
	return

PetalburgCity_EventScript_RandomizeEncounterVar6_3:
# 132 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( LOTAD )
# 133 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_TEMP_6, 1
	return

PetalburgCity_EventScript_RandomizeEncounterVar6_4:
# 136 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( WURMPLE )
# 137 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_TEMP_6, 2
	return

PetalburgCity_EventScript_RandomizeEncounterVar6_5:
# 140 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( AZURILL )
# 141 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_TEMP_6, 3
	return

PetalburgCity_EventScript_RandomizeEncounterVar6_6:
# 143 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( BUDEW )
# 144 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_TEMP_6, 4
	return


PetalburgCity_EventScript_EncounterVar6::
# 149 "data/maps/PetalburgCity/scripts.pory"
	lock
# 150 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_TEMP_6
# 151 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_EncounterVar6_3
# 163 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_EncounterVar6_4
# 175 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_EncounterVar6_5
# 187 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_EncounterVar6_6
# 199 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_EventScript_EncounterVar6_7
PetalburgCity_EventScript_EncounterVar6_1:
# 212 "data/maps/PetalburgCity/scripts.pory"
	release
	return

PetalburgCity_EventScript_EncounterVar6_3:
# 152 "data/maps/PetalburgCity/scripts.pory"
	random 5
# 153 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_RESULT
# 154 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_EncounterVar6_9
# 156 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_EncounterVar6_10
# 157 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_EncounterVar6_10
# 159 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_EncounterVar6_11
# 160 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_EventScript_EncounterVar6_11
	goto PetalburgCity_EventScript_EncounterVar6_1

PetalburgCity_EventScript_EncounterVar6_4:
# 164 "data/maps/PetalburgCity/scripts.pory"
	random 5
# 165 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_RESULT
# 166 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_EncounterVar6_13
# 168 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_EncounterVar6_14
# 169 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_EncounterVar6_14
# 171 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_EncounterVar6_15
# 172 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_EventScript_EncounterVar6_15
	goto PetalburgCity_EventScript_EncounterVar6_1

PetalburgCity_EventScript_EncounterVar6_5:
# 176 "data/maps/PetalburgCity/scripts.pory"
	random 5
# 177 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_RESULT
# 178 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_EncounterVar6_17
# 180 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_EncounterVar6_18
# 181 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_EncounterVar6_18
# 183 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_EncounterVar6_19
# 184 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_EventScript_EncounterVar6_19
	goto PetalburgCity_EventScript_EncounterVar6_1

PetalburgCity_EventScript_EncounterVar6_6:
# 188 "data/maps/PetalburgCity/scripts.pory"
	random 5
# 189 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_RESULT
# 190 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_EncounterVar6_21
# 192 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_EncounterVar6_22
# 193 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_EncounterVar6_22
# 195 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_EncounterVar6_23
# 196 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_EventScript_EncounterVar6_23
	goto PetalburgCity_EventScript_EncounterVar6_1

PetalburgCity_EventScript_EncounterVar6_7:
# 200 "data/maps/PetalburgCity/scripts.pory"
	random 5
# 201 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_RESULT
# 202 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_EncounterVar6_25
# 204 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_EncounterVar6_26
# 205 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_EncounterVar6_26
# 207 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_EncounterVar6_27
# 208 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_EventScript_EncounterVar6_27
	goto PetalburgCity_EventScript_EncounterVar6_1

PetalburgCity_EventScript_EncounterVar6_9:
# 155 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 3, FLAG_TEMP_6
	goto PetalburgCity_EventScript_EncounterVar6_1

PetalburgCity_EventScript_EncounterVar6_10:
# 158 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 4, FLAG_TEMP_6
	goto PetalburgCity_EventScript_EncounterVar6_1

PetalburgCity_EventScript_EncounterVar6_11:
# 161 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_ZIGZAGOON, 5, FLAG_TEMP_6
	goto PetalburgCity_EventScript_EncounterVar6_1

PetalburgCity_EventScript_EncounterVar6_13:
# 167 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_LOTAD, 3, FLAG_TEMP_6
	goto PetalburgCity_EventScript_EncounterVar6_1

PetalburgCity_EventScript_EncounterVar6_14:
# 170 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_LOTAD, 4, FLAG_TEMP_6
	goto PetalburgCity_EventScript_EncounterVar6_1

PetalburgCity_EventScript_EncounterVar6_15:
# 173 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_LOTAD, 5, FLAG_TEMP_6
	goto PetalburgCity_EventScript_EncounterVar6_1

PetalburgCity_EventScript_EncounterVar6_17:
# 179 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 3, FLAG_TEMP_6
	goto PetalburgCity_EventScript_EncounterVar6_1

PetalburgCity_EventScript_EncounterVar6_18:
# 182 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 4, FLAG_TEMP_6
	goto PetalburgCity_EventScript_EncounterVar6_1

PetalburgCity_EventScript_EncounterVar6_19:
# 185 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 5, FLAG_TEMP_6
	goto PetalburgCity_EventScript_EncounterVar6_1

PetalburgCity_EventScript_EncounterVar6_21:
# 191 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_AZURILL, 3, FLAG_TEMP_6
	goto PetalburgCity_EventScript_EncounterVar6_1

PetalburgCity_EventScript_EncounterVar6_22:
# 194 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_AZURILL, 4, FLAG_TEMP_6
	goto PetalburgCity_EventScript_EncounterVar6_1

PetalburgCity_EventScript_EncounterVar6_23:
# 197 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_AZURILL, 5, FLAG_TEMP_6
	goto PetalburgCity_EventScript_EncounterVar6_1

PetalburgCity_EventScript_EncounterVar6_25:
# 203 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_BUDEW, 3, FLAG_TEMP_6
	goto PetalburgCity_EventScript_EncounterVar6_1

PetalburgCity_EventScript_EncounterVar6_26:
# 206 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_BUDEW, 4, FLAG_TEMP_6
	goto PetalburgCity_EventScript_EncounterVar6_1

PetalburgCity_EventScript_EncounterVar6_27:
# 209 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_BUDEW, 5, FLAG_TEMP_6
	goto PetalburgCity_EventScript_EncounterVar6_1


PetalburgCity_EventScript_RandomizeEncounterVar7::
# 216 "data/maps/PetalburgCity/scripts.pory"
	random 2
# 217 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_RESULT
# 218 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_RandomizeEncounterVar7_2
# 221 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_RandomizeEncounterVar7_3
	return

PetalburgCity_EventScript_RandomizeEncounterVar7_2:
# 219 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( AZURILL )
# 220 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_TEMP_7, 0
	return

PetalburgCity_EventScript_RandomizeEncounterVar7_3:
# 222 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( BUDEW )
# 223 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_TEMP_7, 1
	return


PetalburgCity_EventScript_EncounterVar7::
# 228 "data/maps/PetalburgCity/scripts.pory"
	lock
# 229 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_TEMP_7
# 230 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_EncounterVar7_3
# 242 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_EncounterVar7_4
PetalburgCity_EventScript_EncounterVar7_1:
# 255 "data/maps/PetalburgCity/scripts.pory"
	release
	return

PetalburgCity_EventScript_EncounterVar7_3:
# 231 "data/maps/PetalburgCity/scripts.pory"
	random 5
# 232 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_RESULT
# 233 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_EncounterVar7_6
# 235 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_EncounterVar7_7
# 236 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_EncounterVar7_7
# 238 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_EncounterVar7_8
# 239 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_EventScript_EncounterVar7_8
	goto PetalburgCity_EventScript_EncounterVar7_1

PetalburgCity_EventScript_EncounterVar7_4:
# 243 "data/maps/PetalburgCity/scripts.pory"
	random 5
# 244 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_RESULT
# 245 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_EncounterVar7_10
# 247 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_EncounterVar7_11
# 248 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_EncounterVar7_11
# 250 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_EncounterVar7_12
# 251 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_EventScript_EncounterVar7_12
	goto PetalburgCity_EventScript_EncounterVar7_1

PetalburgCity_EventScript_EncounterVar7_6:
# 234 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_AZURILL, 3, FLAG_TEMP_7
	goto PetalburgCity_EventScript_EncounterVar7_1

PetalburgCity_EventScript_EncounterVar7_7:
# 237 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_AZURILL, 4, FLAG_TEMP_7
	goto PetalburgCity_EventScript_EncounterVar7_1

PetalburgCity_EventScript_EncounterVar7_8:
# 240 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_AZURILL, 5, FLAG_TEMP_7
	goto PetalburgCity_EventScript_EncounterVar7_1

PetalburgCity_EventScript_EncounterVar7_10:
# 246 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_BUDEW, 3, FLAG_TEMP_7
	goto PetalburgCity_EventScript_EncounterVar7_1

PetalburgCity_EventScript_EncounterVar7_11:
# 249 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_BUDEW, 4, FLAG_TEMP_7
	goto PetalburgCity_EventScript_EncounterVar7_1

PetalburgCity_EventScript_EncounterVar7_12:
# 252 "data/maps/PetalburgCity/scripts.pory"
	dowildencounter SPECIES_BUDEW, 5, FLAG_TEMP_7
	goto PetalburgCity_EventScript_EncounterVar7_1


# 258 "data/maps/PetalburgCity/scripts.pory"

# 259 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLY, 2
# 260 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_BOY, 3
# 261 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLYS_DAD, 5
# 262 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_GYM_BOY, 8
# 263 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_SCOTT, 9
# 264 "data/maps/PetalburgCity/scripts.pory"

# 265 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts::
# 266 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 267 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 268 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PetalburgCity_OnResume
# 269 "data/maps/PetalburgCity/scripts.pory"
	.byte 0
# 270 "data/maps/PetalburgCity/scripts.pory"

# 271 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 272 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 273 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 274 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 275 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 276 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 277 "data/maps/PetalburgCity/scripts.pory"
	call PetalburgCity_EventScript_RandomizeEncounters
# 278 "data/maps/PetalburgCity/scripts.pory"
	end
# 279 "data/maps/PetalburgCity/scripts.pory"

# 280 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 281 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 282 "data/maps/PetalburgCity/scripts.pory"
	return
# 283 "data/maps/PetalburgCity/scripts.pory"

# 284 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 285 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 286 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 287 "data/maps/PetalburgCity/scripts.pory"
	return
# 288 "data/maps/PetalburgCity/scripts.pory"

# 289 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 290 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 291 "data/maps/PetalburgCity/scripts.pory"
	return
# 292 "data/maps/PetalburgCity/scripts.pory"

# 293 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 294 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 295 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 296 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 297 "data/maps/PetalburgCity/scripts.pory"

# 298 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 299 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 300 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 301 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 302 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 303 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 304 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 305 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 306 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 307 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 308 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 309 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 310 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
# 311 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 312 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 313 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 314 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 315 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 316 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 317 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 318 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 319 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 320 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 321 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 322 "data/maps/PetalburgCity/scripts.pory"
	end
# 323 "data/maps/PetalburgCity/scripts.pory"

# 324 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 325 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 326 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 327 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 328 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 329 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 330 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 331 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 332 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 333 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 334 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 335 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 336 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 337 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 338 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY
# 339 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 340 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 341 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 342 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 343 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 344 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 345 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 346 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 347 "data/maps/PetalburgCity/scripts.pory"
	end
# 348 "data/maps/PetalburgCity/scripts.pory"

# 349 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 350 "data/maps/PetalburgCity/scripts.pory"
	lock
# 351 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 352 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 353 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 354 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
# 355 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 356 "data/maps/PetalburgCity/scripts.pory"
	release
# 357 "data/maps/PetalburgCity/scripts.pory"
	end
# 358 "data/maps/PetalburgCity/scripts.pory"

# 359 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 360 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 361 "data/maps/PetalburgCity/scripts.pory"
	end
# 362 "data/maps/PetalburgCity/scripts.pory"

# 363 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 364 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 365 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 366 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 367 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 368 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 369 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 370 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 371 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 372 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 373 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 374 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 375 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 376 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 377 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 378 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 379 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 380 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 381 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 382 "data/maps/PetalburgCity/scripts.pory"

# 383 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 384 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 385 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 386 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 387 "data/maps/PetalburgCity/scripts.pory"

# 388 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 389 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 390 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 391 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 392 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 393 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 394 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 395 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 396 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 397 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 398 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 399 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 400 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 401 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 402 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 404 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 406 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 407 "data/maps/PetalburgCity/scripts.pory"

# 408 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 410 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 411 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 412 "data/maps/PetalburgCity/scripts.pory"

# 413 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 414 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 415 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 416 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 420 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 421 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 422 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 424 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 426 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 427 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 428 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 429 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 434 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 436 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 437 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 438 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 441 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 442 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 443 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 444 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 445 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 446 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 447 "data/maps/PetalburgCity/scripts.pory"

# 448 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 449 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 451 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 456 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 458 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 461 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 462 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 463 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 464 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 465 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 466 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 467 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 468 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 469 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 470 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 471 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 472 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 473 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 474 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 475 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 476 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 477 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 478 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 479 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 480 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 481 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 482 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 483 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 484 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 485 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 486 "data/maps/PetalburgCity/scripts.pory"

# 487 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 488 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 489 "data/maps/PetalburgCity/scripts.pory"
	end
# 490 "data/maps/PetalburgCity/scripts.pory"

# 491 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 492 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 493 "data/maps/PetalburgCity/scripts.pory"
	end
# 494 "data/maps/PetalburgCity/scripts.pory"

# 495 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 496 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 497 "data/maps/PetalburgCity/scripts.pory"
	end
# 498 "data/maps/PetalburgCity/scripts.pory"

# 499 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 500 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 501 "data/maps/PetalburgCity/scripts.pory"
	end
# 502 "data/maps/PetalburgCity/scripts.pory"

# 503 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 504 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 505 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 506 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 507 "data/maps/PetalburgCity/scripts.pory"
	end
# 508 "data/maps/PetalburgCity/scripts.pory"

# 509 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 510 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 511 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 512 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 513 "data/maps/PetalburgCity/scripts.pory"
	end
# 514 "data/maps/PetalburgCity/scripts.pory"

# 515 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 516 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 517 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 518 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 519 "data/maps/PetalburgCity/scripts.pory"
	end
# 520 "data/maps/PetalburgCity/scripts.pory"

# 521 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 522 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 523 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 524 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 525 "data/maps/PetalburgCity/scripts.pory"
	end
# 526 "data/maps/PetalburgCity/scripts.pory"

# 527 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 528 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 529 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 530 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 531 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 532 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 533 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 534 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 535 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 536 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 537 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 538 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 539 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 540 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 541 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 542 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 543 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 544 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 545 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 546 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 547 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 548 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 549 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 550 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 551 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 552 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 553 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 554 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 555 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 556 "data/maps/PetalburgCity/scripts.pory"
	end
# 557 "data/maps/PetalburgCity/scripts.pory"

# 558 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 559 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 560 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 561 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 562 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 563 "data/maps/PetalburgCity/scripts.pory"
	return
# 564 "data/maps/PetalburgCity/scripts.pory"

# 565 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 566 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 567 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 568 "data/maps/PetalburgCity/scripts.pory"
	return
# 569 "data/maps/PetalburgCity/scripts.pory"

# 570 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 571 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 572 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 573 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 574 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 575 "data/maps/PetalburgCity/scripts.pory"
	return
# 576 "data/maps/PetalburgCity/scripts.pory"

# 577 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 578 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 579 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 580 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 581 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 582 "data/maps/PetalburgCity/scripts.pory"
	return
# 583 "data/maps/PetalburgCity/scripts.pory"

# 584 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 585 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 586 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 587 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 588 "data/maps/PetalburgCity/scripts.pory"
	return
# 589 "data/maps/PetalburgCity/scripts.pory"

# 590 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 591 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 592 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 593 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 594 "data/maps/PetalburgCity/scripts.pory"
	return
# 595 "data/maps/PetalburgCity/scripts.pory"

# 596 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 597 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 598 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 599 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 600 "data/maps/PetalburgCity/scripts.pory"
	return
# 601 "data/maps/PetalburgCity/scripts.pory"

# 602 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 603 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 604 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 605 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 606 "data/maps/PetalburgCity/scripts.pory"
	return
# 607 "data/maps/PetalburgCity/scripts.pory"

# 608 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 609 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 610 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 611 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 612 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 613 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 614 "data/maps/PetalburgCity/scripts.pory"

# 615 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 616 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 617 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 618 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 619 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 620 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 621 "data/maps/PetalburgCity/scripts.pory"

# 622 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 623 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 624 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 625 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 626 "data/maps/PetalburgCity/scripts.pory"

# 627 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 628 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 629 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 630 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 631 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 632 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 633 "data/maps/PetalburgCity/scripts.pory"

# 634 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 635 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 636 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 637 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 638 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 639 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 640 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 641 "data/maps/PetalburgCity/scripts.pory"

# 642 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 643 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 644 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 645 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 646 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 647 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 648 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 649 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 650 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 651 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 652 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 653 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 654 "data/maps/PetalburgCity/scripts.pory"

# 655 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 656 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 657 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 658 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 659 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 660 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 661 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 662 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 663 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 664 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 665 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 666 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 667 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 668 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 669 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 670 "data/maps/PetalburgCity/scripts.pory"

# 671 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 672 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 673 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 674 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 675 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 676 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 677 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 678 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 679 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 680 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 681 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 682 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 683 "data/maps/PetalburgCity/scripts.pory"

# 684 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 685 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 686 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 687 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 688 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 689 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 690 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 691 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 692 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 693 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 694 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 695 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 696 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 697 "data/maps/PetalburgCity/scripts.pory"

# 698 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 699 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 700 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 701 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 702 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 703 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 704 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 705 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 706 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 707 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 708 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 709 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 710 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 711 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 712 "data/maps/PetalburgCity/scripts.pory"

# 713 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 714 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 715 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 716 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 717 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 718 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 719 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 720 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 721 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 722 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 723 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 724 "data/maps/PetalburgCity/scripts.pory"

# 725 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 726 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 727 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 728 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 729 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 730 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 731 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 732 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 733 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 734 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 735 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 736 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 737 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 738 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 739 "data/maps/PetalburgCity/scripts.pory"

# 740 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 741 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 742 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 743 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 744 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 745 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 746 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 747 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 748 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 749 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 750 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 751 "data/maps/PetalburgCity/scripts.pory"

# 752 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 753 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 754 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 755 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 756 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 757 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 758 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 759 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 760 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 761 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 762 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 763 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 764 "data/maps/PetalburgCity/scripts.pory"

# 765 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 766 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 767 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 768 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 769 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 770 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 771 "data/maps/PetalburgCity/scripts.pory"
	end
# 772 "data/maps/PetalburgCity/scripts.pory"

# 773 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 774 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 775 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 776 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 777 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 778 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 779 "data/maps/PetalburgCity/scripts.pory"
	end
# 780 "data/maps/PetalburgCity/scripts.pory"

# 781 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 782 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 783 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 784 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 785 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 786 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 787 "data/maps/PetalburgCity/scripts.pory"
	end
# 788 "data/maps/PetalburgCity/scripts.pory"

# 789 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 790 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 791 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 792 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 793 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 794 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 795 "data/maps/PetalburgCity/scripts.pory"
	end
# 796 "data/maps/PetalburgCity/scripts.pory"

# 797 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 798 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 799 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 800 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 801 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 802 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 803 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 804 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 805 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 806 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 807 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 808 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 809 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 810 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 811 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 812 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 813 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 814 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 815 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 816 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 817 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 818 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 819 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 820 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 821 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 822 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 823 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 824 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 825 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 826 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 827 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 828 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 829 "data/maps/PetalburgCity/scripts.pory"
	end
# 830 "data/maps/PetalburgCity/scripts.pory"

# 831 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 832 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 833 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 834 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 835 "data/maps/PetalburgCity/scripts.pory"
	return
# 836 "data/maps/PetalburgCity/scripts.pory"

# 837 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 838 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 839 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 840 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 841 "data/maps/PetalburgCity/scripts.pory"
	return
# 842 "data/maps/PetalburgCity/scripts.pory"

# 843 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 844 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 845 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 846 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 847 "data/maps/PetalburgCity/scripts.pory"
	return
# 848 "data/maps/PetalburgCity/scripts.pory"

# 849 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 850 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 851 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 852 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 853 "data/maps/PetalburgCity/scripts.pory"
	return
# 854 "data/maps/PetalburgCity/scripts.pory"

# 855 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 856 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 857 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 858 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 859 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 860 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 861 "data/maps/PetalburgCity/scripts.pory"

# 862 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 863 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 864 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 865 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 866 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 867 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 868 "data/maps/PetalburgCity/scripts.pory"

# 869 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 870 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 871 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 872 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 873 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 874 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 875 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 876 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 877 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 878 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 879 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 880 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 881 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 882 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 883 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 884 "data/maps/PetalburgCity/scripts.pory"

# 885 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 886 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 887 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 888 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 889 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 890 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 891 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 892 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 893 "data/maps/PetalburgCity/scripts.pory"

# 894 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 895 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 896 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 897 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 898 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 899 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 900 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 901 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 902 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 903 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 904 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 905 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 906 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 907 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 908 "data/maps/PetalburgCity/scripts.pory"

# 909 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 910 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 911 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 912 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 913 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 914 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 915 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 916 "data/maps/PetalburgCity/scripts.pory"

# 917 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 918 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 919 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 920 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 921 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 922 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 923 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 924 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 925 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 926 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 927 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 928 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 929 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 930 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 931 "data/maps/PetalburgCity/scripts.pory"

# 932 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 933 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 934 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 935 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 936 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 937 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 938 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 939 "data/maps/PetalburgCity/scripts.pory"

# 940 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 941 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 942 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 943 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 944 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 945 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 946 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 947 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 948 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 949 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 950 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 951 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 952 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 953 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 954 "data/maps/PetalburgCity/scripts.pory"

# 955 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 956 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 957 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 958 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 959 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 960 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 961 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 962 "data/maps/PetalburgCity/scripts.pory"

# 963 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 964 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 965 "data/maps/PetalburgCity/scripts.pory"
	end
# 966 "data/maps/PetalburgCity/scripts.pory"

# 967 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 968 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 969 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 970 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 971 "data/maps/PetalburgCity/scripts.pory"

# 972 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 973 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 974 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 975 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 976 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 977 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 978 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 979 "data/maps/PetalburgCity/scripts.pory"

# 980 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 981 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 982 "data/maps/PetalburgCity/scripts.pory"

# 983 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 984 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 985 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 986 "data/maps/PetalburgCity/scripts.pory"

# 987 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 988 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 989 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 990 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 991 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 992 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 993 "data/maps/PetalburgCity/scripts.pory"

# 994 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 995 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 996 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 997 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 998 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 999 "data/maps/PetalburgCity/scripts.pory"

# 1000 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 1001 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 1002 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: NORMAN\l"
# 1003 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 1004 "data/maps/PetalburgCity/scripts.pory"

# 1005 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 1006 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 1007 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 1008 "data/maps/PetalburgCity/scripts.pory"

# 1009 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 1010 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"
# 1011 "data/maps/PetalburgCity/scripts.pory"

# 1012 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 1013 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 1014 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 1015 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 1016 "data/maps/PetalburgCity/scripts.pory"

# 1017 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 1018 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 1019 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 1020 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 1021 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 1022 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 1023 "data/maps/PetalburgCity/scripts.pory"

# 1024 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 1025 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 1026 "data/maps/PetalburgCity/scripts.pory"
	.string "talented TRAINERS.\p"
# 1027 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"
