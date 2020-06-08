// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRPaint/VRPaintGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRPaintGameModeBase() {}
// Cross Module References
	VRPAINT_API UClass* Z_Construct_UClass_AVRPaintGameModeBase_NoRegister();
	VRPAINT_API UClass* Z_Construct_UClass_AVRPaintGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_VRPaint();
// End Cross Module References
	void AVRPaintGameModeBase::StaticRegisterNativesAVRPaintGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AVRPaintGameModeBase_NoRegister()
	{
		return AVRPaintGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AVRPaintGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRPaintGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VRPaint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPaintGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "VRPaintGameModeBase.h" },
		{ "ModuleRelativePath", "VRPaintGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRPaintGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRPaintGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVRPaintGameModeBase_Statics::ClassParams = {
		&AVRPaintGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AVRPaintGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPaintGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRPaintGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVRPaintGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRPaintGameModeBase, 3440391978);
	template<> VRPAINT_API UClass* StaticClass<AVRPaintGameModeBase>()
	{
		return AVRPaintGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRPaintGameModeBase(Z_Construct_UClass_AVRPaintGameModeBase, &AVRPaintGameModeBase::StaticClass, TEXT("/Script/VRPaint"), TEXT("AVRPaintGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRPaintGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
