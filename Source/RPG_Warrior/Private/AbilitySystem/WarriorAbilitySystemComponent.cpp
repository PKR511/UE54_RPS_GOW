// AnVilE Production


#include "AbilitySystem/WarriorAbilitySystemComponent.h"

void UWarriorAbilitySystemComponent::OnAbilityInputPressed(const FGameplayTag& InInputTag)
{
	if (!InInputTag.IsValid())
	{
		return;
	}
	for (const FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		if (!AbilitySpec.DynamicAbilityTags.HasTagExact(InInputTag)) continue;
		TryActivateAbility(AbilitySpec.Handle);
	}

}//OnAbilityInputPressed.


void UWarriorAbilitySystemComponent::OnAbilityInputReleased(const FGameplayTag& InInputTag)
{


}//OnAbilityInputReleased