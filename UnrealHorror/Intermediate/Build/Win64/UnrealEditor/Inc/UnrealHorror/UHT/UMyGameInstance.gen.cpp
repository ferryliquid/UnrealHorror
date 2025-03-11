// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealHorror/Public/UMyGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMyGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UNREALHORROR_API UClass* Z_Construct_UClass_UUMyGameInstance();
UNREALHORROR_API UClass* Z_Construct_UClass_UUMyGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealHorror();
// End Cross Module References

// Begin Class UUMyGameInstance
void UUMyGameInstance::StaticRegisterNativesUUMyGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUMyGameInstance);
UClass* Z_Construct_UClass_UUMyGameInstance_NoRegister()
{
	return UUMyGameInstance::StaticClass();
}
struct Z_Construct_UClass_UUMyGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UMyGameInstance.h" },
		{ "ModuleRelativePath", "Public/UMyGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Game Instance [Singleton]" },
		{ "ModuleRelativePath", "Public/UMyGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMyGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMyGameInstance_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUMyGameInstance, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMyGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMyGameInstance_Statics::NewProp_Score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUMyGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUMyGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealHorror,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUMyGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUMyGameInstance_Statics::ClassParams = {
	&UUMyGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUMyGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUMyGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUMyGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UUMyGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUMyGameInstance()
{
	if (!Z_Registration_Info_UClass_UUMyGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUMyGameInstance.OuterSingleton, Z_Construct_UClass_UUMyGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUMyGameInstance.OuterSingleton;
}
template<> UNREALHORROR_API UClass* StaticClass<UUMyGameInstance>()
{
	return UUMyGameInstance::StaticClass();
}
UUMyGameInstance::UUMyGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUMyGameInstance);
UUMyGameInstance::~UUMyGameInstance() {}
// End Class UUMyGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_Public_UMyGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUMyGameInstance, UUMyGameInstance::StaticClass, TEXT("UUMyGameInstance"), &Z_Registration_Info_UClass_UUMyGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUMyGameInstance), 1603497974U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_Public_UMyGameInstance_h_3477692496(TEXT("/Script/UnrealHorror"),
	Z_CompiledInDeferFile_FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_Public_UMyGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_Public_UMyGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
