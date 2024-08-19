#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "Segment.h"
#include "Templates/SubclassOf.h"
#include "Tinda_Float.h"
#include "MathFunctionLibrary.generated.h"

class AAIController;
class AActor;
class AFOWRevertedManagerActor;
class UActorComponent;
class UBoxComponent;
class UFOWRevertedRenderTextureDrawer;
class UNavigationQueryFilter;
class UObject;
class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class ASF_API UMathFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMathFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static FVector2D WorldToTextureUV(FVector PlaneBottomRight, FVector2D PlanSize, FVector Position);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D TranslateUVByOffset(FVector2D _UV, FVector2D _UVOffset, float _Zoom);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector TexturePositionUVToWorld(FVector PlaneBottomRight, FVector2D PlanSize, FVector2D PixelPositionUV);
    
    UFUNCTION(BlueprintCallable)
    static FVector TexturePositionToWorld(FVector PlaneBottomRight, FVector2D PlanSize, FVector2D TextureSize, FVector2D PixelPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString TagAsString(FGameplayTag _Tag);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTag> SortTags(const TArray<FGameplayTag>& _TagList);
    
    UFUNCTION(BlueprintCallable)
    static TArray<USceneComponent*> SortComponentByDistance(FVector _From, const TArray<USceneComponent*>& _Comp);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> SortActorByDistance2D(FVector _From, const TArray<AActor*>& _actors);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> SortActorByDistance(FVector _From, const TArray<AActor*>& _actors);
    
    UFUNCTION(BlueprintCallable)
    static void SetTinda_Float_Min(UPARAM(Ref) FTinda_Float& _TindaFloat, float _NewMin);
    
    UFUNCTION(BlueprintCallable)
    static void SetTinda_Float_Max(UPARAM(Ref) FTinda_Float& _TindaFloat, float _NewMax);
    
    UFUNCTION(BlueprintCallable)
    static void SetTinda_Float(UPARAM(Ref) FTinda_Float& _TindaFloat, float _NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Pack2f16tof32(const float A, const float B);
    
    UFUNCTION(BlueprintCallable)
    static FVector NormalizeVector(FVector _V);
    
    UFUNCTION(BlueprintCallable)
    static FVector Navigation_GetClosestVisibleWayPoint_Drawer(AActor* Origin, FVector Destination, UFOWRevertedRenderTextureDrawer* Drawer, TSubclassOf<UNavigationQueryFilter> FilterClass, float& PathLength_TargetToPoint, float& PathLength_PointToDest);
    
    UFUNCTION(BlueprintCallable)
    static FVector Navigation_GetClosestVisibleWayPoint(AActor* Origin, FVector Destination, AFOWRevertedManagerActor* FOWManager, TSubclassOf<UNavigationQueryFilter> FilterClass, float& PathLength);
    
    UFUNCTION(BlueprintCallable)
    static bool Navigation_GetAngleToDestination(AActor* Start, AAIController* Controller, FVector Destination, float& Angle, FVector& Direction);
    
    UFUNCTION(BlueprintCallable)
    static bool Navigation_GetAngleToActor(AActor* Start, AAIController* Controller, AActor* Destination, float& Angle, FVector& Direction);
    
    UFUNCTION(BlueprintCallable)
    static FVector MovePoint_HeigthLineDirection(FVector _Prev, FVector _Curr, FVector _Next, float _Offset);
    
    UFUNCTION(BlueprintCallable)
    static bool LineToLineIntersection(const FVector& fromA, const FVector& fromB, const FVector& toA, const FVector& toB, FVector& _OutIntersection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsVectorValid(const FVector _V);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPointOnSegment_Intersection(FSegment _Segment, FVector _Point, FVector& _OutIntersection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPointOnSegment(FSegment _Segment, FVector _Point);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLocationOnScreen(const UObject* WorldContextObject, FVector _WorldPosition, FVector2D _ScreenRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorOnScreen(AActor* _Actor, FVector2D _ScreenRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorFacingTarget(AActor* _From, FVector _Target, float _angleTolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float intBitsToFloat(const int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetVectorSymmetry(FVector V, FVector SymmetryAxeNormal);
    
    UFUNCTION(BlueprintCallable)
    static float GetTriangleArea_Heron(const FVector& A, const FVector& B, const FVector& C);
    
    UFUNCTION(BlueprintCallable)
    static float GetTriangleArea(const FVector& A, const FVector& B, const FVector& C);
    
    UFUNCTION(BlueprintCallable)
    static float GetTinda_Float(UPARAM(Ref) FTinda_Float& _TindaFloat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetStrengthWeight(const float _Weight);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVector> GetRemainingSplinePoint(const USplineComponent* _Spline, float _Distance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetRandomPointInCircle(FVector _Center, float _Radius, FVector _Normal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetPointOnSlopAtDistance2D(FVector _Origin, float _Distance, float _Slope, FVector& _OutP1, FVector& _OutP2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFullAngleBetweenTwoVector2D(FVector2D A, FVector2D B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFLT_MIN();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFLT_MAX();
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetDefaultObject_BP(UClass* _ObjectClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDecisionWeight(const float _Weight);
    
    UFUNCTION(BlueprintCallable)
    static void GetBoxUnionBounds(TArray<UBoxComponent*> Boxes, FVector& Origin, FVector& BoxExtent, float& SphereRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetArrayAverage(TArray<float> Array);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAngleBetweenTwoVector2D(FVector2D A, FVector2D B);
    
    UFUNCTION(BlueprintCallable)
    static float GetAngleBetweenTwoVector(FVector _A, FVector _B, FVector _IgnoreAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 floatBitsToint(const float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float f32tof16(const float Value);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyActorComponent_BP(UActorComponent* _Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D ComputeTextureUVOffset(FVector _WorldPos, FVector2D _MapPlanSize, FVector2D _MapWorldCenterPos, float _Zoom);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ComputeSubWeight(const TArray<float>& _CurvesWeight, float& Weight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ComputeBaseWeight(const TArray<float>& _CurvesWeight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ComputeAddWeight(const TArray<float>& _CurvesWeight, float& Weight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FVector> ArrayVectorRandomRangeNormalized(const FVector Min, const FVector Max, const int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FVector> ArrayVectorRandomRange(const FVector Min, const FVector Max, const int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* AddActorComponentToActor(AActor* _Actor, TSubclassOf<UActorComponent> _ComponentClass);
    
};

