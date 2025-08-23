// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef BOY_ADVENTURA_2025_Piso_Congelante_generated_h
#error "Piso_Congelante.generated.h already included, missing '#pragma once' in Piso_Congelante.h"
#endif
#define BOY_ADVENTURA_2025_Piso_Congelante_generated_h

#define Boy_Adventura_2025_Source_Boy_Adventura_2025_Piso_Congelante_h_15_SPARSE_DATA
#define Boy_Adventura_2025_Source_Boy_Adventura_2025_Piso_Congelante_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define Boy_Adventura_2025_Source_Boy_Adventura_2025_Piso_Congelante_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define Boy_Adventura_2025_Source_Boy_Adventura_2025_Piso_Congelante_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPiso_Congelante(); \
	friend struct Z_Construct_UClass_APiso_Congelante_Statics; \
public: \
	DECLARE_CLASS(APiso_Congelante, AObstaculo_Piso, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Boy_Adventura_2025"), NO_API) \
	DECLARE_SERIALIZER(APiso_Congelante)


#define Boy_Adventura_2025_Source_Boy_Adventura_2025_Piso_Congelante_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPiso_Congelante(); \
	friend struct Z_Construct_UClass_APiso_Congelante_Statics; \
public: \
	DECLARE_CLASS(APiso_Congelante, AObstaculo_Piso, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Boy_Adventura_2025"), NO_API) \
	DECLARE_SERIALIZER(APiso_Congelante)


#define Boy_Adventura_2025_Source_Boy_Adventura_2025_Piso_Congelante_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APiso_Congelante(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APiso_Congelante) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APiso_Congelante); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APiso_Congelante); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APiso_Congelante(APiso_Congelante&&); \
	NO_API APiso_Congelante(const APiso_Congelante&); \
public:


#define Boy_Adventura_2025_Source_Boy_Adventura_2025_Piso_Congelante_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APiso_Congelante(APiso_Congelante&&); \
	NO_API APiso_Congelante(const APiso_Congelante&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APiso_Congelante); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APiso_Congelante); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APiso_Congelante)


#define Boy_Adventura_2025_Source_Boy_Adventura_2025_Piso_Congelante_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxCollision() { return STRUCT_OFFSET(APiso_Congelante, BoxCollision); } \
	FORCEINLINE static uint32 __PPO__TiempoCongelado() { return STRUCT_OFFSET(APiso_Congelante, TiempoCongelado); }


#define Boy_Adventura_2025_Source_Boy_Adventura_2025_Piso_Congelante_h_12_PROLOG
#define Boy_Adventura_2025_Source_Boy_Adventura_2025_Piso_Congelante_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Boy_Adventura_2025_Source_Boy_Adventura_2025_Piso_Congelante_h_15_PRIVATE_PROPERTY_OFFSET \
	Boy_Adventura_2025_Source_Boy_Adventura_2025_Piso_Congelante_h_15_SPARSE_DATA \
	Boy_Adventura_2025_Source_Boy_Adventura_2025_Piso_Congelante_h_15_RPC_WRAPPERS \
	Boy_Adventura_2025_Source_Boy_Adventura_2025_Piso_Congelante_h_15_INCLASS \
	Boy_Adventura_2025_Source_Boy_Adventura_2025_Piso_Congelante_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Boy_Adventura_2025_Source_Boy_Adventura_2025_Piso_Congelante_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Boy_Adventura_2025_Source_Boy_Adventura_2025_Piso_Congelante_h_15_PRIVATE_PROPERTY_OFFSET \
	Boy_Adventura_2025_Source_Boy_Adventura_2025_Piso_Congelante_h_15_SPARSE_DATA \
	Boy_Adventura_2025_Source_Boy_Adventura_2025_Piso_Congelante_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Boy_Adventura_2025_Source_Boy_Adventura_2025_Piso_Congelante_h_15_INCLASS_NO_PURE_DECLS \
	Boy_Adventura_2025_Source_Boy_Adventura_2025_Piso_Congelante_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOY_ADVENTURA_2025_API UClass* StaticClass<class APiso_Congelante>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Boy_Adventura_2025_Source_Boy_Adventura_2025_Piso_Congelante_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
