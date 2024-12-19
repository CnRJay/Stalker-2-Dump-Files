#include "Landscape.h"

ALandscape::ALandscape(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FoliageGeneratorConfig = NULL;
}

void ALandscape::RenderHeightmap(const FTransform& InWorldTransform, const FBox2D& InExtents, UTextureRenderTarget2D* OutRenderTarget) {
}


