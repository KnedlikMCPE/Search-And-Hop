#pragma once
#include "CoreMinimal.h"
#include "BMBaseTap.h"
#include "Engine/EngineTypes.h"
#include "BMPump.generated.h"

class ABMTube;
class UMaterialInstance;
class USplineComponent;
class UMaterialInstanceDynamic;
class UChildActorComponent;
class USkeletalMeshComponent;
class UAudioComponent;

UCLASS()
class BREWMASTERMAIN_API ABMPump : public ABMBaseTap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ABMTube* FirstTubeConnected;
    
    UPROPERTY()
    ABMTube* SecondTubeConnected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USplineComponent* FirstConnectionSplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USplineComponent* SecondConnectionSplineComponent;
    
public:
    UPROPERTY(EditAnywhere)
    FComponentReference FirstConnectionSpline;
    
    UPROPERTY(EditAnywhere)
    FComponentReference SecondConnectionSpline;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UChildActorComponent* Inflow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UChildActorComponent* Outflow;
    
    UPROPERTY()
    ABMBaseTap* InflowTap;
    
    UPROPERTY()
    ABMBaseTap* OutflowTap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* PumpMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* LightsMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LightMaterialSlot;
    
    UPROPERTY()
    UMaterialInstanceDynamic* DynamicLights;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UAudioComponent* AudioComponent;
    
public:
    ABMPump();
    UFUNCTION()
    void UpdateTubeLiquidVisuals(ABMTube* CallingTube);
    
};

