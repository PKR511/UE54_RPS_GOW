// AnVilE Production


#include "Components/Combat/HeroCombatComponent.h"

#include "Items/Weapons/WarriorHeroWeaponBase.h"

AWarriorHeroWeaponBase* UHeroCombatComponent::GetHeroCarriedWeaponByTag(FGameplayTag InWeaponTag) const
{
    return Cast<AWarriorHeroWeaponBase>(GetCharacterCarriedWeaponByTag(InWeaponTag));

}//GetHeroCarriedWeaponByTag.