class Clothing {
/*
*	ARRAY FORMAT:
*		0: STRING (Classname)
*		1: STRING (Display Name, leave as "" for default)
*		2: SCALAR (Price)
*		3: STRING (Conditions) - Must return boolean :
*			String can contain any amount of conditions, aslong as the entire
*				string returns a boolean. This allows you to check any levels, licenses etc,
*				in any combination. For example:
*				"call life_coplevel && license_civ_someLicense"
*				This will also let you call any other function.
*
*	Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*	Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
	class bruce {
		title = "STR_Shops_C_Bruce";
		license = "";
		side = "civ";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, "" },
			{ "U_C_Poloshirt_blue", "Bender Shirt", 100, "" },
			{ "U_C_Poloshirt_burgundy", "Homer Shirt", 100, "" },
			{ "U_C_Poloshirt_stripped", "Itchy Shirt", 100, "" },
			{ "U_C_Poloshirt_tricolour", "Jerry Shirt", 100, "" },
			{ "U_C_Poloshirt_salmon", "Monster Shirt", 100, "" },
			{ "U_C_Poloshirt_redwhite", "Pink Panther Shirt", 100, "" },
			{ "U_I_C_Soldier_Bandit_1_F", "Casual Clothing 1", 150, "" },
			{ "U_I_C_Soldier_Bandit_2_F", "Casual Clothing 2", 150, "" },
			{ "U_I_C_Soldier_Bandit_3_F", "Casual Clothing 3", 150, "" },
			{ "U_I_C_Soldier_Bandit_4_F", "Casual Clothing 4", 150, "" },
			{ "U_I_C_Soldier_Bandit_5_F", "Casual Clothing 5", 150, "" },
			{ "U_C_man_sport_1_F", "Outdoor Clothing 1", 200, "" },
			{ "U_C_man_sport_2_F", "Outdoor Clothing 2", 200, "" },
			{ "U_C_man_sport_3_F", "Outdoor Clothing 3", 200, "" },
			{ "U_C_Man_casual_4_F", "Summer Clothing (Sky)", 200, "" },
			{ "U_C_Man_casual_6_F", "Summer Clothing (Red)", 200, "" },
			{ "U_C_Commoner1_1", "Sad Panda Shirt", 100, "" },
			{ "U_C_Poor_2", "Rag tagged clothes", 40, "" },
			{ "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 70, "" },
			{ "U_IG_Guerilla3_1", "Brown Jacket & Pants", 90, "" },
			{ "U_IG_Guerilla2_3", "The Outback Rangler", 150, "" },
			{ "U_C_HunterBody_grn", "The Hunters Look", 170, "" },
			{ "U_OrestesBody", "Surfing On Land", 125, "" },
			{ "U_NikosAgedBody", "Casual Wears", 500, "" },
			{ "U_C_Journalist", "Journalist", 500, "" }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, "" },
			{ "H_Bandanna_camo", "Camo Bandanna", 500, "" },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 500, "" },
			{ "H_Bandanna_gry", "Grey Bandanna", 500, "" },
			{ "H_Bandanna_cbr", "", 500, "" },
			{ "H_Bandanna_surfer", "", 500, "" },
			{ "H_Bandanna_khk", "Khaki Bandanna", 500, "" },
			{ "H_Bandanna_sgg", "Sage Bandanna", 500, "" },
			{ "H_StrawHat", "Straw Fedora", 25, "" },
			{ "H_BandMask_blk", "Hat & Bandanna", 500, "" },
			{ "H_Booniehat_tan", "", 50, "" },
			{ "H_Hat_blue", "", 39, "" },
			{ "H_Hat_brown", "", 30, "" },
			{ "H_Hat_checker", "", 40, "" },
			{ "H_Hat_grey", "", 32, "" },
			{ "H_Hat_tan", "", 30, "" },
			{ "H_Cap_blu", "", 20, "" },
			{ "H_Cap_grn", "", 20, "" },
			{ "H_Cap_grn_BI", "", 20, "" },
			{ "H_Cap_oli", "", 20, "" },
			{ "H_Cap_red", "", 20, "" },
			{ "H_Cap_tan", "", 20, "" },
			{ "H_Cap_surfer", "", 20, "" },
			{ "H_Cap_press", "", 20, "" }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, "" },
			{ "G_Shades_Black", "", 40, "" },
			{ "G_Shades_Blue", "", 30, "" },
			{ "G_Sport_Blackred", "", 30, "" },
			{ "G_Sport_Checkered", "", 30, "" },
			{ "G_Sport_Blackyellow", "", 30, "" },
			{ "G_Sport_BlackWhite", "", 30, "" },
			{ "G_Squares", "", 20, "" },
			{ "G_Aviator", "", 15, "" },
			{ "G_Lady_Mirror", "", 20, "" },
			{ "G_Lady_Dark", "", 20, "" },
			{ "G_Lady_Blue", "", 20, "" },
			{ "G_Lowprofile", "", 40, "" },
			{ "G_Combat", "", 70, "" }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, "" },
			{ "V_Press_F", "", 700, "" }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, "" },
			{ "B_AssaultPack_cbr", "", 400, "" },
			{ "B_AssaultPack_blk", "", 400, "" },
			{ "B_Kitbag_mcamo", "", 450, "" },
			{ "B_TacticalPack_oli", "", 450, "" },
			{ "B_FieldPack_ocamo", "", 500, "" },
			{ "B_Bergen_sgg", "", 550, "" },
			{ "B_Kitbag_cbr", "", 600, "" },
			{ "B_ViperHarness_ghex_F", "Slim Backpack Green Hex", 700, "" },
			{ "B_ViperHarness_oli_F", "Slim Backpack Olive", 700, "" },
			{ "B_ViperHarness_khk_F", "Slim Backpack Khaki", 700, "" },
			{ "B_ViperHarness_hex_F", "Slim Backpack Hex", 700, "" },
			{ "B_Carryall_khk", "", 800, "" },
			{ "B_Carryall_oli", "", 800, "" },
			{ "B_Carryall_ghex_F", "", 800, "" },
			{ "B_Carryall_mcamo", "", 800, "" },
			{ "B_Carryall_oucamo", "", 800, "" },
			{ "B_Bergen_dgtl_F", "", 1200, "" },
			{ "B_Bergen_hex_F", "", 1200, "" },
			{ "B_Bergen_mcamo_F", "", 1200, "" },
			{ "B_Bergen_tna_F", "", 1200, "" }
		};
	};

	class med_clothing {
		title = "EMS Clothing Shop";
		license = "";
		side = "med";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, "" },
			{ "U_B_CombatUniform_mcam", "Standard Medic Uniform", 500, "" }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, "" },
			{ "H_Cap_blu", "Standard Medic Cap", 250, "" },
			{ "H_Watchcap_camo", "Senior Beanie", 250, "" },
			{ "H_Beret_blk", "Chief Beret", 250, "" },
			{ "H_CrewHelmetHeli_B", "Gas Mask", 1000, "license_med_mCM" },
			{ "H_HelmetB_light_black", "Combat Helmet", 250, "license_med_mCM" }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, "" },
			{ "G_Diving", "Diving Goggles", 2000, "license_med_mSR" },
			{ "G_Shades_Red", "", 200, "" },
			{ "G_Shades_Green", "", 200, "" },
			{ "G_Shades_Blue", "", 200, "" },
			{ "G_Shades_Black", "", 200, "" },
			{ "G_Aviator", "", 15, "license_med_mSR" },
			{ "G_Tactical_Clear", "", 15, "license_med_mCM" }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, "" },
			{ "V_RebreatherIR", "Rebreather", 5000, "license_med_mSR" },
			{ "V_PlateCarrierSpec_blk", "Combat Vest", 10000, "license_med_mCM" }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, "" },
			{ "B_Carryall_cbr", "Standard Medic Backpack", 300, "" }
		};
	};
	
	class aa_clothing {
		title = "AA Clothing Shop";
		license = "mAA";
		side = "med";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, "" },
			{ "U_Rangemaster", "AA Uniform", 500, "" }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, "" },
			{ "H_Cap_oli_hs", "AA Cap", 250, "" }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, "" },
			{ "G_Shades_Red", "", 200, "" },
			{ "G_Shades_Green", "", 200, "" },
			{ "G_Shades_Blue", "", 200, "" },
			{ "G_Shades_Black", "", 200, "" }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, "" },
			{ "V_BandollierB_blk", "AAA Bandollier", 250, "" }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, "" },
			{ "B_Carryall_cbr", "Standard AA Backpack", 300, "" }
		};
	};

	class gun_clothing {
		title = "STR_Shops_C_Gun";
		license = "gun";
		side = "civ";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, "" }
		};
		headgear[] = {
			{ "NONE", "Remove Hat", 0, "" }
		};
		goggles[] = {
			{ "NONE", "Remove Glasses", 0, "" }
		};
		vests[] = {
			{ "NONE", "Remove Vest", 0, "" },
			{ "V_Rangemaster_belt", "", 490, "" }
		};
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, "" }
		};
	};

	class cop {
		title = "STR_Shops_C_Police";
		license = "";
		side = "cop";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, "" },
			{ "U_Rangemaster", "Standard Police Uniform", 100, "call in_coplevel >= 1" },
			{ "U_B_GEN_Commander_F", "Chief Uniform", 700, "call in_coplevel >= 8" },
			{ "U_B_GEN_Soldier_F", "Chief Uniform V 2.0", 700, "call in_coplevel >= 8" },
			{ "U_B_CombatUniform_mcam_worn", "PTU Uniform", 1000, "license_cop_cPTU" },
			{ "U_B_CombatUniform_mcam", "SWAT Uniform", 1500, "license_cop_cSWAT" },
			{ "U_B_CTRG_1", "Sand Fatigues",1000, "license_cop_cSWAT" },
			{ "U_B_CTRG_3", "Sand Rolled Fatigues", 1000, "license_cop_cSWAT" },
			{ "U_B_PilotCoveralls", "Pilot Uniform", 1000, "license_cop_cAirA" },
			{ "U_B_Wetsuit", "Diving Wetsuit", 2500, "license_cop_cSWAT" },
			{ "U_O_SpecopsUniform_ocamo", "(UC) Rebel Uniform 1", 2000, "license_cop_cUC" },
			{ "U_O_GhillieSuit", "(UC) Rebel Uniform 2", 2000, "license_cop_cUC" },
			{ "U_O_PilotCoveralls", "(UC) Rebel Uniform 3", 2000, "license_cop_cUC" },
			{ "U_C_Poloshirt_blue", "(UC) Bender Shirt", 500, "license_cop_cUC" },
			{ "U_C_Poloshirt_burgundy", "(UC) Homer Shirt", 500, "license_cop_cUC" },
			{ "U_C_Poloshirt_stripped", "(UC) Itchy Shirt", 500, "license_cop_cUC" },
			{ "U_C_Poloshirt_tricolour", "(UC) Jerry Shirt", 500, "license_cop_cUC" },
			{ "U_C_Poloshirt_salmon", "(UC) Monster Shirt", 500, "license_cop_cUC" },
			{ "U_C_Poloshirt_redwhite", "(UC) Pink Panther Shirt", 500, "license_cop_cUC" },
			{ "U_C_Commoner1_1", "(UC) Sad Panda Shirt", 500, "license_cop_cUC" },
			{ "U_C_Poor_2", "(UC) Rag tagged clothes", 500, "license_cop_cUC" },
			{ "U_IG_Guerilla2_2", "(UC) Green stripped shirt & Pants", 500, "license_cop_cUC" },
			{ "U_IG_Guerilla3_1", "(UC) Brown Jacket & Pants", 500, "license_cop_cUC" },
			{ "U_IG_Guerilla2_3", "(UC) The Outback Rangler", 500, "license_cop_cUC" },
			{ "U_C_HunterBody_grn", "(UC) The Hunters Look", 500, "license_cop_cUC" },
			{ "U_OrestesBody", "(UC) Surfing On Land", 500, "license_cop_cUC" }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, "" },
			{ "H_Cap_police", "Standard Police Cap", 50, "call in_coplevel >= 1" },
			{ "H_MilCap_gen_F", "Chief Cap", 50, "call in_coplevel >= 8" },
			{ "H_Beret_gen_F", "Chief Beret", 100, "call in_coplevel >= 8" },
			{ "H_Beret_blk_POLICE", "Senior Beret", 100, "call in_coplevel >= 4" },
			{ "H_Beret_02", "Lieutenant Beret", 100, "call in_coplevel >= 6" },
			{ "H_Beret_Colonel", "Captain Beret", 100, "call in_coplevel >= 7" },
			{ "H_HelmetB_plain_blk", "Senior Helmet", 300, "call in_coplevel >= 4" },
			{ "H_Watchcap_blk", "SWAT Beanie", 100, "license_cop_cSWAT" },
			{ "H_HelmetB_camo", "SWAT Helmet", 100, "license_cop_cSWAT" },
			{ "H_CrewHelmetHeli_B", "SWAT Gas Mask", 1000, "license_cop_cSWAT" },
			{ "H_Booniehat_khk_hs", "Booniehat", 100, "license_cop_cSWAT" },
			{ "H_PilotHelmetHeli_B", "Pilot Helmet", 2500, "license_cop_cAirA" },
			{ "H_Helmet_Skate", "Ateeb's Tactical Helmet", 696, "license_cop_cPTU" },
			{ "H_HelmetB_snakeskin", "(UC) Rebel Headgear 1", 300, "license_cop_cUC" },
			{ "H_ShemagOpen_tan", "(UC) Rebel Headgear 2", 100, "license_cop_cUC" },
			{ "H_Shemag_olive_hs", "(UC) Rebel Headgear 3", 100, "license_cop_cUC" },
			{ "H_Bandanna_camo", "(UC) Camo Bandanna", 100, "license_cop_cUC" },
			{ "H_Bandanna_surfer", "(UC) Surfer Bandanna", 100, "license_cop_cUC" },
			{ "H_Bandanna_gry", "(UC) Grey Bandanna", 100, "license_cop_cUC" },
			{ "H_StrawHat", "(UC) Straw Fedora", 100, "license_cop_cUC" }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, "" },
			{ "G_Aviator", "Standard Police Glasses", 50, "call in_coplevel >= 1" },
			{ "G_Squares_Tinted", "Faggot Shades", 50, "call in_coplevel >= 1" },
			{ "G_Spectacles_Tinted", "Square Shades", 50, "call in_coplevel >= 1" },
			{ "G_Tactical_Clear", "Training Glasses", 50, "call in_coplevel >= 5" },
			{ "G_Tactical_Black", "Training Shades", 50, "call in_coplevel >= 5" },
			{ "G_Diving", "Diving Mask", 10, "license_cop_cSWAT" },
			{ "G_Balaclava_TI_G_blk_F", "SWAT Balaclava", 20, "license_cop_cSWAT" },
			{ "G_Balaclava_TI_blk_F", "SWAT Balaclava", 20, "license_cop_cSWAT" },
			{ "G_Bandanna_aviator", "AviatorBandana", 10, "license_cop_cSWAT" },
			{ "G_Bandanna_blk", "Black Bandana", 10, "license_cop_cUC" },
			{ "G_Bandanna_khk", "Khaki Bandana", 10, "license_cop_cUC" },
			{ "G_Bandanna_oli", "Olive Bandana", 10, "license_cop_cUC" },
			{ "G_Bandanna_shades", "Shades Bandana", 10, "license_cop_cUC" },
			{ "G_Bandanna_blk", "Bandana", 10, "license_cop_cSWAT" }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, "" },
			{ "V_Rangemaster_belt", "Officer Belt", 100, "call in_coplevel >= 1" },
			{ "V_TacVest_blk_POLICE", "Standard Police Vest", 500, "call in_coplevel >= 2" },
			{ "V_PlateCarrier1_blk", "Light Plate Vest", 2000, "call in_coplevel >= 4" },
			{ "V_PlateCarrier2_blk", "Heavy Plate Vest", 5000, "call in_coplevel >= 6" },
			{ "V_TacVest_gen_F", "Chief Vest", 800, "call in_coplevel >= 8" },
			{ "V_RebreatherB", "Diving Rebreather", 3000, "license_cop_cSWAT" },
			{ "V_HarnessOGL_brn", "(UC) Rebel Vest 1", 1000, "license_cop_cUC" },
			{ "V_HarnessO_brn", "(UC) Rebel Vest 2", 1000, "license_cop_cUC" },
			{ "V_TacVest_khk", "(UC) Rebel Vest 3", 1000, "license_cop_cUC" },
			{ "V_Chestrig_blk", "SWAT Chest Rig", 500, "license_cop_cSWAT" },
			{ "V_TacVestIR_blk", "Raven Vest", 500, "license_cop_cSWAT" },
			{ "V_PlateCarrier1_blk", "Light Plate Vest", 2000, "license_cop_cSWAT" },
			{ "V_PlateCarrier2_blk", "Heavy Plate Vest", 3000, "license_cop_cSWAT" },
			{ "V_PlateCarrierSpec_blk", "Special Plate Vest", 3000, "license_cop_cSWAT" }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, "" },
			{ "B_Carryall_cbr", "Standard Police Backpack", 300, "" },
			{ "B_FieldPack_ocamo", "(UC) Field Pack", 600, "license_cop_cUC" },
			{ "B_Bergen_sgg", "(UC) Bergen Satchel", 600, "license_cop_cUC" },
			{ "B_Kitbag_cbr", "(UC) Kitbag", 600, "license_cop_cUC" },
			{ "B_Carryall_oli", "(UC) Carryall Olive", 600, "license_cop_cUC" }
		};
	};

	class ems {
		title = "STR_Shops_C_EMS";
		license = "";
		side = "med";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, "" }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, "" }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, "" }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, "" }
		};
			
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, "" }
		};
	};

	class dive {
		title = "STR_Shops_C_Diving";
		license = "dive";
		side = "civ";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, "" },
			{ "U_B_Wetsuit", "", 450, "" }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, "" }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, "" },
			{ "G_Diving", "", 100, "" }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, "" },
			{ "V_RebreatherB", "", 800, "" }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, "" }
		};
	};

	class rebel {
		title = "STR_Shops_C_Rebel";
		license = "reb";
		side = "civ";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, "" },
			{ "U_I_C_Soldier_Para_1_F", "", 1800, "" },
			{ "U_I_C_Soldier_Para_2_F", "", 1800, "" },
			{ "U_I_C_Soldier_Para_3_F", "", 1800, "" },
			{ "U_I_C_Soldier_Para_4_F", "", 1800, "" },
			{ "U_I_C_Soldier_Para_5_F", "", 1800, "" },
			{ "U_BG_Guerrilla_6_1", "Rebel Sweater", 1500, "" },
			{ "U_I_G_resistanceLeader_F", "Resistance Clothing", 2000, "" },
			{ "U_BG_Guerilla1_1", "", 1800, "" },
			{ "U_B_CTRG_2", "CTRG TEE", 1200, "" },
			{ "U_O_SpecopsUniform_ocamo", "", 1800, "" },
			{ "U_O_PilotCoveralls", "", 1800, "" },
			{ "U_O_GhillieSuit", "", 12000, "" },
			{ "U_O_FullGhillie_lsh", "", 20000, "license_civ_advreb" },
			{ "U_O_OfficerUniform_ocamo", "", 6000, "license_civ_advreb" },
			{ "U_I_C_Soldier_Camo_F", "", 5000, "license_civ_advreb" }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, "" },
			{ "H_Booniehat_khk_hs", "", 200, "" },
			{ "H_ShemagOpen_tan", "", 500, "" },
			{ "H_Shemag_olive", "", 500, "" },
			{ "H_ShemagOpen_khk", "", 500, "" },
			{ "H_HelmetO_ocamo", "", 650, "" },
			{ "H_MilCap_oucamo", "", 300, "" },
			{ "H_Bandanna_camo", "", 80, "" },
			{ "H_HelmetB_Snakeskin", "", 650, "" },
			{ "H_Watchcap_camo", "", 300, "license_civ_advreb" }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, "" },
			{ "G_Shades_Black", "", 30, "" },
			{ "G_Shades_Blue", "", 30, "" },
			{ "G_Sport_Blackred", "", 30, "" },
			{ "G_Sport_Checkered", "", 30, "" },
			{ "G_Sport_Blackyellow", "", 30, "" },
			{ "G_Sport_BlackWhite", "", 30, "" },
			{ "G_Squares", "", 200, "" },
			{ "G_Lowprofile", "", 400, "" },
			{ "G_Combat", "", 700, "" },
			// BI
			{ "G_Bandanna_aviator", "", 15, "" },
			{ "G_Bandanna_beast", "", 15, "" },
			{ "G_Bandanna_blk", "", 15, "" },
			{ "G_Bandanna_khk", "", 15, "" },
			{ "G_Bandanna_oli", "", 15, "" },
			{ "G_Bandanna_shades", "", 15, "" },
			{ "G_Bandanna_sport", "", 15, "" },
			{ "G_Bandanna_tan", "", 15, "" }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, "" },
			{ "V_BandollierB_cbr", "", 1500, "" },
			{ "V_BandollierB_rgr", "", 1500, "" },
			{ "V_BandollierB_khk", "", 1500, "" },
			{ "V_HarnessO_brn", "", 1700, "" },
			{ "V_HarnessOGL_brn", "", 1700, "" },
			{ "V_HarnessO_gry", "", 1700, "" },
			{ "V_HarnessO_brn", "", 1700, "" },
			{ "V_HarnessOGL_brn", "", 1700, "" },
			{ "V_TacVest_brn", "", 2500, "" },
			{ "V_TacVest_camo", "", 2500, "" },
			{ "V_I_G_resistanceLeader_F", "", 2500, "" },
			{ "V_PlateCarrier1_rgr_noflag_F", "", 20000, "license_civ_advreb" },
			{ "V_PlateCarrier2_rgr_noflag_F", "", 35000, "license_civ_advreb" },
			{ "V_PlateCarrierH_CTRG", "", 40000, "license_civ_advreb" }

		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, "" },
			{ "B_AssaultPack_cbr", "", 400, "" },
			{ "B_Kitbag_mcamo", "", 500, "" },
			{ "B_TacticalPack_oli", "", 350, "" },
			{ "B_FieldPack_ocamo", "", 350, "" },
			{ "B_AssaultPack_blk", "", 400, "" },
			{ "B_Bergen_sgg", "", 500, "" },
			{ "B_Kitbag_cbr", "", 450, "" },
			{ "B_Carryall_oli", "", 600, "" },
			{ "B_HuntingBackpack", "", 550, "" },
			{ "B_ViperHarness_ghex_F", "Slim Backpack Green Hex", 700, "" },
			{ "B_ViperHarness_oli_F", "Slim Backpack Olive", 700, "" },
			{ "B_ViperHarness_khk_F", "Slim Backpack Khaki", 700, "" },
			{ "B_ViperHarness_hex_F", "Slim Backpack Hex", 700, "" },
			{ "B_Carryall_mcamo", "", 800, "" },
			{ "B_Carryall_oucamo", "", 800, "" },
			{ "B_Carryall_ocamo", "", 800, "" },
			{ "B_Carryall_khk", "", 800, "" },
			{ "B_Bergen_dgtl_F", "", 1200, "" },
			{ "B_Bergen_hex_F", "", 1200, "" },
			{ "B_Bergen_mcamo_F", "", 1200, "" },
			{ "B_Bergen_tna_F", "", 1200, "" }
		};
	};

	class clothing_exp {
		title = "STR_Shops_C_Exp";
		license = "advreb";
		side = "civ";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, "" }
		};
		headgear[] = {
			{ "NONE", "Remove Hat", 0, "" },
			{ "H_Shemag_olive_hs", "Headset Shemag", 2000, "" }
		};
		goggles[] = {
			{ "NONE", "Remove Glasses", 0, "" }
		};
		vests[] = {
			{ "NONE", "Remove Vest", 0, "" },
			{ "V_HarnessOGL_gry", "Suicide Vest", 750000, "" }
		};
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, "" }
		};
	};

	class gang_clothing {
		title = "STR_Shops_C_Gang";
		license = "";
		side = "civ";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, "" }
		};
		headgear[] = {
			{ "NONE", "Remove Hat", 0, "" }
		};
		goggles[] = {
			{ "NONE", "Remove Glasses", 0, "" }
		};
		vests[] = {
			{ "NONE", "Remove Vest", 0, "" },
			{ "V_Rangemaster_belt", "", 190, "" }
		};
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, "" }
		};
	};

	class air_clothing {
		title = "STR_Shops_C_Air";
		license = "pilot";
		side = "civ";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, "" },
			{ "U_B_HeliPilotCoveralls", "Jump Suit", 2000, "" }
		};
		headgear[] = {
			{ "NONE", "Remove Hat", 0, "" }
		};
		goggles[] = {
			{ "NONE", "Remove Glasses", 0, "" },
			{ "G_Aviator", "Aviators", 50, "" }
		};
		vests[] = {
			{ "NONE", "Remove Vest", 0, "" }
		};
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, "" },
			{ "B_Parachute", "Parachute", 1000, "" }
		};
	};

	class corp {
		title = "STR_Shops_C_Corp";
		license = "corp";
		side = "civ";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, "" },
			{ "U_B_T_Soldier_F", "",1200, "" },
			{ "U_B_T_Soldier_AR_F", "", 1000, "" },
			{ "U_I_CombatUniform", "Full Uniform", 600, "" },
			{ "U_B_CTRG_Soldier_3_F", "CTRG Full Uniform", 600, "" },
			{ "U_B_CTRG_Soldier_F", "CTRG Uniform", 600, "" },
			{ "U_I_CombatUniform_shortsleeve", "Short-Sleeve Uniform", 800, "" },
			{ "U_I_OfficerUniform", "Officer Fatigues", 2500, "license_civ_advcorp" },
			{ "U_B_T_Soldier_SL_F", "", 2000, "license_civ_advcorp" },
			{ "U_I_pilotCoveralls", "Radiation Suit", 20000, "license_civ_advcorp" },
			{ "U_O_T_FullGhillie_tna_F", "", 20000, "license_civ_advcorp" }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, "" },
			{ "H_Booniehat_tna_F", "", 200, "" },
			{ "H_Booniehat_dgtl", "", 200, "" },
			{ "H_Watchcap_camo", "", 200, "" },
			{ "H_MilCap_tna_F", "", 200, "" },
			{ "H_HelmetB_tna_F", "", 750, "" },
			{ "H_MilCap_dgtl", "", 750, "" },
			{ "H_HelmetIA", "", 1000, "" },
			{ "H_PilotHelmetFighter_O", "Radiation Helmet", 10000, "license_civ_advcorp" },
			{ "H_PilotHelmetHeli_I", "Crew Helmet", 10000, "license_civ_advcorp" },
			{ "H_HelmetB_TI_tna_F", "CTRG Helmet", 7000, "license_civ_advcorp" },
			{ "H_HelmetB_Enh_tna_F", "", 1000, "license_civ_advcorp" },
			{ "H_HelmetB_Light_tna_F", "", 1000, "license_civ_advcorp" }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, "" },
			{ "G_Shades_Black", "", 30, "" },
			{ "G_Shades_Blue", "", 30, "" },
			{ "G_Sport_Blackred", "", 30, "" },
			{ "G_Sport_Checkered", "", 30, "" },
			{ "G_Sport_Blackyellow", "", 30, "" },
			{ "G_Sport_BlackWhite", "", 30, "" },
			{ "G_Squares", "", 200, "" },
			{ "G_Lowprofile", "", 400, "" },
			{ "G_Combat", "", 700, "" },
			{ "G_Combat", "", 700, "" },
			// BI
			{ "G_Balaclava_blk", "", 15, "" },
			{ "G_Balaclava_combat", "", 15, "" },
			{ "G_Balaclava_lowprofile", "", 15, "" },
			{ "G_Balaclava_oli", "", 15, "" },
			{ "G_Bandanna_aviator", "", 15, "" },
			{ "G_Bandanna_beast", "", 15, "" },
			{ "G_Bandanna_blk", "", 15, "" },
			{ "G_Bandanna_khk", "", 15, "" },
			{ "G_Bandanna_oli", "", 15, "" },
			{ "G_Bandanna_shades", "", 15, "" },
			{ "G_Bandanna_sport", "", 15, "" },
			{ "G_Bandanna_tan", "", 15, "" }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, "" },
			{ "V_BandollierB_oli", "", 500, "" },
			{ "V_HarnessOGL_ghex_F", "", 1000, "" },
			{ "V_TacVest_oli", "", 2500, "" },
			{ "V_PlateCarrier1_tna_F", "", 5000, "" },
			{ "V_PlateCarrierIA1_dgtl", "", 5000, "" },
			{ "V_PlateCarrier2_tna_F", "", 10500, "license_civ_advcorp" },
			{ "V_PlateCarrierIA2_dgtl", "", 30500, "license_civ_advcorp" },
			{ "V_PlateCarrierSpec_tna_F", "", 50000, "license_civ_advcorp" },
			{ "V_PlateCarrierIAGL_dgtl", "Digi Heavy Vest", 45000, "license_civ_advcorp" },
			{ "V_PlateCarrierIAGL_oli", "Olive Heavy Vest", 45000, "license_civ_advcorp" }
			
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, "" },
			{ "B_AssaultPack_cbr", "", 400, "" },
			{ "B_Kitbag_mcamo", "", 500, "" },
			{ "B_TacticalPack_oli", "", 350, "" },
			{ "B_AssaultPack_blk", "", 400, "" },
			{ "B_FieldPack_ocamo", "", 300, "" },
			{ "B_Bergen_sgg", "", 500, "" },
			{ "B_Kitbag_cbr", "", 450, "" },
			{ "B_Carryall_oli", "", 600, "" },
			{ "B_HuntingBackpack", "", 550, "" },
			{ "B_ViperHarness_ghex_F", "Slim Backpack Green Hex", 700, "" },
			{ "B_ViperHarness_oli_F", "Slim Backpack Olive", 700, "" },
			{ "B_ViperHarness_khk_F", "Slim Backpack Khaki", 700, "" },
			{ "B_ViperHarness_hex_F", "Slim Backpack Hex", 700, "" },
			{ "B_Carryall_mcamo", "", 800, "" },
			{ "B_Carryall_oucamo", "", 800, "" },
			{ "B_Carryall_ocamo", "", 800, "" },
			{ "B_Carryall_khk", "", 800, "" },
			{ "B_Bergen_dgtl_F", "", 1200, "" },
			{ "B_Bergen_hex_F", "", 1200, "" },
			{ "B_Bergen_mcamo_F", "", 1200, "" },
			{ "B_Bergen_tna_F", "", 1200, "" }
		};
	};

	class kart {
		title = "STR_Shops_C_Kart";
		license = "";
		side = "civ";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, "" },
			{ "U_C_Driver_1_black", "", 1500, "" },
			{ "U_C_Driver_1_blue", "", 1500, "" },
			{ "U_C_Driver_1_red", "", 1500, "" },
			{ "U_C_Driver_1_orange", "", 1500, "" },
			{ "U_C_Driver_1_green", "", 1500, "" },
			{ "U_C_Driver_1_white", "", 1500, "" },
			{ "U_C_Driver_1_yellow", "", 1500, "" },
			{ "U_C_Driver_2", "", 1500, "" },
			{ "U_C_Driver_1", "", 1500, "" },
			{ "U_C_Driver_3", "", 1500, "" },
			{ "U_C_Driver_4", "", 1500, "" }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, "" },
			{ "H_RacingHelmet_1_black_F", "", 15, "" },
			{ "H_RacingHelmet_1_red_F", "", 15, "" },
			{ "H_RacingHelmet_1_white_F", "", 15, "" },
			{ "H_RacingHelmet_1_blue_F", "", 15, "" },
			{ "H_RacingHelmet_1_yellow_F", "", 15, "" },
			{ "H_RacingHelmet_1_green_F", "", 15, "" },
			{ "H_RacingHelmet_1_F", "", 30, "" },
			{ "H_RacingHelmet_2_F", "", 30, "" },
			{ "H_RacingHelmet_3_F", "", 30, "" },
			{ "H_RacingHelmet_4_F", "", 30, "" }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, "" }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, "" }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, "" }
		};
	};

	class admin {
		title = "STR_Shops_Admin";
		license = "";
		side = "";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, "" },
			{ "U_I_Protagonist_VR", "Admin/Senior Admin Suit", 0, "call in_adminlevel >= 1" }, // Senoir - Green
			{ "U_B_Protagonist_VR", "Head Admin Suit", 0, "call in_adminlevel >= 1" }, // Head Admin - Blue
			{ "U_O_Protagonist_VR", "Founder Suit", 0, "call in_adminlevel >= 5" } // Founder - Red
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, "" }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, "" },
			{ "G_Goggles_VR", "Admin Glasses", 0, "call in_adminlevel >= 1" }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, "" }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, "" }
		};
	};
};
