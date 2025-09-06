// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Boy_Adventura_2025/Boy_Adventura_2025GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoy_Adventura_2025GameMode() {}
// Cross Module References
	BOY_ADVENTURA_2025_API UClass* Z_Construct_UClass_ABoy_Adventura_2025GameMode_NoRegister();
	BOY_ADVENTURA_2025_API UClass* Z_Construct_UClass_ABoy_Adventura_2025GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Boy_Adventura_2025();
	BOY_ADVENTURA_2025_API UClass* Z_Construct_UClass_AObstaculo_NoRegister();
	BOY_ADVENTURA_2025_API UClass* Z_Construct_UClass_APollo1_NoRegister();
	BOY_ADVENTURA_2025_API UClass* Z_Construct_UClass_APlataformas_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABoy_Adventura_2025GameMode::execMoverPlataformasVertical)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoverPlataformasVertical();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoy_Adventura_2025GameMode::execMoverPlataformasHorizontal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoverPlataformasHorizontal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoy_Adventura_2025GameMode::execCrearContenedorPlataformas)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrearContenedorPlataformas();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoy_Adventura_2025GameMode::execCrearContenedorEnemigos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrearContenedorEnemigos();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoy_Adventura_2025GameMode::execCrearContenedorObstaculos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrearContenedorObstaculos();
		P_NATIVE_END;
	}
	void ABoy_Adventura_2025GameMode::StaticRegisterNativesABoy_Adventura_2025GameMode()
	{
		UClass* Class = ABoy_Adventura_2025GameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CrearContenedorEnemigos", &ABoy_Adventura_2025GameMode::execCrearContenedorEnemigos },
			{ "CrearContenedorObstaculos", &ABoy_Adventura_2025GameMode::execCrearContenedorObstaculos },
			{ "CrearContenedorPlataformas", &ABoy_Adventura_2025GameMode::execCrearContenedorPlataformas },
			{ "MoverPlataformasHorizontal", &ABoy_Adventura_2025GameMode::execMoverPlataformasHorizontal },
			{ "MoverPlataformasVertical", &ABoy_Adventura_2025GameMode::execMoverPlataformasVertical },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABoy_Adventura_2025GameMode_CrearContenedorEnemigos_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoy_Adventura_2025GameMode_CrearContenedorEnemigos_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Boy_Adventura_2025GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoy_Adventura_2025GameMode_CrearContenedorEnemigos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoy_Adventura_2025GameMode, nullptr, "CrearContenedorEnemigos", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoy_Adventura_2025GameMode_CrearContenedorEnemigos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoy_Adventura_2025GameMode_CrearContenedorEnemigos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoy_Adventura_2025GameMode_CrearContenedorEnemigos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoy_Adventura_2025GameMode_CrearContenedorEnemigos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoy_Adventura_2025GameMode_CrearContenedorObstaculos_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoy_Adventura_2025GameMode_CrearContenedorObstaculos_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "Comment", "// Funciones para crear los contenedores\n" },
		{ "ModuleRelativePath", "Boy_Adventura_2025GameMode.h" },
		{ "ToolTip", "Funciones para crear los contenedores" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoy_Adventura_2025GameMode_CrearContenedorObstaculos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoy_Adventura_2025GameMode, nullptr, "CrearContenedorObstaculos", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoy_Adventura_2025GameMode_CrearContenedorObstaculos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoy_Adventura_2025GameMode_CrearContenedorObstaculos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoy_Adventura_2025GameMode_CrearContenedorObstaculos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoy_Adventura_2025GameMode_CrearContenedorObstaculos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoy_Adventura_2025GameMode_CrearContenedorPlataformas_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoy_Adventura_2025GameMode_CrearContenedorPlataformas_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Boy_Adventura_2025GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoy_Adventura_2025GameMode_CrearContenedorPlataformas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoy_Adventura_2025GameMode, nullptr, "CrearContenedorPlataformas", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoy_Adventura_2025GameMode_CrearContenedorPlataformas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoy_Adventura_2025GameMode_CrearContenedorPlataformas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoy_Adventura_2025GameMode_CrearContenedorPlataformas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoy_Adventura_2025GameMode_CrearContenedorPlataformas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoy_Adventura_2025GameMode_MoverPlataformasHorizontal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoy_Adventura_2025GameMode_MoverPlataformasHorizontal_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// L\xc3\xb3gicas de movimiento para plataformas\n" },
		{ "ModuleRelativePath", "Boy_Adventura_2025GameMode.h" },
		{ "ToolTip", "L\xc3\xb3gicas de movimiento para plataformas" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoy_Adventura_2025GameMode_MoverPlataformasHorizontal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoy_Adventura_2025GameMode, nullptr, "MoverPlataformasHorizontal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoy_Adventura_2025GameMode_MoverPlataformasHorizontal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoy_Adventura_2025GameMode_MoverPlataformasHorizontal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoy_Adventura_2025GameMode_MoverPlataformasHorizontal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoy_Adventura_2025GameMode_MoverPlataformasHorizontal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoy_Adventura_2025GameMode_MoverPlataformasVertical_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoy_Adventura_2025GameMode_MoverPlataformasVertical_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Boy_Adventura_2025GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoy_Adventura_2025GameMode_MoverPlataformasVertical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoy_Adventura_2025GameMode, nullptr, "MoverPlataformasVertical", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoy_Adventura_2025GameMode_MoverPlataformasVertical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoy_Adventura_2025GameMode_MoverPlataformasVertical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoy_Adventura_2025GameMode_MoverPlataformasVertical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoy_Adventura_2025GameMode_MoverPlataformasVertical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABoy_Adventura_2025GameMode_NoRegister()
	{
		return ABoy_Adventura_2025GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContenedorObstaculos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContenedorObstaculos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ContenedorObstaculos;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContenedorEnemigos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContenedorEnemigos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ContenedorEnemigos;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContenedorPlataformas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContenedorPlataformas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ContenedorPlataformas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Boy_Adventura_2025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoy_Adventura_2025GameMode_CrearContenedorEnemigos, "CrearContenedorEnemigos" }, // 1690541303
		{ &Z_Construct_UFunction_ABoy_Adventura_2025GameMode_CrearContenedorObstaculos, "CrearContenedorObstaculos" }, // 4164751718
		{ &Z_Construct_UFunction_ABoy_Adventura_2025GameMode_CrearContenedorPlataformas, "CrearContenedorPlataformas" }, // 2520523231
		{ &Z_Construct_UFunction_ABoy_Adventura_2025GameMode_MoverPlataformasHorizontal, "MoverPlataformasHorizontal" }, // 1710827097
		{ &Z_Construct_UFunction_ABoy_Adventura_2025GameMode_MoverPlataformasVertical, "MoverPlataformasVertical" }, // 1485766093
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Boy_Adventura_2025GameMode.h" },
		{ "ModuleRelativePath", "Boy_Adventura_2025GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::NewProp_ContenedorObstaculos_Inner = { "ContenedorObstaculos", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AObstaculo_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::NewProp_ContenedorObstaculos_MetaData[] = {
		{ "Category", "Contenedores" },
		{ "Comment", "// Contenedores\n" },
		{ "ModuleRelativePath", "Boy_Adventura_2025GameMode.h" },
		{ "ToolTip", "Contenedores" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::NewProp_ContenedorObstaculos = { "ContenedorObstaculos", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoy_Adventura_2025GameMode, ContenedorObstaculos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::NewProp_ContenedorObstaculos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::NewProp_ContenedorObstaculos_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::NewProp_ContenedorEnemigos_Inner = { "ContenedorEnemigos", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APollo1_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::NewProp_ContenedorEnemigos_MetaData[] = {
		{ "Category", "Contenedores" },
		{ "ModuleRelativePath", "Boy_Adventura_2025GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::NewProp_ContenedorEnemigos = { "ContenedorEnemigos", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoy_Adventura_2025GameMode, ContenedorEnemigos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::NewProp_ContenedorEnemigos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::NewProp_ContenedorEnemigos_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::NewProp_ContenedorPlataformas_Inner = { "ContenedorPlataformas", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlataformas_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::NewProp_ContenedorPlataformas_MetaData[] = {
		{ "Category", "Contenedores" },
		{ "ModuleRelativePath", "Boy_Adventura_2025GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::NewProp_ContenedorPlataformas = { "ContenedorPlataformas", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoy_Adventura_2025GameMode, ContenedorPlataformas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::NewProp_ContenedorPlataformas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::NewProp_ContenedorPlataformas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::NewProp_ContenedorObstaculos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::NewProp_ContenedorObstaculos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::NewProp_ContenedorEnemigos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::NewProp_ContenedorEnemigos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::NewProp_ContenedorPlataformas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::NewProp_ContenedorPlataformas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoy_Adventura_2025GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::ClassParams = {
		&ABoy_Adventura_2025GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoy_Adventura_2025GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoy_Adventura_2025GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoy_Adventura_2025GameMode, 2122021391);
	template<> BOY_ADVENTURA_2025_API UClass* StaticClass<ABoy_Adventura_2025GameMode>()
	{
		return ABoy_Adventura_2025GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoy_Adventura_2025GameMode(Z_Construct_UClass_ABoy_Adventura_2025GameMode, &ABoy_Adventura_2025GameMode::StaticClass, TEXT("/Script/Boy_Adventura_2025"), TEXT("ABoy_Adventura_2025GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoy_Adventura_2025GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
