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

void UHeroCombatComponent::OnHitTargetActor(AActor* HitActor)
{
    Debug::Print(GetOwningPawn()->GetActorNameOrLabel() + TEXT(" hit ") + HitActor->GetActorNameOrLabel(), FColor::Green);
}

void UHeroCombatComponent::OnWeaponPulledFromTargetActor(AActor* InteractedActor)
{
    Debug::Print(GetOwningPawn()->GetActorNameOrLabel() + TEXT("'s weapon pulled from ") + InteractedActor->GetActorNameOrLabel(), FColor::Red);
}