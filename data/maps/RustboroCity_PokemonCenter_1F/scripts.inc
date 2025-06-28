RustboroCity_PokemonCenter_1F_OnResume::
# 2 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Common_EventScript_RemoveStaticPokemonEncounter
# 3 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	call CableClub_OnResume
	return


RustboroCity_PokemonCenter_1F_EventScript_EncounterVar5::
# 7 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	lock
# 8 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	dowildencounter SPECIES_HAPPINY, 8, FLAG_TEMP_5
# 9 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
	return


# 12 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 13 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 14 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 15 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_MapScripts::
# 16 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_PokemonCenter_1F_OnTransition
# 17 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, RustboroCity_PokemonCenter_1F_OnResume
# 18 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 19 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 20 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_OnTransition:
# 21 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
# 22 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 23 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 24 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Nurse::
# 26 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 27 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 28 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 29 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 30 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
# 31 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 32 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 33 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Man::
# 34 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities, MSGBOX_NPC
# 35 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 36 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Boy::
# 38 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon, MSGBOX_NPC
# 39 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 40 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 41 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Girl::
# 42 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor, MSGBOX_NPC
# 43 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 44 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 45 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities:
# 46 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "My POKéMON has a NAIVE nature, and my\n"
# 47 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "friend's has a JOLLY nature.\p"
# 48 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "It's fascinating how POKéMON have\n"
# 49 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "personalities!$"
# 50 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 51 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon:
# 52 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Just like people, there are male and\n"
# 53 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "female POKéMON.\p"
# 54 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "But no one seems to have any idea how\n"
# 55 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "they're different.$"
# 56 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 57 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor:
# 58 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "The man next door gave me an HM!\p"
# 59 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "I used it to teach my POKéMON how to\n"
# 60 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "CUT down skinny trees.$"
