// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealHorror/UnrealHorrorGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealHorrorGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UNREALHORROR_API UClass* Z_Construct_UClass_AUnrealHorrorGameMode();
UNREALHORROR_API UClass* Z_Construct_UClass_AUnrealHorrorGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealHorror();
// End Cross Module References

// Begin Class AUnrealHorrorGameMode
void AUnrealHorrorGameMode::StaticRegisterNativesAUnrealHorrorGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnrealHorrorGameMode);
UClass* Z_Construct_UClass_AUnrealHorrorGameMode_NoRegister()
{
	return AUnrealHorrorGameMode::StaticClass();
}
struct Z_Construct_UClass_AUnrealHorrorGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealHorrorGameMode.h" },
		{ "ModuleRelativePath", "UnrealHorrorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealHorrorGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUnrealHorrorGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealHorror,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealHorrorGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnrealHorrorGameMode_Statics::ClassParams = {
	&AUnrealHorrorGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealHorrorGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUnrealHorrorGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUnrealHorrorGameMode()
{
	if (!Z_Registration_Info_UClass_AUnrealHorrorGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnrealHorrorGameMode.OuterSingleton, Z_Construct_UClass_AUnrealHorrorGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUnrealHorrorGameMode.OuterSingleton;
}
template<> UNREALHORROR_API UClass* StaticClass<AUnrealHorrorGameMode>()
{
	return AUnrealHorrorGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealHorrorGameMode);
AUnrealHorrorGameMode::~AUnrealHorrorGameMode() {}
// End Class AUnrealHorrorGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_UnrealHorrorGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUnrealHorrorGameMode, AUnrealHorrorGameMode::StaticClass, TEXT("AUnrealHorrorGameMode"), &Z_Registration_Info_UClass_AUnrealHorrorGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnrealHorrorGameMode), 3784376019U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_UnrealHorrorGameMode_h_1306510575(TEXT("/Script/UnrealHorror"),
	Z_CompiledInDeferFile_FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_UnrealHorrorGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_UnrealHorrorGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
