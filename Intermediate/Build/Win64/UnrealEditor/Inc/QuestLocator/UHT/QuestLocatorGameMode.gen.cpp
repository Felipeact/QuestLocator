// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestLocator/QuestLocatorGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestLocatorGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
QUESTLOCATOR_API UClass* Z_Construct_UClass_AQuestLocatorGameMode();
QUESTLOCATOR_API UClass* Z_Construct_UClass_AQuestLocatorGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_QuestLocator();
// End Cross Module References

// Begin Class AQuestLocatorGameMode
void AQuestLocatorGameMode::StaticRegisterNativesAQuestLocatorGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AQuestLocatorGameMode);
UClass* Z_Construct_UClass_AQuestLocatorGameMode_NoRegister()
{
	return AQuestLocatorGameMode::StaticClass();
}
struct Z_Construct_UClass_AQuestLocatorGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "QuestLocatorGameMode.h" },
		{ "ModuleRelativePath", "QuestLocatorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuestLocatorGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AQuestLocatorGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_QuestLocator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQuestLocatorGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AQuestLocatorGameMode_Statics::ClassParams = {
	&AQuestLocatorGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQuestLocatorGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AQuestLocatorGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AQuestLocatorGameMode()
{
	if (!Z_Registration_Info_UClass_AQuestLocatorGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AQuestLocatorGameMode.OuterSingleton, Z_Construct_UClass_AQuestLocatorGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AQuestLocatorGameMode.OuterSingleton;
}
template<> QUESTLOCATOR_API UClass* StaticClass<AQuestLocatorGameMode>()
{
	return AQuestLocatorGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AQuestLocatorGameMode);
AQuestLocatorGameMode::~AQuestLocatorGameMode() {}
// End Class AQuestLocatorGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_felip_Documents_Unreal_Projects_QuestLocator_Source_QuestLocator_QuestLocatorGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AQuestLocatorGameMode, AQuestLocatorGameMode::StaticClass, TEXT("AQuestLocatorGameMode"), &Z_Registration_Info_UClass_AQuestLocatorGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AQuestLocatorGameMode), 1874288534U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_felip_Documents_Unreal_Projects_QuestLocator_Source_QuestLocator_QuestLocatorGameMode_h_1675277138(TEXT("/Script/QuestLocator"),
	Z_CompiledInDeferFile_FID_Users_felip_Documents_Unreal_Projects_QuestLocator_Source_QuestLocator_QuestLocatorGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_felip_Documents_Unreal_Projects_QuestLocator_Source_QuestLocator_QuestLocatorGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
