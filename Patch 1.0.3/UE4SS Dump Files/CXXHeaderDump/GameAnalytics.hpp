#ifndef UE4SS_SDK_GameAnalytics_HPP
#define UE4SS_SDK_GameAnalytics_HPP

#include "GameAnalytics_enums.hpp"

struct FGameAnalyticsCustomEventField
{
    FString Key;                                                                      // 0x0000 (size: 0x10)
    FString Value;                                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

class UGameAnalytics : public UObject
{

    void SetCustomDimension03(FString CustomDimension);
    void SetCustomDimension02(FString CustomDimension);
    void SetCustomDimension01(FString CustomDimension);
    void OnQuit();
    bool IsRemoteConfigsReady();
    FString GetRemoteConfigsValueAsStringWithDefaultValue(FString Key, FString DefaultValue);
    FString GetRemoteConfigsValueAsString(FString Key);
    FString GetRemoteConfigsContentAsString();
    FString GetABTestingVariantId();
    FString GetABTestingId();
    void AddResourceEventWithMergeFields(EGAResourceFlowType FlowType, FString Currency, float Amount, FString ItemType, FString ItemId, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddResourceEventWithFields(EGAResourceFlowType FlowType, FString Currency, float Amount, FString ItemType, FString ItemId, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddResourceEvent(EGAResourceFlowType FlowType, FString Currency, float Amount, FString ItemType, FString ItemId);
    void AddProgressionEventWithOneTwoThreeScoreAndMergeFields(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, FString Progression03, int32 Score, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddProgressionEventWithOneTwoThreeScoreAndFields(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, FString Progression03, int32 Score, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddProgressionEventWithOneTwoThreeAndScore(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, FString Progression03, int32 Score);
    void AddProgressionEventWithOneTwoThreeAndMergeFields(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, FString Progression03, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddProgressionEventWithOneTwoThreeAndFields(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, FString Progression03, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddProgressionEventWithOneTwoScoreAndMergeFields(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, int32 Score, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddProgressionEventWithOneTwoScoreAndFields(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, int32 Score, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddProgressionEventWithOneTwoAndThree(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, FString Progression03);
    void AddProgressionEventWithOneTwoAndScore(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, int32 Score);
    void AddProgressionEventWithOneTwoAndMergeFields(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddProgressionEventWithOneTwoAndFields(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddProgressionEventWithOneScoreAndMergeFields(EGAProgressionStatus ProgressionStatus, FString Progression01, int32 Score, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddProgressionEventWithOneScoreAndFields(EGAProgressionStatus ProgressionStatus, FString Progression01, int32 Score, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddProgressionEventWithOneAndTwo(EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02);
    void AddProgressionEventWithOneAndScore(EGAProgressionStatus ProgressionStatus, FString Progression01, int32 Score);
    void AddProgressionEventWithOneAndMergeFields(EGAProgressionStatus ProgressionStatus, FString Progression01, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddProgressionEventWithOneAndFields(EGAProgressionStatus ProgressionStatus, FString Progression01, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddProgressionEventWithOne(EGAProgressionStatus ProgressionStatus, FString Progression01);
    void AddErrorEventWithMergeFields(EGAErrorSeverity Severity, FString message, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddErrorEventWithFields(EGAErrorSeverity Severity, FString message, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddErrorEvent(EGAErrorSeverity Severity, FString message);
    void AddDesignEventWithValueAndMergeFields(FString EventId, float Value, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddDesignEventWithValueAndFields(FString EventId, float Value, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddDesignEventWithValue(FString EventId, float Value);
    void AddDesignEventWithMergeFields(FString EventId, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddDesignEventWithFields(FString EventId, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddDesignEvent(FString EventId);
    void AddBusinessEventWithMergeFields(FString Currency, int32 Amount, FString ItemType, FString ItemId, FString CartType, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddBusinessEventWithFields(FString Currency, int32 Amount, FString ItemType, FString ItemId, FString CartType, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddBusinessEventIOSWithMergeFields(FString Currency, int32 Amount, FString ItemType, FString ItemId, FString CartType, FString Receipt, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddBusinessEventIOSWithFields(FString Currency, int32 Amount, FString ItemType, FString ItemId, FString CartType, FString Receipt, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddBusinessEventIOS(FString Currency, int32 Amount, FString ItemType, FString ItemId, FString CartType, FString Receipt);
    void AddBusinessEventAndroidWithMergeFields(FString Currency, int32 Amount, FString ItemType, FString ItemId, FString CartType, FString Receipt, FString Signature, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddBusinessEventAndroidWithFields(FString Currency, int32 Amount, FString ItemType, FString ItemId, FString CartType, FString Receipt, FString Signature, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddBusinessEventAndroid(FString Currency, int32 Amount, FString ItemType, FString ItemId, FString CartType, FString Receipt, FString Signature);
    void AddBusinessEventAndAutoFetchReceiptWithMergeFields(FString Currency, int32 Amount, FString ItemType, FString ItemId, FString CartType, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddBusinessEventAndAutoFetchReceiptWithFields(FString Currency, int32 Amount, FString ItemType, FString ItemId, FString CartType, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddBusinessEventAndAutoFetchReceipt(FString Currency, int32 Amount, FString ItemType, FString ItemId, FString CartType);
    void AddBusinessEvent(FString Currency, int32 Amount, FString ItemType, FString ItemId, FString CartType);
    void AddAdEventWithNoAdReasonAndMergeFields(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, EGAAdError noAdReason, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddAdEventWithNoAdReasonAndFields(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, EGAAdError noAdReason, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddAdEventWithNoAdReason(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, EGAAdError noAdReason);
    void AddAdEventWithMergeFields(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddAdEventWithFields(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddAdEventWithDurationAndMergeFields(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, int64 Duration, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddAdEventWithDurationAndFields(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, int64 Duration, const TArray<FGameAnalyticsCustomEventField>& CustomFields);
    void AddAdEventWithDuration(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement, int64 Duration);
    void AddAdEvent(EGAAdAction Action, EGAAdType adType, FString adSdkName, FString adPlacement);
}; // Size: 0x28

#endif
