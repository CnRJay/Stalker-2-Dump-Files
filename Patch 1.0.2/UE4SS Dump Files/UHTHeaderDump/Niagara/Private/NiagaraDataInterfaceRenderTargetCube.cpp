#include "NiagaraDataInterfaceRenderTargetCube.h"

UNiagaraDataInterfaceRenderTargetCube::UNiagaraDataInterfaceRenderTargetCube() {
    this->size = 0;
    this->OverrideRenderTargetFormat = RTF_R8;
    this->bInheritUserParameterSettings = false;
    this->bOverrideFormat = false;
}


