// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Boy_Adventura_2025/Pollo2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePollo2() {}
// Cross Module References
	BOY_ADVENTURA_2025_API UClass* Z_Construct_UClass_APollo2_NoRegister();
	BOY_ADVENTURA_2025_API UClass* Z_Construct_UClass_APollo2();
	BOY_ADVENTURA_2025_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_Boy_Adventura_2025();
// End Cross Module References
	void APollo2::StaticRegisterNativesAPollo2()
	{
	}
	UClass* Z_Construct_UClass_APollo2_NoRegister()
	{
		return APollo2::StaticClass();
	}
	struct Z_Construct_UClass_APollo2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APollo2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_Boy_Adventura_2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APollo2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Pollo2.h" },
		{ "ModuleRelativePath", "Pollo2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APollo2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APollo2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APollo2_Statics::ClassParams = {
		&APollo2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APollo2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APollo2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APollo2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APollo2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APollo2, 2247161991);
	template<> BOY_ADVENTURA_2025_API UClass* StaticClass<APollo2>()
	{
		return APollo2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APollo2(Z_Construct_UClass_APollo2, &APollo2::StaticClass, TEXT("/Script/Boy_Adventura_2025"), TEXT("APollo2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APollo2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
