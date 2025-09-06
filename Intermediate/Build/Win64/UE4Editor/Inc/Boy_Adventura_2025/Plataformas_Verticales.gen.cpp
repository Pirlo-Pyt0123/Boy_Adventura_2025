// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Boy_Adventura_2025/Plataformas_Verticales.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlataformas_Verticales() {}
// Cross Module References
	BOY_ADVENTURA_2025_API UClass* Z_Construct_UClass_APlataformas_Verticales_NoRegister();
	BOY_ADVENTURA_2025_API UClass* Z_Construct_UClass_APlataformas_Verticales();
	BOY_ADVENTURA_2025_API UClass* Z_Construct_UClass_APlataformas();
	UPackage* Z_Construct_UPackage__Script_Boy_Adventura_2025();
// End Cross Module References
	void APlataformas_Verticales::StaticRegisterNativesAPlataformas_Verticales()
	{
	}
	UClass* Z_Construct_UClass_APlataformas_Verticales_NoRegister()
	{
		return APlataformas_Verticales::StaticClass();
	}
	struct Z_Construct_UClass_APlataformas_Verticales_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlataformas_Verticales_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlataformas,
		(UObject* (*)())Z_Construct_UPackage__Script_Boy_Adventura_2025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlataformas_Verticales_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Plataformas_Verticales.h" },
		{ "ModuleRelativePath", "Plataformas_Verticales.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlataformas_Verticales_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlataformas_Verticales>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlataformas_Verticales_Statics::ClassParams = {
		&APlataformas_Verticales::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APlataformas_Verticales_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlataformas_Verticales_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlataformas_Verticales()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlataformas_Verticales_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlataformas_Verticales, 639551925);
	template<> BOY_ADVENTURA_2025_API UClass* StaticClass<APlataformas_Verticales>()
	{
		return APlataformas_Verticales::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlataformas_Verticales(Z_Construct_UClass_APlataformas_Verticales, &APlataformas_Verticales::StaticClass, TEXT("/Script/Boy_Adventura_2025"), TEXT("APlataformas_Verticales"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlataformas_Verticales);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
