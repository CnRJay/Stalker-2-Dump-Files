#include "UserDefinedImageCaptureProtocol.h"

UUserDefinedImageCaptureProtocol::UUserDefinedImageCaptureProtocol() {
    this->Format = EDesiredImageFormat::EXR;
    this->bEnableCompression = false;
    this->CompressionQuality = 100;
}

void UUserDefinedImageCaptureProtocol::WriteImageToDisk(const FCapturedPixels& PixelData, const FCapturedPixelsID& streamId, const FFrameMetrics& FrameMetrics, bool bCopyImageData) {
}

FString UUserDefinedImageCaptureProtocol::GenerateFilenameForCurrentFrame() {
    return TEXT("");
}

FString UUserDefinedImageCaptureProtocol::GenerateFilenameForBuffer(UTexture* Buffer, const FCapturedPixelsID& streamId) {
    return TEXT("");
}


