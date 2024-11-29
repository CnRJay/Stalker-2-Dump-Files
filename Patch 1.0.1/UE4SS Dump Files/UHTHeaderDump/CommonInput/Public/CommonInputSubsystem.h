#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayerSubsystem -FallbackName=LocalPlayerSubsystem
#include "ECommonInputType.h"
#include "InputMethodChangedDelegateDelegate.h"
#include "CommonInputSubsystem.generated.h"

class UCommonInputActionDomainTable;

UCLASS(Blueprintable)
class COMMONINPUT_API UCommonInputSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputMethodChangedDelegate OnInputMethodChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumberOfInputMethodChangesRecently;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double LastInputMethodChangeTime;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double LastTimeInputMethodThrashingBegan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECommonInputType LastInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECommonInputType CurrentInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName GamepadInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, ECommonInputType> CurrentInputLocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonInputActionDomainTable* ActionDomainTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsGamepadSimulatedClick;
    
public:
    UCommonInputSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowInputKeys() const;
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadInputType(const FName InGamepadInputType);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentInputType(ECommonInputType NewInputType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingPointerInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputMethodActive(ECommonInputType InputMethod) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECommonInputType GetDefaultInputType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECommonInputType GetCurrentInputType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentGamepadName() const;
    
};

