// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnrealHorrorPickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AUnrealHorrorCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef UNREALHORROR_UnrealHorrorPickUpComponent_generated_h
#error "UnrealHorrorPickUpComponent.generated.h already included, missing '#pragma once' in UnrealHorrorPickUpComponent.h"
#endif
#define UNREALHORROR_UnrealHorrorPickUpComponent_generated_h

#define FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_UnrealHorrorPickUpComponent_h_12_DELEGATE \
UNREALHORROR_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AUnrealHorrorCharacter* PickUpCharacter);


#define FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_UnrealHorrorPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_UnrealHorrorPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnrealHorrorPickUpComponent(); \
	friend struct Z_Construct_UClass_UUnrealHorrorPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UUnrealHorrorPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealHorror"), NO_API) \
	DECLARE_SERIALIZER(UUnrealHorrorPickUpComponent)


#define FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_UnrealHorrorPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUnrealHorrorPickUpComponent(UUnrealHorrorPickUpComponent&&); \
	UUnrealHorrorPickUpComponent(const UUnrealHorrorPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealHorrorPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealHorrorPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUnrealHorrorPickUpComponent) \
	NO_API virtual ~UUnrealHorrorPickUpComponent();


#define FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_UnrealHorrorPickUpComponent_h_14_PROLOG
#define FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_UnrealHorrorPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_UnrealHorrorPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_UnrealHorrorPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_UnrealHorrorPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALHORROR_API UClass* StaticClass<class UUnrealHorrorPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sferr_Documents_Unreal_Projects_UnrealHorror_Source_UnrealHorror_UnrealHorrorPickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
