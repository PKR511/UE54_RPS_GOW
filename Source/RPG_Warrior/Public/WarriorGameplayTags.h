// AnVilE Production

#pragma once

#include "NativeGameplayTags.h"

namespace WarriorGameplayTags
{
	/** Input Tags **/
	RPG_WARRIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Move);
	RPG_WARRIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Look);
	RPG_WARRIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_EquipAxe);
	RPG_WARRIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_UnequipAxe);
	RPG_WARRIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_LightAttack_Axe);
	RPG_WARRIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_HeavyAttack_Axe);

	/** Player Tags **/

	RPG_WARRIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Weapon_Axe);
	
	RPG_WARRIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Equip_Axe);
	RPG_WARRIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Unequip_Axe);

	RPG_WARRIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Status_JumpToFinisher);


	RPG_WARRIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Equip_Axe);
	RPG_WARRIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Unequip_Axe);

	RPG_WARRIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Attack_Light_Axe);
	RPG_WARRIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Attack_Heavy_Axe);


}