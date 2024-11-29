#include "PrefabObjectExporterT3D.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object

UPrefabObjectExporterT3D::UPrefabObjectExporterT3D() {
    this->SupportedClass = UObject::StaticClass();
    this->FormatExtension.AddDefaulted(1);
    this->FormatDescription.AddDefaulted(1);
    this->bText = true;
}


