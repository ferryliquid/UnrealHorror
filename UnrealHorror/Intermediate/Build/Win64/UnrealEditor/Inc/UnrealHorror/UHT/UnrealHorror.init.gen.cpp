// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealHorror_init() {}
	UNREALHORROR_API UFunction* Z_Construct_UDelegateFunction_UnrealHorror_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UnrealHorror;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UnrealHorror()
	{
		if (!Z_Registration_Info_UPackage__Script_UnrealHorror.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UnrealHorror_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UnrealHorror",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE7BCEBC1,
				0x46782E8D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UnrealHorror.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UnrealHorror.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UnrealHorror(Z_Construct_UPackage__Script_UnrealHorror, TEXT("/Script/UnrealHorror"), Z_Registration_Info_UPackage__Script_UnrealHorror, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE7BCEBC1, 0x46782E8D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
