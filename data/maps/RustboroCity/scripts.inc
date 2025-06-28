RustboroCity_OnResume::
# 2 "data/maps/RustboroCity/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Common_EventScript_RemoveStaticPokemonEncounter
	return


RustboroCity_EventScript_RandomizeEncounters::
# 7 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_TEMP_5
# 8 "data/maps/RustboroCity/scripts.pory"
	random 10
# 9 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_lt RustboroCity_EventScript_RandomizeEncounters_2
RustboroCity_EventScript_RandomizeEncounters_1:
# 14 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_TEMP_6
# 15 "data/maps/RustboroCity/scripts.pory"
	random 10
# 16 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_lt RustboroCity_EventScript_RandomizeEncounters_5
RustboroCity_EventScript_RandomizeEncounters_4:
# 21 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_TEMP_7
# 22 "data/maps/RustboroCity/scripts.pory"
	random 10
# 23 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_lt RustboroCity_EventScript_RandomizeEncounters_8
RustboroCity_EventScript_RandomizeEncounters_7:
# 28 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_TEMP_8
# 29 "data/maps/RustboroCity/scripts.pory"
	random 10
# 30 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_lt RustboroCity_EventScript_RandomizeEncounters_10
	return

RustboroCity_EventScript_RandomizeEncounters_2:
# 10 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RandomizeEncounterVar5
# 11 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_TEMP_5
	goto RustboroCity_EventScript_RandomizeEncounters_1

RustboroCity_EventScript_RandomizeEncounters_5:
# 17 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RandomizeEncounterVar6
# 18 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_TEMP_6
	goto RustboroCity_EventScript_RandomizeEncounters_4

RustboroCity_EventScript_RandomizeEncounters_8:
# 24 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RandomizeEncounterVar7
# 25 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_TEMP_7
	goto RustboroCity_EventScript_RandomizeEncounters_7

RustboroCity_EventScript_RandomizeEncounters_10:
# 31 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RandomizeEncounterVar8
# 32 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_TEMP_8
	return


RustboroCity_EventScript_RandomizeEncounterVar5::
# 37 "data/maps/RustboroCity/scripts.pory"
	random 10
# 38 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 39 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_RandomizeEncounterVar5_2
# 40 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_RandomizeEncounterVar5_2
# 41 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_RandomizeEncounterVar5_2
# 44 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_RandomizeEncounterVar5_3
# 45 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_RandomizeEncounterVar5_3
# 48 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_RandomizeEncounterVar5_4
# 49 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_RandomizeEncounterVar5_4
# 52 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_RandomizeEncounterVar5_5
# 55 "data/maps/RustboroCity/scripts.pory"
	case 8, RustboroCity_EventScript_RandomizeEncounterVar5_6
# 58 "data/maps/RustboroCity/scripts.pory"
	case 9, RustboroCity_EventScript_RandomizeEncounterVar5_7
	return

RustboroCity_EventScript_RandomizeEncounterVar5_2:
# 42 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( EEVEE )
# 43 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_5, 0
	return

RustboroCity_EventScript_RandomizeEncounterVar5_3:
# 46 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( ABRA )
# 47 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

RustboroCity_EventScript_RandomizeEncounterVar5_4:
# 50 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( MEOWTH_GALAR )
# 51 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

RustboroCity_EventScript_RandomizeEncounterVar5_5:
# 53 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( PICHU )
# 54 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_5, 3
	return

RustboroCity_EventScript_RandomizeEncounterVar5_6:
# 56 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( SNUBBULL )
# 57 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_5, 4
	return

RustboroCity_EventScript_RandomizeEncounterVar5_7:
# 59 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_SPECIES ( SKITTY )
# 60 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_5, 5
	return


RustboroCity_EventScript_EncounterVar5::
# 65 "data/maps/RustboroCity/scripts.pory"
	lock
# 66 "data/maps/RustboroCity/scripts.pory"
	switch VAR_TEMP_5
# 67 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EncounterVar5_3
# 79 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EncounterVar5_4
# 91 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EncounterVar5_5
# 103 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EncounterVar5_6
# 115 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_EncounterVar5_7
# 127 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_EncounterVar5_8
RustboroCity_EventScript_EncounterVar5_1:
# 140 "data/maps/RustboroCity/scripts.pory"
	release
	return

RustboroCity_EventScript_EncounterVar5_3:
# 68 "data/maps/RustboroCity/scripts.pory"
	random 5
# 69 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 70 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EncounterVar5_10
# 71 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EncounterVar5_10
# 73 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EncounterVar5_11
# 74 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EncounterVar5_11
# 76 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_EncounterVar5_12
	goto RustboroCity_EventScript_EncounterVar5_1

RustboroCity_EventScript_EncounterVar5_4:
# 80 "data/maps/RustboroCity/scripts.pory"
	random 5
# 81 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 82 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EncounterVar5_14
# 83 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EncounterVar5_14
# 85 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EncounterVar5_15
# 86 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EncounterVar5_15
# 88 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_EncounterVar5_16
	goto RustboroCity_EventScript_EncounterVar5_1

RustboroCity_EventScript_EncounterVar5_5:
# 92 "data/maps/RustboroCity/scripts.pory"
	random 5
# 93 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 94 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EncounterVar5_18
# 95 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EncounterVar5_18
# 97 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EncounterVar5_19
# 98 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EncounterVar5_19
# 100 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_EncounterVar5_20
	goto RustboroCity_EventScript_EncounterVar5_1

RustboroCity_EventScript_EncounterVar5_6:
# 104 "data/maps/RustboroCity/scripts.pory"
	random 5
# 105 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 106 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EncounterVar5_22
# 107 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EncounterVar5_22
# 109 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EncounterVar5_23
# 110 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EncounterVar5_23
# 112 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_EncounterVar5_24
	goto RustboroCity_EventScript_EncounterVar5_1

RustboroCity_EventScript_EncounterVar5_7:
# 116 "data/maps/RustboroCity/scripts.pory"
	random 5
# 117 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 118 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EncounterVar5_26
# 119 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EncounterVar5_26
# 121 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EncounterVar5_27
# 122 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EncounterVar5_27
# 124 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_EncounterVar5_28
	goto RustboroCity_EventScript_EncounterVar5_1

RustboroCity_EventScript_EncounterVar5_8:
# 128 "data/maps/RustboroCity/scripts.pory"
	random 5
# 129 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 130 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EncounterVar5_30
# 131 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EncounterVar5_30
# 133 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EncounterVar5_31
# 134 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EncounterVar5_31
# 136 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_EncounterVar5_32
	goto RustboroCity_EventScript_EncounterVar5_1

RustboroCity_EventScript_EncounterVar5_10:
# 72 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_EEVEE, 6, FLAG_TEMP_5
	goto RustboroCity_EventScript_EncounterVar5_1

RustboroCity_EventScript_EncounterVar5_11:
# 75 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_EEVEE, 7, FLAG_TEMP_5
	goto RustboroCity_EventScript_EncounterVar5_1

RustboroCity_EventScript_EncounterVar5_12:
# 77 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_EEVEE, 8, FLAG_TEMP_5
	goto RustboroCity_EventScript_EncounterVar5_1

RustboroCity_EventScript_EncounterVar5_14:
# 84 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_ABRA, 6, FLAG_TEMP_5
	goto RustboroCity_EventScript_EncounterVar5_1

RustboroCity_EventScript_EncounterVar5_15:
# 87 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_ABRA, 7, FLAG_TEMP_5
	goto RustboroCity_EventScript_EncounterVar5_1

RustboroCity_EventScript_EncounterVar5_16:
# 89 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_ABRA, 8, FLAG_TEMP_5
	goto RustboroCity_EventScript_EncounterVar5_1

RustboroCity_EventScript_EncounterVar5_18:
# 96 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_MEOWTH_GALAR, 6, FLAG_TEMP_5
	goto RustboroCity_EventScript_EncounterVar5_1

RustboroCity_EventScript_EncounterVar5_19:
# 99 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_MEOWTH_GALAR, 7, FLAG_TEMP_5
	goto RustboroCity_EventScript_EncounterVar5_1

RustboroCity_EventScript_EncounterVar5_20:
# 101 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_MEOWTH_GALAR, 8, FLAG_TEMP_5
	goto RustboroCity_EventScript_EncounterVar5_1

RustboroCity_EventScript_EncounterVar5_22:
# 108 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_PICHU, 6, FLAG_TEMP_5
	goto RustboroCity_EventScript_EncounterVar5_1

RustboroCity_EventScript_EncounterVar5_23:
# 111 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_PICHU, 7, FLAG_TEMP_5
	goto RustboroCity_EventScript_EncounterVar5_1

RustboroCity_EventScript_EncounterVar5_24:
# 113 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_PICHU, 8, FLAG_TEMP_5
	goto RustboroCity_EventScript_EncounterVar5_1

RustboroCity_EventScript_EncounterVar5_26:
# 120 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_SNUBBULL, 6, FLAG_TEMP_5
	goto RustboroCity_EventScript_EncounterVar5_1

RustboroCity_EventScript_EncounterVar5_27:
# 123 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_SNUBBULL, 7, FLAG_TEMP_5
	goto RustboroCity_EventScript_EncounterVar5_1

RustboroCity_EventScript_EncounterVar5_28:
# 125 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_SNUBBULL, 8, FLAG_TEMP_5
	goto RustboroCity_EventScript_EncounterVar5_1

RustboroCity_EventScript_EncounterVar5_30:
# 132 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_SKITTY, 6, FLAG_TEMP_5
	goto RustboroCity_EventScript_EncounterVar5_1

RustboroCity_EventScript_EncounterVar5_31:
# 135 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_SKITTY, 7, FLAG_TEMP_5
	goto RustboroCity_EventScript_EncounterVar5_1

RustboroCity_EventScript_EncounterVar5_32:
# 137 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_SKITTY, 8, FLAG_TEMP_5
	goto RustboroCity_EventScript_EncounterVar5_1


RustboroCity_EventScript_RandomizeEncounterVar6::
# 144 "data/maps/RustboroCity/scripts.pory"
	random 10
# 145 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 146 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_RandomizeEncounterVar6_2
# 147 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_RandomizeEncounterVar6_2
# 148 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_RandomizeEncounterVar6_2
# 151 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_RandomizeEncounterVar6_3
# 152 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_RandomizeEncounterVar6_3
# 155 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_RandomizeEncounterVar6_4
# 156 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_RandomizeEncounterVar6_4
# 159 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_RandomizeEncounterVar6_5
# 162 "data/maps/RustboroCity/scripts.pory"
	case 8, RustboroCity_EventScript_RandomizeEncounterVar6_6
# 165 "data/maps/RustboroCity/scripts.pory"
	case 9, RustboroCity_EventScript_RandomizeEncounterVar6_7
	return

RustboroCity_EventScript_RandomizeEncounterVar6_2:
# 149 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( EEVEE )
# 150 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_6, 0
	return

RustboroCity_EventScript_RandomizeEncounterVar6_3:
# 153 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( ABRA )
# 154 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_6, 1
	return

RustboroCity_EventScript_RandomizeEncounterVar6_4:
# 157 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( MEOWTH_GALAR )
# 158 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_6, 2
	return

RustboroCity_EventScript_RandomizeEncounterVar6_5:
# 160 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( PICHU )
# 161 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_6, 3
	return

RustboroCity_EventScript_RandomizeEncounterVar6_6:
# 163 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( SNUBBULL )
# 164 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_6, 4
	return

RustboroCity_EventScript_RandomizeEncounterVar6_7:
# 166 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_SPECIES ( SKITTY )
# 167 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_6, 5
	return


RustboroCity_EventScript_EncounterVar6::
# 172 "data/maps/RustboroCity/scripts.pory"
	lock
# 173 "data/maps/RustboroCity/scripts.pory"
	switch VAR_TEMP_6
# 174 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EncounterVar6_3
# 186 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EncounterVar6_4
# 198 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EncounterVar6_5
# 210 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EncounterVar6_6
# 222 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_EncounterVar6_7
# 234 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_EncounterVar6_8
RustboroCity_EventScript_EncounterVar6_1:
# 247 "data/maps/RustboroCity/scripts.pory"
	release
	return

RustboroCity_EventScript_EncounterVar6_3:
# 175 "data/maps/RustboroCity/scripts.pory"
	random 5
# 176 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 177 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EncounterVar6_10
# 178 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EncounterVar6_10
# 180 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EncounterVar6_11
# 181 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EncounterVar6_11
# 183 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_EncounterVar6_12
	goto RustboroCity_EventScript_EncounterVar6_1

RustboroCity_EventScript_EncounterVar6_4:
# 187 "data/maps/RustboroCity/scripts.pory"
	random 5
# 188 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 189 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EncounterVar6_14
# 190 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EncounterVar6_14
# 192 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EncounterVar6_15
# 193 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EncounterVar6_15
# 195 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_EncounterVar6_16
	goto RustboroCity_EventScript_EncounterVar6_1

RustboroCity_EventScript_EncounterVar6_5:
# 199 "data/maps/RustboroCity/scripts.pory"
	random 5
# 200 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 201 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EncounterVar6_18
# 202 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EncounterVar6_18
# 204 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EncounterVar6_19
# 205 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EncounterVar6_19
# 207 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_EncounterVar6_20
	goto RustboroCity_EventScript_EncounterVar6_1

RustboroCity_EventScript_EncounterVar6_6:
# 211 "data/maps/RustboroCity/scripts.pory"
	random 5
# 212 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 213 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EncounterVar6_22
# 214 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EncounterVar6_22
# 216 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EncounterVar6_23
# 217 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EncounterVar6_23
# 219 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_EncounterVar6_24
	goto RustboroCity_EventScript_EncounterVar6_1

RustboroCity_EventScript_EncounterVar6_7:
# 223 "data/maps/RustboroCity/scripts.pory"
	random 5
# 224 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 225 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EncounterVar6_26
# 226 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EncounterVar6_26
# 228 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EncounterVar6_27
# 229 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EncounterVar6_27
# 231 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_EncounterVar6_28
	goto RustboroCity_EventScript_EncounterVar6_1

RustboroCity_EventScript_EncounterVar6_8:
# 235 "data/maps/RustboroCity/scripts.pory"
	random 5
# 236 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 237 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EncounterVar6_30
# 238 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EncounterVar6_30
# 240 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EncounterVar6_31
# 241 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EncounterVar6_31
# 243 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_EncounterVar6_32
	goto RustboroCity_EventScript_EncounterVar6_1

RustboroCity_EventScript_EncounterVar6_10:
# 179 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_EEVEE, 6, FLAG_TEMP_6
	goto RustboroCity_EventScript_EncounterVar6_1

RustboroCity_EventScript_EncounterVar6_11:
# 182 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_EEVEE, 7, FLAG_TEMP_6
	goto RustboroCity_EventScript_EncounterVar6_1

RustboroCity_EventScript_EncounterVar6_12:
# 184 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_EEVEE, 8, FLAG_TEMP_6
	goto RustboroCity_EventScript_EncounterVar6_1

RustboroCity_EventScript_EncounterVar6_14:
# 191 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_ABRA, 6, FLAG_TEMP_6
	goto RustboroCity_EventScript_EncounterVar6_1

RustboroCity_EventScript_EncounterVar6_15:
# 194 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_ABRA, 7, FLAG_TEMP_6
	goto RustboroCity_EventScript_EncounterVar6_1

RustboroCity_EventScript_EncounterVar6_16:
# 196 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_ABRA, 8, FLAG_TEMP_6
	goto RustboroCity_EventScript_EncounterVar6_1

RustboroCity_EventScript_EncounterVar6_18:
# 203 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_MEOWTH_GALAR, 6, FLAG_TEMP_6
	goto RustboroCity_EventScript_EncounterVar6_1

RustboroCity_EventScript_EncounterVar6_19:
# 206 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_MEOWTH_GALAR, 7, FLAG_TEMP_6
	goto RustboroCity_EventScript_EncounterVar6_1

RustboroCity_EventScript_EncounterVar6_20:
# 208 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_MEOWTH_GALAR, 8, FLAG_TEMP_6
	goto RustboroCity_EventScript_EncounterVar6_1

RustboroCity_EventScript_EncounterVar6_22:
# 215 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_PICHU, 6, FLAG_TEMP_6
	goto RustboroCity_EventScript_EncounterVar6_1

RustboroCity_EventScript_EncounterVar6_23:
# 218 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_PICHU, 7, FLAG_TEMP_6
	goto RustboroCity_EventScript_EncounterVar6_1

RustboroCity_EventScript_EncounterVar6_24:
# 220 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_PICHU, 8, FLAG_TEMP_6
	goto RustboroCity_EventScript_EncounterVar6_1

RustboroCity_EventScript_EncounterVar6_26:
# 227 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_SNUBBULL, 6, FLAG_TEMP_6
	goto RustboroCity_EventScript_EncounterVar6_1

RustboroCity_EventScript_EncounterVar6_27:
# 230 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_SNUBBULL, 7, FLAG_TEMP_6
	goto RustboroCity_EventScript_EncounterVar6_1

RustboroCity_EventScript_EncounterVar6_28:
# 232 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_SNUBBULL, 8, FLAG_TEMP_6
	goto RustboroCity_EventScript_EncounterVar6_1

RustboroCity_EventScript_EncounterVar6_30:
# 239 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_SKITTY, 6, FLAG_TEMP_6
	goto RustboroCity_EventScript_EncounterVar6_1

RustboroCity_EventScript_EncounterVar6_31:
# 242 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_SKITTY, 7, FLAG_TEMP_6
	goto RustboroCity_EventScript_EncounterVar6_1

RustboroCity_EventScript_EncounterVar6_32:
# 244 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_SKITTY, 8, FLAG_TEMP_6
	goto RustboroCity_EventScript_EncounterVar6_1


RustboroCity_EventScript_RandomizeEncounterVar7::
# 251 "data/maps/RustboroCity/scripts.pory"
	random 6
# 252 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 253 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_RandomizeEncounterVar7_2
# 254 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_RandomizeEncounterVar7_2
# 257 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_RandomizeEncounterVar7_3
# 258 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_RandomizeEncounterVar7_3
# 261 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_RandomizeEncounterVar7_4
# 264 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_RandomizeEncounterVar7_5
	return

RustboroCity_EventScript_RandomizeEncounterVar7_2:
# 255 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( EEVEE )
# 256 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_7, 0
	return

RustboroCity_EventScript_RandomizeEncounterVar7_3:
# 259 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( MEOWTH_GALAR )
# 260 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_7, 1
	return

RustboroCity_EventScript_RandomizeEncounterVar7_4:
# 262 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( SNUBBULL )
# 263 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_7, 2
	return

RustboroCity_EventScript_RandomizeEncounterVar7_5:
# 265 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_SPECIES ( SKITTY )
# 266 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_7, 3
	return


RustboroCity_EventScript_EncounterVar7::
# 271 "data/maps/RustboroCity/scripts.pory"
	lock
# 272 "data/maps/RustboroCity/scripts.pory"
	switch VAR_TEMP_7
# 273 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EncounterVar7_3
# 285 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EncounterVar7_4
# 297 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EncounterVar7_5
# 309 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EncounterVar7_6
RustboroCity_EventScript_EncounterVar7_1:
# 322 "data/maps/RustboroCity/scripts.pory"
	release
	return

RustboroCity_EventScript_EncounterVar7_3:
# 274 "data/maps/RustboroCity/scripts.pory"
	random 5
# 275 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 276 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EncounterVar7_8
# 277 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EncounterVar7_8
# 279 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EncounterVar7_9
# 280 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EncounterVar7_9
# 282 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_EncounterVar7_10
	goto RustboroCity_EventScript_EncounterVar7_1

RustboroCity_EventScript_EncounterVar7_4:
# 286 "data/maps/RustboroCity/scripts.pory"
	random 5
# 287 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 288 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EncounterVar7_12
# 289 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EncounterVar7_12
# 291 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EncounterVar7_13
# 292 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EncounterVar7_13
# 294 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_EncounterVar7_14
	goto RustboroCity_EventScript_EncounterVar7_1

RustboroCity_EventScript_EncounterVar7_5:
# 298 "data/maps/RustboroCity/scripts.pory"
	random 5
# 299 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 300 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EncounterVar7_16
# 301 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EncounterVar7_16
# 303 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EncounterVar7_17
# 304 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EncounterVar7_17
# 306 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_EncounterVar7_18
	goto RustboroCity_EventScript_EncounterVar7_1

RustboroCity_EventScript_EncounterVar7_6:
# 310 "data/maps/RustboroCity/scripts.pory"
	random 5
# 311 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 312 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EncounterVar7_20
# 313 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EncounterVar7_20
# 315 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EncounterVar7_21
# 316 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EncounterVar7_21
# 318 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_EncounterVar7_22
	goto RustboroCity_EventScript_EncounterVar7_1

RustboroCity_EventScript_EncounterVar7_8:
# 278 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_EEVEE, 6, FLAG_TEMP_7
	goto RustboroCity_EventScript_EncounterVar7_1

RustboroCity_EventScript_EncounterVar7_9:
# 281 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_EEVEE, 7, FLAG_TEMP_7
	goto RustboroCity_EventScript_EncounterVar7_1

RustboroCity_EventScript_EncounterVar7_10:
# 283 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_EEVEE, 8, FLAG_TEMP_7
	goto RustboroCity_EventScript_EncounterVar7_1

RustboroCity_EventScript_EncounterVar7_12:
# 290 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_MEOWTH_GALAR, 6, FLAG_TEMP_7
	goto RustboroCity_EventScript_EncounterVar7_1

RustboroCity_EventScript_EncounterVar7_13:
# 293 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_MEOWTH_GALAR, 7, FLAG_TEMP_7
	goto RustboroCity_EventScript_EncounterVar7_1

RustboroCity_EventScript_EncounterVar7_14:
# 295 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_MEOWTH_GALAR, 8, FLAG_TEMP_7
	goto RustboroCity_EventScript_EncounterVar7_1

RustboroCity_EventScript_EncounterVar7_16:
# 302 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_SNUBBULL, 6, FLAG_TEMP_7
	goto RustboroCity_EventScript_EncounterVar7_1

RustboroCity_EventScript_EncounterVar7_17:
# 305 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_SNUBBULL, 7, FLAG_TEMP_7
	goto RustboroCity_EventScript_EncounterVar7_1

RustboroCity_EventScript_EncounterVar7_18:
# 307 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_SNUBBULL, 8, FLAG_TEMP_7
	goto RustboroCity_EventScript_EncounterVar7_1

RustboroCity_EventScript_EncounterVar7_20:
# 314 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_SKITTY, 6, FLAG_TEMP_7
	goto RustboroCity_EventScript_EncounterVar7_1

RustboroCity_EventScript_EncounterVar7_21:
# 317 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_SKITTY, 7, FLAG_TEMP_7
	goto RustboroCity_EventScript_EncounterVar7_1

RustboroCity_EventScript_EncounterVar7_22:
# 319 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_SKITTY, 8, FLAG_TEMP_7
	goto RustboroCity_EventScript_EncounterVar7_1


RustboroCity_EventScript_RandomizeEncounterVar8::
# 326 "data/maps/RustboroCity/scripts.pory"
	random 6
# 327 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 328 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_RandomizeEncounterVar8_2
# 329 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_RandomizeEncounterVar8_2
# 332 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_RandomizeEncounterVar8_3
# 333 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_RandomizeEncounterVar8_3
# 336 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_RandomizeEncounterVar8_4
# 339 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_RandomizeEncounterVar8_5
	return

RustboroCity_EventScript_RandomizeEncounterVar8_2:
# 330 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( EEVEE )
# 331 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_8, 0
	return

RustboroCity_EventScript_RandomizeEncounterVar8_3:
# 334 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( MEOWTH_GALAR )
# 335 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_8, 1
	return

RustboroCity_EventScript_RandomizeEncounterVar8_4:
# 337 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( SNUBBULL )
# 338 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_8, 2
	return

RustboroCity_EventScript_RandomizeEncounterVar8_5:
# 340 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_8, OBJ_EVENT_GFX_SPECIES ( SKITTY )
# 341 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_8, 3
	return


RustboroCity_EventScript_EncounterVar8::
# 346 "data/maps/RustboroCity/scripts.pory"
	lock
# 347 "data/maps/RustboroCity/scripts.pory"
	switch VAR_TEMP_8
# 348 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EncounterVar8_3
# 360 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EncounterVar8_4
# 372 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EncounterVar8_5
# 384 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EncounterVar8_6
RustboroCity_EventScript_EncounterVar8_1:
# 397 "data/maps/RustboroCity/scripts.pory"
	release
	return

RustboroCity_EventScript_EncounterVar8_3:
# 349 "data/maps/RustboroCity/scripts.pory"
	random 5
# 350 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 351 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EncounterVar8_8
# 352 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EncounterVar8_8
# 354 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EncounterVar8_9
# 355 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EncounterVar8_9
# 357 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_EncounterVar8_10
	goto RustboroCity_EventScript_EncounterVar8_1

RustboroCity_EventScript_EncounterVar8_4:
# 361 "data/maps/RustboroCity/scripts.pory"
	random 5
# 362 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 363 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EncounterVar8_12
# 364 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EncounterVar8_12
# 366 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EncounterVar8_13
# 367 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EncounterVar8_13
# 369 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_EncounterVar8_14
	goto RustboroCity_EventScript_EncounterVar8_1

RustboroCity_EventScript_EncounterVar8_5:
# 373 "data/maps/RustboroCity/scripts.pory"
	random 5
# 374 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 375 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EncounterVar8_16
# 376 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EncounterVar8_16
# 378 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EncounterVar8_17
# 379 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EncounterVar8_17
# 381 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_EncounterVar8_18
	goto RustboroCity_EventScript_EncounterVar8_1

RustboroCity_EventScript_EncounterVar8_6:
# 385 "data/maps/RustboroCity/scripts.pory"
	random 5
# 386 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 387 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EncounterVar8_20
# 388 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EncounterVar8_20
# 390 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EncounterVar8_21
# 391 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EncounterVar8_21
# 393 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_EncounterVar8_22
	goto RustboroCity_EventScript_EncounterVar8_1

RustboroCity_EventScript_EncounterVar8_8:
# 353 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_EEVEE, 6, FLAG_TEMP_8
	goto RustboroCity_EventScript_EncounterVar8_1

RustboroCity_EventScript_EncounterVar8_9:
# 356 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_EEVEE, 7, FLAG_TEMP_8
	goto RustboroCity_EventScript_EncounterVar8_1

RustboroCity_EventScript_EncounterVar8_10:
# 358 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_EEVEE, 8, FLAG_TEMP_8
	goto RustboroCity_EventScript_EncounterVar8_1

RustboroCity_EventScript_EncounterVar8_12:
# 365 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_MEOWTH_GALAR, 6, FLAG_TEMP_8
	goto RustboroCity_EventScript_EncounterVar8_1

RustboroCity_EventScript_EncounterVar8_13:
# 368 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_MEOWTH_GALAR, 7, FLAG_TEMP_8
	goto RustboroCity_EventScript_EncounterVar8_1

RustboroCity_EventScript_EncounterVar8_14:
# 370 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_MEOWTH_GALAR, 8, FLAG_TEMP_8
	goto RustboroCity_EventScript_EncounterVar8_1

RustboroCity_EventScript_EncounterVar8_16:
# 377 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_SNUBBULL, 6, FLAG_TEMP_8
	goto RustboroCity_EventScript_EncounterVar8_1

RustboroCity_EventScript_EncounterVar8_17:
# 380 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_SNUBBULL, 7, FLAG_TEMP_8
	goto RustboroCity_EventScript_EncounterVar8_1

RustboroCity_EventScript_EncounterVar8_18:
# 382 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_SNUBBULL, 8, FLAG_TEMP_8
	goto RustboroCity_EventScript_EncounterVar8_1

RustboroCity_EventScript_EncounterVar8_20:
# 389 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_SKITTY, 6, FLAG_TEMP_8
	goto RustboroCity_EventScript_EncounterVar8_1

RustboroCity_EventScript_EncounterVar8_21:
# 392 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_SKITTY, 7, FLAG_TEMP_8
	goto RustboroCity_EventScript_EncounterVar8_1

RustboroCity_EventScript_EncounterVar8_22:
# 394 "data/maps/RustboroCity/scripts.pory"
	dowildencounter SPECIES_SKITTY, 8, FLAG_TEMP_8
	goto RustboroCity_EventScript_EncounterVar8_1


# 400 "data/maps/RustboroCity/scripts.pory"

# 401 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_BOY, 7
# 402 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_GIRL, 8
# 403 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 9
# 404 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_GRUNT, 10
# 405 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_RIVAL, 14
# 406 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_SCIENTIST, 15
# 407 "data/maps/RustboroCity/scripts.pory"

# 408 "data/maps/RustboroCity/scripts.pory"
RustboroCity_MapScripts::
# 409 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
# 410 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_OnFrame
# 411 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, RustboroCity_OnResume
# 412 "data/maps/RustboroCity/scripts.pory"
	.byte 0
# 413 "data/maps/RustboroCity/scripts.pory"

# 414 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnTransition:
# 415 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 416 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 417 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_HideMapNamePopup
# 418 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 419 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_PositionScientistForExit
# 420 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RandomizeEncounters
# 421 "data/maps/RustboroCity/scripts.pory"
	end
# 422 "data/maps/RustboroCity/scripts.pory"

# 423 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 424 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 425 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 12, 15
# 426 "data/maps/RustboroCity/scripts.pory"
	end
# 427 "data/maps/RustboroCity/scripts.pory"

# 428 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 429 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 11, 15
# 430 "data/maps/RustboroCity/scripts.pory"
	end
# 431 "data/maps/RustboroCity/scripts.pory"

# 432 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 433 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 434 "data/maps/RustboroCity/scripts.pory"
	return
# 435 "data/maps/RustboroCity/scripts.pory"

# 436 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnFrame:
# 437 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
# 438 "data/maps/RustboroCity/scripts.pory"
	.2byte 0
# 439 "data/maps/RustboroCity/scripts.pory"

# 440 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 441 "data/maps/RustboroCity/scripts.pory"
	lockall
# 442 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 443 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 444 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 445 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 446 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 447 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_SCIENTIST
# 448 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 449 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 450 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 451 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_ExclamationMark
# 452 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 453 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_Delay48
# 454 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 455 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 456 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 457 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 458 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 459 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 460 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 461 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 462 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 463 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 464 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 465 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 466 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 467 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 468 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 469 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 470 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 471 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 472 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 473 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 474 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 475 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 476 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 477 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 478 "data/maps/RustboroCity/scripts.pory"

# 479 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 480 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 481 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 482 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 483 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 484 "data/maps/RustboroCity/scripts.pory"

# 485 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 486 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 487 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 488 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 489 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 490 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_PleaseSelectPokenav
# 491 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_PleaseSelectPokenav
# 492 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_PleaseSelectPokenav
# 493 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_PleaseSelectPokenav
# 494 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_PleaseSelectPokenav
# 495 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_PleaseSelectPokenav
# 496 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_PleaseSelectPokenav
# 497 "data/maps/RustboroCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_PleaseSelectPokenav
# 498 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 499 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 500 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 501 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 502 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 503 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 504 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 505 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 506 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 507 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 508 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 509 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 510 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 511 "data/maps/RustboroCity/scripts.pory"
	end
# 512 "data/maps/RustboroCity/scripts.pory"

# 513 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 514 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 515 "data/maps/RustboroCity/scripts.pory"
	step_end
# 516 "data/maps/RustboroCity/scripts.pory"

# 517 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 518 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 519 "data/maps/RustboroCity/scripts.pory"
	step_end
# 520 "data/maps/RustboroCity/scripts.pory"

# 521 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 522 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 523 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 524 "data/maps/RustboroCity/scripts.pory"
	step_end
# 525 "data/maps/RustboroCity/scripts.pory"

# 526 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 527 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 528 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 529 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 530 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 531 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 532 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 533 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 534 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 535 "data/maps/RustboroCity/scripts.pory"
	step_end
# 536 "data/maps/RustboroCity/scripts.pory"

# 537 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 538 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 539 "data/maps/RustboroCity/scripts.pory"
	step_end
# 540 "data/maps/RustboroCity/scripts.pory"

# 541 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 542 "data/maps/RustboroCity/scripts.pory"
	lock
# 543 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 544 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 545 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 546 "data/maps/RustboroCity/scripts.pory"
	release
# 547 "data/maps/RustboroCity/scripts.pory"
	end
# 548 "data/maps/RustboroCity/scripts.pory"

# 549 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 550 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 551 "data/maps/RustboroCity/scripts.pory"
	release
# 552 "data/maps/RustboroCity/scripts.pory"
	end
# 553 "data/maps/RustboroCity/scripts.pory"

# 554 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 555 "data/maps/RustboroCity/scripts.pory"
	lock
# 556 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 557 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 558 "data/maps/RustboroCity/scripts.pory"
	release
# 559 "data/maps/RustboroCity/scripts.pory"
	end
# 560 "data/maps/RustboroCity/scripts.pory"

# 561 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 562 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 563 "data/maps/RustboroCity/scripts.pory"
	end
# 564 "data/maps/RustboroCity/scripts.pory"

# 565 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 566 "data/maps/RustboroCity/scripts.pory"
	lock
# 567 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 568 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 569 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 570 "data/maps/RustboroCity/scripts.pory"
	release
# 571 "data/maps/RustboroCity/scripts.pory"
	end
# 572 "data/maps/RustboroCity/scripts.pory"

# 573 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 574 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 575 "data/maps/RustboroCity/scripts.pory"
	release
# 576 "data/maps/RustboroCity/scripts.pory"
	end
# 577 "data/maps/RustboroCity/scripts.pory"

# 578 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 579 "data/maps/RustboroCity/scripts.pory"
	lock
# 580 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 581 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 582 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 583 "data/maps/RustboroCity/scripts.pory"
	release
# 584 "data/maps/RustboroCity/scripts.pory"
	end
# 585 "data/maps/RustboroCity/scripts.pory"

# 586 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 587 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 588 "data/maps/RustboroCity/scripts.pory"
	release
# 589 "data/maps/RustboroCity/scripts.pory"
	end
# 590 "data/maps/RustboroCity/scripts.pory"

# 591 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 592 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 593 "data/maps/RustboroCity/scripts.pory"
	end
# 594 "data/maps/RustboroCity/scripts.pory"

# 595 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 596 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 597 "data/maps/RustboroCity/scripts.pory"
	end
# 598 "data/maps/RustboroCity/scripts.pory"

# 599 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 600 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 601 "data/maps/RustboroCity/scripts.pory"
	end
# 602 "data/maps/RustboroCity/scripts.pory"

# 603 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 604 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 605 "data/maps/RustboroCity/scripts.pory"
	end
# 606 "data/maps/RustboroCity/scripts.pory"

# 607 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 608 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 609 "data/maps/RustboroCity/scripts.pory"
	end
# 610 "data/maps/RustboroCity/scripts.pory"

# 611 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 612 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 613 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 614 "data/maps/RustboroCity/scripts.pory"
	end
# 615 "data/maps/RustboroCity/scripts.pory"

# 616 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 617 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 618 "data/maps/RustboroCity/scripts.pory"
	end
# 619 "data/maps/RustboroCity/scripts.pory"

# 620 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 621 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 622 "data/maps/RustboroCity/scripts.pory"
	end
# 623 "data/maps/RustboroCity/scripts.pory"

# 624 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 625 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 626 "data/maps/RustboroCity/scripts.pory"
	end
# 627 "data/maps/RustboroCity/scripts.pory"

# 628 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 629 "data/maps/RustboroCity/scripts.pory"
	lock
# 630 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 631 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 632 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 633 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 634 "data/maps/RustboroCity/scripts.pory"
	release
# 635 "data/maps/RustboroCity/scripts.pory"
	end
# 636 "data/maps/RustboroCity/scripts.pory"

# 637 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 638 "data/maps/RustboroCity/scripts.pory"
	lock
# 639 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 640 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 641 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 642 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 643 "data/maps/RustboroCity/scripts.pory"
	release
# 644 "data/maps/RustboroCity/scripts.pory"
	end
# 645 "data/maps/RustboroCity/scripts.pory"

# 646 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 647 "data/maps/RustboroCity/scripts.pory"
	lock
# 648 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 649 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 650 "data/maps/RustboroCity/scripts.pory"
	release
# 651 "data/maps/RustboroCity/scripts.pory"
	end
# 652 "data/maps/RustboroCity/scripts.pory"

# 653 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 654 "data/maps/RustboroCity/scripts.pory"
	lockall
# 655 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 656 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 657 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 658 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 659 "data/maps/RustboroCity/scripts.pory"
	end
# 660 "data/maps/RustboroCity/scripts.pory"

# 661 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 662 "data/maps/RustboroCity/scripts.pory"
	lockall
# 663 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 664 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 665 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 666 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 667 "data/maps/RustboroCity/scripts.pory"
	end
# 668 "data/maps/RustboroCity/scripts.pory"

# 669 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 670 "data/maps/RustboroCity/scripts.pory"
	lockall
# 671 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 672 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 673 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 674 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 675 "data/maps/RustboroCity/scripts.pory"
	end
# 676 "data/maps/RustboroCity/scripts.pory"

# 677 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 678 "data/maps/RustboroCity/scripts.pory"
	lockall
# 679 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 680 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 681 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 682 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 683 "data/maps/RustboroCity/scripts.pory"
	end
# 684 "data/maps/RustboroCity/scripts.pory"

# 685 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 686 "data/maps/RustboroCity/scripts.pory"
	lockall
# 687 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 688 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 689 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 690 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 691 "data/maps/RustboroCity/scripts.pory"
	end
# 692 "data/maps/RustboroCity/scripts.pory"

# 693 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 694 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 695 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 696 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 697 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_GRUNT
# 698 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_DEVON_EMPLOYEE
# 699 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_GRUNT, RustboroCity_Movement_GruntEscape
# 700 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 701 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_GRUNT
# 702 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 703 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 704 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 705 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 706 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 707 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 708 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 709 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 710 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 30, 10
# 711 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 712 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 713 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 714 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 715 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 716 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 717 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 718 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 719 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 720 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 721 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 722 "data/maps/RustboroCity/scripts.pory"
	end
# 723 "data/maps/RustboroCity/scripts.pory"

# 724 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 725 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 726 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 727 "data/maps/RustboroCity/scripts.pory"
	return
# 728 "data/maps/RustboroCity/scripts.pory"

# 729 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 730 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 731 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 732 "data/maps/RustboroCity/scripts.pory"
	return
# 733 "data/maps/RustboroCity/scripts.pory"

# 734 "data/maps/RustboroCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 735 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 736 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 737 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 738 "data/maps/RustboroCity/scripts.pory"
	return
# 739 "data/maps/RustboroCity/scripts.pory"

# 740 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 741 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 742 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 743 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 744 "data/maps/RustboroCity/scripts.pory"
	return
# 745 "data/maps/RustboroCity/scripts.pory"

# 746 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 747 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 748 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 749 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 750 "data/maps/RustboroCity/scripts.pory"
	return
# 751 "data/maps/RustboroCity/scripts.pory"

# 752 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 753 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 754 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 755 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 756 "data/maps/RustboroCity/scripts.pory"
	return
# 757 "data/maps/RustboroCity/scripts.pory"

# 758 "data/maps/RustboroCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 759 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 760 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 761 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 762 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 763 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 764 "data/maps/RustboroCity/scripts.pory"
	return
# 765 "data/maps/RustboroCity/scripts.pory"

# 766 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 767 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 768 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 769 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 770 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 771 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 772 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 773 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 774 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 775 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 776 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 777 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 778 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 779 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 780 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 781 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 782 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 783 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 784 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 785 "data/maps/RustboroCity/scripts.pory"
	step_end
# 786 "data/maps/RustboroCity/scripts.pory"

# 787 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 788 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 789 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 790 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 791 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 792 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 793 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 794 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 795 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 796 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 797 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 798 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 799 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 800 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 801 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 802 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 803 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 804 "data/maps/RustboroCity/scripts.pory"
	step_end
# 805 "data/maps/RustboroCity/scripts.pory"

# 806 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 807 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 808 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 809 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 810 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 811 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 812 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 813 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 814 "data/maps/RustboroCity/scripts.pory"
	step_end
# 815 "data/maps/RustboroCity/scripts.pory"

# 816 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 817 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 818 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 819 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 820 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 821 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 822 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 823 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 824 "data/maps/RustboroCity/scripts.pory"
	step_end
# 825 "data/maps/RustboroCity/scripts.pory"

# 826 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 827 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 828 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 829 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 830 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 831 "data/maps/RustboroCity/scripts.pory"
	step_end
# 832 "data/maps/RustboroCity/scripts.pory"

# 833 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 834 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 835 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 836 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 837 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 838 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 839 "data/maps/RustboroCity/scripts.pory"
	step_end
# 840 "data/maps/RustboroCity/scripts.pory"

# 841 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 842 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 843 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 844 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 845 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 846 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 847 "data/maps/RustboroCity/scripts.pory"
	step_end
# 848 "data/maps/RustboroCity/scripts.pory"

# 849 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 850 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 851 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 852 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 853 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 854 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 855 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 856 "data/maps/RustboroCity/scripts.pory"
	step_end
# 857 "data/maps/RustboroCity/scripts.pory"

# 858 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 859 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 860 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 861 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 862 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 863 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 864 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 865 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 866 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 867 "data/maps/RustboroCity/scripts.pory"
	step_end
# 868 "data/maps/RustboroCity/scripts.pory"

# 869 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 870 "data/maps/RustboroCity/scripts.pory"
	lock
# 871 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 872 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 873 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 874 "data/maps/RustboroCity/scripts.pory"
	release
# 875 "data/maps/RustboroCity/scripts.pory"
	end
# 876 "data/maps/RustboroCity/scripts.pory"

# 877 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 878 "data/maps/RustboroCity/scripts.pory"
	waitse
# 879 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 880 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 881 "data/maps/RustboroCity/scripts.pory"
	end
# 882 "data/maps/RustboroCity/scripts.pory"

# 883 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 884 "data/maps/RustboroCity/scripts.pory"
	lockall
# 885 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 886 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 887 "data/maps/RustboroCity/scripts.pory"
	end
# 888 "data/maps/RustboroCity/scripts.pory"

# 889 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 890 "data/maps/RustboroCity/scripts.pory"
	lockall
# 891 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 892 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 893 "data/maps/RustboroCity/scripts.pory"
	end
# 894 "data/maps/RustboroCity/scripts.pory"

# 895 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 896 "data/maps/RustboroCity/scripts.pory"
	lockall
# 897 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 898 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 899 "data/maps/RustboroCity/scripts.pory"
	end
# 900 "data/maps/RustboroCity/scripts.pory"

# 901 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 902 "data/maps/RustboroCity/scripts.pory"
	lockall
# 903 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 904 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 905 "data/maps/RustboroCity/scripts.pory"
	end
# 906 "data/maps/RustboroCity/scripts.pory"

# 907 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 908 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 909 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 910 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 911 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 912 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 913 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 914 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_DEVON_EMPLOYEE
# 915 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 916 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 917 "data/maps/RustboroCity/scripts.pory"
	end
# 918 "data/maps/RustboroCity/scripts.pory"

# 919 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 920 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 921 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 922 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 923 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 924 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 925 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 926 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 927 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 928 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 929 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 930 "data/maps/RustboroCity/scripts.pory"
	return
# 931 "data/maps/RustboroCity/scripts.pory"

# 932 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 933 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 934 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 935 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 936 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 937 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 938 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 939 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 940 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 941 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 942 "data/maps/RustboroCity/scripts.pory"
	return
# 943 "data/maps/RustboroCity/scripts.pory"

# 944 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 945 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 946 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 947 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 948 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 949 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 950 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 951 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 952 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 953 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 954 "data/maps/RustboroCity/scripts.pory"
	return
# 955 "data/maps/RustboroCity/scripts.pory"

# 956 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 957 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 958 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 959 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 960 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 961 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 962 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 963 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 964 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 965 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 966 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 967 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 968 "data/maps/RustboroCity/scripts.pory"
	return
# 969 "data/maps/RustboroCity/scripts.pory"

# 970 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 971 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 972 "data/maps/RustboroCity/scripts.pory"
	step_end
# 973 "data/maps/RustboroCity/scripts.pory"

# 974 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 975 "data/maps/RustboroCity/scripts.pory"
	lockall
# 976 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 977 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 978 "data/maps/RustboroCity/scripts.pory"
	end
# 979 "data/maps/RustboroCity/scripts.pory"

# 980 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 981 "data/maps/RustboroCity/scripts.pory"
	lockall
# 982 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 983 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 984 "data/maps/RustboroCity/scripts.pory"
	end
# 985 "data/maps/RustboroCity/scripts.pory"

# 986 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 987 "data/maps/RustboroCity/scripts.pory"
	lockall
# 988 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 989 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 990 "data/maps/RustboroCity/scripts.pory"
	end
# 991 "data/maps/RustboroCity/scripts.pory"

# 992 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 993 "data/maps/RustboroCity/scripts.pory"
	lockall
# 994 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 995 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 996 "data/maps/RustboroCity/scripts.pory"
	end
# 997 "data/maps/RustboroCity/scripts.pory"

# 998 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 999 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 1000 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 1001 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 1002 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 1003 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 1004 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 1005 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 1006 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 1007 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 1008 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1009 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 1010 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 1011 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 1012 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 1013 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 1014 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 1015 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1016 "data/maps/RustboroCity/scripts.pory"
	end
# 1017 "data/maps/RustboroCity/scripts.pory"

# 1018 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 1019 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 1020 "data/maps/RustboroCity/scripts.pory"
	return
# 1021 "data/maps/RustboroCity/scripts.pory"

# 1022 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 1023 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 1024 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1025 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1026 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 1027 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1028 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 1029 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1030 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1031 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1032 "data/maps/RustboroCity/scripts.pory"
	return
# 1033 "data/maps/RustboroCity/scripts.pory"

# 1034 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 1035 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 1036 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1037 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1038 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 1039 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1040 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 1041 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1042 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 1043 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1044 "data/maps/RustboroCity/scripts.pory"
	return
# 1045 "data/maps/RustboroCity/scripts.pory"

# 1046 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 1047 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 1048 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1049 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1050 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 1051 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1052 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 1053 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1054 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1055 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1056 "data/maps/RustboroCity/scripts.pory"
	return
# 1057 "data/maps/RustboroCity/scripts.pory"

# 1058 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 1059 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 1060 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1061 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1062 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 1063 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1064 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 1065 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1066 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 1067 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1068 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1069 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1070 "data/maps/RustboroCity/scripts.pory"
	return
# 1071 "data/maps/RustboroCity/scripts.pory"

# 1072 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 1073 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 1074 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1075 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1076 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 1077 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1078 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 1079 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1080 "data/maps/RustboroCity/scripts.pory"
	return
# 1081 "data/maps/RustboroCity/scripts.pory"

# 1082 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 1083 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1084 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 1085 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 1086 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1087 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1088 "data/maps/RustboroCity/scripts.pory"

# 1089 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 1090 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 1091 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 1092 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 1093 "data/maps/RustboroCity/scripts.pory"
	return
# 1094 "data/maps/RustboroCity/scripts.pory"

# 1095 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 1096 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 1097 "data/maps/RustboroCity/scripts.pory"
	return
# 1098 "data/maps/RustboroCity/scripts.pory"

# 1099 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 1100 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 1101 "data/maps/RustboroCity/scripts.pory"
	return
# 1102 "data/maps/RustboroCity/scripts.pory"

# 1103 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 1104 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1105 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1106 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1107 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1108 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1109 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 1110 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1111 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 1112 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1113 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 1114 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1115 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1116 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1117 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1118 "data/maps/RustboroCity/scripts.pory"

# 1119 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 1120 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1121 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1122 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1123 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1124 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1125 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 1126 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1127 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 1128 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1129 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 1130 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1131 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1132 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1133 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1134 "data/maps/RustboroCity/scripts.pory"

# 1135 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 1136 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1137 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1138 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1139 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1140 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1141 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 1142 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1143 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 1144 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1145 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 1146 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1147 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1148 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1149 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1150 "data/maps/RustboroCity/scripts.pory"

# 1151 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 1152 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1153 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1154 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1155 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1156 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1157 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 1158 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1159 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 1160 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1161 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 1162 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1163 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1164 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1165 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1166 "data/maps/RustboroCity/scripts.pory"

# 1167 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 1168 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1169 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1170 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1171 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1172 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1173 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 1174 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1175 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 1176 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1177 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 1178 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1179 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1180 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1181 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1182 "data/maps/RustboroCity/scripts.pory"

# 1183 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 1184 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1185 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1186 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1187 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1188 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1189 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 1190 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1191 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 1192 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1193 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 1194 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1195 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1196 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1197 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1198 "data/maps/RustboroCity/scripts.pory"

# 1199 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 1200 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1201 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1202 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1203 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1204 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1205 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 1206 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1207 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 1208 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1209 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 1210 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1211 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1212 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1213 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1214 "data/maps/RustboroCity/scripts.pory"

# 1215 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 1216 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1217 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1218 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1219 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1220 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1221 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 1222 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1223 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 1224 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1225 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 1226 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1227 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1228 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 1229 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1230 "data/maps/RustboroCity/scripts.pory"

# 1231 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 1232 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 1233 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 1234 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 1235 "data/maps/RustboroCity/scripts.pory"
	end
# 1236 "data/maps/RustboroCity/scripts.pory"

# 1237 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 1238 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 1239 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 1240 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 1241 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 1242 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1243 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 1244 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 1245 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 1246 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 1247 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1248 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 1249 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 1250 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 1251 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 1252 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 1253 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 1254 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 1255 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 1256 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 1257 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1258 "data/maps/RustboroCity/scripts.pory"
	end
# 1259 "data/maps/RustboroCity/scripts.pory"

# 1260 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle::
# 1261 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 1262 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 1263 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 1264 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 1265 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1266 "data/maps/RustboroCity/scripts.pory"
	end
# 1267 "data/maps/RustboroCity/scripts.pory"

# 1268 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 1269 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 1270 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 1271 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 1272 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 1273 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 1274 "data/maps/RustboroCity/scripts.pory"
	end
# 1275 "data/maps/RustboroCity/scripts.pory"

# 1276 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 1277 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 1278 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 1279 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1280 "data/maps/RustboroCity/scripts.pory"
	end
# 1281 "data/maps/RustboroCity/scripts.pory"

# 1282 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 1283 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 1284 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 1285 "data/maps/RustboroCity/scripts.pory"
	return
# 1286 "data/maps/RustboroCity/scripts.pory"

# 1287 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTreecko::
# 1288 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 1289 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1290 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 1291 "data/maps/RustboroCity/scripts.pory"
	end
# 1292 "data/maps/RustboroCity/scripts.pory"

# 1293 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic::
# 1294 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 1295 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1296 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 1297 "data/maps/RustboroCity/scripts.pory"
	end
# 1298 "data/maps/RustboroCity/scripts.pory"

# 1299 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayMudkip::
# 1300 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 1301 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1302 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 1303 "data/maps/RustboroCity/scripts.pory"
	end
# 1304 "data/maps/RustboroCity/scripts.pory"

# 1305 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 1306 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
# 1307 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanAskToBattle
# 1308 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 1309 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 1310 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1311 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 1312 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 1313 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 1314 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 1315 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1316 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 1317 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 1318 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 1319 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 1320 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 1321 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 1322 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 1323 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 1324 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1325 "data/maps/RustboroCity/scripts.pory"
	end
# 1326 "data/maps/RustboroCity/scripts.pory"

# 1327 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle::
# 1328 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 1329 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 1330 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 1331 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1332 "data/maps/RustboroCity/scripts.pory"
	end
# 1333 "data/maps/RustboroCity/scripts.pory"

# 1334 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 1335 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 1336 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 1337 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 1338 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 1339 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 1340 "data/maps/RustboroCity/scripts.pory"
	end
# 1341 "data/maps/RustboroCity/scripts.pory"

# 1342 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 1343 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 1344 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 1345 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1346 "data/maps/RustboroCity/scripts.pory"
	end
# 1347 "data/maps/RustboroCity/scripts.pory"

# 1348 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 1349 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 1350 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1351 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 1352 "data/maps/RustboroCity/scripts.pory"
	end
# 1353 "data/maps/RustboroCity/scripts.pory"

# 1354 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTorchic::
# 1355 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
# 1356 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1357 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 1358 "data/maps/RustboroCity/scripts.pory"
	end
# 1359 "data/maps/RustboroCity/scripts.pory"

# 1360 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanMudkip::
# 1361 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
# 1362 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1363 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 1364 "data/maps/RustboroCity/scripts.pory"
	end
# 1365 "data/maps/RustboroCity/scripts.pory"

# 1366 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 1367 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1368 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1369 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1370 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1371 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1372 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1373 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1374 "data/maps/RustboroCity/scripts.pory"

# 1375 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 1376 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1377 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1378 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1379 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1380 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1381 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1382 "data/maps/RustboroCity/scripts.pory"

# 1383 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 1384 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1385 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1386 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1387 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1388 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1389 "data/maps/RustboroCity/scripts.pory"

# 1390 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 1391 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1392 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1393 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1394 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1395 "data/maps/RustboroCity/scripts.pory"

# 1396 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 1397 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1398 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1399 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1400 "data/maps/RustboroCity/scripts.pory"

# 1401 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 1402 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1403 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1404 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1405 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1406 "data/maps/RustboroCity/scripts.pory"

# 1407 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 1408 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1409 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1410 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1411 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1412 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1413 "data/maps/RustboroCity/scripts.pory"

# 1414 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 1415 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1416 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1417 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1418 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1419 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1420 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1421 "data/maps/RustboroCity/scripts.pory"

# 1422 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 1423 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 1424 "data/maps/RustboroCity/scripts.pory"
	end
# 1425 "data/maps/RustboroCity/scripts.pory"

# 1426 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 1427 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON CORPORATION…\n"
# 1428 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to DEVON.\p"
# 1429 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 1430 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 1431 "data/maps/RustboroCity/scripts.pory"

# 1432 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 1433 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 1434 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 1435 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 1436 "data/maps/RustboroCity/scripts.pory"

# 1437 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 1438 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
# 1439 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 1440 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny GYM BADGE\n"
# 1441 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess TRAINERS begin to\l"
# 1442 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 1443 "data/maps/RustboroCity/scripts.pory"

# 1444 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 1445 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
# 1446 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the POKéMON GYM BADGES,\n"
# 1447 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO's is the coolest, I'd say.$"
# 1448 "data/maps/RustboroCity/scripts.pory"

# 1449 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 1450 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 1451 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 1452 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 1453 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL?$"
# 1454 "data/maps/RustboroCity/scripts.pory"

# 1455 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 1456 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
# 1457 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 1458 "data/maps/RustboroCity/scripts.pory"
	.string "my FIRE-type POKéMON…\p"
# 1459 "data/maps/RustboroCity/scripts.pory"
	.string "FIRE-type POKéMON don't match up\n"
# 1460 "data/maps/RustboroCity/scripts.pory"
	.string "well against ROCK-type POKéMON…$"
# 1461 "data/maps/RustboroCity/scripts.pory"

# 1462 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 1463 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1464 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1465 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 1466 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 1467 "data/maps/RustboroCity/scripts.pory"

# 1468 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 1469 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1470 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1471 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 1472 "data/maps/RustboroCity/scripts.pory"
	.string "SLATEPORT for his pet, PEEKO.\p"
# 1473 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 1474 "data/maps/RustboroCity/scripts.pory"
	.string "that PEEKO.$"
# 1475 "data/maps/RustboroCity/scripts.pory"

# 1476 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 1477 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\p"
# 1478 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 1479 "data/maps/RustboroCity/scripts.pory"
	.string "places with POKéMON, too.$"
# 1480 "data/maps/RustboroCity/scripts.pory"

# 1481 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 1482 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
# 1483 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 1484 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare POKéMON easily?$"
# 1485 "data/maps/RustboroCity/scripts.pory"

# 1486 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 1487 "data/maps/RustboroCity/scripts.pory"
	.string "If a POKéMON gains experience in\n"
# 1488 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 1489 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 1490 "data/maps/RustboroCity/scripts.pory"

# 1491 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 1492 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON changes shape?\n"
# 1493 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 1494 "data/maps/RustboroCity/scripts.pory"

# 1495 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 1496 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
# 1497 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 1498 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain GYM\n"
# 1499 "data/maps/RustboroCity/scripts.pory"
	.string "BADGES, it may not obey you…$"
# 1500 "data/maps/RustboroCity/scripts.pory"

# 1501 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 1502 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 1503 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 1504 "data/maps/RustboroCity/scripts.pory"

# 1505 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 1506 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 1507 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my GOODS!$"
# 1508 "data/maps/RustboroCity/scripts.pory"

# 1509 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 1510 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 1511 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic TRAINER who\n"
# 1512 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in PETALBURG WOODS!\p"
# 1513 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by TEAM AQUA!\n"
# 1514 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the DEVON GOODS back!\p"
# 1515 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 1516 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 1517 "data/maps/RustboroCity/scripts.pory"

# 1518 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 1519 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 1520 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 1521 "data/maps/RustboroCity/scripts.pory"

# 1522 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 1523 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 1524 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON GOODS?\p"
# 1525 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 1526 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 1527 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great TRAINER!\p"
# 1528 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 1529 "data/maps/RustboroCity/scripts.pory"
	.string "another GREAT BALL!$"
# 1530 "data/maps/RustboroCity/scripts.pory"

# 1531 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1532 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 1533 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 1534 "data/maps/RustboroCity/scripts.pory"

# 1535 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1536 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 1537 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 1538 "data/maps/RustboroCity/scripts.pory"

# 1539 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister:
# 1540 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1541 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1542 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV!\p"
# 1543 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1544 "data/maps/RustboroCity/scripts.pory"
	.string "contact one another anytime!\p"
# 1545 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1546 "data/maps/RustboroCity/scripts.pory"

# 1547 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredMay:
# 1548 "data/maps/RustboroCity/scripts.pory"
	.string "Registered MAY\n"
# 1549 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1550 "data/maps/RustboroCity/scripts.pory"

# 1551 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle:
# 1552 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, I passed\n"
# 1553 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY in PETALBURG WOODS.\p"
# 1554 "data/maps/RustboroCity/scripts.pory"
	.string "I guess he's on his way home to his\n"
# 1555 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1556 "data/maps/RustboroCity/scripts.pory"
	.string "How's your POKéDEX coming along,\n"
# 1557 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
# 1558 "data/maps/RustboroCity/scripts.pory"
	.string "So…\n"
# 1559 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle?$"
# 1560 "data/maps/RustboroCity/scripts.pory"

# 1561 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayOhHaventRaisedPokemonEnough:
# 1562 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1563 "data/maps/RustboroCity/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1564 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON very much?\p"
# 1565 "data/maps/RustboroCity/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1566 "data/maps/RustboroCity/scripts.pory"

# 1567 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayWantToBattle:
# 1568 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1569 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle here?$"
# 1570 "data/maps/RustboroCity/scripts.pory"

# 1571 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose:
# 1572 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1573 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1574 "data/maps/RustboroCity/scripts.pory"

# 1575 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayDefeat:
# 1576 "data/maps/RustboroCity/scripts.pory"
	.string "Yikes!\n"
# 1577 "data/maps/RustboroCity/scripts.pory"
	.string "You're better than I expected!$"
# 1578 "data/maps/RustboroCity/scripts.pory"

# 1579 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint:
# 1580 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, MR. BRINEY, who\n"
# 1581 "data/maps/RustboroCity/scripts.pory"
	.string "I just passed…\p"
# 1582 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
# 1583 "data/maps/RustboroCity/scripts.pory"
	.string "might not know this, but MR. BRINEY\l"
# 1584 "data/maps/RustboroCity/scripts.pory"
	.string "was once a revered seafarer.$"
# 1585 "data/maps/RustboroCity/scripts.pory"

# 1586 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister:
# 1587 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1588 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1589 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV! Cool!\p"
# 1590 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1591 "data/maps/RustboroCity/scripts.pory"
	.string "get in touch anytime!\p"
# 1592 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1593 "data/maps/RustboroCity/scripts.pory"

# 1594 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan:
# 1595 "data/maps/RustboroCity/scripts.pory"
	.string "Registered BRENDAN\n"
# 1596 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1597 "data/maps/RustboroCity/scripts.pory"

# 1598 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle:
# 1599 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, {PLAYER}, I walked\n"
# 1600 "data/maps/RustboroCity/scripts.pory"
	.string "by MR. BRINEY in PETALBURG WOODS.\p"
# 1601 "data/maps/RustboroCity/scripts.pory"
	.string "I bet he was on his way home to his\n"
# 1602 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1603 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, how's your POKéDEX?\n"
# 1604 "data/maps/RustboroCity/scripts.pory"
	.string "Have you filled in any pages yet?\p"
# 1605 "data/maps/RustboroCity/scripts.pory"
	.string "Mine rules.\p"
# 1606 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle to test how\n"
# 1607 "data/maps/RustboroCity/scripts.pory"
	.string "far you've progressed?$"
# 1608 "data/maps/RustboroCity/scripts.pory"

# 1609 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanNoConfidenceInPokemon:
# 1610 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1611 "data/maps/RustboroCity/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1612 "data/maps/RustboroCity/scripts.pory"

# 1613 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanWantToBattle:
# 1614 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1615 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle with me?$"
# 1616 "data/maps/RustboroCity/scripts.pory"

# 1617 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy:
# 1618 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1619 "data/maps/RustboroCity/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1620 "data/maps/RustboroCity/scripts.pory"

# 1621 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanDefeat:
# 1622 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
# 1623 "data/maps/RustboroCity/scripts.pory"
	.string "You're pretty good.$"
# 1624 "data/maps/RustboroCity/scripts.pory"

# 1625 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint:
# 1626 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, you know\n"
# 1627 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY? The guy I just passed?\p"
# 1628 "data/maps/RustboroCity/scripts.pory"
	.string "I bet you didn't know this, since you\n"
# 1629 "data/maps/RustboroCity/scripts.pory"
	.string "just moved here, {PLAYER}, but\l"
# 1630 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY was once a great sailor.$"
# 1631 "data/maps/RustboroCity/scripts.pory"

# 1632 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1633 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1634 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 1635 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1636 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1637 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 1638 "data/maps/RustboroCity/scripts.pory"

# 1639 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1640 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORPORATION\p"
# 1641 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1642 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 1643 "data/maps/RustboroCity/scripts.pory"

# 1644 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1645 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
# 1646 "data/maps/RustboroCity/scripts.pory"
	.string "LEADER: ROXANNE\p"
# 1647 "data/maps/RustboroCity/scripts.pory"
	.string "“The ROCK-loving honors student!”$"
# 1648 "data/maps/RustboroCity/scripts.pory"

# 1649 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1650 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORP. BRANCH OFFICE\p"
# 1651 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to DEVON employees\n"
# 1652 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1653 "data/maps/RustboroCity/scripts.pory"

# 1654 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1655 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY\p"
# 1656 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1657 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 1658 "data/maps/RustboroCity/scripts.pory"

# 1659 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1660 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
# 1661 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1662 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON!”$"
# 1663 "data/maps/RustboroCity/scripts.pory"

# 1664 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1665 "data/maps/RustboroCity/scripts.pory"
	.string "CUTTER'S HOUSE$"
# 1666 "data/maps/RustboroCity/scripts.pory"

# 1667 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1668 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 1669 "data/maps/RustboroCity/scripts.pory"
	.string "for the POKéNAV…\p"
# 1670 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 1671 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that POKéNAV?\n"
# 1672 "data/maps/RustboroCity/scripts.pory"
	.string "The one our PRESIDENT gave you?$"
# 1673 "data/maps/RustboroCity/scripts.pory"

# 1674 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1675 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 1676 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 1677 "data/maps/RustboroCity/scripts.pory"
	.string "MATCH CALL to your POKéNAV.\p"
# 1678 "data/maps/RustboroCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 1679 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 1680 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your POKéNAV.\p"
# 1681 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
# 1682 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your POKéNAV.\p"
# 1683 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 1684 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 1685 "data/maps/RustboroCity/scripts.pory"

# 1686 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1687 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the POKéNAV.$"
# 1688 "data/maps/RustboroCity/scripts.pory"

# 1689 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1690 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1691 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 1692 "data/maps/RustboroCity/scripts.pory"

# 1693 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1694 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 1695 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1696 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another TRAINER.\p"
# 1697 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two TRAINERS\n"
# 1698 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more POKéMON,\l"
# 1699 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1700 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1701 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two TRAINERS by yourself?$"
