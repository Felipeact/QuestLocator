// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestLocator/Public/VLocatorComponent.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVLocatorComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
QUESTLOCATOR_API UClass* Z_Construct_UClass_UVLocatorComponent();
QUESTLOCATOR_API UClass* Z_Construct_UClass_UVLocatorComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_QuestLocator();
// End Cross Module References

// Begin Class UVLocatorComponent Function ShowPath
struct Z_Construct_UFunction_UVLocatorComponent_ShowPath_Statics
{
	struct VLocatorComponent_eventShowPath_Parms
	{
		FVector Origin;
		FVector Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VLocatorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVLocatorComponent_ShowPath_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VLocatorComponent_eventShowPath_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVLocatorComponent_ShowPath_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VLocatorComponent_eventShowPath_Parms, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVLocatorComponent_ShowPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVLocatorComponent_ShowPath_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVLocatorComponent_ShowPath_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVLocatorComponent_ShowPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVLocatorComponent_ShowPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVLocatorComponent, nullptr, "ShowPath", nullptr, nullptr, Z_Construct_UFunction_UVLocatorComponent_ShowPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVLocatorComponent_ShowPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVLocatorComponent_ShowPath_Statics::VLocatorComponent_eventShowPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVLocatorComponent_ShowPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVLocatorComponent_ShowPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVLocatorComponent_ShowPath_Statics::VLocatorComponent_eventShowPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVLocatorComponent_ShowPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVLocatorComponent_ShowPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVLocatorComponent::execShowPath)
{
	P_GET_STRUCT(FVector,Z_Param_Origin);
	P_GET_STRUCT(FVector,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowPath(Z_Param_Origin,Z_Param_Target);
	P_NATIVE_END;
}
// End Class UVLocatorComponent Function ShowPath

// Begin Class UVLocatorComponent Function UpdatePath
struct Z_Construct_UFunction_UVLocatorComponent_UpdatePath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VLocatorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVLocatorComponent_UpdatePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVLocatorComponent, nullptr, "UpdatePath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVLocatorComponent_UpdatePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVLocatorComponent_UpdatePath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVLocatorComponent_UpdatePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVLocatorComponent_UpdatePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVLocatorComponent::execUpdatePath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePath();
	P_NATIVE_END;
}
// End Class UVLocatorComponent Function UpdatePath

// Begin Class UVLocatorComponent
void UVLocatorComponent::StaticRegisterNativesUVLocatorComponent()
{
	UClass* Class = UVLocatorComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ShowPath", &UVLocatorComponent::execShowPath },
		{ "UpdatePath", &UVLocatorComponent::execUpdatePath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVLocatorComponent);
UClass* Z_Construct_UClass_UVLocatorComponent_NoRegister()
{
	return UVLocatorComponent::StaticClass();
}
struct Z_Construct_UClass_UVLocatorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "VLocatorComponent.h" },
		{ "ModuleRelativePath", "Public/VLocatorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerSplineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VLocatorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerNiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VLocatorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Particle_MetaData[] = {
		{ "Category", "Locator" },
		{ "ModuleRelativePath", "Public/VLocatorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/VLocatorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Locator" },
		{ "ModuleRelativePath", "Public/VLocatorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAlongSpline_MetaData[] = {
		{ "ModuleRelativePath", "Public/VLocatorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerSplineComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerNiagaraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Particle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimerHandle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceAlongSpline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVLocatorComponent_ShowPath, "ShowPath" }, // 1555765889
		{ &Z_Construct_UFunction_UVLocatorComponent_UpdatePath, "UpdatePath" }, // 3052042831
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVLocatorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVLocatorComponent_Statics::NewProp_OwnerSplineComponent = { "OwnerSplineComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVLocatorComponent, OwnerSplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerSplineComponent_MetaData), NewProp_OwnerSplineComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVLocatorComponent_Statics::NewProp_OwnerNiagaraComponent = { "OwnerNiagaraComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVLocatorComponent, OwnerNiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerNiagaraComponent_MetaData), NewProp_OwnerNiagaraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVLocatorComponent_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVLocatorComponent, Particle), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Particle_MetaData), NewProp_Particle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVLocatorComponent_Statics::NewProp_TimerHandle = { "TimerHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVLocatorComponent, TimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerHandle_MetaData), NewProp_TimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVLocatorComponent_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVLocatorComponent, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVLocatorComponent_Statics::NewProp_DistanceAlongSpline = { "DistanceAlongSpline", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVLocatorComponent, DistanceAlongSpline), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceAlongSpline_MetaData), NewProp_DistanceAlongSpline_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVLocatorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVLocatorComponent_Statics::NewProp_OwnerSplineComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVLocatorComponent_Statics::NewProp_OwnerNiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVLocatorComponent_Statics::NewProp_Particle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVLocatorComponent_Statics::NewProp_TimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVLocatorComponent_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVLocatorComponent_Statics::NewProp_DistanceAlongSpline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVLocatorComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVLocatorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_QuestLocator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVLocatorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVLocatorComponent_Statics::ClassParams = {
	&UVLocatorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVLocatorComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVLocatorComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVLocatorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVLocatorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVLocatorComponent()
{
	if (!Z_Registration_Info_UClass_UVLocatorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVLocatorComponent.OuterSingleton, Z_Construct_UClass_UVLocatorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVLocatorComponent.OuterSingleton;
}
template<> QUESTLOCATOR_API UClass* StaticClass<UVLocatorComponent>()
{
	return UVLocatorComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVLocatorComponent);
UVLocatorComponent::~UVLocatorComponent() {}
// End Class UVLocatorComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_felip_Documents_Unreal_Projects_QuestLocator_Source_QuestLocator_Public_VLocatorComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVLocatorComponent, UVLocatorComponent::StaticClass, TEXT("UVLocatorComponent"), &Z_Registration_Info_UClass_UVLocatorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVLocatorComponent), 1707100159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_felip_Documents_Unreal_Projects_QuestLocator_Source_QuestLocator_Public_VLocatorComponent_h_2501479016(TEXT("/Script/QuestLocator"),
	Z_CompiledInDeferFile_FID_Users_felip_Documents_Unreal_Projects_QuestLocator_Source_QuestLocator_Public_VLocatorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_felip_Documents_Unreal_Projects_QuestLocator_Source_QuestLocator_Public_VLocatorComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
