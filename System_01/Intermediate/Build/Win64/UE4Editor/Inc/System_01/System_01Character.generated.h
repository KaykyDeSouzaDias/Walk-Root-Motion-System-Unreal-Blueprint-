// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SYSTEM_01_System_01Character_generated_h
#error "System_01Character.generated.h already included, missing '#pragma once' in System_01Character.h"
#endif
#define SYSTEM_01_System_01Character_generated_h

#define System_01_Source_System_01_System_01Character_h_12_SPARSE_DATA
#define System_01_Source_System_01_System_01Character_h_12_RPC_WRAPPERS
#define System_01_Source_System_01_System_01Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define System_01_Source_System_01_System_01Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASystem_01Character(); \
	friend struct Z_Construct_UClass_ASystem_01Character_Statics; \
public: \
	DECLARE_CLASS(ASystem_01Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/System_01"), NO_API) \
	DECLARE_SERIALIZER(ASystem_01Character)


#define System_01_Source_System_01_System_01Character_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASystem_01Character(); \
	friend struct Z_Construct_UClass_ASystem_01Character_Statics; \
public: \
	DECLARE_CLASS(ASystem_01Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/System_01"), NO_API) \
	DECLARE_SERIALIZER(ASystem_01Character)


#define System_01_Source_System_01_System_01Character_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASystem_01Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASystem_01Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASystem_01Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASystem_01Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASystem_01Character(ASystem_01Character&&); \
	NO_API ASystem_01Character(const ASystem_01Character&); \
public:


#define System_01_Source_System_01_System_01Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASystem_01Character(ASystem_01Character&&); \
	NO_API ASystem_01Character(const ASystem_01Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASystem_01Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASystem_01Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASystem_01Character)


#define System_01_Source_System_01_System_01Character_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ASystem_01Character, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ASystem_01Character, FollowCamera); }


#define System_01_Source_System_01_System_01Character_h_9_PROLOG
#define System_01_Source_System_01_System_01Character_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	System_01_Source_System_01_System_01Character_h_12_PRIVATE_PROPERTY_OFFSET \
	System_01_Source_System_01_System_01Character_h_12_SPARSE_DATA \
	System_01_Source_System_01_System_01Character_h_12_RPC_WRAPPERS \
	System_01_Source_System_01_System_01Character_h_12_INCLASS \
	System_01_Source_System_01_System_01Character_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define System_01_Source_System_01_System_01Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	System_01_Source_System_01_System_01Character_h_12_PRIVATE_PROPERTY_OFFSET \
	System_01_Source_System_01_System_01Character_h_12_SPARSE_DATA \
	System_01_Source_System_01_System_01Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	System_01_Source_System_01_System_01Character_h_12_INCLASS_NO_PURE_DECLS \
	System_01_Source_System_01_System_01Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYSTEM_01_API UClass* StaticClass<class ASystem_01Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID System_01_Source_System_01_System_01Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
