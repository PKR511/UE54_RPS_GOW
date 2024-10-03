// AnVilE Production


#include "Items/Weapons/WarriorHeroWeaponBase.h"

void AWarriorHeroWeaponBase::AssignGrantedAbilitySpecHandles(const TArray<FGameplayAbilitySpecHandle>& InSpecHandles)
{
	GrantedAbilitySpecHandles = InSpecHandles;

}//AssignGrantedAbilitySpecHandles


TArray<FGameplayAbilitySpecHandle> AWarriorHeroWeaponBase::GetGrantedAbilitySpecHandles() const
{
	return GrantedAbilitySpecHandles;

}//AWarriorHeroWeapon