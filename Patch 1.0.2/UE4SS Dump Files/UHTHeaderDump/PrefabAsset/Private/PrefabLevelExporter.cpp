#include "PrefabLevelExporter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=World -FallbackName=World

UPrefabLevelExporter::UPrefabLevelExporter() {
    this->SupportedClass = UWorld::StaticClass();
    this->FormatExtension.AddDefaulted(1);
    this->FormatDescription.AddDefaulted(1);
    this->bText = true;
}


