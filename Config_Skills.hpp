class CfgSkills {
	/* All Sides */
	class mechanic {
		name = "Mechanic";
		skillIdentifier = ;
		description = "Increase vehicle repair speed by %1.";
		descriptionTiers[] = {"0%", "5%", "%10", "15%", "20%"};
		tiers = 5;
		playSide = -1;
	};

	class smooth_talker {
		name = "Smooth Talker";
		skillIdentifier = ;
		description = "%1 decreased prices at all legal stores.";
		descriptionTiers[] = {"0%", "2%", "4%", "6%", "8%", "10%"};
		tiers = 6;
		playSide = -1;
	};

	/* Civilian Skills */
	class nimble_fingers {
		name = "Nimble Fingers";
		skillIdentifier = ;
		description = "Increases lockpicking speed by %1";
		descriptionTiers[] = {"0%", "5%", "%10", "15%", "20%"};
		tiers = 5;
		playSide = 3;
	};

	class drug_lord {
		name = "Drug Lord";
		skillIdentifier = ;
		description = "Recieve an extra %1 when selling drugs.";
		descriptionTiers[] = {"0%", "5%", "%10", "15%"};
		tiers = 4;
		playSide = 3;
	};

	class gatherer {
		name = "Legal Gatherer";
		skillIdentifier = ;
		description = "You can gather legal items %1 faster.";
		descriptionTiers[] = {"0%", "5%", "%10", "15%", "20%"};
		tiers = 5;
		playSide = 3;
	};

	/* Cop Skills */
	class snitches {
		name = "Snitches";
		skillIdentifier = ;
		description = "%1 chance to be notified when a crinimal enters a major city.";
		descriptionTiers[] = {"0%", "5%", "%10", "15%", "20%"};
		tiers = 5;
		playSide = 1;
	};

	class ticket_master {
		name = "Ticket Master";
		skillIdentifier = ;
		description = "%1 increased payout for paid tickets and jailed suspects.";
		descriptionTiers[] = {"0%", "5%", "%10", "15%", "20%"};
		tiers = 5;
		playSide = 1;
	};
};
