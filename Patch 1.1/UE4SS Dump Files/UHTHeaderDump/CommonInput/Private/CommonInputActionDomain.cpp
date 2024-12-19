#include "CommonInputActionDomain.h"

UCommonInputActionDomain::UCommonInputActionDomain() {
    this->Behavior = ECommonInputEventFlowBehavior::BlockIfActive;
    this->InnerBehavior = ECommonInputEventFlowBehavior::BlockIfHandled;
    this->bUseActionDomainDesiredInputConfig = false;
    this->InputMode = ECommonInputMode::Game;
    this->MouseCaptureMode = EMouseCaptureMode::CapturePermanently;
}


