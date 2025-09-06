// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Boy_Adventura_2025/Pollo1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePollo1() {}
// Cross Module References
	BOY_ADVENTURA_2025_API UClass* Z_Construct_UClass_APollo1_NoRegister();
	BOY_ADVENTURA_2025_API UClass* Z_Construct_UClass_APollo1();
	BOY_ADVENTURA_2025_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_Boy_Adventura_2025();
// End Cross Module References
	void APollo1::StaticRegisterNativesAPollo1()
	{
	}
	UClass* Z_Construct_UClass_APollo1_NoRegister()
	{
		return APollo1::StaticClass();
	}
	struct Z_Construct_UClass_APollo1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APollo1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_Boy_Adventura_2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APollo1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Pollo1.h" },
		{ "ModuleRelativePath", "Pollo1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APollo1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APollo1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APollo1_Statics::ClassParams = {
		&APollo1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APollo1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APollo1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APollo1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APollo1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APollo1, 377751285);
	template<> BOY_ADVENTURA_2025_API UClass* StaticClass<APollo1>()
	{
		return APollo1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APollo1(Z_Construct_UClass_APollo1, &APollo1::StaticClass, TEXT("/Script/Boy_Adventura_2025"), TEXT("APollo1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APollo1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
