class WeaponShops {
/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, conditionss etc,
*            in any combination. For example:
*                "call life_coplevel && conditions_civ_someconditions"
*            This will also let you call any other function.
*            
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
	//Civ Gun Store
	class gun {
		name = "Gun Store";
		side = "civ";
		conditions = "license_civ_gun";
		items[] = {
			{ "arifle_SDAR_F", "", 10000, 5000, "" },
			{ "hgun_PDW2000_F", "", 8500, 4250, "" },
			{ "hgun_Pistol_heavy_02_F", "", 4000, 2000, "" },
			{ "hgun_Pistol_heavy_01_F", "", 3500, 1750, "" },
			{ "hgun_Pistol_01_F", "", 2000, 1000, "" },
			{ "hgun_Rook40_F", "", 2000, 1000, "" }
		};
		mags[] = {
			{ "16Rnd_9x21_Mag", "", 500, 250, "" },
			{ "10Rnd_9x21_Mag", "", 500, 250, "" },
			{ "11Rnd_45ACP_Mag", "", 300, 150, "" },
			{ "6Rnd_45ACP_Cylinder", "", 300, 150, "" },
			{ "30Rnd_9x21_Mag", "", 300, 150, "" },
			{ "20Rnd_556x45_UW_mag", "", 400, 200, "" }
		};
		accs[] = {
			{ "optic_ACO_grn_smg", "SMG Green ACO", 300, 150, "" },
			{ "optic_Aco_smg", "SMG Red ACO", 300, 150, "" },
			{ "optic_Yorris", "Yorris", 200, 100, "" },
			{ "optic_MRD", "MRD", 200, 100, "" }
		};
	};

	//Gang Hideouts
	class gang {
		name = "Gang Armament";
		side = "civ";
		conditions = "license_civ_gun";
		items[] = {
			{ "hgun_PDW2000_F", "", 7500, 3750, "" },
			{ "hgun_Pistol_heavy_02_F", "", 3000, 1500, "" },
			{ "hgun_Pistol_heavy_01_F", "", 2000, 1000, "" },
			{ "hgun_Pistol_01_F", "", 1700, 850, "" },
			{ "hgun_Rook40_F", "", 1500, 750, "" }
		};
		mags[] = {
			{ "16Rnd_9x21_Mag", "", 100, 50, "" },
			{ "10Rnd_9x21_Mag", "", 100, 50, "" },
			{ "11Rnd_45ACP_Mag", "", 150, 75, "" },
			{ "6Rnd_45ACP_Cylinder", "", 200, 100, "" },
			{ "30Rnd_9x21_Mag", "", 200, 100, "" }
		};
		accs[] = {};
	};

	//Fuel Station Stores
	class f_station_store {
		name = "Altis Fuel Station Store";
		side = "";
		conditions = "";
		items[] = {
			{ "Binocular", "", 400, 200, "" },
			{ "ItemGPS", "", 500, 250, "" },
			{ "ItemRadio", "", 500, 250, "" },
			{ "FirstAidKit", "", 200, 100, "" },
			{ "NVGoggles", "", 2500, 1700, "" }
		};
		mags[] = {};
		accs[] = {};
	};

	//Civ Gen Store
	class genstore {
		name = "Altis General Store";
		side = "civ";
		conditions = "";
		items[] = {
			{ "FirstAidKit", "", 200, 100, "" },
			{ "Binocular", "", 400, 200, "" },
			{ "ItemGPS", "", 500, 250, "" },
			{ "ItemRadio", "", 500, 250, "" },
			{ "ItemMap", "", 100, 50, "" },
			{ "ItemCompass", "", 200, 100, "" },
			{ "ItemWatch", "", 100, 50, "" },
			{ "NVGoggles", "", 2500, 1700, "" }
		};
	};

	//EMS Gen Store
	class med_basic {
		name = "EMS General Store";
		side = "med";
		conditions = "call in_mediclevel >= 1";
		items[] = {
			{ "ItemGPS", "", 50, 25, "" },
			{ "ItemRadio", "", 50, 25, "" },
			{ "ItemMap", "", 10, 5, "" },
			{ "ItemCompass", "", 20, 10, "" },
			{ "ItemWatch", "", 10 , 5, "" },
			{ "FirstAidKit", "", 100, 50, "" },
			{ "NVGoggles", "", 250, 125, "" },
			{ "SmokeShell", "Smoke Grenades", 500, 250, "license_med_mCM" }
		};
	};

	// Cop Gen Store
	class copgenstore {
		name = "Cop General Store";
		side = "cop";
		conditions = "call in_coplevel >= 1";
		items[] = {
			{ "Binocular", "", 40, 20, "" },
			{ "ItemGPS", "", 50, 25, "" },
			{ "ItemRadio", "", 50, 25, "" },
			{ "ItemMap", "", 10, 5, "" },
			{ "ItemCompass", "", 20, 10, "" },
			{ "ItemWatch", "", 10, 5, "" },
			{ "FirstAidKit", "", 100, 50, "" },
			{ "NVGoggles_OPFOR", "", 200, 100, "" }
		};
	};

	// SWAT Gen Store
	class swatgenstore {
		name = "SWAT General Store";
		side = "cop";
		conditions = "license_cop_cSWAT";
		items[] = {
			{ "Rangefinder", "", 50, 25, "" },
			{ "Binocular", "", 40, 20, "" },
			{ "ItemGPS", "", 50, 25, "" },
			{ "ItemRadio", "", 50, 25, "" },
			{ "ItemMap", "", 10, 5, "" },
			{ "ItemCompass", "", 20, 10, "" },
			{ "ItemWatch", "", 10, 5, "" },
			{ "FirstAidKit", "", 100, 50, ""},
			{ "NVGogglesB_blk_F", "", 200, 100, "" }
		};
	};

	// Rebel Gen Store
	class rebgenstore {
		name = "Rebel General Store";
		side = "civ";
		conditions = "license_civ_reb";
		items[] = {
			{ "FirstAidKit", "", 200, 50, "" },
			{ "Binocular", "", 400, 200, "" },
			{ "ItemGPS", "", 500, 250, "" },
			{ "ItemRadio", "", 500, 250, "" },
			{ "ItemMap", "", 100, 50, "" },
			{ "ItemCompass", "", 200, 100, "" },
			{ "ItemWatch", "", 100, 50, "" },
			{ "NVGoggles", "", 2500, 1700, "" }
		};
	};

	// Corp Gen Store
	class corpgenstore {
		name = "Corp General Store";
		side = "civ";
		conditions = "license_civ_corp";
		items[] = {
			{ "FirstAidKit", "", 200, 50, "" },
			{ "Rangefinder", "", 1000, 500, "" },
			{ "Binocular", "", 400, 200, "" },
			{ "ItemGPS", "", 500, 250, "" },
			{ "ItemRadio", "", 500, 250, ""},
			{ "ItemMap", "", 100, 50, "" },
			{ "ItemCompass", "", 200, 100, "" },
			{ "ItemWatch", "", 100, 50, "" },
			{ "NVGoggles_tna_F", "", 1500, 750, "" },
			{ "NVGoggles_INDEP", "", 1500, 750, "" }
		};
	};

	//Rebel Weapon Shop
	class rebel {
		name = "Rebel Armoury";
		side = "civ";
		conditions = "license_civ_reb";
		items[] = {
			{ "arifle_AK12_F", "", 220000, 100000, "license_civ_advreb" },
			{ "arifle_AKM_F", "", 150000, 75000, "license_civ_advreb" },
			{ "srifle_DMR_06_camo_F", "", 200000, 90000, "license_civ_advreb" },
			{ "srifle_DMR_03_tan_F", "", 200000, 90000, "license_civ_advreb" },
			{ "srifle_DMR_01_F", "", 100000, 50000, "license_civ_advreb" },
			{ "srifle_DMR_07_hex_F", "", 60000, 30000, "" },
			{ "arifle_MX_SW_F", "", 160000, 80000, "license_civ_advreb" },
			{ "arifle_MXM_F", "", 80000, 40000, "license_civ_advreb" },
			{ "arifle_MX_F", "", 40000, 20000, "" },
			{ "arifle_MXC_F", "", 35000, 17500, "" },
			{ "arifle_Katiba_C_F", "", 40000, 20000, "" },
			{ "arifle_CTARS_hex_F", "", 100000, 50000, "license_civ_advreb"},
			{ "arifle_CTAR_hex_F", "", 30000, 15000, "" },
			{ "arifle_AKS_F", "", 20000, 10000, "" },
			{ "arifle_TRG21_F", "", 25000, 10000, "" },
			{ "arifle_Mk20_plain_F", "", 25000, 10000, "" },
			{ "hgun_Pistol_heavy_01_F", "", 5000, 5000, "" },
			{ "hgun_Pistol_heavy_02_F", "", 5000, 5000, "" },
			{ "hgun_Pistol_01_F", "", 3000, 1500, "" },
			{ "hgun_Rook40_F", "", 3000, 1500, "" }
		};
		mags[] = {		
			{ "30Rnd_762x39_Mag_F", "", 250, 125, "" },
			{ "20Rnd_762x51_Mag", "", 250, 125, "" },
			{ "10Rnd_762x54_Mag", "", 250, 125, "" },
			{ "10Rnd_9x21_Mag", "", 100, 50, "" },
			{ "20Rnd_650x39_Cased_Mag_F", "", 250, 125, "" },
			{ "30Rnd_65x39_caseless_green", "", 250 },
			{ "100Rnd_580x42_Mag_F", "", 700, 350, "" },
			{ "100Rnd_65x39_caseless_mag", "", 700, 350, "" },
			{ "30Rnd_65x39_caseless_mag", "", 240, 120, "" },
			{ "30Rnd_580x42_Mag_F", "", 200, 100, "" },
			{ "30Rnd_556x45_Stanag", "", 200, 100, "" },
			{ "30Rnd_65x39_caseless_green", "", 250, 125, "" },
			{ "30Rnd_545x39_Mag_F", "", 200, 100, "" },
			{ "11Rnd_45ACP_Mag", "", 150, 75, "" },
			{ "16Rnd_9x21_Mag", "", 150, 75, "" },
			{ "30Rnd_9x21_Mag", "", 200, 100, "" },
			{ "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
			{ "UGL_FlareWhite_F", "", 1500, 1000, "" },
			{ "UGL_FlareGreen_F", "", 1500, 1000, "" },
			{ "UGL_FlareRed_F", "", 1500, 1000, "" },
			{ "1Rnd_Smoke_Grenade_shell", "", 1500, 1000, "" },
			{ "1Rnd_SmokeRed_Grenade_shell", "", 1500, 1000, "" },
			{ "1Rnd_SmokeGreen_Grenade_shell", "", 1500, 1000, "" }
		};
		accs[] = {
			{ "optic_MRD", "MRD", 200, 100, "" },
			{ "optic_Yorris", "Yorris", 200, 100, "" },
			{ "optic_Aco", "ACO", 300, 150, "" },
			{ "optic_Holosight", "Holosight", 500, 250, "" },
			{ "optic_MRCO", "MRCO", 1000, 500, "" },
			{ "optic_Hamr", "RCO", 1000, 500, "" },
			{ "optic_Arco", "ARCO", 1000, 500, "" },
			{ "optic_Arco_blk_F", "ARCO", 1000, 500, "" },
			{ "optic_ERCO_snd_F", "ERCO", 1000, 500, "" },
			{ "optic_DMS", "DMS", 10000, 5000, "license_civ_advreb" },
			{ "optic_AMS", "AMS", 10000, 5000, "license_civ_advreb" },
			{ "bipod_01_F_blk", "Black Bipod", 5000, 2500, "license_civ_advreb" },
			{ "bipod_01_F_snd", "Sand Bipod", 5000, 2500, "license_civ_advreb" },
			{ "muzzle_snds_H_MG", "", 90000, 45000, "license_civ_advreb" },
			{ "muzzle_snds_H_snd_F", "", 90000, 40000, "license_civ_advreb" },
			{ "muzzle_snds_B_snd_F", "", 90000, 40000, "license_civ_advreb" },
			{ "muzzle_snds_58_blk_F", "", 90000, 40000, "license_civ_advreb" },
			{ "muzzle_snds_H", "", 50000, 25000, "license_civ_advreb" },
			{ "muzzle_snds_B", "", 50000, 25000, "license_civ_advreb" },
			{ "muzzle_snds_M", "", 50000, 25000, "license_civ_advreb" },
			{ "muzzle_snds_L", "", 50000, 25000, "license_civ_advreb" }
		};
	};

	//Rebel Explosive Weapons Shop
	class advrebexp {
		name = "Alan's Snack Bar";
		side = "civ";
		conditions = "license_civ_advreb";
		items[] = {
			{ "LMG_Mk200_F", "", 200000, 100000, "license_civ_advreb" },
			{ "launch_RPG7_F", "RPG", 500000, 250000, "license_civ_advreb" },
			{ "RPG7_F", "RPG Ammunition", 60000, 30000, "license_civ_advreb" }
		};
		mags[] = {
			{ "200Rnd_65x39_cased_Box", "", 2000, 1000, "" }
		};
		accs[] = {
			{ "optic_MRD", "MRD", 200, 100, "" },
			{ "optic_Yorris", "Yorris", 200, 100, "" },
			{ "optic_Aco", "ACO", 300, 150, "" },
			{ "optic_Holosight", "Holosight", 500, 250, "" },
			{ "optic_MRCO", "MRCO", 1000, 500, "" },
			{ "optic_Hamr", "RCO", 1000, 500, "" },
			{ "optic_Arco", "ARCO", 1000, 500, "" },
			{ "optic_Arco_blk_F", "ARCO", 1000, 500, "" },
			{ "optic_ERCO_snd_F", "ERCO", 1000, 500, "" },
			{ "optic_DMS", "DMS", 10000, 5000, "license_civ_advreb" },
			{ "optic_AMS", "AMS", 10000, 5000, "license_civ_advreb" },
			{ "bipod_01_F_blk", "Black Bipod", 5000, 2500, "license_civ_advreb" },
			{ "bipod_01_F_snd", "Sand Bipod", 5000, 2500, "license_civ_advreb" },
			{ "muzzle_snds_H_MG", "", 90000, 45000, "license_civ_advreb" },
			{ "muzzle_snds_H_snd_F", "", 90000, 40000, "license_civ_advreb" },
			{ "muzzle_snds_B_snd_F", "", 90000, 40000, "license_civ_advreb" },
			{ "muzzle_snds_58_blk_F", "", 90000, 40000, "license_civ_advreb" },
			{ "muzzle_snds_H", "", 50000, 25000, "license_civ_advreb" },
			{ "muzzle_snds_B", "", 50000, 25000, "license_civ_advreb" },
			{ "muzzle_snds_M", "", 50000, 25000, "license_civ_advreb" },
			{ "muzzle_snds_L", "", 50000, 25000, "license_civ_advreb" }
		};
	};

	//Corp Weapon Shop
	class corp {
		name = "Corporation Armoury";
		side = "civ";
		conditions = "license_civ_corp";
		items[] = {
			{ "srifle_DMR_03_khaki_F", "", 200000, 90000, "license_civ_advcorp" },
			{ "srifle_DMR_06_olive_F", "", 200000, 90000, "license_civ_advcorp" },
			{ "srifle_EBR_F", "", 200000, 90000, "license_civ_advcorp" },
			{ "arifle_ARX_ghex_F", "", 80000, 40000, "" },
			{ "arifle_MX_SW_khk_F", "", 160000, 80000, "license_civ_advcorp" },
			{ "arifle_MXM_khk_F", "", 80000, 40000, "" },
			{ "arifle_MX_GL_khk_F", "", 80000, 40000, "license_civ_advcorp" },
			{ "arifle_MX_khk_F", "", 40000, 20000, "" },
			{ "arifle_MXC_khk_F", "", 35000, 17500, "" },
			{ "arifle_SPAR_03_khk_F", "", 50000, 25000, "" },
			{ "arifle_SPAR_02_khk_F", "", 160000, 80000, "license_civ_advcorp" },
			{ "arifle_SPAR_01_GL_khk_F", "", 130000, 65000, "license_civ_advcorp" },
			{ "arifle_SPAR_01_khk_F", "", 30000, 15000, "" },
			{ "arifle_Mk20_GL_F", "", 40000, 20000, "" },
			{ "arifle_Mk20C_F", "", 25000, 15000, "" },
			{ "SMG_02_F", "", 24000, 12000, "" },
			{ "hgun_Pistol_heavy_01_F", "", 10000, 5000, "" },
			{ "hgun_Pistol_heavy_02_F", "", 10000, 5000, "" },
			{ "hgun_Pistol_01_F", "", 7000, 3500, "" },
			{ "hgun_P07_khk_F", "", 5000, 2500, "" },
			{ "hgun_Rook40_F", "", 5000, 2500, "" },
			{ "", "===Special Mags===", 999999, 999999, "license_civ_advcorp" },
			{ "10Rnd_50BW_Mag_F", "", 5000, 3000, "license_civ_advcorp" },
			{ "UGL_FlareWhite_F", "", 1500, 750, "license_civ_advcorp" },
			{ "UGL_FlareGreen_F", "", 1500, 750, "license_civ_advcorp" },
			{ "UGL_FlareRed_F", "", 1500, 750, "license_civ_advcorp" },
			{ "3Rnd_UGL_FlareWhite_F", "", 2500, 750, "license_civ_advcorp" },
			{ "3Rnd_UGL_FlareGreen_F", "", 2500, 750, "license_civ_advcorp" },
			{ "3Rnd_UGL_FlareRed_F", "", 2500, 750, "license_civ_advcorp" },
			{ "1Rnd_Smoke_Grenade_shell", "", 1500, 750, "license_civ_advcorp" },
			{ "1Rnd_SmokeRed_Grenade_shell", "", 1500, 750, "license_civ_advcorp" },
			{ "1Rnd_SmokeGreen_Grenade_shell", "", 1500, 750, "license_civ_advcorp" },
			{ "3Rnd_Smoke_Grenade_shell", "", 2500, 750, "license_civ_advcorp" },
			{ "3Rnd_SmokeRed_Grenade_shell", "", 2500, 750, "license_civ_advcorp" },
			{ "3Rnd_SmokeGreen_Grenade_shell", "", 2500, 750, "license_civ_advcorp" }
		};
		mags[] = {
			{ "10Rnd_50BW_Mag_F", "", 5000, 2500, "" },
			{ "20Rnd_762x51_Mag", "", 500, 250, "" },
			{ "100Rnd_65x39_caseless_mag", "", 450, 225, "" },
			{ "150Rnd_556x45_Drum_Mag_F", "", 450, 225, "" },
			{ "10Rnd_9x21_Mag", "", 100, 50, "" },
			{ "30Rnd_65x39_caseless_green", "", 250, 125, "" },
			{ "30Rnd_556x45_Stanag", "", 180, 90, "" },
			{ "30Rnd_65x39_caseless_mag", "", 240, 120, "" },
			{ "30Rnd_9x21_Mag_SMG_02", "", 180, 90, "" },
			{ "30Rnd_9x21_Mag", "", 90, 45, "" },
			{ "16Rnd_9x21_Mag", "", 50, 25, "" },
			{ "11Rnd_45ACP_Mag", "", 50, 25, "" },
			{ "9Rnd_45ACP_Mag", "", 50, 25, "" },
			{ "6Rnd_45ACP_Cylinder", "", 50, 25, "" },
			{ "UGL_FlareWhite_F", "", 1500, 750, "" },
			{ "UGL_FlareGreen_F", "", 1500, 750, "" },
			{ "UGL_FlareRed_F", "", 1500, 750, "" },
			{ "1Rnd_Smoke_Grenade_shell", "", 1500, 750, "" },
			{ "1Rnd_SmokeRed_Grenade_shell", "", 1500, 750, "" },
			{ "1Rnd_SmokeGreen_Grenade_shell", "", 1500, 750, "" }
		};
		accs[] = {
			{ "optic_Yorris", "Yorris", 200, 100, "" },
			{ "optic_MRD", "MRD", 200, 100, "" },
			{ "optic_ACO_grn_smg", "SMG Green ACO", 300, 150, "" },
			{ "optic_Aco_smg", "SMG Red ACO", 300, 150, "" },
			{ "optic_Aco", "Red ACO", 300, 150, "" },
			{ "optic_ACO_grn", "Green ACO", 300, 150, "" },
			{ "optic_Holosight_smg", "SMG Holosight", 500, 250, "" },
			{ "optic_Holosight", "Holosight", 500, 250, "" },
			{ "optic_Holosight_khk_F", "Holosightk", 500, 250, "" },
			{ "optic_MRCO", "MRCO", 1000, 500, "" },
			{ "optic_Hamr", "RCO", 1000, 500, "" },
			{ "optic_Hamr_khk_F", "RCOk", 1000, 500, "" },
			{ "optic_Arco_blk_F", "Black ARCO", 1000, 500, "" },
			{ "optic_Arco_ghex_F", "Green ARCO", 1000, 500, "" },
			{ "optic_ERCO_blk_F", "ERCO", 1000, 500, "" },
			{ "optic_ERCO_khk_F", "Khaki ERCO", 1000, 500, "" },
			{ "optic_DMS", "DMS", 10000, 5000, "license_civ_advcorp" },
			{ "optic_DMS_ghex_F", "Green DMS", 10000, 5000, "license_civ_advcorp" },
			{ "optic_AMS", "AMS", 10000, 5000, "license_civ_advcorp" },
			{ "optic_AMS_khk", "Khaki AMS", 10000, 5000, "license_civ_advcorp" },
			{ "bipod_01_F_blk", "Bipod", 5000, 2500, "license_civ_advcorp" },
			{ "bipod_01_F_khk", "Bipod", 5000, 2500, "license_civ_advcorp" },
			{ "muzzle_snds_acp", "", 9000, 4500, "license_civ_advcorp" },
			{ "muzzle_snds_B_khk_F", "", 9000, 4500, "license_civ_advcorp" },
			{ "muzzle_snds_B", "", 9000, 4500, "license_civ_advcorp" },
			{ "muzzle_snds_m_khk_F", "", 9000, 4500, "license_civ_advcorp" },
			{ "muzzle_snds_M", "", 9000, 4500, "license_civ_advcorp" },
			{ "muzzle_snds_m_khk_F", "", 9000, 4500, "license_civ_advcorp" },
			{ "muzzle_snds_L", "", 9000, 4500, "license_civ_advcorp" },
			{ "muzzle_snds_H_khk_F", "", 9000, 4500, "license_civ_advcorp" },
			{ "muzzle_snds_65_TI_ghex_F", "", 9000, 4500, "license_civ_advcorp" }
		};
	};

	//Cop Weapon Shops
	class cop {
		name = "Cop Armoury";
		side = "cop";
		conditions = "call in_coplevel >= 1";
		items[] = {
			{ "arifle_SPAR_03_blk_F", "Police Marksman SPAR", 2500, 1250, "call in_coplevel >= 8" },
			{ "arifle_SPAR_01_blk_F", "Police SPAR", 1500, 750, "call in_coplevel >= 6" },
			{ "arifle_MX_SW_Black_F", "Police MX SW", 3000, 1500, "call in_coplevel >= 7" },
			{ "arifle_MXM_Black_F", "Police L Rifle", 2500, 1250, "call in_coplevel >= 4" },
			{ "arifle_MX_Black_F", "Police M Rifle", 2000, 1000, "call in_coplevel >= 3" },
			{ "arifle_MXC_Black_F", "Police S Rifle", 1500, 750, "call in_coplevel >= 2" },
			{ "SMG_01_F", "Taser SMG", 1000, 500, "" },
			{ "30Rnd_45ACP_Mag_SMG_01", "Taser Rifle Mag", 50, 25, "" },
			{ "hgun_Pistol_heavy_02_F", "Live Pistol", 1000, 500, "call in_coplevel >= 5" },
			{ "hgun_ACPC2_F", "Taser Pistol", 300, 150, "" }
		};
		mags[] = {
			{ "20Rnd_762x51_Mag", "Marksman SPAR Live", 150, 75, "" },
			{ "100Rnd_65x39_caseless_mag", "MX SW Live", 120, 60, "call in_coplevel >= 7" },
			{ "30Rnd_65x39_caseless_mag_Tracer", "Rifle Rubber", 80, 40, "" },
			{ "30Rnd_65x39_caseless_mag", "Rifle Live", 100, 50, "call in_coplevel >= 3" },
			{ "30Rnd_556x45_Stanag", "SPAR Live", 150, 75, "call in_coplevel >= 6" },
			{ "30Rnd_556x45_Stanag_Tracer_Green", "SPAR Rubber", 80, 40, "call in_coplevel >= 6" },
			{ "6Rnd_45ACP_Cylinder", "Live Pistol Mag", 100, 50, "call in_coplevel >= 5" },
			{ "9Rnd_45ACP_Mag", "Taser Mag", 30, 15, "" }
		};
		accs[] = {
			{ "bipod_01_F_blk", "Bipod", 50, 25, "" },
			{ "muzzle_snds_L", "SMG Silencer", 300, 150, "" },
			{ "muzzle_snds_B", "EBR/DMR Silencer", 500, 250, "call in_coplevel >= 8" },
			{ "muzzle_snds_acp", "Taser Silencer", 300, 150, "" },
			{ "acc_flashlight", "Flashlight", 20, 10, "" },
			{ "acc_pointer_IR", "Laser Pointer", 20, 10, "" },
			{ "optic_DMS", "DMS", 300, 150, "call in_coplevel >= 4" },
			{ "optic_SOS", "SOS", 300, 150, "call in_coplevel >= 4" },
			{ "optic_NVS", "NVS", 300, 150, "call in_coplevel >= 4" },
			{ "optic_MRCO", "MRCO", 200, 100, "" },
			{ "optic_Arco_blk_F", "ARCO", 200, 100, "" },
			{ "optic_Hamr", "RCO", 200, 100, "" },
			{ "optic_Holosight_blk_F", "HOLO", 150, 75, "" },
			{ "optic_ACO_grn_smg", "", 100, 50, "" },
			{ "optic_Aco_smg", "", 100, 50, "" },
			{ "optic_Holosight_smg_blk_F", "", 100, 50, "" },
			{ "optic_Aco", "ACO", 100, 50, "" },
			{ "optic_Yorris", "Yorris", 100, 50, "call in_coplevel >= 5" }
		};
	};

	class cop_uc {
		name = "Undercover Armoury";
		side = "cop";
		conditions = "call in_coplevel >= 1 && license_cop_cUC";
		items[] = {
			{ "arifle_MX_F", "Rebel M Rifle", 2000, 1000, "" },
			{ "arifle_CTAR_hex_F", "Rebel CTAR Rifle", 1500, 750, "" },
			{ "hgun_ACPC2_F", "Taser Pistol", 300, 150, ""}
		};
		mags[] = {
			{ "30Rnd_65x39_caseless_mag", "Rifle Live", 250, 125, "" },
			{ "30Rnd_580x42_Mag_F", "", 200, 100, "" },
			{ "9Rnd_45ACP_Mag", "Taser Mag", 40, 20, "" }
		};
		accs[] = {
			{ "bipod_01_F_blk", "Bipod", 50, 25, "" },
			{ "acc_flashlight", "Flashlight", 20, 10, "" },
			{ "acc_pointer_IR", "Laser Pointer", 20, 10, "" },
			{ "optic_MRCO", "MRCO", 200, 100, "" },
			{ "optic_Hamr", "RCO", 200, 100, "" },
			{ "optic_Holosight", "RCO", 100, 50, "" }
		};
	};
	
	class cop_swat {
		name = "SWAT Armoury";
		side = "cop";
		conditions = "call in_coplevel >= 1 && license_cop_cSWAT";
		items[] = {
			{ "arifle_SPAR_03_blk_F", "SPAR 7.62", 5000, 2500, "" },
			{ "LMG_03_F", "Light Machine Gun", 5000, 2500, "" },
			{ "arifle_MX_SW_Black_F", "MX-SW", 5000, 2500, "" },
			{ "arifle_SPAR_01_GL_blk_F", "SPAR GL", 3500, 1750, "" },
			{ "arifle_Katiba_F", "Long Barrel Katiba", 5000, 2500, "" },
			{ "arifle_ARX_blk_F", "115 Rifle", 3000, 1500, "" },
			{ "arifle_SPAR_01_blk_F", "SPAR 5.56", 3000, 1500, "" },
			{ "SMG_05_F", "Police MP5", 1500, 750, "" },
			{ "hgun_ACPC2_F", "Taser Pistol", 300, 150, "" },
			{ "", "===Special Mags===", 999999, -1, "" },
			{ "10Rnd_50BW_Mag_F", "", 200, 100, "" },
			{ "B_IR_Grenade", "EMP Grenade", 20, 10, "" },
			{ "HandGrenade_Stone", "Flashbang", 20, 10, "" },
			{ "SmokeShellOrange", "Tear Gas", 20, 10, "" }
		};
		mags[] = {
			{ "20Rnd_762x51_Mag", "7.62 Live", 100, 50, "" },
			{ "30Rnd_65x39_caseless_green", "6.5 Live", 80, 40, "" },
			{ "30Rnd_556x45_Stanag", "SPAR Live", 80, 40, "" },
			{ "30Rnd_556x45_Stanag_Tracer_Green", "SPAR Rubber", 80, 40, "" },
			{ "200Rnd_556x45_Box_F", "200RND Belt Live", 100, 25, "" },
			{ "100Rnd_65x39_caseless_mag", "100RND Mag Live", 100, 50, "" },
			{ "30Rnd_9x21_Mag_SMG_02", "9mm Live", 50, 25, "" },
			{ "9Rnd_45ACP_Mag", "Taser Mag", 40, 20, "" }
		};
		accs[] = {
			{ "bipod_01_F_blk", "Bipod", 300, 150, "" },
			{ "muzzle_snds_65_TI_blk_F", "115 Silencer", 300, 150, "" },
			{ "muzzle_snds_M", "5.56 Silencer", 300, 150, "" },
			{ "muzzle_snds_L", "9mm Silencer", 300, 150, "" },
			{ "optic_NVS", "NVS", 300, 150, "" },
			{ "optic_MRCO", "MRCO", 200, 100, "" },
			{ "optic_Arco_blk_F", "ARCO", 200 },
			{ "optic_Hamr", "RCO", 200, 100, "" },
			{ "optic_Holosight_blk_F", "HOLO", 200, 100, "" },
			{ "optic_Aco", "ACO", 100, 50, "" },
			{ "acc_flashlight", "Flashlight", 20, 10, "" },
			{ "acc_pointer_IR", "Laser Pointer", 20, 10, "" }
		};
	};
	
	class cop_sniper {
		name = "SWAT Sniper Armoury";
		side = "cop";
		conditions = "call in_coplevel >= 1 && license_cop_cSniper";
		items[] = {
			{ "srifle_GM6_F", "Lynx", 20000, 10000, "" },
			{ "srifle_LRR_F", "LRR", 20000, 10000, "" },
			{ "srifle_DMR_02_F", ".388 Sniper Rifle", 10000, 5000, "" },
			{ "srifle_DMR_03_F", "Marksman Rifle", 3000, 1500, "" },
			{ "arifle_ARX_blk_F", "115 Rifle", 3000, 1500, "" },
			{ "hgun_ACPC2_F", "Taser Pistol", 300, 150, "" },
			{ "", "===Special Mags===", 999999, -1, "" },
			{ "10Rnd_50BW_Mag_F", "", 200, 100, "" },
			{ "B_IR_Grenade", "EMP Grenade", 20, 10, "" },
			{ "HandGrenade_Stone", "Flashbang", 20, 10, "" },
			{ "SmokeShellOrange", "Tear Gas", 20, 10, "" }
		};
		mags[] = {
			{ "5Rnd_127x108_Mag", "Lynx Rounds", 200, 100, "" },
			{ "5Rnd_127x108_APDS_Mag", "Lynx APDS Rounds", 200, 100, "" },
			{ "7Rnd_408_Mag", "LRR Rounds", 200, 100, "" },
			{ "10Rnd_50BW_Mag_F", "115 .50 Live", 200, 100, "" },
			{ "10Rnd_338_Mag", ".338 Live", 150, 75, "" },
			{ "20Rnd_762x51_Mag", "7.62 Live", 100, 50, "" },
			{ "30Rnd_65x39_caseless_green", "6.5 Live", 80, 40, "" },
			{ "9Rnd_45ACP_Mag", "Taser Mag", 40, 20, "" }
		};
		accs[] = {
			{ "bipod_01_F_blk", "Bipod", 300, 150, "" },
			{ "muzzle_snds_338_black", ".338 Silencer", 300, 150, "" },
			{ "muzzle_snds_B", "7.62 Silencer", 300, 150, "" },
			{ "muzzle_snds_65_TI_hex_F", "115 Silencer", 300, 150, "" },
			{ "optic_DMS", "DMS", 300, 150, "" },
			{ "optic_SOS", "SOS", 300, 150, "" },
			{ "optic_NVS", "NVS", 300, 150, "" },
			{ "optic_LRPS", "LRPS", 400, 200, "" },
			{ "optic_AMS", "AMS", 300, 150, "" },
			{ "optic_KHS_blk", "KHS", 300, 150, "" },
			{ "optic_MRCO", "MRCO", 200, 100, "" },
			{ "optic_Arco_blk_F", "ARCO", 200, 100, "" },
			{ "optic_Hamr", "RCO", 200, 100, "" },
			{ "optic_Holosight_blk_F", "HOLO", 200, 100, "" },
			{ "acc_flashlight", "Flashlight", 20, 10, "" },
			{ "acc_pointer_IR", "Laser Pointer", 20, 10, "" }
		};
	};
};