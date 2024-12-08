#include "AnimNode_CurveBlend_GSC.h"

FAnimNode_CurveBlend_GSC::FAnimNode_CurveBlend_GSC() {
    this->AlphaInputType = EAnimAlphaInputType::Float;
    this->bAlphaBoolEnabled = false;
    this->bResetChildOnActivation = false;
    this->Alpha = 0.00f;
}

