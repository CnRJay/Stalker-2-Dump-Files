#include "KismetStringLibrary.h"

UKismetStringLibrary::UKismetStringLibrary() {
}

FString UKismetStringLibrary::TrimTrailing(const FString& SourceString) {
    return TEXT("");
}

FString UKismetStringLibrary::Trim(const FString& SourceString) {
    return TEXT("");
}

FString UKismetStringLibrary::ToUpper(const FString& SourceString) {
    return TEXT("");
}

FString UKismetStringLibrary::ToLower(const FString& SourceString) {
    return TEXT("");
}

FString UKismetStringLibrary::TimeSecondsToString(float InSeconds) {
    return TEXT("");
}

bool UKismetStringLibrary::StartsWith(const FString& SourceString, const FString& InPrefix, TEnumAsByte<ESearchCase::Type> SearchCase) {
    return false;
}

bool UKismetStringLibrary::Split(const FString& SourceString, const FString& InStr, FString& LeftS, FString& RightS, TEnumAsByte<ESearchCase::Type> SearchCase, TEnumAsByte<ESearchDir::Type> SearchDir) {
    return false;
}

FString UKismetStringLibrary::RightPad(const FString& SourceString, int32 ChCount) {
    return TEXT("");
}

FString UKismetStringLibrary::RightChop(const FString& SourceString, int32 Count) {
    return TEXT("");
}

FString UKismetStringLibrary::Right(const FString& SourceString, int32 Count) {
    return TEXT("");
}

FString UKismetStringLibrary::Reverse(const FString& SourceString) {
    return TEXT("");
}

int32 UKismetStringLibrary::ReplaceInline(FString& SourceString, const FString& SearchText, const FString& ReplacementText, TEnumAsByte<ESearchCase::Type> SearchCase) {
    return 0;
}

FString UKismetStringLibrary::Replace(const FString& SourceString, const FString& From, const FString& To, TEnumAsByte<ESearchCase::Type> SearchCase) {
    return TEXT("");
}

TArray<FString> UKismetStringLibrary::ParseIntoArray(const FString& SourceString, const FString& Delimiter, const bool CullEmptyStrings) {
    return TArray<FString>();
}

bool UKismetStringLibrary::NotEqual_StrStr(const FString& A, const FString& B) {
    return false;
}

bool UKismetStringLibrary::NotEqual_StriStri(const FString& A, const FString& B) {
    return false;
}

FString UKismetStringLibrary::Mid(const FString& SourceString, int32 Start, int32 Count) {
    return TEXT("");
}

bool UKismetStringLibrary::MatchesWildcard(const FString& SourceString, const FString& Wildcard, TEnumAsByte<ESearchCase::Type> SearchCase) {
    return false;
}

int32 UKismetStringLibrary::Len(const FString& S) {
    return 0;
}

FString UKismetStringLibrary::LeftPad(const FString& SourceString, int32 ChCount) {
    return TEXT("");
}

FString UKismetStringLibrary::LeftChop(const FString& SourceString, int32 Count) {
    return TEXT("");
}

FString UKismetStringLibrary::Left(const FString& SourceString, int32 Count) {
    return TEXT("");
}

FString UKismetStringLibrary::JoinStringArray(const TArray<FString>& SourceArray, const FString& Separator) {
    return TEXT("");
}

bool UKismetStringLibrary::IsPureAnsi(const FString& SourceString) {
    return false;
}

bool UKismetStringLibrary::IsNumeric(const FString& SourceString) {
    return false;
}

bool UKismetStringLibrary::IsEmpty(const FString& InString) {
    return false;
}

FString UKismetStringLibrary::GetSubstring(const FString& SourceString, int32 StartIndex, int32 Length) {
    return TEXT("");
}

int32 UKismetStringLibrary::GetCharacterAsNumber(const FString& SourceString, int32 Index) {
    return 0;
}

TArray<FString> UKismetStringLibrary::GetCharacterArrayFromString(const FString& SourceString) {
    return TArray<FString>();
}

int32 UKismetStringLibrary::FindSubstring(const FString& SearchIn, const FString& Substring, bool bUseCase, bool bSearchFromEnd, int32 StartPosition) {
    return 0;
}

bool UKismetStringLibrary::EqualEqual_StrStr(const FString& A, const FString& B) {
    return false;
}

bool UKismetStringLibrary::EqualEqual_StriStri(const FString& A, const FString& B) {
    return false;
}

bool UKismetStringLibrary::EndsWith(const FString& SourceString, const FString& InSuffix, TEnumAsByte<ESearchCase::Type> SearchCase) {
    return false;
}

int32 UKismetStringLibrary::CullArray(const FString& SourceString, TArray<FString>& inArray) {
    return 0;
}

FString UKismetStringLibrary::Conv_VectorToString(FVector InVec) {
    return TEXT("");
}

FString UKismetStringLibrary::Conv_Vector3fToString(FVector3f InVec) {
    return TEXT("");
}

FString UKismetStringLibrary::Conv_Vector2dToString(FVector2D InVec) {
    return TEXT("");
}

FString UKismetStringLibrary::Conv_TransformToString(const FTransform& InTrans) {
    return TEXT("");
}

void UKismetStringLibrary::Conv_StringToVector3f(const FString& InString, FVector3f& OutConvertedVector, bool& OutIsValid) {
}

void UKismetStringLibrary::Conv_StringToVector2D(const FString& InString, FVector2D& OutConvertedVector2D, bool& OutIsValid) {
}

void UKismetStringLibrary::Conv_StringToVector(const FString& InString, FVector& OutConvertedVector, bool& OutIsValid) {
}

void UKismetStringLibrary::Conv_StringToRotator(const FString& InString, FRotator& OutConvertedRotator, bool& OutIsValid) {
}

FName UKismetStringLibrary::Conv_StringToName(const FString& InString) {
    return NAME_None;
}

int64 UKismetStringLibrary::Conv_StringToInt64(const FString& InString) {
    return 0;
}

int32 UKismetStringLibrary::Conv_StringToInt(const FString& InString) {
    return 0;
}

double UKismetStringLibrary::Conv_StringToDouble(const FString& InString) {
    return 0.0;
}

void UKismetStringLibrary::Conv_StringToColor(const FString& InString, FLinearColor& OutConvertedColor, bool& OutIsValid) {
}

FString UKismetStringLibrary::Conv_RotatorToString(FRotator InRot) {
    return TEXT("");
}

FString UKismetStringLibrary::Conv_PlatformUserIdToString(FPlatformUserId InPlatformUserId) {
    return TEXT("");
}

FString UKismetStringLibrary::Conv_ObjectToString(UObject* InObj) {
    return TEXT("");
}

FString UKismetStringLibrary::Conv_NameToString(FName InName) {
    return TEXT("");
}

FString UKismetStringLibrary::Conv_MatrixToString(const FMatrix& InMatrix) {
    return TEXT("");
}

FString UKismetStringLibrary::Conv_IntVectorToString(FIntVector InIntVec) {
    return TEXT("");
}

FString UKismetStringLibrary::Conv_IntToString(int32 inInt) {
    return TEXT("");
}

FString UKismetStringLibrary::Conv_IntPointToString(FIntPoint InIntPoint) {
    return TEXT("");
}

FString UKismetStringLibrary::Conv_Int64ToString(int64 inInt) {
    return TEXT("");
}

FString UKismetStringLibrary::Conv_InputDeviceIdToString(FInputDeviceId InDeviceID) {
    return TEXT("");
}

FString UKismetStringLibrary::Conv_DoubleToString(double InDouble) {
    return TEXT("");
}

FString UKismetStringLibrary::Conv_ColorToString(FLinearColor InColor) {
    return TEXT("");
}

FString UKismetStringLibrary::Conv_ByteToString(uint8 InByte) {
    return TEXT("");
}

FString UKismetStringLibrary::Conv_BoolToString(bool InBool) {
    return TEXT("");
}

bool UKismetStringLibrary::Contains(const FString& SearchIn, const FString& Substring, bool bUseCase, bool bSearchFromEnd) {
    return false;
}

FString UKismetStringLibrary::Concat_StrStr(const FString& A, const FString& B) {
    return TEXT("");
}

FString UKismetStringLibrary::BuildString_Vector2d(const FString& AppendTo, const FString& Prefix, FVector2D InVector2D, const FString& Suffix) {
    return TEXT("");
}

FString UKismetStringLibrary::BuildString_Vector(const FString& AppendTo, const FString& Prefix, FVector InVector, const FString& Suffix) {
    return TEXT("");
}

FString UKismetStringLibrary::BuildString_Rotator(const FString& AppendTo, const FString& Prefix, FRotator InRot, const FString& Suffix) {
    return TEXT("");
}

FString UKismetStringLibrary::BuildString_Object(const FString& AppendTo, const FString& Prefix, UObject* InObj, const FString& Suffix) {
    return TEXT("");
}

FString UKismetStringLibrary::BuildString_Name(const FString& AppendTo, const FString& Prefix, FName InName, const FString& Suffix) {
    return TEXT("");
}

FString UKismetStringLibrary::BuildString_IntVector(const FString& AppendTo, const FString& Prefix, FIntVector InIntVector, const FString& Suffix) {
    return TEXT("");
}

FString UKismetStringLibrary::BuildString_Int(const FString& AppendTo, const FString& Prefix, int32 inInt, const FString& Suffix) {
    return TEXT("");
}

FString UKismetStringLibrary::BuildString_Double(const FString& AppendTo, const FString& Prefix, double InDouble, const FString& Suffix) {
    return TEXT("");
}

FString UKismetStringLibrary::BuildString_Color(const FString& AppendTo, const FString& Prefix, FLinearColor InColor, const FString& Suffix) {
    return TEXT("");
}

FString UKismetStringLibrary::BuildString_Bool(const FString& AppendTo, const FString& Prefix, bool InBool, const FString& Suffix) {
    return TEXT("");
}


