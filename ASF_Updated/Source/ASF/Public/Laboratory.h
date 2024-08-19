#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EResearchProjectStatus.h"
#include "EXenoTechTier.h"
#include "Event_ResearchProjectDataAssetDelegate.h"
#include "LaboratoryEventDelegate.h"
#include "ResearchProject.h"
#include "Room.h"
#include "Laboratory.generated.h"

class UBM_ResearchProject_DataAsset;
class UXenoTech_DataAsset;

UCLASS(Blueprintable)
class ASF_API ALaboratory : public ARoom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ResearchProjectDataAsset OnResearchProjectStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ResearchProjectDataAsset OnResearchProjectComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLaboratoryEvent OnNewAvailableResearchProjectChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EXenoTechTier BaseXenoTechTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EXenoTechTier XenoTechTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseProjectDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProjectDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> ProjectDurationUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisabledResearchDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FResearchProject> OngoingResearchProjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<UBM_ResearchProject_DataAsset*> AvailableResearchProjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<UBM_ResearchProject_DataAsset*> CompletedResearchProjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<UBM_ResearchProject_DataAsset*> NewAvailableResearchProjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bFirstVisitSinceMission09;
    
public:
    ALaboratory(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartResearchProject(UBM_ResearchProject_DataAsset* _DataAsset);
    
    UFUNCTION(BlueprintCallable)
    void RemoveNewAvailableResearchProject(UBM_ResearchProject_DataAsset* _Asset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResearchDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProjectConditionMet(UBM_ResearchProject_DataAsset* _DataAsset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetUpgradeNameForXenoTechTier(EXenoTechTier _XenoTechTier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UXenoTech_DataAsset*> GetUnlockedXenoTechs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EResearchProjectStatus GetResearchProjectStatus(UBM_ResearchProject_DataAsset* _ResearchAsset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetResearchProjectName(UBM_ResearchProject_DataAsset* _Asset, FName& _Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetResearchProjectByName(UBM_ResearchProject_DataAsset*& _Asset, FName _Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingResearchProjectCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOngoingResearchProject(FResearchProject& _ResearchProject, UBM_ResearchProject_DataAsset* _ResearchAsset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableResearchProjectCount() const;
    
    UFUNCTION(BlueprintCallable)
    void CompleteResearchProject(const FResearchProject& _ResearchProject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanResearchProject(UBM_ResearchProject_DataAsset* _DataAsset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAffordProject(UBM_ResearchProject_DataAsset* _DataAsset) const;
    
    UFUNCTION(BlueprintCallable)
    void AddNewAvailableResearchProject(UBM_ResearchProject_DataAsset* _Asset);
    
    UFUNCTION(BlueprintCallable)
    void AddDisabledResearchDuration(int32 _Turns);
    
    UFUNCTION(BlueprintCallable)
    void AccomplishResearchProject(UBM_ResearchProject_DataAsset* _DataAsset);
    
};

