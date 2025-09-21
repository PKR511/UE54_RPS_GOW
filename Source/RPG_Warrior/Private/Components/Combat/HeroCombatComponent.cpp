// AnVilE Production


#include "Components/Combat/HeroCombatComponent.h"
#include "Items/Weapons/WarriorHeroWeaponBase.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "WarriorGameplayTags.h"


#include "WarriorDebugHelper.h"

AWarriorHeroWeaponBase* UHeroCombatComponent::GetHeroCarriedWeaponByTag(FGameplayTag InWeaponTag) const
{
    return Cast<AWarriorHeroWeaponBase>(GetCharacterCarriedWeaponByTag(InWeaponTag));

}//GetHeroCarriedWeaponByTag.

AWarriorHeroWeaponBase* UHeroCombatComponent::GetHeroCurrentEquippedWeapon() const
{
	return Cast<AWarriorHeroWeaponBase>(GetCharacterCurrentEquippedWeapon());
}//GetHeroCurrentEquippedWeapon.

float UHeroCombatComponent::GetHeroCurrentEquippWeaponDamageAtLevel(float InLevel) const
{
	return GetHeroCurrentEquippedWeapon()->HeroWeaponData.WeaponBaseDamage.GetValueAtLevel(InLevel);
}//GetHeroCurrentEquippWeaponDamageAtLevel.

void UHeroCombatComponent::OnHitTargetActor(AActor* HitActor)
{
    //Debug::Print(GetOwningPawn()->GetActorNameOrLabel() + TEXT(" hit ") + HitActor->GetActorNameOrLabel(), FColor::Green);

	if (OverlappedActors.Contains(HitActor))
	{
		return;
	}

	OverlappedActors.AddUnique(HitActor);

	FGameplayEventData Data;
	Data.Instigator = GetOwningPawn();
	Data.Target = HitActor;

	UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
		GetOwningPawn(),
		WarriorGameplayTags::Shared_Event_MeleeHit,
		Data
	);

	UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
		GetOwningPawn(),
		WarriorGameplayTags::Player_Event_HitPause,
		FGameplayEventData()
	);
}

void UHeroCombatComponent::OnWeaponPulledFromTargetActor(AActor* InteractedActor)
{
    //Debug::Print(GetOwningPawn()->GetActorNameOrLabel() + TEXT("'s weapon pulled from ") + InteractedActor->GetActorNameOrLabel(), FColor::Red);

	UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
		GetOwningPawn(),
		WarriorGameplayTags::Player_Event_HitPause,
		FGameplayEventData()
	);
}