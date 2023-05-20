#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETriggerType.h"
#include "BMInvalidActionsData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMInvalidActionsData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString InvalidActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETriggerType TriggerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DisplayedString;
    
    UPROPERTY()
    int32 PriorityNumber;
    
    FBMInvalidActionsData();
};

