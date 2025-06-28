PetalburgWoods_OnTransition::
# 2 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_RandomizeEncounters
	return


PetalburgWoods_OnResume::
# 6 "data/maps/PetalburgWoods/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Common_EventScript_RemoveStaticPokemonEncounter
	return


PetalburgWoods_EventScript_RandomizeEncounters::
# 11 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_TEMP_5
# 12 "data/maps/PetalburgWoods/scripts.pory"
	random 10
# 13 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_lt PetalburgWoods_EventScript_RandomizeEncounters_2
PetalburgWoods_EventScript_RandomizeEncounters_1:
# 18 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_TEMP_6
# 19 "data/maps/PetalburgWoods/scripts.pory"
	random 10
# 20 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_lt PetalburgWoods_EventScript_RandomizeEncounters_5
PetalburgWoods_EventScript_RandomizeEncounters_4:
# 25 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_TEMP_7
# 26 "data/maps/PetalburgWoods/scripts.pory"
	random 10
# 27 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_lt PetalburgWoods_EventScript_RandomizeEncounters_8
PetalburgWoods_EventScript_RandomizeEncounters_7:
# 32 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_TEMP_8
# 33 "data/maps/PetalburgWoods/scripts.pory"
	random 10
# 34 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_lt PetalburgWoods_EventScript_RandomizeEncounters_11
PetalburgWoods_EventScript_RandomizeEncounters_10:
# 39 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_TEMP_9
# 40 "data/maps/PetalburgWoods/scripts.pory"
	random 10
# 41 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_lt PetalburgWoods_EventScript_RandomizeEncounters_14
PetalburgWoods_EventScript_RandomizeEncounters_13:
# 46 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_TEMP_A
# 47 "data/maps/PetalburgWoods/scripts.pory"
	random 10
# 48 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_lt PetalburgWoods_EventScript_RandomizeEncounters_17
PetalburgWoods_EventScript_RandomizeEncounters_16:
# 53 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_TEMP_B
# 54 "data/maps/PetalburgWoods/scripts.pory"
	random 10
# 55 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_lt PetalburgWoods_EventScript_RandomizeEncounters_19
	return

PetalburgWoods_EventScript_RandomizeEncounters_2:
# 14 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_RandomizeEncounterVar5
# 15 "data/maps/PetalburgWoods/scripts.pory"
	clearflag FLAG_TEMP_5
	goto PetalburgWoods_EventScript_RandomizeEncounters_1

PetalburgWoods_EventScript_RandomizeEncounters_5:
# 21 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_RandomizeEncounterVar6
# 22 "data/maps/PetalburgWoods/scripts.pory"
	clearflag FLAG_TEMP_6
	goto PetalburgWoods_EventScript_RandomizeEncounters_4

PetalburgWoods_EventScript_RandomizeEncounters_8:
# 28 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_RandomizeEncounterVar7
# 29 "data/maps/PetalburgWoods/scripts.pory"
	clearflag FLAG_TEMP_7
	goto PetalburgWoods_EventScript_RandomizeEncounters_7

PetalburgWoods_EventScript_RandomizeEncounters_11:
# 35 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_RandomizeEncounterVar8
# 36 "data/maps/PetalburgWoods/scripts.pory"
	clearflag FLAG_TEMP_8
	goto PetalburgWoods_EventScript_RandomizeEncounters_10

PetalburgWoods_EventScript_RandomizeEncounters_14:
# 42 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_RandomizeEncounterVar9
# 43 "data/maps/PetalburgWoods/scripts.pory"
	clearflag FLAG_TEMP_9
	goto PetalburgWoods_EventScript_RandomizeEncounters_13

PetalburgWoods_EventScript_RandomizeEncounters_17:
# 49 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_RandomizeEncounterVarA
# 50 "data/maps/PetalburgWoods/scripts.pory"
	clearflag FLAG_TEMP_A
	goto PetalburgWoods_EventScript_RandomizeEncounters_16

PetalburgWoods_EventScript_RandomizeEncounters_19:
# 56 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_RandomizeEncounterVarB
# 57 "data/maps/PetalburgWoods/scripts.pory"
	clearflag FLAG_TEMP_B
	return


PetalburgWoods_EventScript_RandomizeEncounterVar5::
# 62 "data/maps/PetalburgWoods/scripts.pory"
	random 4
# 63 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 64 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_RandomizeEncounterVar5_2
# 65 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_RandomizeEncounterVar5_2
# 68 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_RandomizeEncounterVar5_3
# 71 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_RandomizeEncounterVar5_4
	return

PetalburgWoods_EventScript_RandomizeEncounterVar5_2:
# 66 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( SHROOMISH )
# 67 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_5, 0
	return

PetalburgWoods_EventScript_RandomizeEncounterVar5_3:
# 69 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( SEEDOT )
# 70 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

PetalburgWoods_EventScript_RandomizeEncounterVar5_4:
# 72 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( SMOLIV )
# 73 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_5, 2
	return


PetalburgWoods_EventScript_EncounterVar5::
# 78 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 79 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_TEMP_5
# 80 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar5_3
# 91 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar5_4
# 102 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar5_5
PetalburgWoods_EventScript_EncounterVar5_1:
# 114 "data/maps/PetalburgWoods/scripts.pory"
	release
	return

PetalburgWoods_EventScript_EncounterVar5_3:
# 81 "data/maps/PetalburgWoods/scripts.pory"
	random 4
# 82 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 83 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar5_7
# 85 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar5_8
# 86 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar5_8
# 88 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVar5_9
	goto PetalburgWoods_EventScript_EncounterVar5_1

PetalburgWoods_EventScript_EncounterVar5_4:
# 92 "data/maps/PetalburgWoods/scripts.pory"
	random 4
# 93 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 94 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar5_11
# 96 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar5_12
# 97 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar5_12
# 99 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVar5_13
	goto PetalburgWoods_EventScript_EncounterVar5_1

PetalburgWoods_EventScript_EncounterVar5_5:
# 103 "data/maps/PetalburgWoods/scripts.pory"
	random 4
# 104 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 105 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar5_15
# 107 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar5_16
# 108 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar5_16
# 110 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVar5_17
	goto PetalburgWoods_EventScript_EncounterVar5_1

PetalburgWoods_EventScript_EncounterVar5_7:
# 84 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SHROOMISH, 4, FLAG_TEMP_5
	goto PetalburgWoods_EventScript_EncounterVar5_1

PetalburgWoods_EventScript_EncounterVar5_8:
# 87 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SHROOMISH, 5, FLAG_TEMP_5
	goto PetalburgWoods_EventScript_EncounterVar5_1

PetalburgWoods_EventScript_EncounterVar5_9:
# 89 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SHROOMISH, 6, FLAG_TEMP_5
	goto PetalburgWoods_EventScript_EncounterVar5_1

PetalburgWoods_EventScript_EncounterVar5_11:
# 95 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SEEDOT, 4, FLAG_TEMP_5
	goto PetalburgWoods_EventScript_EncounterVar5_1

PetalburgWoods_EventScript_EncounterVar5_12:
# 98 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SEEDOT, 5, FLAG_TEMP_5
	goto PetalburgWoods_EventScript_EncounterVar5_1

PetalburgWoods_EventScript_EncounterVar5_13:
# 100 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SEEDOT, 6, FLAG_TEMP_5
	goto PetalburgWoods_EventScript_EncounterVar5_1

PetalburgWoods_EventScript_EncounterVar5_15:
# 106 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SMOLIV, 4, FLAG_TEMP_5
	goto PetalburgWoods_EventScript_EncounterVar5_1

PetalburgWoods_EventScript_EncounterVar5_16:
# 109 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SMOLIV, 5, FLAG_TEMP_5
	goto PetalburgWoods_EventScript_EncounterVar5_1

PetalburgWoods_EventScript_EncounterVar5_17:
# 111 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SMOLIV, 6, FLAG_TEMP_5
	goto PetalburgWoods_EventScript_EncounterVar5_1


PetalburgWoods_EventScript_RandomizeEncounterVar6::
# 118 "data/maps/PetalburgWoods/scripts.pory"
	random 9
# 119 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 120 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_RandomizeEncounterVar6_2
# 121 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_RandomizeEncounterVar6_2
# 122 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_RandomizeEncounterVar6_2
# 125 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_RandomizeEncounterVar6_3
# 126 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_RandomizeEncounterVar6_3
# 129 "data/maps/PetalburgWoods/scripts.pory"
	case 5, PetalburgWoods_EventScript_RandomizeEncounterVar6_4
# 130 "data/maps/PetalburgWoods/scripts.pory"
	case 6, PetalburgWoods_EventScript_RandomizeEncounterVar6_4
# 133 "data/maps/PetalburgWoods/scripts.pory"
	case 7, PetalburgWoods_EventScript_RandomizeEncounterVar6_5
# 136 "data/maps/PetalburgWoods/scripts.pory"
	case 8, PetalburgWoods_EventScript_RandomizeEncounterVar6_6
	return

PetalburgWoods_EventScript_RandomizeEncounterVar6_2:
# 123 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( WURMPLE )
# 124 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_6, 0
	return

PetalburgWoods_EventScript_RandomizeEncounterVar6_3:
# 127 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( TAILLOW )
# 128 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_6, 1
	return

PetalburgWoods_EventScript_RandomizeEncounterVar6_4:
# 131 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( SHROOMISH )
# 132 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_6, 2
	return

PetalburgWoods_EventScript_RandomizeEncounterVar6_5:
# 134 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( SEEDOT )
# 135 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_6, 3
	return

PetalburgWoods_EventScript_RandomizeEncounterVar6_6:
# 137 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( SMOLIV )
# 138 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_6, 4
	return


PetalburgWoods_EventScript_EncounterVar6::
# 143 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 144 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_TEMP_6
# 145 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar6_3
# 156 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar6_4
# 167 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar6_5
# 178 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVar6_6
# 189 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_EncounterVar6_7
PetalburgWoods_EventScript_EncounterVar6_1:
# 201 "data/maps/PetalburgWoods/scripts.pory"
	release
	return

PetalburgWoods_EventScript_EncounterVar6_3:
# 146 "data/maps/PetalburgWoods/scripts.pory"
	random 4
# 147 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 148 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar6_9
# 150 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar6_10
# 151 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar6_10
# 153 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVar6_11
	goto PetalburgWoods_EventScript_EncounterVar6_1

PetalburgWoods_EventScript_EncounterVar6_4:
# 157 "data/maps/PetalburgWoods/scripts.pory"
	random 4
# 158 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 159 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar6_13
# 161 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar6_14
# 162 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar6_14
# 164 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVar6_15
	goto PetalburgWoods_EventScript_EncounterVar6_1

PetalburgWoods_EventScript_EncounterVar6_5:
# 168 "data/maps/PetalburgWoods/scripts.pory"
	random 4
# 169 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 170 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar6_17
# 172 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar6_18
# 173 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar6_18
# 175 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVar6_19
	goto PetalburgWoods_EventScript_EncounterVar6_1

PetalburgWoods_EventScript_EncounterVar6_6:
# 179 "data/maps/PetalburgWoods/scripts.pory"
	random 4
# 180 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 181 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar6_21
# 183 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar6_22
# 184 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar6_22
# 186 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVar6_23
	goto PetalburgWoods_EventScript_EncounterVar6_1

PetalburgWoods_EventScript_EncounterVar6_7:
# 190 "data/maps/PetalburgWoods/scripts.pory"
	random 4
# 191 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 192 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar6_25
# 194 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar6_26
# 195 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar6_26
# 197 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVar6_27
	goto PetalburgWoods_EventScript_EncounterVar6_1

PetalburgWoods_EventScript_EncounterVar6_9:
# 149 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 4, FLAG_TEMP_6
	goto PetalburgWoods_EventScript_EncounterVar6_1

PetalburgWoods_EventScript_EncounterVar6_10:
# 152 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 5, FLAG_TEMP_6
	goto PetalburgWoods_EventScript_EncounterVar6_1

PetalburgWoods_EventScript_EncounterVar6_11:
# 154 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 6, FLAG_TEMP_6
	goto PetalburgWoods_EventScript_EncounterVar6_1

PetalburgWoods_EventScript_EncounterVar6_13:
# 160 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_TAILLOW, 4, FLAG_TEMP_6
	goto PetalburgWoods_EventScript_EncounterVar6_1

PetalburgWoods_EventScript_EncounterVar6_14:
# 163 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_TAILLOW, 5, FLAG_TEMP_6
	goto PetalburgWoods_EventScript_EncounterVar6_1

PetalburgWoods_EventScript_EncounterVar6_15:
# 165 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_TAILLOW, 6, FLAG_TEMP_6
	goto PetalburgWoods_EventScript_EncounterVar6_1

PetalburgWoods_EventScript_EncounterVar6_17:
# 171 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SHROOMISH, 4, FLAG_TEMP_6
	goto PetalburgWoods_EventScript_EncounterVar6_1

PetalburgWoods_EventScript_EncounterVar6_18:
# 174 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SHROOMISH, 5, FLAG_TEMP_6
	goto PetalburgWoods_EventScript_EncounterVar6_1

PetalburgWoods_EventScript_EncounterVar6_19:
# 176 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SHROOMISH, 6, FLAG_TEMP_6
	goto PetalburgWoods_EventScript_EncounterVar6_1

PetalburgWoods_EventScript_EncounterVar6_21:
# 182 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SEEDOT, 4, FLAG_TEMP_6
	goto PetalburgWoods_EventScript_EncounterVar6_1

PetalburgWoods_EventScript_EncounterVar6_22:
# 185 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SEEDOT, 5, FLAG_TEMP_6
	goto PetalburgWoods_EventScript_EncounterVar6_1

PetalburgWoods_EventScript_EncounterVar6_23:
# 187 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SEEDOT, 6, FLAG_TEMP_6
	goto PetalburgWoods_EventScript_EncounterVar6_1

PetalburgWoods_EventScript_EncounterVar6_25:
# 193 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SMOLIV, 4, FLAG_TEMP_6
	goto PetalburgWoods_EventScript_EncounterVar6_1

PetalburgWoods_EventScript_EncounterVar6_26:
# 196 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SMOLIV, 5, FLAG_TEMP_6
	goto PetalburgWoods_EventScript_EncounterVar6_1

PetalburgWoods_EventScript_EncounterVar6_27:
# 198 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SMOLIV, 6, FLAG_TEMP_6
	goto PetalburgWoods_EventScript_EncounterVar6_1


PetalburgWoods_EventScript_RandomizeEncounterVar7::
# 205 "data/maps/PetalburgWoods/scripts.pory"
	random 10
# 206 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 207 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_RandomizeEncounterVar7_2
# 208 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_RandomizeEncounterVar7_2
# 211 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_RandomizeEncounterVar7_3
# 212 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_RandomizeEncounterVar7_3
# 215 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_RandomizeEncounterVar7_4
# 216 "data/maps/PetalburgWoods/scripts.pory"
	case 5, PetalburgWoods_EventScript_RandomizeEncounterVar7_4
# 219 "data/maps/PetalburgWoods/scripts.pory"
	case 6, PetalburgWoods_EventScript_RandomizeEncounterVar7_5
# 222 "data/maps/PetalburgWoods/scripts.pory"
	case 7, PetalburgWoods_EventScript_RandomizeEncounterVar7_6
# 225 "data/maps/PetalburgWoods/scripts.pory"
	case 8, PetalburgWoods_EventScript_RandomizeEncounterVar7_7
# 228 "data/maps/PetalburgWoods/scripts.pory"
	case 9, PetalburgWoods_EventScript_RandomizeEncounterVar7_8
	return

PetalburgWoods_EventScript_RandomizeEncounterVar7_2:
# 209 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( WURMPLE )
# 210 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_7, 0
	return

PetalburgWoods_EventScript_RandomizeEncounterVar7_3:
# 213 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( TAILLOW )
# 214 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_7, 1
	return

PetalburgWoods_EventScript_RandomizeEncounterVar7_4:
# 217 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( SHROOMISH )
# 218 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_7, 2
	return

PetalburgWoods_EventScript_RandomizeEncounterVar7_5:
# 220 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( SLAKOTH )
# 221 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_7, 3
	return

PetalburgWoods_EventScript_RandomizeEncounterVar7_6:
# 223 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( SEEDOT )
# 224 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_7, 4
	return

PetalburgWoods_EventScript_RandomizeEncounterVar7_7:
# 226 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( SMOLIV )
# 227 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_7, 5
	return

PetalburgWoods_EventScript_RandomizeEncounterVar7_8:
# 229 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( PICHU )
# 230 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_7, 6
	return


PetalburgWoods_EventScript_EncounterVar7::
# 235 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 236 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_TEMP_7
# 237 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar7_3
# 248 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar7_4
# 259 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar7_5
# 270 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVar7_6
# 281 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_EncounterVar7_7
# 292 "data/maps/PetalburgWoods/scripts.pory"
	case 5, PetalburgWoods_EventScript_EncounterVar7_8
# 303 "data/maps/PetalburgWoods/scripts.pory"
	case 6, PetalburgWoods_EventScript_EncounterVar7_9
PetalburgWoods_EventScript_EncounterVar7_1:
# 315 "data/maps/PetalburgWoods/scripts.pory"
	release
	return

PetalburgWoods_EventScript_EncounterVar7_3:
# 238 "data/maps/PetalburgWoods/scripts.pory"
	random 4
# 239 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 240 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar7_11
# 242 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar7_12
# 243 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar7_12
# 245 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVar7_13
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_4:
# 249 "data/maps/PetalburgWoods/scripts.pory"
	random 4
# 250 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 251 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar7_15
# 253 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar7_16
# 254 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar7_16
# 256 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVar7_17
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_5:
# 260 "data/maps/PetalburgWoods/scripts.pory"
	random 4
# 261 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 262 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar7_19
# 264 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar7_20
# 265 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar7_20
# 267 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVar7_21
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_6:
# 271 "data/maps/PetalburgWoods/scripts.pory"
	random 4
# 272 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 273 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar7_23
# 275 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar7_24
# 276 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar7_24
# 278 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVar7_25
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_7:
# 282 "data/maps/PetalburgWoods/scripts.pory"
	random 4
# 283 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 284 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar7_27
# 286 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar7_28
# 287 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar7_28
# 289 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVar7_29
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_8:
# 293 "data/maps/PetalburgWoods/scripts.pory"
	random 4
# 294 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 295 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar7_31
# 297 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar7_32
# 298 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar7_32
# 300 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVar7_33
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_9:
# 304 "data/maps/PetalburgWoods/scripts.pory"
	random 4
# 305 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 306 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar7_35
# 308 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar7_36
# 309 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar7_36
# 311 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVar7_37
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_11:
# 241 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 4, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_12:
# 244 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 5, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_13:
# 246 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 6, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_15:
# 252 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_TAILLOW, 4, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_16:
# 255 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_TAILLOW, 5, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_17:
# 257 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_TAILLOW, 6, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_19:
# 263 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SHROOMISH, 4, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_20:
# 266 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SHROOMISH, 5, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_21:
# 268 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SHROOMISH, 6, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_23:
# 274 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SLAKOTH, 4, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_24:
# 277 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SLAKOTH, 5, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_25:
# 279 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SLAKOTH, 6, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_27:
# 285 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SEEDOT, 4, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_28:
# 288 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SEEDOT, 5, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_29:
# 290 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SEEDOT, 6, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_31:
# 296 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SMOLIV, 4, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_32:
# 299 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SMOLIV, 5, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_33:
# 301 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SMOLIV, 6, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_35:
# 307 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_PICHU, 4, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_36:
# 310 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_PICHU, 5, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar7_1

PetalburgWoods_EventScript_EncounterVar7_37:
# 312 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_PICHU, 6, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar7_1


PetalburgWoods_EventScript_RandomizeEncounterVar8::
# 319 "data/maps/PetalburgWoods/scripts.pory"
	random 5
# 320 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 321 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_RandomizeEncounterVar8_2
# 322 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_RandomizeEncounterVar8_2
# 323 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_RandomizeEncounterVar8_2
# 326 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_RandomizeEncounterVar8_3
# 327 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_RandomizeEncounterVar8_3
	return

PetalburgWoods_EventScript_RandomizeEncounterVar8_2:
# 324 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( WURMPLE )
# 325 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_8, 0
	return

PetalburgWoods_EventScript_RandomizeEncounterVar8_3:
# 328 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( TAILLOW )
# 329 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_8, 1
	return


PetalburgWoods_EventScript_EncounterVar8::
# 334 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 335 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_TEMP_8
# 336 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar8_3
# 347 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar8_4
PetalburgWoods_EventScript_EncounterVar8_1:
# 359 "data/maps/PetalburgWoods/scripts.pory"
	release
	return

PetalburgWoods_EventScript_EncounterVar8_3:
# 337 "data/maps/PetalburgWoods/scripts.pory"
	random 4
# 338 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 339 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar8_6
# 341 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar8_7
# 342 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar8_7
# 344 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVar8_8
	goto PetalburgWoods_EventScript_EncounterVar8_1

PetalburgWoods_EventScript_EncounterVar8_4:
# 348 "data/maps/PetalburgWoods/scripts.pory"
	random 4
# 349 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 350 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar8_10
# 352 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar8_11
# 353 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar8_11
# 355 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVar8_12
	goto PetalburgWoods_EventScript_EncounterVar8_1

PetalburgWoods_EventScript_EncounterVar8_6:
# 340 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 4, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar8_1

PetalburgWoods_EventScript_EncounterVar8_7:
# 343 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 5, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar8_1

PetalburgWoods_EventScript_EncounterVar8_8:
# 345 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 6, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar8_1

PetalburgWoods_EventScript_EncounterVar8_10:
# 351 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_TAILLOW, 4, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar8_1

PetalburgWoods_EventScript_EncounterVar8_11:
# 354 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_TAILLOW, 5, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar8_1

PetalburgWoods_EventScript_EncounterVar8_12:
# 356 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_TAILLOW, 6, FLAG_TEMP_7
	goto PetalburgWoods_EventScript_EncounterVar8_1


PetalburgWoods_EventScript_RandomizeEncounterVar9::
# 363 "data/maps/PetalburgWoods/scripts.pory"
	random 9
# 364 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 365 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_RandomizeEncounterVar9_2
# 366 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_RandomizeEncounterVar9_2
# 367 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_RandomizeEncounterVar9_2
# 370 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_RandomizeEncounterVar9_3
# 371 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_RandomizeEncounterVar9_3
# 374 "data/maps/PetalburgWoods/scripts.pory"
	case 5, PetalburgWoods_EventScript_RandomizeEncounterVar9_4
# 375 "data/maps/PetalburgWoods/scripts.pory"
	case 6, PetalburgWoods_EventScript_RandomizeEncounterVar9_4
# 378 "data/maps/PetalburgWoods/scripts.pory"
	case 7, PetalburgWoods_EventScript_RandomizeEncounterVar9_5
# 381 "data/maps/PetalburgWoods/scripts.pory"
	case 8, PetalburgWoods_EventScript_RandomizeEncounterVar9_6
	return

PetalburgWoods_EventScript_RandomizeEncounterVar9_2:
# 368 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_9, OBJ_EVENT_GFX_SPECIES ( WURMPLE )
# 369 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_9, 0
	return

PetalburgWoods_EventScript_RandomizeEncounterVar9_3:
# 372 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_9, OBJ_EVENT_GFX_SPECIES ( TAILLOW )
# 373 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_9, 1
	return

PetalburgWoods_EventScript_RandomizeEncounterVar9_4:
# 376 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_9, OBJ_EVENT_GFX_SPECIES ( SHROOMISH )
# 377 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_9, 2
	return

PetalburgWoods_EventScript_RandomizeEncounterVar9_5:
# 379 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_9, OBJ_EVENT_GFX_SPECIES ( SEEDOT )
# 380 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_9, 3
	return

PetalburgWoods_EventScript_RandomizeEncounterVar9_6:
# 382 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_9, OBJ_EVENT_GFX_SPECIES ( SMOLIV )
# 383 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_9, 4
	return


PetalburgWoods_EventScript_EncounterVar9::
# 388 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 389 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_TEMP_9
# 390 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar9_3
# 402 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar9_4
# 414 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar9_5
# 426 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVar9_6
# 438 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_EncounterVar9_7
PetalburgWoods_EventScript_EncounterVar9_1:
# 451 "data/maps/PetalburgWoods/scripts.pory"
	release
	return

PetalburgWoods_EventScript_EncounterVar9_3:
# 391 "data/maps/PetalburgWoods/scripts.pory"
	random 5
# 392 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 393 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar9_9
# 395 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar9_10
# 396 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar9_10
# 398 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVar9_11
# 399 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_EncounterVar9_11
	goto PetalburgWoods_EventScript_EncounterVar9_1

PetalburgWoods_EventScript_EncounterVar9_4:
# 403 "data/maps/PetalburgWoods/scripts.pory"
	random 5
# 404 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 405 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar9_13
# 407 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar9_14
# 408 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar9_14
# 410 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVar9_15
# 411 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_EncounterVar9_15
	goto PetalburgWoods_EventScript_EncounterVar9_1

PetalburgWoods_EventScript_EncounterVar9_5:
# 415 "data/maps/PetalburgWoods/scripts.pory"
	random 5
# 416 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 417 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar9_17
# 419 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar9_18
# 420 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar9_18
# 422 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVar9_19
# 423 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_EncounterVar9_19
	goto PetalburgWoods_EventScript_EncounterVar9_1

PetalburgWoods_EventScript_EncounterVar9_6:
# 427 "data/maps/PetalburgWoods/scripts.pory"
	random 5
# 428 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 429 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar9_21
# 431 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar9_22
# 432 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar9_22
# 434 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVar9_23
# 435 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_EncounterVar9_23
	goto PetalburgWoods_EventScript_EncounterVar9_1

PetalburgWoods_EventScript_EncounterVar9_7:
# 439 "data/maps/PetalburgWoods/scripts.pory"
	random 5
# 440 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 441 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVar9_25
# 443 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVar9_26
# 444 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVar9_26
# 446 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVar9_27
# 447 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_EncounterVar9_27
	goto PetalburgWoods_EventScript_EncounterVar9_1

PetalburgWoods_EventScript_EncounterVar9_9:
# 394 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 4, FLAG_TEMP_9
	goto PetalburgWoods_EventScript_EncounterVar9_1

PetalburgWoods_EventScript_EncounterVar9_10:
# 397 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 5, FLAG_TEMP_9
	goto PetalburgWoods_EventScript_EncounterVar9_1

PetalburgWoods_EventScript_EncounterVar9_11:
# 400 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 6, FLAG_TEMP_9
	goto PetalburgWoods_EventScript_EncounterVar9_1

PetalburgWoods_EventScript_EncounterVar9_13:
# 406 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_TAILLOW, 4, FLAG_TEMP_9
	goto PetalburgWoods_EventScript_EncounterVar9_1

PetalburgWoods_EventScript_EncounterVar9_14:
# 409 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_TAILLOW, 5, FLAG_TEMP_9
	goto PetalburgWoods_EventScript_EncounterVar9_1

PetalburgWoods_EventScript_EncounterVar9_15:
# 412 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_TAILLOW, 6, FLAG_TEMP_9
	goto PetalburgWoods_EventScript_EncounterVar9_1

PetalburgWoods_EventScript_EncounterVar9_17:
# 418 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SHROOMISH, 4, FLAG_TEMP_9
	goto PetalburgWoods_EventScript_EncounterVar9_1

PetalburgWoods_EventScript_EncounterVar9_18:
# 421 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SHROOMISH, 5, FLAG_TEMP_9
	goto PetalburgWoods_EventScript_EncounterVar9_1

PetalburgWoods_EventScript_EncounterVar9_19:
# 424 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SHROOMISH, 6, FLAG_TEMP_9
	goto PetalburgWoods_EventScript_EncounterVar9_1

PetalburgWoods_EventScript_EncounterVar9_21:
# 430 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SEEDOT, 4, FLAG_TEMP_9
	goto PetalburgWoods_EventScript_EncounterVar9_1

PetalburgWoods_EventScript_EncounterVar9_22:
# 433 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SEEDOT, 5, FLAG_TEMP_9
	goto PetalburgWoods_EventScript_EncounterVar9_1

PetalburgWoods_EventScript_EncounterVar9_23:
# 436 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SEEDOT, 6, FLAG_TEMP_9
	goto PetalburgWoods_EventScript_EncounterVar9_1

PetalburgWoods_EventScript_EncounterVar9_25:
# 442 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SMOLIV, 4, FLAG_TEMP_9
	goto PetalburgWoods_EventScript_EncounterVar9_1

PetalburgWoods_EventScript_EncounterVar9_26:
# 445 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SMOLIV, 5, FLAG_TEMP_9
	goto PetalburgWoods_EventScript_EncounterVar9_1

PetalburgWoods_EventScript_EncounterVar9_27:
# 448 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SMOLIV, 6, FLAG_TEMP_9
	goto PetalburgWoods_EventScript_EncounterVar9_1


PetalburgWoods_EventScript_RandomizeEncounterVarA::
# 455 "data/maps/PetalburgWoods/scripts.pory"
	random 10
# 456 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 457 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_RandomizeEncounterVarA_2
# 458 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_RandomizeEncounterVarA_2
# 461 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_RandomizeEncounterVarA_3
# 462 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_RandomizeEncounterVarA_3
# 465 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_RandomizeEncounterVarA_4
# 466 "data/maps/PetalburgWoods/scripts.pory"
	case 5, PetalburgWoods_EventScript_RandomizeEncounterVarA_4
# 469 "data/maps/PetalburgWoods/scripts.pory"
	case 6, PetalburgWoods_EventScript_RandomizeEncounterVarA_5
# 472 "data/maps/PetalburgWoods/scripts.pory"
	case 7, PetalburgWoods_EventScript_RandomizeEncounterVarA_6
# 475 "data/maps/PetalburgWoods/scripts.pory"
	case 8, PetalburgWoods_EventScript_RandomizeEncounterVarA_7
# 478 "data/maps/PetalburgWoods/scripts.pory"
	case 9, PetalburgWoods_EventScript_RandomizeEncounterVarA_8
	return

PetalburgWoods_EventScript_RandomizeEncounterVarA_2:
# 459 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SPECIES ( WURMPLE )
# 460 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_A, 0
	return

PetalburgWoods_EventScript_RandomizeEncounterVarA_3:
# 463 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SPECIES ( TAILLOW )
# 464 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_A, 1
	return

PetalburgWoods_EventScript_RandomizeEncounterVarA_4:
# 467 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SPECIES ( SHROOMISH )
# 468 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_A, 2
	return

PetalburgWoods_EventScript_RandomizeEncounterVarA_5:
# 470 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SPECIES ( SLAKOTH )
# 471 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_A, 3
	return

PetalburgWoods_EventScript_RandomizeEncounterVarA_6:
# 473 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SPECIES ( SEEDOT )
# 474 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_A, 4
	return

PetalburgWoods_EventScript_RandomizeEncounterVarA_7:
# 476 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SPECIES ( SMOLIV )
# 477 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_A, 5
	return

PetalburgWoods_EventScript_RandomizeEncounterVarA_8:
# 479 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SPECIES ( PICHU )
# 480 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_A, 6
	return


PetalburgWoods_EventScript_EncounterVarA::
# 485 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 486 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_TEMP_A
# 487 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVarA_3
# 499 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVarA_4
# 511 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVarA_5
# 523 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVarA_6
# 535 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_EncounterVarA_7
# 547 "data/maps/PetalburgWoods/scripts.pory"
	case 5, PetalburgWoods_EventScript_EncounterVarA_8
# 559 "data/maps/PetalburgWoods/scripts.pory"
	case 6, PetalburgWoods_EventScript_EncounterVarA_9
PetalburgWoods_EventScript_EncounterVarA_1:
# 572 "data/maps/PetalburgWoods/scripts.pory"
	release
	return

PetalburgWoods_EventScript_EncounterVarA_3:
# 488 "data/maps/PetalburgWoods/scripts.pory"
	random 5
# 489 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 490 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVarA_11
# 492 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVarA_12
# 493 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVarA_12
# 495 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVarA_13
# 496 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_EncounterVarA_13
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_4:
# 500 "data/maps/PetalburgWoods/scripts.pory"
	random 5
# 501 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 502 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVarA_15
# 504 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVarA_16
# 505 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVarA_16
# 507 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVarA_17
# 508 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_EncounterVarA_17
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_5:
# 512 "data/maps/PetalburgWoods/scripts.pory"
	random 5
# 513 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 514 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVarA_19
# 516 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVarA_20
# 517 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVarA_20
# 519 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVarA_21
# 520 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_EncounterVarA_21
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_6:
# 524 "data/maps/PetalburgWoods/scripts.pory"
	random 5
# 525 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 526 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVarA_23
# 528 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVarA_24
# 529 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVarA_24
# 531 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVarA_25
# 532 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_EncounterVarA_25
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_7:
# 536 "data/maps/PetalburgWoods/scripts.pory"
	random 5
# 537 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 538 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVarA_27
# 540 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVarA_28
# 541 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVarA_28
# 543 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVarA_29
# 544 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_EncounterVarA_29
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_8:
# 548 "data/maps/PetalburgWoods/scripts.pory"
	random 5
# 549 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 550 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVarA_31
# 552 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVarA_32
# 553 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVarA_32
# 555 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVarA_33
# 556 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_EncounterVarA_33
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_9:
# 560 "data/maps/PetalburgWoods/scripts.pory"
	random 5
# 561 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 562 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVarA_35
# 564 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVarA_36
# 565 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVarA_36
# 567 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVarA_37
# 568 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_EncounterVarA_37
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_11:
# 491 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 4, FLAG_TEMP_A
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_12:
# 494 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 5, FLAG_TEMP_A
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_13:
# 497 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 6, FLAG_TEMP_A
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_15:
# 503 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_TAILLOW, 4, FLAG_TEMP_A
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_16:
# 506 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_TAILLOW, 5, FLAG_TEMP_A
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_17:
# 509 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_TAILLOW, 6, FLAG_TEMP_A
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_19:
# 515 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SHROOMISH, 4, FLAG_TEMP_A
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_20:
# 518 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SHROOMISH, 5, FLAG_TEMP_A
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_21:
# 521 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SHROOMISH, 6, FLAG_TEMP_A
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_23:
# 527 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SLAKOTH, 4, FLAG_TEMP_A
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_24:
# 530 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SLAKOTH, 5, FLAG_TEMP_A
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_25:
# 533 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SLAKOTH, 6, FLAG_TEMP_A
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_27:
# 539 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SEEDOT, 4, FLAG_TEMP_A
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_28:
# 542 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SEEDOT, 5, FLAG_TEMP_A
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_29:
# 545 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SEEDOT, 6, FLAG_TEMP_A
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_31:
# 551 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SMOLIV, 4, FLAG_TEMP_A
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_32:
# 554 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SMOLIV, 5, FLAG_TEMP_A
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_33:
# 557 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SMOLIV, 6, FLAG_TEMP_A
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_35:
# 563 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_PICHU, 4, FLAG_TEMP_A
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_36:
# 566 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_PICHU, 5, FLAG_TEMP_A
	goto PetalburgWoods_EventScript_EncounterVarA_1

PetalburgWoods_EventScript_EncounterVarA_37:
# 569 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_PICHU, 6, FLAG_TEMP_A
	goto PetalburgWoods_EventScript_EncounterVarA_1


PetalburgWoods_EventScript_RandomizeEncounterVarB::
# 576 "data/maps/PetalburgWoods/scripts.pory"
	random 10
# 577 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 578 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_RandomizeEncounterVarB_2
# 579 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_RandomizeEncounterVarB_2
# 582 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_RandomizeEncounterVarB_3
# 583 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_RandomizeEncounterVarB_3
# 586 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_RandomizeEncounterVarB_4
# 587 "data/maps/PetalburgWoods/scripts.pory"
	case 5, PetalburgWoods_EventScript_RandomizeEncounterVarB_4
# 590 "data/maps/PetalburgWoods/scripts.pory"
	case 6, PetalburgWoods_EventScript_RandomizeEncounterVarB_5
# 593 "data/maps/PetalburgWoods/scripts.pory"
	case 7, PetalburgWoods_EventScript_RandomizeEncounterVarB_6
# 596 "data/maps/PetalburgWoods/scripts.pory"
	case 8, PetalburgWoods_EventScript_RandomizeEncounterVarB_7
# 599 "data/maps/PetalburgWoods/scripts.pory"
	case 9, PetalburgWoods_EventScript_RandomizeEncounterVarB_8
	return

PetalburgWoods_EventScript_RandomizeEncounterVarB_2:
# 580 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_SPECIES ( WURMPLE )
# 581 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_B, 0
	return

PetalburgWoods_EventScript_RandomizeEncounterVarB_3:
# 584 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_SPECIES ( TAILLOW )
# 585 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_B, 1
	return

PetalburgWoods_EventScript_RandomizeEncounterVarB_4:
# 588 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_SPECIES ( SHROOMISH )
# 589 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_B, 2
	return

PetalburgWoods_EventScript_RandomizeEncounterVarB_5:
# 591 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_SPECIES ( SLAKOTH )
# 592 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_B, 3
	return

PetalburgWoods_EventScript_RandomizeEncounterVarB_6:
# 594 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_SPECIES ( SEEDOT )
# 595 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_B, 4
	return

PetalburgWoods_EventScript_RandomizeEncounterVarB_7:
# 597 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_SPECIES ( SMOLIV )
# 598 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_B, 5
	return

PetalburgWoods_EventScript_RandomizeEncounterVarB_8:
# 600 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_OBJ_GFX_ID_B, OBJ_EVENT_GFX_SPECIES ( PICHU )
# 601 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_TEMP_B, 6
	return


PetalburgWoods_EventScript_EncounterVarB::
# 606 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 607 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_TEMP_B
# 608 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVarB_3
# 620 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVarB_4
# 632 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVarB_5
# 644 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVarB_6
# 656 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_EncounterVarB_7
# 668 "data/maps/PetalburgWoods/scripts.pory"
	case 5, PetalburgWoods_EventScript_EncounterVarB_8
# 680 "data/maps/PetalburgWoods/scripts.pory"
	case 6, PetalburgWoods_EventScript_EncounterVarB_9
PetalburgWoods_EventScript_EncounterVarB_1:
# 693 "data/maps/PetalburgWoods/scripts.pory"
	release
	return

PetalburgWoods_EventScript_EncounterVarB_3:
# 609 "data/maps/PetalburgWoods/scripts.pory"
	random 5
# 610 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 611 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVarB_11
# 613 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVarB_12
# 614 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVarB_12
# 616 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVarB_13
# 617 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_EncounterVarB_13
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_4:
# 621 "data/maps/PetalburgWoods/scripts.pory"
	random 5
# 622 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 623 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVarB_15
# 625 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVarB_16
# 626 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVarB_16
# 628 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVarB_17
# 629 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_EncounterVarB_17
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_5:
# 633 "data/maps/PetalburgWoods/scripts.pory"
	random 5
# 634 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 635 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVarB_19
# 637 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVarB_20
# 638 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVarB_20
# 640 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVarB_21
# 641 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_EncounterVarB_21
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_6:
# 645 "data/maps/PetalburgWoods/scripts.pory"
	random 5
# 646 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 647 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVarB_23
# 649 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVarB_24
# 650 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVarB_24
# 652 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVarB_25
# 653 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_EncounterVarB_25
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_7:
# 657 "data/maps/PetalburgWoods/scripts.pory"
	random 5
# 658 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 659 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVarB_27
# 661 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVarB_28
# 662 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVarB_28
# 664 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVarB_29
# 665 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_EncounterVarB_29
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_8:
# 669 "data/maps/PetalburgWoods/scripts.pory"
	random 5
# 670 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 671 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVarB_31
# 673 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVarB_32
# 674 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVarB_32
# 676 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVarB_33
# 677 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_EncounterVarB_33
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_9:
# 681 "data/maps/PetalburgWoods/scripts.pory"
	random 5
# 682 "data/maps/PetalburgWoods/scripts.pory"
	switch VAR_RESULT
# 683 "data/maps/PetalburgWoods/scripts.pory"
	case 0, PetalburgWoods_EventScript_EncounterVarB_35
# 685 "data/maps/PetalburgWoods/scripts.pory"
	case 1, PetalburgWoods_EventScript_EncounterVarB_36
# 686 "data/maps/PetalburgWoods/scripts.pory"
	case 2, PetalburgWoods_EventScript_EncounterVarB_36
# 688 "data/maps/PetalburgWoods/scripts.pory"
	case 3, PetalburgWoods_EventScript_EncounterVarB_37
# 689 "data/maps/PetalburgWoods/scripts.pory"
	case 4, PetalburgWoods_EventScript_EncounterVarB_37
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_11:
# 612 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 4, FLAG_TEMP_B
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_12:
# 615 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 5, FLAG_TEMP_B
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_13:
# 618 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_WURMPLE, 6, FLAG_TEMP_B
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_15:
# 624 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_TAILLOW, 4, FLAG_TEMP_B
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_16:
# 627 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_TAILLOW, 5, FLAG_TEMP_B
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_17:
# 630 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_TAILLOW, 6, FLAG_TEMP_B
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_19:
# 636 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SHROOMISH, 4, FLAG_TEMP_B
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_20:
# 639 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SHROOMISH, 5, FLAG_TEMP_B
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_21:
# 642 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SHROOMISH, 6, FLAG_TEMP_B
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_23:
# 648 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SLAKOTH, 4, FLAG_TEMP_B
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_24:
# 651 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SLAKOTH, 5, FLAG_TEMP_B
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_25:
# 654 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SLAKOTH, 6, FLAG_TEMP_B
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_27:
# 660 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SEEDOT, 4, FLAG_TEMP_B
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_28:
# 663 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SEEDOT, 5, FLAG_TEMP_B
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_29:
# 666 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SEEDOT, 6, FLAG_TEMP_B
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_31:
# 672 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SMOLIV, 4, FLAG_TEMP_B
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_32:
# 675 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SMOLIV, 5, FLAG_TEMP_B
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_33:
# 678 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_SMOLIV, 6, FLAG_TEMP_B
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_35:
# 684 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_PICHU, 4, FLAG_TEMP_B
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_36:
# 687 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_PICHU, 5, FLAG_TEMP_B
	goto PetalburgWoods_EventScript_EncounterVarB_1

PetalburgWoods_EventScript_EncounterVarB_37:
# 690 "data/maps/PetalburgWoods/scripts.pory"
	dowildencounter SPECIES_PICHU, 6, FLAG_TEMP_B
	goto PetalburgWoods_EventScript_EncounterVarB_1


# 696 "data/maps/PetalburgWoods/scripts.pory"

# 697 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_GRUNT, 3
# 698 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 4
# 699 "data/maps/PetalburgWoods/scripts.pory"

# 700 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 701 "data/maps/PetalburgWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgWoods_OnTransition
# 702 "data/maps/PetalburgWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PetalburgWoods_OnResume
# 703 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 704 "data/maps/PetalburgWoods/scripts.pory"

# 705 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 706 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 707 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 708 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 709 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 710 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 711 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 712 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 713 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 714 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 715 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 716 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 717 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 718 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 719 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 720 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 721 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 722 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 723 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 724 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 725 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 726 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 727 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 728 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 729 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 730 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 731 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 732 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 733 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 734 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 735 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 736 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 737 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 738 "data/maps/PetalburgWoods/scripts.pory"
	end
# 739 "data/maps/PetalburgWoods/scripts.pory"

# 740 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 741 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 742 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 743 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 744 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 745 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 746 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 747 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 748 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 749 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 750 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 751 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 752 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 753 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 754 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 755 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 756 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 757 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 758 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 759 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 760 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 761 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 762 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 763 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 764 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 765 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 766 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 767 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 768 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 769 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 770 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 771 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 772 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 773 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 774 "data/maps/PetalburgWoods/scripts.pory"
	end
# 775 "data/maps/PetalburgWoods/scripts.pory"

# 776 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 777 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 778 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 779 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 780 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 781 "data/maps/PetalburgWoods/scripts.pory"
	return
# 782 "data/maps/PetalburgWoods/scripts.pory"

# 783 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 784 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 785 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 786 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 787 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 788 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_GRUNT
# 789 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 790 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 791 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 792 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 793 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 794 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 795 "data/maps/PetalburgWoods/scripts.pory"
	end
# 796 "data/maps/PetalburgWoods/scripts.pory"

# 797 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 798 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 799 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 800 "data/maps/PetalburgWoods/scripts.pory"
	end
# 801 "data/maps/PetalburgWoods/scripts.pory"

# 802 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 803 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 804 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 805 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 806 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 807 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 808 "data/maps/PetalburgWoods/scripts.pory"
	return
# 809 "data/maps/PetalburgWoods/scripts.pory"

# 810 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 811 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 812 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 813 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 814 "data/maps/PetalburgWoods/scripts.pory"
	end
# 815 "data/maps/PetalburgWoods/scripts.pory"

# 816 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 817 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 818 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 819 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 820 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 821 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 822 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 823 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 824 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 825 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 826 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 827 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 828 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 829 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 830 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 831 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 832 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 833 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 834 "data/maps/PetalburgWoods/scripts.pory"

# 835 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 836 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 837 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 838 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 839 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 840 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 841 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 842 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 843 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 844 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 845 "data/maps/PetalburgWoods/scripts.pory"

# 846 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 847 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 848 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 849 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 850 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 851 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 852 "data/maps/PetalburgWoods/scripts.pory"

# 853 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 854 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 855 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 856 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 857 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 858 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 859 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 860 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 861 "data/maps/PetalburgWoods/scripts.pory"

# 862 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 863 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 864 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 865 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 866 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 867 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 868 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 869 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 870 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 871 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 872 "data/maps/PetalburgWoods/scripts.pory"

# 873 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 874 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 875 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 876 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 877 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 878 "data/maps/PetalburgWoods/scripts.pory"

# 879 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 880 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 881 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 882 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 883 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 884 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 885 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 886 "data/maps/PetalburgWoods/scripts.pory"

# 887 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 888 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 889 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 890 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 891 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 892 "data/maps/PetalburgWoods/scripts.pory"

# 893 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 894 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 895 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 896 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 897 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 898 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 899 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 900 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 901 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 902 "data/maps/PetalburgWoods/scripts.pory"

# 903 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 904 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 905 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 906 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 907 "data/maps/PetalburgWoods/scripts.pory"

# 908 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 909 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 910 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 911 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 912 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 913 "data/maps/PetalburgWoods/scripts.pory"

# 914 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 915 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 916 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 917 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 918 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 919 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 920 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 921 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 922 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 923 "data/maps/PetalburgWoods/scripts.pory"

# 924 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 925 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 926 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 927 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 928 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 929 "data/maps/PetalburgWoods/scripts.pory"

# 930 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 931 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 932 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 933 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 934 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 935 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 936 "data/maps/PetalburgWoods/scripts.pory"

# 937 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 938 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 939 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 940 "data/maps/PetalburgWoods/scripts.pory"

# 941 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 942 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 943 "data/maps/PetalburgWoods/scripts.pory"
	end
# 944 "data/maps/PetalburgWoods/scripts.pory"

# 945 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 946 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 947 "data/maps/PetalburgWoods/scripts.pory"
	end
# 948 "data/maps/PetalburgWoods/scripts.pory"

# 949 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 950 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 951 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 952 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
# 953 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 954 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 955 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 956 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 957 "data/maps/PetalburgWoods/scripts.pory"
	release
# 958 "data/maps/PetalburgWoods/scripts.pory"
	end
# 959 "data/maps/PetalburgWoods/scripts.pory"

# 960 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 961 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 962 "data/maps/PetalburgWoods/scripts.pory"
	release
# 963 "data/maps/PetalburgWoods/scripts.pory"
	end
# 964 "data/maps/PetalburgWoods/scripts.pory"

# 965 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 966 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 967 "data/maps/PetalburgWoods/scripts.pory"
	end
# 968 "data/maps/PetalburgWoods/scripts.pory"

# 969 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 970 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 971 "data/maps/PetalburgWoods/scripts.pory"
	end
# 972 "data/maps/PetalburgWoods/scripts.pory"

# 973 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 974 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 975 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 976 "data/maps/PetalburgWoods/scripts.pory"
	end
# 977 "data/maps/PetalburgWoods/scripts.pory"

# 978 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 979 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 980 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 981 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 982 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 983 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 984 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 985 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 986 "data/maps/PetalburgWoods/scripts.pory"
	release
# 987 "data/maps/PetalburgWoods/scripts.pory"
	end
# 988 "data/maps/PetalburgWoods/scripts.pory"

# 989 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 990 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 991 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 992 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 993 "data/maps/PetalburgWoods/scripts.pory"
	release
# 994 "data/maps/PetalburgWoods/scripts.pory"
	end
# 995 "data/maps/PetalburgWoods/scripts.pory"

# 996 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 997 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 998 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 999 "data/maps/PetalburgWoods/scripts.pory"
	release
# 1000 "data/maps/PetalburgWoods/scripts.pory"
	end
# 1001 "data/maps/PetalburgWoods/scripts.pory"

# 1002 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 1003 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 1004 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 1005 "data/maps/PetalburgWoods/scripts.pory"
	release
# 1006 "data/maps/PetalburgWoods/scripts.pory"
	end
# 1007 "data/maps/PetalburgWoods/scripts.pory"

# 1008 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 1009 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 1010 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 1011 "data/maps/PetalburgWoods/scripts.pory"
	release
# 1012 "data/maps/PetalburgWoods/scripts.pory"
	end
# 1013 "data/maps/PetalburgWoods/scripts.pory"

# 1014 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 1015 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 1016 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 1017 "data/maps/PetalburgWoods/scripts.pory"
	end
# 1018 "data/maps/PetalburgWoods/scripts.pory"

# 1019 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 1020 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
# 1021 "data/maps/PetalburgWoods/scripts.pory"
	.string "Not a one to be found…$"
# 1022 "data/maps/PetalburgWoods/scripts.pory"

# 1023 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 1024 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you seen any POKéMON\n"
# 1025 "data/maps/PetalburgWoods/scripts.pory"
	.string "called SHROOMISH around here?\p"
# 1026 "data/maps/PetalburgWoods/scripts.pory"
	.string "I really love that POKéMON.$"
# 1027 "data/maps/PetalburgWoods/scripts.pory"

# 1028 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 1029 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
# 1030 "data/maps/PetalburgWoods/scripts.pory"
	.string "had to dawdle in PETALBURG WOODS\l"
# 1031 "data/maps/PetalburgWoods/scripts.pory"
	.string "forever, didn't you?\p"
# 1032 "data/maps/PetalburgWoods/scripts.pory"
	.string "I got sick of waiting, so here I am!$"
# 1033 "data/maps/PetalburgWoods/scripts.pory"

# 1034 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 1035 "data/maps/PetalburgWoods/scripts.pory"
	.string "You! DEVON RESEARCHER!\p"
# 1036 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hand over those papers!$"
# 1037 "data/maps/PetalburgWoods/scripts.pory"

# 1038 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 1039 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 1040 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're a POKéMON TRAINER, aren't you?\n"
# 1041 "data/maps/PetalburgWoods/scripts.pory"
	.string "You've got to help me, please!$"
# 1042 "data/maps/PetalburgWoods/scripts.pory"

# 1043 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 1044 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
# 1045 "data/maps/PetalburgWoods/scripts.pory"
	.string "What, you're going to protect him?\p"
# 1046 "data/maps/PetalburgWoods/scripts.pory"
	.string "No one who crosses TEAM AQUA\n"
# 1047 "data/maps/PetalburgWoods/scripts.pory"
	.string "gets any mercy, not even a kid!\p"
# 1048 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me!$"
# 1049 "data/maps/PetalburgWoods/scripts.pory"

# 1050 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 1051 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"
# 1052 "data/maps/PetalburgWoods/scripts.pory"

# 1053 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 1054 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
# 1055 "data/maps/PetalburgWoods/scripts.pory"
	.string "meddling with TEAM AQUA!\l"
# 1056 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me again!\p"
# 1057 "data/maps/PetalburgWoods/scripts.pory"
	.string "I wish I could say that, but I'm out of\n"
# 1058 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON…\p"
# 1059 "data/maps/PetalburgWoods/scripts.pory"
	.string "And, hey, we of TEAM AQUA are also\n"
# 1060 "data/maps/PetalburgWoods/scripts.pory"
	.string "after something in RUSTBORO.\p"
# 1061 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll let you go today!$"
# 1062 "data/maps/PetalburgWoods/scripts.pory"

# 1063 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 1064 "data/maps/PetalburgWoods/scripts.pory"
	.string "Whew…\n"
# 1065 "data/maps/PetalburgWoods/scripts.pory"
	.string "That was awfully close!\p"
# 1066 "data/maps/PetalburgWoods/scripts.pory"
	.string "Thanks to you, he didn't rob me of\n"
# 1067 "data/maps/PetalburgWoods/scripts.pory"
	.string "these important papers.\p"
# 1068 "data/maps/PetalburgWoods/scripts.pory"
	.string "I know, I'll give you a GREAT BALL as\n"
# 1069 "data/maps/PetalburgWoods/scripts.pory"
	.string "my thanks!$"
# 1070 "data/maps/PetalburgWoods/scripts.pory"

# 1071 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 1072 "data/maps/PetalburgWoods/scripts.pory"
	.string "Didn't that TEAM AQUA thug say\n"
# 1073 "data/maps/PetalburgWoods/scripts.pory"
	.string "they were after something in\l"
# 1074 "data/maps/PetalburgWoods/scripts.pory"
	.string "RUSTBORO, too?$"
# 1075 "data/maps/PetalburgWoods/scripts.pory"

# 1076 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 1077 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
# 1078 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be wasting time!$"
# 1079 "data/maps/PetalburgWoods/scripts.pory"

# 1080 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 1081 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
# 1082 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 1083 "data/maps/PetalburgWoods/scripts.pory"

# 1084 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 1085 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
# 1086 "data/maps/PetalburgWoods/scripts.pory"
	.string "Go, go, go!\n"
# 1087 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON team!$"
# 1088 "data/maps/PetalburgWoods/scripts.pory"

# 1089 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 1090 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these POKéMON,\n"
# 1091 "data/maps/PetalburgWoods/scripts.pory"
	.string "but I couldn't win…$"
# 1092 "data/maps/PetalburgWoods/scripts.pory"

# 1093 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 1094 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
# 1095 "data/maps/PetalburgWoods/scripts.pory"
	.string "Now I'm out of POKé BALLS.$"
# 1096 "data/maps/PetalburgWoods/scripts.pory"

# 1097 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 1098 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take BUG POKéMON to school,\n"
# 1099 "data/maps/PetalburgWoods/scripts.pory"
	.string "you get to be instantly popular!$"
# 1100 "data/maps/PetalburgWoods/scripts.pory"

# 1101 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 1102 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 1103 "data/maps/PetalburgWoods/scripts.pory"

# 1104 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 1105 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big BUG POKéMON,\n"
# 1106 "data/maps/PetalburgWoods/scripts.pory"
	.string "people respect you for it.$"
# 1107 "data/maps/PetalburgWoods/scripts.pory"

# 1108 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 1109 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG\n"
# 1110 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 1111 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 1112 "data/maps/PetalburgWoods/scripts.pory"

# 1113 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 1114 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG \n"
# 1115 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 1116 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 1117 "data/maps/PetalburgWoods/scripts.pory"

# 1118 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 1119 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON have grown.\n"
# 1120 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll be popular again.$"
# 1121 "data/maps/PetalburgWoods/scripts.pory"

# 1122 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 1123 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 1124 "data/maps/PetalburgWoods/scripts.pory"

# 1125 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 1126 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
# 1127 "data/maps/PetalburgWoods/scripts.pory"
	.string "strong POKéMON, right?\l"
# 1128 "data/maps/PetalburgWoods/scripts.pory"
	.string "So, I've been training hard.$"
# 1129 "data/maps/PetalburgWoods/scripts.pory"

# 1130 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 1131 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
# 1132 "data/maps/PetalburgWoods/scripts.pory"
	.string "Your POKéMON doing okay?\p"
# 1133 "data/maps/PetalburgWoods/scripts.pory"
	.string "If your POKéMON are weak and you want\n"
# 1134 "data/maps/PetalburgWoods/scripts.pory"
	.string "to avoid battles, you should stay out\l"
# 1135 "data/maps/PetalburgWoods/scripts.pory"
	.string "of tall grass.$"
# 1136 "data/maps/PetalburgWoods/scripts.pory"

# 1137 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 1138 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
# 1139 "data/maps/PetalburgWoods/scripts.pory"
	.string "ground even if you can't see them.\p"
# 1140 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's why I always check where I'm\n"
# 1141 "data/maps/PetalburgWoods/scripts.pory"
	.string "walking.$"
# 1142 "data/maps/PetalburgWoods/scripts.pory"

# 1143 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 1144 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
# 1145 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's the BADGE from RUSTBORO GYM!\p"
# 1146 "data/maps/PetalburgWoods/scripts.pory"
	.string "You must be a TRAINER.\n"
# 1147 "data/maps/PetalburgWoods/scripts.pory"
	.string "You should try using this item.$"
# 1148 "data/maps/PetalburgWoods/scripts.pory"

# 1149 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation:
# 1150 "data/maps/PetalburgWoods/scripts.pory"
	.string "It's a MIRACLE SEED.\n"
# 1151 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON holds that item, its\l"
# 1152 "data/maps/PetalburgWoods/scripts.pory"
	.string "GRASS-type moves become stronger.\p"
# 1153 "data/maps/PetalburgWoods/scripts.pory"
	.string "Besides MIRACLE SEED, I think there are\n"
# 1154 "data/maps/PetalburgWoods/scripts.pory"
	.string "other convenient items for POKéMON\l"
# 1155 "data/maps/PetalburgWoods/scripts.pory"
	.string "to hold.$"
# 1156 "data/maps/PetalburgWoods/scripts.pory"

# 1157 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 1158 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 1159 "data/maps/PetalburgWoods/scripts.pory"
	.string "Any POKéMON that appears even once\n"
# 1160 "data/maps/PetalburgWoods/scripts.pory"
	.string "in a battle is awarded EXP Points.\p"
# 1161 "data/maps/PetalburgWoods/scripts.pory"
	.string "To raise a weak POKéMON, put it at the\n"
# 1162 "data/maps/PetalburgWoods/scripts.pory"
	.string "left of the team list.\p"
# 1163 "data/maps/PetalburgWoods/scripts.pory"
	.string "As soon as a battle starts, switch it\n"
# 1164 "data/maps/PetalburgWoods/scripts.pory"
	.string "out. It will earn EXP Points without\l"
# 1165 "data/maps/PetalburgWoods/scripts.pory"
	.string "being exposed to any harm.$"
# 1166 "data/maps/PetalburgWoods/scripts.pory"

# 1167 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 1168 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 1169 "data/maps/PetalburgWoods/scripts.pory"
	.string "In addition to Hit Points (HP), POKéMON\n"
# 1170 "data/maps/PetalburgWoods/scripts.pory"
	.string "have Power Points (PP) that are used to\l"
# 1171 "data/maps/PetalburgWoods/scripts.pory"
	.string "make moves during battle.\p"
# 1172 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON runs out of PP, it must be\n"
# 1173 "data/maps/PetalburgWoods/scripts.pory"
	.string "taken to a POKéMON CENTER.$"
