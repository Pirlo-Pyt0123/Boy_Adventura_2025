// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Boy_Adventura_2025/Obstaculo_Piso.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculo_Piso() {}
// Cross Module References
	BOY_ADVENTURA_2025_API UClass* Z_Construct_UClass_AObstaculo_Piso_NoRegister();
	BOY_ADVENTURA_2025_API UClass* Z_Construct_UClass_AObstaculo_Piso();
	BOY_ADVENTURA_2025_API UClass* Z_Construct_UClass_AObstaculo();
	UPackage* Z_Construct_UPackage__Script_Boy_Adventura_2025();
// End Cross Module References
	void AObstaculo_Piso::StaticRegisterNativesAObstaculo_Piso()
	{
	}
	UClass* Z_Construct_UClass_AObstaculo_Piso_NoRegister()
	{
		return AObstaculo_Piso::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculo_Piso_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculo_Piso_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculo,
		(UObject* (*)())Z_Construct_UPackage__Script_Boy_Adventura_2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculo_Piso_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Obstaculo_Piso.h" },
		{ "ModuleRelativePath", "Obstaculo_Piso.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculo_Piso_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculo_Piso>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculo_Piso_Statics::ClassParams = {
		&AObstaculo_Piso::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObstaculo_Piso_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculo_Piso_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculo_Piso()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculo_Piso_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculo_Piso, 1840357170);
	template<> BOY_ADVENTURA_2025_API UClass* StaticClass<AObstaculo_Piso>()
	{
		return AObstaculo_Piso::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculo_Piso(Z_Construct_UClass_AObstaculo_Piso, &AObstaculo_Piso::StaticClass, TEXT("/Script/Boy_Adventura_2025"), TEXT("AObstaculo_Piso"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculo_Piso);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
