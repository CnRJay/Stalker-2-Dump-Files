#include "HairLODSettings.h"

FHairLODSettings::FHairLODSettings() {
    this->CurveDecimation = 0.00f;
    this->VertexDecimation = 0.00f;
    this->AngularThreshold = 0.00f;
    this->ScreenSize = 0.00f;
    this->ThicknessScale = 0.00f;
    this->bVisible = false;
    this->bVoxelize = false;
    this->GeometryType = EGroomGeometryType::Strands;
    this->BindingType = EGroomBindingType::NoneBinding;
    this->Simulation = EGroomOverrideType::Auto;
    this->GlobalInterpolation = EGroomOverrideType::Auto;
}

