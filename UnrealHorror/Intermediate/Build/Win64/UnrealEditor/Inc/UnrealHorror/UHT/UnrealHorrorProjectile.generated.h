// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnrealHorrorProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef UNREALHORROR_UnrealHorrorProjectile_generated_h
#error "UnrealHorrorProjectile.generated.h already included, missing '#pragma once' in UnrealHorrorProjectile.h"
#endif
#define UNREALHORROR_UnrealHorrorProjectile_generated_h

#define FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_UnrealHorrorProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_UnrealHorrorProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnrealHorrorProjectile(); \
	friend struct Z_Construct_UClass_AUnrealHorrorProjectile_Statics; \
public: \
	DECLARE_CLASS(AUnrealHorrorProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealHorror"), NO_API) \
	DECLARE_SERIALIZER(AUnrealHorrorProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_UnrealHorrorProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUnrealHorrorProjectile(AUnrealHorrorProjectile&&); \
	AUnrealHorrorProjectile(const AUnrealHorrorProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealHorrorProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealHorrorProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnrealHorrorProjectile) \
	NO_API virtual ~AUnrealHorrorProjectile();


#define FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_UnrealHorrorProjectile_h_12_PROLOG
#define FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_UnrealHorrorProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_UnrealHorrorProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_UnrealHorrorProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_UnrealHorrorProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALHORROR_API UClass* StaticClass<class AUnrealHorrorProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_UnrealHorrorProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
