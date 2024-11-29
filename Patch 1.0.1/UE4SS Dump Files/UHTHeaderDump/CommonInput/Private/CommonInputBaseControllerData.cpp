#include "CommonInputBaseControllerData.h"

UCommonInputBaseControllerData::UCommonInputBaseControllerData() {
    this->InputType = ECommonInputType::MouseAndKeyboard;
}

TArray<FName> UCommonInputBaseControllerData::GetRegisteredGamepads() {
    return TArray<FName>();
}


