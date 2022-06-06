#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// Client.TrackingStreamConsumer`1/ConnectionRefusalWarningSystem<MPDepthCore.Calibration.Camera.RawTrackingData>
struct ConnectionRefusalWarningSystem_t534B7ACCE8119DB21872393E7801D6E258D40193;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<MPDepthCore.Calibration.Camera.SavedTrackerCalibration>
struct IEnumerable_1_t2B84CF9AB9A89A0942B761D923C5B7431C933A09;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<MPDepthCore.Calibration.Camera.SavedTrackerCalibration>
struct List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC;
// System.Collections.Generic.List`1<StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration>
struct List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849;
// Client.TrackingStreamConsumer`1<System.Object>
struct TrackingStreamConsumer_1_t36AE47F76F0CF9C505CF8F46A145EE59D80627DF;
// Client.TrackingStreamConsumer`1<MPDepthCore.Calibration.Camera.RawTrackingData>
struct TrackingStreamConsumer_1_tE6B7D0BB422AD8F293A5633C2781A53B7A04107F;
// Client.TrackingStreamConsumer`1/TrackingStreamNotificationEvent<MPDepthCore.Calibration.Camera.RawTrackingData>
struct TrackingStreamNotificationEvent_t20103F81B134B5862A8DC25AB98B72F094D48C6C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// MPDepthCore.Calibration.Camera.SavedTrackerCalibration[]
struct SavedTrackerCalibrationU5BU5D_tA057D55D961AAA1BFD2BAA2CBBD56D1CE62195C3;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration[]
struct SavedStreamTrackingConfigurationU5BU5D_tFE7FE85FE2C1FED8BBBCFEA37B39902E778777B7;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// MPDepthCore.Calibration.Camera.BlendshapeTrackingData
struct BlendshapeTrackingData_t989894D483314D943170C8D7E807572809AF9529;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// MPDepthCore.Calibration.Camera.CameraTrackingData
struct CameraTrackingData_tAAE8DCC63B02088F63C7D759E4FCF8A268374FCE;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// MPDepthCore.Calibration.Camera.EyeTrackingData
struct EyeTrackingData_tCEFBEC72106BDE88D157D2A3ECE2B59C185551CC;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE;
// MPDepthCore.Calibration.Camera.MPDepthTrackingData
struct MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7;
// MPDepthCore.TrackingSources.MPDepthTrackingSource
struct MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// OffAxisCamera.OffAxisCameraRig
struct OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF;
// OffAxisCamera.ScreenConfiguration.OffAxisScreenProvider
struct OffAxisScreenProvider_t45C80864E577E00448ACE703B2FAED5A7A961BFA;
// MPDepthCore.Calibration.Camera.RawTrackingData
struct RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// MPDepthCore.Calibration.Camera.SavedTrackerCalibration
struct SavedTrackerCalibration_t3FA08259D0F122FD3529F267C02CEBD78608A15B;
// MPDepthCore.Calibration.Screen.ScreenCalibrationProvider
struct ScreenCalibrationProvider_tD648C36DFC6279FB60A284A5824D0FA012CD9F80;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// StreamTrackingSystem.StreamReceiverToTrackingSource
struct StreamReceiverToTrackingSource_t60922E4944E79E7772DE443ED1F71D67D28A805C;
// StreamTrackingSystem.StreamTrackingCalibrator
struct StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C;
// StreamTrackingSystem.StreamTrackingDataReceiver
struct StreamTrackingDataReceiver_t6A04B9CE0EDA64F9EEA319D25EDFC6153651FED0;
// StreamTrackingSystem.StreamTrackingProvider
struct StreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// MPDepthCore.Calibration.Camera.TrackerOffsetCalibration
struct TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321;
// MPDepthCore.Calibration.Camera.TrackingCalibrationProvider
struct TrackingCalibrationProvider_t936458C67919392EE6B88C439729E2AECA9293AB;
// MPDepthCore.TrackingSystem
struct TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// Client.UdpClient
struct UdpClient_tB4DD273AAF94CA02D0400E94E4D9EA9BD6143C7A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// MPDepthCore.TrackingSources.MPDepthTrackingSource/TrackingDataUpdatedEvent
struct TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5;
// OffAxisCamera.OffAxisCameraRig/UpdateCameraLocationEvent
struct UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D;
// StreamTrackingSystem.StreamTrackingCalibrator/<StartCalibration>d__14
struct U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A;
// StreamTrackingSystem.StreamTrackingProvider/SaveData
struct SaveData_t2D9CC0249F1B127F8D324F24D1F03657D61B0A3F;
// StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration
struct SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SaveData_t2D9CC0249F1B127F8D324F24D1F03657D61B0A3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02EC0FD34739C2A844A6731C3854FA80A3DD1B28;
IL2CPP_EXTERN_C String_t* _stringLiteral486B66E7C5A80B862FB8B09AD92A68207CDDA2AD;
IL2CPP_EXTERN_C String_t* _stringLiteral4DCEDEA5F93BCB51A628179CF43BC654CFEBC3F6;
IL2CPP_EXTERN_C String_t* _stringLiteral5FA8FD27D5ED3C6D58DCA0B4BF97E817548A4BE2;
IL2CPP_EXTERN_C String_t* _stringLiteral77917F65152BFCCFCED5473A1BCB1188F7DC422E;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A_mACA03DF2FBC65FC4B2416D635969D3F8207E18FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m3A614068CD14EBFEE8DE1D5255D362391F135C92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A_m48595B278124B55087BED8FEA29F50D01DFAB959_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisTrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53_mDC6238E62F605314461360820EB92746B45D71E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisStreamTrackingDataReceiver_t6A04B9CE0EDA64F9EEA319D25EDFC6153651FED0_m750A71A715EE2260E844B266F278F01299463431_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisStreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667_m1F8FDC3667013B96EFDC6EBBA8954F390FB67F86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisSaveData_t2D9CC0249F1B127F8D324F24D1F03657D61B0A3F_m1371521B841103DD7F8ADBB4502E34EA78B63D60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5CABB97D67665D79EB0785BED3945F03B2C4B2E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE212116F386BEF66B275F66FCB61352CFB5D884A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F199C5D42B799C186A8C0DCFB7E43E94D3E8393_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m038A4AE32D7F9403FB8C624BD25C38A9F7D4F348_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamTrackingCalibrator_TrackingUpdated_mF41CF3400AD8F83C043AB04EE7F78F03A1B73C05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingStreamConsumer_1__ctor_m496362C9C9FDEF0579C7BD121FB530B2CA5FEEA2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6534964D4CD80B910680AA7201F527121AD9DA9A 
{
public:

public:
};


// System.Object


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


// System.Collections.Generic.List`1<MPDepthCore.Calibration.Camera.SavedTrackerCalibration>
struct List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SavedTrackerCalibrationU5BU5D_tA057D55D961AAA1BFD2BAA2CBBD56D1CE62195C3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC, ____items_1)); }
	inline SavedTrackerCalibrationU5BU5D_tA057D55D961AAA1BFD2BAA2CBBD56D1CE62195C3* get__items_1() const { return ____items_1; }
	inline SavedTrackerCalibrationU5BU5D_tA057D55D961AAA1BFD2BAA2CBBD56D1CE62195C3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SavedTrackerCalibrationU5BU5D_tA057D55D961AAA1BFD2BAA2CBBD56D1CE62195C3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SavedTrackerCalibrationU5BU5D_tA057D55D961AAA1BFD2BAA2CBBD56D1CE62195C3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC_StaticFields, ____emptyArray_5)); }
	inline SavedTrackerCalibrationU5BU5D_tA057D55D961AAA1BFD2BAA2CBBD56D1CE62195C3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SavedTrackerCalibrationU5BU5D_tA057D55D961AAA1BFD2BAA2CBBD56D1CE62195C3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SavedTrackerCalibrationU5BU5D_tA057D55D961AAA1BFD2BAA2CBBD56D1CE62195C3* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration>
struct List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SavedStreamTrackingConfigurationU5BU5D_tFE7FE85FE2C1FED8BBBCFEA37B39902E778777B7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C, ____items_1)); }
	inline SavedStreamTrackingConfigurationU5BU5D_tFE7FE85FE2C1FED8BBBCFEA37B39902E778777B7* get__items_1() const { return ____items_1; }
	inline SavedStreamTrackingConfigurationU5BU5D_tFE7FE85FE2C1FED8BBBCFEA37B39902E778777B7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SavedStreamTrackingConfigurationU5BU5D_tFE7FE85FE2C1FED8BBBCFEA37B39902E778777B7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SavedStreamTrackingConfigurationU5BU5D_tFE7FE85FE2C1FED8BBBCFEA37B39902E778777B7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C_StaticFields, ____emptyArray_5)); }
	inline SavedStreamTrackingConfigurationU5BU5D_tFE7FE85FE2C1FED8BBBCFEA37B39902E778777B7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SavedStreamTrackingConfigurationU5BU5D_tFE7FE85FE2C1FED8BBBCFEA37B39902E778777B7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SavedStreamTrackingConfigurationU5BU5D_tFE7FE85FE2C1FED8BBBCFEA37B39902E778777B7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// MPDepthCore.Calibration.Camera.BlendshapeTrackingData
struct BlendshapeTrackingData_t989894D483314D943170C8D7E807572809AF9529  : public RuntimeObject
{
public:
	// System.Single[] MPDepthCore.Calibration.Camera.BlendshapeTrackingData::Blendshapes
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___Blendshapes_0;

public:
	inline static int32_t get_offset_of_Blendshapes_0() { return static_cast<int32_t>(offsetof(BlendshapeTrackingData_t989894D483314D943170C8D7E807572809AF9529, ___Blendshapes_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_Blendshapes_0() const { return ___Blendshapes_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_Blendshapes_0() { return &___Blendshapes_0; }
	inline void set_Blendshapes_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___Blendshapes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Blendshapes_0), (void*)value);
	}
};


// MPDepthCore.Calibration.Camera.MPDepthTrackingData
struct MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7  : public RuntimeObject
{
public:
	// System.Boolean MPDepthCore.Calibration.Camera.MPDepthTrackingData::IsTracking
	bool ___IsTracking_0;
	// MPDepthCore.Calibration.Camera.CameraTrackingData MPDepthCore.Calibration.Camera.MPDepthTrackingData::CameraTrackingData
	CameraTrackingData_tAAE8DCC63B02088F63C7D759E4FCF8A268374FCE * ___CameraTrackingData_1;
	// MPDepthCore.Calibration.Camera.EyeTrackingData MPDepthCore.Calibration.Camera.MPDepthTrackingData::EyeTrackingData
	EyeTrackingData_tCEFBEC72106BDE88D157D2A3ECE2B59C185551CC * ___EyeTrackingData_2;
	// MPDepthCore.Calibration.Camera.BlendshapeTrackingData MPDepthCore.Calibration.Camera.MPDepthTrackingData::BlendshapeTrackingData
	BlendshapeTrackingData_t989894D483314D943170C8D7E807572809AF9529 * ___BlendshapeTrackingData_3;

public:
	inline static int32_t get_offset_of_IsTracking_0() { return static_cast<int32_t>(offsetof(MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7, ___IsTracking_0)); }
	inline bool get_IsTracking_0() const { return ___IsTracking_0; }
	inline bool* get_address_of_IsTracking_0() { return &___IsTracking_0; }
	inline void set_IsTracking_0(bool value)
	{
		___IsTracking_0 = value;
	}

	inline static int32_t get_offset_of_CameraTrackingData_1() { return static_cast<int32_t>(offsetof(MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7, ___CameraTrackingData_1)); }
	inline CameraTrackingData_tAAE8DCC63B02088F63C7D759E4FCF8A268374FCE * get_CameraTrackingData_1() const { return ___CameraTrackingData_1; }
	inline CameraTrackingData_tAAE8DCC63B02088F63C7D759E4FCF8A268374FCE ** get_address_of_CameraTrackingData_1() { return &___CameraTrackingData_1; }
	inline void set_CameraTrackingData_1(CameraTrackingData_tAAE8DCC63B02088F63C7D759E4FCF8A268374FCE * value)
	{
		___CameraTrackingData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CameraTrackingData_1), (void*)value);
	}

	inline static int32_t get_offset_of_EyeTrackingData_2() { return static_cast<int32_t>(offsetof(MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7, ___EyeTrackingData_2)); }
	inline EyeTrackingData_tCEFBEC72106BDE88D157D2A3ECE2B59C185551CC * get_EyeTrackingData_2() const { return ___EyeTrackingData_2; }
	inline EyeTrackingData_tCEFBEC72106BDE88D157D2A3ECE2B59C185551CC ** get_address_of_EyeTrackingData_2() { return &___EyeTrackingData_2; }
	inline void set_EyeTrackingData_2(EyeTrackingData_tCEFBEC72106BDE88D157D2A3ECE2B59C185551CC * value)
	{
		___EyeTrackingData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EyeTrackingData_2), (void*)value);
	}

	inline static int32_t get_offset_of_BlendshapeTrackingData_3() { return static_cast<int32_t>(offsetof(MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7, ___BlendshapeTrackingData_3)); }
	inline BlendshapeTrackingData_t989894D483314D943170C8D7E807572809AF9529 * get_BlendshapeTrackingData_3() const { return ___BlendshapeTrackingData_3; }
	inline BlendshapeTrackingData_t989894D483314D943170C8D7E807572809AF9529 ** get_address_of_BlendshapeTrackingData_3() { return &___BlendshapeTrackingData_3; }
	inline void set_BlendshapeTrackingData_3(BlendshapeTrackingData_t989894D483314D943170C8D7E807572809AF9529 * value)
	{
		___BlendshapeTrackingData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BlendshapeTrackingData_3), (void*)value);
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

// StreamTrackingSystem.StreamTrackingProvider/SaveData
struct SaveData_t2D9CC0249F1B127F8D324F24D1F03657D61B0A3F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration> StreamTrackingSystem.StreamTrackingProvider/SaveData::savedConfigurations
	List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C * ___savedConfigurations_0;
	// StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration StreamTrackingSystem.StreamTrackingProvider/SaveData::currentCalibration
	SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * ___currentCalibration_1;

public:
	inline static int32_t get_offset_of_savedConfigurations_0() { return static_cast<int32_t>(offsetof(SaveData_t2D9CC0249F1B127F8D324F24D1F03657D61B0A3F, ___savedConfigurations_0)); }
	inline List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C * get_savedConfigurations_0() const { return ___savedConfigurations_0; }
	inline List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C ** get_address_of_savedConfigurations_0() { return &___savedConfigurations_0; }
	inline void set_savedConfigurations_0(List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C * value)
	{
		___savedConfigurations_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___savedConfigurations_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentCalibration_1() { return static_cast<int32_t>(offsetof(SaveData_t2D9CC0249F1B127F8D324F24D1F03657D61B0A3F, ___currentCalibration_1)); }
	inline SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * get_currentCalibration_1() const { return ___currentCalibration_1; }
	inline SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF ** get_address_of_currentCalibration_1() { return &___currentCalibration_1; }
	inline void set_currentCalibration_1(SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * value)
	{
		___currentCalibration_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentCalibration_1), (void*)value);
	}
};


// StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration
struct SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF  : public RuntimeObject
{
public:
	// System.String StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration::name
	String_t* ___name_0;
	// MPDepthCore.Calibration.Camera.TrackerOffsetCalibration StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration::TrackerOffsetCalibration
	TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 * ___TrackerOffsetCalibration_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_TrackerOffsetCalibration_1() { return static_cast<int32_t>(offsetof(SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF, ___TrackerOffsetCalibration_1)); }
	inline TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 * get_TrackerOffsetCalibration_1() const { return ___TrackerOffsetCalibration_1; }
	inline TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 ** get_address_of_TrackerOffsetCalibration_1() { return &___TrackerOffsetCalibration_1; }
	inline void set_TrackerOffsetCalibration_1(TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 * value)
	{
		___TrackerOffsetCalibration_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrackerOffsetCalibration_1), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
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


// MPDepthCore.Calibration.Camera.RawTrackingData
struct RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD  : public MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7
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


// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
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


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5, ___m_task_2)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Net.Sockets.AddressFamily
struct AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// MPDepthCore.Calibration.Camera.TrackingPose
struct TrackingPose_t9D6C81FDF981E08EBF7CDBBB363CA99CAB3EC265  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 MPDepthCore.Calibration.Camera.TrackingPose::Position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Position_0;
	// UnityEngine.Vector3 MPDepthCore.Calibration.Camera.TrackingPose::Eulers
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Eulers_1;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(TrackingPose_t9D6C81FDF981E08EBF7CDBBB363CA99CAB3EC265, ___Position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Position_0() const { return ___Position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Eulers_1() { return static_cast<int32_t>(offsetof(TrackingPose_t9D6C81FDF981E08EBF7CDBBB363CA99CAB3EC265, ___Eulers_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Eulers_1() const { return ___Eulers_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Eulers_1() { return &___Eulers_1; }
	inline void set_Eulers_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Eulers_1 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849, ___m_result_40)); }
	inline bool get_m_result_40() const { return ___m_result_40; }
	inline bool* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(bool value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// MPDepthCore.Calibration.Camera.CameraTrackingData
struct CameraTrackingData_tAAE8DCC63B02088F63C7D759E4FCF8A268374FCE  : public TrackingPose_t9D6C81FDF981E08EBF7CDBBB363CA99CAB3EC265
{
public:

public:
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToString_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Numbers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Any_0)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loopback_1), (void*)value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Broadcast_2), (void*)value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___None_3)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_None_3() const { return ___None_3; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_7), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Loopback_8), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6None_9), (void*)value);
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

// MPDepthCore.Calibration.Camera.TrackerOffsetCalibration
struct TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321  : public TrackingPose_t9D6C81FDF981E08EBF7CDBBB363CA99CAB3EC265
{
public:

public:
};


// StreamTrackingSystem.StreamTrackingCalibrator/<StartCalibration>d__14
struct U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A  : public RuntimeObject
{
public:
	// System.Int32 StreamTrackingSystem.StreamTrackingCalibrator/<StartCalibration>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> StreamTrackingSystem.StreamTrackingCalibrator/<StartCalibration>d__14::<>t__builder
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  ___U3CU3Et__builder_1;
	// StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration StreamTrackingSystem.StreamTrackingCalibrator/<StartCalibration>d__14::newCalibration
	SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * ___newCalibration_2;
	// StreamTrackingSystem.StreamTrackingCalibrator StreamTrackingSystem.StreamTrackingCalibrator/<StartCalibration>d__14::<>4__this
	StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C * ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.TaskAwaiter StreamTrackingSystem.StreamTrackingCalibrator/<StartCalibration>d__14::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_newCalibration_2() { return static_cast<int32_t>(offsetof(U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A, ___newCalibration_2)); }
	inline SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * get_newCalibration_2() const { return ___newCalibration_2; }
	inline SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF ** get_address_of_newCalibration_2() { return &___newCalibration_2; }
	inline void set_newCalibration_2(SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * value)
	{
		___newCalibration_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newCalibration_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A, ___U3CU3E4__this_3)); }
	inline StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// MPDepthCore.TrackingSources.MPDepthTrackingSource/TrackingDataUpdatedEvent
struct TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Client.TrackingStreamConsumer`1<MPDepthCore.Calibration.Camera.RawTrackingData>
struct TrackingStreamConsumer_1_tE6B7D0BB422AD8F293A5633C2781A53B7A04107F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Client.TrackingStreamConsumer`1::port
	int32_t ___port_5;
	// System.String Client.TrackingStreamConsumer`1::address
	String_t* ___address_6;
	// System.Boolean Client.TrackingStreamConsumer`1::receiving
	bool ___receiving_7;
	// System.Single Client.TrackingStreamConsumer`1::timeSinceLastUpdate
	float ___timeSinceLastUpdate_8;
	// System.Single Client.TrackingStreamConsumer`1::lastTimeDataReceived
	float ___lastTimeDataReceived_9;
	// System.Single Client.TrackingStreamConsumer`1::receiveCutoff
	float ___receiveCutoff_10;
	// System.Boolean Client.TrackingStreamConsumer`1::showConnectionRefusedError
	bool ___showConnectionRefusedError_11;
	// Client.UdpClient Client.TrackingStreamConsumer`1::client
	UdpClient_tB4DD273AAF94CA02D0400E94E4D9EA9BD6143C7A * ___client_12;
	// System.Boolean Client.TrackingStreamConsumer`1::running
	bool ___running_13;
	// System.Single Client.TrackingStreamConsumer`1::warningDelayTime
	float ___warningDelayTime_14;
	// Client.TrackingStreamConsumer`1/ConnectionRefusalWarningSystem<T> Client.TrackingStreamConsumer`1::connectionRefusalWarningSystem
	ConnectionRefusalWarningSystem_t534B7ACCE8119DB21872393E7801D6E258D40193 * ___connectionRefusalWarningSystem_15;

public:
	inline static int32_t get_offset_of_port_5() { return static_cast<int32_t>(offsetof(TrackingStreamConsumer_1_tE6B7D0BB422AD8F293A5633C2781A53B7A04107F, ___port_5)); }
	inline int32_t get_port_5() const { return ___port_5; }
	inline int32_t* get_address_of_port_5() { return &___port_5; }
	inline void set_port_5(int32_t value)
	{
		___port_5 = value;
	}

	inline static int32_t get_offset_of_address_6() { return static_cast<int32_t>(offsetof(TrackingStreamConsumer_1_tE6B7D0BB422AD8F293A5633C2781A53B7A04107F, ___address_6)); }
	inline String_t* get_address_6() const { return ___address_6; }
	inline String_t** get_address_of_address_6() { return &___address_6; }
	inline void set_address_6(String_t* value)
	{
		___address_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___address_6), (void*)value);
	}

	inline static int32_t get_offset_of_receiving_7() { return static_cast<int32_t>(offsetof(TrackingStreamConsumer_1_tE6B7D0BB422AD8F293A5633C2781A53B7A04107F, ___receiving_7)); }
	inline bool get_receiving_7() const { return ___receiving_7; }
	inline bool* get_address_of_receiving_7() { return &___receiving_7; }
	inline void set_receiving_7(bool value)
	{
		___receiving_7 = value;
	}

	inline static int32_t get_offset_of_timeSinceLastUpdate_8() { return static_cast<int32_t>(offsetof(TrackingStreamConsumer_1_tE6B7D0BB422AD8F293A5633C2781A53B7A04107F, ___timeSinceLastUpdate_8)); }
	inline float get_timeSinceLastUpdate_8() const { return ___timeSinceLastUpdate_8; }
	inline float* get_address_of_timeSinceLastUpdate_8() { return &___timeSinceLastUpdate_8; }
	inline void set_timeSinceLastUpdate_8(float value)
	{
		___timeSinceLastUpdate_8 = value;
	}

	inline static int32_t get_offset_of_lastTimeDataReceived_9() { return static_cast<int32_t>(offsetof(TrackingStreamConsumer_1_tE6B7D0BB422AD8F293A5633C2781A53B7A04107F, ___lastTimeDataReceived_9)); }
	inline float get_lastTimeDataReceived_9() const { return ___lastTimeDataReceived_9; }
	inline float* get_address_of_lastTimeDataReceived_9() { return &___lastTimeDataReceived_9; }
	inline void set_lastTimeDataReceived_9(float value)
	{
		___lastTimeDataReceived_9 = value;
	}

	inline static int32_t get_offset_of_receiveCutoff_10() { return static_cast<int32_t>(offsetof(TrackingStreamConsumer_1_tE6B7D0BB422AD8F293A5633C2781A53B7A04107F, ___receiveCutoff_10)); }
	inline float get_receiveCutoff_10() const { return ___receiveCutoff_10; }
	inline float* get_address_of_receiveCutoff_10() { return &___receiveCutoff_10; }
	inline void set_receiveCutoff_10(float value)
	{
		___receiveCutoff_10 = value;
	}

	inline static int32_t get_offset_of_showConnectionRefusedError_11() { return static_cast<int32_t>(offsetof(TrackingStreamConsumer_1_tE6B7D0BB422AD8F293A5633C2781A53B7A04107F, ___showConnectionRefusedError_11)); }
	inline bool get_showConnectionRefusedError_11() const { return ___showConnectionRefusedError_11; }
	inline bool* get_address_of_showConnectionRefusedError_11() { return &___showConnectionRefusedError_11; }
	inline void set_showConnectionRefusedError_11(bool value)
	{
		___showConnectionRefusedError_11 = value;
	}

	inline static int32_t get_offset_of_client_12() { return static_cast<int32_t>(offsetof(TrackingStreamConsumer_1_tE6B7D0BB422AD8F293A5633C2781A53B7A04107F, ___client_12)); }
	inline UdpClient_tB4DD273AAF94CA02D0400E94E4D9EA9BD6143C7A * get_client_12() const { return ___client_12; }
	inline UdpClient_tB4DD273AAF94CA02D0400E94E4D9EA9BD6143C7A ** get_address_of_client_12() { return &___client_12; }
	inline void set_client_12(UdpClient_tB4DD273AAF94CA02D0400E94E4D9EA9BD6143C7A * value)
	{
		___client_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_12), (void*)value);
	}

	inline static int32_t get_offset_of_running_13() { return static_cast<int32_t>(offsetof(TrackingStreamConsumer_1_tE6B7D0BB422AD8F293A5633C2781A53B7A04107F, ___running_13)); }
	inline bool get_running_13() const { return ___running_13; }
	inline bool* get_address_of_running_13() { return &___running_13; }
	inline void set_running_13(bool value)
	{
		___running_13 = value;
	}

	inline static int32_t get_offset_of_warningDelayTime_14() { return static_cast<int32_t>(offsetof(TrackingStreamConsumer_1_tE6B7D0BB422AD8F293A5633C2781A53B7A04107F, ___warningDelayTime_14)); }
	inline float get_warningDelayTime_14() const { return ___warningDelayTime_14; }
	inline float* get_address_of_warningDelayTime_14() { return &___warningDelayTime_14; }
	inline void set_warningDelayTime_14(float value)
	{
		___warningDelayTime_14 = value;
	}

	inline static int32_t get_offset_of_connectionRefusalWarningSystem_15() { return static_cast<int32_t>(offsetof(TrackingStreamConsumer_1_tE6B7D0BB422AD8F293A5633C2781A53B7A04107F, ___connectionRefusalWarningSystem_15)); }
	inline ConnectionRefusalWarningSystem_t534B7ACCE8119DB21872393E7801D6E258D40193 * get_connectionRefusalWarningSystem_15() const { return ___connectionRefusalWarningSystem_15; }
	inline ConnectionRefusalWarningSystem_t534B7ACCE8119DB21872393E7801D6E258D40193 ** get_address_of_connectionRefusalWarningSystem_15() { return &___connectionRefusalWarningSystem_15; }
	inline void set_connectionRefusalWarningSystem_15(ConnectionRefusalWarningSystem_t534B7ACCE8119DB21872393E7801D6E258D40193 * value)
	{
		___connectionRefusalWarningSystem_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectionRefusalWarningSystem_15), (void*)value);
	}
};

struct TrackingStreamConsumer_1_tE6B7D0BB422AD8F293A5633C2781A53B7A04107F_StaticFields
{
public:
	// Client.TrackingStreamConsumer`1/TrackingStreamNotificationEvent<T> Client.TrackingStreamConsumer`1::TrackingStreamNotificationOccured
	TrackingStreamNotificationEvent_t20103F81B134B5862A8DC25AB98B72F094D48C6C * ___TrackingStreamNotificationOccured_4;

public:
	inline static int32_t get_offset_of_TrackingStreamNotificationOccured_4() { return static_cast<int32_t>(offsetof(TrackingStreamConsumer_1_tE6B7D0BB422AD8F293A5633C2781A53B7A04107F_StaticFields, ___TrackingStreamNotificationOccured_4)); }
	inline TrackingStreamNotificationEvent_t20103F81B134B5862A8DC25AB98B72F094D48C6C * get_TrackingStreamNotificationOccured_4() const { return ___TrackingStreamNotificationOccured_4; }
	inline TrackingStreamNotificationEvent_t20103F81B134B5862A8DC25AB98B72F094D48C6C ** get_address_of_TrackingStreamNotificationOccured_4() { return &___TrackingStreamNotificationOccured_4; }
	inline void set_TrackingStreamNotificationOccured_4(TrackingStreamNotificationEvent_t20103F81B134B5862A8DC25AB98B72F094D48C6C * value)
	{
		___TrackingStreamNotificationOccured_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrackingStreamNotificationOccured_4), (void*)value);
	}
};


// MPDepthCore.TrackingSources.MPDepthTrackingSource
struct MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MPDepthCore.Calibration.Camera.MPDepthTrackingData MPDepthCore.TrackingSources.MPDepthTrackingSource::TrackingData
	MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * ___TrackingData_4;

public:
	inline static int32_t get_offset_of_TrackingData_4() { return static_cast<int32_t>(offsetof(MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7, ___TrackingData_4)); }
	inline MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * get_TrackingData_4() const { return ___TrackingData_4; }
	inline MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 ** get_address_of_TrackingData_4() { return &___TrackingData_4; }
	inline void set_TrackingData_4(MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * value)
	{
		___TrackingData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrackingData_4), (void*)value);
	}
};


// OffAxisCamera.OffAxisCameraRig
struct OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// OffAxisCamera.ScreenConfiguration.OffAxisScreenProvider OffAxisCamera.OffAxisCameraRig::screen
	OffAxisScreenProvider_t45C80864E577E00448ACE703B2FAED5A7A961BFA * ___screen_4;
	// System.Boolean OffAxisCamera.OffAxisCameraRig::trackingDisabled
	bool ___trackingDisabled_5;
	// OffAxisCamera.OffAxisCameraRig/UpdateCameraLocationEvent OffAxisCamera.OffAxisCameraRig::CameraLocationUpdated
	UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * ___CameraLocationUpdated_6;

public:
	inline static int32_t get_offset_of_screen_4() { return static_cast<int32_t>(offsetof(OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF, ___screen_4)); }
	inline OffAxisScreenProvider_t45C80864E577E00448ACE703B2FAED5A7A961BFA * get_screen_4() const { return ___screen_4; }
	inline OffAxisScreenProvider_t45C80864E577E00448ACE703B2FAED5A7A961BFA ** get_address_of_screen_4() { return &___screen_4; }
	inline void set_screen_4(OffAxisScreenProvider_t45C80864E577E00448ACE703B2FAED5A7A961BFA * value)
	{
		___screen_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___screen_4), (void*)value);
	}

	inline static int32_t get_offset_of_trackingDisabled_5() { return static_cast<int32_t>(offsetof(OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF, ___trackingDisabled_5)); }
	inline bool get_trackingDisabled_5() const { return ___trackingDisabled_5; }
	inline bool* get_address_of_trackingDisabled_5() { return &___trackingDisabled_5; }
	inline void set_trackingDisabled_5(bool value)
	{
		___trackingDisabled_5 = value;
	}

	inline static int32_t get_offset_of_CameraLocationUpdated_6() { return static_cast<int32_t>(offsetof(OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF, ___CameraLocationUpdated_6)); }
	inline UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * get_CameraLocationUpdated_6() const { return ___CameraLocationUpdated_6; }
	inline UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D ** get_address_of_CameraLocationUpdated_6() { return &___CameraLocationUpdated_6; }
	inline void set_CameraLocationUpdated_6(UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * value)
	{
		___CameraLocationUpdated_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CameraLocationUpdated_6), (void*)value);
	}
};


// StreamTrackingSystem.StreamTrackingCalibrator
struct StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MPDepthCore.TrackingSources.MPDepthTrackingSource StreamTrackingSystem.StreamTrackingCalibrator::trackingSource
	MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7 * ___trackingSource_4;
	// UnityEngine.GameObject StreamTrackingSystem.StreamTrackingCalibrator::calibrationObjects
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___calibrationObjects_5;
	// UnityEngine.GameObject StreamTrackingSystem.StreamTrackingCalibrator::calibrationUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___calibrationUI_6;
	// System.Boolean StreamTrackingSystem.StreamTrackingCalibrator::calibrating
	bool ___calibrating_7;
	// System.Single StreamTrackingSystem.StreamTrackingCalibrator::manualCalibrationDistance
	float ___manualCalibrationDistance_8;
	// MPDepthCore.Calibration.Camera.MPDepthTrackingData StreamTrackingSystem.StreamTrackingCalibrator::trackingData
	MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * ___trackingData_9;
	// System.Boolean StreamTrackingSystem.StreamTrackingCalibrator::cancelled
	bool ___cancelled_10;
	// StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration StreamTrackingSystem.StreamTrackingCalibrator::calibration
	SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * ___calibration_11;
	// System.Single StreamTrackingSystem.StreamTrackingCalibrator::defaultDistanceFromScreenCenter
	float ___defaultDistanceFromScreenCenter_12;
	// UnityEngine.Transform StreamTrackingSystem.StreamTrackingCalibrator::calibrationTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___calibrationTransform_13;
	// UnityEngine.GameObject StreamTrackingSystem.StreamTrackingCalibrator::mainUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mainUI_14;
	// OffAxisCamera.OffAxisCameraRig StreamTrackingSystem.StreamTrackingCalibrator::offAxisCameraRig
	OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * ___offAxisCameraRig_15;
	// UnityEngine.Camera StreamTrackingSystem.StreamTrackingCalibrator::offAxisCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___offAxisCamera_16;

public:
	inline static int32_t get_offset_of_trackingSource_4() { return static_cast<int32_t>(offsetof(StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C, ___trackingSource_4)); }
	inline MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7 * get_trackingSource_4() const { return ___trackingSource_4; }
	inline MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7 ** get_address_of_trackingSource_4() { return &___trackingSource_4; }
	inline void set_trackingSource_4(MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7 * value)
	{
		___trackingSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_calibrationObjects_5() { return static_cast<int32_t>(offsetof(StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C, ___calibrationObjects_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_calibrationObjects_5() const { return ___calibrationObjects_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_calibrationObjects_5() { return &___calibrationObjects_5; }
	inline void set_calibrationObjects_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___calibrationObjects_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibrationObjects_5), (void*)value);
	}

	inline static int32_t get_offset_of_calibrationUI_6() { return static_cast<int32_t>(offsetof(StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C, ___calibrationUI_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_calibrationUI_6() const { return ___calibrationUI_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_calibrationUI_6() { return &___calibrationUI_6; }
	inline void set_calibrationUI_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___calibrationUI_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibrationUI_6), (void*)value);
	}

	inline static int32_t get_offset_of_calibrating_7() { return static_cast<int32_t>(offsetof(StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C, ___calibrating_7)); }
	inline bool get_calibrating_7() const { return ___calibrating_7; }
	inline bool* get_address_of_calibrating_7() { return &___calibrating_7; }
	inline void set_calibrating_7(bool value)
	{
		___calibrating_7 = value;
	}

	inline static int32_t get_offset_of_manualCalibrationDistance_8() { return static_cast<int32_t>(offsetof(StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C, ___manualCalibrationDistance_8)); }
	inline float get_manualCalibrationDistance_8() const { return ___manualCalibrationDistance_8; }
	inline float* get_address_of_manualCalibrationDistance_8() { return &___manualCalibrationDistance_8; }
	inline void set_manualCalibrationDistance_8(float value)
	{
		___manualCalibrationDistance_8 = value;
	}

	inline static int32_t get_offset_of_trackingData_9() { return static_cast<int32_t>(offsetof(StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C, ___trackingData_9)); }
	inline MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * get_trackingData_9() const { return ___trackingData_9; }
	inline MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 ** get_address_of_trackingData_9() { return &___trackingData_9; }
	inline void set_trackingData_9(MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * value)
	{
		___trackingData_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingData_9), (void*)value);
	}

	inline static int32_t get_offset_of_cancelled_10() { return static_cast<int32_t>(offsetof(StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C, ___cancelled_10)); }
	inline bool get_cancelled_10() const { return ___cancelled_10; }
	inline bool* get_address_of_cancelled_10() { return &___cancelled_10; }
	inline void set_cancelled_10(bool value)
	{
		___cancelled_10 = value;
	}

	inline static int32_t get_offset_of_calibration_11() { return static_cast<int32_t>(offsetof(StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C, ___calibration_11)); }
	inline SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * get_calibration_11() const { return ___calibration_11; }
	inline SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF ** get_address_of_calibration_11() { return &___calibration_11; }
	inline void set_calibration_11(SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * value)
	{
		___calibration_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibration_11), (void*)value);
	}

	inline static int32_t get_offset_of_defaultDistanceFromScreenCenter_12() { return static_cast<int32_t>(offsetof(StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C, ___defaultDistanceFromScreenCenter_12)); }
	inline float get_defaultDistanceFromScreenCenter_12() const { return ___defaultDistanceFromScreenCenter_12; }
	inline float* get_address_of_defaultDistanceFromScreenCenter_12() { return &___defaultDistanceFromScreenCenter_12; }
	inline void set_defaultDistanceFromScreenCenter_12(float value)
	{
		___defaultDistanceFromScreenCenter_12 = value;
	}

	inline static int32_t get_offset_of_calibrationTransform_13() { return static_cast<int32_t>(offsetof(StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C, ___calibrationTransform_13)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_calibrationTransform_13() const { return ___calibrationTransform_13; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_calibrationTransform_13() { return &___calibrationTransform_13; }
	inline void set_calibrationTransform_13(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___calibrationTransform_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibrationTransform_13), (void*)value);
	}

	inline static int32_t get_offset_of_mainUI_14() { return static_cast<int32_t>(offsetof(StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C, ___mainUI_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mainUI_14() const { return ___mainUI_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mainUI_14() { return &___mainUI_14; }
	inline void set_mainUI_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mainUI_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainUI_14), (void*)value);
	}

	inline static int32_t get_offset_of_offAxisCameraRig_15() { return static_cast<int32_t>(offsetof(StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C, ___offAxisCameraRig_15)); }
	inline OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * get_offAxisCameraRig_15() const { return ___offAxisCameraRig_15; }
	inline OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF ** get_address_of_offAxisCameraRig_15() { return &___offAxisCameraRig_15; }
	inline void set_offAxisCameraRig_15(OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * value)
	{
		___offAxisCameraRig_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offAxisCameraRig_15), (void*)value);
	}

	inline static int32_t get_offset_of_offAxisCamera_16() { return static_cast<int32_t>(offsetof(StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C, ___offAxisCamera_16)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_offAxisCamera_16() const { return ___offAxisCamera_16; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_offAxisCamera_16() { return &___offAxisCamera_16; }
	inline void set_offAxisCamera_16(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___offAxisCamera_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offAxisCamera_16), (void*)value);
	}
};


// MPDepthCore.Calibration.Camera.TrackingCalibrationProvider
struct TrackingCalibrationProvider_t936458C67919392EE6B88C439729E2AECA9293AB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform MPDepthCore.Calibration.Camera.TrackingCalibrationProvider::calibrationTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___calibrationTransform_4;

public:
	inline static int32_t get_offset_of_calibrationTransform_4() { return static_cast<int32_t>(offsetof(TrackingCalibrationProvider_t936458C67919392EE6B88C439729E2AECA9293AB, ___calibrationTransform_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_calibrationTransform_4() const { return ___calibrationTransform_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_calibrationTransform_4() { return &___calibrationTransform_4; }
	inline void set_calibrationTransform_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___calibrationTransform_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibrationTransform_4), (void*)value);
	}
};


// MPDepthCore.TrackingSystem
struct TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MPDepthCore.TrackingSources.MPDepthTrackingSource MPDepthCore.TrackingSystem::trackingSource
	MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7 * ___trackingSource_4;
	// MPDepthCore.Calibration.Camera.TrackingCalibrationProvider MPDepthCore.TrackingSystem::trackingCalibrationProvider
	TrackingCalibrationProvider_t936458C67919392EE6B88C439729E2AECA9293AB * ___trackingCalibrationProvider_5;
	// MPDepthCore.Calibration.Screen.ScreenCalibrationProvider MPDepthCore.TrackingSystem::screenCalibrationProvider
	ScreenCalibrationProvider_tD648C36DFC6279FB60A284A5824D0FA012CD9F80 * ___screenCalibrationProvider_6;
	// UnityEngine.GameObject MPDepthCore.TrackingSystem::mainUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mainUI_7;
	// OffAxisCamera.OffAxisCameraRig MPDepthCore.TrackingSystem::offAxisCameraRig
	OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * ___offAxisCameraRig_8;
	// UnityEngine.Camera MPDepthCore.TrackingSystem::offAxisCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___offAxisCamera_9;
	// MPDepthCore.TrackingSources.MPDepthTrackingSource/TrackingDataUpdatedEvent MPDepthCore.TrackingSystem::TrackingDataUpdated
	TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * ___TrackingDataUpdated_10;
	// UnityEngine.Transform MPDepthCore.TrackingSystem::calibrationTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___calibrationTransform_11;

public:
	inline static int32_t get_offset_of_trackingSource_4() { return static_cast<int32_t>(offsetof(TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53, ___trackingSource_4)); }
	inline MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7 * get_trackingSource_4() const { return ___trackingSource_4; }
	inline MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7 ** get_address_of_trackingSource_4() { return &___trackingSource_4; }
	inline void set_trackingSource_4(MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7 * value)
	{
		___trackingSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_trackingCalibrationProvider_5() { return static_cast<int32_t>(offsetof(TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53, ___trackingCalibrationProvider_5)); }
	inline TrackingCalibrationProvider_t936458C67919392EE6B88C439729E2AECA9293AB * get_trackingCalibrationProvider_5() const { return ___trackingCalibrationProvider_5; }
	inline TrackingCalibrationProvider_t936458C67919392EE6B88C439729E2AECA9293AB ** get_address_of_trackingCalibrationProvider_5() { return &___trackingCalibrationProvider_5; }
	inline void set_trackingCalibrationProvider_5(TrackingCalibrationProvider_t936458C67919392EE6B88C439729E2AECA9293AB * value)
	{
		___trackingCalibrationProvider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingCalibrationProvider_5), (void*)value);
	}

	inline static int32_t get_offset_of_screenCalibrationProvider_6() { return static_cast<int32_t>(offsetof(TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53, ___screenCalibrationProvider_6)); }
	inline ScreenCalibrationProvider_tD648C36DFC6279FB60A284A5824D0FA012CD9F80 * get_screenCalibrationProvider_6() const { return ___screenCalibrationProvider_6; }
	inline ScreenCalibrationProvider_tD648C36DFC6279FB60A284A5824D0FA012CD9F80 ** get_address_of_screenCalibrationProvider_6() { return &___screenCalibrationProvider_6; }
	inline void set_screenCalibrationProvider_6(ScreenCalibrationProvider_tD648C36DFC6279FB60A284A5824D0FA012CD9F80 * value)
	{
		___screenCalibrationProvider_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___screenCalibrationProvider_6), (void*)value);
	}

	inline static int32_t get_offset_of_mainUI_7() { return static_cast<int32_t>(offsetof(TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53, ___mainUI_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mainUI_7() const { return ___mainUI_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mainUI_7() { return &___mainUI_7; }
	inline void set_mainUI_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mainUI_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainUI_7), (void*)value);
	}

	inline static int32_t get_offset_of_offAxisCameraRig_8() { return static_cast<int32_t>(offsetof(TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53, ___offAxisCameraRig_8)); }
	inline OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * get_offAxisCameraRig_8() const { return ___offAxisCameraRig_8; }
	inline OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF ** get_address_of_offAxisCameraRig_8() { return &___offAxisCameraRig_8; }
	inline void set_offAxisCameraRig_8(OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * value)
	{
		___offAxisCameraRig_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offAxisCameraRig_8), (void*)value);
	}

	inline static int32_t get_offset_of_offAxisCamera_9() { return static_cast<int32_t>(offsetof(TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53, ___offAxisCamera_9)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_offAxisCamera_9() const { return ___offAxisCamera_9; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_offAxisCamera_9() { return &___offAxisCamera_9; }
	inline void set_offAxisCamera_9(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___offAxisCamera_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offAxisCamera_9), (void*)value);
	}

	inline static int32_t get_offset_of_TrackingDataUpdated_10() { return static_cast<int32_t>(offsetof(TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53, ___TrackingDataUpdated_10)); }
	inline TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * get_TrackingDataUpdated_10() const { return ___TrackingDataUpdated_10; }
	inline TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 ** get_address_of_TrackingDataUpdated_10() { return &___TrackingDataUpdated_10; }
	inline void set_TrackingDataUpdated_10(TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * value)
	{
		___TrackingDataUpdated_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrackingDataUpdated_10), (void*)value);
	}

	inline static int32_t get_offset_of_calibrationTransform_11() { return static_cast<int32_t>(offsetof(TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53, ___calibrationTransform_11)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_calibrationTransform_11() const { return ___calibrationTransform_11; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_calibrationTransform_11() { return &___calibrationTransform_11; }
	inline void set_calibrationTransform_11(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___calibrationTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibrationTransform_11), (void*)value);
	}
};


// StreamTrackingSystem.StreamReceiverToTrackingSource
struct StreamReceiverToTrackingSource_t60922E4944E79E7772DE443ED1F71D67D28A805C  : public MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7
{
public:
	// StreamTrackingSystem.StreamTrackingDataReceiver StreamTrackingSystem.StreamReceiverToTrackingSource::trackingStream
	StreamTrackingDataReceiver_t6A04B9CE0EDA64F9EEA319D25EDFC6153651FED0 * ___trackingStream_5;
	// MPDepthCore.Calibration.Camera.RawTrackingData StreamTrackingSystem.StreamReceiverToTrackingSource::rawTrackingData
	RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD * ___rawTrackingData_6;
	// MPDepthCore.TrackingSources.MPDepthTrackingSource/TrackingDataUpdatedEvent StreamTrackingSystem.StreamReceiverToTrackingSource::TrackingDataUpdated
	TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * ___TrackingDataUpdated_7;

public:
	inline static int32_t get_offset_of_trackingStream_5() { return static_cast<int32_t>(offsetof(StreamReceiverToTrackingSource_t60922E4944E79E7772DE443ED1F71D67D28A805C, ___trackingStream_5)); }
	inline StreamTrackingDataReceiver_t6A04B9CE0EDA64F9EEA319D25EDFC6153651FED0 * get_trackingStream_5() const { return ___trackingStream_5; }
	inline StreamTrackingDataReceiver_t6A04B9CE0EDA64F9EEA319D25EDFC6153651FED0 ** get_address_of_trackingStream_5() { return &___trackingStream_5; }
	inline void set_trackingStream_5(StreamTrackingDataReceiver_t6A04B9CE0EDA64F9EEA319D25EDFC6153651FED0 * value)
	{
		___trackingStream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingStream_5), (void*)value);
	}

	inline static int32_t get_offset_of_rawTrackingData_6() { return static_cast<int32_t>(offsetof(StreamReceiverToTrackingSource_t60922E4944E79E7772DE443ED1F71D67D28A805C, ___rawTrackingData_6)); }
	inline RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD * get_rawTrackingData_6() const { return ___rawTrackingData_6; }
	inline RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD ** get_address_of_rawTrackingData_6() { return &___rawTrackingData_6; }
	inline void set_rawTrackingData_6(RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD * value)
	{
		___rawTrackingData_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawTrackingData_6), (void*)value);
	}

	inline static int32_t get_offset_of_TrackingDataUpdated_7() { return static_cast<int32_t>(offsetof(StreamReceiverToTrackingSource_t60922E4944E79E7772DE443ED1F71D67D28A805C, ___TrackingDataUpdated_7)); }
	inline TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * get_TrackingDataUpdated_7() const { return ___TrackingDataUpdated_7; }
	inline TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 ** get_address_of_TrackingDataUpdated_7() { return &___TrackingDataUpdated_7; }
	inline void set_TrackingDataUpdated_7(TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * value)
	{
		___TrackingDataUpdated_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrackingDataUpdated_7), (void*)value);
	}
};


// StreamTrackingSystem.StreamTrackingDataReceiver
struct StreamTrackingDataReceiver_t6A04B9CE0EDA64F9EEA319D25EDFC6153651FED0  : public TrackingStreamConsumer_1_tE6B7D0BB422AD8F293A5633C2781A53B7A04107F
{
public:
	// MPDepthCore.Calibration.Camera.RawTrackingData StreamTrackingSystem.StreamTrackingDataReceiver::ReceivedData
	RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD * ___ReceivedData_16;

public:
	inline static int32_t get_offset_of_ReceivedData_16() { return static_cast<int32_t>(offsetof(StreamTrackingDataReceiver_t6A04B9CE0EDA64F9EEA319D25EDFC6153651FED0, ___ReceivedData_16)); }
	inline RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD * get_ReceivedData_16() const { return ___ReceivedData_16; }
	inline RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD ** get_address_of_ReceivedData_16() { return &___ReceivedData_16; }
	inline void set_ReceivedData_16(RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD * value)
	{
		___ReceivedData_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceivedData_16), (void*)value);
	}
};


// StreamTrackingSystem.StreamTrackingProvider
struct StreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667  : public TrackingCalibrationProvider_t936458C67919392EE6B88C439729E2AECA9293AB
{
public:
	// StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration StreamTrackingSystem.StreamTrackingProvider::currentCalibration
	SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * ___currentCalibration_5;
	// System.Collections.Generic.List`1<StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration> StreamTrackingSystem.StreamTrackingProvider::savedCalibrations
	List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C * ___savedCalibrations_6;
	// StreamTrackingSystem.StreamTrackingCalibrator StreamTrackingSystem.StreamTrackingProvider::calibrator
	StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C * ___calibrator_7;
	// UnityEngine.GameObject StreamTrackingSystem.StreamTrackingProvider::calibrationUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___calibrationUI_8;

public:
	inline static int32_t get_offset_of_currentCalibration_5() { return static_cast<int32_t>(offsetof(StreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667, ___currentCalibration_5)); }
	inline SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * get_currentCalibration_5() const { return ___currentCalibration_5; }
	inline SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF ** get_address_of_currentCalibration_5() { return &___currentCalibration_5; }
	inline void set_currentCalibration_5(SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * value)
	{
		___currentCalibration_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentCalibration_5), (void*)value);
	}

	inline static int32_t get_offset_of_savedCalibrations_6() { return static_cast<int32_t>(offsetof(StreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667, ___savedCalibrations_6)); }
	inline List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C * get_savedCalibrations_6() const { return ___savedCalibrations_6; }
	inline List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C ** get_address_of_savedCalibrations_6() { return &___savedCalibrations_6; }
	inline void set_savedCalibrations_6(List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C * value)
	{
		___savedCalibrations_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___savedCalibrations_6), (void*)value);
	}

	inline static int32_t get_offset_of_calibrator_7() { return static_cast<int32_t>(offsetof(StreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667, ___calibrator_7)); }
	inline StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C * get_calibrator_7() const { return ___calibrator_7; }
	inline StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C ** get_address_of_calibrator_7() { return &___calibrator_7; }
	inline void set_calibrator_7(StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C * value)
	{
		___calibrator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibrator_7), (void*)value);
	}

	inline static int32_t get_offset_of_calibrationUI_8() { return static_cast<int32_t>(offsetof(StreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667, ___calibrationUI_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_calibrationUI_8() const { return ___calibrationUI_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_calibrationUI_8() { return &___calibrationUI_8; }
	inline void set_calibrationUI_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___calibrationUI_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibrationUI_8), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  AsyncTaskMethodBuilder_1_Create_m3A614068CD14EBFEE8DE1D5255D362391F135C92_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_mB2A27FEDA9705FC04D29CFA72DC66730C954FC2A_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, RuntimeObject ** ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, const RuntimeMethod* method);
// System.Void Client.TrackingStreamConsumer`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingStreamConsumer_1__ctor_mC53804B7065FB2AA4DEDA642299A45FF2FEC8F3F_gshared (TrackingStreamConsumer_1_t36AE47F76F0CF9C505CF8F46A145EE59D80627DF * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mA9C6EFFB0D47F2AE8623E890B305A6BF87C15FE4_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, bool ___result0, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<StreamTrackingSystem.StreamTrackingDataReceiver>()
inline StreamTrackingDataReceiver_t6A04B9CE0EDA64F9EEA319D25EDFC6153651FED0 * Component_GetComponent_TisStreamTrackingDataReceiver_t6A04B9CE0EDA64F9EEA319D25EDFC6153651FED0_m750A71A715EE2260E844B266F278F01299463431 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  StreamTrackingDataReceiver_t6A04B9CE0EDA64F9EEA319D25EDFC6153651FED0 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void MPDepthCore.TrackingSources.MPDepthTrackingSource/TrackingDataUpdatedEvent::Invoke(MPDepthCore.Calibration.Camera.MPDepthTrackingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingDataUpdatedEvent_Invoke_mA382D743DC3D1D6CCC6B5EEF5FEAE07DE1384E23 (TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * __this, MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * ___data0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void MPDepthCore.Calibration.Camera.RawTrackingData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawTrackingData__ctor_m8093224C329264DBAA5FE53BEC99F2BB94DA2535 (RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD * __this, const RuntimeMethod* method);
// System.Void MPDepthCore.TrackingSources.MPDepthTrackingSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MPDepthTrackingSource__ctor_mB96D8CA4D5C343431C96F1FC1FC10208E3399D31 (MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<MPDepthCore.TrackingSystem>()
inline TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53 * Component_GetComponentInParent_TisTrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53_mDC6238E62F605314461360820EB92746B45D71E4 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// System.Void MPDepthCore.TrackingSources.MPDepthTrackingSource/TrackingDataUpdatedEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingDataUpdatedEvent__ctor_mE191FC4729F2FBFA6D809DD6C46DBFA7841B6C75 (TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void StreamTrackingSystem.StreamTrackingCalibrator/<StartCalibration>d__14::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCalibrationU3Ed__14__ctor_mD4EB61C0CB92268C56B7403ED8F06AD28DA6F60D (U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  AsyncTaskMethodBuilder_1_Create_m3A614068CD14EBFEE8DE1D5255D362391F135C92 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m3A614068CD14EBFEE8DE1D5255D362391F135C92_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<StreamTrackingSystem.StreamTrackingCalibrator/<StartCalibration>d__14>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A_m48595B278124B55087BED8FEA29F50D01DFAB959 (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A ** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A **, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_mB2A27FEDA9705FC04D29CFA72DC66730C954FC2A_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78 (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedStreamTrackingConfiguration__ctor_m72339F8AE71C40B33AA10DD430B6CBEF8ABC616A (SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.String System.DateTime::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m242888E500DFD8CD675BDC455BC696AF47813954 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<StreamTrackingSystem.StreamTrackingProvider>()
inline StreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667 * Component_GetComponent_TisStreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667_m1F8FDC3667013B96EFDC6EBBA8954F390FB67F86 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  StreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void StreamTrackingSystem.StreamTrackingProvider::SaveCalibration(StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamTrackingProvider_SaveCalibration_m7800F133B98FA3986D8063EE054DD56C739A5294 (StreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667 * __this, SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * ___calibration0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Int32 StreamTrackingSystem.StreamTrackingDataReceiver::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamTrackingDataReceiver_get_Port_m52C465C4D9CB93F4741E926457918C0E74D3671A (StreamTrackingDataReceiver_t6A04B9CE0EDA64F9EEA319D25EDFC6153651FED0 * __this, const RuntimeMethod* method);
// System.Void Client.TrackingStreamConsumer`1<MPDepthCore.Calibration.Camera.RawTrackingData>::.ctor()
inline void TrackingStreamConsumer_1__ctor_m496362C9C9FDEF0579C7BD121FB530B2CA5FEEA2 (TrackingStreamConsumer_1_tE6B7D0BB422AD8F293A5633C2781A53B7A04107F * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackingStreamConsumer_1_tE6B7D0BB422AD8F293A5633C2781A53B7A04107F *, const RuntimeMethod*))TrackingStreamConsumer_1__ctor_mC53804B7065FB2AA4DEDA642299A45FF2FEC8F3F_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration>::get_Item(System.Int32)
inline SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * List_1_get_Item_m038A4AE32D7F9403FB8C624BD25C38A9F7D4F348_inline (List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * (*) (List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration>::Add(!0)
inline void List_1_Add_m5CABB97D67665D79EB0785BED3945F03B2C4B2E1 (List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C * __this, SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C *, SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<MPDepthCore.Calibration.Camera.SavedTrackerCalibration>::Add(!0)
inline void List_1_Add_mE212116F386BEF66B275F66FCB61352CFB5D884A (List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC *, RuntimeObject*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !!0 UnityEngine.JsonUtility::FromJson<StreamTrackingSystem.StreamTrackingProvider/SaveData>(System.String)
inline SaveData_t2D9CC0249F1B127F8D324F24D1F03657D61B0A3F * JsonUtility_FromJson_TisSaveData_t2D9CC0249F1B127F8D324F24D1F03657D61B0A3F_m1371521B841103DD7F8ADBB4502E34EA78B63D60 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  SaveData_t2D9CC0249F1B127F8D324F24D1F03657D61B0A3F * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void StreamTrackingSystem.StreamTrackingProvider/SaveData::.ctor(System.Collections.Generic.List`1<StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration>,StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData__ctor_mACCBDC9AF1DAE59C29BC2D6EF608435DCA135702 (SaveData_t2D9CC0249F1B127F8D324F24D1F03657D61B0A3F * __this, List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C * ___savedConfigurations0, SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * ___currentCalibration1, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<MPDepthCore.Calibration.Camera.SavedTrackerCalibration>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m7F199C5D42B799C186A8C0DCFB7E43E94D3E8393 (List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Void MPDepthCore.Calibration.Camera.TrackingCalibrationProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingCalibrationProvider__ctor_m953976A4C72671B39786A555D5DC2C28D2198387 (TrackingCalibrationProvider_t936458C67919392EE6B88C439729E2AECA9293AB * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void OffAxisCamera.OffAxisCameraRig::DisableCameraTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OffAxisCameraRig_DisableCameraTracking_mD81DD93EBEA480488F81B9A3E7C60A66DFF7534E (OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_Delay_mD54722DBAF22507493263E9B1167A7F77EDDF80E (int32_t ___millisecondsDelay0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,StreamTrackingSystem.StreamTrackingCalibrator/<StartCalibration>d__14>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A_mACA03DF2FBC65FC4B2416D635969D3F8207E18FE (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A **, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mA9C6EFFB0D47F2AE8623E890B305A6BF87C15FE4_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void OffAxisCamera.OffAxisCameraRig::EnableCameraTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OffAxisCameraRig_EnableCameraTracking_mC24B2E1754DA3E2B4B80C77D0DBB0F0CC1C6EE96 (OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, bool ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, bool, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_gshared)(__this, ___result0, method);
}
// System.Void MPDepthCore.Calibration.Camera.TrackerOffsetCalibration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackerOffsetCalibration__ctor_m03477A4C301073620A958E842F726237BDCEE442 (TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void StreamTrackingSystem.StreamReceiverToTrackingSource::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReceiverToTrackingSource_OnEnable_m9F3D7B6FA9F8B41A8EDB718B46ECAB36847F5650 (StreamReceiverToTrackingSource_t60922E4944E79E7772DE443ED1F71D67D28A805C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisStreamTrackingDataReceiver_t6A04B9CE0EDA64F9EEA319D25EDFC6153651FED0_m750A71A715EE2260E844B266F278F01299463431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// trackingStream = GetComponent<StreamTrackingDataReceiver>();
		StreamTrackingDataReceiver_t6A04B9CE0EDA64F9EEA319D25EDFC6153651FED0 * L_0;
		L_0 = Component_GetComponent_TisStreamTrackingDataReceiver_t6A04B9CE0EDA64F9EEA319D25EDFC6153651FED0_m750A71A715EE2260E844B266F278F01299463431(__this, /*hidden argument*/Component_GetComponent_TisStreamTrackingDataReceiver_t6A04B9CE0EDA64F9EEA319D25EDFC6153651FED0_m750A71A715EE2260E844B266F278F01299463431_RuntimeMethod_var);
		__this->set_trackingStream_5(L_0);
		// rawTrackingData.BlendshapeTrackingData.Blendshapes = new float[50];
		RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD * L_1 = __this->get_rawTrackingData_6();
		NullCheck(L_1);
		BlendshapeTrackingData_t989894D483314D943170C8D7E807572809AF9529 * L_2 = ((MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 *)L_1)->get_BlendshapeTrackingData_3();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)50));
		NullCheck(L_2);
		L_2->set_Blendshapes_0(L_3);
		// }
		return;
	}
}
// System.Void StreamTrackingSystem.StreamReceiverToTrackingSource::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReceiverToTrackingSource_Update_m6CAF75EA387E62CEB8F60A8CB791727A4D536300 (StreamReceiverToTrackingSource_t60922E4944E79E7772DE443ED1F71D67D28A805C * __this, const RuntimeMethod* method)
{
	TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * G_B2_0 = NULL;
	TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * G_B1_0 = NULL;
	{
		// rawTrackingData = trackingStream.ReceivedData;
		StreamTrackingDataReceiver_t6A04B9CE0EDA64F9EEA319D25EDFC6153651FED0 * L_0 = __this->get_trackingStream_5();
		NullCheck(L_0);
		RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD * L_1 = L_0->get_ReceivedData_16();
		__this->set_rawTrackingData_6(L_1);
		// TrackingDataUpdated?.Invoke(rawTrackingData);
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_2 = __this->get_TrackingDataUpdated_7();
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_001e;
		}
	}
	{
		goto IL_002a;
	}

IL_001e:
	{
		RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD * L_4 = __this->get_rawTrackingData_6();
		NullCheck(G_B2_0);
		TrackingDataUpdatedEvent_Invoke_mA382D743DC3D1D6CCC6B5EEF5FEAE07DE1384E23(G_B2_0, L_4, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void StreamTrackingSystem.StreamReceiverToTrackingSource::TurnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReceiverToTrackingSource_TurnOff_m64E370F42A459DA188CDE13C88B1A02F7DC6C675 (StreamReceiverToTrackingSource_t60922E4944E79E7772DE443ED1F71D67D28A805C * __this, const RuntimeMethod* method)
{
	{
		// this.gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StreamTrackingSystem.StreamReceiverToTrackingSource::TurnOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReceiverToTrackingSource_TurnOn_m213A941951FE67FE13BA1285CDC8BD39BCA04377 (StreamReceiverToTrackingSource_t60922E4944E79E7772DE443ED1F71D67D28A805C * __this, const RuntimeMethod* method)
{
	{
		// this.gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StreamTrackingSystem.StreamReceiverToTrackingSource::add_TrackingDataUpdated(MPDepthCore.TrackingSources.MPDepthTrackingSource/TrackingDataUpdatedEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReceiverToTrackingSource_add_TrackingDataUpdated_m3ED0ED45891EAD69B322753C06B25C54F6D244E5 (StreamReceiverToTrackingSource_t60922E4944E79E7772DE443ED1F71D67D28A805C * __this, TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * V_0 = NULL;
	TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * V_1 = NULL;
	TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * V_2 = NULL;
	{
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_0 = __this->get_TrackingDataUpdated_7();
		V_0 = L_0;
	}

IL_0007:
	{
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_1 = V_0;
		V_1 = L_1;
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_2 = V_1;
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 *)CastclassSealed((RuntimeObject*)L_4, TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5_il2cpp_TypeInfo_var));
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 ** L_5 = __this->get_address_of_TrackingDataUpdated_7();
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_6 = V_2;
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_7 = V_1;
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_8;
		L_8 = InterlockedCompareExchangeImpl<TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 *>((TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 **)L_5, L_6, L_7);
		V_0 = L_8;
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_9 = V_0;
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_10 = V_1;
		if ((!(((RuntimeObject*)(TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 *)L_9) == ((RuntimeObject*)(TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void StreamTrackingSystem.StreamReceiverToTrackingSource::remove_TrackingDataUpdated(MPDepthCore.TrackingSources.MPDepthTrackingSource/TrackingDataUpdatedEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReceiverToTrackingSource_remove_TrackingDataUpdated_mC3BCA4BAF237990A2B08C3102854051CA0C193D9 (StreamReceiverToTrackingSource_t60922E4944E79E7772DE443ED1F71D67D28A805C * __this, TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * V_0 = NULL;
	TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * V_1 = NULL;
	TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * V_2 = NULL;
	{
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_0 = __this->get_TrackingDataUpdated_7();
		V_0 = L_0;
	}

IL_0007:
	{
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_1 = V_0;
		V_1 = L_1;
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_2 = V_1;
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 *)CastclassSealed((RuntimeObject*)L_4, TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5_il2cpp_TypeInfo_var));
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 ** L_5 = __this->get_address_of_TrackingDataUpdated_7();
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_6 = V_2;
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_7 = V_1;
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_8;
		L_8 = InterlockedCompareExchangeImpl<TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 *>((TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 **)L_5, L_6, L_7);
		V_0 = L_8;
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_9 = V_0;
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_10 = V_1;
		if ((!(((RuntimeObject*)(TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 *)L_9) == ((RuntimeObject*)(TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void StreamTrackingSystem.StreamReceiverToTrackingSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReceiverToTrackingSource__ctor_mE9DC88FAE12288593295D9AF034BBD158674CABE (StreamReceiverToTrackingSource_t60922E4944E79E7772DE443ED1F71D67D28A805C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] RawTrackingData rawTrackingData = new RawTrackingData();
		RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD * L_0 = (RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD *)il2cpp_codegen_object_new(RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD_il2cpp_TypeInfo_var);
		RawTrackingData__ctor_m8093224C329264DBAA5FE53BEC99F2BB94DA2535(L_0, /*hidden argument*/NULL);
		__this->set_rawTrackingData_6(L_0);
		MPDepthTrackingSource__ctor_mB96D8CA4D5C343431C96F1FC1FC10208E3399D31(__this, /*hidden argument*/NULL);
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
// System.Void StreamTrackingSystem.StreamTrackingCalibrator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamTrackingCalibrator_Awake_mE3CE84DF92EFDB82EA5E0D134F128C3310554B1B (StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisTrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53_mDC6238E62F605314461360820EB92746B45D71E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamTrackingCalibrator_TrackingUpdated_mF41CF3400AD8F83C043AB04EE7F78F03A1B73C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53 * V_0 = NULL;
	{
		// TrackingSystem trackingSystem = GetComponentInParent<TrackingSystem>();
		TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53 * L_0;
		L_0 = Component_GetComponentInParent_TisTrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53_mDC6238E62F605314461360820EB92746B45D71E4(__this, /*hidden argument*/Component_GetComponentInParent_TisTrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53_mDC6238E62F605314461360820EB92746B45D71E4_RuntimeMethod_var);
		V_0 = L_0;
		// mainUI = trackingSystem.mainUI;
		TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53 * L_1 = V_0;
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = L_1->get_mainUI_7();
		__this->set_mainUI_14(L_2);
		// offAxisCameraRig = trackingSystem.offAxisCameraRig;
		TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53 * L_3 = V_0;
		NullCheck(L_3);
		OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * L_4 = L_3->get_offAxisCameraRig_8();
		__this->set_offAxisCameraRig_15(L_4);
		// offAxisCamera = trackingSystem.offAxisCamera;
		TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53 * L_5 = V_0;
		NullCheck(L_5);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = L_5->get_offAxisCamera_9();
		__this->set_offAxisCamera_16(L_6);
		// trackingSource.TrackingDataUpdated += TrackingUpdated;
		MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7 * L_7 = __this->get_trackingSource_4();
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_8 = (TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 *)il2cpp_codegen_object_new(TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5_il2cpp_TypeInfo_var);
		TrackingDataUpdatedEvent__ctor_mE191FC4729F2FBFA6D809DD6C46DBFA7841B6C75(L_8, __this, (intptr_t)((intptr_t)StreamTrackingCalibrator_TrackingUpdated_mF41CF3400AD8F83C043AB04EE7F78F03A1B73C05_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * >::Invoke(4 /* System.Void MPDepthCore.TrackingSources.MPDepthTrackingSource::add_TrackingDataUpdated(MPDepthCore.TrackingSources.MPDepthTrackingSource/TrackingDataUpdatedEvent) */, L_7, L_8);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> StreamTrackingSystem.StreamTrackingCalibrator::StartCalibration(StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * StreamTrackingCalibrator_StartCalibration_mD6A92C3FF03EB876034B6DB2AD7D507F261DFD33 (StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C * __this, SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * ___newCalibration0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m3A614068CD14EBFEE8DE1D5255D362391F135C92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A_m48595B278124B55087BED8FEA29F50D01DFAB959_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A * V_0 = NULL;
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A * L_0 = (U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A *)il2cpp_codegen_object_new(U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A_il2cpp_TypeInfo_var);
		U3CStartCalibrationU3Ed__14__ctor_mD4EB61C0CB92268C56B7403ED8F06AD28DA6F60D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A * L_2 = V_0;
		SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * L_3 = ___newCalibration0;
		NullCheck(L_2);
		L_2->set_newCalibration_2(L_3);
		U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  L_5;
		L_5 = AsyncTaskMethodBuilder_1_Create_m3A614068CD14EBFEE8DE1D5255D362391F135C92(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m3A614068CD14EBFEE8DE1D5255D362391F135C92_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->set_U3CU3Et__builder_1(L_5);
		U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A * L_6 = V_0;
		NullCheck(L_6);
		L_6->set_U3CU3E1__state_0((-1));
		U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A * L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  L_8 = L_7->get_U3CU3Et__builder_1();
		V_1 = L_8;
		AsyncTaskMethodBuilder_1_Start_TisU3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A_m48595B278124B55087BED8FEA29F50D01DFAB959((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)(&V_1), (U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A **)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A_m48595B278124B55087BED8FEA29F50D01DFAB959_RuntimeMethod_var);
		U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A * L_9 = V_0;
		NullCheck(L_9);
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_10 = L_9->get_address_of_U3CU3Et__builder_1();
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_11;
		L_11 = AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_10, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78_RuntimeMethod_var);
		return L_11;
	}
}
// System.Void StreamTrackingSystem.StreamTrackingCalibrator::TrackingUpdated(MPDepthCore.Calibration.Camera.MPDepthTrackingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamTrackingCalibrator_TrackingUpdated_mF41CF3400AD8F83C043AB04EE7F78F03A1B73C05 (StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C * __this, MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * ___data0, const RuntimeMethod* method)
{
	{
		// this.trackingData = data;
		MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * L_0 = ___data0;
		__this->set_trackingData_9(L_0);
		// }
		return;
	}
}
// System.Void StreamTrackingSystem.StreamTrackingCalibrator::CalculateCalibrationFromTrackingInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamTrackingCalibrator_CalculateCalibrationFromTrackingInfo_m60CC17C8F9456CD34A69D360D24B3EB83F31939C (StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisStreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667_m1F8FDC3667013B96EFDC6EBBA8954F390FB67F86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral486B66E7C5A80B862FB8B09AD92A68207CDDA2AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77917F65152BFCCFCED5473A1BCB1188F7DC422E);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// calibrationTransform.position = Vector3.zero;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_calibrationTransform_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_1, /*hidden argument*/NULL);
		// calibrationTransform.rotation = Quaternion.Euler(Vector3.zero);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_calibrationTransform_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_2, L_4, /*hidden argument*/NULL);
		// Vector3 camPos = new Vector3(0, 0, manualCalibrationDistance);
		float L_5 = __this->get_manualCalibrationDistance_8();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (0.0f), (0.0f), L_5, /*hidden argument*/NULL);
		// offAxisCamera.transform.localPosition = camPos;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = __this->get_offAxisCamera_16();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		NullCheck(L_7);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_7, L_8, /*hidden argument*/NULL);
		// GameObject tempFace = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_9, /*hidden argument*/NULL);
		V_1 = L_9;
		// tempFace.transform.position = offAxisCamera.transform.localPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_1;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_12 = __this->get_offAxisCamera_16();
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_11, L_14, /*hidden argument*/NULL);
		// Vector3 flippedEulers = -trackingData.CameraTrackingData.Eulers;
		MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * L_15 = __this->get_trackingData_9();
		NullCheck(L_15);
		CameraTrackingData_tAAE8DCC63B02088F63C7D759E4FCF8A268374FCE * L_16 = L_15->get_CameraTrackingData_1();
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = ((TrackingPose_t9D6C81FDF981E08EBF7CDBBB363CA99CAB3EC265 *)L_16)->get_Eulers_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		// tempFace.transform.eulerAngles = new Vector3(0, 180, 0) - new Vector3(flippedEulers.x, -flippedEulers.y, flippedEulers.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = V_1;
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), (0.0f), (180.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_2;
		float L_23 = L_22.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_2;
		float L_25 = L_24.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = V_2;
		float L_27 = L_26.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_28), L_23, ((-L_25)), L_27, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_21, L_28, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_20, L_29, /*hidden argument*/NULL);
		// tempFace.name = "tempFace";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = V_1;
		NullCheck(L_30);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_30, _stringLiteral486B66E7C5A80B862FB8B09AD92A68207CDDA2AD, /*hidden argument*/NULL);
		// GameObject tempOffset = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_31, /*hidden argument*/NULL);
		V_3 = L_31;
		// tempOffset.transform.parent = tempFace.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = V_3;
		NullCheck(L_32);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_32, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = V_1;
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_34, /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_33, L_35, /*hidden argument*/NULL);
		// tempOffset.name = "tempOffset";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = V_3;
		NullCheck(L_36);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_36, _stringLiteral77917F65152BFCCFCED5473A1BCB1188F7DC422E, /*hidden argument*/NULL);
		// Vector3 flippedPos = -trackingData.CameraTrackingData.Position;
		MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * L_37 = __this->get_trackingData_9();
		NullCheck(L_37);
		CameraTrackingData_tAAE8DCC63B02088F63C7D759E4FCF8A268374FCE * L_38 = L_37->get_CameraTrackingData_1();
		NullCheck(L_38);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = ((TrackingPose_t9D6C81FDF981E08EBF7CDBBB363CA99CAB3EC265 *)L_38)->get_Position_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_39, /*hidden argument*/NULL);
		V_4 = L_40;
		// tempOffset.transform.localPosition = new Vector3(flippedPos.x, flippedPos.y, flippedPos.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = V_3;
		NullCheck(L_41);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_41, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = V_4;
		float L_44 = L_43.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = V_4;
		float L_46 = L_45.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = V_4;
		float L_48 = L_47.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_49), L_44, L_46, L_48, /*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_42, L_49, /*hidden argument*/NULL);
		// tempOffset.transform.localEulerAngles = Vector3.zero;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = V_3;
		NullCheck(L_50);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_50, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_51);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(L_51, L_52, /*hidden argument*/NULL);
		// calibrationTransform.position = tempOffset.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53 = __this->get_calibrationTransform_13();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54 = V_3;
		NullCheck(L_54);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55;
		L_55 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_54, /*hidden argument*/NULL);
		NullCheck(L_55);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
		L_56 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_55, /*hidden argument*/NULL);
		NullCheck(L_53);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_53, L_56, /*hidden argument*/NULL);
		// calibrationTransform.rotation = tempOffset.transform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57 = __this->get_calibrationTransform_13();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58 = V_3;
		NullCheck(L_58);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59;
		L_59 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_58, /*hidden argument*/NULL);
		NullCheck(L_59);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_60;
		L_60 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_59, /*hidden argument*/NULL);
		NullCheck(L_57);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_57, L_60, /*hidden argument*/NULL);
		// Destroy(tempFace);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_61 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_61, /*hidden argument*/NULL);
		// calibration = new StreamTrackingProvider.SavedStreamTrackingConfiguration();
		SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * L_62 = (SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF *)il2cpp_codegen_object_new(SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF_il2cpp_TypeInfo_var);
		SavedStreamTrackingConfiguration__ctor_m72339F8AE71C40B33AA10DD430B6CBEF8ABC616A(L_62, /*hidden argument*/NULL);
		__this->set_calibration_11(L_62);
		// calibration.name = System.DateTime.Now.ToString();
		SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * L_63 = __this->get_calibration_11();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_64;
		L_64 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		V_5 = L_64;
		String_t* L_65;
		L_65 = DateTime_ToString_m242888E500DFD8CD675BDC455BC696AF47813954((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_5), /*hidden argument*/NULL);
		NullCheck(L_63);
		L_63->set_name_0(L_65);
		// calibration.TrackerOffsetCalibration.Position = calibrationTransform.position;
		SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * L_66 = __this->get_calibration_11();
		NullCheck(L_66);
		TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 * L_67 = L_66->get_TrackerOffsetCalibration_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_68 = __this->get_calibrationTransform_13();
		NullCheck(L_68);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69;
		L_69 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_68, /*hidden argument*/NULL);
		NullCheck(L_67);
		((TrackingPose_t9D6C81FDF981E08EBF7CDBBB363CA99CAB3EC265 *)L_67)->set_Position_0(L_69);
		// calibration.TrackerOffsetCalibration.Eulers = calibrationTransform.rotation.eulerAngles;
		SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * L_70 = __this->get_calibration_11();
		NullCheck(L_70);
		TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 * L_71 = L_70->get_TrackerOffsetCalibration_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_72 = __this->get_calibrationTransform_13();
		NullCheck(L_72);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_73;
		L_73 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_72, /*hidden argument*/NULL);
		V_6 = L_73;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74;
		L_74 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_6), /*hidden argument*/NULL);
		NullCheck(L_71);
		((TrackingPose_t9D6C81FDF981E08EBF7CDBBB363CA99CAB3EC265 *)L_71)->set_Eulers_1(L_74);
		// GetComponent<StreamTrackingProvider>().SaveCalibration(calibration);
		StreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667 * L_75;
		L_75 = Component_GetComponent_TisStreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667_m1F8FDC3667013B96EFDC6EBBA8954F390FB67F86(__this, /*hidden argument*/Component_GetComponent_TisStreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667_m1F8FDC3667013B96EFDC6EBBA8954F390FB67F86_RuntimeMethod_var);
		SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * L_76 = __this->get_calibration_11();
		NullCheck(L_75);
		StreamTrackingProvider_SaveCalibration_m7800F133B98FA3986D8063EE054DD56C739A5294(L_75, L_76, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StreamTrackingSystem.StreamTrackingCalibrator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamTrackingCalibrator__ctor_mC1CD172B65A51B42DBF6AE730E0864208F9463A8 (StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] MPDepthTrackingSource trackingSource = default;
		__this->set_trackingSource_4((MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7 *)NULL);
		// [SerializeField] GameObject calibrationObjects = default;
		__this->set_calibrationObjects_5((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// bool calibrating = false;
		__this->set_calibrating_7((bool)0);
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
// System.Int32 StreamTrackingSystem.StreamTrackingDataReceiver::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamTrackingDataReceiver_get_Port_m52C465C4D9CB93F4741E926457918C0E74D3671A (StreamTrackingDataReceiver_t6A04B9CE0EDA64F9EEA319D25EDFC6153651FED0 * __this, const RuntimeMethod* method)
{
	{
		// public int Port => Port;
		int32_t L_0;
		L_0 = StreamTrackingDataReceiver_get_Port_m52C465C4D9CB93F4741E926457918C0E74D3671A(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String StreamTrackingSystem.StreamTrackingDataReceiver::get_IP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StreamTrackingDataReceiver_get_IP_m691B152863A406BEDD305433B0181A8806B00F29 (StreamTrackingDataReceiver_t6A04B9CE0EDA64F9EEA319D25EDFC6153651FED0 * __this, const RuntimeMethod* method)
{
	{
		// public string IP => address;
		String_t* L_0 = ((TrackingStreamConsumer_1_tE6B7D0BB422AD8F293A5633C2781A53B7A04107F *)__this)->get_address_6();
		return L_0;
	}
}
// System.Void StreamTrackingSystem.StreamTrackingDataReceiver::SetData(MPDepthCore.Calibration.Camera.RawTrackingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamTrackingDataReceiver_SetData_mA32E4CFC2ACBBA43F55BE879B2F10134674FF322 (StreamTrackingDataReceiver_t6A04B9CE0EDA64F9EEA319D25EDFC6153651FED0 * __this, RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD * ___receivedData0, const RuntimeMethod* method)
{
	{
		// ReceivedData = receivedData;
		RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD * L_0 = ___receivedData0;
		__this->set_ReceivedData_16(L_0);
		// }
		return;
	}
}
// System.Void StreamTrackingSystem.StreamTrackingDataReceiver::SetPort(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamTrackingDataReceiver_SetPort_m9320C1C70C023084302878BDAEFF7ADAAC799791 (StreamTrackingDataReceiver_t6A04B9CE0EDA64F9EEA319D25EDFC6153651FED0 * __this, int32_t ___newPort0, const RuntimeMethod* method)
{
	{
		// port = newPort;
		int32_t L_0 = ___newPort0;
		((TrackingStreamConsumer_1_tE6B7D0BB422AD8F293A5633C2781A53B7A04107F *)__this)->set_port_5(L_0);
		// }
		return;
	}
}
// System.Void StreamTrackingSystem.StreamTrackingDataReceiver::SetIP(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamTrackingDataReceiver_SetIP_m5967B62CC2A73297ED1051B9E510F57C72A43B23 (StreamTrackingDataReceiver_t6A04B9CE0EDA64F9EEA319D25EDFC6153651FED0 * __this, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___newAddress0, const RuntimeMethod* method)
{
	{
		// this.address = newAddress.ToString();
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_0 = ___newAddress0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		((TrackingStreamConsumer_1_tE6B7D0BB422AD8F293A5633C2781A53B7A04107F *)__this)->set_address_6(L_1);
		// }
		return;
	}
}
// System.Void StreamTrackingSystem.StreamTrackingDataReceiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamTrackingDataReceiver__ctor_m3251A5BCF0E595DC91E3FAA54A8A91E4704A1392 (StreamTrackingDataReceiver_t6A04B9CE0EDA64F9EEA319D25EDFC6153651FED0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingStreamConsumer_1__ctor_m496362C9C9FDEF0579C7BD121FB530B2CA5FEEA2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackingStreamConsumer_1__ctor_m496362C9C9FDEF0579C7BD121FB530B2CA5FEEA2(__this, /*hidden argument*/TrackingStreamConsumer_1__ctor_m496362C9C9FDEF0579C7BD121FB530B2CA5FEEA2_RuntimeMethod_var);
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
// System.Void StreamTrackingSystem.StreamTrackingProvider::SelectCalibration(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamTrackingProvider_SelectCalibration_m9E7FA07A02CCC90E8DBAAC143347321B11E83A2E (StreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667 * __this, int32_t ___selectedIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m038A4AE32D7F9403FB8C624BD25C38A9F7D4F348_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentCalibration = savedCalibrations[selectedIndex];
		List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C * L_0 = __this->get_savedCalibrations_6();
		int32_t L_1 = ___selectedIndex0;
		NullCheck(L_0);
		SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * L_2;
		L_2 = List_1_get_Item_m038A4AE32D7F9403FB8C624BD25C38A9F7D4F348_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m038A4AE32D7F9403FB8C624BD25C38A9F7D4F348_RuntimeMethod_var);
		__this->set_currentCalibration_5(L_2);
		// calibrationTransform.position = currentCalibration.TrackerOffsetCalibration.Position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ((TrackingCalibrationProvider_t936458C67919392EE6B88C439729E2AECA9293AB *)__this)->get_calibrationTransform_4();
		SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * L_4 = __this->get_currentCalibration_5();
		NullCheck(L_4);
		TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 * L_5 = L_4->get_TrackerOffsetCalibration_1();
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ((TrackingPose_t9D6C81FDF981E08EBF7CDBBB363CA99CAB3EC265 *)L_5)->get_Position_0();
		NullCheck(L_3);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_6, /*hidden argument*/NULL);
		// calibrationTransform.rotation = Quaternion.Euler(currentCalibration.TrackerOffsetCalibration.Eulers);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = ((TrackingCalibrationProvider_t936458C67919392EE6B88C439729E2AECA9293AB *)__this)->get_calibrationTransform_4();
		SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * L_8 = __this->get_currentCalibration_5();
		NullCheck(L_8);
		TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 * L_9 = L_8->get_TrackerOffsetCalibration_1();
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ((TrackingPose_t9D6C81FDF981E08EBF7CDBBB363CA99CAB3EC265 *)L_9)->get_Eulers_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_7, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StreamTrackingSystem.StreamTrackingProvider::Calibrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamTrackingProvider_Calibrate_m3DE3EEB7AF890D4AFDC243D7063FE0A5A1A1C1D1 (StreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667 * __this, const RuntimeMethod* method)
{
	{
		// calibrationUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_calibrationUI_8();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StreamTrackingSystem.StreamTrackingProvider::SaveCalibration(StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamTrackingProvider_SaveCalibration_m7800F133B98FA3986D8063EE054DD56C739A5294 (StreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667 * __this, SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * ___calibration0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5CABB97D67665D79EB0785BED3945F03B2C4B2E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE212116F386BEF66B275F66FCB61352CFB5D884A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// savedCalibrations.Add(calibration);
		List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C * L_0 = __this->get_savedCalibrations_6();
		SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * L_1 = ___calibration0;
		NullCheck(L_0);
		List_1_Add_m5CABB97D67665D79EB0785BED3945F03B2C4B2E1(L_0, L_1, /*hidden argument*/List_1_Add_m5CABB97D67665D79EB0785BED3945F03B2C4B2E1_RuntimeMethod_var);
		// AllCalibrations.Add(calibration);
		List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC * L_2;
		L_2 = VirtFuncInvoker0< List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC * >::Invoke(6 /* System.Collections.Generic.List`1<MPDepthCore.Calibration.Camera.SavedTrackerCalibration> MPDepthCore.Calibration.Camera.TrackingCalibrationProvider::get_AllCalibrations() */, __this);
		SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * L_3 = ___calibration0;
		NullCheck(L_2);
		List_1_Add_mE212116F386BEF66B275F66FCB61352CFB5D884A(L_2, L_3, /*hidden argument*/List_1_Add_mE212116F386BEF66B275F66FCB61352CFB5D884A_RuntimeMethod_var);
		// currentCalibration = calibration;
		SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * L_4 = ___calibration0;
		__this->set_currentCalibration_5(L_4);
		// }
		return;
	}
}
// System.Void StreamTrackingSystem.StreamTrackingProvider::FinishSetupAfterLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamTrackingProvider_FinishSetupAfterLoad_m988B246465440A650EB4F80D8BEAE46D156DE983 (StreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void StreamTrackingSystem.StreamTrackingProvider::SetCurrentToDefaultCalibration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamTrackingProvider_SetCurrentToDefaultCalibration_m5E35D97D8441BD6F88ED790D9953A42D7E56DB52 (StreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentCalibration = new SavedStreamTrackingConfiguration();
		SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * L_0 = (SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF *)il2cpp_codegen_object_new(SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF_il2cpp_TypeInfo_var);
		SavedStreamTrackingConfiguration__ctor_m72339F8AE71C40B33AA10DD430B6CBEF8ABC616A(L_0, /*hidden argument*/NULL);
		__this->set_currentCalibration_5(L_0);
		// }
		return;
	}
}
// System.Void StreamTrackingSystem.StreamTrackingProvider::LoadSelfFromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamTrackingProvider_LoadSelfFromJson_m6BBF00BB5C621FD23345FAD817084E88682680A4 (StreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667 * __this, String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisSaveData_t2D9CC0249F1B127F8D324F24D1F03657D61B0A3F_m1371521B841103DD7F8ADBB4502E34EA78B63D60_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SaveData_t2D9CC0249F1B127F8D324F24D1F03657D61B0A3F * V_0 = NULL;
	{
		// SaveData saveData = JsonUtility.FromJson<SaveData>(json);
		String_t* L_0 = ___json0;
		SaveData_t2D9CC0249F1B127F8D324F24D1F03657D61B0A3F * L_1;
		L_1 = JsonUtility_FromJson_TisSaveData_t2D9CC0249F1B127F8D324F24D1F03657D61B0A3F_m1371521B841103DD7F8ADBB4502E34EA78B63D60(L_0, /*hidden argument*/JsonUtility_FromJson_TisSaveData_t2D9CC0249F1B127F8D324F24D1F03657D61B0A3F_m1371521B841103DD7F8ADBB4502E34EA78B63D60_RuntimeMethod_var);
		V_0 = L_1;
		// this.currentCalibration = saveData.currentCalibration;
		SaveData_t2D9CC0249F1B127F8D324F24D1F03657D61B0A3F * L_2 = V_0;
		NullCheck(L_2);
		SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * L_3 = L_2->get_currentCalibration_1();
		__this->set_currentCalibration_5(L_3);
		// this.savedCalibrations = saveData.savedConfigurations;
		SaveData_t2D9CC0249F1B127F8D324F24D1F03657D61B0A3F * L_4 = V_0;
		NullCheck(L_4);
		List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C * L_5 = L_4->get_savedConfigurations_0();
		__this->set_savedCalibrations_6(L_5);
		// }
		return;
	}
}
// System.String StreamTrackingSystem.StreamTrackingProvider::GetSelfAsJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StreamTrackingProvider_GetSelfAsJson_m4C22CD112F8CEC5568E0BD6E889857910B4B3B0F (StreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveData_t2D9CC0249F1B127F8D324F24D1F03657D61B0A3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SaveData_t2D9CC0249F1B127F8D324F24D1F03657D61B0A3F * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// SaveData saveData = new SaveData(savedCalibrations, currentCalibration);
		List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C * L_0 = __this->get_savedCalibrations_6();
		SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * L_1 = __this->get_currentCalibration_5();
		SaveData_t2D9CC0249F1B127F8D324F24D1F03657D61B0A3F * L_2 = (SaveData_t2D9CC0249F1B127F8D324F24D1F03657D61B0A3F *)il2cpp_codegen_object_new(SaveData_t2D9CC0249F1B127F8D324F24D1F03657D61B0A3F_il2cpp_TypeInfo_var);
		SaveData__ctor_mACCBDC9AF1DAE59C29BC2D6EF608435DCA135702(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// string json = JsonUtility.ToJson(saveData);
		SaveData_t2D9CC0249F1B127F8D324F24D1F03657D61B0A3F * L_3 = V_0;
		String_t* L_4;
		L_4 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// return json;
		String_t* L_5 = V_1;
		V_2 = L_5;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		String_t* L_6 = V_2;
		return L_6;
	}
}
// MPDepthCore.Calibration.Camera.TrackerOffsetCalibration StreamTrackingSystem.StreamTrackingProvider::get_GetTrackerOffsetCalibration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 * StreamTrackingProvider_get_GetTrackerOffsetCalibration_m8D12F7947EC87A975E24E67EE795FF54F1487228 (StreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667 * __this, const RuntimeMethod* method)
{
	{
		// currentCalibration.TrackerOffsetCalibration;
		SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * L_0 = __this->get_currentCalibration_5();
		NullCheck(L_0);
		TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 * L_1 = L_0->get_TrackerOffsetCalibration_1();
		return L_1;
	}
}
// MPDepthCore.Calibration.Camera.SavedTrackerCalibration StreamTrackingSystem.StreamTrackingProvider::get_CurrentTrackerCalibration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamTrackingProvider_get_CurrentTrackerCalibration_m9D400623A0E6AE6E0575C0EBDA82DE4A77C28620 (StreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667 * __this, const RuntimeMethod* method)
{
	{
		// public override SavedTrackerCalibration CurrentTrackerCalibration => currentCalibration;
		SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * L_0 = __this->get_currentCalibration_5();
		return L_0;
	}
}
// System.Collections.Generic.List`1<MPDepthCore.Calibration.Camera.SavedTrackerCalibration> StreamTrackingSystem.StreamTrackingProvider::get_AllCalibrations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC * StreamTrackingProvider_get_AllCalibrations_mA80189C03909AF7F0CBC91521BCEA6700512A81E (StreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F199C5D42B799C186A8C0DCFB7E43E94D3E8393_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override List<SavedTrackerCalibration> AllCalibrations => new List<SavedTrackerCalibration>(savedCalibrations);
		List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C * L_0 = __this->get_savedCalibrations_6();
		List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC * L_1 = (List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC *)il2cpp_codegen_object_new(List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC_il2cpp_TypeInfo_var);
		List_1__ctor_m7F199C5D42B799C186A8C0DCFB7E43E94D3E8393(L_1, L_0, /*hidden argument*/List_1__ctor_m7F199C5D42B799C186A8C0DCFB7E43E94D3E8393_RuntimeMethod_var);
		return L_1;
	}
}
// System.String StreamTrackingSystem.StreamTrackingProvider::get_Filename()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StreamTrackingProvider_get_Filename_mFA630B2DC3D237C39A02F04F1B095F2F0991B3D0 (StreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DCEDEA5F93BCB51A628179CF43BC654CFEBC3F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override string Filename => "SavedStreamTrackerConfigurations.json";
		return _stringLiteral4DCEDEA5F93BCB51A628179CF43BC654CFEBC3F6;
	}
}
// System.Void StreamTrackingSystem.StreamTrackingProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamTrackingProvider__ctor_mEA23AAA8CCC1DDED4B52AB53455E5385A26E6969 (StreamTrackingProvider_t6B2C21DF1BCB6AEE131C01422B53D03B99276667 * __this, const RuntimeMethod* method)
{
	{
		TrackingCalibrationProvider__ctor_m953976A4C72671B39786A555D5DC2C28D2198387(__this, /*hidden argument*/NULL);
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
// System.Void StreamTrackingSystem.StreamTrackingCalibrator/<StartCalibration>d__14::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCalibrationU3Ed__14__ctor_mD4EB61C0CB92268C56B7403ED8F06AD28DA6F60D (U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StreamTrackingSystem.StreamTrackingCalibrator/<StartCalibration>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCalibrationU3Ed__14_MoveNext_m262A6236F9C537A058819F65A6992AA9F49FD42F (U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A_mACA03DF2FBC65FC4B2416D635969D3F8207E18FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamTrackingCalibrator_TrackingUpdated_mF41CF3400AD8F83C043AB04EE7F78F03A1B73C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FA8FD27D5ED3C6D58DCA0B4BF97E817548A4BE2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	int32_t G_B12_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_0011;
		}

IL_000c:
		{
			goto IL_00ad;
		}

IL_0011:
		{
			// offAxisCameraRig.DisableCameraTracking();
			StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C * L_2 = __this->get_U3CU3E4__this_3();
			NullCheck(L_2);
			OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * L_3 = L_2->get_offAxisCameraRig_15();
			NullCheck(L_3);
			OffAxisCameraRig_DisableCameraTracking_mD81DD93EBEA480488F81B9A3E7C60A66DFF7534E(L_3, /*hidden argument*/NULL);
			// trackingSource.TrackingDataUpdated += TrackingUpdated;
			StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C * L_4 = __this->get_U3CU3E4__this_3();
			NullCheck(L_4);
			MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7 * L_5 = L_4->get_trackingSource_4();
			StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C * L_6 = __this->get_U3CU3E4__this_3();
			TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_7 = (TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 *)il2cpp_codegen_object_new(TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5_il2cpp_TypeInfo_var);
			TrackingDataUpdatedEvent__ctor_mE191FC4729F2FBFA6D809DD6C46DBFA7841B6C75(L_7, L_6, (intptr_t)((intptr_t)StreamTrackingCalibrator_TrackingUpdated_mF41CF3400AD8F83C043AB04EE7F78F03A1B73C05_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_5);
			VirtActionInvoker1< TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * >::Invoke(4 /* System.Void MPDepthCore.TrackingSources.MPDepthTrackingSource::add_TrackingDataUpdated(MPDepthCore.TrackingSources.MPDepthTrackingSource/TrackingDataUpdatedEvent) */, L_5, L_7);
			// calibration = newCalibration;
			StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C * L_8 = __this->get_U3CU3E4__this_3();
			SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * L_9 = __this->get_newCalibration_2();
			NullCheck(L_8);
			L_8->set_calibration_11(L_9);
			// calibrating = true;
			StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C * L_10 = __this->get_U3CU3E4__this_3();
			NullCheck(L_10);
			L_10->set_calibrating_7((bool)1);
			// cancelled = false;
			StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C * L_11 = __this->get_U3CU3E4__this_3();
			NullCheck(L_11);
			L_11->set_cancelled_10((bool)0);
			goto IL_00d2;
		}

IL_0070:
		{
			// await Task.Delay(5);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_12;
			L_12 = Task_Delay_mD54722DBAF22507493263E9B1167A7F77EDDF80E(5, /*hidden argument*/NULL);
			NullCheck(L_12);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_13;
			L_13 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_12, /*hidden argument*/NULL);
			V_2 = L_13;
			bool L_14;
			L_14 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_14)
			{
				goto IL_00c9;
			}
		}

IL_0086:
		{
			int32_t L_15 = 0;
			V_0 = L_15;
			__this->set_U3CU3E1__state_0(L_15);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_16 = V_2;
			__this->set_U3CU3Eu__1_4(L_16);
			V_3 = __this;
			AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_17 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A_mACA03DF2FBC65FC4B2416D635969D3F8207E18FE((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_17, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A **)(&V_3), /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A_mACA03DF2FBC65FC4B2416D635969D3F8207E18FE_RuntimeMethod_var);
			goto IL_017f;
		}

IL_00ad:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_18 = __this->get_U3CU3Eu__1_4();
			V_2 = L_18;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_19 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_19, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_20 = (-1);
			V_0 = L_20;
			__this->set_U3CU3E1__state_0(L_20);
		}

IL_00c9:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
		}

IL_00d2:
		{
			// while(calibrating && !cancelled)
			StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C * L_21 = __this->get_U3CU3E4__this_3();
			NullCheck(L_21);
			bool L_22 = L_21->get_calibrating_7();
			if (!L_22)
			{
				goto IL_00ef;
			}
		}

IL_00df:
		{
			StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C * L_23 = __this->get_U3CU3E4__this_3();
			NullCheck(L_23);
			bool L_24 = L_23->get_cancelled_10();
			G_B12_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
			goto IL_00f0;
		}

IL_00ef:
		{
			G_B12_0 = 0;
		}

IL_00f0:
		{
			V_4 = (bool)G_B12_0;
			bool L_25 = V_4;
			if (L_25)
			{
				goto IL_0070;
			}
		}

IL_00f9:
		{
			// Debug.Log("Finished calibration");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral5FA8FD27D5ED3C6D58DCA0B4BF97E817548A4BE2, /*hidden argument*/NULL);
			// offAxisCameraRig.EnableCameraTracking();
			StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C * L_26 = __this->get_U3CU3E4__this_3();
			NullCheck(L_26);
			OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * L_27 = L_26->get_offAxisCameraRig_15();
			NullCheck(L_27);
			OffAxisCameraRig_EnableCameraTracking_mC24B2E1754DA3E2B4B80C77D0DBB0F0CC1C6EE96(L_27, /*hidden argument*/NULL);
			// trackingSource.TrackingDataUpdated -= TrackingUpdated;
			StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C * L_28 = __this->get_U3CU3E4__this_3();
			NullCheck(L_28);
			MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7 * L_29 = L_28->get_trackingSource_4();
			StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C * L_30 = __this->get_U3CU3E4__this_3();
			TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_31 = (TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 *)il2cpp_codegen_object_new(TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5_il2cpp_TypeInfo_var);
			TrackingDataUpdatedEvent__ctor_mE191FC4729F2FBFA6D809DD6C46DBFA7841B6C75(L_31, L_30, (intptr_t)((intptr_t)StreamTrackingCalibrator_TrackingUpdated_mF41CF3400AD8F83C043AB04EE7F78F03A1B73C05_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_29);
			VirtActionInvoker1< TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * >::Invoke(5 /* System.Void MPDepthCore.TrackingSources.MPDepthTrackingSource::remove_TrackingDataUpdated(MPDepthCore.TrackingSources.MPDepthTrackingSource/TrackingDataUpdatedEvent) */, L_29, L_31);
			// if (cancelled) return false;
			StreamTrackingCalibrator_tD383986F1D0BC99C954A4DAE69E3A7A98642812C * L_32 = __this->get_U3CU3E4__this_3();
			NullCheck(L_32);
			bool L_33 = L_32->get_cancelled_10();
			V_5 = L_33;
			bool L_34 = V_5;
			if (!L_34)
			{
				goto IL_014c;
			}
		}

IL_0148:
		{
			// if (cancelled) return false;
			V_1 = (bool)0;
			goto IL_016a;
		}

IL_014c:
		{
			// else return true;
			V_1 = (bool)1;
			goto IL_016a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0150;
		}
		throw e;
	}

CATCH_0150:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_35 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_36 = V_6;
		AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_35, L_36, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_017f;
	} // end catch (depth: 1)

IL_016a:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_37 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_38 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_37, L_38, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
	}

IL_017f:
	{
		return;
	}
}
// System.Void StreamTrackingSystem.StreamTrackingCalibrator/<StartCalibration>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartCalibrationU3Ed__14_SetStateMachine_mDFC942F7AB91A3C59F2C8B3A8A9CF173AFDB8829 (U3CStartCalibrationU3Ed__14_t2A308812815C7DC9CA1BA75B9B9BAE267B61437A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void StreamTrackingSystem.StreamTrackingProvider/SaveData::.ctor(System.Collections.Generic.List`1<StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration>,StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData__ctor_mACCBDC9AF1DAE59C29BC2D6EF608435DCA135702 (SaveData_t2D9CC0249F1B127F8D324F24D1F03657D61B0A3F * __this, List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C * ___savedConfigurations0, SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * ___currentCalibration1, const RuntimeMethod* method)
{
	{
		// public SaveData(List<SavedStreamTrackingConfiguration> savedConfigurations, SavedStreamTrackingConfiguration currentCalibration)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.savedConfigurations = savedConfigurations;
		List_1_t8B1A77FECF2D1AE399217C7DBED9CE531B1E795C * L_0 = ___savedConfigurations0;
		__this->set_savedConfigurations_0(L_0);
		// this.currentCalibration = currentCalibration;
		SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * L_1 = ___currentCalibration1;
		__this->set_currentCalibration_1(L_1);
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
// System.String StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SavedStreamTrackingConfiguration_get_Name_m4C6E1A40DA111CA5BE0E9ED871AFF256DBBC40C2 (SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * __this, const RuntimeMethod* method)
{
	{
		// get => name;
		String_t* L_0 = __this->get_name_0();
		return L_0;
	}
}
// System.Void StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedStreamTrackingConfiguration_set_Name_m3DA67BF649ED1AE6102A28C3D7D9052313D7AD68 (SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set => name = value;
		String_t* L_0 = ___value0;
		__this->set_name_0(L_0);
		return;
	}
}
// System.Void StreamTrackingSystem.StreamTrackingProvider/SavedStreamTrackingConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedStreamTrackingConfiguration__ctor_m72339F8AE71C40B33AA10DD430B6CBEF8ABC616A (SavedStreamTrackingConfiguration_t882125EB1ACDF69F4BA69766647717A440F267AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02EC0FD34739C2A844A6731C3854FA80A3DD1B28);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string name = "Default Name";
		__this->set_name_0(_stringLiteral02EC0FD34739C2A844A6731C3854FA80A3DD1B28);
		// public TrackerOffsetCalibration TrackerOffsetCalibration = new TrackerOffsetCalibration();
		TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 * L_0 = (TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 *)il2cpp_codegen_object_new(TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321_il2cpp_TypeInfo_var);
		TrackerOffsetCalibration__ctor_m03477A4C301073620A958E842F726237BDCEE442(L_0, /*hidden argument*/NULL);
		__this->set_TrackerOffsetCalibration_1(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
