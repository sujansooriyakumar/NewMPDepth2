#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.IList`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoint>>
struct IList_1_tFA915CC375E314E15C3C0C95430614717C5FB33F;
// System.Collections.Generic.IList`1<VRM.FastSpringBones.NativeWrappers.NativeTransform>
struct IList_1_tD9815FACAB51C376492C2B1B824A6E2533F36654;
// System.Collections.Generic.IReadOnlyDictionary`2<UnityEngine.Transform,System.Int32>
struct IReadOnlyDictionary_2_t1ECAEF168E7E99D2AC43CB398C806CB5AD7345F7;
// System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone>>
struct IReadOnlyList_1_tFE74964F614DA8F2BB2374193CA0B23E7BA475D1;
// System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.Components.FastSpringBoneColliderGroup>
struct IReadOnlyList_1_t356739F2A9F2772343D149DA38D4491F05C823C9;
// System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.NativeWrappers.NativeTransform>
struct IReadOnlyList_1_tACEB85885FDAEAE173E088659A3ED59D140D6B3B;
// System.Collections.Generic.IReadOnlyList`1<System.Object>
struct IReadOnlyList_1_tF18BCD1A869B672D44C69CED938ED85B570F0C0F;
// System.Collections.Generic.List`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoint>>
struct List_1_t78A352A91F1F8984458AF2C9F03E9E67B435E965;
// System.Collections.Generic.List`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone>>
struct List_1_t92700908D27F92D03B3383418E66F4F3511B8E5B;
// System.Collections.Generic.List`1<VRM.FastSpringBones.NativeWrappers.NativeColliderGroups>
struct List_1_tA0A49F42F5FE77330FD5B9C7391144D57FBC8179;
// System.Collections.Generic.List`1<VRM.FastSpringBones.NativeWrappers.NativeTransform>
struct List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableColliderGroup>
struct NativePointer_1_tB3554FDF5108BEDECE546ECC595BC12EC64F8F74;
// VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableColliderGroups>
struct NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449;
// VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoint>
struct NativePointer_1_tAE35E054C215345560990C73548E2C5418E78EEB;
// VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoints>
struct NativePointer_1_tBD0F88F36A51FC5575FDA412C1ED0E8F9B6191E0;
// VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone>
struct NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC;
// VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableTransform>
struct NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407;
// VRM.FastSpringBones.Registries.Registry`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone>>
struct Registry_1_t263E63E9F159455BAB130CFA33A0F6F689B885AB;
// VRM.FastSpringBones.Registries.Registry`1<VRM.FastSpringBones.NativeWrappers.NativeColliderGroups>
struct Registry_1_tEC3E95FF3B33A1B4611560DAD298F96ABEA15F58;
// VRM.FastSpringBones.Registries.Registry`1<System.Object>
struct Registry_1_t3620ACCE4252740C65818345896E0DAA502FF0F6;
// VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoint>[]
struct NativePointer_1U5BU5D_t37D634454ACCEBCC0875A2774ECE38A44A772511;
// VRM.FastSpringBones.Blittables.BlittableCollider[]
struct BlittableColliderU5BU5D_t6F7A13492F46D2051CDDA4A50D78F5D51625F1A8;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// VRM.FastSpringBones.NativeWrappers.NativeTransform[]
struct NativeTransformU5BU5D_t10F93CAA876CCB43065D95790398AAE1384D4A4A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// VRM.FastSpringBones.Blittables.BlittableCollider
struct BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA;
// VRM.FastSpringBones.Blittables.BlittableColliderGroup
struct BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E;
// VRM.FastSpringBones.Blittables.BlittableColliderGroups
struct BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4;
// VRM.FastSpringBones.Blittables.BlittablePoint
struct BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A;
// VRM.FastSpringBones.Blittables.BlittablePoints
struct BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC;
// VRM.FastSpringBones.Blittables.BlittableRootBone
struct BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6;
// VRM.FastSpringBones.Blittables.BlittableTransform
struct BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C;
// VRM.FastSpringBones.Registries.ColliderGroupRegistry
struct ColliderGroupRegistry_t999F00E4395E09F2F8D26FCFE67FC1015BC0F92D;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Profiling.CustomSampler
struct CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t8C7CE574097FE7040CA0AD239BB2C887854CCEC4;
// VRM.FastSpringBones.Components.FastSpringBoneColliderGroup
struct FastSpringBoneColliderGroup_t335E25E7E132EFF43C9CF08D6CB02ADDB674FE14;
// VRM.FastSpringBones.Components.FastSpringBoneScheduler
struct FastSpringBoneScheduler_t5E3845D2D6DEED6206BC673BCAFFCFD6D839974C;
// VRM.FastSpringBones.Components.FastSpringRootBone
struct FastSpringRootBone_t102F94B147FA22D317CCDEE04CB76A3E213A6CC8;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tDD88F07104FAB5096D8C58BF8DA4F8E423E48925;
// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct IsUnmanagedAttribute_tD4E6DE53B78FF1743884ADFF99CEDFFA6407F7E7;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// VRM.FastSpringBones.NativeWrappers.NativeColliderGroup
struct NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B;
// VRM.FastSpringBones.NativeWrappers.NativeColliderGroups
struct NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212;
// VRM.FastSpringBones.NativeWrappers.NativePoints
struct NativePoints_tF458244EDF35A600E87E85F491D880B84043E0BF;
// VRM.FastSpringBones.NativeWrappers.NativeTransform
struct NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// VRM.FastSpringBones.Schedulers.PullTransformJobScheduler
struct PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4;
// VRM.FastSpringBones.Schedulers.PushTransformJobScheduler
struct PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF;
// VRM.FastSpringBones.Registries.RootBoneRegistry
struct RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// VRM.FastSpringBones.Registries.TransformRegistry
struct TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF;
// VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler
struct UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t02D3F183FE3CD1C51B8F90700ABFBFE5F3A5F0BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t377868E014FDB47AC84B9665F2D8E497650C057E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t91DFC46BFB820D5C49491C3C300B91505F49374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tC1C0A5CC0B79ECD7ECB38EA1A06239CDD3CF64F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t08C35294A1FCE87761C6D57E7A3C8E112251FD52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tA62BFE4C13650B9186769FB292FC01255FBD19C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tFA915CC375E314E15C3C0C95430614717C5FB33F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t4501497224987A4655ACF44BC207285D715F39B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t53BDE792C8A33E21A16A6B2F9F925735A5099051_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t58F6A0A6739781CAFFB15EFFA48A30E8B2768989_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_t356739F2A9F2772343D149DA38D4491F05C823C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_tACEB85885FDAEAE173E088659A3ED59D140D6B3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_tFE74964F614DA8F2BB2374193CA0B23E7BA475D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t78A352A91F1F8984458AF2C9F03E9E67B435E965_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativePointer_1_tAE35E054C215345560990C73548E2C5418E78EEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativePointer_1_tB3554FDF5108BEDECE546ECC595BC12EC64F8F74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativePointer_1_tBD0F88F36A51FC5575FDA412C1ED0E8F9B6191E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativePoints_tF458244EDF35A600E87E85F491D880B84043E0BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformSynchronizationType_t99762C775FE99151C7010F711D2A56EFD66E359A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral45AF9F1D53CE24112610F66A0E24829FFA5E0746;
IL2CPP_EXTERN_C String_t* _stringLiteral6652C395633B0BE050F895C3AD7D7DEE5BC88884;
IL2CPP_EXTERN_C String_t* _stringLiteralD928FBF64A7879312BDF31C654A0AB714CBF0CF7;
IL2CPP_EXTERN_C const RuntimeMethod* FastSpringBoneScheduler_OnRootBoneChanged_m4381C13CD8FCEAA03C5DAF3E7751E7449F007CBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobParallelForExtensions_Schedule_TisJob_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB_mA9136043701409D9C51B7C03128E707F0354062F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobParallelForTransformExtensions_Schedule_TisJob_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5_m02BBE6CFCF5995CE07CBB42D10109339D7395C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobParallelForTransformExtensions_Schedule_TisJob_t5FAB4DC4861E73B951E02964DD2433805897C5AA_m0004C9853A6BCF40E16963D2053B70E19AEED237_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9CE7A4248DCBE099817C50547D21C159A018A4BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mA25589EE8ACC8A8299468703FB5B5C1E40391F20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mBF258404139731D5EDCC1FA75670E998FB2B30E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m10C91054A72FA12AC2D2F4EF8E206A6FFCB42DF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3018BF89B67578F1174A277BC6085C0B6BD0653A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisBlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E_m8D96F603842010F8D55B4E9156F1C07AB7595D91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisBlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA_m7EECC12E84A69E8935F6A8D7D2DB72F2532C3616_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisBlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A_mFB9D3FE8B185C3955965A33E8AF3551935B111B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m2357502C1E0883EDE4885D3B1CE29CE26034C65D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m9A2053C4C1283ECDB4A4F1FAC79B74023C75C346_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mB66EEDD3ABF1090CBB0727291289C3BD96A09DE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m21191AD078CD392FD4D47FBB4C5F892A3C8AE523_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m39CF77A3A9F33A373574F8828FCBC2D8423144E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mB38DD07EAFB304D54CD37FF27758380E86430EE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_m9970B09EE65D7D0525FD9B6E76D88CC4F1F0A5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_m9B4A447E1F22115DE02D0CB244418E22AB663EB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_mA5FAE780587803D0C5EED530ABC943E542782681_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativePointer_1_Dispose_m1B57CA1E5A4636EC45076E1A85BF2D0419DA3132_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativePointer_1_Dispose_m3C821A6A81377B9E507E4214B67E3A2021DF841D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativePointer_1_Dispose_m3FD3149D29CDC275C9011761599F84BADCE310ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativePointer_1_Dispose_m43C02B10250DE56976CAE91C45D888F29EEA76E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativePointer_1_Dispose_m7C01E25068431FCB4D400792073C190EDE4082CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativePointer_1_Dispose_mB0F3B59BB93C50F28D7384A263C343DF6C82941F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativePointer_1_GetUnsafePtr_m2E5086436D93F6C2410A12F6C6BD13ACFBD2B1A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativePointer_1_GetUnsafePtr_m3BFD7CC15F4826354FD480A540A6D7259908328A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativePointer_1_GetUnsafePtr_m3D00124F41554DA72CC54437217D15A41ADDF02C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativePointer_1_GetUnsafePtr_m87098DA39302F62A2BEDD8E4B56FD0B0F5F67295_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativePointer_1_GetUnsafePtr_mD1E56BD92F641FAC550435B1EB4C8F76330CD903_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativePointer_1__ctor_m3DD6AAF8BC1050A5E4D3A67EFD4EF84EBBB4B2EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativePointer_1__ctor_m67B685A33CCB1AC3A5031A1F8665AF125815CBC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativePointer_1__ctor_m758D686235384641668A1CBA24872EFCCBCA4FA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativePointer_1__ctor_m9EA2F75E1F5E313FDE04F222AB0AC8C8B960B9AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativePointer_1__ctor_mDA970D759AF8203A52F15FDBC1B3F47B358A695A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativePointer_1__ctor_mDDFFA919DF17BD9C2AD52800F292CD6FAF484C56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativePointer_1_get_Value_m0EDFC5DB50ECAF5679C9254F270A45CCF5F713BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativePointer_1_get_Value_mC2CA08D7B0CB8FA35FECBF8A461CCBDA0A49BE1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativePointer_1_get_Value_mCBBF37AA6AB92E1CB8F99DE38D86BF3FB63EE231_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativePointer_1_set_Value_m69616F9509C1313DC79603E4798738665B48154C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PullTransformJobScheduler_OnTransformChanged_mCB6FE8AF1E5842F57F8D856AF61DC175341BB121_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PushTransformJobScheduler_OnTransformChanged_mC327169CFB2B3446ABE4A98C14F4F3AEC1550963_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Registry_1_Register_m63E38BCEBA6B466AA5EF9D1F94B763A64FC3CAA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Registry_1_Register_mDED59D567899CAC235E8ACE428E70748393613E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Registry_1_SubscribeOnValueChanged_m5803472941F18EC782B5FD29B310F112036580F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Registry_1_UnSubscribeOnValueChanged_m2C6BFE4E58FA82AF815A5E56832C076BE8F7F1BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Registry_1_Unregister_m5969B0EC606555E05745AC98B53349ECF1182486_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Registry_1_Unregister_m986D6031D2A6D298B89C24BAEA728343B6B2B67A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Registry_1__ctor_m86240CCCCB23EA93B7D6D908222543E0075A0884_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Registry_1__ctor_mB1AF16939ECE2C8C0D0CCDD33EACB62038771892_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Registry_1_get_Items_m05DB85816227EC2ECA03016B1744FF74DBBD9CB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransformRegistry_Register_m6F14A3133E0DE4EC7DF21C10CF846738C5146D3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UpdateSpringBoneJobScheduler_OnRootBoneChanged_m9BA12E16FB065106596909AD25D46F52EC826654_RuntimeMethod_var;
struct BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E ;
struct BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 ;
struct BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A ;
struct BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC ;
struct BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 ;
struct BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BlittableColliderU5BU5D_t6F7A13492F46D2051CDDA4A50D78F5D51625F1A8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA8D292D60A4385CBBB5B7F1D5C581B176C8067E5 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoint>>
struct List_1_t78A352A91F1F8984458AF2C9F03E9E67B435E965  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NativePointer_1U5BU5D_t37D634454ACCEBCC0875A2774ECE38A44A772511* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t78A352A91F1F8984458AF2C9F03E9E67B435E965, ____items_1)); }
	inline NativePointer_1U5BU5D_t37D634454ACCEBCC0875A2774ECE38A44A772511* get__items_1() const { return ____items_1; }
	inline NativePointer_1U5BU5D_t37D634454ACCEBCC0875A2774ECE38A44A772511** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NativePointer_1U5BU5D_t37D634454ACCEBCC0875A2774ECE38A44A772511* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t78A352A91F1F8984458AF2C9F03E9E67B435E965, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t78A352A91F1F8984458AF2C9F03E9E67B435E965, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t78A352A91F1F8984458AF2C9F03E9E67B435E965, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t78A352A91F1F8984458AF2C9F03E9E67B435E965_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	NativePointer_1U5BU5D_t37D634454ACCEBCC0875A2774ECE38A44A772511* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t78A352A91F1F8984458AF2C9F03E9E67B435E965_StaticFields, ____emptyArray_5)); }
	inline NativePointer_1U5BU5D_t37D634454ACCEBCC0875A2774ECE38A44A772511* get__emptyArray_5() const { return ____emptyArray_5; }
	inline NativePointer_1U5BU5D_t37D634454ACCEBCC0875A2774ECE38A44A772511** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(NativePointer_1U5BU5D_t37D634454ACCEBCC0875A2774ECE38A44A772511* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<VRM.FastSpringBones.NativeWrappers.NativeTransform>
struct List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NativeTransformU5BU5D_t10F93CAA876CCB43065D95790398AAE1384D4A4A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE, ____items_1)); }
	inline NativeTransformU5BU5D_t10F93CAA876CCB43065D95790398AAE1384D4A4A* get__items_1() const { return ____items_1; }
	inline NativeTransformU5BU5D_t10F93CAA876CCB43065D95790398AAE1384D4A4A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NativeTransformU5BU5D_t10F93CAA876CCB43065D95790398AAE1384D4A4A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	NativeTransformU5BU5D_t10F93CAA876CCB43065D95790398AAE1384D4A4A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE_StaticFields, ____emptyArray_5)); }
	inline NativeTransformU5BU5D_t10F93CAA876CCB43065D95790398AAE1384D4A4A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline NativeTransformU5BU5D_t10F93CAA876CCB43065D95790398AAE1384D4A4A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(NativeTransformU5BU5D_t10F93CAA876CCB43065D95790398AAE1384D4A4A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableColliderGroup>
struct NativePointer_1_tB3554FDF5108BEDECE546ECC595BC12EC64F8F74  : public RuntimeObject
{
public:
	// T* VRM.FastSpringBones.NativeWrappers.NativePointer`1::_unsafePtr
	BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * ____unsafePtr_0;

public:
	inline static int32_t get_offset_of__unsafePtr_0() { return static_cast<int32_t>(offsetof(NativePointer_1_tB3554FDF5108BEDECE546ECC595BC12EC64F8F74, ____unsafePtr_0)); }
	inline BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * get__unsafePtr_0() const { return ____unsafePtr_0; }
	inline BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E ** get_address_of__unsafePtr_0() { return &____unsafePtr_0; }
	inline void set__unsafePtr_0(BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * value)
	{
		____unsafePtr_0 = value;
	}
};


// VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableColliderGroups>
struct NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449  : public RuntimeObject
{
public:
	// T* VRM.FastSpringBones.NativeWrappers.NativePointer`1::_unsafePtr
	BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * ____unsafePtr_0;

public:
	inline static int32_t get_offset_of__unsafePtr_0() { return static_cast<int32_t>(offsetof(NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449, ____unsafePtr_0)); }
	inline BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * get__unsafePtr_0() const { return ____unsafePtr_0; }
	inline BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 ** get_address_of__unsafePtr_0() { return &____unsafePtr_0; }
	inline void set__unsafePtr_0(BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * value)
	{
		____unsafePtr_0 = value;
	}
};


// VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoint>
struct NativePointer_1_tAE35E054C215345560990C73548E2C5418E78EEB  : public RuntimeObject
{
public:
	// T* VRM.FastSpringBones.NativeWrappers.NativePointer`1::_unsafePtr
	BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * ____unsafePtr_0;

public:
	inline static int32_t get_offset_of__unsafePtr_0() { return static_cast<int32_t>(offsetof(NativePointer_1_tAE35E054C215345560990C73548E2C5418E78EEB, ____unsafePtr_0)); }
	inline BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * get__unsafePtr_0() const { return ____unsafePtr_0; }
	inline BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A ** get_address_of__unsafePtr_0() { return &____unsafePtr_0; }
	inline void set__unsafePtr_0(BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * value)
	{
		____unsafePtr_0 = value;
	}
};


// VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoints>
struct NativePointer_1_tBD0F88F36A51FC5575FDA412C1ED0E8F9B6191E0  : public RuntimeObject
{
public:
	// T* VRM.FastSpringBones.NativeWrappers.NativePointer`1::_unsafePtr
	BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * ____unsafePtr_0;

public:
	inline static int32_t get_offset_of__unsafePtr_0() { return static_cast<int32_t>(offsetof(NativePointer_1_tBD0F88F36A51FC5575FDA412C1ED0E8F9B6191E0, ____unsafePtr_0)); }
	inline BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * get__unsafePtr_0() const { return ____unsafePtr_0; }
	inline BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC ** get_address_of__unsafePtr_0() { return &____unsafePtr_0; }
	inline void set__unsafePtr_0(BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * value)
	{
		____unsafePtr_0 = value;
	}
};


// VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone>
struct NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC  : public RuntimeObject
{
public:
	// T* VRM.FastSpringBones.NativeWrappers.NativePointer`1::_unsafePtr
	BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 * ____unsafePtr_0;

public:
	inline static int32_t get_offset_of__unsafePtr_0() { return static_cast<int32_t>(offsetof(NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC, ____unsafePtr_0)); }
	inline BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 * get__unsafePtr_0() const { return ____unsafePtr_0; }
	inline BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 ** get_address_of__unsafePtr_0() { return &____unsafePtr_0; }
	inline void set__unsafePtr_0(BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 * value)
	{
		____unsafePtr_0 = value;
	}
};


// VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableTransform>
struct NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407  : public RuntimeObject
{
public:
	// T* VRM.FastSpringBones.NativeWrappers.NativePointer`1::_unsafePtr
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * ____unsafePtr_0;

public:
	inline static int32_t get_offset_of__unsafePtr_0() { return static_cast<int32_t>(offsetof(NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407, ____unsafePtr_0)); }
	inline BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * get__unsafePtr_0() const { return ____unsafePtr_0; }
	inline BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** get_address_of__unsafePtr_0() { return &____unsafePtr_0; }
	inline void set__unsafePtr_0(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * value)
	{
		____unsafePtr_0 = value;
	}
};


// VRM.FastSpringBones.Registries.Registry`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone>>
struct Registry_1_t263E63E9F159455BAB130CFA33A0F6F689B885AB  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> VRM.FastSpringBones.Registries.Registry`1::_items
	List_1_t92700908D27F92D03B3383418E66F4F3511B8E5B * ____items_0;
	// System.Action VRM.FastSpringBones.Registries.Registry`1::_onValueChanged
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____onValueChanged_1;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(Registry_1_t263E63E9F159455BAB130CFA33A0F6F689B885AB, ____items_0)); }
	inline List_1_t92700908D27F92D03B3383418E66F4F3511B8E5B * get__items_0() const { return ____items_0; }
	inline List_1_t92700908D27F92D03B3383418E66F4F3511B8E5B ** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(List_1_t92700908D27F92D03B3383418E66F4F3511B8E5B * value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_0), (void*)value);
	}

	inline static int32_t get_offset_of__onValueChanged_1() { return static_cast<int32_t>(offsetof(Registry_1_t263E63E9F159455BAB130CFA33A0F6F689B885AB, ____onValueChanged_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__onValueChanged_1() const { return ____onValueChanged_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__onValueChanged_1() { return &____onValueChanged_1; }
	inline void set__onValueChanged_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____onValueChanged_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onValueChanged_1), (void*)value);
	}
};


// VRM.FastSpringBones.Registries.Registry`1<VRM.FastSpringBones.NativeWrappers.NativeColliderGroups>
struct Registry_1_tEC3E95FF3B33A1B4611560DAD298F96ABEA15F58  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> VRM.FastSpringBones.Registries.Registry`1::_items
	List_1_tA0A49F42F5FE77330FD5B9C7391144D57FBC8179 * ____items_0;
	// System.Action VRM.FastSpringBones.Registries.Registry`1::_onValueChanged
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____onValueChanged_1;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(Registry_1_tEC3E95FF3B33A1B4611560DAD298F96ABEA15F58, ____items_0)); }
	inline List_1_tA0A49F42F5FE77330FD5B9C7391144D57FBC8179 * get__items_0() const { return ____items_0; }
	inline List_1_tA0A49F42F5FE77330FD5B9C7391144D57FBC8179 ** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(List_1_tA0A49F42F5FE77330FD5B9C7391144D57FBC8179 * value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_0), (void*)value);
	}

	inline static int32_t get_offset_of__onValueChanged_1() { return static_cast<int32_t>(offsetof(Registry_1_tEC3E95FF3B33A1B4611560DAD298F96ABEA15F58, ____onValueChanged_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__onValueChanged_1() const { return ____onValueChanged_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__onValueChanged_1() { return &____onValueChanged_1; }
	inline void set__onValueChanged_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____onValueChanged_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onValueChanged_1), (void*)value);
	}
};


// VRM.FastSpringBones.Registries.Registry`1<System.Object>
struct Registry_1_t3620ACCE4252740C65818345896E0DAA502FF0F6  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> VRM.FastSpringBones.Registries.Registry`1::_items
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ____items_0;
	// System.Action VRM.FastSpringBones.Registries.Registry`1::_onValueChanged
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____onValueChanged_1;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(Registry_1_t3620ACCE4252740C65818345896E0DAA502FF0F6, ____items_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get__items_0() const { return ____items_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_0), (void*)value);
	}

	inline static int32_t get_offset_of__onValueChanged_1() { return static_cast<int32_t>(offsetof(Registry_1_t3620ACCE4252740C65818345896E0DAA502FF0F6, ____onValueChanged_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__onValueChanged_1() const { return ____onValueChanged_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__onValueChanged_1() { return &____onValueChanged_1; }
	inline void set__onValueChanged_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____onValueChanged_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onValueChanged_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// VRM.FastSpringBones.Components.FastSpringRootBone
struct FastSpringRootBone_t102F94B147FA22D317CCDEE04CB76A3E213A6CC8  : public RuntimeObject
{
public:
	// VRM.FastSpringBones.Registries.TransformRegistry VRM.FastSpringBones.Components.FastSpringRootBone::_transformRegistry
	TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * ____transformRegistry_0;
	// VRM.FastSpringBones.Registries.RootBoneRegistry VRM.FastSpringBones.Components.FastSpringRootBone::_rootBoneRegistry
	RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 * ____rootBoneRegistry_1;
	// VRM.FastSpringBones.Registries.ColliderGroupRegistry VRM.FastSpringBones.Components.FastSpringRootBone::_colliderGroupRegistry
	ColliderGroupRegistry_t999F00E4395E09F2F8D26FCFE67FC1015BC0F92D * ____colliderGroupRegistry_2;
	// UnityEngine.Transform VRM.FastSpringBones.Components.FastSpringRootBone::_transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____transform_3;
	// System.Single VRM.FastSpringBones.Components.FastSpringRootBone::_radius
	float ____radius_4;
	// VRM.FastSpringBones.NativeWrappers.NativeTransform VRM.FastSpringBones.Components.FastSpringRootBone::_center
	NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * ____center_5;
	// System.Collections.Generic.IReadOnlyDictionary`2<UnityEngine.Transform,System.Int32> VRM.FastSpringBones.Components.FastSpringRootBone::_transformIndexMap
	RuntimeObject* ____transformIndexMap_6;
	// VRM.FastSpringBones.NativeWrappers.NativeColliderGroups VRM.FastSpringBones.Components.FastSpringRootBone::_nativeColliderGroups
	NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * ____nativeColliderGroups_7;
	// VRM.FastSpringBones.NativeWrappers.NativePoints VRM.FastSpringBones.Components.FastSpringRootBone::_nativePoints
	NativePoints_tF458244EDF35A600E87E85F491D880B84043E0BF * ____nativePoints_8;
	// VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone> VRM.FastSpringBones.Components.FastSpringRootBone::_rootBoneWrapper
	NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC * ____rootBoneWrapper_9;
	// System.Collections.Generic.IList`1<VRM.FastSpringBones.NativeWrappers.NativeTransform> VRM.FastSpringBones.Components.FastSpringRootBone::_transformWrappers
	RuntimeObject* ____transformWrappers_10;
	// System.Collections.Generic.IList`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoint>> VRM.FastSpringBones.Components.FastSpringRootBone::_points
	RuntimeObject* ____points_11;

public:
	inline static int32_t get_offset_of__transformRegistry_0() { return static_cast<int32_t>(offsetof(FastSpringRootBone_t102F94B147FA22D317CCDEE04CB76A3E213A6CC8, ____transformRegistry_0)); }
	inline TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * get__transformRegistry_0() const { return ____transformRegistry_0; }
	inline TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF ** get_address_of__transformRegistry_0() { return &____transformRegistry_0; }
	inline void set__transformRegistry_0(TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * value)
	{
		____transformRegistry_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transformRegistry_0), (void*)value);
	}

	inline static int32_t get_offset_of__rootBoneRegistry_1() { return static_cast<int32_t>(offsetof(FastSpringRootBone_t102F94B147FA22D317CCDEE04CB76A3E213A6CC8, ____rootBoneRegistry_1)); }
	inline RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 * get__rootBoneRegistry_1() const { return ____rootBoneRegistry_1; }
	inline RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 ** get_address_of__rootBoneRegistry_1() { return &____rootBoneRegistry_1; }
	inline void set__rootBoneRegistry_1(RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 * value)
	{
		____rootBoneRegistry_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rootBoneRegistry_1), (void*)value);
	}

	inline static int32_t get_offset_of__colliderGroupRegistry_2() { return static_cast<int32_t>(offsetof(FastSpringRootBone_t102F94B147FA22D317CCDEE04CB76A3E213A6CC8, ____colliderGroupRegistry_2)); }
	inline ColliderGroupRegistry_t999F00E4395E09F2F8D26FCFE67FC1015BC0F92D * get__colliderGroupRegistry_2() const { return ____colliderGroupRegistry_2; }
	inline ColliderGroupRegistry_t999F00E4395E09F2F8D26FCFE67FC1015BC0F92D ** get_address_of__colliderGroupRegistry_2() { return &____colliderGroupRegistry_2; }
	inline void set__colliderGroupRegistry_2(ColliderGroupRegistry_t999F00E4395E09F2F8D26FCFE67FC1015BC0F92D * value)
	{
		____colliderGroupRegistry_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colliderGroupRegistry_2), (void*)value);
	}

	inline static int32_t get_offset_of__transform_3() { return static_cast<int32_t>(offsetof(FastSpringRootBone_t102F94B147FA22D317CCDEE04CB76A3E213A6CC8, ____transform_3)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__transform_3() const { return ____transform_3; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__transform_3() { return &____transform_3; }
	inline void set__transform_3(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____transform_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transform_3), (void*)value);
	}

	inline static int32_t get_offset_of__radius_4() { return static_cast<int32_t>(offsetof(FastSpringRootBone_t102F94B147FA22D317CCDEE04CB76A3E213A6CC8, ____radius_4)); }
	inline float get__radius_4() const { return ____radius_4; }
	inline float* get_address_of__radius_4() { return &____radius_4; }
	inline void set__radius_4(float value)
	{
		____radius_4 = value;
	}

	inline static int32_t get_offset_of__center_5() { return static_cast<int32_t>(offsetof(FastSpringRootBone_t102F94B147FA22D317CCDEE04CB76A3E213A6CC8, ____center_5)); }
	inline NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * get__center_5() const { return ____center_5; }
	inline NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 ** get_address_of__center_5() { return &____center_5; }
	inline void set__center_5(NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * value)
	{
		____center_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____center_5), (void*)value);
	}

	inline static int32_t get_offset_of__transformIndexMap_6() { return static_cast<int32_t>(offsetof(FastSpringRootBone_t102F94B147FA22D317CCDEE04CB76A3E213A6CC8, ____transformIndexMap_6)); }
	inline RuntimeObject* get__transformIndexMap_6() const { return ____transformIndexMap_6; }
	inline RuntimeObject** get_address_of__transformIndexMap_6() { return &____transformIndexMap_6; }
	inline void set__transformIndexMap_6(RuntimeObject* value)
	{
		____transformIndexMap_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transformIndexMap_6), (void*)value);
	}

	inline static int32_t get_offset_of__nativeColliderGroups_7() { return static_cast<int32_t>(offsetof(FastSpringRootBone_t102F94B147FA22D317CCDEE04CB76A3E213A6CC8, ____nativeColliderGroups_7)); }
	inline NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * get__nativeColliderGroups_7() const { return ____nativeColliderGroups_7; }
	inline NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 ** get_address_of__nativeColliderGroups_7() { return &____nativeColliderGroups_7; }
	inline void set__nativeColliderGroups_7(NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * value)
	{
		____nativeColliderGroups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nativeColliderGroups_7), (void*)value);
	}

	inline static int32_t get_offset_of__nativePoints_8() { return static_cast<int32_t>(offsetof(FastSpringRootBone_t102F94B147FA22D317CCDEE04CB76A3E213A6CC8, ____nativePoints_8)); }
	inline NativePoints_tF458244EDF35A600E87E85F491D880B84043E0BF * get__nativePoints_8() const { return ____nativePoints_8; }
	inline NativePoints_tF458244EDF35A600E87E85F491D880B84043E0BF ** get_address_of__nativePoints_8() { return &____nativePoints_8; }
	inline void set__nativePoints_8(NativePoints_tF458244EDF35A600E87E85F491D880B84043E0BF * value)
	{
		____nativePoints_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nativePoints_8), (void*)value);
	}

	inline static int32_t get_offset_of__rootBoneWrapper_9() { return static_cast<int32_t>(offsetof(FastSpringRootBone_t102F94B147FA22D317CCDEE04CB76A3E213A6CC8, ____rootBoneWrapper_9)); }
	inline NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC * get__rootBoneWrapper_9() const { return ____rootBoneWrapper_9; }
	inline NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC ** get_address_of__rootBoneWrapper_9() { return &____rootBoneWrapper_9; }
	inline void set__rootBoneWrapper_9(NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC * value)
	{
		____rootBoneWrapper_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rootBoneWrapper_9), (void*)value);
	}

	inline static int32_t get_offset_of__transformWrappers_10() { return static_cast<int32_t>(offsetof(FastSpringRootBone_t102F94B147FA22D317CCDEE04CB76A3E213A6CC8, ____transformWrappers_10)); }
	inline RuntimeObject* get__transformWrappers_10() const { return ____transformWrappers_10; }
	inline RuntimeObject** get_address_of__transformWrappers_10() { return &____transformWrappers_10; }
	inline void set__transformWrappers_10(RuntimeObject* value)
	{
		____transformWrappers_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transformWrappers_10), (void*)value);
	}

	inline static int32_t get_offset_of__points_11() { return static_cast<int32_t>(offsetof(FastSpringRootBone_t102F94B147FA22D317CCDEE04CB76A3E213A6CC8, ____points_11)); }
	inline RuntimeObject* get__points_11() const { return ____points_11; }
	inline RuntimeObject** get_address_of__points_11() { return &____points_11; }
	inline void set__points_11(RuntimeObject* value)
	{
		____points_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____points_11), (void*)value);
	}
};


// VRM.FastSpringBones.NativeWrappers.NativeTransform
struct NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91  : public RuntimeObject
{
public:
	// VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableTransform> VRM.FastSpringBones.NativeWrappers.NativeTransform::_nativePointer
	NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407 * ____nativePointer_0;
	// UnityEngine.Transform VRM.FastSpringBones.NativeWrappers.NativeTransform::<Transform>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CTransformU3Ek__BackingField_1;
	// VRM.FastSpringBones.Registries.TransformRegistry VRM.FastSpringBones.NativeWrappers.NativeTransform::_transformRegistry
	TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * ____transformRegistry_2;

public:
	inline static int32_t get_offset_of__nativePointer_0() { return static_cast<int32_t>(offsetof(NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91, ____nativePointer_0)); }
	inline NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407 * get__nativePointer_0() const { return ____nativePointer_0; }
	inline NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407 ** get_address_of__nativePointer_0() { return &____nativePointer_0; }
	inline void set__nativePointer_0(NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407 * value)
	{
		____nativePointer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nativePointer_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTransformU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91, ___U3CTransformU3Ek__BackingField_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CTransformU3Ek__BackingField_1() const { return ___U3CTransformU3Ek__BackingField_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CTransformU3Ek__BackingField_1() { return &___U3CTransformU3Ek__BackingField_1; }
	inline void set_U3CTransformU3Ek__BackingField_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CTransformU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTransformU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of__transformRegistry_2() { return static_cast<int32_t>(offsetof(NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91, ____transformRegistry_2)); }
	inline TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * get__transformRegistry_2() const { return ____transformRegistry_2; }
	inline TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF ** get_address_of__transformRegistry_2() { return &____transformRegistry_2; }
	inline void set__transformRegistry_2(TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * value)
	{
		____transformRegistry_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transformRegistry_2), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// VRM.FastSpringBones.Registries.TransformRegistry
struct TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<VRM.FastSpringBones.NativeWrappers.NativeTransform> VRM.FastSpringBones.Registries.TransformRegistry::_transforms
	List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * ____transforms_0;
	// System.Collections.Generic.List`1<VRM.FastSpringBones.NativeWrappers.NativeTransform> VRM.FastSpringBones.Registries.TransformRegistry::_pullTargets
	List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * ____pullTargets_1;
	// System.Collections.Generic.List`1<VRM.FastSpringBones.NativeWrappers.NativeTransform> VRM.FastSpringBones.Registries.TransformRegistry::_pushTargets
	List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * ____pushTargets_2;
	// System.Action VRM.FastSpringBones.Registries.TransformRegistry::_onValueChanged
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____onValueChanged_3;

public:
	inline static int32_t get_offset_of__transforms_0() { return static_cast<int32_t>(offsetof(TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF, ____transforms_0)); }
	inline List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * get__transforms_0() const { return ____transforms_0; }
	inline List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE ** get_address_of__transforms_0() { return &____transforms_0; }
	inline void set__transforms_0(List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * value)
	{
		____transforms_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transforms_0), (void*)value);
	}

	inline static int32_t get_offset_of__pullTargets_1() { return static_cast<int32_t>(offsetof(TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF, ____pullTargets_1)); }
	inline List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * get__pullTargets_1() const { return ____pullTargets_1; }
	inline List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE ** get_address_of__pullTargets_1() { return &____pullTargets_1; }
	inline void set__pullTargets_1(List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * value)
	{
		____pullTargets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pullTargets_1), (void*)value);
	}

	inline static int32_t get_offset_of__pushTargets_2() { return static_cast<int32_t>(offsetof(TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF, ____pushTargets_2)); }
	inline List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * get__pushTargets_2() const { return ____pushTargets_2; }
	inline List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE ** get_address_of__pushTargets_2() { return &____pushTargets_2; }
	inline void set__pushTargets_2(List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * value)
	{
		____pushTargets_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pushTargets_2), (void*)value);
	}

	inline static int32_t get_offset_of__onValueChanged_3() { return static_cast<int32_t>(offsetof(TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF, ____onValueChanged_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__onValueChanged_3() const { return ____onValueChanged_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__onValueChanged_3() { return &____onValueChanged_3; }
	inline void set__onValueChanged_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____onValueChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onValueChanged_3), (void*)value);
	}
};


// VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler
struct UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506  : public RuntimeObject
{
public:
	// VRM.FastSpringBones.Blittables.BlittableRootBone** VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler::_rootBonePointers
	BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 ** ____rootBonePointers_0;
	// VRM.FastSpringBones.Registries.RootBoneRegistry VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler::_rootBoneRegistry
	RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 * ____rootBoneRegistry_1;
	// UnityEngine.Profiling.CustomSampler VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler::_sampler
	CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * ____sampler_2;
	// System.Boolean VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler::_dirty
	bool ____dirty_3;

public:
	inline static int32_t get_offset_of__rootBonePointers_0() { return static_cast<int32_t>(offsetof(UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506, ____rootBonePointers_0)); }
	inline BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 ** get__rootBonePointers_0() const { return ____rootBonePointers_0; }
	inline BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 *** get_address_of__rootBonePointers_0() { return &____rootBonePointers_0; }
	inline void set__rootBonePointers_0(BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 ** value)
	{
		____rootBonePointers_0 = value;
	}

	inline static int32_t get_offset_of__rootBoneRegistry_1() { return static_cast<int32_t>(offsetof(UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506, ____rootBoneRegistry_1)); }
	inline RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 * get__rootBoneRegistry_1() const { return ____rootBoneRegistry_1; }
	inline RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 ** get_address_of__rootBoneRegistry_1() { return &____rootBoneRegistry_1; }
	inline void set__rootBoneRegistry_1(RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 * value)
	{
		____rootBoneRegistry_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rootBoneRegistry_1), (void*)value);
	}

	inline static int32_t get_offset_of__sampler_2() { return static_cast<int32_t>(offsetof(UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506, ____sampler_2)); }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * get__sampler_2() const { return ____sampler_2; }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 ** get_address_of__sampler_2() { return &____sampler_2; }
	inline void set__sampler_2(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * value)
	{
		____sampler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sampler_2), (void*)value);
	}

	inline static int32_t get_offset_of__dirty_3() { return static_cast<int32_t>(offsetof(UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506, ____dirty_3)); }
	inline bool get__dirty_3() const { return ____dirty_3; }
	inline bool* get_address_of__dirty_3() { return &____dirty_3; }
	inline void set__dirty_3(bool value)
	{
		____dirty_3 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// VRM.FastSpringBones.Blittables.BlittableColliderGroups
struct BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 
{
public:
	// VRM.FastSpringBones.Blittables.BlittableColliderGroup* VRM.FastSpringBones.Blittables.BlittableColliderGroups::_data
	BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * ____data_0;
	// System.Int32 VRM.FastSpringBones.Blittables.BlittableColliderGroups::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4, ____data_0)); }
	inline BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * get__data_0() const { return ____data_0; }
	inline BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E ** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * value)
	{
		____data_0 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4, ___U3CLengthU3Ek__BackingField_1)); }
	inline int32_t get_U3CLengthU3Ek__BackingField_1() const { return ___U3CLengthU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CLengthU3Ek__BackingField_1() { return &___U3CLengthU3Ek__BackingField_1; }
	inline void set_U3CLengthU3Ek__BackingField_1(int32_t value)
	{
		___U3CLengthU3Ek__BackingField_1 = value;
	}
};

// Native definition for P/Invoke marshalling of VRM.FastSpringBones.Blittables.BlittableColliderGroups
struct BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4_marshaled_pinvoke
{
	BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * ____data_0;
	int32_t ___U3CLengthU3Ek__BackingField_1;
};
// Native definition for COM marshalling of VRM.FastSpringBones.Blittables.BlittableColliderGroups
struct BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4_marshaled_com
{
	BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * ____data_0;
	int32_t ___U3CLengthU3Ek__BackingField_1;
};

// VRM.FastSpringBones.Blittables.BlittableColliders
struct BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32 
{
public:
	// VRM.FastSpringBones.Blittables.BlittableCollider* VRM.FastSpringBones.Blittables.BlittableColliders::_colliders
	BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA * ____colliders_0;
	// System.Int32 VRM.FastSpringBones.Blittables.BlittableColliders::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of__colliders_0() { return static_cast<int32_t>(offsetof(BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32, ____colliders_0)); }
	inline BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA * get__colliders_0() const { return ____colliders_0; }
	inline BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA ** get_address_of__colliders_0() { return &____colliders_0; }
	inline void set__colliders_0(BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA * value)
	{
		____colliders_0 = value;
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32, ___U3CCountU3Ek__BackingField_1)); }
	inline int32_t get_U3CCountU3Ek__BackingField_1() const { return ___U3CCountU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_1() { return &___U3CCountU3Ek__BackingField_1; }
	inline void set_U3CCountU3Ek__BackingField_1(int32_t value)
	{
		___U3CCountU3Ek__BackingField_1 = value;
	}
};


// VRM.FastSpringBones.Blittables.BlittablePoints
struct BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC 
{
public:
	// VRM.FastSpringBones.Blittables.BlittablePoint* VRM.FastSpringBones.Blittables.BlittablePoints::_points
	BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * ____points_0;
	// System.Int32 VRM.FastSpringBones.Blittables.BlittablePoints::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of__points_0() { return static_cast<int32_t>(offsetof(BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC, ____points_0)); }
	inline BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * get__points_0() const { return ____points_0; }
	inline BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A ** get_address_of__points_0() { return &____points_0; }
	inline void set__points_0(BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * value)
	{
		____points_0 = value;
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC, ___U3CCountU3Ek__BackingField_1)); }
	inline int32_t get_U3CCountU3Ek__BackingField_1() const { return ___U3CCountU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_1() { return &___U3CCountU3Ek__BackingField_1; }
	inline void set_U3CCountU3Ek__BackingField_1(int32_t value)
	{
		___U3CCountU3Ek__BackingField_1 = value;
	}
};

// Native definition for P/Invoke marshalling of VRM.FastSpringBones.Blittables.BlittablePoints
struct BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC_marshaled_pinvoke
{
	BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * ____points_0;
	int32_t ___U3CCountU3Ek__BackingField_1;
};
// Native definition for COM marshalling of VRM.FastSpringBones.Blittables.BlittablePoints
struct BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC_marshaled_com
{
	BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * ____points_0;
	int32_t ___U3CCountU3Ek__BackingField_1;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// VRM.FastSpringBones.Registries.ColliderGroupRegistry
struct ColliderGroupRegistry_t999F00E4395E09F2F8D26FCFE67FC1015BC0F92D  : public Registry_1_tEC3E95FF3B33A1B4611560DAD298F96ABEA15F58
{
public:

public:
};


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t8C7CE574097FE7040CA0AD239BB2C887854CCEC4  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tDD88F07104FAB5096D8C58BF8DA4F8E423E48925  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct IsUnmanagedAttribute_tD4E6DE53B78FF1743884ADFF99CEDFFA6407F7E7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// VRM.FastSpringBones.Registries.RootBoneRegistry
struct RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091  : public Registry_1_t263E63E9F159455BAB130CFA33A0F6F689B885AB
{
public:

public:
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// VRM.FastSpringBones.Schedulers.PullTransformJobScheduler/Job
struct Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5 
{
public:
	// VRM.FastSpringBones.Blittables.BlittableTransform** VRM.FastSpringBones.Schedulers.PullTransformJobScheduler/Job::TransformPointers
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** ___TransformPointers_0;

public:
	inline static int32_t get_offset_of_TransformPointers_0() { return static_cast<int32_t>(offsetof(Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5, ___TransformPointers_0)); }
	inline BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** get_TransformPointers_0() const { return ___TransformPointers_0; }
	inline BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *** get_address_of_TransformPointers_0() { return &___TransformPointers_0; }
	inline void set_TransformPointers_0(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** value)
	{
		___TransformPointers_0 = value;
	}
};

// Native definition for P/Invoke marshalling of VRM.FastSpringBones.Schedulers.PullTransformJobScheduler/Job
struct Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5_marshaled_pinvoke
{
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** ___TransformPointers_0;
};
// Native definition for COM marshalling of VRM.FastSpringBones.Schedulers.PullTransformJobScheduler/Job
struct Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5_marshaled_com
{
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** ___TransformPointers_0;
};

// VRM.FastSpringBones.Schedulers.PushTransformJobScheduler/Job
struct Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA 
{
public:
	// VRM.FastSpringBones.Blittables.BlittableTransform** VRM.FastSpringBones.Schedulers.PushTransformJobScheduler/Job::TransformPointers
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** ___TransformPointers_0;

public:
	inline static int32_t get_offset_of_TransformPointers_0() { return static_cast<int32_t>(offsetof(Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA, ___TransformPointers_0)); }
	inline BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** get_TransformPointers_0() const { return ___TransformPointers_0; }
	inline BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *** get_address_of_TransformPointers_0() { return &___TransformPointers_0; }
	inline void set_TransformPointers_0(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** value)
	{
		___TransformPointers_0 = value;
	}
};

// Native definition for P/Invoke marshalling of VRM.FastSpringBones.Schedulers.PushTransformJobScheduler/Job
struct Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA_marshaled_pinvoke
{
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** ___TransformPointers_0;
};
// Native definition for COM marshalling of VRM.FastSpringBones.Schedulers.PushTransformJobScheduler/Job
struct Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA_marshaled_com
{
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** ___TransformPointers_0;
};

// VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler/Job
struct Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB 
{
public:
	// VRM.FastSpringBones.Blittables.BlittableRootBone** VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler/Job::RootBonePointers
	BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 ** ___RootBonePointers_0;
	// System.Single VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler/Job::DeltaTime
	float ___DeltaTime_1;

public:
	inline static int32_t get_offset_of_RootBonePointers_0() { return static_cast<int32_t>(offsetof(Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB, ___RootBonePointers_0)); }
	inline BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 ** get_RootBonePointers_0() const { return ___RootBonePointers_0; }
	inline BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 *** get_address_of_RootBonePointers_0() { return &___RootBonePointers_0; }
	inline void set_RootBonePointers_0(BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 ** value)
	{
		___RootBonePointers_0 = value;
	}

	inline static int32_t get_offset_of_DeltaTime_1() { return static_cast<int32_t>(offsetof(Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB, ___DeltaTime_1)); }
	inline float get_DeltaTime_1() const { return ___DeltaTime_1; }
	inline float* get_address_of_DeltaTime_1() { return &___DeltaTime_1; }
	inline void set_DeltaTime_1(float value)
	{
		___DeltaTime_1 = value;
	}
};

// Native definition for P/Invoke marshalling of VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler/Job
struct Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB_marshaled_pinvoke
{
	BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 ** ___RootBonePointers_0;
	float ___DeltaTime_1;
};
// Native definition for COM marshalling of VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler/Job
struct Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB_marshaled_com
{
	BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 ** ___RootBonePointers_0;
	float ___DeltaTime_1;
};

// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// VRM.FastSpringBones.Blittables.BlittableCollider
struct BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA 
{
public:
	// UnityEngine.Vector3 VRM.FastSpringBones.Blittables.BlittableCollider::<Offset>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3COffsetU3Ek__BackingField_0;
	// System.Single VRM.FastSpringBones.Blittables.BlittableCollider::<Radius>k__BackingField
	float ___U3CRadiusU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3COffsetU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA, ___U3COffsetU3Ek__BackingField_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3COffsetU3Ek__BackingField_0() const { return ___U3COffsetU3Ek__BackingField_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3COffsetU3Ek__BackingField_0() { return &___U3COffsetU3Ek__BackingField_0; }
	inline void set_U3COffsetU3Ek__BackingField_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3COffsetU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CRadiusU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA, ___U3CRadiusU3Ek__BackingField_1)); }
	inline float get_U3CRadiusU3Ek__BackingField_1() const { return ___U3CRadiusU3Ek__BackingField_1; }
	inline float* get_address_of_U3CRadiusU3Ek__BackingField_1() { return &___U3CRadiusU3Ek__BackingField_1; }
	inline void set_U3CRadiusU3Ek__BackingField_1(float value)
	{
		___U3CRadiusU3Ek__BackingField_1 = value;
	}
};


// VRM.FastSpringBones.Blittables.BlittableColliderGroup
struct BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E 
{
public:
	// VRM.FastSpringBones.Blittables.BlittableColliders VRM.FastSpringBones.Blittables.BlittableColliderGroup::<Colliders>k__BackingField
	BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32  ___U3CCollidersU3Ek__BackingField_0;
	// VRM.FastSpringBones.Blittables.BlittableTransform* VRM.FastSpringBones.Blittables.BlittableColliderGroup::<Transform>k__BackingField
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * ___U3CTransformU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CCollidersU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E, ___U3CCollidersU3Ek__BackingField_0)); }
	inline BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32  get_U3CCollidersU3Ek__BackingField_0() const { return ___U3CCollidersU3Ek__BackingField_0; }
	inline BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32 * get_address_of_U3CCollidersU3Ek__BackingField_0() { return &___U3CCollidersU3Ek__BackingField_0; }
	inline void set_U3CCollidersU3Ek__BackingField_0(BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32  value)
	{
		___U3CCollidersU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CTransformU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E, ___U3CTransformU3Ek__BackingField_1)); }
	inline BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * get_U3CTransformU3Ek__BackingField_1() const { return ___U3CTransformU3Ek__BackingField_1; }
	inline BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** get_address_of_U3CTransformU3Ek__BackingField_1() { return &___U3CTransformU3Ek__BackingField_1; }
	inline void set_U3CTransformU3Ek__BackingField_1(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * value)
	{
		___U3CTransformU3Ek__BackingField_1 = value;
	}
};

// Native definition for P/Invoke marshalling of VRM.FastSpringBones.Blittables.BlittableColliderGroup
struct BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E_marshaled_pinvoke
{
	BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32  ___U3CCollidersU3Ek__BackingField_0;
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * ___U3CTransformU3Ek__BackingField_1;
};
// Native definition for COM marshalling of VRM.FastSpringBones.Blittables.BlittableColliderGroup
struct BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E_marshaled_com
{
	BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32  ___U3CCollidersU3Ek__BackingField_0;
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * ___U3CTransformU3Ek__BackingField_1;
};

// VRM.FastSpringBones.Blittables.BlittablePoint
struct BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A 
{
public:
	// System.Single VRM.FastSpringBones.Blittables.BlittablePoint::_length
	float ____length_0;
	// UnityEngine.Quaternion VRM.FastSpringBones.Blittables.BlittablePoint::_localRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ____localRotation_1;
	// UnityEngine.Vector3 VRM.FastSpringBones.Blittables.BlittablePoint::_boneAxis
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____boneAxis_2;
	// System.Single VRM.FastSpringBones.Blittables.BlittablePoint::_radius
	float ____radius_3;
	// UnityEngine.Vector3 VRM.FastSpringBones.Blittables.BlittablePoint::_prevPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____prevPosition_4;
	// VRM.FastSpringBones.Blittables.BlittableColliderGroups* VRM.FastSpringBones.Blittables.BlittablePoint::_blittableColliderGroups
	BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * ____blittableColliderGroups_5;
	// VRM.FastSpringBones.Blittables.BlittableTransform* VRM.FastSpringBones.Blittables.BlittablePoint::_center
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * ____center_6;
	// UnityEngine.Vector3 VRM.FastSpringBones.Blittables.BlittablePoint::<CurrentPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CCurrentPositionU3Ek__BackingField_7;
	// VRM.FastSpringBones.Blittables.BlittableTransform* VRM.FastSpringBones.Blittables.BlittablePoint::_transform
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * ____transform_8;

public:
	inline static int32_t get_offset_of__length_0() { return static_cast<int32_t>(offsetof(BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A, ____length_0)); }
	inline float get__length_0() const { return ____length_0; }
	inline float* get_address_of__length_0() { return &____length_0; }
	inline void set__length_0(float value)
	{
		____length_0 = value;
	}

	inline static int32_t get_offset_of__localRotation_1() { return static_cast<int32_t>(offsetof(BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A, ____localRotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get__localRotation_1() const { return ____localRotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of__localRotation_1() { return &____localRotation_1; }
	inline void set__localRotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		____localRotation_1 = value;
	}

	inline static int32_t get_offset_of__boneAxis_2() { return static_cast<int32_t>(offsetof(BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A, ____boneAxis_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__boneAxis_2() const { return ____boneAxis_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__boneAxis_2() { return &____boneAxis_2; }
	inline void set__boneAxis_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____boneAxis_2 = value;
	}

	inline static int32_t get_offset_of__radius_3() { return static_cast<int32_t>(offsetof(BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A, ____radius_3)); }
	inline float get__radius_3() const { return ____radius_3; }
	inline float* get_address_of__radius_3() { return &____radius_3; }
	inline void set__radius_3(float value)
	{
		____radius_3 = value;
	}

	inline static int32_t get_offset_of__prevPosition_4() { return static_cast<int32_t>(offsetof(BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A, ____prevPosition_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__prevPosition_4() const { return ____prevPosition_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__prevPosition_4() { return &____prevPosition_4; }
	inline void set__prevPosition_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____prevPosition_4 = value;
	}

	inline static int32_t get_offset_of__blittableColliderGroups_5() { return static_cast<int32_t>(offsetof(BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A, ____blittableColliderGroups_5)); }
	inline BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * get__blittableColliderGroups_5() const { return ____blittableColliderGroups_5; }
	inline BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 ** get_address_of__blittableColliderGroups_5() { return &____blittableColliderGroups_5; }
	inline void set__blittableColliderGroups_5(BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * value)
	{
		____blittableColliderGroups_5 = value;
	}

	inline static int32_t get_offset_of__center_6() { return static_cast<int32_t>(offsetof(BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A, ____center_6)); }
	inline BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * get__center_6() const { return ____center_6; }
	inline BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** get_address_of__center_6() { return &____center_6; }
	inline void set__center_6(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * value)
	{
		____center_6 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentPositionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A, ___U3CCurrentPositionU3Ek__BackingField_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CCurrentPositionU3Ek__BackingField_7() const { return ___U3CCurrentPositionU3Ek__BackingField_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CCurrentPositionU3Ek__BackingField_7() { return &___U3CCurrentPositionU3Ek__BackingField_7; }
	inline void set_U3CCurrentPositionU3Ek__BackingField_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CCurrentPositionU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of__transform_8() { return static_cast<int32_t>(offsetof(BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A, ____transform_8)); }
	inline BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * get__transform_8() const { return ____transform_8; }
	inline BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** get_address_of__transform_8() { return &____transform_8; }
	inline void set__transform_8(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * value)
	{
		____transform_8 = value;
	}
};

// Native definition for P/Invoke marshalling of VRM.FastSpringBones.Blittables.BlittablePoint
struct BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A_marshaled_pinvoke
{
	float ____length_0;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ____localRotation_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____boneAxis_2;
	float ____radius_3;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____prevPosition_4;
	BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * ____blittableColliderGroups_5;
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * ____center_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CCurrentPositionU3Ek__BackingField_7;
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * ____transform_8;
};
// Native definition for COM marshalling of VRM.FastSpringBones.Blittables.BlittablePoint
struct BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A_marshaled_com
{
	float ____length_0;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ____localRotation_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____boneAxis_2;
	float ____radius_3;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____prevPosition_4;
	BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * ____blittableColliderGroups_5;
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * ____center_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CCurrentPositionU3Ek__BackingField_7;
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * ____transform_8;
};

// VRM.FastSpringBones.Blittables.BlittableRootBone
struct BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 
{
public:
	// System.Single VRM.FastSpringBones.Blittables.BlittableRootBone::_gravityPower
	float ____gravityPower_0;
	// UnityEngine.Vector3 VRM.FastSpringBones.Blittables.BlittableRootBone::_gravityDir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____gravityDir_1;
	// System.Single VRM.FastSpringBones.Blittables.BlittableRootBone::_dragForce
	float ____dragForce_2;
	// System.Single VRM.FastSpringBones.Blittables.BlittableRootBone::_stiffnessForce
	float ____stiffnessForce_3;
	// VRM.FastSpringBones.Blittables.BlittablePoints* VRM.FastSpringBones.Blittables.BlittableRootBone::_blittablePoints
	BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * ____blittablePoints_4;

public:
	inline static int32_t get_offset_of__gravityPower_0() { return static_cast<int32_t>(offsetof(BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6, ____gravityPower_0)); }
	inline float get__gravityPower_0() const { return ____gravityPower_0; }
	inline float* get_address_of__gravityPower_0() { return &____gravityPower_0; }
	inline void set__gravityPower_0(float value)
	{
		____gravityPower_0 = value;
	}

	inline static int32_t get_offset_of__gravityDir_1() { return static_cast<int32_t>(offsetof(BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6, ____gravityDir_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__gravityDir_1() const { return ____gravityDir_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__gravityDir_1() { return &____gravityDir_1; }
	inline void set__gravityDir_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____gravityDir_1 = value;
	}

	inline static int32_t get_offset_of__dragForce_2() { return static_cast<int32_t>(offsetof(BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6, ____dragForce_2)); }
	inline float get__dragForce_2() const { return ____dragForce_2; }
	inline float* get_address_of__dragForce_2() { return &____dragForce_2; }
	inline void set__dragForce_2(float value)
	{
		____dragForce_2 = value;
	}

	inline static int32_t get_offset_of__stiffnessForce_3() { return static_cast<int32_t>(offsetof(BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6, ____stiffnessForce_3)); }
	inline float get__stiffnessForce_3() const { return ____stiffnessForce_3; }
	inline float* get_address_of__stiffnessForce_3() { return &____stiffnessForce_3; }
	inline void set__stiffnessForce_3(float value)
	{
		____stiffnessForce_3 = value;
	}

	inline static int32_t get_offset_of__blittablePoints_4() { return static_cast<int32_t>(offsetof(BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6, ____blittablePoints_4)); }
	inline BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * get__blittablePoints_4() const { return ____blittablePoints_4; }
	inline BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC ** get_address_of__blittablePoints_4() { return &____blittablePoints_4; }
	inline void set__blittablePoints_4(BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * value)
	{
		____blittablePoints_4 = value;
	}
};

// Native definition for P/Invoke marshalling of VRM.FastSpringBones.Blittables.BlittableRootBone
struct BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6_marshaled_pinvoke
{
	float ____gravityPower_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____gravityDir_1;
	float ____dragForce_2;
	float ____stiffnessForce_3;
	BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * ____blittablePoints_4;
};
// Native definition for COM marshalling of VRM.FastSpringBones.Blittables.BlittableRootBone
struct BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6_marshaled_com
{
	float ____gravityPower_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____gravityDir_1;
	float ____dragForce_2;
	float ____stiffnessForce_3;
	BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * ____blittablePoints_4;
};

// VRM.FastSpringBones.Blittables.BlittableTransform
struct BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C 
{
public:
	// VRM.FastSpringBones.Blittables.BlittableTransform* VRM.FastSpringBones.Blittables.BlittableTransform::_parent
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * ____parent_0;
	// UnityEngine.Quaternion VRM.FastSpringBones.Blittables.BlittableTransform::_worldRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ____worldRotation_1;
	// UnityEngine.Vector3 VRM.FastSpringBones.Blittables.BlittableTransform::_localPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____localPosition_2;
	// UnityEngine.Vector3 VRM.FastSpringBones.Blittables.BlittableTransform::_localScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____localScale_3;
	// UnityEngine.Quaternion VRM.FastSpringBones.Blittables.BlittableTransform::_localRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ____localRotation_4;
	// UnityEngine.Matrix4x4 VRM.FastSpringBones.Blittables.BlittableTransform::_localToWorld
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ____localToWorld_5;
	// UnityEngine.Vector3 VRM.FastSpringBones.Blittables.BlittableTransform::<WorldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CWorldPositionU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C, ____parent_0)); }
	inline BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * get__parent_0() const { return ____parent_0; }
	inline BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * value)
	{
		____parent_0 = value;
	}

	inline static int32_t get_offset_of__worldRotation_1() { return static_cast<int32_t>(offsetof(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C, ____worldRotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get__worldRotation_1() const { return ____worldRotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of__worldRotation_1() { return &____worldRotation_1; }
	inline void set__worldRotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		____worldRotation_1 = value;
	}

	inline static int32_t get_offset_of__localPosition_2() { return static_cast<int32_t>(offsetof(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C, ____localPosition_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__localPosition_2() const { return ____localPosition_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__localPosition_2() { return &____localPosition_2; }
	inline void set__localPosition_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____localPosition_2 = value;
	}

	inline static int32_t get_offset_of__localScale_3() { return static_cast<int32_t>(offsetof(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C, ____localScale_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__localScale_3() const { return ____localScale_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__localScale_3() { return &____localScale_3; }
	inline void set__localScale_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____localScale_3 = value;
	}

	inline static int32_t get_offset_of__localRotation_4() { return static_cast<int32_t>(offsetof(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C, ____localRotation_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get__localRotation_4() const { return ____localRotation_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of__localRotation_4() { return &____localRotation_4; }
	inline void set__localRotation_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		____localRotation_4 = value;
	}

	inline static int32_t get_offset_of__localToWorld_5() { return static_cast<int32_t>(offsetof(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C, ____localToWorld_5)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get__localToWorld_5() const { return ____localToWorld_5; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of__localToWorld_5() { return &____localToWorld_5; }
	inline void set__localToWorld_5(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		____localToWorld_5 = value;
	}

	inline static int32_t get_offset_of_U3CWorldPositionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C, ___U3CWorldPositionU3Ek__BackingField_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CWorldPositionU3Ek__BackingField_6() const { return ___U3CWorldPositionU3Ek__BackingField_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CWorldPositionU3Ek__BackingField_6() { return &___U3CWorldPositionU3Ek__BackingField_6; }
	inline void set_U3CWorldPositionU3Ek__BackingField_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CWorldPositionU3Ek__BackingField_6 = value;
	}
};

// Native definition for P/Invoke marshalling of VRM.FastSpringBones.Blittables.BlittableTransform
struct BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C_marshaled_pinvoke
{
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * ____parent_0;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ____worldRotation_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____localPosition_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____localScale_3;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ____localRotation_4;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ____localToWorld_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CWorldPositionU3Ek__BackingField_6;
};
// Native definition for COM marshalling of VRM.FastSpringBones.Blittables.BlittableTransform
struct BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C_marshaled_com
{
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * ____parent_0;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ____worldRotation_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____localPosition_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____localScale_3;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ____localRotation_4;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ____localToWorld_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CWorldPositionU3Ek__BackingField_6;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Unity.Jobs.JobHandle
struct JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 
{
public:
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;

public:
	inline static int32_t get_offset_of_jobGroup_0() { return static_cast<int32_t>(offsetof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847, ___jobGroup_0)); }
	inline intptr_t get_jobGroup_0() const { return ___jobGroup_0; }
	inline intptr_t* get_address_of_jobGroup_0() { return &___jobGroup_0; }
	inline void set_jobGroup_0(intptr_t value)
	{
		___jobGroup_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}
};


// Unity.Collections.NativeArrayOptions
struct NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Profiling.Sampler
struct Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Profiling.Sampler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

struct Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90_StaticFields
{
public:
	// UnityEngine.Profiling.Sampler UnityEngine.Profiling.Sampler::s_InvalidSampler
	Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90 * ___s_InvalidSampler_1;

public:
	inline static int32_t get_offset_of_s_InvalidSampler_1() { return static_cast<int32_t>(offsetof(Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90_StaticFields, ___s_InvalidSampler_1)); }
	inline Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90 * get_s_InvalidSampler_1() const { return ___s_InvalidSampler_1; }
	inline Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90 ** get_address_of_s_InvalidSampler_1() { return &___s_InvalidSampler_1; }
	inline void set_s_InvalidSampler_1(Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90 * value)
	{
		___s_InvalidSampler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InvalidSampler_1), (void*)value);
	}
};


// UnityEngine.Jobs.TransformAccess
struct TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A 
{
public:
	// System.IntPtr UnityEngine.Jobs.TransformAccess::hierarchy
	intptr_t ___hierarchy_0;
	// System.Int32 UnityEngine.Jobs.TransformAccess::index
	int32_t ___index_1;

public:
	inline static int32_t get_offset_of_hierarchy_0() { return static_cast<int32_t>(offsetof(TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A, ___hierarchy_0)); }
	inline intptr_t get_hierarchy_0() const { return ___hierarchy_0; }
	inline intptr_t* get_address_of_hierarchy_0() { return &___hierarchy_0; }
	inline void set_hierarchy_0(intptr_t value)
	{
		___hierarchy_0 = value;
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}
};


// UnityEngine.Jobs.TransformAccessArray
struct TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E 
{
public:
	// System.IntPtr UnityEngine.Jobs.TransformAccessArray::m_TransformArray
	intptr_t ___m_TransformArray_0;

public:
	inline static int32_t get_offset_of_m_TransformArray_0() { return static_cast<int32_t>(offsetof(TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E, ___m_TransformArray_0)); }
	inline intptr_t get_m_TransformArray_0() const { return ___m_TransformArray_0; }
	inline intptr_t* get_address_of_m_TransformArray_0() { return &___m_TransformArray_0; }
	inline void set_m_TransformArray_0(intptr_t value)
	{
		___m_TransformArray_0 = value;
	}
};


// VRM.FastSpringBones.Registries.TransformSynchronizationType
struct TransformSynchronizationType_t99762C775FE99151C7010F711D2A56EFD66E359A 
{
public:
	// System.Int32 VRM.FastSpringBones.Registries.TransformSynchronizationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TransformSynchronizationType_t99762C775FE99151C7010F711D2A56EFD66E359A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittableCollider>
struct NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittableColliderGroup>
struct NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittablePoint>
struct NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Profiling.CustomSampler
struct CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24  : public Sampler_tFBEDA5A32F136EA4B0DE0ABB45E61843FE973D90
{
public:

public:
};

struct CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24_StaticFields
{
public:
	// UnityEngine.Profiling.CustomSampler UnityEngine.Profiling.CustomSampler::s_InvalidCustomSampler
	CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * ___s_InvalidCustomSampler_2;

public:
	inline static int32_t get_offset_of_s_InvalidCustomSampler_2() { return static_cast<int32_t>(offsetof(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24_StaticFields, ___s_InvalidCustomSampler_2)); }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * get_s_InvalidCustomSampler_2() const { return ___s_InvalidCustomSampler_2; }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 ** get_address_of_s_InvalidCustomSampler_2() { return &___s_InvalidCustomSampler_2; }
	inline void set_s_InvalidCustomSampler_2(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * value)
	{
		___s_InvalidCustomSampler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InvalidCustomSampler_2), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// VRM.FastSpringBones.Schedulers.PullTransformJobScheduler
struct PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4  : public RuntimeObject
{
public:
	// VRM.FastSpringBones.Blittables.BlittableTransform** VRM.FastSpringBones.Schedulers.PullTransformJobScheduler::_transformPointers
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** ____transformPointers_0;
	// UnityEngine.Jobs.TransformAccessArray VRM.FastSpringBones.Schedulers.PullTransformJobScheduler::_transformAccessArray
	TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E  ____transformAccessArray_1;
	// UnityEngine.Profiling.CustomSampler VRM.FastSpringBones.Schedulers.PullTransformJobScheduler::_sampler
	CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * ____sampler_2;
	// VRM.FastSpringBones.Registries.TransformRegistry VRM.FastSpringBones.Schedulers.PullTransformJobScheduler::_transformRegistry
	TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * ____transformRegistry_3;
	// System.Boolean VRM.FastSpringBones.Schedulers.PullTransformJobScheduler::_dirty
	bool ____dirty_4;

public:
	inline static int32_t get_offset_of__transformPointers_0() { return static_cast<int32_t>(offsetof(PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4, ____transformPointers_0)); }
	inline BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** get__transformPointers_0() const { return ____transformPointers_0; }
	inline BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *** get_address_of__transformPointers_0() { return &____transformPointers_0; }
	inline void set__transformPointers_0(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** value)
	{
		____transformPointers_0 = value;
	}

	inline static int32_t get_offset_of__transformAccessArray_1() { return static_cast<int32_t>(offsetof(PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4, ____transformAccessArray_1)); }
	inline TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E  get__transformAccessArray_1() const { return ____transformAccessArray_1; }
	inline TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E * get_address_of__transformAccessArray_1() { return &____transformAccessArray_1; }
	inline void set__transformAccessArray_1(TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E  value)
	{
		____transformAccessArray_1 = value;
	}

	inline static int32_t get_offset_of__sampler_2() { return static_cast<int32_t>(offsetof(PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4, ____sampler_2)); }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * get__sampler_2() const { return ____sampler_2; }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 ** get_address_of__sampler_2() { return &____sampler_2; }
	inline void set__sampler_2(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * value)
	{
		____sampler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sampler_2), (void*)value);
	}

	inline static int32_t get_offset_of__transformRegistry_3() { return static_cast<int32_t>(offsetof(PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4, ____transformRegistry_3)); }
	inline TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * get__transformRegistry_3() const { return ____transformRegistry_3; }
	inline TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF ** get_address_of__transformRegistry_3() { return &____transformRegistry_3; }
	inline void set__transformRegistry_3(TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * value)
	{
		____transformRegistry_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transformRegistry_3), (void*)value);
	}

	inline static int32_t get_offset_of__dirty_4() { return static_cast<int32_t>(offsetof(PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4, ____dirty_4)); }
	inline bool get__dirty_4() const { return ____dirty_4; }
	inline bool* get_address_of__dirty_4() { return &____dirty_4; }
	inline void set__dirty_4(bool value)
	{
		____dirty_4 = value;
	}
};


// VRM.FastSpringBones.Schedulers.PushTransformJobScheduler
struct PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF  : public RuntimeObject
{
public:
	// VRM.FastSpringBones.Blittables.BlittableTransform** VRM.FastSpringBones.Schedulers.PushTransformJobScheduler::_transformPointers
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** ____transformPointers_0;
	// UnityEngine.Jobs.TransformAccessArray VRM.FastSpringBones.Schedulers.PushTransformJobScheduler::_transformAccessArray
	TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E  ____transformAccessArray_1;
	// UnityEngine.Profiling.CustomSampler VRM.FastSpringBones.Schedulers.PushTransformJobScheduler::_sampler
	CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * ____sampler_2;
	// VRM.FastSpringBones.Registries.TransformRegistry VRM.FastSpringBones.Schedulers.PushTransformJobScheduler::_transformRegistry
	TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * ____transformRegistry_3;
	// System.Boolean VRM.FastSpringBones.Schedulers.PushTransformJobScheduler::_dirty
	bool ____dirty_4;

public:
	inline static int32_t get_offset_of__transformPointers_0() { return static_cast<int32_t>(offsetof(PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF, ____transformPointers_0)); }
	inline BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** get__transformPointers_0() const { return ____transformPointers_0; }
	inline BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *** get_address_of__transformPointers_0() { return &____transformPointers_0; }
	inline void set__transformPointers_0(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** value)
	{
		____transformPointers_0 = value;
	}

	inline static int32_t get_offset_of__transformAccessArray_1() { return static_cast<int32_t>(offsetof(PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF, ____transformAccessArray_1)); }
	inline TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E  get__transformAccessArray_1() const { return ____transformAccessArray_1; }
	inline TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E * get_address_of__transformAccessArray_1() { return &____transformAccessArray_1; }
	inline void set__transformAccessArray_1(TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E  value)
	{
		____transformAccessArray_1 = value;
	}

	inline static int32_t get_offset_of__sampler_2() { return static_cast<int32_t>(offsetof(PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF, ____sampler_2)); }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * get__sampler_2() const { return ____sampler_2; }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 ** get_address_of__sampler_2() { return &____sampler_2; }
	inline void set__sampler_2(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * value)
	{
		____sampler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sampler_2), (void*)value);
	}

	inline static int32_t get_offset_of__transformRegistry_3() { return static_cast<int32_t>(offsetof(PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF, ____transformRegistry_3)); }
	inline TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * get__transformRegistry_3() const { return ____transformRegistry_3; }
	inline TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF ** get_address_of__transformRegistry_3() { return &____transformRegistry_3; }
	inline void set__transformRegistry_3(TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * value)
	{
		____transformRegistry_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transformRegistry_3), (void*)value);
	}

	inline static int32_t get_offset_of__dirty_4() { return static_cast<int32_t>(offsetof(PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF, ____dirty_4)); }
	inline bool get__dirty_4() const { return ____dirty_4; }
	inline bool* get_address_of__dirty_4() { return &____dirty_4; }
	inline void set__dirty_4(bool value)
	{
		____dirty_4 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// VRM.FastSpringBones.NativeWrappers.NativeColliderGroup
struct NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B  : public RuntimeObject
{
public:
	// VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableColliderGroup> VRM.FastSpringBones.NativeWrappers.NativeColliderGroup::_nativePointer
	NativePointer_1_tB3554FDF5108BEDECE546ECC595BC12EC64F8F74 * ____nativePointer_0;
	// Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittableCollider> VRM.FastSpringBones.NativeWrappers.NativeColliderGroup::<Colliders>k__BackingField
	NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F  ___U3CCollidersU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of__nativePointer_0() { return static_cast<int32_t>(offsetof(NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B, ____nativePointer_0)); }
	inline NativePointer_1_tB3554FDF5108BEDECE546ECC595BC12EC64F8F74 * get__nativePointer_0() const { return ____nativePointer_0; }
	inline NativePointer_1_tB3554FDF5108BEDECE546ECC595BC12EC64F8F74 ** get_address_of__nativePointer_0() { return &____nativePointer_0; }
	inline void set__nativePointer_0(NativePointer_1_tB3554FDF5108BEDECE546ECC595BC12EC64F8F74 * value)
	{
		____nativePointer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nativePointer_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCollidersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B, ___U3CCollidersU3Ek__BackingField_1)); }
	inline NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F  get_U3CCollidersU3Ek__BackingField_1() const { return ___U3CCollidersU3Ek__BackingField_1; }
	inline NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F * get_address_of_U3CCollidersU3Ek__BackingField_1() { return &___U3CCollidersU3Ek__BackingField_1; }
	inline void set_U3CCollidersU3Ek__BackingField_1(NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F  value)
	{
		___U3CCollidersU3Ek__BackingField_1 = value;
	}
};


// VRM.FastSpringBones.NativeWrappers.NativeColliderGroups
struct NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212  : public RuntimeObject
{
public:
	// VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableColliderGroups> VRM.FastSpringBones.NativeWrappers.NativeColliderGroups::_nativePointer
	NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 * ____nativePointer_0;
	// Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittableColliderGroup> VRM.FastSpringBones.NativeWrappers.NativeColliderGroups::_colliderGroupArray
	NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F  ____colliderGroupArray_1;
	// System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.Components.FastSpringBoneColliderGroup> VRM.FastSpringBones.NativeWrappers.NativeColliderGroups::_colliderGroups
	RuntimeObject* ____colliderGroups_2;
	// System.Boolean VRM.FastSpringBones.NativeWrappers.NativeColliderGroups::_isDisposed
	bool ____isDisposed_3;

public:
	inline static int32_t get_offset_of__nativePointer_0() { return static_cast<int32_t>(offsetof(NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212, ____nativePointer_0)); }
	inline NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 * get__nativePointer_0() const { return ____nativePointer_0; }
	inline NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 ** get_address_of__nativePointer_0() { return &____nativePointer_0; }
	inline void set__nativePointer_0(NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 * value)
	{
		____nativePointer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nativePointer_0), (void*)value);
	}

	inline static int32_t get_offset_of__colliderGroupArray_1() { return static_cast<int32_t>(offsetof(NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212, ____colliderGroupArray_1)); }
	inline NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F  get__colliderGroupArray_1() const { return ____colliderGroupArray_1; }
	inline NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F * get_address_of__colliderGroupArray_1() { return &____colliderGroupArray_1; }
	inline void set__colliderGroupArray_1(NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F  value)
	{
		____colliderGroupArray_1 = value;
	}

	inline static int32_t get_offset_of__colliderGroups_2() { return static_cast<int32_t>(offsetof(NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212, ____colliderGroups_2)); }
	inline RuntimeObject* get__colliderGroups_2() const { return ____colliderGroups_2; }
	inline RuntimeObject** get_address_of__colliderGroups_2() { return &____colliderGroups_2; }
	inline void set__colliderGroups_2(RuntimeObject* value)
	{
		____colliderGroups_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colliderGroups_2), (void*)value);
	}

	inline static int32_t get_offset_of__isDisposed_3() { return static_cast<int32_t>(offsetof(NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212, ____isDisposed_3)); }
	inline bool get__isDisposed_3() const { return ____isDisposed_3; }
	inline bool* get_address_of__isDisposed_3() { return &____isDisposed_3; }
	inline void set__isDisposed_3(bool value)
	{
		____isDisposed_3 = value;
	}
};


// VRM.FastSpringBones.NativeWrappers.NativePoints
struct NativePoints_tF458244EDF35A600E87E85F491D880B84043E0BF  : public RuntimeObject
{
public:
	// VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoints> VRM.FastSpringBones.NativeWrappers.NativePoints::_nativePointer
	NativePointer_1_tBD0F88F36A51FC5575FDA412C1ED0E8F9B6191E0 * ____nativePointer_0;
	// Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittablePoint> VRM.FastSpringBones.NativeWrappers.NativePoints::_buffer
	NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA  ____buffer_1;

public:
	inline static int32_t get_offset_of__nativePointer_0() { return static_cast<int32_t>(offsetof(NativePoints_tF458244EDF35A600E87E85F491D880B84043E0BF, ____nativePointer_0)); }
	inline NativePointer_1_tBD0F88F36A51FC5575FDA412C1ED0E8F9B6191E0 * get__nativePointer_0() const { return ____nativePointer_0; }
	inline NativePointer_1_tBD0F88F36A51FC5575FDA412C1ED0E8F9B6191E0 ** get_address_of__nativePointer_0() { return &____nativePointer_0; }
	inline void set__nativePointer_0(NativePointer_1_tBD0F88F36A51FC5575FDA412C1ED0E8F9B6191E0 * value)
	{
		____nativePointer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nativePointer_0), (void*)value);
	}

	inline static int32_t get_offset_of__buffer_1() { return static_cast<int32_t>(offsetof(NativePoints_tF458244EDF35A600E87E85F491D880B84043E0BF, ____buffer_1)); }
	inline NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA  get__buffer_1() const { return ____buffer_1; }
	inline NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA * get_address_of__buffer_1() { return &____buffer_1; }
	inline void set__buffer_1(NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA  value)
	{
		____buffer_1 = value;
	}
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// VRM.FastSpringBones.Components.FastSpringBoneColliderGroup
struct FastSpringBoneColliderGroup_t335E25E7E132EFF43C9CF08D6CB02ADDB674FE14  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// VRM.FastSpringBones.NativeWrappers.NativeTransform VRM.FastSpringBones.Components.FastSpringBoneColliderGroup::_nativeTransform
	NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * ____nativeTransform_4;
	// VRM.FastSpringBones.NativeWrappers.NativeColliderGroup VRM.FastSpringBones.Components.FastSpringBoneColliderGroup::_nativeColliderGroup
	NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B * ____nativeColliderGroup_5;

public:
	inline static int32_t get_offset_of__nativeTransform_4() { return static_cast<int32_t>(offsetof(FastSpringBoneColliderGroup_t335E25E7E132EFF43C9CF08D6CB02ADDB674FE14, ____nativeTransform_4)); }
	inline NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * get__nativeTransform_4() const { return ____nativeTransform_4; }
	inline NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 ** get_address_of__nativeTransform_4() { return &____nativeTransform_4; }
	inline void set__nativeTransform_4(NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * value)
	{
		____nativeTransform_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nativeTransform_4), (void*)value);
	}

	inline static int32_t get_offset_of__nativeColliderGroup_5() { return static_cast<int32_t>(offsetof(FastSpringBoneColliderGroup_t335E25E7E132EFF43C9CF08D6CB02ADDB674FE14, ____nativeColliderGroup_5)); }
	inline NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B * get__nativeColliderGroup_5() const { return ____nativeColliderGroup_5; }
	inline NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B ** get_address_of__nativeColliderGroup_5() { return &____nativeColliderGroup_5; }
	inline void set__nativeColliderGroup_5(NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B * value)
	{
		____nativeColliderGroup_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nativeColliderGroup_5), (void*)value);
	}
};


// VRM.FastSpringBones.Components.FastSpringBoneScheduler
struct FastSpringBoneScheduler_t5E3845D2D6DEED6206BC673BCAFFCFD6D839974C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean VRM.FastSpringBones.Components.FastSpringBoneScheduler::showGizmos
	bool ___showGizmos_4;
	// UnityEngine.Profiling.CustomSampler VRM.FastSpringBones.Components.FastSpringBoneScheduler::_updateSampler
	CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * ____updateSampler_5;
	// VRM.FastSpringBones.Schedulers.PullTransformJobScheduler VRM.FastSpringBones.Components.FastSpringBoneScheduler::_pullTransformJobScheduler
	PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4 * ____pullTransformJobScheduler_6;
	// VRM.FastSpringBones.Schedulers.PushTransformJobScheduler VRM.FastSpringBones.Components.FastSpringBoneScheduler::_pushTransformJobScheduler
	PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF * ____pushTransformJobScheduler_7;
	// VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler VRM.FastSpringBones.Components.FastSpringBoneScheduler::_updateSpringBoneJobScheduler
	UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506 * ____updateSpringBoneJobScheduler_8;
	// VRM.FastSpringBones.Registries.RootBoneRegistry VRM.FastSpringBones.Components.FastSpringBoneScheduler::_rootBoneRegistry
	RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 * ____rootBoneRegistry_9;
	// VRM.FastSpringBones.Registries.ColliderGroupRegistry VRM.FastSpringBones.Components.FastSpringBoneScheduler::_colliderGroupRegistry
	ColliderGroupRegistry_t999F00E4395E09F2F8D26FCFE67FC1015BC0F92D * ____colliderGroupRegistry_10;
	// Unity.Jobs.JobHandle VRM.FastSpringBones.Components.FastSpringBoneScheduler::_prevJobHandle
	JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ____prevJobHandle_11;

public:
	inline static int32_t get_offset_of_showGizmos_4() { return static_cast<int32_t>(offsetof(FastSpringBoneScheduler_t5E3845D2D6DEED6206BC673BCAFFCFD6D839974C, ___showGizmos_4)); }
	inline bool get_showGizmos_4() const { return ___showGizmos_4; }
	inline bool* get_address_of_showGizmos_4() { return &___showGizmos_4; }
	inline void set_showGizmos_4(bool value)
	{
		___showGizmos_4 = value;
	}

	inline static int32_t get_offset_of__updateSampler_5() { return static_cast<int32_t>(offsetof(FastSpringBoneScheduler_t5E3845D2D6DEED6206BC673BCAFFCFD6D839974C, ____updateSampler_5)); }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * get__updateSampler_5() const { return ____updateSampler_5; }
	inline CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 ** get_address_of__updateSampler_5() { return &____updateSampler_5; }
	inline void set__updateSampler_5(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * value)
	{
		____updateSampler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____updateSampler_5), (void*)value);
	}

	inline static int32_t get_offset_of__pullTransformJobScheduler_6() { return static_cast<int32_t>(offsetof(FastSpringBoneScheduler_t5E3845D2D6DEED6206BC673BCAFFCFD6D839974C, ____pullTransformJobScheduler_6)); }
	inline PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4 * get__pullTransformJobScheduler_6() const { return ____pullTransformJobScheduler_6; }
	inline PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4 ** get_address_of__pullTransformJobScheduler_6() { return &____pullTransformJobScheduler_6; }
	inline void set__pullTransformJobScheduler_6(PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4 * value)
	{
		____pullTransformJobScheduler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pullTransformJobScheduler_6), (void*)value);
	}

	inline static int32_t get_offset_of__pushTransformJobScheduler_7() { return static_cast<int32_t>(offsetof(FastSpringBoneScheduler_t5E3845D2D6DEED6206BC673BCAFFCFD6D839974C, ____pushTransformJobScheduler_7)); }
	inline PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF * get__pushTransformJobScheduler_7() const { return ____pushTransformJobScheduler_7; }
	inline PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF ** get_address_of__pushTransformJobScheduler_7() { return &____pushTransformJobScheduler_7; }
	inline void set__pushTransformJobScheduler_7(PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF * value)
	{
		____pushTransformJobScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pushTransformJobScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of__updateSpringBoneJobScheduler_8() { return static_cast<int32_t>(offsetof(FastSpringBoneScheduler_t5E3845D2D6DEED6206BC673BCAFFCFD6D839974C, ____updateSpringBoneJobScheduler_8)); }
	inline UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506 * get__updateSpringBoneJobScheduler_8() const { return ____updateSpringBoneJobScheduler_8; }
	inline UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506 ** get_address_of__updateSpringBoneJobScheduler_8() { return &____updateSpringBoneJobScheduler_8; }
	inline void set__updateSpringBoneJobScheduler_8(UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506 * value)
	{
		____updateSpringBoneJobScheduler_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____updateSpringBoneJobScheduler_8), (void*)value);
	}

	inline static int32_t get_offset_of__rootBoneRegistry_9() { return static_cast<int32_t>(offsetof(FastSpringBoneScheduler_t5E3845D2D6DEED6206BC673BCAFFCFD6D839974C, ____rootBoneRegistry_9)); }
	inline RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 * get__rootBoneRegistry_9() const { return ____rootBoneRegistry_9; }
	inline RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 ** get_address_of__rootBoneRegistry_9() { return &____rootBoneRegistry_9; }
	inline void set__rootBoneRegistry_9(RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 * value)
	{
		____rootBoneRegistry_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rootBoneRegistry_9), (void*)value);
	}

	inline static int32_t get_offset_of__colliderGroupRegistry_10() { return static_cast<int32_t>(offsetof(FastSpringBoneScheduler_t5E3845D2D6DEED6206BC673BCAFFCFD6D839974C, ____colliderGroupRegistry_10)); }
	inline ColliderGroupRegistry_t999F00E4395E09F2F8D26FCFE67FC1015BC0F92D * get__colliderGroupRegistry_10() const { return ____colliderGroupRegistry_10; }
	inline ColliderGroupRegistry_t999F00E4395E09F2F8D26FCFE67FC1015BC0F92D ** get_address_of__colliderGroupRegistry_10() { return &____colliderGroupRegistry_10; }
	inline void set__colliderGroupRegistry_10(ColliderGroupRegistry_t999F00E4395E09F2F8D26FCFE67FC1015BC0F92D * value)
	{
		____colliderGroupRegistry_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colliderGroupRegistry_10), (void*)value);
	}

	inline static int32_t get_offset_of__prevJobHandle_11() { return static_cast<int32_t>(offsetof(FastSpringBoneScheduler_t5E3845D2D6DEED6206BC673BCAFFCFD6D839974C, ____prevJobHandle_11)); }
	inline JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  get__prevJobHandle_11() const { return ____prevJobHandle_11; }
	inline JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 * get_address_of__prevJobHandle_11() { return &____prevJobHandle_11; }
	inline void set__prevJobHandle_11(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  value)
	{
		____prevJobHandle_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// VRM.FastSpringBones.Blittables.BlittableCollider[]
struct BlittableColliderU5BU5D_t6F7A13492F46D2051CDDA4A50D78F5D51625F1A8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA  m_Items[1];

public:
	inline BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA  value)
	{
		m_Items[index] = value;
	}
};


// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<VRM.FastSpringBones.Blittables.BlittableCollider>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisBlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA_m7EECC12E84A69E8935F6A8D7D2DB72F2532C3616_gshared (NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F  ___nativeArray0, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Registries.Registry`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Registry_1__ctor_m79C8A019DE38EAA4C70EBF981D4866787CD83A57_gshared (Registry_1_t3620ACCE4252740C65818345896E0DAA502FF0F6 * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Registries.Registry`1<System.Object>::SubscribeOnValueChanged(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Registry_1_SubscribeOnValueChanged_m73F624EABF63E76793E49269BC0100A9AFCCE5EE_gshared (Registry_1_t3620ACCE4252740C65818345896E0DAA502FF0F6 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Registries.Registry`1<System.Object>::UnSubscribeOnValueChanged(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Registry_1_UnSubscribeOnValueChanged_m2FF67B03D06C4E402E3EB708D0497F515F9F4329_gshared (Registry_1_t3620ACCE4252740C65818345896E0DAA502FF0F6 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePointer_1__ctor_m3DD6AAF8BC1050A5E4D3A67EFD4EF84EBBB4B2EE_gshared (NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC * __this, BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6  ___value0, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Registries.Registry`1<System.Object>::Register(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Registry_1_Register_mCD096B9689B44B20B1F358B39CFCDFB8F9757841_gshared (Registry_1_t3620ACCE4252740C65818345896E0DAA502FF0F6 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Registries.Registry`1<System.Object>::Unregister(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Registry_1_Unregister_m73EE9BB602E7633A7DC718E6234F0FDB60C557C9_gshared (Registry_1_t3620ACCE4252740C65818345896E0DAA502FF0F6 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePointer_1_Dispose_m7C01E25068431FCB4D400792073C190EDE4082CF_gshared (NativePointer_1_tAE35E054C215345560990C73548E2C5418E78EEB * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePointer_1_Dispose_m3C821A6A81377B9E507E4214B67E3A2021DF841D_gshared (NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoint>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePointer_1__ctor_m9EA2F75E1F5E313FDE04F222AB0AC8C8B960B9AB_gshared (NativePointer_1_tAE35E054C215345560990C73548E2C5418E78EEB * __this, BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A  ___value0, const RuntimeMethod* method);
// T* VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableColliderGroup>::GetUnsafePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * NativePointer_1_GetUnsafePtr_m3BFD7CC15F4826354FD480A540A6D7259908328A_gshared_inline (NativePointer_1_tB3554FDF5108BEDECE546ECC595BC12EC64F8F74 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittableCollider>::.ctor(!0[],Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m21191AD078CD392FD4D47FBB4C5F892A3C8AE523_gshared (NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F * __this, BlittableColliderU5BU5D_t6F7A13492F46D2051CDDA4A50D78F5D51625F1A8* ___array0, int32_t ___allocator1, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableColliderGroup>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePointer_1__ctor_m67B685A33CCB1AC3A5031A1F8665AF125815CBC9_gshared (NativePointer_1_tB3554FDF5108BEDECE546ECC595BC12EC64F8F74 * __this, BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E  ___value0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittableCollider>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mA5FAE780587803D0C5EED530ABC943E542782681_gshared (NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittableCollider>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m9A2053C4C1283ECDB4A4F1FAC79B74023C75C346_gshared (NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableColliderGroup>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePointer_1_Dispose_m3FD3149D29CDC275C9011761599F84BADCE310ED_gshared (NativePointer_1_tB3554FDF5108BEDECE546ECC595BC12EC64F8F74 * __this, const RuntimeMethod* method);
// T* VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableColliderGroups>::GetUnsafePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * NativePointer_1_GetUnsafePtr_m3D00124F41554DA72CC54437217D15A41ADDF02C_gshared_inline (NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 * __this, const RuntimeMethod* method);
// T VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableColliderGroups>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4  NativePointer_1_get_Value_mC2CA08D7B0CB8FA35FECBF8A461CCBDA0A49BE1B_gshared (NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittableColliderGroup>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m9970B09EE65D7D0525FD9B6E76D88CC4F1F0A5A4_gshared (NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittableColliderGroup>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mB66EEDD3ABF1090CBB0727291289C3BD96A09DE9_gshared (NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableColliderGroups>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePointer_1__ctor_mDDFFA919DF17BD9C2AD52800F292CD6FAF484C56_gshared (NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableColliderGroups>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePointer_1_Dispose_mB0F3B59BB93C50F28D7384A263C343DF6C82941F_gshared (NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittableColliderGroup>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mB38DD07EAFB304D54CD37FF27758380E86430EE6_gshared (NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<VRM.FastSpringBones.Blittables.BlittableColliderGroup>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisBlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E_m8D96F603842010F8D55B4E9156F1C07AB7595D91_gshared (NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F  ___nativeArray0, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableColliderGroups>::set_Value(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePointer_1_set_Value_m69616F9509C1313DC79603E4798738665B48154C_gshared (NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 * __this, BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4  ___value0, const RuntimeMethod* method);
// T* VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoints>::GetUnsafePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * NativePointer_1_GetUnsafePtr_m87098DA39302F62A2BEDD8E4B56FD0B0F5F67295_gshared_inline (NativePointer_1_tBD0F88F36A51FC5575FDA412C1ED0E8F9B6191E0 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittablePoint>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m39CF77A3A9F33A373574F8828FCBC2D8423144E0_gshared (NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// T VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoint>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A  NativePointer_1_get_Value_m0EDFC5DB50ECAF5679C9254F270A45CCF5F713BC_gshared (NativePointer_1_tAE35E054C215345560990C73548E2C5418E78EEB * __this, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<VRM.FastSpringBones.Blittables.BlittablePoint>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisBlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A_mFB9D3FE8B185C3955965A33E8AF3551935B111B6_gshared (NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA  ___nativeArray0, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoints>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePointer_1__ctor_mDA970D759AF8203A52F15FDBC1B3F47B358A695A_gshared (NativePointer_1_tBD0F88F36A51FC5575FDA412C1ED0E8F9B6191E0 * __this, BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC  ___value0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittablePoint>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m9B4A447E1F22115DE02D0CB244418E22AB663EB3_gshared (NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittablePoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m2357502C1E0883EDE4885D3B1CE29CE26034C65D_gshared (NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoints>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePointer_1_Dispose_m43C02B10250DE56976CAE91C45D888F29EEA76E3_gshared (NativePointer_1_tBD0F88F36A51FC5575FDA412C1ED0E8F9B6191E0 * __this, const RuntimeMethod* method);
// T* VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableTransform>::GetUnsafePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * NativePointer_1_GetUnsafePtr_m2E5086436D93F6C2410A12F6C6BD13ACFBD2B1A5_gshared_inline (NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407 * __this, const RuntimeMethod* method);
// T VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableTransform>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C  NativePointer_1_get_Value_mCBBF37AA6AB92E1CB8F99DE38D86BF3FB63EE231_gshared (NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407 * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableTransform>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePointer_1__ctor_m758D686235384641668A1CBA24872EFCCBCA4FA0_gshared (NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407 * __this, BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C  ___value0, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableTransform>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePointer_1_Dispose_m1B57CA1E5A4636EC45076E1A85BF2D0419DA3132_gshared (NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407 * __this, const RuntimeMethod* method);
// Unity.Jobs.JobHandle UnityEngine.Jobs.IJobParallelForTransformExtensions::Schedule<VRM.FastSpringBones.Schedulers.PullTransformJobScheduler/Job>(!!0,UnityEngine.Jobs.TransformAccessArray,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  IJobParallelForTransformExtensions_Schedule_TisJob_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5_m02BBE6CFCF5995CE07CBB42D10109339D7395C4A_gshared (Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5  ___jobData0, TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E  ___transforms1, JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___dependsOn2, const RuntimeMethod* method);
// Unity.Jobs.JobHandle UnityEngine.Jobs.IJobParallelForTransformExtensions::Schedule<VRM.FastSpringBones.Schedulers.PushTransformJobScheduler/Job>(!!0,UnityEngine.Jobs.TransformAccessArray,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  IJobParallelForTransformExtensions_Schedule_TisJob_t5FAB4DC4861E73B951E02964DD2433805897C5AA_m0004C9853A6BCF40E16963D2053B70E19AEED237_gshared (Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA  ___jobData0, TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E  ___transforms1, JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___dependsOn2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<T> VRM.FastSpringBones.Registries.Registry`1<System.Object>::get_Items()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Registry_1_get_Items_mA2E74A5F4FFF9371FD2B43B5A3B0A3C73C318115_gshared_inline (Registry_1_t3620ACCE4252740C65818345896E0DAA502FF0F6 * __this, const RuntimeMethod* method);
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler/Job>(!!0,System.Int32,System.Int32,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  IJobParallelForExtensions_Schedule_TisJob_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB_mA9136043701409D9C51B7C03128E707F0354062F_gshared (Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB  ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___dependsOn3, const RuntimeMethod* method);
// T* VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone>::GetUnsafePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 * NativePointer_1_GetUnsafePtr_mD1E56BD92F641FAC550435B1EB4C8F76330CD903_gshared_inline (NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC * __this, const RuntimeMethod* method);

// UnityEngine.Vector3 VRM.FastSpringBones.Blittables.BlittableCollider::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BlittableCollider_get_Offset_m4B695A7965BC52B6E961C41F4EE4BA499D65C943_inline (BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA * __this, const RuntimeMethod* method);
// System.Single VRM.FastSpringBones.Blittables.BlittableCollider::get_Radius()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BlittableCollider_get_Radius_m2B59ACF75F8211B871414B3F53A55BFE007A18AC_inline (BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Blittables.BlittableCollider::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableCollider__ctor_mCA56CC588B7186FDA8618D3144D7B55646150A8A (BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___offset0, float ___radius1, const RuntimeMethod* method);
// VRM.FastSpringBones.Blittables.BlittableColliders VRM.FastSpringBones.Blittables.BlittableColliderGroup::get_Colliders()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32  BlittableColliderGroup_get_Colliders_m77764EDD28DF21494344677FD9E815FACC7CDFB4_inline (BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * __this, const RuntimeMethod* method);
// VRM.FastSpringBones.Blittables.BlittableTransform* VRM.FastSpringBones.Blittables.BlittableColliderGroup::get_Transform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * BlittableColliderGroup_get_Transform_m7FD69C9BFD454A91E6E236AA736415C6088CBDB4_inline (BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * __this, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<VRM.FastSpringBones.Blittables.BlittableCollider>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisBlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA_m7EECC12E84A69E8935F6A8D7D2DB72F2532C3616 (NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisBlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA_m7EECC12E84A69E8935F6A8D7D2DB72F2532C3616_gshared)(___nativeArray0, method);
}
// System.Void VRM.FastSpringBones.Blittables.BlittableColliders::.ctor(VRM.FastSpringBones.Blittables.BlittableCollider*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableColliders__ctor_mA75D891A81D3B09FD3ADC0C1034A0C3012F0A232 (BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32 * __this, BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA * ___colliders0, int32_t ___count1, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Blittables.BlittableColliderGroup::.ctor(Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittableCollider>,VRM.FastSpringBones.Blittables.BlittableTransform*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableColliderGroup__ctor_m89AB32EC4CB097AB42DFE1F63D97213A62CAE88E (BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * __this, NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F  ___colliders0, BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * ___transform1, const RuntimeMethod* method);
// System.Int32 VRM.FastSpringBones.Blittables.BlittableColliderGroups::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BlittableColliderGroups_get_Length_m63C73D34AF5DE3A69C02849442BAACEEA8654FE5_inline (BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * __this, const RuntimeMethod* method);
// VRM.FastSpringBones.Blittables.BlittableColliderGroup VRM.FastSpringBones.Blittables.BlittableColliderGroups::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E  BlittableColliderGroups_get_Item_mC4ECE0AE1F8B6276909E98509B46264FC573AFE5 (BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * __this, int32_t ___i0, const RuntimeMethod* method);
// UnityEngine.Vector3 VRM.FastSpringBones.Blittables.BlittableTransform::get_WorldPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BlittableTransform_get_WorldPosition_m6ABCC50FC25950578AA54380B03ACDE0C39BD8F0_inline (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * __this, const RuntimeMethod* method);
// VRM.FastSpringBones.Blittables.BlittableCollider VRM.FastSpringBones.Blittables.BlittableColliders::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA  BlittableColliders_get_Item_m59E5177890806A728537844E7C732C73DCB5D795 (BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m96C425145BBD85CF0192F9DDB3D1A8C69429B78B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, float ___radius1, const RuntimeMethod* method);
// System.Int32 VRM.FastSpringBones.Blittables.BlittableColliders::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BlittableColliders_get_Count_m501185A413889E631E4934DA8C36FD5B83A7164E_inline (BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32 * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Blittables.BlittableColliderGroups::DrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableColliderGroups_DrawGizmos_m6596EEDA377DB60BF240E1A1B9AB9184E0551733 (BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Blittables.BlittableColliderGroups::.ctor(VRM.FastSpringBones.Blittables.BlittableColliderGroup*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableColliderGroups__ctor_m932226D6B38F9CB4503894244D68C2BEE07C42D4 (BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * __this, BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * ___data0, int32_t ___length1, const RuntimeMethod* method);
// UnityEngine.Vector3 VRM.FastSpringBones.Blittables.BlittablePoint::get_CurrentPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BlittablePoint_get_CurrentPosition_mA3FC21A18552A6B92543D023C0B927A188B3CE39_inline (BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Blittables.BlittablePoint::set_CurrentPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlittablePoint_set_CurrentPosition_mD212ECEE996FB2BE7A0E4973C8D59D73484B6CA5_inline (BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Transform_get_worldToLocalMatrix_mE22FDE24767E1DE402D3E7A1C9803379B2E8399D (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 VRM.FastSpringBones.Blittables.BlittableTransform::get_LocalToWorld()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  BlittableTransform_get_LocalToWorld_mC58E83F111E24534359AE7A9EA2BAD043249D9E8_inline (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_get_inverse_mFA34ECC790B269522F60FC32370D628DAFCAE225 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Blittables.BlittablePoint::.ctor(UnityEngine.Transform,System.Single,VRM.FastSpringBones.Blittables.BlittableTransform*,VRM.FastSpringBones.Blittables.BlittableColliderGroups*,VRM.FastSpringBones.Blittables.BlittableTransform*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittablePoint__ctor_mAD71864DDC5EA8ABCF6AE97DC73ECDDAD5331DA8 (BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, float ___radius1, BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * ___center2, BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * ___blittableColliderGroups3, BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * ___blittableTransform4, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Blittables.BlittableTransform::UpdateLocalToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableTransform_UpdateLocalToWorldMatrix_m7B4DC6DA83BF57E0F4C443867AA9FCE5F0609964 (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion VRM.FastSpringBones.Blittables.BlittableTransform::get_ParentWorldRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  BlittableTransform_get_ParentWorldRotation_m23E0A4589206DC30E665C6C3DAA5966B9DF18EE7 (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector3 VRM.FastSpringBones.Blittables.BlittablePoint::Collision(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BlittablePoint_Collision_mE340D013B529FA1EEAFF70EFC562D494F2AC716D (BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___nextPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// UnityEngine.Quaternion VRM.FastSpringBones.Blittables.BlittablePoint::ApplyRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  BlittablePoint_ApplyRotation_mFB43D4F17F88459EE31443604A634335BAA65033 (BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___nextTail0, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Blittables.BlittableTransform::SetWorldRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableTransform_SetWorldRotation_m1F5FF43623DC8582E1178A70C7372CFEACF81C58 (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Blittables.BlittablePoint::Update(System.Single,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittablePoint_Update_mEF6058E16F85C907467E3383776A373F278404C5 (BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * __this, float ___stiffnessForce0, float ___dragForce1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___external2, const RuntimeMethod* method);
// UnityEngine.Vector3 VRM.FastSpringBones.Blittables.BlittableTransform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BlittableTransform_TransformPoint_m6FB950DB66259085E1D76FC96601CEC2AA373D16 (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___offset0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398 (float ___angle0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, const RuntimeMethod* method);
// UnityEngine.Quaternion VRM.FastSpringBones.Blittables.BlittablePoint::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  BlittablePoint_FromToRotation_m58DF5300E4F2EF6B0C30F07670BDAB9CBECBE512 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, const RuntimeMethod* method);
// System.Int32 VRM.FastSpringBones.Blittables.BlittablePoints::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BlittablePoints_get_Count_m35946661A8F2267C8F4CB4B8557FECC28675BF1C_inline (BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * __this, const RuntimeMethod* method);
// VRM.FastSpringBones.Blittables.BlittablePoint VRM.FastSpringBones.Blittables.BlittablePoints::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A  BlittablePoints_get_Item_m27D0445E1139DE0869DD1771003B34F3A9D53CAC (BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Blittables.BlittablePoints::set_Item(System.Int32,VRM.FastSpringBones.Blittables.BlittablePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittablePoints_set_Item_mBB03422C0617F284B260C5DB3F916FEC791E2790 (BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * __this, int32_t ___i0, BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A  ___value1, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Blittables.BlittablePoints::.ctor(VRM.FastSpringBones.Blittables.BlittablePoint*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittablePoints__ctor_mE4C1DB08BE53D2914BD5C8965135BEB2A9203E9E (BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * __this, BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * ___points0, int32_t ___count1, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Blittables.BlittableRootBone::DrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableRootBone_DrawGizmos_m081264BB9806E60D87A36B06465174594E381245 (BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Blittables.BlittableRootBone::.ctor(System.Single,UnityEngine.Vector3,System.Single,System.Single,VRM.FastSpringBones.Blittables.BlittablePoints*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableRootBone__ctor_m7E6536F9C4BAB18919678F06C8C69BB0BEC1FAF5 (BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 * __this, float ___gravityPower0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___gravityDir1, float ___dragForce2, float ___stiffnessForce3, BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * ___blittablePoints4, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Blittables.BlittableRootBone::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableRootBone_Update_mD7798AEFCD43AAAACE805DCE65A7CEDB4B303EA3 (BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 * __this, float ___deltaTime0, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Blittables.BlittableTransform::set_WorldPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlittableTransform_set_WorldPosition_mFA291B3B2F5C2AEFEF9269A1B19A2C20E60FC442_inline (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s2, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 VRM.FastSpringBones.Blittables.BlittableTransform::get_LocalTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  BlittableTransform_get_LocalTransform_mFA9798BD51D9659DD95EFF864ED0291F066371AF (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Blittables.BlittableTransform::.ctor(VRM.FastSpringBones.Blittables.BlittableTransform*,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableTransform__ctor_m5041ABB388BF0F162ABD3E02812ABD1DB390383A (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * __this, BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * ___parent0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Jobs.TransformAccess::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformAccess_get_position_mF9DA76B90F2806600A0E9FAC52D8CB96E08CDDD0 (TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Jobs.TransformAccess::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformAccess_get_rotation_mFBBEB01D5CF6A46EC5C4A6F1D3AA9B6CE8C6D6A7 (TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Jobs.TransformAccess::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformAccess_get_localPosition_m389EA2F40A52D376EF7FB7E04696E40F8BD3DF4C (TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Jobs.TransformAccess::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TransformAccess_get_localRotation_m8E1C06BDED87ADF507166755EF896874B4A72A2A (TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Jobs.TransformAccess::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TransformAccess_get_localScale_m25697E6420C364278293B0E4F9D338425344D883 (TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Jobs.TransformAccess::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  TransformAccess_get_localToWorldMatrix_mD432A9836794EC9D562BB96EA87B29F3060CE644 (TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Blittables.BlittableTransform::PullFrom(UnityEngine.Jobs.TransformAccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableTransform_PullFrom_m60EB3B51DF17177636F8D8873DE94789396CE651 (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * __this, TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A  ___transform0, const RuntimeMethod* method);
// System.Void UnityEngine.Jobs.TransformAccess::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformAccess_set_localPosition_mD89C1F790E3355CD348CBB3CB692DE0AE9BAB9F3 (TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Jobs.TransformAccess::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformAccess_set_localRotation_m37F92CA12F5E26616ECBA33353DC406AB13DF3DB (TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Blittables.BlittableTransform::PushTo(UnityEngine.Jobs.TransformAccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableTransform_PushTo_m765BC4F6315ECB4278A3EFC9FE5AC8F894542D72 (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * __this, TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A  ___transform0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___lhs0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Matrix4x4::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Matrix4x4_get_rotation_m3F80DDCCBDC01EBF36D61F382749AE704603C379 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Registries.Registry`1<VRM.FastSpringBones.NativeWrappers.NativeColliderGroups>::.ctor()
inline void Registry_1__ctor_m86240CCCCB23EA93B7D6D908222543E0075A0884 (Registry_1_tEC3E95FF3B33A1B4611560DAD298F96ABEA15F58 * __this, const RuntimeMethod* method)
{
	((  void (*) (Registry_1_tEC3E95FF3B33A1B4611560DAD298F96ABEA15F58 *, const RuntimeMethod*))Registry_1__ctor_m79C8A019DE38EAA4C70EBF981D4866787CD83A57_gshared)(__this, method);
}
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// VRM.FastSpringBones.Blittables.BlittableColliderGroup* VRM.FastSpringBones.NativeWrappers.NativeColliderGroup::GetUnsafePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * NativeColliderGroup_GetUnsafePtr_m135F8F3523979BD5B9D8BEE4E4C8163F50B45D4F (NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativeTransform::.ctor(VRM.FastSpringBones.Registries.TransformRegistry,VRM.FastSpringBones.Registries.TransformSynchronizationType,UnityEngine.Transform,VRM.FastSpringBones.NativeWrappers.NativeTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeTransform__ctor_m5622E3BE7F5ED43E5B37BD4447A8E34A41AC276F (NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * __this, TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * ___transformRegistry0, int32_t ___transformSynchronizationType1, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform2, NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * ___parent3, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativeColliderGroup::.ctor(VRM.FastSpringBones.Blittables.BlittableCollider[],VRM.FastSpringBones.NativeWrappers.NativeTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeColliderGroup__ctor_m64105BE9A90D5C6552A01D281BA9DCEB4226718C (NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B * __this, BlittableColliderU5BU5D_t6F7A13492F46D2051CDDA4A50D78F5D51625F1A8* ___colliders0, NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * ___nativeTransform1, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativeTransform::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeTransform_Dispose_m0A492076F13E995F79D526F28004826EB3D6017E (NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativeColliderGroup::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeColliderGroup_Dispose_m5C4695E82B9AEA44D7A96329C9D54519E0267860 (NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Profiling.CustomSampler UnityEngine.Profiling.CustomSampler::Create(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * CustomSampler_Create_m9010A07C27FDDC7ECC2065AFA232BBDC6955C1E6 (String_t* ___name0, bool ___collectGpuData1, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Schedulers.PullTransformJobScheduler::.ctor(VRM.FastSpringBones.Registries.TransformRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PullTransformJobScheduler__ctor_m6A4A71CBF8593E1CC0BCFE51744597AC8B68ABB9 (PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4 * __this, TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * ___transformRegistry0, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Schedulers.PushTransformJobScheduler::.ctor(VRM.FastSpringBones.Registries.TransformRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushTransformJobScheduler__ctor_mC29016A625AF618529D40AED57B21D828B5CDEFB (PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF * __this, TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * ___transformRegistry0, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler::.ctor(VRM.FastSpringBones.Registries.RootBoneRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateSpringBoneJobScheduler__ctor_mD9558513F826C00BE8E9ED3FEC827132A19E858C (UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506 * __this, RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 * ___rootBoneRegistry0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Registries.Registry`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone>>::SubscribeOnValueChanged(System.Action)
inline void Registry_1_SubscribeOnValueChanged_m5803472941F18EC782B5FD29B310F112036580F0 (Registry_1_t263E63E9F159455BAB130CFA33A0F6F689B885AB * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	((  void (*) (Registry_1_t263E63E9F159455BAB130CFA33A0F6F689B885AB *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))Registry_1_SubscribeOnValueChanged_m73F624EABF63E76793E49269BC0100A9AFCCE5EE_gshared)(__this, ___action0, method);
}
// System.Void VRM.FastSpringBones.Registries.Registry`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone>>::UnSubscribeOnValueChanged(System.Action)
inline void Registry_1_UnSubscribeOnValueChanged_m2C6BFE4E58FA82AF815A5E56832C076BE8F7F1BB (Registry_1_t263E63E9F159455BAB130CFA33A0F6F689B885AB * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	((  void (*) (Registry_1_t263E63E9F159455BAB130CFA33A0F6F689B885AB *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))Registry_1_UnSubscribeOnValueChanged_m2FF67B03D06C4E402E3EB708D0497F515F9F4329_gshared)(__this, ___action0, method);
}
// System.Void Unity.Jobs.JobHandle::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobHandle_Complete_m947DF01E0F87C3B0A24AECEBF72D245A6CDBE148 (JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Schedulers.PullTransformJobScheduler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PullTransformJobScheduler_Dispose_mAD3B8D444EA8FE50A0AF1743E97989031B2C880E (PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4 * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Schedulers.PushTransformJobScheduler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushTransformJobScheduler_Dispose_mD63F7F73B0047896FFE383F9EE221A6058FED70D (PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateSpringBoneJobScheduler_Dispose_mBD305D394475D00A5C263B3BD853E895CEC203EA (UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506 * __this, const RuntimeMethod* method);
// Unity.Jobs.JobHandle VRM.FastSpringBones.Schedulers.PullTransformJobScheduler::Schedule(Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  PullTransformJobScheduler_Schedule_m8320273DB84A5C98E131EBA647C94F6E5751D75D (PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4 * __this, JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___dependOn0, const RuntimeMethod* method);
// Unity.Jobs.JobHandle VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler::Schedule(Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  UpdateSpringBoneJobScheduler_Schedule_mFD182F937447357A2593863541268E930730B64C (UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506 * __this, JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___dependOn0, const RuntimeMethod* method);
// Unity.Jobs.JobHandle VRM.FastSpringBones.Schedulers.PushTransformJobScheduler::Schedule(Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  PushTransformJobScheduler_Schedule_mB1ADC56FAFDE65A7767E853886C6B3680F433BC5 (PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF * __this, JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___dependOn0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<VRM.FastSpringBones.NativeWrappers.NativeTransform>::.ctor()
inline void List_1__ctor_m10C91054A72FA12AC2D2F4EF8E206A6FFCB42DF1 (List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoint>>::.ctor()
inline void List_1__ctor_m3018BF89B67578F1174A277BC6085C0B6BD0653A (List_1_t78A352A91F1F8984458AF2C9F03E9E67B435E965 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t78A352A91F1F8984458AF2C9F03E9E67B435E965 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.Components.FastSpringBoneColliderGroup> VRM.FastSpringBones.NativeWrappers.NativeColliderGroups::get_ColliderGroups()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NativeColliderGroups_get_ColliderGroups_m3B73743E3A75C21A8BD8D424F11CB6CDCBDDDDB2_inline (NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativeColliderGroups::set_ColliderGroups(System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.Components.FastSpringBoneColliderGroup>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeColliderGroups_set_ColliderGroups_m42195BCDF7FD8612A86936300C8EDDCAE9D3B6D9 (NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativeColliderGroups::.ctor(System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.Components.FastSpringBoneColliderGroup>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeColliderGroups__ctor_m1A85F5340E5C4DCCF8D84F0B6EB14FD6CBD4B603 (NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * __this, RuntimeObject* ___colliderGroups0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Components.FastSpringRootBone::SetupRecursive(UnityEngine.Transform,VRM.FastSpringBones.NativeWrappers.NativeTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastSpringRootBone_SetupRecursive_m0D4BDBEBBCCD73FC2831ECBC2A3947EB1027B6F0 (FastSpringRootBone_t102F94B147FA22D317CCDEE04CB76A3E213A6CC8 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___trs0, NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * ___parent1, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativePoints::.ctor(System.Collections.Generic.IList`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoint>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePoints__ctor_mBCE418348D1330DAF2DE1E8E9D097F0AB7FB21B0 (NativePoints_tF458244EDF35A600E87E85F491D880B84043E0BF * __this, RuntimeObject* ___points0, const RuntimeMethod* method);
// VRM.FastSpringBones.Blittables.BlittablePoints* VRM.FastSpringBones.NativeWrappers.NativePoints::GetUnsafePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * NativePoints_GetUnsafePtr_mE51A68572188AB50541AE29AF8FE2B8A3D32D088 (NativePoints_tF458244EDF35A600E87E85F491D880B84043E0BF * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone>::.ctor(T)
inline void NativePointer_1__ctor_m3DD6AAF8BC1050A5E4D3A67EFD4EF84EBBB4B2EE (NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC * __this, BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6  ___value0, const RuntimeMethod* method)
{
	((  void (*) (NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC *, BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 , const RuntimeMethod*))NativePointer_1__ctor_m3DD6AAF8BC1050A5E4D3A67EFD4EF84EBBB4B2EE_gshared)(__this, ___value0, method);
}
// System.Void VRM.FastSpringBones.Registries.Registry`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone>>::Register(T)
inline void Registry_1_Register_m63E38BCEBA6B466AA5EF9D1F94B763A64FC3CAA5 (Registry_1_t263E63E9F159455BAB130CFA33A0F6F689B885AB * __this, NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC * ___value0, const RuntimeMethod* method)
{
	((  void (*) (Registry_1_t263E63E9F159455BAB130CFA33A0F6F689B885AB *, NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC *, const RuntimeMethod*))Registry_1_Register_mCD096B9689B44B20B1F358B39CFCDFB8F9757841_gshared)(__this, ___value0, method);
}
// System.Void VRM.FastSpringBones.Registries.Registry`1<VRM.FastSpringBones.NativeWrappers.NativeColliderGroups>::Register(T)
inline void Registry_1_Register_mDED59D567899CAC235E8ACE428E70748393613E1 (Registry_1_tEC3E95FF3B33A1B4611560DAD298F96ABEA15F58 * __this, NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * ___value0, const RuntimeMethod* method)
{
	((  void (*) (Registry_1_tEC3E95FF3B33A1B4611560DAD298F96ABEA15F58 *, NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 *, const RuntimeMethod*))Registry_1_Register_mCD096B9689B44B20B1F358B39CFCDFB8F9757841_gshared)(__this, ___value0, method);
}
// System.Void VRM.FastSpringBones.Registries.Registry`1<VRM.FastSpringBones.NativeWrappers.NativeColliderGroups>::Unregister(T)
inline void Registry_1_Unregister_m5969B0EC606555E05745AC98B53349ECF1182486 (Registry_1_tEC3E95FF3B33A1B4611560DAD298F96ABEA15F58 * __this, NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * ___value0, const RuntimeMethod* method)
{
	((  void (*) (Registry_1_tEC3E95FF3B33A1B4611560DAD298F96ABEA15F58 *, NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 *, const RuntimeMethod*))Registry_1_Unregister_m73EE9BB602E7633A7DC718E6234F0FDB60C557C9_gshared)(__this, ___value0, method);
}
// System.Void VRM.FastSpringBones.Registries.Registry`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone>>::Unregister(T)
inline void Registry_1_Unregister_m986D6031D2A6D298B89C24BAEA728343B6B2B67A (Registry_1_t263E63E9F159455BAB130CFA33A0F6F689B885AB * __this, NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC * ___value0, const RuntimeMethod* method)
{
	((  void (*) (Registry_1_t263E63E9F159455BAB130CFA33A0F6F689B885AB *, NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC *, const RuntimeMethod*))Registry_1_Unregister_m73EE9BB602E7633A7DC718E6234F0FDB60C557C9_gshared)(__this, ___value0, method);
}
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoint>::Dispose()
inline void NativePointer_1_Dispose_m7C01E25068431FCB4D400792073C190EDE4082CF (NativePointer_1_tAE35E054C215345560990C73548E2C5418E78EEB * __this, const RuntimeMethod* method)
{
	((  void (*) (NativePointer_1_tAE35E054C215345560990C73548E2C5418E78EEB *, const RuntimeMethod*))NativePointer_1_Dispose_m7C01E25068431FCB4D400792073C190EDE4082CF_gshared)(__this, method);
}
// System.Void VRM.FastSpringBones.NativeWrappers.NativeColliderGroups::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeColliderGroups_Dispose_mF53752CDE16818114CC04E8BAEA79BA2C031B1D2 (NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativePoints::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePoints_Dispose_m7EA4DC62343AF4B557065DC3148367B7F67CCB88 (NativePoints_tF458244EDF35A600E87E85F491D880B84043E0BF * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone>::Dispose()
inline void NativePointer_1_Dispose_m3C821A6A81377B9E507E4214B67E3A2021DF841D (NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC * __this, const RuntimeMethod* method)
{
	((  void (*) (NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC *, const RuntimeMethod*))NativePointer_1_Dispose_m3C821A6A81377B9E507E4214B67E3A2021DF841D_gshared)(__this, method);
}
// VRM.FastSpringBones.Blittables.BlittableTransform* VRM.FastSpringBones.NativeWrappers.NativeTransform::GetUnsafePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * NativeTransform_GetUnsafePtr_m6E9BA2A811A7B72CF5635CD75F335C45E51C7041 (NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * __this, const RuntimeMethod* method);
// VRM.FastSpringBones.Blittables.BlittableColliderGroups* VRM.FastSpringBones.NativeWrappers.NativeColliderGroups::GetUnsafePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * NativeColliderGroups_GetUnsafePtr_m35233F667FE8B51823F44013CB32A7A979BAF6C5 (NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoint>::.ctor(T)
inline void NativePointer_1__ctor_m9EA2F75E1F5E313FDE04F222AB0AC8C8B960B9AB (NativePointer_1_tAE35E054C215345560990C73548E2C5418E78EEB * __this, BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A  ___value0, const RuntimeMethod* method)
{
	((  void (*) (NativePointer_1_tAE35E054C215345560990C73548E2C5418E78EEB *, BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A , const RuntimeMethod*))NativePointer_1__ctor_m9EA2F75E1F5E313FDE04F222AB0AC8C8B960B9AB_gshared)(__this, ___value0, method);
}
// T* VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableColliderGroup>::GetUnsafePtr()
inline BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * NativePointer_1_GetUnsafePtr_m3BFD7CC15F4826354FD480A540A6D7259908328A_inline (NativePointer_1_tB3554FDF5108BEDECE546ECC595BC12EC64F8F74 * __this, const RuntimeMethod* method)
{
	return ((  BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * (*) (NativePointer_1_tB3554FDF5108BEDECE546ECC595BC12EC64F8F74 *, const RuntimeMethod*))NativePointer_1_GetUnsafePtr_m3BFD7CC15F4826354FD480A540A6D7259908328A_gshared_inline)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittableCollider>::.ctor(!0[],Unity.Collections.Allocator)
inline void NativeArray_1__ctor_m21191AD078CD392FD4D47FBB4C5F892A3C8AE523 (NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F * __this, BlittableColliderU5BU5D_t6F7A13492F46D2051CDDA4A50D78F5D51625F1A8* ___array0, int32_t ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F *, BlittableColliderU5BU5D_t6F7A13492F46D2051CDDA4A50D78F5D51625F1A8*, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m21191AD078CD392FD4D47FBB4C5F892A3C8AE523_gshared)(__this, ___array0, ___allocator1, method);
}
// Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittableCollider> VRM.FastSpringBones.NativeWrappers.NativeColliderGroup::get_Colliders()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F  NativeColliderGroup_get_Colliders_m771DBEE4EFD0768B02440F77D49DC3C9846D6109_inline (NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableColliderGroup>::.ctor(T)
inline void NativePointer_1__ctor_m67B685A33CCB1AC3A5031A1F8665AF125815CBC9 (NativePointer_1_tB3554FDF5108BEDECE546ECC595BC12EC64F8F74 * __this, BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E  ___value0, const RuntimeMethod* method)
{
	((  void (*) (NativePointer_1_tB3554FDF5108BEDECE546ECC595BC12EC64F8F74 *, BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E , const RuntimeMethod*))NativePointer_1__ctor_m67B685A33CCB1AC3A5031A1F8665AF125815CBC9_gshared)(__this, ___value0, method);
}
// System.Boolean Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittableCollider>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mA5FAE780587803D0C5EED530ABC943E542782681 (NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F *, const RuntimeMethod*))NativeArray_1_get_IsCreated_mA5FAE780587803D0C5EED530ABC943E542782681_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittableCollider>::Dispose()
inline void NativeArray_1_Dispose_m9A2053C4C1283ECDB4A4F1FAC79B74023C75C346 (NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F *, const RuntimeMethod*))NativeArray_1_Dispose_m9A2053C4C1283ECDB4A4F1FAC79B74023C75C346_gshared)(__this, method);
}
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableColliderGroup>::Dispose()
inline void NativePointer_1_Dispose_m3FD3149D29CDC275C9011761599F84BADCE310ED (NativePointer_1_tB3554FDF5108BEDECE546ECC595BC12EC64F8F74 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativePointer_1_tB3554FDF5108BEDECE546ECC595BC12EC64F8F74 *, const RuntimeMethod*))NativePointer_1_Dispose_m3FD3149D29CDC275C9011761599F84BADCE310ED_gshared)(__this, method);
}
// T* VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableColliderGroups>::GetUnsafePtr()
inline BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * NativePointer_1_GetUnsafePtr_m3D00124F41554DA72CC54437217D15A41ADDF02C_inline (NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 * __this, const RuntimeMethod* method)
{
	return ((  BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * (*) (NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 *, const RuntimeMethod*))NativePointer_1_GetUnsafePtr_m3D00124F41554DA72CC54437217D15A41ADDF02C_gshared_inline)(__this, method);
}
// T VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableColliderGroups>::get_Value()
inline BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4  NativePointer_1_get_Value_mC2CA08D7B0CB8FA35FECBF8A461CCBDA0A49BE1B (NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 * __this, const RuntimeMethod* method)
{
	return ((  BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4  (*) (NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 *, const RuntimeMethod*))NativePointer_1_get_Value_mC2CA08D7B0CB8FA35FECBF8A461CCBDA0A49BE1B_gshared)(__this, method);
}
// System.Void VRM.FastSpringBones.NativeWrappers.NativeColliderGroups::UpdateColliderGroups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeColliderGroups_UpdateColliderGroups_m211E6C16ACE1EE2251E993C4994DF60D0C66FE83 (NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittableColliderGroup>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m9970B09EE65D7D0525FD9B6E76D88CC4F1F0A5A4 (NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F *, const RuntimeMethod*))NativeArray_1_get_IsCreated_m9970B09EE65D7D0525FD9B6E76D88CC4F1F0A5A4_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittableColliderGroup>::Dispose()
inline void NativeArray_1_Dispose_mB66EEDD3ABF1090CBB0727291289C3BD96A09DE9 (NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F *, const RuntimeMethod*))NativeArray_1_Dispose_mB66EEDD3ABF1090CBB0727291289C3BD96A09DE9_gshared)(__this, method);
}
// System.Void VRM.FastSpringBones.NativeWrappers.NativeColliderGroups::CreateColliderGroupArray(System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.Components.FastSpringBoneColliderGroup>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeColliderGroups_CreateColliderGroupArray_m681BD9E2A5B3DA90690C3597C5FC4252C9F57327 (NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * __this, RuntimeObject* ___colliderGroups0, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativeColliderGroups::UpdateData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeColliderGroups_UpdateData_m4F8A762E3016242A5AA49B6C214B739AFC10D25D (NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableColliderGroups>::.ctor()
inline void NativePointer_1__ctor_mDDFFA919DF17BD9C2AD52800F292CD6FAF484C56 (NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 *, const RuntimeMethod*))NativePointer_1__ctor_mDDFFA919DF17BD9C2AD52800F292CD6FAF484C56_gshared)(__this, method);
}
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableColliderGroups>::Dispose()
inline void NativePointer_1_Dispose_mB0F3B59BB93C50F28D7384A263C343DF6C82941F (NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 *, const RuntimeMethod*))NativePointer_1_Dispose_mB0F3B59BB93C50F28D7384A263C343DF6C82941F_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittableColliderGroup>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mB38DD07EAFB304D54CD37FF27758380E86430EE6 (NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mB38DD07EAFB304D54CD37FF27758380E86430EE6_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// VRM.FastSpringBones.Blittables.BlittableColliderGroup* VRM.FastSpringBones.Components.FastSpringBoneColliderGroup::get_ColliderGroupPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * FastSpringBoneColliderGroup_get_ColliderGroupPtr_m5CFFCD3555FF59D6084F8E59D9EC038F44F9FBD6 (FastSpringBoneColliderGroup_t335E25E7E132EFF43C9CF08D6CB02ADDB674FE14 * __this, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<VRM.FastSpringBones.Blittables.BlittableColliderGroup>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisBlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E_m8D96F603842010F8D55B4E9156F1C07AB7595D91 (NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisBlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E_m8D96F603842010F8D55B4E9156F1C07AB7595D91_gshared)(___nativeArray0, method);
}
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableColliderGroups>::set_Value(T)
inline void NativePointer_1_set_Value_m69616F9509C1313DC79603E4798738665B48154C (NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 * __this, BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4  ___value0, const RuntimeMethod* method)
{
	((  void (*) (NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 *, BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 , const RuntimeMethod*))NativePointer_1_set_Value_m69616F9509C1313DC79603E4798738665B48154C_gshared)(__this, ___value0, method);
}
// T* VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoints>::GetUnsafePtr()
inline BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * NativePointer_1_GetUnsafePtr_m87098DA39302F62A2BEDD8E4B56FD0B0F5F67295_inline (NativePointer_1_tBD0F88F36A51FC5575FDA412C1ED0E8F9B6191E0 * __this, const RuntimeMethod* method)
{
	return ((  BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * (*) (NativePointer_1_tBD0F88F36A51FC5575FDA412C1ED0E8F9B6191E0 *, const RuntimeMethod*))NativePointer_1_GetUnsafePtr_m87098DA39302F62A2BEDD8E4B56FD0B0F5F67295_gshared_inline)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittablePoint>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m39CF77A3A9F33A373574F8828FCBC2D8423144E0 (NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m39CF77A3A9F33A373574F8828FCBC2D8423144E0_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// T VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoint>::get_Value()
inline BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A  NativePointer_1_get_Value_m0EDFC5DB50ECAF5679C9254F270A45CCF5F713BC (NativePointer_1_tAE35E054C215345560990C73548E2C5418E78EEB * __this, const RuntimeMethod* method)
{
	return ((  BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A  (*) (NativePointer_1_tAE35E054C215345560990C73548E2C5418E78EEB *, const RuntimeMethod*))NativePointer_1_get_Value_m0EDFC5DB50ECAF5679C9254F270A45CCF5F713BC_gshared)(__this, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<VRM.FastSpringBones.Blittables.BlittablePoint>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisBlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A_mFB9D3FE8B185C3955965A33E8AF3551935B111B6 (NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisBlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A_mFB9D3FE8B185C3955965A33E8AF3551935B111B6_gshared)(___nativeArray0, method);
}
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoints>::.ctor(T)
inline void NativePointer_1__ctor_mDA970D759AF8203A52F15FDBC1B3F47B358A695A (NativePointer_1_tBD0F88F36A51FC5575FDA412C1ED0E8F9B6191E0 * __this, BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC  ___value0, const RuntimeMethod* method)
{
	((  void (*) (NativePointer_1_tBD0F88F36A51FC5575FDA412C1ED0E8F9B6191E0 *, BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC , const RuntimeMethod*))NativePointer_1__ctor_mDA970D759AF8203A52F15FDBC1B3F47B358A695A_gshared)(__this, ___value0, method);
}
// System.Boolean Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittablePoint>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m9B4A447E1F22115DE02D0CB244418E22AB663EB3 (NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA *, const RuntimeMethod*))NativeArray_1_get_IsCreated_m9B4A447E1F22115DE02D0CB244418E22AB663EB3_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittablePoint>::Dispose()
inline void NativeArray_1_Dispose_m2357502C1E0883EDE4885D3B1CE29CE26034C65D (NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA *, const RuntimeMethod*))NativeArray_1_Dispose_m2357502C1E0883EDE4885D3B1CE29CE26034C65D_gshared)(__this, method);
}
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoints>::Dispose()
inline void NativePointer_1_Dispose_m43C02B10250DE56976CAE91C45D888F29EEA76E3 (NativePointer_1_tBD0F88F36A51FC5575FDA412C1ED0E8F9B6191E0 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativePointer_1_tBD0F88F36A51FC5575FDA412C1ED0E8F9B6191E0 *, const RuntimeMethod*))NativePointer_1_Dispose_m43C02B10250DE56976CAE91C45D888F29EEA76E3_gshared)(__this, method);
}
// T* VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableTransform>::GetUnsafePtr()
inline BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * NativePointer_1_GetUnsafePtr_m2E5086436D93F6C2410A12F6C6BD13ACFBD2B1A5_inline (NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407 * __this, const RuntimeMethod* method)
{
	return ((  BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * (*) (NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407 *, const RuntimeMethod*))NativePointer_1_GetUnsafePtr_m2E5086436D93F6C2410A12F6C6BD13ACFBD2B1A5_gshared_inline)(__this, method);
}
// T VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableTransform>::get_Value()
inline BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C  NativePointer_1_get_Value_mCBBF37AA6AB92E1CB8F99DE38D86BF3FB63EE231 (NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407 * __this, const RuntimeMethod* method)
{
	return ((  BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C  (*) (NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407 *, const RuntimeMethod*))NativePointer_1_get_Value_mCBBF37AA6AB92E1CB8F99DE38D86BF3FB63EE231_gshared)(__this, method);
}
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableTransform>::.ctor(T)
inline void NativePointer_1__ctor_m758D686235384641668A1CBA24872EFCCBCA4FA0 (NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407 * __this, BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C  ___value0, const RuntimeMethod* method)
{
	((  void (*) (NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407 *, BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C , const RuntimeMethod*))NativePointer_1__ctor_m758D686235384641668A1CBA24872EFCCBCA4FA0_gshared)(__this, ___value0, method);
}
// System.Void VRM.FastSpringBones.Registries.TransformRegistry::Register(VRM.FastSpringBones.NativeWrappers.NativeTransform,VRM.FastSpringBones.Registries.TransformSynchronizationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformRegistry_Register_m6F14A3133E0DE4EC7DF21C10CF846738C5146D3B (TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * __this, NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * ___nativeTransform0, int32_t ___synchronizationType1, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Registries.TransformRegistry::Unregister(VRM.FastSpringBones.NativeWrappers.NativeTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformRegistry_Unregister_mD2AC06492F1CC0A2B64FA068BA74F0F18F54D36E (TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * __this, NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * ___nativeTransform0, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableTransform>::Dispose()
inline void NativePointer_1_Dispose_m1B57CA1E5A4636EC45076E1A85BF2D0419DA3132 (NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407 *, const RuntimeMethod*))NativePointer_1_Dispose_m1B57CA1E5A4636EC45076E1A85BF2D0419DA3132_gshared)(__this, method);
}
// System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.NativeWrappers.NativeTransform> VRM.FastSpringBones.Registries.TransformRegistry::get_PullTargets()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TransformRegistry_get_PullTargets_mB25BB3C0A2531F84AC0A54F2A7C5F06735AE18B3_inline (TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Registries.TransformRegistry::SubscribeOnValueChanged(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformRegistry_SubscribeOnValueChanged_m37D9611588F7A19F7A68A25C60B40ACA4E3F7DDC (TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.NativeWrappers.NativeTransform> VRM.FastSpringBones.Schedulers.PullTransformJobScheduler::get_Targets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PullTransformJobScheduler_get_Targets_mA1D192A28B18CEBBE4C6DE86B878EB66818512B5 (PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4 * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Schedulers.PullTransformJobScheduler::ReconstructBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PullTransformJobScheduler_ReconstructBuffers_m0FF35D635048B444B8019EF1D5B41A45CBBF3B0B (PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4 * __this, const RuntimeMethod* method);
// Unity.Jobs.JobHandle UnityEngine.Jobs.IJobParallelForTransformExtensions::Schedule<VRM.FastSpringBones.Schedulers.PullTransformJobScheduler/Job>(!!0,UnityEngine.Jobs.TransformAccessArray,Unity.Jobs.JobHandle)
inline JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  IJobParallelForTransformExtensions_Schedule_TisJob_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5_m02BBE6CFCF5995CE07CBB42D10109339D7395C4A (Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5  ___jobData0, TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E  ___transforms1, JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___dependsOn2, const RuntimeMethod* method)
{
	return ((  JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  (*) (Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5 , TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E , JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 , const RuntimeMethod*))IJobParallelForTransformExtensions_Schedule_TisJob_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5_m02BBE6CFCF5995CE07CBB42D10109339D7395C4A_gshared)(___jobData0, ___transforms1, ___dependsOn2, method);
}
// System.Void VRM.FastSpringBones.Schedulers.PullTransformJobScheduler::ReleaseBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PullTransformJobScheduler_ReleaseBuffers_mEFB07EC24A81B87449517E6468FD917DAF1A7833 (PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4 * __this, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Malloc(System.Int64,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_Malloc_m18FCC67A056C48A4E0F939D08C43F9E876CA1CF6 (int64_t ___size0, int32_t ___alignment1, int32_t ___allocator2, const RuntimeMethod* method);
// System.Void UnityEngine.Jobs.TransformAccessArray::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformAccessArray__ctor_mC548C0AD5A19EEB71F11BF734F468014C1B61784 (TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E * __this, int32_t ___capacity0, int32_t ___desiredJobCount1, const RuntimeMethod* method);
// UnityEngine.Transform VRM.FastSpringBones.NativeWrappers.NativeTransform::get_Transform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * NativeTransform_get_Transform_mD31EB4E9767FA389DF327511DE7B7271129A8D20_inline (NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Jobs.TransformAccessArray::Add(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformAccessArray_Add_mA7270CFEAFCCD155A86E8BE34EE45BB60068B60D (TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Registries.TransformRegistry::UnSubscribeOnValueChanged(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformRegistry_UnSubscribeOnValueChanged_m4330B63E60A12355CF53FA15CB73982A92506D26 (TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Jobs.TransformAccessArray::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformAccessArray_get_isCreated_mCA462CFEC2D8DDD4A434B11D5E889F57AD1CA551 (TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Jobs.TransformAccessArray::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformAccessArray_Dispose_m3E2A2093F255EDC8B2C61EC144DACC3D80D2D4B1 (TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Free(System.Void*,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_Free_mA805168FF1B6728E7DF3AD1DE47400B37F3441F9 (void* ___memory0, int32_t ___allocator1, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.NativeWrappers.NativeTransform> VRM.FastSpringBones.Registries.TransformRegistry::get_PushTargets()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TransformRegistry_get_PushTargets_m4B78A179B0F6EDFE4B6BB6F562808A6B811F2D15_inline (TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * __this, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.NativeWrappers.NativeTransform> VRM.FastSpringBones.Schedulers.PushTransformJobScheduler::get_Targets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PushTransformJobScheduler_get_Targets_m0764576E0C51D6287C59D3A63D8D466A4AF46169 (PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Schedulers.PushTransformJobScheduler::ReconstructBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushTransformJobScheduler_ReconstructBuffers_m7E801FD09E6B54A4AD740B22597B54E4B91E1B1E (PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF * __this, const RuntimeMethod* method);
// Unity.Jobs.JobHandle UnityEngine.Jobs.IJobParallelForTransformExtensions::Schedule<VRM.FastSpringBones.Schedulers.PushTransformJobScheduler/Job>(!!0,UnityEngine.Jobs.TransformAccessArray,Unity.Jobs.JobHandle)
inline JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  IJobParallelForTransformExtensions_Schedule_TisJob_t5FAB4DC4861E73B951E02964DD2433805897C5AA_m0004C9853A6BCF40E16963D2053B70E19AEED237 (Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA  ___jobData0, TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E  ___transforms1, JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___dependsOn2, const RuntimeMethod* method)
{
	return ((  JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  (*) (Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA , TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E , JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 , const RuntimeMethod*))IJobParallelForTransformExtensions_Schedule_TisJob_t5FAB4DC4861E73B951E02964DD2433805897C5AA_m0004C9853A6BCF40E16963D2053B70E19AEED237_gshared)(___jobData0, ___transforms1, ___dependsOn2, method);
}
// System.Void VRM.FastSpringBones.Schedulers.PushTransformJobScheduler::ReleaseBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushTransformJobScheduler_ReleaseBuffers_m2B476D2D55D66B0E427E46993871FF8314AD03E8 (PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Registries.Registry`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone>>::.ctor()
inline void Registry_1__ctor_mB1AF16939ECE2C8C0D0CCDD33EACB62038771892 (Registry_1_t263E63E9F159455BAB130CFA33A0F6F689B885AB * __this, const RuntimeMethod* method)
{
	((  void (*) (Registry_1_t263E63E9F159455BAB130CFA33A0F6F689B885AB *, const RuntimeMethod*))Registry_1__ctor_m79C8A019DE38EAA4C70EBF981D4866787CD83A57_gshared)(__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<VRM.FastSpringBones.NativeWrappers.NativeTransform>::Add(!0)
inline void List_1_Add_m9CE7A4248DCBE099817C50547D21C159A018A4BC (List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * __this, NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE *, NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, RuntimeObject * ___actualValue1, String_t* ___message2, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<VRM.FastSpringBones.NativeWrappers.NativeTransform>::Remove(!0)
inline bool List_1_Remove_mBF258404139731D5EDCC1FA75670E998FB2B30E3 (List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * __this, NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE *, NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<VRM.FastSpringBones.NativeWrappers.NativeTransform>::Contains(!0)
inline bool List_1_Contains_mA25589EE8ACC8A8299468703FB5B5C1E40391F20 (List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * __this, NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE *, NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.IReadOnlyList`1<T> VRM.FastSpringBones.Registries.Registry`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone>>::get_Items()
inline RuntimeObject* Registry_1_get_Items_m05DB85816227EC2ECA03016B1744FF74DBBD9CB3_inline (Registry_1_t263E63E9F159455BAB130CFA33A0F6F689B885AB * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Registry_1_t263E63E9F159455BAB130CFA33A0F6F689B885AB *, const RuntimeMethod*))Registry_1_get_Items_mA2E74A5F4FFF9371FD2B43B5A3B0A3C73C318115_gshared_inline)(__this, method);
}
// System.Void VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler::ReleaseBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateSpringBoneJobScheduler_ReleaseBuffer_mF45127C94CAFC6A09B26ECB09C6C576A69C5DB27 (UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone>> VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler::get_Targets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdateSpringBoneJobScheduler_get_Targets_mD7360B190D91983008FD803872B569ADE415841F (UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506 * __this, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler::ReconstructBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateSpringBoneJobScheduler_ReconstructBuffers_m335641D1D92F11A803F1F081B090CD40D9CC2895 (UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler/Job>(!!0,System.Int32,System.Int32,Unity.Jobs.JobHandle)
inline JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  IJobParallelForExtensions_Schedule_TisJob_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB_mA9136043701409D9C51B7C03128E707F0354062F (Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB  ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___dependsOn3, const RuntimeMethod* method)
{
	return ((  JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  (*) (Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB , int32_t, int32_t, JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 , const RuntimeMethod*))IJobParallelForExtensions_Schedule_TisJob_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB_mA9136043701409D9C51B7C03128E707F0354062F_gshared)(___jobData0, ___arrayLength1, ___innerloopBatchCount2, ___dependsOn3, method);
}
// T* VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone>::GetUnsafePtr()
inline BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 * NativePointer_1_GetUnsafePtr_mD1E56BD92F641FAC550435B1EB4C8F76330CD903_inline (NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC * __this, const RuntimeMethod* method)
{
	return ((  BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 * (*) (NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC *, const RuntimeMethod*))NativePointer_1_GetUnsafePtr_mD1E56BD92F641FAC550435B1EB4C8F76330CD903_gshared_inline)(__this, method);
}
// System.Void VRM.FastSpringBones.Schedulers.PullTransformJobScheduler/Job::Execute(System.Int32,UnityEngine.Jobs.TransformAccess)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Job_Execute_m77D64450B2CD6DDF9BC4B519B760358A0B3D3DB6 (Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5 * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A  ___transform1, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Schedulers.PushTransformJobScheduler/Job::Execute(System.Int32,UnityEngine.Jobs.TransformAccess)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Job_Execute_m3988EED99AD5679B285824200C72C4AE87624456 (Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A  ___transform1, const RuntimeMethod* method);
// System.Void VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler/Job::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Job_Execute_m9F25DE906BE88F857FD073732697D3BC8880ACBD (Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 VRM.FastSpringBones.Blittables.BlittableCollider::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BlittableCollider_get_Offset_m4B695A7965BC52B6E961C41F4EE4BA499D65C943 (BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Offset { get; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3COffsetU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BlittableCollider_get_Offset_m4B695A7965BC52B6E961C41F4EE4BA499D65C943_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA * _thisAdjusted = reinterpret_cast<BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = BlittableCollider_get_Offset_m4B695A7965BC52B6E961C41F4EE4BA499D65C943_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Single VRM.FastSpringBones.Blittables.BlittableCollider::get_Radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BlittableCollider_get_Radius_m2B59ACF75F8211B871414B3F53A55BFE007A18AC (BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA * __this, const RuntimeMethod* method)
{
	{
		// public float Radius { get; }
		float L_0 = __this->get_U3CRadiusU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float BlittableCollider_get_Radius_m2B59ACF75F8211B871414B3F53A55BFE007A18AC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA * _thisAdjusted = reinterpret_cast<BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA *>(__this + _offset);
	float _returnValue;
	_returnValue = BlittableCollider_get_Radius_m2B59ACF75F8211B871414B3F53A55BFE007A18AC_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void VRM.FastSpringBones.Blittables.BlittableCollider::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableCollider__ctor_mCA56CC588B7186FDA8618D3144D7B55646150A8A (BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___offset0, float ___radius1, const RuntimeMethod* method)
{
	{
		// Offset = offset;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___offset0;
		__this->set_U3COffsetU3Ek__BackingField_0(L_0);
		// Radius = radius;
		float L_1 = ___radius1;
		__this->set_U3CRadiusU3Ek__BackingField_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BlittableCollider__ctor_mCA56CC588B7186FDA8618D3144D7B55646150A8A_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___offset0, float ___radius1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA * _thisAdjusted = reinterpret_cast<BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA *>(__this + _offset);
	BlittableCollider__ctor_mCA56CC588B7186FDA8618D3144D7B55646150A8A(_thisAdjusted, ___offset0, ___radius1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: VRM.FastSpringBones.Blittables.BlittableColliderGroup
IL2CPP_EXTERN_C void BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E_marshal_pinvoke(const BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E& unmarshaled, BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CCollidersU3Ek__BackingField_0 = unmarshaled.get_U3CCollidersU3Ek__BackingField_0();
	marshaled.___U3CTransformU3Ek__BackingField_1 = unmarshaled.get_U3CTransformU3Ek__BackingField_1();
}
IL2CPP_EXTERN_C void BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E_marshal_pinvoke_back(const BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E_marshaled_pinvoke& marshaled, BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E& unmarshaled)
{
	BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32  unmarshaled_U3CCollidersU3Ek__BackingField_temp_0;
	memset((&unmarshaled_U3CCollidersU3Ek__BackingField_temp_0), 0, sizeof(unmarshaled_U3CCollidersU3Ek__BackingField_temp_0));
	unmarshaled_U3CCollidersU3Ek__BackingField_temp_0 = marshaled.___U3CCollidersU3Ek__BackingField_0;
	unmarshaled.set_U3CCollidersU3Ek__BackingField_0(unmarshaled_U3CCollidersU3Ek__BackingField_temp_0);
	unmarshaled.set_U3CTransformU3Ek__BackingField_1(marshaled.___U3CTransformU3Ek__BackingField_1);
}
// Conversion method for clean up from marshalling of: VRM.FastSpringBones.Blittables.BlittableColliderGroup
IL2CPP_EXTERN_C void BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E_marshal_pinvoke_cleanup(BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: VRM.FastSpringBones.Blittables.BlittableColliderGroup
IL2CPP_EXTERN_C void BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E_marshal_com(const BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E& unmarshaled, BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E_marshaled_com& marshaled)
{
	marshaled.___U3CCollidersU3Ek__BackingField_0 = unmarshaled.get_U3CCollidersU3Ek__BackingField_0();
	marshaled.___U3CTransformU3Ek__BackingField_1 = unmarshaled.get_U3CTransformU3Ek__BackingField_1();
}
IL2CPP_EXTERN_C void BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E_marshal_com_back(const BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E_marshaled_com& marshaled, BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E& unmarshaled)
{
	BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32  unmarshaled_U3CCollidersU3Ek__BackingField_temp_0;
	memset((&unmarshaled_U3CCollidersU3Ek__BackingField_temp_0), 0, sizeof(unmarshaled_U3CCollidersU3Ek__BackingField_temp_0));
	unmarshaled_U3CCollidersU3Ek__BackingField_temp_0 = marshaled.___U3CCollidersU3Ek__BackingField_0;
	unmarshaled.set_U3CCollidersU3Ek__BackingField_0(unmarshaled_U3CCollidersU3Ek__BackingField_temp_0);
	unmarshaled.set_U3CTransformU3Ek__BackingField_1(marshaled.___U3CTransformU3Ek__BackingField_1);
}
// Conversion method for clean up from marshalling of: VRM.FastSpringBones.Blittables.BlittableColliderGroup
IL2CPP_EXTERN_C void BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E_marshal_com_cleanup(BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E_marshaled_com& marshaled)
{
}
// VRM.FastSpringBones.Blittables.BlittableColliders VRM.FastSpringBones.Blittables.BlittableColliderGroup::get_Colliders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32  BlittableColliderGroup_get_Colliders_m77764EDD28DF21494344677FD9E815FACC7CDFB4 (BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * __this, const RuntimeMethod* method)
{
	{
		// public BlittableColliders Colliders { get; }
		BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32  L_0 = __this->get_U3CCollidersU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32  BlittableColliderGroup_get_Colliders_m77764EDD28DF21494344677FD9E815FACC7CDFB4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * _thisAdjusted = reinterpret_cast<BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E *>(__this + _offset);
	BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32  _returnValue;
	_returnValue = BlittableColliderGroup_get_Colliders_m77764EDD28DF21494344677FD9E815FACC7CDFB4_inline(_thisAdjusted, method);
	return _returnValue;
}
// VRM.FastSpringBones.Blittables.BlittableTransform* VRM.FastSpringBones.Blittables.BlittableColliderGroup::get_Transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * BlittableColliderGroup_get_Transform_m7FD69C9BFD454A91E6E236AA736415C6088CBDB4 (BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * __this, const RuntimeMethod* method)
{
	{
		// public unsafe BlittableTransform* Transform { get; }
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_0 = __this->get_U3CTransformU3Ek__BackingField_1();
		return (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)(L_0);
	}
}
IL2CPP_EXTERN_C  BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * BlittableColliderGroup_get_Transform_m7FD69C9BFD454A91E6E236AA736415C6088CBDB4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * _thisAdjusted = reinterpret_cast<BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E *>(__this + _offset);
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * _returnValue;
	_returnValue = BlittableColliderGroup_get_Transform_m7FD69C9BFD454A91E6E236AA736415C6088CBDB4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void VRM.FastSpringBones.Blittables.BlittableColliderGroup::.ctor(Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittableCollider>,VRM.FastSpringBones.Blittables.BlittableTransform*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableColliderGroup__ctor_m89AB32EC4CB097AB42DFE1F63D97213A62CAE88E (BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * __this, NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F  ___colliders0, BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * ___transform1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisBlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA_m7EECC12E84A69E8935F6A8D7D2DB72F2532C3616_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Colliders = new BlittableColliders((BlittableCollider*)colliders.GetUnsafePtr(), colliders.Length);
		NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F  L_0 = ___colliders0;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_TisBlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA_m7EECC12E84A69E8935F6A8D7D2DB72F2532C3616(L_0, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisBlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA_m7EECC12E84A69E8935F6A8D7D2DB72F2532C3616_RuntimeMethod_var);
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F *)(&___colliders0))->___m_Length_1);
		BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32  L_3;
		memset((&L_3), 0, sizeof(L_3));
		BlittableColliders__ctor_mA75D891A81D3B09FD3ADC0C1034A0C3012F0A232((&L_3), (BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA *)(BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA *)L_1, L_2, /*hidden argument*/NULL);
		__this->set_U3CCollidersU3Ek__BackingField_0(L_3);
		// Transform = transform;
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_4 = ___transform1;
		__this->set_U3CTransformU3Ek__BackingField_1((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)L_4);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BlittableColliderGroup__ctor_m89AB32EC4CB097AB42DFE1F63D97213A62CAE88E_AdjustorThunk (RuntimeObject * __this, NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F  ___colliders0, BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * ___transform1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * _thisAdjusted = reinterpret_cast<BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E *>(__this + _offset);
	BlittableColliderGroup__ctor_m89AB32EC4CB097AB42DFE1F63D97213A62CAE88E(_thisAdjusted, ___colliders0, ___transform1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: VRM.FastSpringBones.Blittables.BlittableColliderGroups
IL2CPP_EXTERN_C void BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4_marshal_pinvoke(const BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4& unmarshaled, BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4_marshaled_pinvoke& marshaled)
{
	marshaled.____data_0 = unmarshaled.get__data_0();
	marshaled.___U3CLengthU3Ek__BackingField_1 = unmarshaled.get_U3CLengthU3Ek__BackingField_1();
}
IL2CPP_EXTERN_C void BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4_marshal_pinvoke_back(const BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4_marshaled_pinvoke& marshaled, BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4& unmarshaled)
{
	unmarshaled.set__data_0(marshaled.____data_0);
	int32_t unmarshaled_U3CLengthU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3CLengthU3Ek__BackingField_temp_1 = marshaled.___U3CLengthU3Ek__BackingField_1;
	unmarshaled.set_U3CLengthU3Ek__BackingField_1(unmarshaled_U3CLengthU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: VRM.FastSpringBones.Blittables.BlittableColliderGroups
IL2CPP_EXTERN_C void BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4_marshal_pinvoke_cleanup(BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: VRM.FastSpringBones.Blittables.BlittableColliderGroups
IL2CPP_EXTERN_C void BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4_marshal_com(const BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4& unmarshaled, BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4_marshaled_com& marshaled)
{
	marshaled.____data_0 = unmarshaled.get__data_0();
	marshaled.___U3CLengthU3Ek__BackingField_1 = unmarshaled.get_U3CLengthU3Ek__BackingField_1();
}
IL2CPP_EXTERN_C void BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4_marshal_com_back(const BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4_marshaled_com& marshaled, BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4& unmarshaled)
{
	unmarshaled.set__data_0(marshaled.____data_0);
	int32_t unmarshaled_U3CLengthU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3CLengthU3Ek__BackingField_temp_1 = marshaled.___U3CLengthU3Ek__BackingField_1;
	unmarshaled.set_U3CLengthU3Ek__BackingField_1(unmarshaled_U3CLengthU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: VRM.FastSpringBones.Blittables.BlittableColliderGroups
IL2CPP_EXTERN_C void BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4_marshal_com_cleanup(BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4_marshaled_com& marshaled)
{
}
// System.Int32 VRM.FastSpringBones.Blittables.BlittableColliderGroups::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BlittableColliderGroups_get_Length_m63C73D34AF5DE3A69C02849442BAACEEA8654FE5 (BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * __this, const RuntimeMethod* method)
{
	{
		// public int Length { get; }
		int32_t L_0 = __this->get_U3CLengthU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t BlittableColliderGroups_get_Length_m63C73D34AF5DE3A69C02849442BAACEEA8654FE5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * _thisAdjusted = reinterpret_cast<BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BlittableColliderGroups_get_Length_m63C73D34AF5DE3A69C02849442BAACEEA8654FE5_inline(_thisAdjusted, method);
	return _returnValue;
}
// VRM.FastSpringBones.Blittables.BlittableColliderGroup VRM.FastSpringBones.Blittables.BlittableColliderGroups::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E  BlittableColliderGroups_get_Item_mC4ECE0AE1F8B6276909E98509B46264FC573AFE5 (BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// public BlittableColliderGroup this[int i] => _data[i];
		BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * L_0 = __this->get__data_0();
		int32_t L_1 = ___i0;
		uint32_t L_2 = sizeof(BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E );
		BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E  L_3 = (*(BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E *)((BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E *)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)L_2)))));
		return L_3;
	}
}
IL2CPP_EXTERN_C  BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E  BlittableColliderGroups_get_Item_mC4ECE0AE1F8B6276909E98509B46264FC573AFE5_AdjustorThunk (RuntimeObject * __this, int32_t ___i0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * _thisAdjusted = reinterpret_cast<BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 *>(__this + _offset);
	BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E  _returnValue;
	_returnValue = BlittableColliderGroups_get_Item_mC4ECE0AE1F8B6276909E98509B46264FC573AFE5(_thisAdjusted, ___i0, method);
	return _returnValue;
}
// System.Void VRM.FastSpringBones.Blittables.BlittableColliderGroups::DrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableColliderGroups_DrawGizmos_m6596EEDA377DB60BF240E1A1B9AB9184E0551733 (BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// for (var i = 0; i < Length; i++)
		V_0 = 0;
		goto IL_004c;
	}

IL_0004:
	{
		// var group = this[i];
		int32_t L_0 = V_0;
		BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E  L_1;
		L_1 = BlittableColliderGroups_get_Item_mC4ECE0AE1F8B6276909E98509B46264FC573AFE5((BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 *)__this, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		// var colliders = group.Colliders;
		BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32  L_2;
		L_2 = BlittableColliderGroup_get_Colliders_m77764EDD28DF21494344677FD9E815FACC7CDFB4_inline((BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_2;
		// for (var j = 0; j < colliders.Count; ++j)
		V_3 = 0;
		goto IL_003e;
	}

IL_0018:
	{
		// Gizmos.DrawWireSphere(group.Transform->WorldPosition, colliders[j].Radius);
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_3;
		L_3 = BlittableColliderGroup_get_Transform_m7FD69C9BFD454A91E6E236AA736415C6088CBDB4_inline((BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E *)(&V_1), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = BlittableTransform_get_WorldPosition_m6ABCC50FC25950578AA54380B03ACDE0C39BD8F0_inline((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_3;
		BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA  L_6;
		L_6 = BlittableColliders_get_Item_m59E5177890806A728537844E7C732C73DCB5D795((BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32 *)(&V_2), L_5, /*hidden argument*/NULL);
		V_4 = L_6;
		float L_7;
		L_7 = BlittableCollider_get_Radius_m2B59ACF75F8211B871414B3F53A55BFE007A18AC_inline((BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA *)(&V_4), /*hidden argument*/NULL);
		Gizmos_DrawWireSphere_m96C425145BBD85CF0192F9DDB3D1A8C69429B78B(L_4, L_7, /*hidden argument*/NULL);
		// for (var j = 0; j < colliders.Count; ++j)
		int32_t L_8 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_003e:
	{
		// for (var j = 0; j < colliders.Count; ++j)
		int32_t L_9 = V_3;
		int32_t L_10;
		L_10 = BlittableColliders_get_Count_m501185A413889E631E4934DA8C36FD5B83A7164E_inline((BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32 *)(&V_2), /*hidden argument*/NULL);
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0018;
		}
	}
	{
		// for (var i = 0; i < Length; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_004c:
	{
		// for (var i = 0; i < Length; i++)
		int32_t L_12 = V_0;
		int32_t L_13;
		L_13 = BlittableColliderGroups_get_Length_m63C73D34AF5DE3A69C02849442BAACEEA8654FE5_inline((BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BlittableColliderGroups_DrawGizmos_m6596EEDA377DB60BF240E1A1B9AB9184E0551733_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * _thisAdjusted = reinterpret_cast<BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 *>(__this + _offset);
	BlittableColliderGroups_DrawGizmos_m6596EEDA377DB60BF240E1A1B9AB9184E0551733(_thisAdjusted, method);
}
// System.Void VRM.FastSpringBones.Blittables.BlittableColliderGroups::.ctor(VRM.FastSpringBones.Blittables.BlittableColliderGroup*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableColliderGroups__ctor_m932226D6B38F9CB4503894244D68C2BEE07C42D4 (BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * __this, BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * ___data0, int32_t ___length1, const RuntimeMethod* method)
{
	{
		// _data = data;
		BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * L_0 = ___data0;
		__this->set__data_0((BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E *)L_0);
		// Length = length;
		int32_t L_1 = ___length1;
		__this->set_U3CLengthU3Ek__BackingField_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BlittableColliderGroups__ctor_m932226D6B38F9CB4503894244D68C2BEE07C42D4_AdjustorThunk (RuntimeObject * __this, BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * ___data0, int32_t ___length1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * _thisAdjusted = reinterpret_cast<BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 *>(__this + _offset);
	BlittableColliderGroups__ctor_m932226D6B38F9CB4503894244D68C2BEE07C42D4(_thisAdjusted, ___data0, ___length1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 VRM.FastSpringBones.Blittables.BlittableColliders::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BlittableColliders_get_Count_m501185A413889E631E4934DA8C36FD5B83A7164E (BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32 * __this, const RuntimeMethod* method)
{
	{
		// public int Count { get; }
		int32_t L_0 = __this->get_U3CCountU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t BlittableColliders_get_Count_m501185A413889E631E4934DA8C36FD5B83A7164E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32 * _thisAdjusted = reinterpret_cast<BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BlittableColliders_get_Count_m501185A413889E631E4934DA8C36FD5B83A7164E_inline(_thisAdjusted, method);
	return _returnValue;
}
// VRM.FastSpringBones.Blittables.BlittableCollider VRM.FastSpringBones.Blittables.BlittableColliders::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA  BlittableColliders_get_Item_m59E5177890806A728537844E7C732C73DCB5D795 (BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// public BlittableCollider this[int i] => _colliders[i];
		BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA * L_0 = __this->get__colliders_0();
		int32_t L_1 = ___i0;
		uint32_t L_2 = sizeof(BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA );
		BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA  L_3 = (*(BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA *)((BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA *)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)L_2)))));
		return L_3;
	}
}
IL2CPP_EXTERN_C  BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA  BlittableColliders_get_Item_m59E5177890806A728537844E7C732C73DCB5D795_AdjustorThunk (RuntimeObject * __this, int32_t ___i0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32 * _thisAdjusted = reinterpret_cast<BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32 *>(__this + _offset);
	BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA  _returnValue;
	_returnValue = BlittableColliders_get_Item_m59E5177890806A728537844E7C732C73DCB5D795(_thisAdjusted, ___i0, method);
	return _returnValue;
}
// System.Void VRM.FastSpringBones.Blittables.BlittableColliders::.ctor(VRM.FastSpringBones.Blittables.BlittableCollider*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableColliders__ctor_mA75D891A81D3B09FD3ADC0C1034A0C3012F0A232 (BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32 * __this, BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA * ___colliders0, int32_t ___count1, const RuntimeMethod* method)
{
	{
		// _colliders = colliders;
		BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA * L_0 = ___colliders0;
		__this->set__colliders_0((BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA *)L_0);
		// Count = count;
		int32_t L_1 = ___count1;
		__this->set_U3CCountU3Ek__BackingField_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BlittableColliders__ctor_mA75D891A81D3B09FD3ADC0C1034A0C3012F0A232_AdjustorThunk (RuntimeObject * __this, BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA * ___colliders0, int32_t ___count1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32 * _thisAdjusted = reinterpret_cast<BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32 *>(__this + _offset);
	BlittableColliders__ctor_mA75D891A81D3B09FD3ADC0C1034A0C3012F0A232(_thisAdjusted, ___colliders0, ___count1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: VRM.FastSpringBones.Blittables.BlittablePoint
IL2CPP_EXTERN_C void BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A_marshal_pinvoke(const BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A& unmarshaled, BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A_marshaled_pinvoke& marshaled)
{
	marshaled.____length_0 = unmarshaled.get__length_0();
	marshaled.____localRotation_1 = unmarshaled.get__localRotation_1();
	marshaled.____boneAxis_2 = unmarshaled.get__boneAxis_2();
	marshaled.____radius_3 = unmarshaled.get__radius_3();
	marshaled.____prevPosition_4 = unmarshaled.get__prevPosition_4();
	marshaled.____blittableColliderGroups_5 = unmarshaled.get__blittableColliderGroups_5();
	marshaled.____center_6 = unmarshaled.get__center_6();
	marshaled.___U3CCurrentPositionU3Ek__BackingField_7 = unmarshaled.get_U3CCurrentPositionU3Ek__BackingField_7();
	marshaled.____transform_8 = unmarshaled.get__transform_8();
}
IL2CPP_EXTERN_C void BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A_marshal_pinvoke_back(const BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A_marshaled_pinvoke& marshaled, BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A& unmarshaled)
{
	float unmarshaled__length_temp_0 = 0.0f;
	unmarshaled__length_temp_0 = marshaled.____length_0;
	unmarshaled.set__length_0(unmarshaled__length_temp_0);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  unmarshaled__localRotation_temp_1;
	memset((&unmarshaled__localRotation_temp_1), 0, sizeof(unmarshaled__localRotation_temp_1));
	unmarshaled__localRotation_temp_1 = marshaled.____localRotation_1;
	unmarshaled.set__localRotation_1(unmarshaled__localRotation_temp_1);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled__boneAxis_temp_2;
	memset((&unmarshaled__boneAxis_temp_2), 0, sizeof(unmarshaled__boneAxis_temp_2));
	unmarshaled__boneAxis_temp_2 = marshaled.____boneAxis_2;
	unmarshaled.set__boneAxis_2(unmarshaled__boneAxis_temp_2);
	float unmarshaled__radius_temp_3 = 0.0f;
	unmarshaled__radius_temp_3 = marshaled.____radius_3;
	unmarshaled.set__radius_3(unmarshaled__radius_temp_3);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled__prevPosition_temp_4;
	memset((&unmarshaled__prevPosition_temp_4), 0, sizeof(unmarshaled__prevPosition_temp_4));
	unmarshaled__prevPosition_temp_4 = marshaled.____prevPosition_4;
	unmarshaled.set__prevPosition_4(unmarshaled__prevPosition_temp_4);
	unmarshaled.set__blittableColliderGroups_5(marshaled.____blittableColliderGroups_5);
	unmarshaled.set__center_6(marshaled.____center_6);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled_U3CCurrentPositionU3Ek__BackingField_temp_7;
	memset((&unmarshaled_U3CCurrentPositionU3Ek__BackingField_temp_7), 0, sizeof(unmarshaled_U3CCurrentPositionU3Ek__BackingField_temp_7));
	unmarshaled_U3CCurrentPositionU3Ek__BackingField_temp_7 = marshaled.___U3CCurrentPositionU3Ek__BackingField_7;
	unmarshaled.set_U3CCurrentPositionU3Ek__BackingField_7(unmarshaled_U3CCurrentPositionU3Ek__BackingField_temp_7);
	unmarshaled.set__transform_8(marshaled.____transform_8);
}
// Conversion method for clean up from marshalling of: VRM.FastSpringBones.Blittables.BlittablePoint
IL2CPP_EXTERN_C void BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A_marshal_pinvoke_cleanup(BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: VRM.FastSpringBones.Blittables.BlittablePoint
IL2CPP_EXTERN_C void BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A_marshal_com(const BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A& unmarshaled, BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A_marshaled_com& marshaled)
{
	marshaled.____length_0 = unmarshaled.get__length_0();
	marshaled.____localRotation_1 = unmarshaled.get__localRotation_1();
	marshaled.____boneAxis_2 = unmarshaled.get__boneAxis_2();
	marshaled.____radius_3 = unmarshaled.get__radius_3();
	marshaled.____prevPosition_4 = unmarshaled.get__prevPosition_4();
	marshaled.____blittableColliderGroups_5 = unmarshaled.get__blittableColliderGroups_5();
	marshaled.____center_6 = unmarshaled.get__center_6();
	marshaled.___U3CCurrentPositionU3Ek__BackingField_7 = unmarshaled.get_U3CCurrentPositionU3Ek__BackingField_7();
	marshaled.____transform_8 = unmarshaled.get__transform_8();
}
IL2CPP_EXTERN_C void BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A_marshal_com_back(const BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A_marshaled_com& marshaled, BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A& unmarshaled)
{
	float unmarshaled__length_temp_0 = 0.0f;
	unmarshaled__length_temp_0 = marshaled.____length_0;
	unmarshaled.set__length_0(unmarshaled__length_temp_0);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  unmarshaled__localRotation_temp_1;
	memset((&unmarshaled__localRotation_temp_1), 0, sizeof(unmarshaled__localRotation_temp_1));
	unmarshaled__localRotation_temp_1 = marshaled.____localRotation_1;
	unmarshaled.set__localRotation_1(unmarshaled__localRotation_temp_1);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled__boneAxis_temp_2;
	memset((&unmarshaled__boneAxis_temp_2), 0, sizeof(unmarshaled__boneAxis_temp_2));
	unmarshaled__boneAxis_temp_2 = marshaled.____boneAxis_2;
	unmarshaled.set__boneAxis_2(unmarshaled__boneAxis_temp_2);
	float unmarshaled__radius_temp_3 = 0.0f;
	unmarshaled__radius_temp_3 = marshaled.____radius_3;
	unmarshaled.set__radius_3(unmarshaled__radius_temp_3);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled__prevPosition_temp_4;
	memset((&unmarshaled__prevPosition_temp_4), 0, sizeof(unmarshaled__prevPosition_temp_4));
	unmarshaled__prevPosition_temp_4 = marshaled.____prevPosition_4;
	unmarshaled.set__prevPosition_4(unmarshaled__prevPosition_temp_4);
	unmarshaled.set__blittableColliderGroups_5(marshaled.____blittableColliderGroups_5);
	unmarshaled.set__center_6(marshaled.____center_6);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled_U3CCurrentPositionU3Ek__BackingField_temp_7;
	memset((&unmarshaled_U3CCurrentPositionU3Ek__BackingField_temp_7), 0, sizeof(unmarshaled_U3CCurrentPositionU3Ek__BackingField_temp_7));
	unmarshaled_U3CCurrentPositionU3Ek__BackingField_temp_7 = marshaled.___U3CCurrentPositionU3Ek__BackingField_7;
	unmarshaled.set_U3CCurrentPositionU3Ek__BackingField_7(unmarshaled_U3CCurrentPositionU3Ek__BackingField_temp_7);
	unmarshaled.set__transform_8(marshaled.____transform_8);
}
// Conversion method for clean up from marshalling of: VRM.FastSpringBones.Blittables.BlittablePoint
IL2CPP_EXTERN_C void BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A_marshal_com_cleanup(BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A_marshaled_com& marshaled)
{
}
// UnityEngine.Vector3 VRM.FastSpringBones.Blittables.BlittablePoint::get_CurrentPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BlittablePoint_get_CurrentPosition_mA3FC21A18552A6B92543D023C0B927A188B3CE39 (BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 CurrentPosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CCurrentPositionU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BlittablePoint_get_CurrentPosition_mA3FC21A18552A6B92543D023C0B927A188B3CE39_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * _thisAdjusted = reinterpret_cast<BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = BlittablePoint_get_CurrentPosition_mA3FC21A18552A6B92543D023C0B927A188B3CE39_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void VRM.FastSpringBones.Blittables.BlittablePoint::set_CurrentPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittablePoint_set_CurrentPosition_mD212ECEE996FB2BE7A0E4973C8D59D73484B6CA5 (BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 CurrentPosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CCurrentPositionU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void BlittablePoint_set_CurrentPosition_mD212ECEE996FB2BE7A0E4973C8D59D73484B6CA5_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * _thisAdjusted = reinterpret_cast<BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A *>(__this + _offset);
	BlittablePoint_set_CurrentPosition_mD212ECEE996FB2BE7A0E4973C8D59D73484B6CA5_inline(_thisAdjusted, ___value0, method);
}
// System.Void VRM.FastSpringBones.Blittables.BlittablePoint::.ctor(UnityEngine.Transform,System.Single,VRM.FastSpringBones.Blittables.BlittableTransform*,VRM.FastSpringBones.Blittables.BlittableColliderGroups*,VRM.FastSpringBones.Blittables.BlittableTransform*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittablePoint__ctor_mAD71864DDC5EA8ABCF6AE97DC73ECDDAD5331DA8 (BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, float ___radius1, BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * ___center2, BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * ___blittableColliderGroups3, BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * ___blittableTransform4, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * G_B5_0 = NULL;
	BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * G_B5_1 = NULL;
	BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * G_B4_0 = NULL;
	BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * G_B4_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * G_B6_1 = NULL;
	BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * G_B6_2 = NULL;
	{
		// if (transform.childCount == 0)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___transform0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_004f;
		}
	}
	{
		// var delta = transform.position - transform.parent.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___transform0;
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = ___transform0;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_3, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// var childPosition = transform.position + delta.normalized * 0.07f;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = ___transform0;
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_10, (0.0700000003f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		// localPosition = transform.worldToLocalMatrix.MultiplyPoint(childPosition);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = ___transform0;
		NullCheck(L_13);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_14;
		L_14 = Transform_get_worldToLocalMatrix_mE22FDE24767E1DE402D3E7A1C9803379B2E8399D(L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_4), L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		// }
		goto IL_009a;
	}

IL_004f:
	{
		// var firstChild = transform.GetChild(0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = ___transform0;
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_17, 0, /*hidden argument*/NULL);
		// var scale = firstChild.lossyScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = L_18;
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331(L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		// localPosition = firstChild.localPosition;
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_19, /*hidden argument*/NULL);
		V_0 = L_21;
		// localPosition.x *= scale.x;
		float* L_22 = (&V_0)->get_address_of_x_2();
		float* L_23 = L_22;
		float L_24 = *((float*)L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_5;
		float L_26 = L_25.get_x_2();
		*((float*)L_23) = (float)((float)il2cpp_codegen_multiply((float)L_24, (float)L_26));
		// localPosition.y *= scale.y;
		float* L_27 = (&V_0)->get_address_of_y_3();
		float* L_28 = L_27;
		float L_29 = *((float*)L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_5;
		float L_31 = L_30.get_y_3();
		*((float*)L_28) = (float)((float)il2cpp_codegen_multiply((float)L_29, (float)L_31));
		// localPosition.z *= scale.z;
		float* L_32 = (&V_0)->get_address_of_z_4();
		float* L_33 = L_32;
		float L_34 = *((float*)L_33);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = V_5;
		float L_36 = L_35.get_z_4();
		*((float*)L_33) = (float)((float)il2cpp_codegen_multiply((float)L_34, (float)L_36));
	}

IL_009a:
	{
		// var worldChildPosition = (Vector3)transform.TransformPoint(localPosition);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37 = ___transform0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = V_0;
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_37, L_38, /*hidden argument*/NULL);
		V_1 = L_39;
		// _prevPosition = CurrentPosition = center != null ? center->LocalToWorld.inverse.MultiplyPoint3x4(worldChildPosition) : worldChildPosition;
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_40 = ___center2;
		G_B4_0 = __this;
		G_B4_1 = __this;
		if ((!(((uintptr_t)L_40) == ((uintptr_t)((uintptr_t)0)))))
		{
			G_B5_0 = __this;
			G_B5_1 = __this;
			goto IL_00ac;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = V_1;
		G_B6_0 = L_41;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_00c5;
	}

IL_00ac:
	{
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_42 = ___center2;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_43;
		L_43 = BlittableTransform_get_LocalToWorld_mC58E83F111E24534359AE7A9EA2BAD043249D9E8_inline((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)L_42, /*hidden argument*/NULL);
		V_4 = L_43;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_44;
		L_44 = Matrix4x4_get_inverse_mFA34ECC790B269522F60FC32370D628DAFCAE225((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_4), /*hidden argument*/NULL);
		V_4 = L_44;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_4), L_45, /*hidden argument*/NULL);
		G_B6_0 = L_46;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_00c5:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = G_B6_0;
		V_6 = L_47;
		BlittablePoint_set_CurrentPosition_mD212ECEE996FB2BE7A0E4973C8D59D73484B6CA5_inline((BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A *)G_B6_1, L_47, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48 = V_6;
		G_B6_2->set__prevPosition_4(L_48);
		// _localRotation = transform.localRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49 = ___transform0;
		NullCheck(L_49);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_50;
		L_50 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_49, /*hidden argument*/NULL);
		__this->set__localRotation_1(L_50);
		// _boneAxis = localPosition.normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		__this->set__boneAxis_2(L_51);
		// _length = localPosition.magnitude;
		float L_52;
		L_52 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		__this->set__length_0(L_52);
		// _radius = radius;
		float L_53 = ___radius1;
		__this->set__radius_3(L_53);
		// _blittableColliderGroups = blittableColliderGroups;
		BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * L_54 = ___blittableColliderGroups3;
		__this->set__blittableColliderGroups_5((BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 *)L_54);
		// _transform = blittableTransform;
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_55 = ___blittableTransform4;
		__this->set__transform_8((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)L_55);
		// _center = center;
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_56 = ___center2;
		__this->set__center_6((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)L_56);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BlittablePoint__ctor_mAD71864DDC5EA8ABCF6AE97DC73ECDDAD5331DA8_AdjustorThunk (RuntimeObject * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, float ___radius1, BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * ___center2, BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * ___blittableColliderGroups3, BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * ___blittableTransform4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * _thisAdjusted = reinterpret_cast<BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A *>(__this + _offset);
	BlittablePoint__ctor_mAD71864DDC5EA8ABCF6AE97DC73ECDDAD5331DA8(_thisAdjusted, ___transform0, ___radius1, ___center2, ___blittableColliderGroups3, ___blittableTransform4, method);
}
// System.Void VRM.FastSpringBones.Blittables.BlittablePoint::Update(System.Single,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittablePoint_Update_mEF6058E16F85C907467E3383776A373F278404C5 (BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * __this, float ___stiffnessForce0, float ___dragForce1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___external2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// _transform->UpdateLocalToWorldMatrix();
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_0 = __this->get__transform_8();
		BlittableTransform_UpdateLocalToWorldMatrix_m7B4DC6DA83BF57E0F4C443867AA9FCE5F0609964((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)L_0, /*hidden argument*/NULL);
		// if (_center == null)
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_1 = __this->get__center_6();
		if ((!(((uintptr_t)L_1) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0025;
		}
	}
	{
		// currentPosition = CurrentPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = BlittablePoint_get_CurrentPosition_mA3FC21A18552A6B92543D023C0B927A188B3CE39_inline((BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		// prevPosition = _prevPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get__prevPosition_4();
		V_1 = L_3;
		// }
		goto IL_004e;
	}

IL_0025:
	{
		// var centerLocalToWorld = _center->LocalToWorld;
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_4 = __this->get__center_6();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_5;
		L_5 = BlittableTransform_get_LocalToWorld_mC58E83F111E24534359AE7A9EA2BAD043249D9E8_inline((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)L_4, /*hidden argument*/NULL);
		V_4 = L_5;
		// currentPosition = centerLocalToWorld.MultiplyPoint3x4(CurrentPosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = BlittablePoint_get_CurrentPosition_mA3FC21A18552A6B92543D023C0B927A188B3CE39_inline((BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A *)__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_4), L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// prevPosition = centerLocalToWorld.MultiplyPoint3x4(_prevPosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get__prevPosition_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_4), L_8, /*hidden argument*/NULL);
		V_1 = L_9;
	}

IL_004e:
	{
		// var nextPosition = currentPosition
		//     + (currentPosition - prevPosition) * (1.0f - dragForce) // 前フレームの移動を継続する(減衰もあるよ)
		//     + _transform->ParentWorldRotation * _localRotation * _boneAxis * stiffnessForce // 親の回転による子ボーンの移動目標
		//     + external; // 外力による移動量
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_11, L_12, /*hidden argument*/NULL);
		float L_14 = ___dragForce1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_13, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_14)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_10, L_15, /*hidden argument*/NULL);
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_17 = __this->get__transform_8();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
		L_18 = BlittableTransform_get_ParentWorldRotation_m23E0A4589206DC30E665C6C3DAA5966B9DF18EE7((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)L_17, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19 = __this->get__localRotation_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20;
		L_20 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_18, L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = __this->get__boneAxis_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_20, L_21, /*hidden argument*/NULL);
		float L_23 = ___stiffnessForce0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_22, L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_16, L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = ___external2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_25, L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		// var position = _transform->WorldPosition;
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_28 = __this->get__transform_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = BlittableTransform_get_WorldPosition_m6ABCC50FC25950578AA54380B03ACDE0C39BD8F0_inline((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)L_28, /*hidden argument*/NULL);
		V_3 = L_29;
		// nextPosition = position + (nextPosition - position).normalized * _length;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_31, L_32, /*hidden argument*/NULL);
		V_5 = L_33;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_5), /*hidden argument*/NULL);
		float L_35 = __this->get__length_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_34, L_35, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_30, L_36, /*hidden argument*/NULL);
		V_2 = L_37;
		// nextPosition = Collision(nextPosition, position);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = BlittablePoint_Collision_mE340D013B529FA1EEAFF70EFC562D494F2AC716D((BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A *)__this, L_38, L_39, /*hidden argument*/NULL);
		V_2 = L_40;
		// if (_center == null)
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_41 = __this->get__center_6();
		if ((!(((uintptr_t)L_41) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_00eb;
		}
	}
	{
		// _prevPosition = currentPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42 = V_0;
		__this->set__prevPosition_4(L_42);
		// CurrentPosition = nextPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = V_2;
		BlittablePoint_set_CurrentPosition_mD212ECEE996FB2BE7A0E4973C8D59D73484B6CA5_inline((BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A *)__this, L_43, /*hidden argument*/NULL);
		// }
		goto IL_011d;
	}

IL_00eb:
	{
		// var centerWorldToLocal = _center->LocalToWorld.inverse;
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_44 = __this->get__center_6();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_45;
		L_45 = BlittableTransform_get_LocalToWorld_mC58E83F111E24534359AE7A9EA2BAD043249D9E8_inline((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)L_44, /*hidden argument*/NULL);
		V_7 = L_45;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_46;
		L_46 = Matrix4x4_get_inverse_mFA34ECC790B269522F60FC32370D628DAFCAE225((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_7), /*hidden argument*/NULL);
		V_6 = L_46;
		// _prevPosition = centerWorldToLocal.MultiplyPoint3x4(currentPosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_6), L_47, /*hidden argument*/NULL);
		__this->set__prevPosition_4(L_48);
		// CurrentPosition = centerWorldToLocal.MultiplyPoint3x4(nextPosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_6), L_49, /*hidden argument*/NULL);
		BlittablePoint_set_CurrentPosition_mD212ECEE996FB2BE7A0E4973C8D59D73484B6CA5_inline((BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A *)__this, L_50, /*hidden argument*/NULL);
	}

IL_011d:
	{
		// _transform->SetWorldRotation(ApplyRotation(nextPosition));
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_51 = __this->get__transform_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_53;
		L_53 = BlittablePoint_ApplyRotation_mFB43D4F17F88459EE31443604A634335BAA65033((BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A *)__this, L_52, /*hidden argument*/NULL);
		BlittableTransform_SetWorldRotation_m1F5FF43623DC8582E1178A70C7372CFEACF81C58((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)L_51, L_53, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BlittablePoint_Update_mEF6058E16F85C907467E3383776A373F278404C5_AdjustorThunk (RuntimeObject * __this, float ___stiffnessForce0, float ___dragForce1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___external2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * _thisAdjusted = reinterpret_cast<BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A *>(__this + _offset);
	BlittablePoint_Update_mEF6058E16F85C907467E3383776A373F278404C5(_thisAdjusted, ___stiffnessForce0, ___dragForce1, ___external2, method);
}
// UnityEngine.Vector3 VRM.FastSpringBones.Blittables.BlittablePoint::Collision(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BlittablePoint_Collision_mE340D013B529FA1EEAFF70EFC562D494F2AC716D (BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___nextPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// for (var i = 0; i < _blittableColliderGroups->Length; ++i)
		V_0 = 0;
		goto IL_00dd;
	}

IL_0007:
	{
		// var colliderGroup = (*_blittableColliderGroups)[i];
		BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * L_0 = __this->get__blittableColliderGroups_5();
		int32_t L_1 = V_0;
		BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E  L_2;
		L_2 = BlittableColliderGroups_get_Item_mC4ECE0AE1F8B6276909E98509B46264FC573AFE5((BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 *)(BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 *)L_0, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// for (var j = 0; j < colliderGroup.Colliders.Count; ++j)
		V_2 = 0;
		goto IL_00c3;
	}

IL_001b:
	{
		// var collider = colliderGroup.Colliders[j];
		BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32  L_3;
		L_3 = BlittableColliderGroup_get_Colliders_m77764EDD28DF21494344677FD9E815FACC7CDFB4_inline((BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E *)(&V_1), /*hidden argument*/NULL);
		V_8 = L_3;
		int32_t L_4 = V_2;
		BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA  L_5;
		L_5 = BlittableColliders_get_Item_m59E5177890806A728537844E7C732C73DCB5D795((BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32 *)(&V_8), L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		// var colliderPosition = colliderGroup.Transform->TransformPoint(collider.Offset);
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_6;
		L_6 = BlittableColliderGroup_get_Transform_m7FD69C9BFD454A91E6E236AA736415C6088CBDB4_inline((BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E *)(&V_1), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = BlittableCollider_get_Offset_m4B695A7965BC52B6E961C41F4EE4BA499D65C943_inline((BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA *)(&V_3), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = BlittableTransform_TransformPoint_m6FB950DB66259085E1D76FC96601CEC2AA373D16((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)L_6, L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		// var r = _radius + collider.Radius;
		float L_9 = __this->get__radius_3();
		float L_10;
		L_10 = BlittableCollider_get_Radius_m2B59ACF75F8211B871414B3F53A55BFE007A18AC_inline((BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA *)(&V_3), /*hidden argument*/NULL);
		V_5 = ((float)il2cpp_codegen_add((float)L_9, (float)L_10));
		// if (!((nextPosition - colliderPosition).sqrMagnitude <= (r * r))) continue;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___nextPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_11, L_12, /*hidden argument*/NULL);
		V_9 = L_13;
		float L_14;
		L_14 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_9), /*hidden argument*/NULL);
		float L_15 = V_5;
		float L_16 = V_5;
		if ((!(((float)L_14) <= ((float)((float)il2cpp_codegen_multiply((float)L_15, (float)L_16))))))
		{
			goto IL_00bf;
		}
	}
	{
		// var normal = (nextPosition - colliderPosition).normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = ___nextPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_17, L_18, /*hidden argument*/NULL);
		V_9 = L_19;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_9), /*hidden argument*/NULL);
		V_6 = L_20;
		// var posFromCollider = colliderPosition + normal * (_radius + collider.Radius);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_6;
		float L_23 = __this->get__radius_3();
		float L_24;
		L_24 = BlittableCollider_get_Radius_m2B59ACF75F8211B871414B3F53A55BFE007A18AC_inline((BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA *)(&V_3), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_22, ((float)il2cpp_codegen_add((float)L_23, (float)L_24)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_21, L_25, /*hidden argument*/NULL);
		V_7 = L_26;
		// nextPosition = position + (posFromCollider - position).normalized * _length;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = ___position1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = ___position1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_28, L_29, /*hidden argument*/NULL);
		V_9 = L_30;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_9), /*hidden argument*/NULL);
		float L_32 = __this->get__length_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_31, L_32, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_27, L_33, /*hidden argument*/NULL);
		___nextPosition0 = L_34;
	}

IL_00bf:
	{
		// for (var j = 0; j < colliderGroup.Colliders.Count; ++j)
		int32_t L_35 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00c3:
	{
		// for (var j = 0; j < colliderGroup.Colliders.Count; ++j)
		int32_t L_36 = V_2;
		BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32  L_37;
		L_37 = BlittableColliderGroup_get_Colliders_m77764EDD28DF21494344677FD9E815FACC7CDFB4_inline((BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E *)(&V_1), /*hidden argument*/NULL);
		V_8 = L_37;
		int32_t L_38;
		L_38 = BlittableColliders_get_Count_m501185A413889E631E4934DA8C36FD5B83A7164E_inline((BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32 *)(&V_8), /*hidden argument*/NULL);
		if ((((int32_t)L_36) < ((int32_t)L_38)))
		{
			goto IL_001b;
		}
	}
	{
		// for (var i = 0; i < _blittableColliderGroups->Length; ++i)
		int32_t L_39 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00dd:
	{
		// for (var i = 0; i < _blittableColliderGroups->Length; ++i)
		int32_t L_40 = V_0;
		BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * L_41 = __this->get__blittableColliderGroups_5();
		int32_t L_42;
		L_42 = BlittableColliderGroups_get_Length_m63C73D34AF5DE3A69C02849442BAACEEA8654FE5_inline((BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 *)(BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 *)L_41, /*hidden argument*/NULL);
		if ((((int32_t)L_40) < ((int32_t)L_42)))
		{
			goto IL_0007;
		}
	}
	{
		// return nextPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = ___nextPosition0;
		return L_43;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BlittablePoint_Collision_mE340D013B529FA1EEAFF70EFC562D494F2AC716D_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___nextPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * _thisAdjusted = reinterpret_cast<BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = BlittablePoint_Collision_mE340D013B529FA1EEAFF70EFC562D494F2AC716D(_thisAdjusted, ___nextPosition0, ___position1, method);
	return _returnValue;
}
// UnityEngine.Quaternion VRM.FastSpringBones.Blittables.BlittablePoint::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  BlittablePoint_FromToRotation_m58DF5300E4F2EF6B0C30F07670BDAB9CBECBE512 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// => Quaternion.AngleAxis(
		//     angle: Mathf.Acos(Mathf.Clamp(Vector3.Dot(from.normalized, to.normalized), -1f, 1f)) * Mathf.Rad2Deg,
		//     axis: Vector3.Cross(from, to).normalized
		// );
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___from0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___to1), /*hidden argument*/NULL);
		float L_2;
		L_2 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_0, L_1, /*hidden argument*/NULL);
		float L_3;
		L_3 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_2, (-1.0f), (1.0f), /*hidden argument*/NULL);
		float L_4;
		L_4 = acosf(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___from0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___to1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(((float)il2cpp_codegen_multiply((float)L_4, (float)(57.2957802f))), L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Quaternion VRM.FastSpringBones.Blittables.BlittablePoint::ApplyRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  BlittablePoint_ApplyRotation_mFB43D4F17F88459EE31443604A634335BAA65033 (BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___nextTail0, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var rotation = _transform->ParentWorldRotation * _localRotation;
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_0 = __this->get__transform_8();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = BlittableTransform_get_ParentWorldRotation_m23E0A4589206DC30E665C6C3DAA5966B9DF18EE7((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)L_0, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2 = __this->get__localRotation_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// return
		//     FromToRotation(
		//         rotation * _boneAxis,
		//         nextTail - _transform->WorldPosition) *
		//     rotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get__boneAxis_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_4, L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___nextTail0;
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_8 = __this->get__transform_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = BlittableTransform_get_WorldPosition_m6ABCC50FC25950578AA54380B03ACDE0C39BD8F0_inline((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_7, L_9, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = BlittablePoint_FromToRotation_m58DF5300E4F2EF6B0C30F07670BDAB9CBECBE512(L_6, L_10, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
IL2CPP_EXTERN_C  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  BlittablePoint_ApplyRotation_mFB43D4F17F88459EE31443604A634335BAA65033_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___nextTail0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * _thisAdjusted = reinterpret_cast<BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A *>(__this + _offset);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  _returnValue;
	_returnValue = BlittablePoint_ApplyRotation_mFB43D4F17F88459EE31443604A634335BAA65033(_thisAdjusted, ___nextTail0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: VRM.FastSpringBones.Blittables.BlittablePoints
IL2CPP_EXTERN_C void BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC_marshal_pinvoke(const BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC& unmarshaled, BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC_marshaled_pinvoke& marshaled)
{
	marshaled.____points_0 = unmarshaled.get__points_0();
	marshaled.___U3CCountU3Ek__BackingField_1 = unmarshaled.get_U3CCountU3Ek__BackingField_1();
}
IL2CPP_EXTERN_C void BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC_marshal_pinvoke_back(const BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC_marshaled_pinvoke& marshaled, BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC& unmarshaled)
{
	unmarshaled.set__points_0(marshaled.____points_0);
	int32_t unmarshaled_U3CCountU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3CCountU3Ek__BackingField_temp_1 = marshaled.___U3CCountU3Ek__BackingField_1;
	unmarshaled.set_U3CCountU3Ek__BackingField_1(unmarshaled_U3CCountU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: VRM.FastSpringBones.Blittables.BlittablePoints
IL2CPP_EXTERN_C void BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC_marshal_pinvoke_cleanup(BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: VRM.FastSpringBones.Blittables.BlittablePoints
IL2CPP_EXTERN_C void BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC_marshal_com(const BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC& unmarshaled, BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC_marshaled_com& marshaled)
{
	marshaled.____points_0 = unmarshaled.get__points_0();
	marshaled.___U3CCountU3Ek__BackingField_1 = unmarshaled.get_U3CCountU3Ek__BackingField_1();
}
IL2CPP_EXTERN_C void BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC_marshal_com_back(const BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC_marshaled_com& marshaled, BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC& unmarshaled)
{
	unmarshaled.set__points_0(marshaled.____points_0);
	int32_t unmarshaled_U3CCountU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3CCountU3Ek__BackingField_temp_1 = marshaled.___U3CCountU3Ek__BackingField_1;
	unmarshaled.set_U3CCountU3Ek__BackingField_1(unmarshaled_U3CCountU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: VRM.FastSpringBones.Blittables.BlittablePoints
IL2CPP_EXTERN_C void BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC_marshal_com_cleanup(BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC_marshaled_com& marshaled)
{
}
// System.Int32 VRM.FastSpringBones.Blittables.BlittablePoints::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BlittablePoints_get_Count_m35946661A8F2267C8F4CB4B8557FECC28675BF1C (BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * __this, const RuntimeMethod* method)
{
	{
		// public int Count { get; }
		int32_t L_0 = __this->get_U3CCountU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t BlittablePoints_get_Count_m35946661A8F2267C8F4CB4B8557FECC28675BF1C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * _thisAdjusted = reinterpret_cast<BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BlittablePoints_get_Count_m35946661A8F2267C8F4CB4B8557FECC28675BF1C_inline(_thisAdjusted, method);
	return _returnValue;
}
// VRM.FastSpringBones.Blittables.BlittablePoint VRM.FastSpringBones.Blittables.BlittablePoints::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A  BlittablePoints_get_Item_m27D0445E1139DE0869DD1771003B34F3A9D53CAC (BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// get => _points[i];
		BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * L_0 = __this->get__points_0();
		int32_t L_1 = ___i0;
		uint32_t L_2 = sizeof(BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A );
		BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A  L_3 = (*(BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A *)((BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A *)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)L_2)))));
		return L_3;
	}
}
IL2CPP_EXTERN_C  BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A  BlittablePoints_get_Item_m27D0445E1139DE0869DD1771003B34F3A9D53CAC_AdjustorThunk (RuntimeObject * __this, int32_t ___i0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * _thisAdjusted = reinterpret_cast<BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *>(__this + _offset);
	BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A  _returnValue;
	_returnValue = BlittablePoints_get_Item_m27D0445E1139DE0869DD1771003B34F3A9D53CAC(_thisAdjusted, ___i0, method);
	return _returnValue;
}
// System.Void VRM.FastSpringBones.Blittables.BlittablePoints::set_Item(System.Int32,VRM.FastSpringBones.Blittables.BlittablePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittablePoints_set_Item_mBB03422C0617F284B260C5DB3F916FEC791E2790 (BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * __this, int32_t ___i0, BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A  ___value1, const RuntimeMethod* method)
{
	{
		// set => _points[i] = value;
		BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * L_0 = __this->get__points_0();
		int32_t L_1 = ___i0;
		uint32_t L_2 = sizeof(BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A );
		BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A  L_3 = ___value1;
		*(BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A *)((BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A *)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)L_2)))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void BlittablePoints_set_Item_mBB03422C0617F284B260C5DB3F916FEC791E2790_AdjustorThunk (RuntimeObject * __this, int32_t ___i0, BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A  ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * _thisAdjusted = reinterpret_cast<BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *>(__this + _offset);
	BlittablePoints_set_Item_mBB03422C0617F284B260C5DB3F916FEC791E2790(_thisAdjusted, ___i0, ___value1, method);
}
// System.Void VRM.FastSpringBones.Blittables.BlittablePoints::.ctor(VRM.FastSpringBones.Blittables.BlittablePoint*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittablePoints__ctor_mE4C1DB08BE53D2914BD5C8965135BEB2A9203E9E (BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * __this, BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * ___points0, int32_t ___count1, const RuntimeMethod* method)
{
	{
		// _points = points;
		BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * L_0 = ___points0;
		__this->set__points_0((BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A *)L_0);
		// Count = count;
		int32_t L_1 = ___count1;
		__this->set_U3CCountU3Ek__BackingField_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BlittablePoints__ctor_mE4C1DB08BE53D2914BD5C8965135BEB2A9203E9E_AdjustorThunk (RuntimeObject * __this, BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * ___points0, int32_t ___count1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * _thisAdjusted = reinterpret_cast<BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *>(__this + _offset);
	BlittablePoints__ctor_mE4C1DB08BE53D2914BD5C8965135BEB2A9203E9E(_thisAdjusted, ___points0, ___count1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: VRM.FastSpringBones.Blittables.BlittableRootBone
IL2CPP_EXTERN_C void BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6_marshal_pinvoke(const BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6& unmarshaled, BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6_marshaled_pinvoke& marshaled)
{
	marshaled.____gravityPower_0 = unmarshaled.get__gravityPower_0();
	marshaled.____gravityDir_1 = unmarshaled.get__gravityDir_1();
	marshaled.____dragForce_2 = unmarshaled.get__dragForce_2();
	marshaled.____stiffnessForce_3 = unmarshaled.get__stiffnessForce_3();
	marshaled.____blittablePoints_4 = unmarshaled.get__blittablePoints_4();
}
IL2CPP_EXTERN_C void BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6_marshal_pinvoke_back(const BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6_marshaled_pinvoke& marshaled, BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6& unmarshaled)
{
	float unmarshaled__gravityPower_temp_0 = 0.0f;
	unmarshaled__gravityPower_temp_0 = marshaled.____gravityPower_0;
	unmarshaled.set__gravityPower_0(unmarshaled__gravityPower_temp_0);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled__gravityDir_temp_1;
	memset((&unmarshaled__gravityDir_temp_1), 0, sizeof(unmarshaled__gravityDir_temp_1));
	unmarshaled__gravityDir_temp_1 = marshaled.____gravityDir_1;
	unmarshaled.set__gravityDir_1(unmarshaled__gravityDir_temp_1);
	float unmarshaled__dragForce_temp_2 = 0.0f;
	unmarshaled__dragForce_temp_2 = marshaled.____dragForce_2;
	unmarshaled.set__dragForce_2(unmarshaled__dragForce_temp_2);
	float unmarshaled__stiffnessForce_temp_3 = 0.0f;
	unmarshaled__stiffnessForce_temp_3 = marshaled.____stiffnessForce_3;
	unmarshaled.set__stiffnessForce_3(unmarshaled__stiffnessForce_temp_3);
	unmarshaled.set__blittablePoints_4(marshaled.____blittablePoints_4);
}
// Conversion method for clean up from marshalling of: VRM.FastSpringBones.Blittables.BlittableRootBone
IL2CPP_EXTERN_C void BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6_marshal_pinvoke_cleanup(BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: VRM.FastSpringBones.Blittables.BlittableRootBone
IL2CPP_EXTERN_C void BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6_marshal_com(const BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6& unmarshaled, BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6_marshaled_com& marshaled)
{
	marshaled.____gravityPower_0 = unmarshaled.get__gravityPower_0();
	marshaled.____gravityDir_1 = unmarshaled.get__gravityDir_1();
	marshaled.____dragForce_2 = unmarshaled.get__dragForce_2();
	marshaled.____stiffnessForce_3 = unmarshaled.get__stiffnessForce_3();
	marshaled.____blittablePoints_4 = unmarshaled.get__blittablePoints_4();
}
IL2CPP_EXTERN_C void BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6_marshal_com_back(const BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6_marshaled_com& marshaled, BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6& unmarshaled)
{
	float unmarshaled__gravityPower_temp_0 = 0.0f;
	unmarshaled__gravityPower_temp_0 = marshaled.____gravityPower_0;
	unmarshaled.set__gravityPower_0(unmarshaled__gravityPower_temp_0);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled__gravityDir_temp_1;
	memset((&unmarshaled__gravityDir_temp_1), 0, sizeof(unmarshaled__gravityDir_temp_1));
	unmarshaled__gravityDir_temp_1 = marshaled.____gravityDir_1;
	unmarshaled.set__gravityDir_1(unmarshaled__gravityDir_temp_1);
	float unmarshaled__dragForce_temp_2 = 0.0f;
	unmarshaled__dragForce_temp_2 = marshaled.____dragForce_2;
	unmarshaled.set__dragForce_2(unmarshaled__dragForce_temp_2);
	float unmarshaled__stiffnessForce_temp_3 = 0.0f;
	unmarshaled__stiffnessForce_temp_3 = marshaled.____stiffnessForce_3;
	unmarshaled.set__stiffnessForce_3(unmarshaled__stiffnessForce_temp_3);
	unmarshaled.set__blittablePoints_4(marshaled.____blittablePoints_4);
}
// Conversion method for clean up from marshalling of: VRM.FastSpringBones.Blittables.BlittableRootBone
IL2CPP_EXTERN_C void BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6_marshal_com_cleanup(BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6_marshaled_com& marshaled)
{
}
// System.Void VRM.FastSpringBones.Blittables.BlittableRootBone::DrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableRootBone_DrawGizmos_m081264BB9806E60D87A36B06465174594E381245 (BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A  V_3;
	memset((&V_3), 0, sizeof(V_3));
	BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// for (var i = 0; i < _blittablePoints->Count; i++)
		V_0 = 0;
		goto IL_0026;
	}

IL_0004:
	{
		// var point = (*_blittablePoints)[i];
		BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * L_0 = __this->get__blittablePoints_4();
		int32_t L_1 = V_0;
		BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A  L_2;
		L_2 = BlittablePoints_get_Item_m27D0445E1139DE0869DD1771003B34F3A9D53CAC((BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *)(BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *)L_0, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// Gizmos.DrawWireSphere(point.CurrentPosition, 0.05f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = BlittablePoint_get_CurrentPosition_mA3FC21A18552A6B92543D023C0B927A188B3CE39_inline((BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A *)(&V_1), /*hidden argument*/NULL);
		Gizmos_DrawWireSphere_m96C425145BBD85CF0192F9DDB3D1A8C69429B78B(L_3, (0.0500000007f), /*hidden argument*/NULL);
		// for (var i = 0; i < _blittablePoints->Count; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0026:
	{
		// for (var i = 0; i < _blittablePoints->Count; i++)
		int32_t L_5 = V_0;
		BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * L_6 = __this->get__blittablePoints_4();
		int32_t L_7;
		L_7 = BlittablePoints_get_Count_m35946661A8F2267C8F4CB4B8557FECC28675BF1C_inline((BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *)(BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *)L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		// for (var i = 0; i < _blittablePoints->Count - 1; i++)
		V_2 = 0;
		goto IL_006c;
	}

IL_0038:
	{
		// var point1 = (*_blittablePoints)[i];
		BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * L_8 = __this->get__blittablePoints_4();
		int32_t L_9 = V_2;
		BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A  L_10;
		L_10 = BlittablePoints_get_Item_m27D0445E1139DE0869DD1771003B34F3A9D53CAC((BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *)(BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *)L_8, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		// var point2 = (*_blittablePoints)[i + 1];
		BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * L_11 = __this->get__blittablePoints_4();
		int32_t L_12 = V_2;
		BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A  L_13;
		L_13 = BlittablePoints_get_Item_m27D0445E1139DE0869DD1771003B34F3A9D53CAC((BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *)(BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *)L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_13;
		// Gizmos.DrawLine(point1.CurrentPosition, point2.CurrentPosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = BlittablePoint_get_CurrentPosition_mA3FC21A18552A6B92543D023C0B927A188B3CE39_inline((BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A *)(&V_3), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = BlittablePoint_get_CurrentPosition_mA3FC21A18552A6B92543D023C0B927A188B3CE39_inline((BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A *)(&V_4), /*hidden argument*/NULL);
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_14, L_15, /*hidden argument*/NULL);
		// for (var i = 0; i < _blittablePoints->Count - 1; i++)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_006c:
	{
		// for (var i = 0; i < _blittablePoints->Count - 1; i++)
		int32_t L_17 = V_2;
		BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * L_18 = __this->get__blittablePoints_4();
		int32_t L_19;
		L_19 = BlittablePoints_get_Count_m35946661A8F2267C8F4CB4B8557FECC28675BF1C_inline((BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *)(BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *)L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)))))
		{
			goto IL_0038;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BlittableRootBone_DrawGizmos_m081264BB9806E60D87A36B06465174594E381245_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 * _thisAdjusted = reinterpret_cast<BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 *>(__this + _offset);
	BlittableRootBone_DrawGizmos_m081264BB9806E60D87A36B06465174594E381245(_thisAdjusted, method);
}
// System.Void VRM.FastSpringBones.Blittables.BlittableRootBone::.ctor(System.Single,UnityEngine.Vector3,System.Single,System.Single,VRM.FastSpringBones.Blittables.BlittablePoints*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableRootBone__ctor_m7E6536F9C4BAB18919678F06C8C69BB0BEC1FAF5 (BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 * __this, float ___gravityPower0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___gravityDir1, float ___dragForce2, float ___stiffnessForce3, BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * ___blittablePoints4, const RuntimeMethod* method)
{
	{
		// _gravityPower = gravityPower;
		float L_0 = ___gravityPower0;
		__this->set__gravityPower_0(L_0);
		// _gravityDir = gravityDir;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___gravityDir1;
		__this->set__gravityDir_1(L_1);
		// _dragForce = dragForce;
		float L_2 = ___dragForce2;
		__this->set__dragForce_2(L_2);
		// _stiffnessForce = stiffnessForce;
		float L_3 = ___stiffnessForce3;
		__this->set__stiffnessForce_3(L_3);
		// _blittablePoints = blittablePoints;
		BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * L_4 = ___blittablePoints4;
		__this->set__blittablePoints_4((BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *)L_4);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BlittableRootBone__ctor_m7E6536F9C4BAB18919678F06C8C69BB0BEC1FAF5_AdjustorThunk (RuntimeObject * __this, float ___gravityPower0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___gravityDir1, float ___dragForce2, float ___stiffnessForce3, BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * ___blittablePoints4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 * _thisAdjusted = reinterpret_cast<BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 *>(__this + _offset);
	BlittableRootBone__ctor_m7E6536F9C4BAB18919678F06C8C69BB0BEC1FAF5(_thisAdjusted, ___gravityPower0, ___gravityDir1, ___dragForce2, ___stiffnessForce3, ___blittablePoints4, method);
}
// System.Void VRM.FastSpringBones.Blittables.BlittableRootBone::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableRootBone_Update_mD7798AEFCD43AAAACE805DCE65A7CEDB4B303EA3 (BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 * __this, float ___deltaTime0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var stiffness = _stiffnessForce * deltaTime;
		float L_0 = __this->get__stiffnessForce_3();
		float L_1 = ___deltaTime0;
		V_0 = ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
		// var external = _gravityDir * (_gravityPower * deltaTime);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get__gravityDir_1();
		float L_3 = __this->get__gravityPower_0();
		float L_4 = ___deltaTime0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), /*hidden argument*/NULL);
		V_1 = L_5;
		// for (var i = 0; i < _blittablePoints->Count; i++)
		V_2 = 0;
		goto IL_004e;
	}

IL_0021:
	{
		// var point = (*_blittablePoints)[i];
		BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * L_6 = __this->get__blittablePoints_4();
		int32_t L_7 = V_2;
		BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A  L_8;
		L_8 = BlittablePoints_get_Item_m27D0445E1139DE0869DD1771003B34F3A9D53CAC((BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *)(BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *)L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		// point.Update(
		//     stiffness,
		//     _dragForce,
		//     external
		// );
		float L_9 = V_0;
		float L_10 = __this->get__dragForce_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_1;
		BlittablePoint_Update_mEF6058E16F85C907467E3383776A373F278404C5((BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A *)(&V_3), L_9, L_10, L_11, /*hidden argument*/NULL);
		// (*_blittablePoints)[i] = point;
		BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * L_12 = __this->get__blittablePoints_4();
		int32_t L_13 = V_2;
		BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A  L_14 = V_3;
		BlittablePoints_set_Item_mBB03422C0617F284B260C5DB3F916FEC791E2790((BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *)(BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *)L_12, L_13, L_14, /*hidden argument*/NULL);
		// for (var i = 0; i < _blittablePoints->Count; i++)
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_004e:
	{
		// for (var i = 0; i < _blittablePoints->Count; i++)
		int32_t L_16 = V_2;
		BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * L_17 = __this->get__blittablePoints_4();
		int32_t L_18;
		L_18 = BlittablePoints_get_Count_m35946661A8F2267C8F4CB4B8557FECC28675BF1C_inline((BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *)(BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *)L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0021;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BlittableRootBone_Update_mD7798AEFCD43AAAACE805DCE65A7CEDB4B303EA3_AdjustorThunk (RuntimeObject * __this, float ___deltaTime0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 * _thisAdjusted = reinterpret_cast<BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 *>(__this + _offset);
	BlittableRootBone_Update_mD7798AEFCD43AAAACE805DCE65A7CEDB4B303EA3(_thisAdjusted, ___deltaTime0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: VRM.FastSpringBones.Blittables.BlittableTransform
IL2CPP_EXTERN_C void BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C_marshal_pinvoke(const BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C& unmarshaled, BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C_marshaled_pinvoke& marshaled)
{
	marshaled.____parent_0 = unmarshaled.get__parent_0();
	marshaled.____worldRotation_1 = unmarshaled.get__worldRotation_1();
	marshaled.____localPosition_2 = unmarshaled.get__localPosition_2();
	marshaled.____localScale_3 = unmarshaled.get__localScale_3();
	marshaled.____localRotation_4 = unmarshaled.get__localRotation_4();
	marshaled.____localToWorld_5 = unmarshaled.get__localToWorld_5();
	marshaled.___U3CWorldPositionU3Ek__BackingField_6 = unmarshaled.get_U3CWorldPositionU3Ek__BackingField_6();
}
IL2CPP_EXTERN_C void BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C_marshal_pinvoke_back(const BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C_marshaled_pinvoke& marshaled, BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C& unmarshaled)
{
	unmarshaled.set__parent_0(marshaled.____parent_0);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  unmarshaled__worldRotation_temp_1;
	memset((&unmarshaled__worldRotation_temp_1), 0, sizeof(unmarshaled__worldRotation_temp_1));
	unmarshaled__worldRotation_temp_1 = marshaled.____worldRotation_1;
	unmarshaled.set__worldRotation_1(unmarshaled__worldRotation_temp_1);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled__localPosition_temp_2;
	memset((&unmarshaled__localPosition_temp_2), 0, sizeof(unmarshaled__localPosition_temp_2));
	unmarshaled__localPosition_temp_2 = marshaled.____localPosition_2;
	unmarshaled.set__localPosition_2(unmarshaled__localPosition_temp_2);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled__localScale_temp_3;
	memset((&unmarshaled__localScale_temp_3), 0, sizeof(unmarshaled__localScale_temp_3));
	unmarshaled__localScale_temp_3 = marshaled.____localScale_3;
	unmarshaled.set__localScale_3(unmarshaled__localScale_temp_3);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  unmarshaled__localRotation_temp_4;
	memset((&unmarshaled__localRotation_temp_4), 0, sizeof(unmarshaled__localRotation_temp_4));
	unmarshaled__localRotation_temp_4 = marshaled.____localRotation_4;
	unmarshaled.set__localRotation_4(unmarshaled__localRotation_temp_4);
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  unmarshaled__localToWorld_temp_5;
	memset((&unmarshaled__localToWorld_temp_5), 0, sizeof(unmarshaled__localToWorld_temp_5));
	unmarshaled__localToWorld_temp_5 = marshaled.____localToWorld_5;
	unmarshaled.set__localToWorld_5(unmarshaled__localToWorld_temp_5);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled_U3CWorldPositionU3Ek__BackingField_temp_6;
	memset((&unmarshaled_U3CWorldPositionU3Ek__BackingField_temp_6), 0, sizeof(unmarshaled_U3CWorldPositionU3Ek__BackingField_temp_6));
	unmarshaled_U3CWorldPositionU3Ek__BackingField_temp_6 = marshaled.___U3CWorldPositionU3Ek__BackingField_6;
	unmarshaled.set_U3CWorldPositionU3Ek__BackingField_6(unmarshaled_U3CWorldPositionU3Ek__BackingField_temp_6);
}
// Conversion method for clean up from marshalling of: VRM.FastSpringBones.Blittables.BlittableTransform
IL2CPP_EXTERN_C void BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C_marshal_pinvoke_cleanup(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: VRM.FastSpringBones.Blittables.BlittableTransform
IL2CPP_EXTERN_C void BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C_marshal_com(const BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C& unmarshaled, BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C_marshaled_com& marshaled)
{
	marshaled.____parent_0 = unmarshaled.get__parent_0();
	marshaled.____worldRotation_1 = unmarshaled.get__worldRotation_1();
	marshaled.____localPosition_2 = unmarshaled.get__localPosition_2();
	marshaled.____localScale_3 = unmarshaled.get__localScale_3();
	marshaled.____localRotation_4 = unmarshaled.get__localRotation_4();
	marshaled.____localToWorld_5 = unmarshaled.get__localToWorld_5();
	marshaled.___U3CWorldPositionU3Ek__BackingField_6 = unmarshaled.get_U3CWorldPositionU3Ek__BackingField_6();
}
IL2CPP_EXTERN_C void BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C_marshal_com_back(const BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C_marshaled_com& marshaled, BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C& unmarshaled)
{
	unmarshaled.set__parent_0(marshaled.____parent_0);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  unmarshaled__worldRotation_temp_1;
	memset((&unmarshaled__worldRotation_temp_1), 0, sizeof(unmarshaled__worldRotation_temp_1));
	unmarshaled__worldRotation_temp_1 = marshaled.____worldRotation_1;
	unmarshaled.set__worldRotation_1(unmarshaled__worldRotation_temp_1);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled__localPosition_temp_2;
	memset((&unmarshaled__localPosition_temp_2), 0, sizeof(unmarshaled__localPosition_temp_2));
	unmarshaled__localPosition_temp_2 = marshaled.____localPosition_2;
	unmarshaled.set__localPosition_2(unmarshaled__localPosition_temp_2);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled__localScale_temp_3;
	memset((&unmarshaled__localScale_temp_3), 0, sizeof(unmarshaled__localScale_temp_3));
	unmarshaled__localScale_temp_3 = marshaled.____localScale_3;
	unmarshaled.set__localScale_3(unmarshaled__localScale_temp_3);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  unmarshaled__localRotation_temp_4;
	memset((&unmarshaled__localRotation_temp_4), 0, sizeof(unmarshaled__localRotation_temp_4));
	unmarshaled__localRotation_temp_4 = marshaled.____localRotation_4;
	unmarshaled.set__localRotation_4(unmarshaled__localRotation_temp_4);
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  unmarshaled__localToWorld_temp_5;
	memset((&unmarshaled__localToWorld_temp_5), 0, sizeof(unmarshaled__localToWorld_temp_5));
	unmarshaled__localToWorld_temp_5 = marshaled.____localToWorld_5;
	unmarshaled.set__localToWorld_5(unmarshaled__localToWorld_temp_5);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled_U3CWorldPositionU3Ek__BackingField_temp_6;
	memset((&unmarshaled_U3CWorldPositionU3Ek__BackingField_temp_6), 0, sizeof(unmarshaled_U3CWorldPositionU3Ek__BackingField_temp_6));
	unmarshaled_U3CWorldPositionU3Ek__BackingField_temp_6 = marshaled.___U3CWorldPositionU3Ek__BackingField_6;
	unmarshaled.set_U3CWorldPositionU3Ek__BackingField_6(unmarshaled_U3CWorldPositionU3Ek__BackingField_temp_6);
}
// Conversion method for clean up from marshalling of: VRM.FastSpringBones.Blittables.BlittableTransform
IL2CPP_EXTERN_C void BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C_marshal_com_cleanup(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C_marshaled_com& marshaled)
{
}
// UnityEngine.Vector3 VRM.FastSpringBones.Blittables.BlittableTransform::get_WorldPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BlittableTransform_get_WorldPosition_m6ABCC50FC25950578AA54380B03ACDE0C39BD8F0 (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 WorldPosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CWorldPositionU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BlittableTransform_get_WorldPosition_m6ABCC50FC25950578AA54380B03ACDE0C39BD8F0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * _thisAdjusted = reinterpret_cast<BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = BlittableTransform_get_WorldPosition_m6ABCC50FC25950578AA54380B03ACDE0C39BD8F0_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void VRM.FastSpringBones.Blittables.BlittableTransform::set_WorldPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableTransform_set_WorldPosition_mFA291B3B2F5C2AEFEF9269A1B19A2C20E60FC442 (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 WorldPosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CWorldPositionU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void BlittableTransform_set_WorldPosition_mFA291B3B2F5C2AEFEF9269A1B19A2C20E60FC442_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * _thisAdjusted = reinterpret_cast<BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *>(__this + _offset);
	BlittableTransform_set_WorldPosition_mFA291B3B2F5C2AEFEF9269A1B19A2C20E60FC442_inline(_thisAdjusted, ___value0, method);
}
// System.Void VRM.FastSpringBones.Blittables.BlittableTransform::SetWorldRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableTransform_SetWorldRotation_m1F5FF43623DC8582E1178A70C7372CFEACF81C58 (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var parentWorldRotation = ParentWorldRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0;
		L_0 = BlittableTransform_get_ParentWorldRotation_m23E0A4589206DC30E665C6C3DAA5966B9DF18EE7((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// _localRotation = Quaternion.Inverse(parentWorldRotation) * rotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_1, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = ___rotation0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_2, L_3, /*hidden argument*/NULL);
		__this->set__localRotation_4(L_4);
		// UpdateLocalToWorldMatrix();
		BlittableTransform_UpdateLocalToWorldMatrix_m7B4DC6DA83BF57E0F4C443867AA9FCE5F0609964((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BlittableTransform_SetWorldRotation_m1F5FF43623DC8582E1178A70C7372CFEACF81C58_AdjustorThunk (RuntimeObject * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * _thisAdjusted = reinterpret_cast<BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *>(__this + _offset);
	BlittableTransform_SetWorldRotation_m1F5FF43623DC8582E1178A70C7372CFEACF81C58(_thisAdjusted, ___rotation0, method);
}
// UnityEngine.Matrix4x4 VRM.FastSpringBones.Blittables.BlittableTransform::get_LocalToWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  BlittableTransform_get_LocalToWorld_mC58E83F111E24534359AE7A9EA2BAD043249D9E8 (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * __this, const RuntimeMethod* method)
{
	{
		// public Matrix4x4 LocalToWorld => _localToWorld;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = __this->get__localToWorld_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  BlittableTransform_get_LocalToWorld_mC58E83F111E24534359AE7A9EA2BAD043249D9E8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * _thisAdjusted = reinterpret_cast<BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *>(__this + _offset);
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  _returnValue;
	_returnValue = BlittableTransform_get_LocalToWorld_mC58E83F111E24534359AE7A9EA2BAD043249D9E8_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Matrix4x4 VRM.FastSpringBones.Blittables.BlittableTransform::get_LocalTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  BlittableTransform_get_LocalTransform_mFA9798BD51D9659DD95EFF864ED0291F066371AF (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * __this, const RuntimeMethod* method)
{
	{
		// private Matrix4x4 LocalTransform => Matrix4x4.TRS(_localPosition, _localRotation, _localScale);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get__localPosition_2();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = __this->get__localRotation_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get__localScale_3();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_3;
		L_3 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  BlittableTransform_get_LocalTransform_mFA9798BD51D9659DD95EFF864ED0291F066371AF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * _thisAdjusted = reinterpret_cast<BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *>(__this + _offset);
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  _returnValue;
	_returnValue = BlittableTransform_get_LocalTransform_mFA9798BD51D9659DD95EFF864ED0291F066371AF(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Quaternion VRM.FastSpringBones.Blittables.BlittableTransform::get_ParentWorldRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  BlittableTransform_get_ParentWorldRotation_m23E0A4589206DC30E665C6C3DAA5966B9DF18EE7 (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion ParentWorldRotation => _parent != null ? _parent->_worldRotation : Quaternion.identity;
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_0 = __this->get__parent_0();
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0010;
		}
	}
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		return L_1;
	}

IL_0010:
	{
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_2 = __this->get__parent_0();
		NullCheck(L_2);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = L_2->get__worldRotation_1();
		return L_3;
	}
}
IL2CPP_EXTERN_C  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  BlittableTransform_get_ParentWorldRotation_m23E0A4589206DC30E665C6C3DAA5966B9DF18EE7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * _thisAdjusted = reinterpret_cast<BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *>(__this + _offset);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  _returnValue;
	_returnValue = BlittableTransform_get_ParentWorldRotation_m23E0A4589206DC30E665C6C3DAA5966B9DF18EE7(_thisAdjusted, method);
	return _returnValue;
}
// System.Void VRM.FastSpringBones.Blittables.BlittableTransform::.ctor(VRM.FastSpringBones.Blittables.BlittableTransform*,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableTransform__ctor_m5041ABB388BF0F162ABD3E02812ABD1DB390383A (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * __this, BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * ___parent0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform1, const RuntimeMethod* method)
{
	{
		// _parent = parent;
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_0 = ___parent0;
		__this->set__parent_0((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)L_0);
		// WorldPosition = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___transform1;
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		BlittableTransform_set_WorldPosition_mFA291B3B2F5C2AEFEF9269A1B19A2C20E60FC442_inline((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)__this, L_2, /*hidden argument*/NULL);
		// _worldRotation = transform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ___transform1;
		NullCheck(L_3);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_3, /*hidden argument*/NULL);
		__this->set__worldRotation_1(L_4);
		// _localPosition = transform.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ___transform1;
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_5, /*hidden argument*/NULL);
		__this->set__localPosition_2(L_6);
		// _localRotation = transform.localRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = ___transform1;
		NullCheck(L_7);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_7, /*hidden argument*/NULL);
		__this->set__localRotation_4(L_8);
		// _localScale = transform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = ___transform1;
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_9, /*hidden argument*/NULL);
		__this->set__localScale_3(L_10);
		// _localToWorld = transform.localToWorldMatrix;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = ___transform1;
		NullCheck(L_11);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_12;
		L_12 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC(L_11, /*hidden argument*/NULL);
		__this->set__localToWorld_5(L_12);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BlittableTransform__ctor_m5041ABB388BF0F162ABD3E02812ABD1DB390383A_AdjustorThunk (RuntimeObject * __this, BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * ___parent0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * _thisAdjusted = reinterpret_cast<BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *>(__this + _offset);
	BlittableTransform__ctor_m5041ABB388BF0F162ABD3E02812ABD1DB390383A(_thisAdjusted, ___parent0, ___transform1, method);
}
// System.Void VRM.FastSpringBones.Blittables.BlittableTransform::PullFrom(UnityEngine.Jobs.TransformAccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableTransform_PullFrom_m60EB3B51DF17177636F8D8873DE94789396CE651 (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * __this, TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A  ___transform0, const RuntimeMethod* method)
{
	{
		// WorldPosition = transform.position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = TransformAccess_get_position_mF9DA76B90F2806600A0E9FAC52D8CB96E08CDDD0((TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A *)(&___transform0), /*hidden argument*/NULL);
		BlittableTransform_set_WorldPosition_mFA291B3B2F5C2AEFEF9269A1B19A2C20E60FC442_inline((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)__this, L_0, /*hidden argument*/NULL);
		// _worldRotation = transform.rotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = TransformAccess_get_rotation_mFBBEB01D5CF6A46EC5C4A6F1D3AA9B6CE8C6D6A7((TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A *)(&___transform0), /*hidden argument*/NULL);
		__this->set__worldRotation_1(L_1);
		// _localPosition = transform.localPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = TransformAccess_get_localPosition_m389EA2F40A52D376EF7FB7E04696E40F8BD3DF4C((TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A *)(&___transform0), /*hidden argument*/NULL);
		__this->set__localPosition_2(L_2);
		// _localRotation = transform.localRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = TransformAccess_get_localRotation_m8E1C06BDED87ADF507166755EF896874B4A72A2A((TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A *)(&___transform0), /*hidden argument*/NULL);
		__this->set__localRotation_4(L_3);
		// _localScale = transform.localScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = TransformAccess_get_localScale_m25697E6420C364278293B0E4F9D338425344D883((TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A *)(&___transform0), /*hidden argument*/NULL);
		__this->set__localScale_3(L_4);
		// _localToWorld = transform.localToWorldMatrix;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_5;
		L_5 = TransformAccess_get_localToWorldMatrix_mD432A9836794EC9D562BB96EA87B29F3060CE644((TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A *)(&___transform0), /*hidden argument*/NULL);
		__this->set__localToWorld_5(L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BlittableTransform_PullFrom_m60EB3B51DF17177636F8D8873DE94789396CE651_AdjustorThunk (RuntimeObject * __this, TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A  ___transform0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * _thisAdjusted = reinterpret_cast<BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *>(__this + _offset);
	BlittableTransform_PullFrom_m60EB3B51DF17177636F8D8873DE94789396CE651(_thisAdjusted, ___transform0, method);
}
// System.Void VRM.FastSpringBones.Blittables.BlittableTransform::PushTo(UnityEngine.Jobs.TransformAccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableTransform_PushTo_m765BC4F6315ECB4278A3EFC9FE5AC8F894542D72 (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * __this, TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A  ___transform0, const RuntimeMethod* method)
{
	{
		// transform.localPosition = _localPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get__localPosition_2();
		TransformAccess_set_localPosition_mD89C1F790E3355CD348CBB3CB692DE0AE9BAB9F3((TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A *)(&___transform0), L_0, /*hidden argument*/NULL);
		// transform.localRotation = _localRotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = __this->get__localRotation_4();
		TransformAccess_set_localRotation_m37F92CA12F5E26616ECBA33353DC406AB13DF3DB((TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A *)(&___transform0), L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BlittableTransform_PushTo_m765BC4F6315ECB4278A3EFC9FE5AC8F894542D72_AdjustorThunk (RuntimeObject * __this, TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A  ___transform0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * _thisAdjusted = reinterpret_cast<BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *>(__this + _offset);
	BlittableTransform_PushTo_m765BC4F6315ECB4278A3EFC9FE5AC8F894542D72(_thisAdjusted, ___transform0, method);
}
// UnityEngine.Vector3 VRM.FastSpringBones.Blittables.BlittableTransform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BlittableTransform_TransformPoint_m6FB950DB66259085E1D76FC96601CEC2AA373D16 (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___offset0, const RuntimeMethod* method)
{
	{
		// public Vector3 TransformPoint(Vector3 offset) => _localToWorld.MultiplyPoint3x4(offset);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_0 = __this->get_address_of__localToWorld_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___offset0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BlittableTransform_TransformPoint_m6FB950DB66259085E1D76FC96601CEC2AA373D16_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___offset0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * _thisAdjusted = reinterpret_cast<BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = BlittableTransform_TransformPoint_m6FB950DB66259085E1D76FC96601CEC2AA373D16(_thisAdjusted, ___offset0, method);
	return _returnValue;
}
// System.Void VRM.FastSpringBones.Blittables.BlittableTransform::UpdateLocalToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlittableTransform_UpdateLocalToWorldMatrix_m7B4DC6DA83BF57E0F4C443867AA9FCE5F0609964 (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * __this, const RuntimeMethod* method)
{
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * G_B2_0 = NULL;
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * G_B1_0 = NULL;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * G_B3_1 = NULL;
	{
		// _localToWorld = _parent == null ? LocalTransform : _parent->_localToWorld * LocalTransform;
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_0 = __this->get__parent_0();
		G_B1_0 = __this;
		if ((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0))))
		{
			G_B2_0 = __this;
			goto IL_0023;
		}
	}
	{
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_1 = __this->get__parent_0();
		NullCheck(L_1);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_2 = L_1->get__localToWorld_5();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_3;
		L_3 = BlittableTransform_get_LocalTransform_mFA9798BD51D9659DD95EFF864ED0291F066371AF((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)__this, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_4;
		L_4 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_2, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_0029;
	}

IL_0023:
	{
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_5;
		L_5 = BlittableTransform_get_LocalTransform_mFA9798BD51D9659DD95EFF864ED0291F066371AF((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)__this, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_0029:
	{
		G_B3_1->set__localToWorld_5(G_B3_0);
		// WorldPosition = _localToWorld.MultiplyPoint3x4(Vector3.zero);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_6 = __this->get_address_of__localToWorld_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Matrix4x4_MultiplyPoint3x4_mA0A34C5FD162DA8E5421596F1F921436F3E7B2FC((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_6, L_7, /*hidden argument*/NULL);
		BlittableTransform_set_WorldPosition_mFA291B3B2F5C2AEFEF9269A1B19A2C20E60FC442_inline((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)__this, L_8, /*hidden argument*/NULL);
		// _worldRotation = _localToWorld.rotation;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_9 = __this->get_address_of__localToWorld_5();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Matrix4x4_get_rotation_m3F80DDCCBDC01EBF36D61F382749AE704603C379((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_9, /*hidden argument*/NULL);
		__this->set__worldRotation_1(L_10);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BlittableTransform_UpdateLocalToWorldMatrix_m7B4DC6DA83BF57E0F4C443867AA9FCE5F0609964_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * _thisAdjusted = reinterpret_cast<BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *>(__this + _offset);
	BlittableTransform_UpdateLocalToWorldMatrix_m7B4DC6DA83BF57E0F4C443867AA9FCE5F0609964(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VRM.FastSpringBones.Registries.ColliderGroupRegistry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderGroupRegistry__ctor_m5A1C12EF9EC6D609330A565EE1499F4EBE0CEB3E (ColliderGroupRegistry_t999F00E4395E09F2F8D26FCFE67FC1015BC0F92D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Registry_1__ctor_m86240CCCCB23EA93B7D6D908222543E0075A0884_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Registry_1__ctor_m86240CCCCB23EA93B7D6D908222543E0075A0884(__this, /*hidden argument*/Registry_1__ctor_m86240CCCCB23EA93B7D6D908222543E0075A0884_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mA7C4E58BA795A335E9D66BFBDB8EF481D453E4F1 (EmbeddedAttribute_t8C7CE574097FE7040CA0AD239BB2C887854CCEC4 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// VRM.FastSpringBones.Blittables.BlittableColliderGroup* VRM.FastSpringBones.Components.FastSpringBoneColliderGroup::get_ColliderGroupPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * FastSpringBoneColliderGroup_get_ColliderGroupPtr_m5CFFCD3555FF59D6084F8E59D9EC038F44F9FBD6 (FastSpringBoneColliderGroup_t335E25E7E132EFF43C9CF08D6CB02ADDB674FE14 * __this, const RuntimeMethod* method)
{
	{
		// public BlittableColliderGroup* ColliderGroupPtr => _nativeColliderGroup.GetUnsafePtr();
		NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B * L_0 = __this->get__nativeColliderGroup_5();
		NullCheck(L_0);
		BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * L_1;
		L_1 = NativeColliderGroup_GetUnsafePtr_m135F8F3523979BD5B9D8BEE4E4C8163F50B45D4F(L_0, /*hidden argument*/NULL);
		return (BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E *)(L_1);
	}
}
// System.Void VRM.FastSpringBones.Components.FastSpringBoneColliderGroup::Initialize(VRM.FastSpringBones.Registries.TransformRegistry,VRM.FastSpringBones.Blittables.BlittableCollider[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastSpringBoneColliderGroup_Initialize_m666A1A57AE7694F6FF85481C5262178AED6CB313 (FastSpringBoneColliderGroup_t335E25E7E132EFF43C9CF08D6CB02ADDB674FE14 * __this, TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * ___transformRegistry0, BlittableColliderU5BU5D_t6F7A13492F46D2051CDDA4A50D78F5D51625F1A8* ___colliders1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _nativeTransform = new NativeTransform(transformRegistry, TransformSynchronizationType.PullOnly, transform);
		TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * L_0 = ___transformRegistry0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_2 = (NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 *)il2cpp_codegen_object_new(NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91_il2cpp_TypeInfo_var);
		NativeTransform__ctor_m5622E3BE7F5ED43E5B37BD4447A8E34A41AC276F(L_2, L_0, 0, L_1, (NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 *)NULL, /*hidden argument*/NULL);
		__this->set__nativeTransform_4(L_2);
		// _nativeColliderGroup = new NativeColliderGroup(colliders, _nativeTransform);
		BlittableColliderU5BU5D_t6F7A13492F46D2051CDDA4A50D78F5D51625F1A8* L_3 = ___colliders1;
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_4 = __this->get__nativeTransform_4();
		NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B * L_5 = (NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B *)il2cpp_codegen_object_new(NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B_il2cpp_TypeInfo_var);
		NativeColliderGroup__ctor_m64105BE9A90D5C6552A01D281BA9DCEB4226718C(L_5, L_3, L_4, /*hidden argument*/NULL);
		__this->set__nativeColliderGroup_5(L_5);
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.Components.FastSpringBoneColliderGroup::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastSpringBoneColliderGroup_OnDestroy_m40CDC539ED169DC227B30E09B46A034793314755 (FastSpringBoneColliderGroup_t335E25E7E132EFF43C9CF08D6CB02ADDB674FE14 * __this, const RuntimeMethod* method)
{
	NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * G_B2_0 = NULL;
	NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * G_B1_0 = NULL;
	NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B * G_B5_0 = NULL;
	NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B * G_B4_0 = NULL;
	{
		// _nativeTransform?.Dispose();
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_0 = __this->get__nativeTransform_4();
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		NativeTransform_Dispose_m0A492076F13E995F79D526F28004826EB3D6017E(G_B2_0, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// _nativeColliderGroup?.Dispose();
		NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B * L_2 = __this->get__nativeColliderGroup_5();
		NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B * L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		NullCheck(G_B5_0);
		NativeColliderGroup_Dispose_m5C4695E82B9AEA44D7A96329C9D54519E0267860(G_B5_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.Components.FastSpringBoneColliderGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastSpringBoneColliderGroup__ctor_m25E9B33C42594901AA72C570CA70B4B446D2B937 (FastSpringBoneColliderGroup_t335E25E7E132EFF43C9CF08D6CB02ADDB674FE14 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean VRM.FastSpringBones.Components.FastSpringBoneScheduler::get_ShowGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FastSpringBoneScheduler_get_ShowGizmos_m2C4B0C14D15BDB241870FC138754E019379B0DF7 (FastSpringBoneScheduler_t5E3845D2D6DEED6206BC673BCAFFCFD6D839974C * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowGizmos { get => showGizmos; set => showGizmos = value; }
		bool L_0 = __this->get_showGizmos_4();
		return L_0;
	}
}
// System.Void VRM.FastSpringBones.Components.FastSpringBoneScheduler::set_ShowGizmos(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastSpringBoneScheduler_set_ShowGizmos_m3A3C305D1476B710AF540AB98934AD7C55EA5BDF (FastSpringBoneScheduler_t5E3845D2D6DEED6206BC673BCAFFCFD6D839974C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ShowGizmos { get => showGizmos; set => showGizmos = value; }
		bool L_0 = ___value0;
		__this->set_showGizmos_4(L_0);
		return;
	}
}
// System.Void VRM.FastSpringBones.Components.FastSpringBoneScheduler::Initialize(VRM.FastSpringBones.Registries.RootBoneRegistry,VRM.FastSpringBones.Registries.TransformRegistry,VRM.FastSpringBones.Registries.ColliderGroupRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastSpringBoneScheduler_Initialize_mA771C39FC4E60EF6D3C0C3A0B7624DBBDC4F931A (FastSpringBoneScheduler_t5E3845D2D6DEED6206BC673BCAFFCFD6D839974C * __this, RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 * ___rootBoneRegistry0, TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * ___transformRegistry1, ColliderGroupRegistry_t999F00E4395E09F2F8D26FCFE67FC1015BC0F92D * ___colliderGroupRegistry2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastSpringBoneScheduler_OnRootBoneChanged_m4381C13CD8FCEAA03C5DAF3E7751E7449F007CBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Registry_1_SubscribeOnValueChanged_m5803472941F18EC782B5FD29B310F112036580F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45AF9F1D53CE24112610F66A0E24829FFA5E0746);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rootBoneRegistry = rootBoneRegistry;
		RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 * L_0 = ___rootBoneRegistry0;
		__this->set__rootBoneRegistry_9(L_0);
		// _colliderGroupRegistry = colliderGroupRegistry;
		ColliderGroupRegistry_t999F00E4395E09F2F8D26FCFE67FC1015BC0F92D * L_1 = ___colliderGroupRegistry2;
		__this->set__colliderGroupRegistry_10(L_1);
		// _updateSampler = CustomSampler.Create("FastSpringBone(Update)");
		IL2CPP_RUNTIME_CLASS_INIT(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24_il2cpp_TypeInfo_var);
		CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * L_2;
		L_2 = CustomSampler_Create_m9010A07C27FDDC7ECC2065AFA232BBDC6955C1E6(_stringLiteral45AF9F1D53CE24112610F66A0E24829FFA5E0746, (bool)0, /*hidden argument*/NULL);
		__this->set__updateSampler_5(L_2);
		// _pullTransformJobScheduler = new PullTransformJobScheduler(transformRegistry);
		TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * L_3 = ___transformRegistry1;
		PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4 * L_4 = (PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4 *)il2cpp_codegen_object_new(PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4_il2cpp_TypeInfo_var);
		PullTransformJobScheduler__ctor_m6A4A71CBF8593E1CC0BCFE51744597AC8B68ABB9(L_4, L_3, /*hidden argument*/NULL);
		__this->set__pullTransformJobScheduler_6(L_4);
		// _pushTransformJobScheduler = new PushTransformJobScheduler(transformRegistry);
		TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * L_5 = ___transformRegistry1;
		PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF * L_6 = (PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF *)il2cpp_codegen_object_new(PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF_il2cpp_TypeInfo_var);
		PushTransformJobScheduler__ctor_mC29016A625AF618529D40AED57B21D828B5CDEFB(L_6, L_5, /*hidden argument*/NULL);
		__this->set__pushTransformJobScheduler_7(L_6);
		// _updateSpringBoneJobScheduler = new UpdateSpringBoneJobScheduler(_rootBoneRegistry);
		RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 * L_7 = __this->get__rootBoneRegistry_9();
		UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506 * L_8 = (UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506 *)il2cpp_codegen_object_new(UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506_il2cpp_TypeInfo_var);
		UpdateSpringBoneJobScheduler__ctor_mD9558513F826C00BE8E9ED3FEC827132A19E858C(L_8, L_7, /*hidden argument*/NULL);
		__this->set__updateSpringBoneJobScheduler_8(L_8);
		// _rootBoneRegistry.SubscribeOnValueChanged(OnRootBoneChanged);
		RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 * L_9 = __this->get__rootBoneRegistry_9();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_10, __this, (intptr_t)((intptr_t)FastSpringBoneScheduler_OnRootBoneChanged_m4381C13CD8FCEAA03C5DAF3E7751E7449F007CBF_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		Registry_1_SubscribeOnValueChanged_m5803472941F18EC782B5FD29B310F112036580F0(L_9, L_10, /*hidden argument*/Registry_1_SubscribeOnValueChanged_m5803472941F18EC782B5FD29B310F112036580F0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.Components.FastSpringBoneScheduler::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastSpringBoneScheduler_OnDestroy_mC02A6A45F8B300C6385509B7CD1F44C5052F3A21 (FastSpringBoneScheduler_t5E3845D2D6DEED6206BC673BCAFFCFD6D839974C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastSpringBoneScheduler_OnRootBoneChanged_m4381C13CD8FCEAA03C5DAF3E7751E7449F007CBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Registry_1_UnSubscribeOnValueChanged_m2C6BFE4E58FA82AF815A5E56832C076BE8F7F1BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rootBoneRegistry.UnSubscribeOnValueChanged(OnRootBoneChanged);
		RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 * L_0 = __this->get__rootBoneRegistry_9();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_1, __this, (intptr_t)((intptr_t)FastSpringBoneScheduler_OnRootBoneChanged_m4381C13CD8FCEAA03C5DAF3E7751E7449F007CBF_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		Registry_1_UnSubscribeOnValueChanged_m2C6BFE4E58FA82AF815A5E56832C076BE8F7F1BB(L_0, L_1, /*hidden argument*/Registry_1_UnSubscribeOnValueChanged_m2C6BFE4E58FA82AF815A5E56832C076BE8F7F1BB_RuntimeMethod_var);
		// _prevJobHandle.Complete();
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 * L_2 = __this->get_address_of__prevJobHandle_11();
		JobHandle_Complete_m947DF01E0F87C3B0A24AECEBF72D245A6CDBE148((JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 *)L_2, /*hidden argument*/NULL);
		// _pullTransformJobScheduler.Dispose();
		PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4 * L_3 = __this->get__pullTransformJobScheduler_6();
		NullCheck(L_3);
		PullTransformJobScheduler_Dispose_mAD3B8D444EA8FE50A0AF1743E97989031B2C880E(L_3, /*hidden argument*/NULL);
		// _pushTransformJobScheduler.Dispose();
		PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF * L_4 = __this->get__pushTransformJobScheduler_7();
		NullCheck(L_4);
		PushTransformJobScheduler_Dispose_mD63F7F73B0047896FFE383F9EE221A6058FED70D(L_4, /*hidden argument*/NULL);
		// _updateSpringBoneJobScheduler.Dispose();
		UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506 * L_5 = __this->get__updateSpringBoneJobScheduler_8();
		NullCheck(L_5);
		UpdateSpringBoneJobScheduler_Dispose_mBD305D394475D00A5C263B3BD853E895CEC203EA(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.Components.FastSpringBoneScheduler::OnRootBoneChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastSpringBoneScheduler_OnRootBoneChanged_m4381C13CD8FCEAA03C5DAF3E7751E7449F007CBF (FastSpringBoneScheduler_t5E3845D2D6DEED6206BC673BCAFFCFD6D839974C * __this, const RuntimeMethod* method)
{
	{
		// _prevJobHandle.Complete();
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 * L_0 = __this->get_address_of__prevJobHandle_11();
		JobHandle_Complete_m947DF01E0F87C3B0A24AECEBF72D245A6CDBE148((JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 *)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.Components.FastSpringBoneScheduler::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastSpringBoneScheduler_LateUpdate_mB76D89EEE6CA985F4A174B8B0768BF89E3DFFA69 (FastSpringBoneScheduler_t5E3845D2D6DEED6206BC673BCAFFCFD6D839974C * __this, const RuntimeMethod* method)
{
	JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _prevJobHandle.Complete();
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 * L_0 = __this->get_address_of__prevJobHandle_11();
		JobHandle_Complete_m947DF01E0F87C3B0A24AECEBF72D245A6CDBE148((JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 *)L_0, /*hidden argument*/NULL);
		// var tempJobHandle = default(JobHandle);
		il2cpp_codegen_initobj((&V_0), sizeof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 ));
		// tempJobHandle = _pullTransformJobScheduler.Schedule(tempJobHandle);
		PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4 * L_1 = __this->get__pullTransformJobScheduler_6();
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_2 = V_0;
		NullCheck(L_1);
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_3;
		L_3 = PullTransformJobScheduler_Schedule_m8320273DB84A5C98E131EBA647C94F6E5751D75D(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// tempJobHandle = _updateSpringBoneJobScheduler.Schedule(tempJobHandle);
		UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506 * L_4 = __this->get__updateSpringBoneJobScheduler_8();
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_5 = V_0;
		NullCheck(L_4);
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_6;
		L_6 = UpdateSpringBoneJobScheduler_Schedule_mFD182F937447357A2593863541268E930730B64C(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// tempJobHandle = _pushTransformJobScheduler.Schedule(tempJobHandle);
		PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF * L_7 = __this->get__pushTransformJobScheduler_7();
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_8 = V_0;
		NullCheck(L_7);
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_9;
		L_9 = PushTransformJobScheduler_Schedule_mB1ADC56FAFDE65A7767E853886C6B3680F433BC5(L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// _prevJobHandle = tempJobHandle;
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_10 = V_0;
		__this->set__prevJobHandle_11(L_10);
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.Components.FastSpringBoneScheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastSpringBoneScheduler__ctor_mD6BAE1815BD92EF3CB5BAA155C1822793D45133F (FastSpringBoneScheduler_t5E3845D2D6DEED6206BC673BCAFFCFD6D839974C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VRM.FastSpringBones.Components.FastSpringRootBone::.ctor(VRM.FastSpringBones.Registries.TransformRegistry,UnityEngine.Transform,VRM.FastSpringBones.Registries.RootBoneRegistry,VRM.FastSpringBones.Registries.ColliderGroupRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastSpringRootBone__ctor_mA718FB4D5460E5DA1417DFCCDBE776D7F8EBA609 (FastSpringRootBone_t102F94B147FA22D317CCDEE04CB76A3E213A6CC8 * __this, TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * ___transformRegistry0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform1, RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 * ___rootBoneRegistry2, ColliderGroupRegistry_t999F00E4395E09F2F8D26FCFE67FC1015BC0F92D * ___colliderGroupRegistry3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m10C91054A72FA12AC2D2F4EF8E206A6FFCB42DF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3018BF89B67578F1174A277BC6085C0B6BD0653A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t78A352A91F1F8984458AF2C9F03E9E67B435E965_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly IList<NativeTransform> _transformWrappers = new List<NativeTransform>();
		List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * L_0 = (List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE *)il2cpp_codegen_object_new(List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE_il2cpp_TypeInfo_var);
		List_1__ctor_m10C91054A72FA12AC2D2F4EF8E206A6FFCB42DF1(L_0, /*hidden argument*/List_1__ctor_m10C91054A72FA12AC2D2F4EF8E206A6FFCB42DF1_RuntimeMethod_var);
		__this->set__transformWrappers_10(L_0);
		// private readonly IList<NativePointer<BlittablePoint>> _points = new List<NativePointer<BlittablePoint>>();
		List_1_t78A352A91F1F8984458AF2C9F03E9E67B435E965 * L_1 = (List_1_t78A352A91F1F8984458AF2C9F03E9E67B435E965 *)il2cpp_codegen_object_new(List_1_t78A352A91F1F8984458AF2C9F03E9E67B435E965_il2cpp_TypeInfo_var);
		List_1__ctor_m3018BF89B67578F1174A277BC6085C0B6BD0653A(L_1, /*hidden argument*/List_1__ctor_m3018BF89B67578F1174A277BC6085C0B6BD0653A_RuntimeMethod_var);
		__this->set__points_11(L_1);
		// public FastSpringRootBone(
		//     TransformRegistry transformRegistry,
		//     Transform transform,
		//     RootBoneRegistry rootBoneRegistry,
		//     ColliderGroupRegistry colliderGroupRegistry
		// )
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _transformRegistry = transformRegistry;
		TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * L_2 = ___transformRegistry0;
		__this->set__transformRegistry_0(L_2);
		// _transform = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ___transform1;
		__this->set__transform_3(L_3);
		// _rootBoneRegistry = rootBoneRegistry;
		RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 * L_4 = ___rootBoneRegistry2;
		__this->set__rootBoneRegistry_1(L_4);
		// _colliderGroupRegistry = colliderGroupRegistry;
		ColliderGroupRegistry_t999F00E4395E09F2F8D26FCFE67FC1015BC0F92D * L_5 = ___colliderGroupRegistry3;
		__this->set__colliderGroupRegistry_2(L_5);
		// }
		return;
	}
}
// System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.Components.FastSpringBoneColliderGroup> VRM.FastSpringBones.Components.FastSpringRootBone::get_ColliderGroups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FastSpringRootBone_get_ColliderGroups_m2DD1757B33DAD20BC8360480E0B3C775B2F18AF2 (FastSpringRootBone_t102F94B147FA22D317CCDEE04CB76A3E213A6CC8 * __this, const RuntimeMethod* method)
{
	{
		// get => _nativeColliderGroups.ColliderGroups;
		NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * L_0 = __this->get__nativeColliderGroups_7();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = NativeColliderGroups_get_ColliderGroups_m3B73743E3A75C21A8BD8D424F11CB6CDCBDDDDB2_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void VRM.FastSpringBones.Components.FastSpringRootBone::set_ColliderGroups(System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.Components.FastSpringBoneColliderGroup>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastSpringRootBone_set_ColliderGroups_mC046D0D80BFCF32B228B814C1EE4C4EDD40A7B22 (FastSpringRootBone_t102F94B147FA22D317CCDEE04CB76A3E213A6CC8 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// set => _nativeColliderGroups.ColliderGroups = value;
		NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * L_0 = __this->get__nativeColliderGroups_7();
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		NativeColliderGroups_set_ColliderGroups_m42195BCDF7FD8612A86936300C8EDDCAE9D3B6D9(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VRM.FastSpringBones.Components.FastSpringRootBone::Initialize(System.Single,UnityEngine.Vector3,System.Single,System.Single,System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.Components.FastSpringBoneColliderGroup>,System.Single,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastSpringRootBone_Initialize_mA78EF57A10748C1E83EC2E037511585C5C934637 (FastSpringRootBone_t102F94B147FA22D317CCDEE04CB76A3E213A6CC8 * __this, float ___gravityPower0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___gravityDir1, float ___dragForce2, float ___stiffnessForce3, RuntimeObject* ___colliderGroups4, float ___radius5, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___center6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1__ctor_m3DD6AAF8BC1050A5E4D3A67EFD4EF84EBBB4B2EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePoints_tF458244EDF35A600E87E85F491D880B84043E0BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Registry_1_Register_m63E38BCEBA6B466AA5EF9D1F94B763A64FC3CAA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Registry_1_Register_mDED59D567899CAC235E8ACE428E70748393613E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * V_0 = NULL;
	{
		// _radius = radius;
		float L_0 = ___radius5;
		__this->set__radius_4(L_0);
		// if (center != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___center6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// _center = new NativeTransform(_transformRegistry, TransformSynchronizationType.PullOnly, center);
		TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * L_3 = __this->get__transformRegistry_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = ___center6;
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_5 = (NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 *)il2cpp_codegen_object_new(NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91_il2cpp_TypeInfo_var);
		NativeTransform__ctor_m5622E3BE7F5ED43E5B37BD4447A8E34A41AC276F(L_5, L_3, 0, L_4, (NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 *)NULL, /*hidden argument*/NULL);
		__this->set__center_5(L_5);
	}

IL_0027:
	{
		// _nativeColliderGroups = new NativeColliderGroups(colliderGroups);
		RuntimeObject* L_6 = ___colliderGroups4;
		NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * L_7 = (NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 *)il2cpp_codegen_object_new(NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212_il2cpp_TypeInfo_var);
		NativeColliderGroups__ctor_m1A85F5340E5C4DCCF8D84F0B6EB14FD6CBD4B603(L_7, L_6, /*hidden argument*/NULL);
		__this->set__nativeColliderGroups_7(L_7);
		// NativeTransform parent = null;
		V_0 = (NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 *)NULL;
		// if (_transform.parent)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get__transform_3();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}
	{
		// parent = new NativeTransform(_transformRegistry, TransformSynchronizationType.PullOnly, _transform.parent);
		TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * L_11 = __this->get__transformRegistry_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = __this->get__transform_3();
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_12, /*hidden argument*/NULL);
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_14 = (NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 *)il2cpp_codegen_object_new(NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91_il2cpp_TypeInfo_var);
		NativeTransform__ctor_m5622E3BE7F5ED43E5B37BD4447A8E34A41AC276F(L_14, L_11, 0, L_13, (NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 *)NULL, /*hidden argument*/NULL);
		V_0 = L_14;
	}

IL_0061:
	{
		// SetupRecursive(_transform, parent);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get__transform_3();
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_16 = V_0;
		FastSpringRootBone_SetupRecursive_m0D4BDBEBBCCD73FC2831ECBC2A3947EB1027B6F0(__this, L_15, L_16, /*hidden argument*/NULL);
		// _nativePoints = new NativePoints(_points);
		RuntimeObject* L_17 = __this->get__points_11();
		NativePoints_tF458244EDF35A600E87E85F491D880B84043E0BF * L_18 = (NativePoints_tF458244EDF35A600E87E85F491D880B84043E0BF *)il2cpp_codegen_object_new(NativePoints_tF458244EDF35A600E87E85F491D880B84043E0BF_il2cpp_TypeInfo_var);
		NativePoints__ctor_mBCE418348D1330DAF2DE1E8E9D097F0AB7FB21B0(L_18, L_17, /*hidden argument*/NULL);
		__this->set__nativePoints_8(L_18);
		// _rootBoneWrapper = new NativePointer<BlittableRootBone>(new BlittableRootBone(gravityPower, gravityDir, dragForce, stiffnessForce, _nativePoints.GetUnsafePtr()));
		float L_19 = ___gravityPower0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___gravityDir1;
		float L_21 = ___dragForce2;
		float L_22 = ___stiffnessForce3;
		NativePoints_tF458244EDF35A600E87E85F491D880B84043E0BF * L_23 = __this->get__nativePoints_8();
		NullCheck(L_23);
		BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * L_24;
		L_24 = NativePoints_GetUnsafePtr_mE51A68572188AB50541AE29AF8FE2B8A3D32D088(L_23, /*hidden argument*/NULL);
		BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6  L_25;
		memset((&L_25), 0, sizeof(L_25));
		BlittableRootBone__ctor_m7E6536F9C4BAB18919678F06C8C69BB0BEC1FAF5((&L_25), L_19, L_20, L_21, L_22, (BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *)(BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *)L_24, /*hidden argument*/NULL);
		NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC * L_26 = (NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC *)il2cpp_codegen_object_new(NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC_il2cpp_TypeInfo_var);
		NativePointer_1__ctor_m3DD6AAF8BC1050A5E4D3A67EFD4EF84EBBB4B2EE(L_26, L_25, /*hidden argument*/NativePointer_1__ctor_m3DD6AAF8BC1050A5E4D3A67EFD4EF84EBBB4B2EE_RuntimeMethod_var);
		__this->set__rootBoneWrapper_9(L_26);
		// _rootBoneRegistry.Register(_rootBoneWrapper);
		RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 * L_27 = __this->get__rootBoneRegistry_1();
		NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC * L_28 = __this->get__rootBoneWrapper_9();
		NullCheck(L_27);
		Registry_1_Register_m63E38BCEBA6B466AA5EF9D1F94B763A64FC3CAA5(L_27, L_28, /*hidden argument*/Registry_1_Register_m63E38BCEBA6B466AA5EF9D1F94B763A64FC3CAA5_RuntimeMethod_var);
		// _colliderGroupRegistry.Register(_nativeColliderGroups);
		ColliderGroupRegistry_t999F00E4395E09F2F8D26FCFE67FC1015BC0F92D * L_29 = __this->get__colliderGroupRegistry_2();
		NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * L_30 = __this->get__nativeColliderGroups_7();
		NullCheck(L_29);
		Registry_1_Register_mDED59D567899CAC235E8ACE428E70748393613E1(L_29, L_30, /*hidden argument*/Registry_1_Register_mDED59D567899CAC235E8ACE428E70748393613E1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.Components.FastSpringRootBone::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastSpringRootBone_Dispose_mB9D06799158CDCB0BECCD0581CE87FB020F30ED3 (FastSpringRootBone_t102F94B147FA22D317CCDEE04CB76A3E213A6CC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t91DFC46BFB820D5C49491C3C300B91505F49374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tC1C0A5CC0B79ECD7ECB38EA1A06239CDD3CF64F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t08C35294A1FCE87761C6D57E7A3C8E112251FD52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA62BFE4C13650B9186769FB292FC01255FBD19C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1_Dispose_m3C821A6A81377B9E507E4214B67E3A2021DF841D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1_Dispose_m7C01E25068431FCB4D400792073C190EDE4082CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Registry_1_Unregister_m5969B0EC606555E05745AC98B53349ECF1182486_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Registry_1_Unregister_m986D6031D2A6D298B89C24BAEA728343B6B2B67A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * G_B18_0 = NULL;
	NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * G_B17_0 = NULL;
	NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * G_B21_0 = NULL;
	NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * G_B20_0 = NULL;
	{
		// _colliderGroupRegistry.Unregister(_nativeColliderGroups);
		ColliderGroupRegistry_t999F00E4395E09F2F8D26FCFE67FC1015BC0F92D * L_0 = __this->get__colliderGroupRegistry_2();
		NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * L_1 = __this->get__nativeColliderGroups_7();
		NullCheck(L_0);
		Registry_1_Unregister_m5969B0EC606555E05745AC98B53349ECF1182486(L_0, L_1, /*hidden argument*/Registry_1_Unregister_m5969B0EC606555E05745AC98B53349ECF1182486_RuntimeMethod_var);
		// _rootBoneRegistry.Unregister(_rootBoneWrapper);
		RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 * L_2 = __this->get__rootBoneRegistry_1();
		NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC * L_3 = __this->get__rootBoneWrapper_9();
		NullCheck(L_2);
		Registry_1_Unregister_m986D6031D2A6D298B89C24BAEA728343B6B2B67A(L_2, L_3, /*hidden argument*/Registry_1_Unregister_m986D6031D2A6D298B89C24BAEA728343B6B2B67A_RuntimeMethod_var);
		// foreach (var transformWrapper in _transformWrappers)
		RuntimeObject* L_4 = __this->get__transformWrappers_10();
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<VRM.FastSpringBones.NativeWrappers.NativeTransform>::GetEnumerator() */, IEnumerable_1_t91DFC46BFB820D5C49491C3C300B91505F49374B_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_0030:
		{
			// foreach (var transformWrapper in _transformWrappers)
			RuntimeObject* L_6 = V_0;
			NullCheck(L_6);
			NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_7;
			L_7 = InterfaceFuncInvoker0< NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<VRM.FastSpringBones.NativeWrappers.NativeTransform>::get_Current() */, IEnumerator_1_tA62BFE4C13650B9186769FB292FC01255FBD19C8_il2cpp_TypeInfo_var, L_6);
			// transformWrapper.Dispose();
			NullCheck(L_7);
			NativeTransform_Dispose_m0A492076F13E995F79D526F28004826EB3D6017E(L_7, /*hidden argument*/NULL);
		}

IL_003b:
		{
			// foreach (var transformWrapper in _transformWrappers)
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			bool L_9;
			L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_0030;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_0;
			if (!L_10)
			{
				goto IL_004e;
			}
		}

IL_0048:
		{
			RuntimeObject* L_11 = V_0;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_11);
		}

IL_004e:
		{
			IL2CPP_END_FINALLY(69)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
	}

IL_004f:
	{
		// foreach (var point in _points)
		RuntimeObject* L_12 = __this->get__points_11();
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoint>>::GetEnumerator() */, IEnumerable_1_tC1C0A5CC0B79ECD7ECB38EA1A06239CDD3CF64F6_il2cpp_TypeInfo_var, L_12);
		V_1 = L_13;
	}

IL_005b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0068;
		}

IL_005d:
		{
			// foreach (var point in _points)
			RuntimeObject* L_14 = V_1;
			NullCheck(L_14);
			NativePointer_1_tAE35E054C215345560990C73548E2C5418E78EEB * L_15;
			L_15 = InterfaceFuncInvoker0< NativePointer_1_tAE35E054C215345560990C73548E2C5418E78EEB * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoint>>::get_Current() */, IEnumerator_1_t08C35294A1FCE87761C6D57E7A3C8E112251FD52_il2cpp_TypeInfo_var, L_14);
			// point.Dispose();
			NullCheck(L_15);
			NativePointer_1_Dispose_m7C01E25068431FCB4D400792073C190EDE4082CF(L_15, /*hidden argument*/NativePointer_1_Dispose_m7C01E25068431FCB4D400792073C190EDE4082CF_RuntimeMethod_var);
		}

IL_0068:
		{
			// foreach (var point in _points)
			RuntimeObject* L_16 = V_1;
			NullCheck(L_16);
			bool L_17;
			L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_16);
			if (L_17)
			{
				goto IL_005d;
			}
		}

IL_0070:
		{
			IL2CPP_LEAVE(0x7C, FINALLY_0072);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0072;
	}

FINALLY_0072:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_18 = V_1;
			if (!L_18)
			{
				goto IL_007b;
			}
		}

IL_0075:
		{
			RuntimeObject* L_19 = V_1;
			NullCheck(L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_19);
		}

IL_007b:
		{
			IL2CPP_END_FINALLY(114)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(114)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
	}

IL_007c:
	{
		// _center?.Dispose();
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_20 = __this->get__center_5();
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_21 = L_20;
		G_B17_0 = L_21;
		if (L_21)
		{
			G_B18_0 = L_21;
			goto IL_0088;
		}
	}
	{
		goto IL_008d;
	}

IL_0088:
	{
		NullCheck(G_B18_0);
		NativeTransform_Dispose_m0A492076F13E995F79D526F28004826EB3D6017E(G_B18_0, /*hidden argument*/NULL);
	}

IL_008d:
	{
		// _nativeColliderGroups?.Dispose();
		NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * L_22 = __this->get__nativeColliderGroups_7();
		NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * L_23 = L_22;
		G_B20_0 = L_23;
		if (L_23)
		{
			G_B21_0 = L_23;
			goto IL_0099;
		}
	}
	{
		goto IL_009e;
	}

IL_0099:
	{
		NullCheck(G_B21_0);
		NativeColliderGroups_Dispose_mF53752CDE16818114CC04E8BAEA79BA2C031B1D2(G_B21_0, /*hidden argument*/NULL);
	}

IL_009e:
	{
		// _nativePoints.Dispose();
		NativePoints_tF458244EDF35A600E87E85F491D880B84043E0BF * L_24 = __this->get__nativePoints_8();
		NullCheck(L_24);
		NativePoints_Dispose_m7EA4DC62343AF4B557065DC3148367B7F67CCB88(L_24, /*hidden argument*/NULL);
		// _rootBoneWrapper.Dispose();
		NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC * L_25 = __this->get__rootBoneWrapper_9();
		NullCheck(L_25);
		NativePointer_1_Dispose_m3C821A6A81377B9E507E4214B67E3A2021DF841D(L_25, /*hidden argument*/NativePointer_1_Dispose_m3C821A6A81377B9E507E4214B67E3A2021DF841D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.Components.FastSpringRootBone::SetupRecursive(UnityEngine.Transform,VRM.FastSpringBones.NativeWrappers.NativeTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastSpringRootBone_SetupRecursive_m0D4BDBEBBCCD73FC2831ECBC2A3947EB1027B6F0 (FastSpringRootBone_t102F94B147FA22D317CCDEE04CB76A3E213A6CC8 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___trs0, NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * ___parent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t02D3F183FE3CD1C51B8F90700ABFBFE5F3A5F0BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t377868E014FDB47AC84B9665F2D8E497650C057E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1__ctor_m9EA2F75E1F5E313FDE04F222AB0AC8C8B960B9AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1_tAE35E054C215345560990C73548E2C5418E78EEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * V_0 = NULL;
	NativePointer_1_tAE35E054C215345560990C73548E2C5418E78EEB * V_1 = NULL;
	int32_t V_2 = 0;
	float G_B2_0 = 0.0f;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B2_1 = NULL;
	float G_B1_0 = 0.0f;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B1_1 = NULL;
	uintptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	float G_B3_1 = 0.0f;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B3_2 = NULL;
	{
		// var transformWrapper = new NativeTransform(_transformRegistry, TransformSynchronizationType.PushOnly, trs, parent);
		TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * L_0 = __this->get__transformRegistry_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ___trs0;
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_2 = ___parent1;
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_3 = (NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 *)il2cpp_codegen_object_new(NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91_il2cpp_TypeInfo_var);
		NativeTransform__ctor_m5622E3BE7F5ED43E5B37BD4447A8E34A41AC276F(L_3, L_0, 1, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// _transformWrappers.Add(transformWrapper);
		RuntimeObject* L_4 = __this->get__transformWrappers_10();
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_5 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker1< NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<VRM.FastSpringBones.NativeWrappers.NativeTransform>::Add(!0) */, ICollection_1_t02D3F183FE3CD1C51B8F90700ABFBFE5F3A5F0BF_il2cpp_TypeInfo_var, L_4, L_5);
		// var point = new NativePointer<BlittablePoint>(
		//     new BlittablePoint(
		//         trs,
		//         _radius,
		//         _center != null ? _center.GetUnsafePtr() : null,
		//         _nativeColliderGroups.GetUnsafePtr(),
		//         transformWrapper.GetUnsafePtr())
		// );
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = ___trs0;
		float L_7 = __this->get__radius_4();
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_8 = __this->get__center_5();
		G_B1_0 = L_7;
		G_B1_1 = L_6;
		if (L_8)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_6;
			goto IL_002e;
		}
	}
	{
		G_B3_0 = ((uintptr_t)0);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0039;
	}

IL_002e:
	{
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_9 = __this->get__center_5();
		NullCheck(L_9);
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_10;
		L_10 = NativeTransform_GetUnsafePtr_m6E9BA2A811A7B72CF5635CD75F335C45E51C7041(L_9, /*hidden argument*/NULL);
		G_B3_0 = ((uintptr_t)(intptr_t)(L_10));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0039:
	{
		NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * L_11 = __this->get__nativeColliderGroups_7();
		NullCheck(L_11);
		BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * L_12;
		L_12 = NativeColliderGroups_GetUnsafePtr_m35233F667FE8B51823F44013CB32A7A979BAF6C5(L_11, /*hidden argument*/NULL);
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_13 = V_0;
		NullCheck(L_13);
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_14;
		L_14 = NativeTransform_GetUnsafePtr_m6E9BA2A811A7B72CF5635CD75F335C45E51C7041(L_13, /*hidden argument*/NULL);
		BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A  L_15;
		memset((&L_15), 0, sizeof(L_15));
		BlittablePoint__ctor_mAD71864DDC5EA8ABCF6AE97DC73ECDDAD5331DA8((&L_15), G_B3_2, G_B3_1, (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)G_B3_0, (BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 *)(BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 *)L_12, (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)L_14, /*hidden argument*/NULL);
		NativePointer_1_tAE35E054C215345560990C73548E2C5418E78EEB * L_16 = (NativePointer_1_tAE35E054C215345560990C73548E2C5418E78EEB *)il2cpp_codegen_object_new(NativePointer_1_tAE35E054C215345560990C73548E2C5418E78EEB_il2cpp_TypeInfo_var);
		NativePointer_1__ctor_m9EA2F75E1F5E313FDE04F222AB0AC8C8B960B9AB(L_16, L_15, /*hidden argument*/NativePointer_1__ctor_m9EA2F75E1F5E313FDE04F222AB0AC8C8B960B9AB_RuntimeMethod_var);
		V_1 = L_16;
		// _points.Add(point);
		RuntimeObject* L_17 = __this->get__points_11();
		NativePointer_1_tAE35E054C215345560990C73548E2C5418E78EEB * L_18 = V_1;
		NullCheck(L_17);
		InterfaceActionInvoker1< NativePointer_1_tAE35E054C215345560990C73548E2C5418E78EEB * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoint>>::Add(!0) */, ICollection_1_t377868E014FDB47AC84B9665F2D8E497650C057E_il2cpp_TypeInfo_var, L_17, L_18);
		// for (var i = 0; i < trs.childCount; ++i)
		V_2 = 0;
		goto IL_0077;
	}

IL_0065:
	{
		// SetupRecursive(trs.GetChild(i), transformWrapper);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = ___trs0;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_19, L_20, /*hidden argument*/NULL);
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_22 = V_0;
		FastSpringRootBone_SetupRecursive_m0D4BDBEBBCCD73FC2831ECBC2A3947EB1027B6F0(__this, L_21, L_22, /*hidden argument*/NULL);
		// for (var i = 0; i < trs.childCount; ++i)
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0077:
	{
		// for (var i = 0; i < trs.childCount; ++i)
		int32_t L_24 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25 = ___trs0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0065;
		}
	}
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m9C56430DF3C08000C827354D968A209A4657B329 (IsReadOnlyAttribute_tDD88F07104FAB5096D8C58BF8DA4F8E423E48925 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.IsUnmanagedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsUnmanagedAttribute__ctor_m9729656A56F0C93E6F8AAB9E41545099BB19B134 (IsUnmanagedAttribute_tD4E6DE53B78FF1743884ADFF99CEDFFA6407F7E7 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<VRM.FastSpringBones.Blittables.BlittableCollider> VRM.FastSpringBones.NativeWrappers.NativeColliderGroup::get_Colliders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F  NativeColliderGroup_get_Colliders_m771DBEE4EFD0768B02440F77D49DC3C9846D6109 (NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B * __this, const RuntimeMethod* method)
{
	{
		// private NativeArray<BlittableCollider> Colliders { get; }
		NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F  L_0 = __this->get_U3CCollidersU3Ek__BackingField_1();
		return L_0;
	}
}
// VRM.FastSpringBones.Blittables.BlittableColliderGroup* VRM.FastSpringBones.NativeWrappers.NativeColliderGroup::GetUnsafePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * NativeColliderGroup_GetUnsafePtr_m135F8F3523979BD5B9D8BEE4E4C8163F50B45D4F (NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1_GetUnsafePtr_m3BFD7CC15F4826354FD480A540A6D7259908328A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public BlittableColliderGroup* GetUnsafePtr() => _nativePointer.GetUnsafePtr();
		NativePointer_1_tB3554FDF5108BEDECE546ECC595BC12EC64F8F74 * L_0 = __this->get__nativePointer_0();
		NullCheck(L_0);
		BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * L_1;
		L_1 = NativePointer_1_GetUnsafePtr_m3BFD7CC15F4826354FD480A540A6D7259908328A_inline(L_0, /*hidden argument*/NativePointer_1_GetUnsafePtr_m3BFD7CC15F4826354FD480A540A6D7259908328A_RuntimeMethod_var);
		return (BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E *)(L_1);
	}
}
// System.Void VRM.FastSpringBones.NativeWrappers.NativeColliderGroup::.ctor(VRM.FastSpringBones.Blittables.BlittableCollider[],VRM.FastSpringBones.NativeWrappers.NativeTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeColliderGroup__ctor_m64105BE9A90D5C6552A01D281BA9DCEB4226718C (NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B * __this, BlittableColliderU5BU5D_t6F7A13492F46D2051CDDA4A50D78F5D51625F1A8* ___colliders0, NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * ___nativeTransform1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m21191AD078CD392FD4D47FBB4C5F892A3C8AE523_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1__ctor_m67B685A33CCB1AC3A5031A1F8665AF125815CBC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1_tB3554FDF5108BEDECE546ECC595BC12EC64F8F74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NativeColliderGroup(BlittableCollider[] colliders, NativeTransform nativeTransform)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Colliders = new NativeArray<BlittableCollider>(colliders, Allocator.Persistent);
		BlittableColliderU5BU5D_t6F7A13492F46D2051CDDA4A50D78F5D51625F1A8* L_0 = ___colliders0;
		NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeArray_1__ctor_m21191AD078CD392FD4D47FBB4C5F892A3C8AE523((&L_1), L_0, 4, /*hidden argument*/NativeArray_1__ctor_m21191AD078CD392FD4D47FBB4C5F892A3C8AE523_RuntimeMethod_var);
		__this->set_U3CCollidersU3Ek__BackingField_1(L_1);
		// _nativePointer = new NativePointer<BlittableColliderGroup>(new BlittableColliderGroup(Colliders, nativeTransform.GetUnsafePtr()));
		NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F  L_2;
		L_2 = NativeColliderGroup_get_Colliders_m771DBEE4EFD0768B02440F77D49DC3C9846D6109_inline(__this, /*hidden argument*/NULL);
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_3 = ___nativeTransform1;
		NullCheck(L_3);
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_4;
		L_4 = NativeTransform_GetUnsafePtr_m6E9BA2A811A7B72CF5635CD75F335C45E51C7041(L_3, /*hidden argument*/NULL);
		BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		BlittableColliderGroup__ctor_m89AB32EC4CB097AB42DFE1F63D97213A62CAE88E((&L_5), L_2, (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)L_4, /*hidden argument*/NULL);
		NativePointer_1_tB3554FDF5108BEDECE546ECC595BC12EC64F8F74 * L_6 = (NativePointer_1_tB3554FDF5108BEDECE546ECC595BC12EC64F8F74 *)il2cpp_codegen_object_new(NativePointer_1_tB3554FDF5108BEDECE546ECC595BC12EC64F8F74_il2cpp_TypeInfo_var);
		NativePointer_1__ctor_m67B685A33CCB1AC3A5031A1F8665AF125815CBC9(L_6, L_5, /*hidden argument*/NativePointer_1__ctor_m67B685A33CCB1AC3A5031A1F8665AF125815CBC9_RuntimeMethod_var);
		__this->set__nativePointer_0(L_6);
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.NativeWrappers.NativeColliderGroup::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeColliderGroup_Dispose_m5C4695E82B9AEA44D7A96329C9D54519E0267860 (NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m9A2053C4C1283ECDB4A4F1FAC79B74023C75C346_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mA5FAE780587803D0C5EED530ABC943E542782681_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1_Dispose_m3FD3149D29CDC275C9011761599F84BADCE310ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Colliders.IsCreated) Colliders.Dispose();
		NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F  L_0;
		L_0 = NativeColliderGroup_get_Colliders_m771DBEE4EFD0768B02440F77D49DC3C9846D6109_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mA5FAE780587803D0C5EED530ABC943E542782681((NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F *)(&V_0), /*hidden argument*/NativeArray_1_get_IsCreated_mA5FAE780587803D0C5EED530ABC943E542782681_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// if (Colliders.IsCreated) Colliders.Dispose();
		NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F  L_2;
		L_2 = NativeColliderGroup_get_Colliders_m771DBEE4EFD0768B02440F77D49DC3C9846D6109_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		NativeArray_1_Dispose_m9A2053C4C1283ECDB4A4F1FAC79B74023C75C346((NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F *)(&V_0), /*hidden argument*/NativeArray_1_Dispose_m9A2053C4C1283ECDB4A4F1FAC79B74023C75C346_RuntimeMethod_var);
	}

IL_001e:
	{
		// _nativePointer.Dispose();
		NativePointer_1_tB3554FDF5108BEDECE546ECC595BC12EC64F8F74 * L_3 = __this->get__nativePointer_0();
		NullCheck(L_3);
		NativePointer_1_Dispose_m3FD3149D29CDC275C9011761599F84BADCE310ED(L_3, /*hidden argument*/NativePointer_1_Dispose_m3FD3149D29CDC275C9011761599F84BADCE310ED_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// VRM.FastSpringBones.Blittables.BlittableColliderGroups* VRM.FastSpringBones.NativeWrappers.NativeColliderGroups::GetUnsafePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * NativeColliderGroups_GetUnsafePtr_m35233F667FE8B51823F44013CB32A7A979BAF6C5 (NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1_GetUnsafePtr_m3D00124F41554DA72CC54437217D15A41ADDF02C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public BlittableColliderGroups* GetUnsafePtr() => _nativePointer.GetUnsafePtr();
		NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 * L_0 = __this->get__nativePointer_0();
		NullCheck(L_0);
		BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * L_1;
		L_1 = NativePointer_1_GetUnsafePtr_m3D00124F41554DA72CC54437217D15A41ADDF02C_inline(L_0, /*hidden argument*/NativePointer_1_GetUnsafePtr_m3D00124F41554DA72CC54437217D15A41ADDF02C_RuntimeMethod_var);
		return (BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 *)(L_1);
	}
}
// System.Void VRM.FastSpringBones.NativeWrappers.NativeColliderGroups::DrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeColliderGroups_DrawGizmos_m1A9B1DF801D699123F5DEE4A4664D5CE16137C47 (NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1_get_Value_mC2CA08D7B0CB8FA35FECBF8A461CCBDA0A49BE1B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public void DrawGizmos() => _nativePointer.Value.DrawGizmos();
		NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 * L_0 = __this->get__nativePointer_0();
		NullCheck(L_0);
		BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4  L_1;
		L_1 = NativePointer_1_get_Value_mC2CA08D7B0CB8FA35FECBF8A461CCBDA0A49BE1B(L_0, /*hidden argument*/NativePointer_1_get_Value_mC2CA08D7B0CB8FA35FECBF8A461CCBDA0A49BE1B_RuntimeMethod_var);
		V_0 = L_1;
		BlittableColliderGroups_DrawGizmos_m6596EEDA377DB60BF240E1A1B9AB9184E0551733((BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 *)(&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.Components.FastSpringBoneColliderGroup> VRM.FastSpringBones.NativeWrappers.NativeColliderGroups::get_ColliderGroups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeColliderGroups_get_ColliderGroups_m3B73743E3A75C21A8BD8D424F11CB6CDCBDDDDB2 (NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * __this, const RuntimeMethod* method)
{
	{
		// get => _colliderGroups;
		RuntimeObject* L_0 = __this->get__colliderGroups_2();
		return L_0;
	}
}
// System.Void VRM.FastSpringBones.NativeWrappers.NativeColliderGroups::set_ColliderGroups(System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.Components.FastSpringBoneColliderGroup>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeColliderGroups_set_ColliderGroups_m42195BCDF7FD8612A86936300C8EDDCAE9D3B6D9 (NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// _colliderGroups = value;
		RuntimeObject* L_0 = ___value0;
		__this->set__colliderGroups_2(L_0);
		// UpdateColliderGroups();
		NativeColliderGroups_UpdateColliderGroups_m211E6C16ACE1EE2251E993C4994DF60D0C66FE83(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.NativeWrappers.NativeColliderGroups::UpdateColliderGroups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeColliderGroups_UpdateColliderGroups_m211E6C16ACE1EE2251E993C4994DF60D0C66FE83 (NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mB66EEDD3ABF1090CBB0727291289C3BD96A09DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_m9970B09EE65D7D0525FD9B6E76D88CC4F1F0A5A4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_isDisposed) return;
		bool L_0 = __this->get__isDisposed_3();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (_isDisposed) return;
		return;
	}

IL_0009:
	{
		// if (_colliderGroupArray.IsCreated)
		NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F * L_1 = __this->get_address_of__colliderGroupArray_1();
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_m9970B09EE65D7D0525FD9B6E76D88CC4F1F0A5A4((NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F *)L_1, /*hidden argument*/NativeArray_1_get_IsCreated_m9970B09EE65D7D0525FD9B6E76D88CC4F1F0A5A4_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// _colliderGroupArray.Dispose();
		NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F * L_3 = __this->get_address_of__colliderGroupArray_1();
		NativeArray_1_Dispose_mB66EEDD3ABF1090CBB0727291289C3BD96A09DE9((NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F *)L_3, /*hidden argument*/NativeArray_1_Dispose_mB66EEDD3ABF1090CBB0727291289C3BD96A09DE9_RuntimeMethod_var);
	}

IL_0021:
	{
		// CreateColliderGroupArray(_colliderGroups);
		RuntimeObject* L_4 = __this->get__colliderGroups_2();
		NativeColliderGroups_CreateColliderGroupArray_m681BD9E2A5B3DA90690C3597C5FC4252C9F57327(__this, L_4, /*hidden argument*/NULL);
		// UpdateData();
		NativeColliderGroups_UpdateData_m4F8A762E3016242A5AA49B6C214B739AFC10D25D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.NativeWrappers.NativeColliderGroups::.ctor(System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.Components.FastSpringBoneColliderGroup>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeColliderGroups__ctor_m1A85F5340E5C4DCCF8D84F0B6EB14FD6CBD4B603 (NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * __this, RuntimeObject* ___colliderGroups0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1__ctor_mDDFFA919DF17BD9C2AD52800F292CD6FAF484C56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly NativePointer<BlittableColliderGroups> _nativePointer = new NativePointer<BlittableColliderGroups>();
		NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 * L_0 = (NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 *)il2cpp_codegen_object_new(NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449_il2cpp_TypeInfo_var);
		NativePointer_1__ctor_mDDFFA919DF17BD9C2AD52800F292CD6FAF484C56(L_0, /*hidden argument*/NativePointer_1__ctor_mDDFFA919DF17BD9C2AD52800F292CD6FAF484C56_RuntimeMethod_var);
		__this->set__nativePointer_0(L_0);
		// public NativeColliderGroups(IReadOnlyList<FastSpringBoneColliderGroup> colliderGroups)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _colliderGroups = colliderGroups;
		RuntimeObject* L_1 = ___colliderGroups0;
		__this->set__colliderGroups_2(L_1);
		// UpdateColliderGroups();
		NativeColliderGroups_UpdateColliderGroups_m211E6C16ACE1EE2251E993C4994DF60D0C66FE83(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.NativeWrappers.NativeColliderGroups::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeColliderGroups_Dispose_mF53752CDE16818114CC04E8BAEA79BA2C031B1D2 (NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mB66EEDD3ABF1090CBB0727291289C3BD96A09DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_m9970B09EE65D7D0525FD9B6E76D88CC4F1F0A5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1_Dispose_mB0F3B59BB93C50F28D7384A263C343DF6C82941F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_colliderGroupArray.IsCreated)
		NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F * L_0 = __this->get_address_of__colliderGroupArray_1();
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m9970B09EE65D7D0525FD9B6E76D88CC4F1F0A5A4((NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F *)L_0, /*hidden argument*/NativeArray_1_get_IsCreated_m9970B09EE65D7D0525FD9B6E76D88CC4F1F0A5A4_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// _colliderGroupArray.Dispose();
		NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F * L_2 = __this->get_address_of__colliderGroupArray_1();
		NativeArray_1_Dispose_mB66EEDD3ABF1090CBB0727291289C3BD96A09DE9((NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F *)L_2, /*hidden argument*/NativeArray_1_Dispose_mB66EEDD3ABF1090CBB0727291289C3BD96A09DE9_RuntimeMethod_var);
		// _isDisposed = true;
		__this->set__isDisposed_3((bool)1);
	}

IL_001f:
	{
		// _nativePointer.Dispose();
		NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 * L_3 = __this->get__nativePointer_0();
		NullCheck(L_3);
		NativePointer_1_Dispose_mB0F3B59BB93C50F28D7384A263C343DF6C82941F(L_3, /*hidden argument*/NativePointer_1_Dispose_mB0F3B59BB93C50F28D7384A263C343DF6C82941F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.NativeWrappers.NativeColliderGroups::CreateColliderGroupArray(System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.Components.FastSpringBoneColliderGroup>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeColliderGroups_CreateColliderGroupArray_m681BD9E2A5B3DA90690C3597C5FC4252C9F57327 (NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * __this, RuntimeObject* ___colliderGroups0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t4501497224987A4655ACF44BC207285D715F39B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t356739F2A9F2772343D149DA38D4491F05C823C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mB38DD07EAFB304D54CD37FF27758380E86430EE6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// _colliderGroupArray = new NativeArray<BlittableColliderGroup>(colliderGroups.Count, Allocator.Persistent);
		RuntimeObject* L_0 = ___colliderGroups0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<VRM.FastSpringBones.Components.FastSpringBoneColliderGroup>::get_Count() */, IReadOnlyCollection_1_t4501497224987A4655ACF44BC207285D715F39B5_il2cpp_TypeInfo_var, L_0);
		NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_mB38DD07EAFB304D54CD37FF27758380E86430EE6((&L_2), L_1, 4, 1, /*hidden argument*/NativeArray_1__ctor_mB38DD07EAFB304D54CD37FF27758380E86430EE6_RuntimeMethod_var);
		__this->set__colliderGroupArray_1(L_2);
		// for (var i = 0; i < _colliderGroupArray.Length; ++i)
		V_0 = 0;
		goto IL_0038;
	}

IL_0017:
	{
		// _colliderGroupArray[i] = *colliderGroups[i].ColliderGroupPtr;
		NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F * L_3 = __this->get_address_of__colliderGroupArray_1();
		int32_t L_4 = V_0;
		RuntimeObject* L_5 = ___colliderGroups0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		FastSpringBoneColliderGroup_t335E25E7E132EFF43C9CF08D6CB02ADDB674FE14 * L_7;
		L_7 = InterfaceFuncInvoker1< FastSpringBoneColliderGroup_t335E25E7E132EFF43C9CF08D6CB02ADDB674FE14 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.Components.FastSpringBoneColliderGroup>::get_Item(System.Int32) */, IReadOnlyList_1_t356739F2A9F2772343D149DA38D4491F05C823C9_il2cpp_TypeInfo_var, L_5, L_6);
		NullCheck(L_7);
		BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * L_8;
		L_8 = FastSpringBoneColliderGroup_get_ColliderGroupPtr_m5CFFCD3555FF59D6084F8E59D9EC038F44F9FBD6(L_7, /*hidden argument*/NULL);
		BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E  L_9 = (*(BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E *)L_8);
		IL2CPP_NATIVEARRAY_SET_ITEM(BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E , ((NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F *)L_3)->___m_Buffer_0, L_4, (L_9));
		// for (var i = 0; i < _colliderGroupArray.Length; ++i)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0038:
	{
		// for (var i = 0; i < _colliderGroupArray.Length; ++i)
		int32_t L_11 = V_0;
		NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F * L_12 = __this->get_address_of__colliderGroupArray_1();
		int32_t L_13;
		L_13 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F *)L_12)->___m_Length_1);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0017;
		}
	}
	{
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.NativeWrappers.NativeColliderGroups::UpdateData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeColliderGroups_UpdateData_m4F8A762E3016242A5AA49B6C214B739AFC10D25D (NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisBlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E_m8D96F603842010F8D55B4E9156F1C07AB7595D91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1_set_Value_m69616F9509C1313DC79603E4798738665B48154C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _nativePointer.Value = new BlittableColliderGroups(
		//     (BlittableColliderGroup*)_colliderGroupArray.GetUnsafePtr(),
		//     _colliderGroupArray.Length);
		NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 * L_0 = __this->get__nativePointer_0();
		NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F  L_1 = __this->get__colliderGroupArray_1();
		void* L_2;
		L_2 = NativeArrayUnsafeUtility_GetUnsafePtr_TisBlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E_m8D96F603842010F8D55B4E9156F1C07AB7595D91(L_1, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisBlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E_m8D96F603842010F8D55B4E9156F1C07AB7595D91_RuntimeMethod_var);
		NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F * L_3 = __this->get_address_of__colliderGroupArray_1();
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tC04596E1A4D264CA3F526AA1E928E40EF3E4A24F *)L_3)->___m_Length_1);
		BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4  L_5;
		memset((&L_5), 0, sizeof(L_5));
		BlittableColliderGroups__ctor_m932226D6B38F9CB4503894244D68C2BEE07C42D4((&L_5), (BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E *)(BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E *)L_2, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		NativePointer_1_set_Value_m69616F9509C1313DC79603E4798738665B48154C(L_0, L_5, /*hidden argument*/NativePointer_1_set_Value_m69616F9509C1313DC79603E4798738665B48154C_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// VRM.FastSpringBones.Blittables.BlittablePoints* VRM.FastSpringBones.NativeWrappers.NativePoints::GetUnsafePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * NativePoints_GetUnsafePtr_mE51A68572188AB50541AE29AF8FE2B8A3D32D088 (NativePoints_tF458244EDF35A600E87E85F491D880B84043E0BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1_GetUnsafePtr_m87098DA39302F62A2BEDD8E4B56FD0B0F5F67295_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public BlittablePoints* GetUnsafePtr() => _nativePointer.GetUnsafePtr();
		NativePointer_1_tBD0F88F36A51FC5575FDA412C1ED0E8F9B6191E0 * L_0 = __this->get__nativePointer_0();
		NullCheck(L_0);
		BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * L_1;
		L_1 = NativePointer_1_GetUnsafePtr_m87098DA39302F62A2BEDD8E4B56FD0B0F5F67295_inline(L_0, /*hidden argument*/NativePointer_1_GetUnsafePtr_m87098DA39302F62A2BEDD8E4B56FD0B0F5F67295_RuntimeMethod_var);
		return (BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *)(L_1);
	}
}
// System.Void VRM.FastSpringBones.NativeWrappers.NativePoints::.ctor(System.Collections.Generic.IList`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoint>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePoints__ctor_mBCE418348D1330DAF2DE1E8E9D097F0AB7FB21B0 (NativePoints_tF458244EDF35A600E87E85F491D880B84043E0BF * __this, RuntimeObject* ___points0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t377868E014FDB47AC84B9665F2D8E497650C057E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tFA915CC375E314E15C3C0C95430614717C5FB33F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisBlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A_mFB9D3FE8B185C3955965A33E8AF3551935B111B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m39CF77A3A9F33A373574F8828FCBC2D8423144E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1__ctor_mDA970D759AF8203A52F15FDBC1B3F47B358A695A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1_get_Value_m0EDFC5DB50ECAF5679C9254F270A45CCF5F713BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1_tBD0F88F36A51FC5575FDA412C1ED0E8F9B6191E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public NativePoints(IList<NativePointer<BlittablePoint>> points)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _buffer = new NativeArray<BlittablePoint>(points.Count, Allocator.Persistent);
		RuntimeObject* L_0 = ___points0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoint>>::get_Count() */, ICollection_1_t377868E014FDB47AC84B9665F2D8E497650C057E_il2cpp_TypeInfo_var, L_0);
		NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m39CF77A3A9F33A373574F8828FCBC2D8423144E0((&L_2), L_1, 4, 1, /*hidden argument*/NativeArray_1__ctor_m39CF77A3A9F33A373574F8828FCBC2D8423144E0_RuntimeMethod_var);
		__this->set__buffer_1(L_2);
		// for (var i = 0; i < _buffer.Length; ++i)
		V_0 = 0;
		goto IL_0039;
	}

IL_001d:
	{
		// _buffer[i] = points[i].Value;
		NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA * L_3 = __this->get_address_of__buffer_1();
		int32_t L_4 = V_0;
		RuntimeObject* L_5 = ___points0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		NativePointer_1_tAE35E054C215345560990C73548E2C5418E78EEB * L_7;
		L_7 = InterfaceFuncInvoker1< NativePointer_1_tAE35E054C215345560990C73548E2C5418E78EEB *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittablePoint>>::get_Item(System.Int32) */, IList_1_tFA915CC375E314E15C3C0C95430614717C5FB33F_il2cpp_TypeInfo_var, L_5, L_6);
		NullCheck(L_7);
		BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A  L_8;
		L_8 = NativePointer_1_get_Value_m0EDFC5DB50ECAF5679C9254F270A45CCF5F713BC(L_7, /*hidden argument*/NativePointer_1_get_Value_m0EDFC5DB50ECAF5679C9254F270A45CCF5F713BC_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A , ((NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA *)L_3)->___m_Buffer_0, L_4, (L_8));
		// for (var i = 0; i < _buffer.Length; ++i)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0039:
	{
		// for (var i = 0; i < _buffer.Length; ++i)
		int32_t L_10 = V_0;
		NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA * L_11 = __this->get_address_of__buffer_1();
		int32_t L_12;
		L_12 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA *)L_11)->___m_Length_1);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001d;
		}
	}
	{
		// _nativePointer = new NativePointer<BlittablePoints>(new BlittablePoints((BlittablePoint*) _buffer.GetUnsafePtr(), _buffer.Length));
		NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA  L_13 = __this->get__buffer_1();
		void* L_14;
		L_14 = NativeArrayUnsafeUtility_GetUnsafePtr_TisBlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A_mFB9D3FE8B185C3955965A33E8AF3551935B111B6(L_13, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisBlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A_mFB9D3FE8B185C3955965A33E8AF3551935B111B6_RuntimeMethod_var);
		NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA * L_15 = __this->get_address_of__buffer_1();
		int32_t L_16;
		L_16 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA *)L_15)->___m_Length_1);
		BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC  L_17;
		memset((&L_17), 0, sizeof(L_17));
		BlittablePoints__ctor_mE4C1DB08BE53D2914BD5C8965135BEB2A9203E9E((&L_17), (BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A *)(BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A *)L_14, L_16, /*hidden argument*/NULL);
		NativePointer_1_tBD0F88F36A51FC5575FDA412C1ED0E8F9B6191E0 * L_18 = (NativePointer_1_tBD0F88F36A51FC5575FDA412C1ED0E8F9B6191E0 *)il2cpp_codegen_object_new(NativePointer_1_tBD0F88F36A51FC5575FDA412C1ED0E8F9B6191E0_il2cpp_TypeInfo_var);
		NativePointer_1__ctor_mDA970D759AF8203A52F15FDBC1B3F47B358A695A(L_18, L_17, /*hidden argument*/NativePointer_1__ctor_mDA970D759AF8203A52F15FDBC1B3F47B358A695A_RuntimeMethod_var);
		__this->set__nativePointer_0(L_18);
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.NativeWrappers.NativePoints::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePoints_Dispose_m7EA4DC62343AF4B557065DC3148367B7F67CCB88 (NativePoints_tF458244EDF35A600E87E85F491D880B84043E0BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m2357502C1E0883EDE4885D3B1CE29CE26034C65D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_m9B4A447E1F22115DE02D0CB244418E22AB663EB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1_Dispose_m43C02B10250DE56976CAE91C45D888F29EEA76E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_buffer.IsCreated)
		NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA * L_0 = __this->get_address_of__buffer_1();
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m9B4A447E1F22115DE02D0CB244418E22AB663EB3((NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA *)L_0, /*hidden argument*/NativeArray_1_get_IsCreated_m9B4A447E1F22115DE02D0CB244418E22AB663EB3_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// _buffer.Dispose();
		NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA * L_2 = __this->get_address_of__buffer_1();
		NativeArray_1_Dispose_m2357502C1E0883EDE4885D3B1CE29CE26034C65D((NativeArray_1_t0905A996606BADD637975CB5E951DF8FB6A662CA *)L_2, /*hidden argument*/NativeArray_1_Dispose_m2357502C1E0883EDE4885D3B1CE29CE26034C65D_RuntimeMethod_var);
	}

IL_0018:
	{
		// _nativePointer.Dispose();
		NativePointer_1_tBD0F88F36A51FC5575FDA412C1ED0E8F9B6191E0 * L_3 = __this->get__nativePointer_0();
		NullCheck(L_3);
		NativePointer_1_Dispose_m43C02B10250DE56976CAE91C45D888F29EEA76E3(L_3, /*hidden argument*/NativePointer_1_Dispose_m43C02B10250DE56976CAE91C45D888F29EEA76E3_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Transform VRM.FastSpringBones.NativeWrappers.NativeTransform::get_Transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * NativeTransform_get_Transform_mD31EB4E9767FA389DF327511DE7B7271129A8D20 (NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * __this, const RuntimeMethod* method)
{
	{
		// public Transform Transform { get; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CTransformU3Ek__BackingField_1();
		return L_0;
	}
}
// VRM.FastSpringBones.Blittables.BlittableTransform* VRM.FastSpringBones.NativeWrappers.NativeTransform::GetUnsafePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * NativeTransform_GetUnsafePtr_m6E9BA2A811A7B72CF5635CD75F335C45E51C7041 (NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1_GetUnsafePtr_m2E5086436D93F6C2410A12F6C6BD13ACFBD2B1A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public unsafe BlittableTransform* GetUnsafePtr() => _nativePointer.GetUnsafePtr();
		NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407 * L_0 = __this->get__nativePointer_0();
		NullCheck(L_0);
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_1;
		L_1 = NativePointer_1_GetUnsafePtr_m2E5086436D93F6C2410A12F6C6BD13ACFBD2B1A5_inline(L_0, /*hidden argument*/NativePointer_1_GetUnsafePtr_m2E5086436D93F6C2410A12F6C6BD13ACFBD2B1A5_RuntimeMethod_var);
		return (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)(L_1);
	}
}
// VRM.FastSpringBones.Blittables.BlittableTransform VRM.FastSpringBones.NativeWrappers.NativeTransform::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C  NativeTransform_get_Value_m51E9DE59FC4CDA623326330C4FC4E2C6F01A607C (NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1_get_Value_mCBBF37AA6AB92E1CB8F99DE38D86BF3FB63EE231_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public BlittableTransform Value => _nativePointer.Value;
		NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407 * L_0 = __this->get__nativePointer_0();
		NullCheck(L_0);
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C  L_1;
		L_1 = NativePointer_1_get_Value_mCBBF37AA6AB92E1CB8F99DE38D86BF3FB63EE231(L_0, /*hidden argument*/NativePointer_1_get_Value_mCBBF37AA6AB92E1CB8F99DE38D86BF3FB63EE231_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void VRM.FastSpringBones.NativeWrappers.NativeTransform::.ctor(VRM.FastSpringBones.Registries.TransformRegistry,VRM.FastSpringBones.Registries.TransformSynchronizationType,UnityEngine.Transform,VRM.FastSpringBones.NativeWrappers.NativeTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeTransform__ctor_m5622E3BE7F5ED43E5B37BD4447A8E34A41AC276F (NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * __this, TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * ___transformRegistry0, int32_t ___transformSynchronizationType1, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform2, NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * ___parent3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1__ctor_m758D686235384641668A1CBA24872EFCCBCA4FA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * G_B2_0 = NULL;
	NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * G_B1_0 = NULL;
	uintptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * G_B3_1 = NULL;
	{
		// public unsafe NativeTransform(
		//     TransformRegistry transformRegistry,
		//     TransformSynchronizationType transformSynchronizationType,
		//     Transform transform,
		//     NativeTransform parent = null
		// )
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _nativePointer = new NativePointer<BlittableTransform>(new BlittableTransform(parent != null ? parent.GetUnsafePtr() : null, transform));
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_0 = ___parent3;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_000f;
		}
	}
	{
		G_B3_0 = ((uintptr_t)0);
		G_B3_1 = G_B1_0;
		goto IL_0016;
	}

IL_000f:
	{
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_1 = ___parent3;
		NullCheck(L_1);
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_2;
		L_2 = NativeTransform_GetUnsafePtr_m6E9BA2A811A7B72CF5635CD75F335C45E51C7041(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((uintptr_t)(intptr_t)(L_2));
		G_B3_1 = G_B2_0;
	}

IL_0016:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ___transform2;
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C  L_4;
		memset((&L_4), 0, sizeof(L_4));
		BlittableTransform__ctor_m5041ABB388BF0F162ABD3E02812ABD1DB390383A((&L_4), (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)G_B3_0, L_3, /*hidden argument*/NULL);
		NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407 * L_5 = (NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407 *)il2cpp_codegen_object_new(NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407_il2cpp_TypeInfo_var);
		NativePointer_1__ctor_m758D686235384641668A1CBA24872EFCCBCA4FA0(L_5, L_4, /*hidden argument*/NativePointer_1__ctor_m758D686235384641668A1CBA24872EFCCBCA4FA0_RuntimeMethod_var);
		NullCheck(G_B3_1);
		G_B3_1->set__nativePointer_0(L_5);
		// Transform = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = ___transform2;
		__this->set_U3CTransformU3Ek__BackingField_1(L_6);
		// _transformRegistry = transformRegistry;
		TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * L_7 = ___transformRegistry0;
		__this->set__transformRegistry_2(L_7);
		// _transformRegistry.Register(this, transformSynchronizationType);
		TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * L_8 = __this->get__transformRegistry_2();
		int32_t L_9 = ___transformSynchronizationType1;
		NullCheck(L_8);
		TransformRegistry_Register_m6F14A3133E0DE4EC7DF21C10CF846738C5146D3B(L_8, __this, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.NativeWrappers.NativeTransform::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeTransform_Dispose_m0A492076F13E995F79D526F28004826EB3D6017E (NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1_Dispose_m1B57CA1E5A4636EC45076E1A85BF2D0419DA3132_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _transformRegistry.Unregister(this);
		TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * L_0 = __this->get__transformRegistry_2();
		NullCheck(L_0);
		TransformRegistry_Unregister_mD2AC06492F1CC0A2B64FA068BA74F0F18F54D36E(L_0, __this, /*hidden argument*/NULL);
		// _nativePointer.Dispose();
		NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407 * L_1 = __this->get__nativePointer_0();
		NullCheck(L_1);
		NativePointer_1_Dispose_m1B57CA1E5A4636EC45076E1A85BF2D0419DA3132(L_1, /*hidden argument*/NativePointer_1_Dispose_m1B57CA1E5A4636EC45076E1A85BF2D0419DA3132_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.NativeWrappers.NativeTransform> VRM.FastSpringBones.Schedulers.PullTransformJobScheduler::get_Targets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PullTransformJobScheduler_get_Targets_mA1D192A28B18CEBBE4C6DE86B878EB66818512B5 (PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4 * __this, const RuntimeMethod* method)
{
	{
		// private IReadOnlyList<NativeTransform> Targets => _transformRegistry.PullTargets;
		TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * L_0 = __this->get__transformRegistry_3();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = TransformRegistry_get_PullTargets_mB25BB3C0A2531F84AC0A54F2A7C5F06735AE18B3_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void VRM.FastSpringBones.Schedulers.PullTransformJobScheduler::.ctor(VRM.FastSpringBones.Registries.TransformRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PullTransformJobScheduler__ctor_m6A4A71CBF8593E1CC0BCFE51744597AC8B68ABB9 (PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4 * __this, TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * ___transformRegistry0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PullTransformJobScheduler_OnTransformChanged_mCB6FE8AF1E5842F57F8D856AF61DC175341BB121_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD928FBF64A7879312BDF31C654A0AB714CBF0CF7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly CustomSampler _sampler = CustomSampler.Create("Schedule CopyFromTransformJob");
		IL2CPP_RUNTIME_CLASS_INIT(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24_il2cpp_TypeInfo_var);
		CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * L_0;
		L_0 = CustomSampler_Create_m9010A07C27FDDC7ECC2065AFA232BBDC6955C1E6(_stringLiteralD928FBF64A7879312BDF31C654A0AB714CBF0CF7, (bool)0, /*hidden argument*/NULL);
		__this->set__sampler_2(L_0);
		// private bool _dirty = true;
		__this->set__dirty_4((bool)1);
		// public PullTransformJobScheduler(TransformRegistry transformRegistry)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _transformRegistry = transformRegistry;
		TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * L_1 = ___transformRegistry0;
		__this->set__transformRegistry_3(L_1);
		// _transformRegistry.SubscribeOnValueChanged(OnTransformChanged);
		TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * L_2 = __this->get__transformRegistry_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_3, __this, (intptr_t)((intptr_t)PullTransformJobScheduler_OnTransformChanged_mCB6FE8AF1E5842F57F8D856AF61DC175341BB121_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		TransformRegistry_SubscribeOnValueChanged_m37D9611588F7A19F7A68A25C60B40ACA4E3F7DDC(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.Schedulers.PullTransformJobScheduler::OnTransformChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PullTransformJobScheduler_OnTransformChanged_mCB6FE8AF1E5842F57F8D856AF61DC175341BB121 (PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4 * __this, const RuntimeMethod* method)
{
	{
		// _dirty = true;
		__this->set__dirty_4((bool)1);
		// }
		return;
	}
}
// Unity.Jobs.JobHandle VRM.FastSpringBones.Schedulers.PullTransformJobScheduler::Schedule(Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  PullTransformJobScheduler_Schedule_m8320273DB84A5C98E131EBA647C94F6E5751D75D (PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4 * __this, JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___dependOn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobParallelForTransformExtensions_Schedule_TisJob_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5_m02BBE6CFCF5995CE07CBB42D10109339D7395C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t58F6A0A6739781CAFFB15EFFA48A30E8B2768989_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Targets.Count == 0)
		RuntimeObject* L_0;
		L_0 = PullTransformJobScheduler_get_Targets_mA1D192A28B18CEBBE4C6DE86B878EB66818512B5(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<VRM.FastSpringBones.NativeWrappers.NativeTransform>::get_Count() */, IReadOnlyCollection_1_t58F6A0A6739781CAFFB15EFFA48A30E8B2768989_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return dependOn;
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_2 = ___dependOn0;
		return L_2;
	}

IL_000f:
	{
		// if (_dirty)
		bool L_3 = __this->get__dirty_4();
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// ReconstructBuffers();
		PullTransformJobScheduler_ReconstructBuffers_m0FF35D635048B444B8019EF1D5B41A45CBBF3B0B(__this, /*hidden argument*/NULL);
		// _dirty = false;
		__this->set__dirty_4((bool)0);
	}

IL_0024:
	{
		// var job = new Job { TransformPointers = _transformPointers };
		il2cpp_codegen_initobj((&V_0), sizeof(Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5 ));
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** L_4 = __this->get__transformPointers_0();
		(&V_0)->set_TransformPointers_0((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C **)L_4);
		Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5  L_5 = V_0;
		// var jobHandle = job.Schedule(_transformAccessArray, dependOn);
		TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E  L_6 = __this->get__transformAccessArray_1();
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_7 = ___dependOn0;
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_8;
		L_8 = IJobParallelForTransformExtensions_Schedule_TisJob_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5_m02BBE6CFCF5995CE07CBB42D10109339D7395C4A(L_5, L_6, L_7, /*hidden argument*/IJobParallelForTransformExtensions_Schedule_TisJob_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5_m02BBE6CFCF5995CE07CBB42D10109339D7395C4A_RuntimeMethod_var);
		// return jobHandle;
		return L_8;
	}
}
// System.Void VRM.FastSpringBones.Schedulers.PullTransformJobScheduler::ReconstructBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PullTransformJobScheduler_ReconstructBuffers_m0FF35D635048B444B8019EF1D5B41A45CBBF3B0B (PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t58F6A0A6739781CAFFB15EFFA48A30E8B2768989_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_tACEB85885FDAEAE173E088659A3ED59D140D6B3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// ReleaseBuffers();
		PullTransformJobScheduler_ReleaseBuffers_mEFB07EC24A81B87449517E6468FD917DAF1A7833(__this, /*hidden argument*/NULL);
		// var transforms = Targets;
		RuntimeObject* L_0;
		L_0 = PullTransformJobScheduler_get_Targets_mA1D192A28B18CEBBE4C6DE86B878EB66818512B5(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// _transformPointers = (BlittableTransform**)UnsafeUtility.Malloc(
		//     sizeof(BlittableTransform*) * transforms.Count,
		//     16,
		//     Allocator.Persistent
		// );
		uint32_t L_1 = sizeof(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *);
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<VRM.FastSpringBones.NativeWrappers.NativeTransform>::get_Count() */, IReadOnlyCollection_1_t58F6A0A6739781CAFFB15EFFA48A30E8B2768989_il2cpp_TypeInfo_var, L_2);
		void* L_4;
		L_4 = UnsafeUtility_Malloc_m18FCC67A056C48A4E0F939D08C43F9E876CA1CF6(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_3)))), ((int32_t)16), 4, /*hidden argument*/NULL);
		__this->set__transformPointers_0((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C **)L_4);
		// _transformAccessArray = new TransformAccessArray(transforms.Count);
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<VRM.FastSpringBones.NativeWrappers.NativeTransform>::get_Count() */, IReadOnlyCollection_1_t58F6A0A6739781CAFFB15EFFA48A30E8B2768989_il2cpp_TypeInfo_var, L_5);
		TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		TransformAccessArray__ctor_mC548C0AD5A19EEB71F11BF734F468014C1B61784((&L_7), L_6, (-1), /*hidden argument*/NULL);
		__this->set__transformAccessArray_1(L_7);
		// for (var i = 0; i < transforms.Count; i++)
		V_1 = 0;
		goto IL_0077;
	}

IL_003f:
	{
		// _transformPointers[i] = transforms[i].GetUnsafePtr();
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** L_8 = __this->get__transformPointers_0();
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *);
		RuntimeObject* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_13;
		L_13 = InterfaceFuncInvoker1< NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.NativeWrappers.NativeTransform>::get_Item(System.Int32) */, IReadOnlyList_1_tACEB85885FDAEAE173E088659A3ED59D140D6B3B_il2cpp_TypeInfo_var, L_11, L_12);
		NullCheck(L_13);
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_14;
		L_14 = NativeTransform_GetUnsafePtr_m6E9BA2A811A7B72CF5635CD75F335C45E51C7041(L_13, /*hidden argument*/NULL);
		*((intptr_t*)((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C **)il2cpp_codegen_add((intptr_t)L_8, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_9), (int32_t)L_10))))) = (intptr_t)L_14;
		// _transformAccessArray.Add(transforms[i].Transform);
		TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E * L_15 = __this->get_address_of__transformAccessArray_1();
		RuntimeObject* L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_18;
		L_18 = InterfaceFuncInvoker1< NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.NativeWrappers.NativeTransform>::get_Item(System.Int32) */, IReadOnlyList_1_tACEB85885FDAEAE173E088659A3ED59D140D6B3B_il2cpp_TypeInfo_var, L_16, L_17);
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = NativeTransform_get_Transform_mD31EB4E9767FA389DF327511DE7B7271129A8D20_inline(L_18, /*hidden argument*/NULL);
		TransformAccessArray_Add_mA7270CFEAFCCD155A86E8BE34EE45BB60068B60D((TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E *)L_15, L_19, /*hidden argument*/NULL);
		// for (var i = 0; i < transforms.Count; i++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0077:
	{
		// for (var i = 0; i < transforms.Count; i++)
		int32_t L_21 = V_1;
		RuntimeObject* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<VRM.FastSpringBones.NativeWrappers.NativeTransform>::get_Count() */, IReadOnlyCollection_1_t58F6A0A6739781CAFFB15EFFA48A30E8B2768989_il2cpp_TypeInfo_var, L_22);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_003f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.Schedulers.PullTransformJobScheduler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PullTransformJobScheduler_Dispose_mAD3B8D444EA8FE50A0AF1743E97989031B2C880E (PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PullTransformJobScheduler_OnTransformChanged_mCB6FE8AF1E5842F57F8D856AF61DC175341BB121_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ReleaseBuffers();
		PullTransformJobScheduler_ReleaseBuffers_mEFB07EC24A81B87449517E6468FD917DAF1A7833(__this, /*hidden argument*/NULL);
		// _transformRegistry.UnSubscribeOnValueChanged(OnTransformChanged);
		TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * L_0 = __this->get__transformRegistry_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_1, __this, (intptr_t)((intptr_t)PullTransformJobScheduler_OnTransformChanged_mCB6FE8AF1E5842F57F8D856AF61DC175341BB121_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		TransformRegistry_UnSubscribeOnValueChanged_m4330B63E60A12355CF53FA15CB73982A92506D26(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.Schedulers.PullTransformJobScheduler::ReleaseBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PullTransformJobScheduler_ReleaseBuffers_mEFB07EC24A81B87449517E6468FD917DAF1A7833 (PullTransformJobScheduler_tF2D11ADD9EEAD65A6B47BD41EBE21431245382E4 * __this, const RuntimeMethod* method)
{
	{
		// if (_transformAccessArray.isCreated) _transformAccessArray.Dispose();
		TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E * L_0 = __this->get_address_of__transformAccessArray_1();
		bool L_1;
		L_1 = TransformAccessArray_get_isCreated_mCA462CFEC2D8DDD4A434B11D5E889F57AD1CA551((TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (_transformAccessArray.isCreated) _transformAccessArray.Dispose();
		TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E * L_2 = __this->get_address_of__transformAccessArray_1();
		TransformAccessArray_Dispose_m3E2A2093F255EDC8B2C61EC144DACC3D80D2D4B1((TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E *)L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// if (_transformPointers != null)
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** L_3 = __this->get__transformPointers_0();
		if ((((intptr_t)L_3) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0036;
		}
	}
	{
		// UnsafeUtility.Free(_transformPointers, Allocator.Persistent);
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** L_4 = __this->get__transformPointers_0();
		UnsafeUtility_Free_mA805168FF1B6728E7DF3AD1DE47400B37F3441F9((void*)(void*)L_4, 4, /*hidden argument*/NULL);
		// _transformPointers = null;
		__this->set__transformPointers_0((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C **)((uintptr_t)0));
	}

IL_0036:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.NativeWrappers.NativeTransform> VRM.FastSpringBones.Schedulers.PushTransformJobScheduler::get_Targets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PushTransformJobScheduler_get_Targets_m0764576E0C51D6287C59D3A63D8D466A4AF46169 (PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF * __this, const RuntimeMethod* method)
{
	{
		// private IReadOnlyList<NativeTransform> Targets => _transformRegistry.PushTargets;
		TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * L_0 = __this->get__transformRegistry_3();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = TransformRegistry_get_PushTargets_m4B78A179B0F6EDFE4B6BB6F562808A6B811F2D15_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void VRM.FastSpringBones.Schedulers.PushTransformJobScheduler::.ctor(VRM.FastSpringBones.Registries.TransformRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushTransformJobScheduler__ctor_mC29016A625AF618529D40AED57B21D828B5CDEFB (PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF * __this, TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * ___transformRegistry0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PushTransformJobScheduler_OnTransformChanged_mC327169CFB2B3446ABE4A98C14F4F3AEC1550963_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD928FBF64A7879312BDF31C654A0AB714CBF0CF7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly CustomSampler _sampler = CustomSampler.Create("Schedule CopyFromTransformJob");
		IL2CPP_RUNTIME_CLASS_INIT(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24_il2cpp_TypeInfo_var);
		CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * L_0;
		L_0 = CustomSampler_Create_m9010A07C27FDDC7ECC2065AFA232BBDC6955C1E6(_stringLiteralD928FBF64A7879312BDF31C654A0AB714CBF0CF7, (bool)0, /*hidden argument*/NULL);
		__this->set__sampler_2(L_0);
		// private bool _dirty = true;
		__this->set__dirty_4((bool)1);
		// public PushTransformJobScheduler(TransformRegistry transformRegistry)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _transformRegistry = transformRegistry;
		TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * L_1 = ___transformRegistry0;
		__this->set__transformRegistry_3(L_1);
		// _transformRegistry.SubscribeOnValueChanged(OnTransformChanged);
		TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * L_2 = __this->get__transformRegistry_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_3, __this, (intptr_t)((intptr_t)PushTransformJobScheduler_OnTransformChanged_mC327169CFB2B3446ABE4A98C14F4F3AEC1550963_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		TransformRegistry_SubscribeOnValueChanged_m37D9611588F7A19F7A68A25C60B40ACA4E3F7DDC(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.Schedulers.PushTransformJobScheduler::OnTransformChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushTransformJobScheduler_OnTransformChanged_mC327169CFB2B3446ABE4A98C14F4F3AEC1550963 (PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF * __this, const RuntimeMethod* method)
{
	{
		// _dirty = true;
		__this->set__dirty_4((bool)1);
		// }
		return;
	}
}
// Unity.Jobs.JobHandle VRM.FastSpringBones.Schedulers.PushTransformJobScheduler::Schedule(Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  PushTransformJobScheduler_Schedule_mB1ADC56FAFDE65A7767E853886C6B3680F433BC5 (PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF * __this, JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___dependOn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobParallelForTransformExtensions_Schedule_TisJob_t5FAB4DC4861E73B951E02964DD2433805897C5AA_m0004C9853A6BCF40E16963D2053B70E19AEED237_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t58F6A0A6739781CAFFB15EFFA48A30E8B2768989_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Targets.Count == 0)
		RuntimeObject* L_0;
		L_0 = PushTransformJobScheduler_get_Targets_m0764576E0C51D6287C59D3A63D8D466A4AF46169(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<VRM.FastSpringBones.NativeWrappers.NativeTransform>::get_Count() */, IReadOnlyCollection_1_t58F6A0A6739781CAFFB15EFFA48A30E8B2768989_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return dependOn;
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_2 = ___dependOn0;
		return L_2;
	}

IL_000f:
	{
		// if (_dirty)
		bool L_3 = __this->get__dirty_4();
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// ReconstructBuffers();
		PushTransformJobScheduler_ReconstructBuffers_m7E801FD09E6B54A4AD740B22597B54E4B91E1B1E(__this, /*hidden argument*/NULL);
		// _dirty = false;
		__this->set__dirty_4((bool)0);
	}

IL_0024:
	{
		// var job = new Job { TransformPointers = _transformPointers };
		il2cpp_codegen_initobj((&V_0), sizeof(Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA ));
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** L_4 = __this->get__transformPointers_0();
		(&V_0)->set_TransformPointers_0((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C **)L_4);
		Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA  L_5 = V_0;
		// var jobHandle = job.Schedule(_transformAccessArray, dependOn);
		TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E  L_6 = __this->get__transformAccessArray_1();
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_7 = ___dependOn0;
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_8;
		L_8 = IJobParallelForTransformExtensions_Schedule_TisJob_t5FAB4DC4861E73B951E02964DD2433805897C5AA_m0004C9853A6BCF40E16963D2053B70E19AEED237(L_5, L_6, L_7, /*hidden argument*/IJobParallelForTransformExtensions_Schedule_TisJob_t5FAB4DC4861E73B951E02964DD2433805897C5AA_m0004C9853A6BCF40E16963D2053B70E19AEED237_RuntimeMethod_var);
		// return jobHandle;
		return L_8;
	}
}
// System.Void VRM.FastSpringBones.Schedulers.PushTransformJobScheduler::ReconstructBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushTransformJobScheduler_ReconstructBuffers_m7E801FD09E6B54A4AD740B22597B54E4B91E1B1E (PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t58F6A0A6739781CAFFB15EFFA48A30E8B2768989_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_tACEB85885FDAEAE173E088659A3ED59D140D6B3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// ReleaseBuffers();
		PushTransformJobScheduler_ReleaseBuffers_m2B476D2D55D66B0E427E46993871FF8314AD03E8(__this, /*hidden argument*/NULL);
		// var transforms = Targets;
		RuntimeObject* L_0;
		L_0 = PushTransformJobScheduler_get_Targets_m0764576E0C51D6287C59D3A63D8D466A4AF46169(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// _transformPointers = (BlittableTransform**)UnsafeUtility.Malloc(
		//     sizeof(BlittableTransform*) * transforms.Count,
		//     16,
		//     Allocator.Persistent
		// );
		uint32_t L_1 = sizeof(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *);
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<VRM.FastSpringBones.NativeWrappers.NativeTransform>::get_Count() */, IReadOnlyCollection_1_t58F6A0A6739781CAFFB15EFFA48A30E8B2768989_il2cpp_TypeInfo_var, L_2);
		void* L_4;
		L_4 = UnsafeUtility_Malloc_m18FCC67A056C48A4E0F939D08C43F9E876CA1CF6(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_3)))), ((int32_t)16), 4, /*hidden argument*/NULL);
		__this->set__transformPointers_0((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C **)L_4);
		// _transformAccessArray = new TransformAccessArray(transforms.Count);
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<VRM.FastSpringBones.NativeWrappers.NativeTransform>::get_Count() */, IReadOnlyCollection_1_t58F6A0A6739781CAFFB15EFFA48A30E8B2768989_il2cpp_TypeInfo_var, L_5);
		TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		TransformAccessArray__ctor_mC548C0AD5A19EEB71F11BF734F468014C1B61784((&L_7), L_6, (-1), /*hidden argument*/NULL);
		__this->set__transformAccessArray_1(L_7);
		// for (var i = 0; i < transforms.Count; i++)
		V_1 = 0;
		goto IL_0077;
	}

IL_003f:
	{
		// _transformPointers[i] = transforms[i].GetUnsafePtr();
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** L_8 = __this->get__transformPointers_0();
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *);
		RuntimeObject* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_13;
		L_13 = InterfaceFuncInvoker1< NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.NativeWrappers.NativeTransform>::get_Item(System.Int32) */, IReadOnlyList_1_tACEB85885FDAEAE173E088659A3ED59D140D6B3B_il2cpp_TypeInfo_var, L_11, L_12);
		NullCheck(L_13);
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_14;
		L_14 = NativeTransform_GetUnsafePtr_m6E9BA2A811A7B72CF5635CD75F335C45E51C7041(L_13, /*hidden argument*/NULL);
		*((intptr_t*)((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C **)il2cpp_codegen_add((intptr_t)L_8, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_9), (int32_t)L_10))))) = (intptr_t)L_14;
		// _transformAccessArray.Add(transforms[i].Transform);
		TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E * L_15 = __this->get_address_of__transformAccessArray_1();
		RuntimeObject* L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_18;
		L_18 = InterfaceFuncInvoker1< NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.NativeWrappers.NativeTransform>::get_Item(System.Int32) */, IReadOnlyList_1_tACEB85885FDAEAE173E088659A3ED59D140D6B3B_il2cpp_TypeInfo_var, L_16, L_17);
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = NativeTransform_get_Transform_mD31EB4E9767FA389DF327511DE7B7271129A8D20_inline(L_18, /*hidden argument*/NULL);
		TransformAccessArray_Add_mA7270CFEAFCCD155A86E8BE34EE45BB60068B60D((TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E *)L_15, L_19, /*hidden argument*/NULL);
		// for (var i = 0; i < transforms.Count; i++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0077:
	{
		// for (var i = 0; i < transforms.Count; i++)
		int32_t L_21 = V_1;
		RuntimeObject* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<VRM.FastSpringBones.NativeWrappers.NativeTransform>::get_Count() */, IReadOnlyCollection_1_t58F6A0A6739781CAFFB15EFFA48A30E8B2768989_il2cpp_TypeInfo_var, L_22);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_003f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.Schedulers.PushTransformJobScheduler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushTransformJobScheduler_Dispose_mD63F7F73B0047896FFE383F9EE221A6058FED70D (PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PushTransformJobScheduler_OnTransformChanged_mC327169CFB2B3446ABE4A98C14F4F3AEC1550963_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ReleaseBuffers();
		PushTransformJobScheduler_ReleaseBuffers_m2B476D2D55D66B0E427E46993871FF8314AD03E8(__this, /*hidden argument*/NULL);
		// _transformRegistry.UnSubscribeOnValueChanged(OnTransformChanged);
		TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * L_0 = __this->get__transformRegistry_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_1, __this, (intptr_t)((intptr_t)PushTransformJobScheduler_OnTransformChanged_mC327169CFB2B3446ABE4A98C14F4F3AEC1550963_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		TransformRegistry_UnSubscribeOnValueChanged_m4330B63E60A12355CF53FA15CB73982A92506D26(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.Schedulers.PushTransformJobScheduler::ReleaseBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PushTransformJobScheduler_ReleaseBuffers_m2B476D2D55D66B0E427E46993871FF8314AD03E8 (PushTransformJobScheduler_t1FA8C44B183F4EAB3A1E28C92ADAE0A62C3DA0EF * __this, const RuntimeMethod* method)
{
	{
		// if (_transformAccessArray.isCreated) _transformAccessArray.Dispose();
		TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E * L_0 = __this->get_address_of__transformAccessArray_1();
		bool L_1;
		L_1 = TransformAccessArray_get_isCreated_mCA462CFEC2D8DDD4A434B11D5E889F57AD1CA551((TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (_transformAccessArray.isCreated) _transformAccessArray.Dispose();
		TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E * L_2 = __this->get_address_of__transformAccessArray_1();
		TransformAccessArray_Dispose_m3E2A2093F255EDC8B2C61EC144DACC3D80D2D4B1((TransformAccessArray_t676ED880D1A6275E04515FACDA438C07E11A2A6E *)L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// if (_transformPointers != null)
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** L_3 = __this->get__transformPointers_0();
		if ((((intptr_t)L_3) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0036;
		}
	}
	{
		// UnsafeUtility.Free(_transformPointers, Allocator.Persistent);
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** L_4 = __this->get__transformPointers_0();
		UnsafeUtility_Free_mA805168FF1B6728E7DF3AD1DE47400B37F3441F9((void*)(void*)L_4, 4, /*hidden argument*/NULL);
		// _transformPointers = null;
		__this->set__transformPointers_0((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C **)((uintptr_t)0));
	}

IL_0036:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VRM.FastSpringBones.Registries.RootBoneRegistry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RootBoneRegistry__ctor_m950C2DB7C748476CDBE3A2D87A6ABE4CEBA5F4E4 (RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Registry_1__ctor_mB1AF16939ECE2C8C0D0CCDD33EACB62038771892_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Registry_1__ctor_mB1AF16939ECE2C8C0D0CCDD33EACB62038771892(__this, /*hidden argument*/Registry_1__ctor_mB1AF16939ECE2C8C0D0CCDD33EACB62038771892_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.NativeWrappers.NativeTransform> VRM.FastSpringBones.Registries.TransformRegistry::get_Transforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransformRegistry_get_Transforms_m5DF4D591771444773BA2251B02A6A27D9F28C2F6 (TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * __this, const RuntimeMethod* method)
{
	{
		// public IReadOnlyList<NativeTransform> Transforms => _transforms;
		List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * L_0 = __this->get__transforms_0();
		return L_0;
	}
}
// System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.NativeWrappers.NativeTransform> VRM.FastSpringBones.Registries.TransformRegistry::get_PullTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransformRegistry_get_PullTargets_mB25BB3C0A2531F84AC0A54F2A7C5F06735AE18B3 (TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * __this, const RuntimeMethod* method)
{
	{
		// public IReadOnlyList<NativeTransform> PullTargets => _pullTargets;
		List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * L_0 = __this->get__pullTargets_1();
		return L_0;
	}
}
// System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.NativeWrappers.NativeTransform> VRM.FastSpringBones.Registries.TransformRegistry::get_PushTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransformRegistry_get_PushTargets_m4B78A179B0F6EDFE4B6BB6F562808A6B811F2D15 (TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * __this, const RuntimeMethod* method)
{
	{
		// public IReadOnlyList<NativeTransform> PushTargets => _pushTargets;
		List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * L_0 = __this->get__pushTargets_2();
		return L_0;
	}
}
// System.Void VRM.FastSpringBones.Registries.TransformRegistry::SubscribeOnValueChanged(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformRegistry_SubscribeOnValueChanged_m37D9611588F7A19F7A68A25C60B40ACA4E3F7DDC (TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void SubscribeOnValueChanged(Action action) => _onValueChanged += action;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get__onValueChanged_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___action0;
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		__this->set__onValueChanged_3(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void VRM.FastSpringBones.Registries.TransformRegistry::UnSubscribeOnValueChanged(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformRegistry_UnSubscribeOnValueChanged_m4330B63E60A12355CF53FA15CB73982A92506D26 (TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void UnSubscribeOnValueChanged(Action action) => _onValueChanged -= action;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get__onValueChanged_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ___action0;
		Delegate_t * L_2;
		L_2 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_0, L_1, /*hidden argument*/NULL);
		__this->set__onValueChanged_3(((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_2, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void VRM.FastSpringBones.Registries.TransformRegistry::Register(VRM.FastSpringBones.NativeWrappers.NativeTransform,VRM.FastSpringBones.Registries.TransformSynchronizationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformRegistry_Register_m6F14A3133E0DE4EC7DF21C10CF846738C5146D3B (TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * __this, NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * ___nativeTransform0, int32_t ___synchronizationType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9CE7A4248DCBE099817C50547D21C159A018A4BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B8_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B7_0 = NULL;
	{
		// _transforms.Add(nativeTransform);
		List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * L_0 = __this->get__transforms_0();
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_1 = ___nativeTransform0;
		NullCheck(L_0);
		List_1_Add_m9CE7A4248DCBE099817C50547D21C159A018A4BC(L_0, L_1, /*hidden argument*/List_1_Add_m9CE7A4248DCBE099817C50547D21C159A018A4BC_RuntimeMethod_var);
		int32_t L_2 = ___synchronizationType1;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = ___synchronizationType1;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_0031;
	}

IL_0015:
	{
		// _pullTargets.Add(nativeTransform);
		List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * L_4 = __this->get__pullTargets_1();
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_5 = ___nativeTransform0;
		NullCheck(L_4);
		List_1_Add_m9CE7A4248DCBE099817C50547D21C159A018A4BC(L_4, L_5, /*hidden argument*/List_1_Add_m9CE7A4248DCBE099817C50547D21C159A018A4BC_RuntimeMethod_var);
		// break;
		goto IL_0043;
	}

IL_0023:
	{
		// _pushTargets.Add(nativeTransform);
		List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * L_6 = __this->get__pushTargets_2();
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_7 = ___nativeTransform0;
		NullCheck(L_6);
		List_1_Add_m9CE7A4248DCBE099817C50547D21C159A018A4BC(L_6, L_7, /*hidden argument*/List_1_Add_m9CE7A4248DCBE099817C50547D21C159A018A4BC_RuntimeMethod_var);
		// break;
		goto IL_0043;
	}

IL_0031:
	{
		// throw new ArgumentOutOfRangeException(nameof(synchronizationType), synchronizationType, null);
		int32_t L_8 = ___synchronizationType1;
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransformSynchronizationType_t99762C775FE99151C7010F711D2A56EFD66E359A_il2cpp_TypeInfo_var)), &L_9);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_11 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6652C395633B0BE050F895C3AD7D7DEE5BC88884)), L_10, (String_t*)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransformRegistry_Register_m6F14A3133E0DE4EC7DF21C10CF846738C5146D3B_RuntimeMethod_var)));
	}

IL_0043:
	{
		// _onValueChanged?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_12 = __this->get__onValueChanged_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_13 = L_12;
		G_B7_0 = L_13;
		if (L_13)
		{
			G_B8_0 = L_13;
			goto IL_004e;
		}
	}
	{
		return;
	}

IL_004e:
	{
		NullCheck(G_B8_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B8_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.Registries.TransformRegistry::Unregister(VRM.FastSpringBones.NativeWrappers.NativeTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformRegistry_Unregister_mD2AC06492F1CC0A2B64FA068BA74F0F18F54D36E (TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * __this, NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * ___nativeTransform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mA25589EE8ACC8A8299468703FB5B5C1E40391F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mBF258404139731D5EDCC1FA75670E998FB2B30E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B6_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B5_0 = NULL;
	{
		// _transforms.Remove(nativeTransform);
		List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * L_0 = __this->get__transforms_0();
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_1 = ___nativeTransform0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_mBF258404139731D5EDCC1FA75670E998FB2B30E3(L_0, L_1, /*hidden argument*/List_1_Remove_mBF258404139731D5EDCC1FA75670E998FB2B30E3_RuntimeMethod_var);
		// if (_pullTargets.Contains(nativeTransform))
		List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * L_3 = __this->get__pullTargets_1();
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_4 = ___nativeTransform0;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Contains_mA25589EE8ACC8A8299468703FB5B5C1E40391F20(L_3, L_4, /*hidden argument*/List_1_Contains_mA25589EE8ACC8A8299468703FB5B5C1E40391F20_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// _pullTargets.Remove(nativeTransform);
		List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * L_6 = __this->get__pullTargets_1();
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_7 = ___nativeTransform0;
		NullCheck(L_6);
		bool L_8;
		L_8 = List_1_Remove_mBF258404139731D5EDCC1FA75670E998FB2B30E3(L_6, L_7, /*hidden argument*/List_1_Remove_mBF258404139731D5EDCC1FA75670E998FB2B30E3_RuntimeMethod_var);
	}

IL_0028:
	{
		// if (_pushTargets.Contains(nativeTransform))
		List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * L_9 = __this->get__pushTargets_2();
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_10 = ___nativeTransform0;
		NullCheck(L_9);
		bool L_11;
		L_11 = List_1_Contains_mA25589EE8ACC8A8299468703FB5B5C1E40391F20(L_9, L_10, /*hidden argument*/List_1_Contains_mA25589EE8ACC8A8299468703FB5B5C1E40391F20_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0043;
		}
	}
	{
		// _pushTargets.Remove(nativeTransform);
		List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * L_12 = __this->get__pushTargets_2();
		NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * L_13 = ___nativeTransform0;
		NullCheck(L_12);
		bool L_14;
		L_14 = List_1_Remove_mBF258404139731D5EDCC1FA75670E998FB2B30E3(L_12, L_13, /*hidden argument*/List_1_Remove_mBF258404139731D5EDCC1FA75670E998FB2B30E3_RuntimeMethod_var);
	}

IL_0043:
	{
		// _onValueChanged?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_15 = __this->get__onValueChanged_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_16 = L_15;
		G_B5_0 = L_16;
		if (L_16)
		{
			G_B6_0 = L_16;
			goto IL_004e;
		}
	}
	{
		return;
	}

IL_004e:
	{
		NullCheck(G_B6_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B6_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.Registries.TransformRegistry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformRegistry__ctor_mB107E2E2976C99F68CD7AC3C55B342B7950FF3EA (TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m10C91054A72FA12AC2D2F4EF8E206A6FFCB42DF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<NativeTransform> _transforms = new List<NativeTransform>();
		List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * L_0 = (List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE *)il2cpp_codegen_object_new(List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE_il2cpp_TypeInfo_var);
		List_1__ctor_m10C91054A72FA12AC2D2F4EF8E206A6FFCB42DF1(L_0, /*hidden argument*/List_1__ctor_m10C91054A72FA12AC2D2F4EF8E206A6FFCB42DF1_RuntimeMethod_var);
		__this->set__transforms_0(L_0);
		// private readonly List<NativeTransform> _pullTargets = new List<NativeTransform>();
		List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * L_1 = (List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE *)il2cpp_codegen_object_new(List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE_il2cpp_TypeInfo_var);
		List_1__ctor_m10C91054A72FA12AC2D2F4EF8E206A6FFCB42DF1(L_1, /*hidden argument*/List_1__ctor_m10C91054A72FA12AC2D2F4EF8E206A6FFCB42DF1_RuntimeMethod_var);
		__this->set__pullTargets_1(L_1);
		// private readonly List<NativeTransform> _pushTargets = new List<NativeTransform>();
		List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * L_2 = (List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE *)il2cpp_codegen_object_new(List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE_il2cpp_TypeInfo_var);
		List_1__ctor_m10C91054A72FA12AC2D2F4EF8E206A6FFCB42DF1(L_2, /*hidden argument*/List_1__ctor_m10C91054A72FA12AC2D2F4EF8E206A6FFCB42DF1_RuntimeMethod_var);
		__this->set__pushTargets_2(L_2);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone>> VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler::get_Targets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdateSpringBoneJobScheduler_get_Targets_mD7360B190D91983008FD803872B569ADE415841F (UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Registry_1_get_Items_m05DB85816227EC2ECA03016B1744FF74DBBD9CB3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private IReadOnlyList<NativePointer<BlittableRootBone>> Targets => _rootBoneRegistry.Items;
		RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 * L_0 = __this->get__rootBoneRegistry_1();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Registry_1_get_Items_m05DB85816227EC2ECA03016B1744FF74DBBD9CB3_inline(L_0, /*hidden argument*/Registry_1_get_Items_m05DB85816227EC2ECA03016B1744FF74DBBD9CB3_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler::.ctor(VRM.FastSpringBones.Registries.RootBoneRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateSpringBoneJobScheduler__ctor_mD9558513F826C00BE8E9ED3FEC827132A19E858C (UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506 * __this, RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 * ___rootBoneRegistry0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Registry_1_SubscribeOnValueChanged_m5803472941F18EC782B5FD29B310F112036580F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateSpringBoneJobScheduler_OnRootBoneChanged_m9BA12E16FB065106596909AD25D46F52EC826654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD928FBF64A7879312BDF31C654A0AB714CBF0CF7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly CustomSampler _sampler = CustomSampler.Create("Schedule CopyFromTransformJob");
		IL2CPP_RUNTIME_CLASS_INIT(CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24_il2cpp_TypeInfo_var);
		CustomSampler_t464F8FB81386C2E6570FF8DE7346A2BBF8FA9F24 * L_0;
		L_0 = CustomSampler_Create_m9010A07C27FDDC7ECC2065AFA232BBDC6955C1E6(_stringLiteralD928FBF64A7879312BDF31C654A0AB714CBF0CF7, (bool)0, /*hidden argument*/NULL);
		__this->set__sampler_2(L_0);
		// private bool _dirty = true;
		__this->set__dirty_3((bool)1);
		// public UpdateSpringBoneJobScheduler(RootBoneRegistry rootBoneRegistry)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _rootBoneRegistry = rootBoneRegistry;
		RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 * L_1 = ___rootBoneRegistry0;
		__this->set__rootBoneRegistry_1(L_1);
		// _rootBoneRegistry.SubscribeOnValueChanged(OnRootBoneChanged);
		RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 * L_2 = __this->get__rootBoneRegistry_1();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_3, __this, (intptr_t)((intptr_t)UpdateSpringBoneJobScheduler_OnRootBoneChanged_m9BA12E16FB065106596909AD25D46F52EC826654_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		Registry_1_SubscribeOnValueChanged_m5803472941F18EC782B5FD29B310F112036580F0(L_2, L_3, /*hidden argument*/Registry_1_SubscribeOnValueChanged_m5803472941F18EC782B5FD29B310F112036580F0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateSpringBoneJobScheduler_Dispose_mBD305D394475D00A5C263B3BD853E895CEC203EA (UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Registry_1_UnSubscribeOnValueChanged_m2C6BFE4E58FA82AF815A5E56832C076BE8F7F1BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateSpringBoneJobScheduler_OnRootBoneChanged_m9BA12E16FB065106596909AD25D46F52EC826654_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ReleaseBuffer();
		UpdateSpringBoneJobScheduler_ReleaseBuffer_mF45127C94CAFC6A09B26ECB09C6C576A69C5DB27(__this, /*hidden argument*/NULL);
		// _rootBoneRegistry.UnSubscribeOnValueChanged(OnRootBoneChanged);
		RootBoneRegistry_tFF5E1C4CB01D969C2155A814BF27FEC443F9C091 * L_0 = __this->get__rootBoneRegistry_1();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_1, __this, (intptr_t)((intptr_t)UpdateSpringBoneJobScheduler_OnRootBoneChanged_m9BA12E16FB065106596909AD25D46F52EC826654_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		Registry_1_UnSubscribeOnValueChanged_m2C6BFE4E58FA82AF815A5E56832C076BE8F7F1BB(L_0, L_1, /*hidden argument*/Registry_1_UnSubscribeOnValueChanged_m2C6BFE4E58FA82AF815A5E56832C076BE8F7F1BB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler::OnRootBoneChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateSpringBoneJobScheduler_OnRootBoneChanged_m9BA12E16FB065106596909AD25D46F52EC826654 (UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506 * __this, const RuntimeMethod* method)
{
	{
		// _dirty = true;
		__this->set__dirty_3((bool)1);
		// }
		return;
	}
}
// Unity.Jobs.JobHandle VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler::Schedule(Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  UpdateSpringBoneJobScheduler_Schedule_mFD182F937447357A2593863541268E930730B64C (UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506 * __this, JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___dependOn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobParallelForExtensions_Schedule_TisJob_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB_mA9136043701409D9C51B7C03128E707F0354062F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t53BDE792C8A33E21A16A6B2F9F925735A5099051_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Targets.Count == 0)
		RuntimeObject* L_0;
		L_0 = UpdateSpringBoneJobScheduler_get_Targets_mD7360B190D91983008FD803872B569ADE415841F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone>>::get_Count() */, IReadOnlyCollection_1_t53BDE792C8A33E21A16A6B2F9F925735A5099051_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return dependOn;
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_2 = ___dependOn0;
		return L_2;
	}

IL_000f:
	{
		// if (_dirty)
		bool L_3 = __this->get__dirty_3();
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// ReconstructBuffers();
		UpdateSpringBoneJobScheduler_ReconstructBuffers_m335641D1D92F11A803F1F081B090CD40D9CC2895(__this, /*hidden argument*/NULL);
		// _dirty = false;
		__this->set__dirty_3((bool)0);
	}

IL_0024:
	{
		// var job = new Job { RootBonePointers = _rootBonePointers, DeltaTime = Time.deltaTime };
		il2cpp_codegen_initobj((&V_0), sizeof(Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB ));
		BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 ** L_4 = __this->get__rootBonePointers_0();
		(&V_0)->set_RootBonePointers_0((BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 **)L_4);
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		(&V_0)->set_DeltaTime_1(L_5);
		Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB  L_6 = V_0;
		// var jobHandle = job.Schedule(Targets.Count, 0, dependOn);
		RuntimeObject* L_7;
		L_7 = UpdateSpringBoneJobScheduler_get_Targets_mD7360B190D91983008FD803872B569ADE415841F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone>>::get_Count() */, IReadOnlyCollection_1_t53BDE792C8A33E21A16A6B2F9F925735A5099051_il2cpp_TypeInfo_var, L_7);
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_9 = ___dependOn0;
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_10;
		L_10 = IJobParallelForExtensions_Schedule_TisJob_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB_mA9136043701409D9C51B7C03128E707F0354062F(L_6, L_8, 0, L_9, /*hidden argument*/IJobParallelForExtensions_Schedule_TisJob_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB_mA9136043701409D9C51B7C03128E707F0354062F_RuntimeMethod_var);
		// return jobHandle;
		return L_10;
	}
}
// System.Void VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler::ReconstructBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateSpringBoneJobScheduler_ReconstructBuffers_m335641D1D92F11A803F1F081B090CD40D9CC2895 (UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t53BDE792C8A33E21A16A6B2F9F925735A5099051_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_tFE74964F614DA8F2BB2374193CA0B23E7BA475D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativePointer_1_GetUnsafePtr_mD1E56BD92F641FAC550435B1EB4C8F76330CD903_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// ReleaseBuffer();
		UpdateSpringBoneJobScheduler_ReleaseBuffer_mF45127C94CAFC6A09B26ECB09C6C576A69C5DB27(__this, /*hidden argument*/NULL);
		// _rootBonePointers = (BlittableRootBone**)UnsafeUtility.Malloc(
		//     sizeof(BlittableTransform*) * Targets.Count,
		//     16,
		//     Allocator.Persistent
		// );
		uint32_t L_0 = sizeof(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *);
		RuntimeObject* L_1;
		L_1 = UpdateSpringBoneJobScheduler_get_Targets_mD7360B190D91983008FD803872B569ADE415841F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone>>::get_Count() */, IReadOnlyCollection_1_t53BDE792C8A33E21A16A6B2F9F925735A5099051_il2cpp_TypeInfo_var, L_1);
		void* L_3;
		L_3 = UnsafeUtility_Malloc_m18FCC67A056C48A4E0F939D08C43F9E876CA1CF6(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_2)))), ((int32_t)16), 4, /*hidden argument*/NULL);
		__this->set__rootBonePointers_0((BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 **)L_3);
		// for (var i = 0; i < Targets.Count; i++)
		V_0 = 0;
		goto IL_0051;
	}

IL_002b:
	{
		// _rootBonePointers[i] = Targets[i].GetUnsafePtr();
		BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 ** L_4 = __this->get__rootBonePointers_0();
		int32_t L_5 = V_0;
		uint32_t L_6 = sizeof(BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 *);
		RuntimeObject* L_7;
		L_7 = UpdateSpringBoneJobScheduler_get_Targets_mD7360B190D91983008FD803872B569ADE415841F(__this, /*hidden argument*/NULL);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC * L_9;
		L_9 = InterfaceFuncInvoker1< NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone>>::get_Item(System.Int32) */, IReadOnlyList_1_tFE74964F614DA8F2BB2374193CA0B23E7BA475D1_il2cpp_TypeInfo_var, L_7, L_8);
		NullCheck(L_9);
		BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 * L_10;
		L_10 = NativePointer_1_GetUnsafePtr_mD1E56BD92F641FAC550435B1EB4C8F76330CD903_inline(L_9, /*hidden argument*/NativePointer_1_GetUnsafePtr_mD1E56BD92F641FAC550435B1EB4C8F76330CD903_RuntimeMethod_var);
		*((intptr_t*)((BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 **)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_5), (int32_t)L_6))))) = (intptr_t)L_10;
		// for (var i = 0; i < Targets.Count; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0051:
	{
		// for (var i = 0; i < Targets.Count; i++)
		int32_t L_12 = V_0;
		RuntimeObject* L_13;
		L_13 = UpdateSpringBoneJobScheduler_get_Targets_mD7360B190D91983008FD803872B569ADE415841F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<VRM.FastSpringBones.NativeWrappers.NativePointer`1<VRM.FastSpringBones.Blittables.BlittableRootBone>>::get_Count() */, IReadOnlyCollection_1_t53BDE792C8A33E21A16A6B2F9F925735A5099051_il2cpp_TypeInfo_var, L_13);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_002b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler::ReleaseBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateSpringBoneJobScheduler_ReleaseBuffer_mF45127C94CAFC6A09B26ECB09C6C576A69C5DB27 (UpdateSpringBoneJobScheduler_tC9B5370A49DF568F233E69DE98B5D944BAF6A506 * __this, const RuntimeMethod* method)
{
	{
		// if (_rootBonePointers == null) return;
		BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 ** L_0 = __this->get__rootBonePointers_0();
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_000b;
		}
	}
	{
		// if (_rootBonePointers == null) return;
		return;
	}

IL_000b:
	{
		// UnsafeUtility.Free(_rootBonePointers, Allocator.Persistent);
		BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 ** L_1 = __this->get__rootBonePointers_0();
		UnsafeUtility_Free_mA805168FF1B6728E7DF3AD1DE47400B37F3441F9((void*)(void*)L_1, 4, /*hidden argument*/NULL);
		// _rootBonePointers = null;
		__this->set__rootBonePointers_0((BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 **)((uintptr_t)0));
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: VRM.FastSpringBones.Schedulers.PullTransformJobScheduler/Job
IL2CPP_EXTERN_C void Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5_marshal_pinvoke(const Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5& unmarshaled, Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5_marshaled_pinvoke& marshaled)
{
	marshaled.___TransformPointers_0 = unmarshaled.get_TransformPointers_0();
}
IL2CPP_EXTERN_C void Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5_marshal_pinvoke_back(const Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5_marshaled_pinvoke& marshaled, Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5& unmarshaled)
{
	unmarshaled.set_TransformPointers_0(marshaled.___TransformPointers_0);
}
// Conversion method for clean up from marshalling of: VRM.FastSpringBones.Schedulers.PullTransformJobScheduler/Job
IL2CPP_EXTERN_C void Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5_marshal_pinvoke_cleanup(Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: VRM.FastSpringBones.Schedulers.PullTransformJobScheduler/Job
IL2CPP_EXTERN_C void Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5_marshal_com(const Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5& unmarshaled, Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5_marshaled_com& marshaled)
{
	marshaled.___TransformPointers_0 = unmarshaled.get_TransformPointers_0();
}
IL2CPP_EXTERN_C void Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5_marshal_com_back(const Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5_marshaled_com& marshaled, Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5& unmarshaled)
{
	unmarshaled.set_TransformPointers_0(marshaled.___TransformPointers_0);
}
// Conversion method for clean up from marshalling of: VRM.FastSpringBones.Schedulers.PullTransformJobScheduler/Job
IL2CPP_EXTERN_C void Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5_marshal_com_cleanup(Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5_marshaled_com& marshaled)
{
}
// System.Void VRM.FastSpringBones.Schedulers.PullTransformJobScheduler/Job::Execute(System.Int32,UnityEngine.Jobs.TransformAccess)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Job_Execute_m77D64450B2CD6DDF9BC4B519B760358A0B3D3DB6 (Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5 * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A  ___transform1, const RuntimeMethod* method)
{
	{
		// TransformPointers[index]->PullFrom(transform);
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** L_0 = __this->get_TransformPointers_0();
		int32_t L_1 = ___index0;
		uint32_t L_2 = sizeof(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *);
		TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A  L_3 = ___transform1;
		BlittableTransform_PullFrom_m60EB3B51DF17177636F8D8873DE94789396CE651((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)(*((intptr_t*)((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C **)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)L_2)))))), L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Job_Execute_m77D64450B2CD6DDF9BC4B519B760358A0B3D3DB6_AdjustorThunk (RuntimeObject * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A  ___transform1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5 * _thisAdjusted = reinterpret_cast<Job_t03B385B5B1FE12D14F5B464F5D174B6D7F382EE5 *>(__this + _offset);
	Job_Execute_m77D64450B2CD6DDF9BC4B519B760358A0B3D3DB6(_thisAdjusted, ___index0, ___transform1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: VRM.FastSpringBones.Schedulers.PushTransformJobScheduler/Job
IL2CPP_EXTERN_C void Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA_marshal_pinvoke(const Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA& unmarshaled, Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA_marshaled_pinvoke& marshaled)
{
	marshaled.___TransformPointers_0 = unmarshaled.get_TransformPointers_0();
}
IL2CPP_EXTERN_C void Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA_marshal_pinvoke_back(const Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA_marshaled_pinvoke& marshaled, Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA& unmarshaled)
{
	unmarshaled.set_TransformPointers_0(marshaled.___TransformPointers_0);
}
// Conversion method for clean up from marshalling of: VRM.FastSpringBones.Schedulers.PushTransformJobScheduler/Job
IL2CPP_EXTERN_C void Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA_marshal_pinvoke_cleanup(Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: VRM.FastSpringBones.Schedulers.PushTransformJobScheduler/Job
IL2CPP_EXTERN_C void Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA_marshal_com(const Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA& unmarshaled, Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA_marshaled_com& marshaled)
{
	marshaled.___TransformPointers_0 = unmarshaled.get_TransformPointers_0();
}
IL2CPP_EXTERN_C void Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA_marshal_com_back(const Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA_marshaled_com& marshaled, Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA& unmarshaled)
{
	unmarshaled.set_TransformPointers_0(marshaled.___TransformPointers_0);
}
// Conversion method for clean up from marshalling of: VRM.FastSpringBones.Schedulers.PushTransformJobScheduler/Job
IL2CPP_EXTERN_C void Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA_marshal_com_cleanup(Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA_marshaled_com& marshaled)
{
}
// System.Void VRM.FastSpringBones.Schedulers.PushTransformJobScheduler/Job::Execute(System.Int32,UnityEngine.Jobs.TransformAccess)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Job_Execute_m3988EED99AD5679B285824200C72C4AE87624456 (Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A  ___transform1, const RuntimeMethod* method)
{
	{
		// TransformPointers[index]->PushTo(transform);
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C ** L_0 = __this->get_TransformPointers_0();
		int32_t L_1 = ___index0;
		uint32_t L_2 = sizeof(BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *);
		TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A  L_3 = ___transform1;
		BlittableTransform_PushTo_m765BC4F6315ECB4278A3EFC9FE5AC8F894542D72((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)(*((intptr_t*)((BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C **)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)L_2)))))), L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Job_Execute_m3988EED99AD5679B285824200C72C4AE87624456_AdjustorThunk (RuntimeObject * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, TransformAccess_t2195071C840F19FC7A15C52E6A9AC84C294D4A6A  ___transform1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA * _thisAdjusted = reinterpret_cast<Job_t5FAB4DC4861E73B951E02964DD2433805897C5AA *>(__this + _offset);
	Job_Execute_m3988EED99AD5679B285824200C72C4AE87624456(_thisAdjusted, ___index0, ___transform1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler/Job
IL2CPP_EXTERN_C void Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB_marshal_pinvoke(const Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB& unmarshaled, Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB_marshaled_pinvoke& marshaled)
{
	marshaled.___RootBonePointers_0 = unmarshaled.get_RootBonePointers_0();
	marshaled.___DeltaTime_1 = unmarshaled.get_DeltaTime_1();
}
IL2CPP_EXTERN_C void Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB_marshal_pinvoke_back(const Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB_marshaled_pinvoke& marshaled, Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB& unmarshaled)
{
	unmarshaled.set_RootBonePointers_0(marshaled.___RootBonePointers_0);
	float unmarshaled_DeltaTime_temp_1 = 0.0f;
	unmarshaled_DeltaTime_temp_1 = marshaled.___DeltaTime_1;
	unmarshaled.set_DeltaTime_1(unmarshaled_DeltaTime_temp_1);
}
// Conversion method for clean up from marshalling of: VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler/Job
IL2CPP_EXTERN_C void Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB_marshal_pinvoke_cleanup(Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler/Job
IL2CPP_EXTERN_C void Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB_marshal_com(const Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB& unmarshaled, Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB_marshaled_com& marshaled)
{
	marshaled.___RootBonePointers_0 = unmarshaled.get_RootBonePointers_0();
	marshaled.___DeltaTime_1 = unmarshaled.get_DeltaTime_1();
}
IL2CPP_EXTERN_C void Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB_marshal_com_back(const Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB_marshaled_com& marshaled, Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB& unmarshaled)
{
	unmarshaled.set_RootBonePointers_0(marshaled.___RootBonePointers_0);
	float unmarshaled_DeltaTime_temp_1 = 0.0f;
	unmarshaled_DeltaTime_temp_1 = marshaled.___DeltaTime_1;
	unmarshaled.set_DeltaTime_1(unmarshaled_DeltaTime_temp_1);
}
// Conversion method for clean up from marshalling of: VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler/Job
IL2CPP_EXTERN_C void Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB_marshal_com_cleanup(Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB_marshaled_com& marshaled)
{
}
// System.Void VRM.FastSpringBones.Schedulers.UpdateSpringBoneJobScheduler/Job::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Job_Execute_m9F25DE906BE88F857FD073732697D3BC8880ACBD (Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// RootBonePointers[index]->Update(DeltaTime);
		BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 ** L_0 = __this->get_RootBonePointers_0();
		int32_t L_1 = ___index0;
		uint32_t L_2 = sizeof(BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 *);
		float L_3 = __this->get_DeltaTime_1();
		BlittableRootBone_Update_mD7798AEFCD43AAAACE805DCE65A7CEDB4B303EA3((BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 *)(*((intptr_t*)((BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 **)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_1), (int32_t)L_2)))))), L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Job_Execute_m9F25DE906BE88F857FD073732697D3BC8880ACBD_AdjustorThunk (RuntimeObject * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB * _thisAdjusted = reinterpret_cast<Job_t89E7522341B4D8D1C36A1F789236CCF45F8A54AB *>(__this + _offset);
	Job_Execute_m9F25DE906BE88F857FD073732697D3BC8880ACBD(_thisAdjusted, ___index0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BlittableCollider_get_Offset_m4B695A7965BC52B6E961C41F4EE4BA499D65C943_inline (BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Offset { get; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3COffsetU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BlittableCollider_get_Radius_m2B59ACF75F8211B871414B3F53A55BFE007A18AC_inline (BlittableCollider_t3FD1DA461D5C1987EF6C70559D3624D1BB6416CA * __this, const RuntimeMethod* method)
{
	{
		// public float Radius { get; }
		float L_0 = __this->get_U3CRadiusU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32  BlittableColliderGroup_get_Colliders_m77764EDD28DF21494344677FD9E815FACC7CDFB4_inline (BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * __this, const RuntimeMethod* method)
{
	{
		// public BlittableColliders Colliders { get; }
		BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32  L_0 = __this->get_U3CCollidersU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * BlittableColliderGroup_get_Transform_m7FD69C9BFD454A91E6E236AA736415C6088CBDB4_inline (BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * __this, const RuntimeMethod* method)
{
	{
		// public unsafe BlittableTransform* Transform { get; }
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_0 = __this->get_U3CTransformU3Ek__BackingField_1();
		return (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BlittableColliderGroups_get_Length_m63C73D34AF5DE3A69C02849442BAACEEA8654FE5_inline (BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * __this, const RuntimeMethod* method)
{
	{
		// public int Length { get; }
		int32_t L_0 = __this->get_U3CLengthU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BlittableTransform_get_WorldPosition_m6ABCC50FC25950578AA54380B03ACDE0C39BD8F0_inline (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 WorldPosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CWorldPositionU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BlittableColliders_get_Count_m501185A413889E631E4934DA8C36FD5B83A7164E_inline (BlittableColliders_tA9BC386C5C8131B2D744BE2DFA409A065666AB32 * __this, const RuntimeMethod* method)
{
	{
		// public int Count { get; }
		int32_t L_0 = __this->get_U3CCountU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BlittablePoint_get_CurrentPosition_mA3FC21A18552A6B92543D023C0B927A188B3CE39_inline (BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 CurrentPosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CCurrentPositionU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlittablePoint_set_CurrentPosition_mD212ECEE996FB2BE7A0E4973C8D59D73484B6CA5_inline (BlittablePoint_tA632C38F00625D46D319401DDE283872A66D5F8A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 CurrentPosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CCurrentPositionU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  BlittableTransform_get_LocalToWorld_mC58E83F111E24534359AE7A9EA2BAD043249D9E8_inline (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * __this, const RuntimeMethod* method)
{
	{
		// public Matrix4x4 LocalToWorld => _localToWorld;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = __this->get__localToWorld_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BlittablePoints_get_Count_m35946661A8F2267C8F4CB4B8557FECC28675BF1C_inline (BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * __this, const RuntimeMethod* method)
{
	{
		// public int Count { get; }
		int32_t L_0 = __this->get_U3CCountU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlittableTransform_set_WorldPosition_mFA291B3B2F5C2AEFEF9269A1B19A2C20E60FC442_inline (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 WorldPosition { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CWorldPositionU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NativeColliderGroups_get_ColliderGroups_m3B73743E3A75C21A8BD8D424F11CB6CDCBDDDDB2_inline (NativeColliderGroups_t369C77044EB45EF8DEB17A7AE5CF73246F8E3212 * __this, const RuntimeMethod* method)
{
	{
		// get => _colliderGroups;
		RuntimeObject* L_0 = __this->get__colliderGroups_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F  NativeColliderGroup_get_Colliders_m771DBEE4EFD0768B02440F77D49DC3C9846D6109_inline (NativeColliderGroup_t2440AAE202F156DA1CEF309D54FAA464F12B403B * __this, const RuntimeMethod* method)
{
	{
		// private NativeArray<BlittableCollider> Colliders { get; }
		NativeArray_1_t8605CC8D5727F5A6151795EAC9E963EA0CF2390F  L_0 = __this->get_U3CCollidersU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TransformRegistry_get_PullTargets_mB25BB3C0A2531F84AC0A54F2A7C5F06735AE18B3_inline (TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * __this, const RuntimeMethod* method)
{
	{
		// public IReadOnlyList<NativeTransform> PullTargets => _pullTargets;
		List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * L_0 = __this->get__pullTargets_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * NativeTransform_get_Transform_mD31EB4E9767FA389DF327511DE7B7271129A8D20_inline (NativeTransform_t729B7A60431965150BDD5D2A5A15663E7C19BE91 * __this, const RuntimeMethod* method)
{
	{
		// public Transform Transform { get; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CTransformU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TransformRegistry_get_PushTargets_m4B78A179B0F6EDFE4B6BB6F562808A6B811F2D15_inline (TransformRegistry_tF9489A0BFAB6F062E2BC208053DF12274E492CEF * __this, const RuntimeMethod* method)
{
	{
		// public IReadOnlyList<NativeTransform> PushTargets => _pushTargets;
		List_1_tA46CD5EA0A0EADD7D2AB989DC8431CE92CC4DCBE * L_0 = __this->get__pushTargets_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * NativePointer_1_GetUnsafePtr_m3BFD7CC15F4826354FD480A540A6D7259908328A_gshared_inline (NativePointer_1_tB3554FDF5108BEDECE546ECC595BC12EC64F8F74 * __this, const RuntimeMethod* method)
{
	{
		// public unsafe T* GetUnsafePtr() => _unsafePtr;
		BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E * L_0 = (BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E *)__this->get__unsafePtr_0();
		return (BlittableColliderGroup_tCCC654437246500E8FF0CBA3D62B7C7C806CDE7E *)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * NativePointer_1_GetUnsafePtr_m3D00124F41554DA72CC54437217D15A41ADDF02C_gshared_inline (NativePointer_1_t21364EFD9C23636A82B081AFBF911D21814BB449 * __this, const RuntimeMethod* method)
{
	{
		// public unsafe T* GetUnsafePtr() => _unsafePtr;
		BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 * L_0 = (BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 *)__this->get__unsafePtr_0();
		return (BlittableColliderGroups_tADDEB496FC7573F2F5F0820A3E1E702C7D068AF4 *)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * NativePointer_1_GetUnsafePtr_m87098DA39302F62A2BEDD8E4B56FD0B0F5F67295_gshared_inline (NativePointer_1_tBD0F88F36A51FC5575FDA412C1ED0E8F9B6191E0 * __this, const RuntimeMethod* method)
{
	{
		// public unsafe T* GetUnsafePtr() => _unsafePtr;
		BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC * L_0 = (BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *)__this->get__unsafePtr_0();
		return (BlittablePoints_tE6A67B76E6452B7B15FCD731153D23B310E954BC *)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * NativePointer_1_GetUnsafePtr_m2E5086436D93F6C2410A12F6C6BD13ACFBD2B1A5_gshared_inline (NativePointer_1_t359D3A6F2890C6E9E01A9DDD66D3AB54ED77D407 * __this, const RuntimeMethod* method)
{
	{
		// public unsafe T* GetUnsafePtr() => _unsafePtr;
		BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C * L_0 = (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)__this->get__unsafePtr_0();
		return (BlittableTransform_tA768D16F22D1FE217C3E219A921FF7BC6FA35C7C *)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Registry_1_get_Items_mA2E74A5F4FFF9371FD2B43B5A3B0A3C73C318115_gshared_inline (Registry_1_t3620ACCE4252740C65818345896E0DAA502FF0F6 * __this, const RuntimeMethod* method)
{
	{
		// public IReadOnlyList<T> Items => _items;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get__items_0();
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 * NativePointer_1_GetUnsafePtr_mD1E56BD92F641FAC550435B1EB4C8F76330CD903_gshared_inline (NativePointer_1_tA84887E8B6A4A2DB293B9BF845D312345755B2CC * __this, const RuntimeMethod* method)
{
	{
		// public unsafe T* GetUnsafePtr() => _unsafePtr;
		BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 * L_0 = (BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 *)__this->get__unsafePtr_0();
		return (BlittableRootBone_tE2AB964579FC96D7D1CCDC120A333F92980F0BD6 *)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
