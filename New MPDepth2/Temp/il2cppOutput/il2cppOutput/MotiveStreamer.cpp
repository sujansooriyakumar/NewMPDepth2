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

// Client.TrackingStreamConsumer`1/ConnectionRefusalWarningSystem<MotiveRigidBodyData>
struct ConnectionRefusalWarningSystem_tECD4D1AE2B9834D6F3CA5BB818182425AD2697C8;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<MPDepthCore.Calibration.Camera.SavedTrackerCalibration>
struct IEnumerable_1_t2B84CF9AB9A89A0942B761D923C5B7431C933A09;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<MPDepthCore.Calibration.Camera.SavedTrackerCalibration>
struct List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC;
// System.Collections.Generic.List`1<MotiveTrackingStreamer.MotiveStreamTrackingProvider/SavedMotiveStreamTrackingConfiguration>
struct List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309;
// Client.TrackingStreamConsumer`1<MotiveRigidBodyData>
struct TrackingStreamConsumer_1_t61230F6E87D5FFECE501C98C2998F3D8D7CD0E45;
// Client.TrackingStreamConsumer`1<System.Object>
struct TrackingStreamConsumer_1_t36AE47F76F0CF9C505CF8F46A145EE59D80627DF;
// Client.TrackingStreamConsumer`1/TrackingStreamNotificationEvent<MotiveRigidBodyData>
struct TrackingStreamNotificationEvent_t76D03080DA43913C3AECAE170F252080BCAF5CCD;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// MPDepthCore.Calibration.Camera.SavedTrackerCalibration[]
struct SavedTrackerCalibrationU5BU5D_tA057D55D961AAA1BFD2BAA2CBBD56D1CE62195C3;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// MotiveTrackingStreamer.MotiveStreamTrackingProvider/SavedMotiveStreamTrackingConfiguration[]
struct SavedMotiveStreamTrackingConfigurationU5BU5D_tAAADDCB4D0962C887C28B083F0FD7DFE2DF6A5FC;
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
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// MPDepthCore.Calibration.Camera.EyeTrackingData
struct EyeTrackingData_tCEFBEC72106BDE88D157D2A3ECE2B59C185551CC;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
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
// MotiveRigidBodyData
struct MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37;
// MotiveTrackingStreamer.MotiveStreamTrackingCalibrator
struct MotiveStreamTrackingCalibrator_tBECF77D527CEB961377F21709037A14E8022C311;
// MotiveTrackingStreamer.MotiveStreamTrackingProvider
struct MotiveStreamTrackingProvider_tCC6640F591DAAF2DA2BB2C9A55410979F14B7E9F;
// MotiveTrackingDataReceiver
struct MotiveTrackingDataReceiver_tDFDFB254132DD7F9559DCFF24C72E3DA8BEB3821;
// OffAxisCamera.OffAxisCameraRig
struct OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF;
// OffAxisCamera.ScreenConfiguration.OffAxisScreenProvider
struct OffAxisScreenProvider_t45C80864E577E00448ACE703B2FAED5A7A961BFA;
// MPDepthCore.Calibration.Camera.SavedTrackerCalibration
struct SavedTrackerCalibration_t3FA08259D0F122FD3529F267C02CEBD78608A15B;
// MPDepthCore.Calibration.Screen.ScreenCalibrationProvider
struct ScreenCalibrationProvider_tD648C36DFC6279FB60A284A5824D0FA012CD9F80;
// System.String
struct String_t;
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
// MotiveTrackingStreamer.MotiveStreamTrackingProvider/SaveData
struct SaveData_t3AFFF516FB57E3D04C452A330FB8073214DB01E3;
// MotiveTrackingStreamer.MotiveStreamTrackingProvider/SavedMotiveStreamTrackingConfiguration
struct SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C;
// OffAxisCamera.OffAxisCameraRig/UpdateCameraLocationEvent
struct UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D;

IL2CPP_EXTERN_C RuntimeClass* List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SaveData_t3AFFF516FB57E3D04C452A330FB8073214DB01E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02EC0FD34739C2A844A6731C3854FA80A3DD1B28;
IL2CPP_EXTERN_C String_t* _stringLiteral067E4026675E49D1B2AE162552113EDD3055D729;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisTrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53_mDC6238E62F605314461360820EB92746B45D71E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisSaveData_t3AFFF516FB57E3D04C452A330FB8073214DB01E3_m75F502B0BD256F7A91C3873DADBBF4CB69B8990D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m93944ED1E53BFD806C21AD30D6FF9E90FBD7FE4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F199C5D42B799C186A8C0DCFB7E43E94D3E8393_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m04E055F3B5B9161B4DACC4E43C845722E6937AFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MotiveStreamTrackingCalibrator_TrackingUpdated_m6CD9B134410FA8966D5F814352914A846B3599F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingStreamConsumer_1__ctor_m36B30ADB118ACE73D1054AE7DAF3F9D2B292E0F4_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tB41CDF6B814295DCE54596A2ED6C5B58642E94C2 
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


// System.Collections.Generic.List`1<MotiveTrackingStreamer.MotiveStreamTrackingProvider/SavedMotiveStreamTrackingConfiguration>
struct List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SavedMotiveStreamTrackingConfigurationU5BU5D_tAAADDCB4D0962C887C28B083F0FD7DFE2DF6A5FC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309, ____items_1)); }
	inline SavedMotiveStreamTrackingConfigurationU5BU5D_tAAADDCB4D0962C887C28B083F0FD7DFE2DF6A5FC* get__items_1() const { return ____items_1; }
	inline SavedMotiveStreamTrackingConfigurationU5BU5D_tAAADDCB4D0962C887C28B083F0FD7DFE2DF6A5FC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SavedMotiveStreamTrackingConfigurationU5BU5D_tAAADDCB4D0962C887C28B083F0FD7DFE2DF6A5FC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SavedMotiveStreamTrackingConfigurationU5BU5D_tAAADDCB4D0962C887C28B083F0FD7DFE2DF6A5FC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309_StaticFields, ____emptyArray_5)); }
	inline SavedMotiveStreamTrackingConfigurationU5BU5D_tAAADDCB4D0962C887C28B083F0FD7DFE2DF6A5FC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SavedMotiveStreamTrackingConfigurationU5BU5D_tAAADDCB4D0962C887C28B083F0FD7DFE2DF6A5FC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SavedMotiveStreamTrackingConfigurationU5BU5D_tAAADDCB4D0962C887C28B083F0FD7DFE2DF6A5FC* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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

// MotiveTrackingStreamer.MotiveStreamTrackingProvider/SaveData
struct SaveData_t3AFFF516FB57E3D04C452A330FB8073214DB01E3  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MotiveTrackingStreamer.MotiveStreamTrackingProvider/SavedMotiveStreamTrackingConfiguration> MotiveTrackingStreamer.MotiveStreamTrackingProvider/SaveData::savedConfigurations
	List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309 * ___savedConfigurations_0;
	// MotiveTrackingStreamer.MotiveStreamTrackingProvider/SavedMotiveStreamTrackingConfiguration MotiveTrackingStreamer.MotiveStreamTrackingProvider/SaveData::currentCalibration
	SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * ___currentCalibration_1;

public:
	inline static int32_t get_offset_of_savedConfigurations_0() { return static_cast<int32_t>(offsetof(SaveData_t3AFFF516FB57E3D04C452A330FB8073214DB01E3, ___savedConfigurations_0)); }
	inline List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309 * get_savedConfigurations_0() const { return ___savedConfigurations_0; }
	inline List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309 ** get_address_of_savedConfigurations_0() { return &___savedConfigurations_0; }
	inline void set_savedConfigurations_0(List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309 * value)
	{
		___savedConfigurations_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___savedConfigurations_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentCalibration_1() { return static_cast<int32_t>(offsetof(SaveData_t3AFFF516FB57E3D04C452A330FB8073214DB01E3, ___currentCalibration_1)); }
	inline SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * get_currentCalibration_1() const { return ___currentCalibration_1; }
	inline SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C ** get_address_of_currentCalibration_1() { return &___currentCalibration_1; }
	inline void set_currentCalibration_1(SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * value)
	{
		___currentCalibration_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentCalibration_1), (void*)value);
	}
};


// MotiveTrackingStreamer.MotiveStreamTrackingProvider/SavedMotiveStreamTrackingConfiguration
struct SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C  : public RuntimeObject
{
public:
	// System.String MotiveTrackingStreamer.MotiveStreamTrackingProvider/SavedMotiveStreamTrackingConfiguration::name
	String_t* ___name_0;
	// MPDepthCore.Calibration.Camera.TrackerOffsetCalibration MotiveTrackingStreamer.MotiveStreamTrackingProvider/SavedMotiveStreamTrackingConfiguration::TrackerOffsetCalibration
	TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 * ___TrackerOffsetCalibration_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_TrackerOffsetCalibration_1() { return static_cast<int32_t>(offsetof(SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C, ___TrackerOffsetCalibration_1)); }
	inline TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 * get_TrackerOffsetCalibration_1() const { return ___TrackerOffsetCalibration_1; }
	inline TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 ** get_address_of_TrackerOffsetCalibration_1() { return &___TrackerOffsetCalibration_1; }
	inline void set_TrackerOffsetCalibration_1(TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 * value)
	{
		___TrackerOffsetCalibration_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrackerOffsetCalibration_1), (void*)value);
	}
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

// MotiveRigidBodyData
struct MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37  : public RuntimeObject
{
public:
	// UnityEngine.Transform MotiveRigidBodyData::phoneTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___phoneTransform_0;
	// UnityEngine.Transform MotiveRigidBodyData::screenTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___screenTransform_1;
	// UnityEngine.Vector3 MotiveRigidBodyData::phonePos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___phonePos_2;
	// UnityEngine.Vector3 MotiveRigidBodyData::phoneRot
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___phoneRot_3;
	// UnityEngine.Vector3 MotiveRigidBodyData::screenPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___screenPos_4;
	// UnityEngine.Vector3 MotiveRigidBodyData::screenRot
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___screenRot_5;

public:
	inline static int32_t get_offset_of_phoneTransform_0() { return static_cast<int32_t>(offsetof(MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37, ___phoneTransform_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_phoneTransform_0() const { return ___phoneTransform_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_phoneTransform_0() { return &___phoneTransform_0; }
	inline void set_phoneTransform_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___phoneTransform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___phoneTransform_0), (void*)value);
	}

	inline static int32_t get_offset_of_screenTransform_1() { return static_cast<int32_t>(offsetof(MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37, ___screenTransform_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_screenTransform_1() const { return ___screenTransform_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_screenTransform_1() { return &___screenTransform_1; }
	inline void set_screenTransform_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___screenTransform_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___screenTransform_1), (void*)value);
	}

	inline static int32_t get_offset_of_phonePos_2() { return static_cast<int32_t>(offsetof(MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37, ___phonePos_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_phonePos_2() const { return ___phonePos_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_phonePos_2() { return &___phonePos_2; }
	inline void set_phonePos_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___phonePos_2 = value;
	}

	inline static int32_t get_offset_of_phoneRot_3() { return static_cast<int32_t>(offsetof(MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37, ___phoneRot_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_phoneRot_3() const { return ___phoneRot_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_phoneRot_3() { return &___phoneRot_3; }
	inline void set_phoneRot_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___phoneRot_3 = value;
	}

	inline static int32_t get_offset_of_screenPos_4() { return static_cast<int32_t>(offsetof(MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37, ___screenPos_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_screenPos_4() const { return ___screenPos_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_screenPos_4() { return &___screenPos_4; }
	inline void set_screenPos_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___screenPos_4 = value;
	}

	inline static int32_t get_offset_of_screenRot_5() { return static_cast<int32_t>(offsetof(MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37, ___screenRot_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_screenRot_5() const { return ___screenRot_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_screenRot_5() { return &___screenRot_5; }
	inline void set_screenRot_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___screenRot_5 = value;
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


// Client.TrackingStreamConsumer`1<MotiveRigidBodyData>
struct TrackingStreamConsumer_1_t61230F6E87D5FFECE501C98C2998F3D8D7CD0E45  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
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
	ConnectionRefusalWarningSystem_tECD4D1AE2B9834D6F3CA5BB818182425AD2697C8 * ___connectionRefusalWarningSystem_15;

public:
	inline static int32_t get_offset_of_port_5() { return static_cast<int32_t>(offsetof(TrackingStreamConsumer_1_t61230F6E87D5FFECE501C98C2998F3D8D7CD0E45, ___port_5)); }
	inline int32_t get_port_5() const { return ___port_5; }
	inline int32_t* get_address_of_port_5() { return &___port_5; }
	inline void set_port_5(int32_t value)
	{
		___port_5 = value;
	}

	inline static int32_t get_offset_of_address_6() { return static_cast<int32_t>(offsetof(TrackingStreamConsumer_1_t61230F6E87D5FFECE501C98C2998F3D8D7CD0E45, ___address_6)); }
	inline String_t* get_address_6() const { return ___address_6; }
	inline String_t** get_address_of_address_6() { return &___address_6; }
	inline void set_address_6(String_t* value)
	{
		___address_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___address_6), (void*)value);
	}

	inline static int32_t get_offset_of_receiving_7() { return static_cast<int32_t>(offsetof(TrackingStreamConsumer_1_t61230F6E87D5FFECE501C98C2998F3D8D7CD0E45, ___receiving_7)); }
	inline bool get_receiving_7() const { return ___receiving_7; }
	inline bool* get_address_of_receiving_7() { return &___receiving_7; }
	inline void set_receiving_7(bool value)
	{
		___receiving_7 = value;
	}

	inline static int32_t get_offset_of_timeSinceLastUpdate_8() { return static_cast<int32_t>(offsetof(TrackingStreamConsumer_1_t61230F6E87D5FFECE501C98C2998F3D8D7CD0E45, ___timeSinceLastUpdate_8)); }
	inline float get_timeSinceLastUpdate_8() const { return ___timeSinceLastUpdate_8; }
	inline float* get_address_of_timeSinceLastUpdate_8() { return &___timeSinceLastUpdate_8; }
	inline void set_timeSinceLastUpdate_8(float value)
	{
		___timeSinceLastUpdate_8 = value;
	}

	inline static int32_t get_offset_of_lastTimeDataReceived_9() { return static_cast<int32_t>(offsetof(TrackingStreamConsumer_1_t61230F6E87D5FFECE501C98C2998F3D8D7CD0E45, ___lastTimeDataReceived_9)); }
	inline float get_lastTimeDataReceived_9() const { return ___lastTimeDataReceived_9; }
	inline float* get_address_of_lastTimeDataReceived_9() { return &___lastTimeDataReceived_9; }
	inline void set_lastTimeDataReceived_9(float value)
	{
		___lastTimeDataReceived_9 = value;
	}

	inline static int32_t get_offset_of_receiveCutoff_10() { return static_cast<int32_t>(offsetof(TrackingStreamConsumer_1_t61230F6E87D5FFECE501C98C2998F3D8D7CD0E45, ___receiveCutoff_10)); }
	inline float get_receiveCutoff_10() const { return ___receiveCutoff_10; }
	inline float* get_address_of_receiveCutoff_10() { return &___receiveCutoff_10; }
	inline void set_receiveCutoff_10(float value)
	{
		___receiveCutoff_10 = value;
	}

	inline static int32_t get_offset_of_showConnectionRefusedError_11() { return static_cast<int32_t>(offsetof(TrackingStreamConsumer_1_t61230F6E87D5FFECE501C98C2998F3D8D7CD0E45, ___showConnectionRefusedError_11)); }
	inline bool get_showConnectionRefusedError_11() const { return ___showConnectionRefusedError_11; }
	inline bool* get_address_of_showConnectionRefusedError_11() { return &___showConnectionRefusedError_11; }
	inline void set_showConnectionRefusedError_11(bool value)
	{
		___showConnectionRefusedError_11 = value;
	}

	inline static int32_t get_offset_of_client_12() { return static_cast<int32_t>(offsetof(TrackingStreamConsumer_1_t61230F6E87D5FFECE501C98C2998F3D8D7CD0E45, ___client_12)); }
	inline UdpClient_tB4DD273AAF94CA02D0400E94E4D9EA9BD6143C7A * get_client_12() const { return ___client_12; }
	inline UdpClient_tB4DD273AAF94CA02D0400E94E4D9EA9BD6143C7A ** get_address_of_client_12() { return &___client_12; }
	inline void set_client_12(UdpClient_tB4DD273AAF94CA02D0400E94E4D9EA9BD6143C7A * value)
	{
		___client_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_12), (void*)value);
	}

	inline static int32_t get_offset_of_running_13() { return static_cast<int32_t>(offsetof(TrackingStreamConsumer_1_t61230F6E87D5FFECE501C98C2998F3D8D7CD0E45, ___running_13)); }
	inline bool get_running_13() const { return ___running_13; }
	inline bool* get_address_of_running_13() { return &___running_13; }
	inline void set_running_13(bool value)
	{
		___running_13 = value;
	}

	inline static int32_t get_offset_of_warningDelayTime_14() { return static_cast<int32_t>(offsetof(TrackingStreamConsumer_1_t61230F6E87D5FFECE501C98C2998F3D8D7CD0E45, ___warningDelayTime_14)); }
	inline float get_warningDelayTime_14() const { return ___warningDelayTime_14; }
	inline float* get_address_of_warningDelayTime_14() { return &___warningDelayTime_14; }
	inline void set_warningDelayTime_14(float value)
	{
		___warningDelayTime_14 = value;
	}

	inline static int32_t get_offset_of_connectionRefusalWarningSystem_15() { return static_cast<int32_t>(offsetof(TrackingStreamConsumer_1_t61230F6E87D5FFECE501C98C2998F3D8D7CD0E45, ___connectionRefusalWarningSystem_15)); }
	inline ConnectionRefusalWarningSystem_tECD4D1AE2B9834D6F3CA5BB818182425AD2697C8 * get_connectionRefusalWarningSystem_15() const { return ___connectionRefusalWarningSystem_15; }
	inline ConnectionRefusalWarningSystem_tECD4D1AE2B9834D6F3CA5BB818182425AD2697C8 ** get_address_of_connectionRefusalWarningSystem_15() { return &___connectionRefusalWarningSystem_15; }
	inline void set_connectionRefusalWarningSystem_15(ConnectionRefusalWarningSystem_tECD4D1AE2B9834D6F3CA5BB818182425AD2697C8 * value)
	{
		___connectionRefusalWarningSystem_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectionRefusalWarningSystem_15), (void*)value);
	}
};

struct TrackingStreamConsumer_1_t61230F6E87D5FFECE501C98C2998F3D8D7CD0E45_StaticFields
{
public:
	// Client.TrackingStreamConsumer`1/TrackingStreamNotificationEvent<T> Client.TrackingStreamConsumer`1::TrackingStreamNotificationOccured
	TrackingStreamNotificationEvent_t76D03080DA43913C3AECAE170F252080BCAF5CCD * ___TrackingStreamNotificationOccured_4;

public:
	inline static int32_t get_offset_of_TrackingStreamNotificationOccured_4() { return static_cast<int32_t>(offsetof(TrackingStreamConsumer_1_t61230F6E87D5FFECE501C98C2998F3D8D7CD0E45_StaticFields, ___TrackingStreamNotificationOccured_4)); }
	inline TrackingStreamNotificationEvent_t76D03080DA43913C3AECAE170F252080BCAF5CCD * get_TrackingStreamNotificationOccured_4() const { return ___TrackingStreamNotificationOccured_4; }
	inline TrackingStreamNotificationEvent_t76D03080DA43913C3AECAE170F252080BCAF5CCD ** get_address_of_TrackingStreamNotificationOccured_4() { return &___TrackingStreamNotificationOccured_4; }
	inline void set_TrackingStreamNotificationOccured_4(TrackingStreamNotificationEvent_t76D03080DA43913C3AECAE170F252080BCAF5CCD * value)
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


// MotiveTrackingStreamer.MotiveStreamTrackingCalibrator
struct MotiveStreamTrackingCalibrator_tBECF77D527CEB961377F21709037A14E8022C311  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MPDepthCore.TrackingSources.MPDepthTrackingSource MotiveTrackingStreamer.MotiveStreamTrackingCalibrator::trackingSource
	MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7 * ___trackingSource_4;
	// UnityEngine.GameObject MotiveTrackingStreamer.MotiveStreamTrackingCalibrator::calibrationObjects
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___calibrationObjects_5;
	// UnityEngine.GameObject MotiveTrackingStreamer.MotiveStreamTrackingCalibrator::calibrationUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___calibrationUI_6;
	// System.Boolean MotiveTrackingStreamer.MotiveStreamTrackingCalibrator::calibrating
	bool ___calibrating_7;
	// System.Single MotiveTrackingStreamer.MotiveStreamTrackingCalibrator::manualCalibrationDistance
	float ___manualCalibrationDistance_8;
	// MPDepthCore.Calibration.Camera.MPDepthTrackingData MotiveTrackingStreamer.MotiveStreamTrackingCalibrator::trackingData
	MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * ___trackingData_9;
	// System.Boolean MotiveTrackingStreamer.MotiveStreamTrackingCalibrator::cancelled
	bool ___cancelled_10;
	// MotiveTrackingStreamer.MotiveStreamTrackingProvider/SavedMotiveStreamTrackingConfiguration MotiveTrackingStreamer.MotiveStreamTrackingCalibrator::calibration
	SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * ___calibration_11;
	// System.Single MotiveTrackingStreamer.MotiveStreamTrackingCalibrator::defaultDistanceFromScreenCenter
	float ___defaultDistanceFromScreenCenter_12;
	// UnityEngine.Transform MotiveTrackingStreamer.MotiveStreamTrackingCalibrator::calibrationTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___calibrationTransform_13;
	// UnityEngine.GameObject MotiveTrackingStreamer.MotiveStreamTrackingCalibrator::mainUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mainUI_14;
	// OffAxisCamera.OffAxisCameraRig MotiveTrackingStreamer.MotiveStreamTrackingCalibrator::offAxisCameraRig
	OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * ___offAxisCameraRig_15;
	// UnityEngine.Camera MotiveTrackingStreamer.MotiveStreamTrackingCalibrator::offAxisCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___offAxisCamera_16;

public:
	inline static int32_t get_offset_of_trackingSource_4() { return static_cast<int32_t>(offsetof(MotiveStreamTrackingCalibrator_tBECF77D527CEB961377F21709037A14E8022C311, ___trackingSource_4)); }
	inline MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7 * get_trackingSource_4() const { return ___trackingSource_4; }
	inline MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7 ** get_address_of_trackingSource_4() { return &___trackingSource_4; }
	inline void set_trackingSource_4(MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7 * value)
	{
		___trackingSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_calibrationObjects_5() { return static_cast<int32_t>(offsetof(MotiveStreamTrackingCalibrator_tBECF77D527CEB961377F21709037A14E8022C311, ___calibrationObjects_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_calibrationObjects_5() const { return ___calibrationObjects_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_calibrationObjects_5() { return &___calibrationObjects_5; }
	inline void set_calibrationObjects_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___calibrationObjects_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibrationObjects_5), (void*)value);
	}

	inline static int32_t get_offset_of_calibrationUI_6() { return static_cast<int32_t>(offsetof(MotiveStreamTrackingCalibrator_tBECF77D527CEB961377F21709037A14E8022C311, ___calibrationUI_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_calibrationUI_6() const { return ___calibrationUI_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_calibrationUI_6() { return &___calibrationUI_6; }
	inline void set_calibrationUI_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___calibrationUI_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibrationUI_6), (void*)value);
	}

	inline static int32_t get_offset_of_calibrating_7() { return static_cast<int32_t>(offsetof(MotiveStreamTrackingCalibrator_tBECF77D527CEB961377F21709037A14E8022C311, ___calibrating_7)); }
	inline bool get_calibrating_7() const { return ___calibrating_7; }
	inline bool* get_address_of_calibrating_7() { return &___calibrating_7; }
	inline void set_calibrating_7(bool value)
	{
		___calibrating_7 = value;
	}

	inline static int32_t get_offset_of_manualCalibrationDistance_8() { return static_cast<int32_t>(offsetof(MotiveStreamTrackingCalibrator_tBECF77D527CEB961377F21709037A14E8022C311, ___manualCalibrationDistance_8)); }
	inline float get_manualCalibrationDistance_8() const { return ___manualCalibrationDistance_8; }
	inline float* get_address_of_manualCalibrationDistance_8() { return &___manualCalibrationDistance_8; }
	inline void set_manualCalibrationDistance_8(float value)
	{
		___manualCalibrationDistance_8 = value;
	}

	inline static int32_t get_offset_of_trackingData_9() { return static_cast<int32_t>(offsetof(MotiveStreamTrackingCalibrator_tBECF77D527CEB961377F21709037A14E8022C311, ___trackingData_9)); }
	inline MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * get_trackingData_9() const { return ___trackingData_9; }
	inline MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 ** get_address_of_trackingData_9() { return &___trackingData_9; }
	inline void set_trackingData_9(MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * value)
	{
		___trackingData_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingData_9), (void*)value);
	}

	inline static int32_t get_offset_of_cancelled_10() { return static_cast<int32_t>(offsetof(MotiveStreamTrackingCalibrator_tBECF77D527CEB961377F21709037A14E8022C311, ___cancelled_10)); }
	inline bool get_cancelled_10() const { return ___cancelled_10; }
	inline bool* get_address_of_cancelled_10() { return &___cancelled_10; }
	inline void set_cancelled_10(bool value)
	{
		___cancelled_10 = value;
	}

	inline static int32_t get_offset_of_calibration_11() { return static_cast<int32_t>(offsetof(MotiveStreamTrackingCalibrator_tBECF77D527CEB961377F21709037A14E8022C311, ___calibration_11)); }
	inline SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * get_calibration_11() const { return ___calibration_11; }
	inline SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C ** get_address_of_calibration_11() { return &___calibration_11; }
	inline void set_calibration_11(SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * value)
	{
		___calibration_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibration_11), (void*)value);
	}

	inline static int32_t get_offset_of_defaultDistanceFromScreenCenter_12() { return static_cast<int32_t>(offsetof(MotiveStreamTrackingCalibrator_tBECF77D527CEB961377F21709037A14E8022C311, ___defaultDistanceFromScreenCenter_12)); }
	inline float get_defaultDistanceFromScreenCenter_12() const { return ___defaultDistanceFromScreenCenter_12; }
	inline float* get_address_of_defaultDistanceFromScreenCenter_12() { return &___defaultDistanceFromScreenCenter_12; }
	inline void set_defaultDistanceFromScreenCenter_12(float value)
	{
		___defaultDistanceFromScreenCenter_12 = value;
	}

	inline static int32_t get_offset_of_calibrationTransform_13() { return static_cast<int32_t>(offsetof(MotiveStreamTrackingCalibrator_tBECF77D527CEB961377F21709037A14E8022C311, ___calibrationTransform_13)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_calibrationTransform_13() const { return ___calibrationTransform_13; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_calibrationTransform_13() { return &___calibrationTransform_13; }
	inline void set_calibrationTransform_13(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___calibrationTransform_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibrationTransform_13), (void*)value);
	}

	inline static int32_t get_offset_of_mainUI_14() { return static_cast<int32_t>(offsetof(MotiveStreamTrackingCalibrator_tBECF77D527CEB961377F21709037A14E8022C311, ___mainUI_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mainUI_14() const { return ___mainUI_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mainUI_14() { return &___mainUI_14; }
	inline void set_mainUI_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mainUI_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainUI_14), (void*)value);
	}

	inline static int32_t get_offset_of_offAxisCameraRig_15() { return static_cast<int32_t>(offsetof(MotiveStreamTrackingCalibrator_tBECF77D527CEB961377F21709037A14E8022C311, ___offAxisCameraRig_15)); }
	inline OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * get_offAxisCameraRig_15() const { return ___offAxisCameraRig_15; }
	inline OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF ** get_address_of_offAxisCameraRig_15() { return &___offAxisCameraRig_15; }
	inline void set_offAxisCameraRig_15(OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * value)
	{
		___offAxisCameraRig_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offAxisCameraRig_15), (void*)value);
	}

	inline static int32_t get_offset_of_offAxisCamera_16() { return static_cast<int32_t>(offsetof(MotiveStreamTrackingCalibrator_tBECF77D527CEB961377F21709037A14E8022C311, ___offAxisCamera_16)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_offAxisCamera_16() const { return ___offAxisCamera_16; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_offAxisCamera_16() { return &___offAxisCamera_16; }
	inline void set_offAxisCamera_16(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___offAxisCamera_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offAxisCamera_16), (void*)value);
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


// MotiveTrackingStreamer.MotiveStreamTrackingProvider
struct MotiveStreamTrackingProvider_tCC6640F591DAAF2DA2BB2C9A55410979F14B7E9F  : public TrackingCalibrationProvider_t936458C67919392EE6B88C439729E2AECA9293AB
{
public:
	// MotiveTrackingStreamer.MotiveStreamTrackingProvider/SavedMotiveStreamTrackingConfiguration MotiveTrackingStreamer.MotiveStreamTrackingProvider::currentCalibration
	SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * ___currentCalibration_5;
	// System.Collections.Generic.List`1<MotiveTrackingStreamer.MotiveStreamTrackingProvider/SavedMotiveStreamTrackingConfiguration> MotiveTrackingStreamer.MotiveStreamTrackingProvider::savedCalibrations
	List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309 * ___savedCalibrations_6;
	// MotiveTrackingStreamer.MotiveStreamTrackingCalibrator MotiveTrackingStreamer.MotiveStreamTrackingProvider::calibrator
	MotiveStreamTrackingCalibrator_tBECF77D527CEB961377F21709037A14E8022C311 * ___calibrator_7;
	// UnityEngine.GameObject MotiveTrackingStreamer.MotiveStreamTrackingProvider::calibrationUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___calibrationUI_8;

public:
	inline static int32_t get_offset_of_currentCalibration_5() { return static_cast<int32_t>(offsetof(MotiveStreamTrackingProvider_tCC6640F591DAAF2DA2BB2C9A55410979F14B7E9F, ___currentCalibration_5)); }
	inline SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * get_currentCalibration_5() const { return ___currentCalibration_5; }
	inline SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C ** get_address_of_currentCalibration_5() { return &___currentCalibration_5; }
	inline void set_currentCalibration_5(SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * value)
	{
		___currentCalibration_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentCalibration_5), (void*)value);
	}

	inline static int32_t get_offset_of_savedCalibrations_6() { return static_cast<int32_t>(offsetof(MotiveStreamTrackingProvider_tCC6640F591DAAF2DA2BB2C9A55410979F14B7E9F, ___savedCalibrations_6)); }
	inline List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309 * get_savedCalibrations_6() const { return ___savedCalibrations_6; }
	inline List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309 ** get_address_of_savedCalibrations_6() { return &___savedCalibrations_6; }
	inline void set_savedCalibrations_6(List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309 * value)
	{
		___savedCalibrations_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___savedCalibrations_6), (void*)value);
	}

	inline static int32_t get_offset_of_calibrator_7() { return static_cast<int32_t>(offsetof(MotiveStreamTrackingProvider_tCC6640F591DAAF2DA2BB2C9A55410979F14B7E9F, ___calibrator_7)); }
	inline MotiveStreamTrackingCalibrator_tBECF77D527CEB961377F21709037A14E8022C311 * get_calibrator_7() const { return ___calibrator_7; }
	inline MotiveStreamTrackingCalibrator_tBECF77D527CEB961377F21709037A14E8022C311 ** get_address_of_calibrator_7() { return &___calibrator_7; }
	inline void set_calibrator_7(MotiveStreamTrackingCalibrator_tBECF77D527CEB961377F21709037A14E8022C311 * value)
	{
		___calibrator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibrator_7), (void*)value);
	}

	inline static int32_t get_offset_of_calibrationUI_8() { return static_cast<int32_t>(offsetof(MotiveStreamTrackingProvider_tCC6640F591DAAF2DA2BB2C9A55410979F14B7E9F, ___calibrationUI_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_calibrationUI_8() const { return ___calibrationUI_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_calibrationUI_8() { return &___calibrationUI_8; }
	inline void set_calibrationUI_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___calibrationUI_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibrationUI_8), (void*)value);
	}
};


// MotiveTrackingDataReceiver
struct MotiveTrackingDataReceiver_tDFDFB254132DD7F9559DCFF24C72E3DA8BEB3821  : public TrackingStreamConsumer_1_t61230F6E87D5FFECE501C98C2998F3D8D7CD0E45
{
public:
	// MotiveRigidBodyData MotiveTrackingDataReceiver::ReceivedData
	MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37 * ___ReceivedData_16;
	// UnityEngine.Vector3 MotiveTrackingDataReceiver::phonePos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___phonePos_17;
	// UnityEngine.Vector3 MotiveTrackingDataReceiver::phoneRot
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___phoneRot_18;
	// UnityEngine.Vector3 MotiveTrackingDataReceiver::screenPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___screenPos_19;
	// UnityEngine.Vector3 MotiveTrackingDataReceiver::screenRot
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___screenRot_20;

public:
	inline static int32_t get_offset_of_ReceivedData_16() { return static_cast<int32_t>(offsetof(MotiveTrackingDataReceiver_tDFDFB254132DD7F9559DCFF24C72E3DA8BEB3821, ___ReceivedData_16)); }
	inline MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37 * get_ReceivedData_16() const { return ___ReceivedData_16; }
	inline MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37 ** get_address_of_ReceivedData_16() { return &___ReceivedData_16; }
	inline void set_ReceivedData_16(MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37 * value)
	{
		___ReceivedData_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceivedData_16), (void*)value);
	}

	inline static int32_t get_offset_of_phonePos_17() { return static_cast<int32_t>(offsetof(MotiveTrackingDataReceiver_tDFDFB254132DD7F9559DCFF24C72E3DA8BEB3821, ___phonePos_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_phonePos_17() const { return ___phonePos_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_phonePos_17() { return &___phonePos_17; }
	inline void set_phonePos_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___phonePos_17 = value;
	}

	inline static int32_t get_offset_of_phoneRot_18() { return static_cast<int32_t>(offsetof(MotiveTrackingDataReceiver_tDFDFB254132DD7F9559DCFF24C72E3DA8BEB3821, ___phoneRot_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_phoneRot_18() const { return ___phoneRot_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_phoneRot_18() { return &___phoneRot_18; }
	inline void set_phoneRot_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___phoneRot_18 = value;
	}

	inline static int32_t get_offset_of_screenPos_19() { return static_cast<int32_t>(offsetof(MotiveTrackingDataReceiver_tDFDFB254132DD7F9559DCFF24C72E3DA8BEB3821, ___screenPos_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_screenPos_19() const { return ___screenPos_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_screenPos_19() { return &___screenPos_19; }
	inline void set_screenPos_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___screenPos_19 = value;
	}

	inline static int32_t get_offset_of_screenRot_20() { return static_cast<int32_t>(offsetof(MotiveTrackingDataReceiver_tDFDFB254132DD7F9559DCFF24C72E3DA8BEB3821, ___screenRot_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_screenRot_20() const { return ___screenRot_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_screenRot_20() { return &___screenRot_20; }
	inline void set_screenRot_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___screenRot_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void Client.TrackingStreamConsumer`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingStreamConsumer_1__ctor_mC53804B7065FB2AA4DEDA642299A45FF2FEC8F3F_gshared (TrackingStreamConsumer_1_t36AE47F76F0CF9C505CF8F46A145EE59D80627DF * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<MPDepthCore.TrackingSystem>()
inline TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53 * Component_GetComponentInParent_TisTrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53_mDC6238E62F605314461360820EB92746B45D71E4 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// System.Void MPDepthCore.TrackingSources.MPDepthTrackingSource/TrackingDataUpdatedEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingDataUpdatedEvent__ctor_mE191FC4729F2FBFA6D809DD6C46DBFA7841B6C75 (TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<MotiveTrackingStreamer.MotiveStreamTrackingProvider/SavedMotiveStreamTrackingConfiguration>::get_Item(System.Int32)
inline SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * List_1_get_Item_m04E055F3B5B9161B4DACC4E43C845722E6937AFA_inline (List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * (*) (List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void MotiveTrackingStreamer.MotiveStreamTrackingCalibrator::CalculateCalibrationFromTrackingInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveStreamTrackingCalibrator_CalculateCalibrationFromTrackingInfo_mB2D44B218A50D480E9386B32C04F3FC63383BB16 (MotiveStreamTrackingCalibrator_tBECF77D527CEB961377F21709037A14E8022C311 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<MotiveTrackingStreamer.MotiveStreamTrackingProvider/SavedMotiveStreamTrackingConfiguration>::Add(!0)
inline void List_1_Add_m93944ED1E53BFD806C21AD30D6FF9E90FBD7FE4D (List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309 * __this, SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309 *, SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void MotiveTrackingStreamer.MotiveStreamTrackingProvider/SavedMotiveStreamTrackingConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedMotiveStreamTrackingConfiguration__ctor_m7551621F707456ABA2AB5C1A7CBD4B405BFC0064 (SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<MotiveTrackingStreamer.MotiveStreamTrackingProvider/SaveData>(System.String)
inline SaveData_t3AFFF516FB57E3D04C452A330FB8073214DB01E3 * JsonUtility_FromJson_TisSaveData_t3AFFF516FB57E3D04C452A330FB8073214DB01E3_m75F502B0BD256F7A91C3873DADBBF4CB69B8990D (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  SaveData_t3AFFF516FB57E3D04C452A330FB8073214DB01E3 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void MotiveTrackingStreamer.MotiveStreamTrackingProvider/SaveData::.ctor(System.Collections.Generic.List`1<MotiveTrackingStreamer.MotiveStreamTrackingProvider/SavedMotiveStreamTrackingConfiguration>,MotiveTrackingStreamer.MotiveStreamTrackingProvider/SavedMotiveStreamTrackingConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData__ctor_mE5D7239ABFE3FCC9E211FF5C7BA6E1F23D4B50E0 (SaveData_t3AFFF516FB57E3D04C452A330FB8073214DB01E3 * __this, List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309 * ___savedConfigurations0, SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * ___currentCalibration1, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<MPDepthCore.Calibration.Camera.SavedTrackerCalibration>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m7F199C5D42B799C186A8C0DCFB7E43E94D3E8393 (List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Void MPDepthCore.Calibration.Camera.TrackingCalibrationProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingCalibrationProvider__ctor_m953976A4C72671B39786A555D5DC2C28D2198387 (TrackingCalibrationProvider_t936458C67919392EE6B88C439729E2AECA9293AB * __this, const RuntimeMethod* method);
// System.Int32 MotiveTrackingDataReceiver::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MotiveTrackingDataReceiver_get_Port_mEE538F0BFCF6033B785A2EFF502B69BA8B31B9B7 (MotiveTrackingDataReceiver_tDFDFB254132DD7F9559DCFF24C72E3DA8BEB3821 * __this, const RuntimeMethod* method);
// System.Void Client.TrackingStreamConsumer`1<MotiveRigidBodyData>::.ctor()
inline void TrackingStreamConsumer_1__ctor_m36B30ADB118ACE73D1054AE7DAF3F9D2B292E0F4 (TrackingStreamConsumer_1_t61230F6E87D5FFECE501C98C2998F3D8D7CD0E45 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackingStreamConsumer_1_t61230F6E87D5FFECE501C98C2998F3D8D7CD0E45 *, const RuntimeMethod*))TrackingStreamConsumer_1__ctor_mC53804B7065FB2AA4DEDA642299A45FF2FEC8F3F_gshared)(__this, method);
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
// System.Void MotiveRigidBodyData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveRigidBodyData__ctor_m20DAA0B24A13B976F00E5E3E5490D10646A73CB5 (MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37 * __this, const RuntimeMethod* method)
{
	{
		// public MotiveRigidBodyData()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MotiveRigidBodyData::UpdateData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveRigidBodyData_UpdateData_m544CBDC318E76E78C0CAAAE6AA4E8E065FFCDB3F (MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37 * __this, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// phonePos = phoneTransform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_phoneTransform_0();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		__this->set_phonePos_2(L_1);
		// phoneRot = phoneTransform.rotation.eulerAngles;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_phoneTransform_0();
		NullCheck(L_2);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), /*hidden argument*/NULL);
		__this->set_phoneRot_3(L_4);
		// screenPos = screenTransform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_screenTransform_1();
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		__this->set_screenPos_4(L_6);
		// screenRot = screenTransform.rotation.eulerAngles;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = __this->get_screenTransform_1();
		NullCheck(L_7);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), /*hidden argument*/NULL);
		__this->set_screenRot_5(L_9);
		// }
		return;
	}
}
// System.Void MotiveRigidBodyData::SetPhoneTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveRigidBodyData_SetPhoneTransform_mA26566C3346003A964792120D56A2B8B2349C7B6 (MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method)
{
	{
		// phoneTransform = t;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___t0;
		__this->set_phoneTransform_0(L_0);
		// }
		return;
	}
}
// System.Void MotiveRigidBodyData::SetScreenTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveRigidBodyData_SetScreenTransform_m3B639F0A07441B79A56CAE9C9D864D8DAFC34024 (MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method)
{
	{
		// screenTransform = t;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___t0;
		__this->set_screenTransform_1(L_0);
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
// System.Void MotiveTrackingStreamer.MotiveStreamTrackingCalibrator::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveStreamTrackingCalibrator_Awake_mE1D79FE8707F69DC6AEA082AF0733E60484AC8F2 (MotiveStreamTrackingCalibrator_tBECF77D527CEB961377F21709037A14E8022C311 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisTrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53_mDC6238E62F605314461360820EB92746B45D71E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotiveStreamTrackingCalibrator_TrackingUpdated_m6CD9B134410FA8966D5F814352914A846B3599F4_RuntimeMethod_var);
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
		TrackingDataUpdatedEvent__ctor_mE191FC4729F2FBFA6D809DD6C46DBFA7841B6C75(L_8, __this, (intptr_t)((intptr_t)MotiveStreamTrackingCalibrator_TrackingUpdated_m6CD9B134410FA8966D5F814352914A846B3599F4_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * >::Invoke(4 /* System.Void MPDepthCore.TrackingSources.MPDepthTrackingSource::add_TrackingDataUpdated(MPDepthCore.TrackingSources.MPDepthTrackingSource/TrackingDataUpdatedEvent) */, L_7, L_8);
		// }
		return;
	}
}
// System.Void MotiveTrackingStreamer.MotiveStreamTrackingCalibrator::TrackingUpdated(MPDepthCore.Calibration.Camera.MPDepthTrackingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveStreamTrackingCalibrator_TrackingUpdated_m6CD9B134410FA8966D5F814352914A846B3599F4 (MotiveStreamTrackingCalibrator_tBECF77D527CEB961377F21709037A14E8022C311 * __this, MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * ___data0, const RuntimeMethod* method)
{
	{
		// this.trackingData = data;
		MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * L_0 = ___data0;
		__this->set_trackingData_9(L_0);
		// }
		return;
	}
}
// System.Void MotiveTrackingStreamer.MotiveStreamTrackingCalibrator::CalculateCalibrationFromTrackingInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveStreamTrackingCalibrator_CalculateCalibrationFromTrackingInfo_mB2D44B218A50D480E9386B32C04F3FC63383BB16 (MotiveStreamTrackingCalibrator_tBECF77D527CEB961377F21709037A14E8022C311 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MotiveTrackingStreamer.MotiveStreamTrackingCalibrator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveStreamTrackingCalibrator__ctor_m5171BAEA8FC7C27E66A66F78D728811E002AD06B (MotiveStreamTrackingCalibrator_tBECF77D527CEB961377F21709037A14E8022C311 * __this, const RuntimeMethod* method)
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
// System.Void MotiveTrackingStreamer.MotiveStreamTrackingProvider::SelectCalibration(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveStreamTrackingProvider_SelectCalibration_mFCE67D0D068B757A42ED884B55FB6F21224199A3 (MotiveStreamTrackingProvider_tCC6640F591DAAF2DA2BB2C9A55410979F14B7E9F * __this, int32_t ___selectedIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m04E055F3B5B9161B4DACC4E43C845722E6937AFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentCalibration = savedCalibrations[selectedIndex];
		List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309 * L_0 = __this->get_savedCalibrations_6();
		int32_t L_1 = ___selectedIndex0;
		NullCheck(L_0);
		SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * L_2;
		L_2 = List_1_get_Item_m04E055F3B5B9161B4DACC4E43C845722E6937AFA_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m04E055F3B5B9161B4DACC4E43C845722E6937AFA_RuntimeMethod_var);
		__this->set_currentCalibration_5(L_2);
		// calibrationTransform.position = currentCalibration.TrackerOffsetCalibration.Position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ((TrackingCalibrationProvider_t936458C67919392EE6B88C439729E2AECA9293AB *)__this)->get_calibrationTransform_4();
		SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * L_4 = __this->get_currentCalibration_5();
		NullCheck(L_4);
		TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 * L_5 = L_4->get_TrackerOffsetCalibration_1();
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ((TrackingPose_t9D6C81FDF981E08EBF7CDBBB363CA99CAB3EC265 *)L_5)->get_Position_0();
		NullCheck(L_3);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_6, /*hidden argument*/NULL);
		// calibrationTransform.rotation = Quaternion.Euler(currentCalibration.TrackerOffsetCalibration.Eulers);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = ((TrackingCalibrationProvider_t936458C67919392EE6B88C439729E2AECA9293AB *)__this)->get_calibrationTransform_4();
		SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * L_8 = __this->get_currentCalibration_5();
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
// System.Void MotiveTrackingStreamer.MotiveStreamTrackingProvider::Calibrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveStreamTrackingProvider_Calibrate_m78848FD5C635083F6D77B97785C92878EF0BA593 (MotiveStreamTrackingProvider_tCC6640F591DAAF2DA2BB2C9A55410979F14B7E9F * __this, const RuntimeMethod* method)
{
	{
		// calibrator.CalculateCalibrationFromTrackingInfo();
		MotiveStreamTrackingCalibrator_tBECF77D527CEB961377F21709037A14E8022C311 * L_0 = __this->get_calibrator_7();
		NullCheck(L_0);
		MotiveStreamTrackingCalibrator_CalculateCalibrationFromTrackingInfo_mB2D44B218A50D480E9386B32C04F3FC63383BB16(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MotiveTrackingStreamer.MotiveStreamTrackingProvider::SaveCalibration(MotiveTrackingStreamer.MotiveStreamTrackingProvider/SavedMotiveStreamTrackingConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveStreamTrackingProvider_SaveCalibration_m725E3F2381A1A2F3CF765AE10F2B00F7B02ADC54 (MotiveStreamTrackingProvider_tCC6640F591DAAF2DA2BB2C9A55410979F14B7E9F * __this, SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * ___calibration0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m93944ED1E53BFD806C21AD30D6FF9E90FBD7FE4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// savedCalibrations.Add(calibration);
		List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309 * L_0 = __this->get_savedCalibrations_6();
		SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * L_1 = ___calibration0;
		NullCheck(L_0);
		List_1_Add_m93944ED1E53BFD806C21AD30D6FF9E90FBD7FE4D(L_0, L_1, /*hidden argument*/List_1_Add_m93944ED1E53BFD806C21AD30D6FF9E90FBD7FE4D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MotiveTrackingStreamer.MotiveStreamTrackingProvider::FinishSetupAfterLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveStreamTrackingProvider_FinishSetupAfterLoad_mE060097E793A647EE9164E80F13A05CC93F1D150 (MotiveStreamTrackingProvider_tCC6640F591DAAF2DA2BB2C9A55410979F14B7E9F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MotiveTrackingStreamer.MotiveStreamTrackingProvider::SetCurrentToDefaultCalibration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveStreamTrackingProvider_SetCurrentToDefaultCalibration_mCD9F2DECF7A8521C34675E33EB2E435FE4104959 (MotiveStreamTrackingProvider_tCC6640F591DAAF2DA2BB2C9A55410979F14B7E9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentCalibration = new SavedMotiveStreamTrackingConfiguration();
		SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * L_0 = (SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C *)il2cpp_codegen_object_new(SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C_il2cpp_TypeInfo_var);
		SavedMotiveStreamTrackingConfiguration__ctor_m7551621F707456ABA2AB5C1A7CBD4B405BFC0064(L_0, /*hidden argument*/NULL);
		__this->set_currentCalibration_5(L_0);
		// }
		return;
	}
}
// System.Void MotiveTrackingStreamer.MotiveStreamTrackingProvider::LoadSelfFromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveStreamTrackingProvider_LoadSelfFromJson_mF0574C7A1550FF5FD99E2AAE5AAD999D3197A97C (MotiveStreamTrackingProvider_tCC6640F591DAAF2DA2BB2C9A55410979F14B7E9F * __this, String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisSaveData_t3AFFF516FB57E3D04C452A330FB8073214DB01E3_m75F502B0BD256F7A91C3873DADBBF4CB69B8990D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SaveData_t3AFFF516FB57E3D04C452A330FB8073214DB01E3 * V_0 = NULL;
	{
		// SaveData saveData = JsonUtility.FromJson<SaveData>(json);
		String_t* L_0 = ___json0;
		SaveData_t3AFFF516FB57E3D04C452A330FB8073214DB01E3 * L_1;
		L_1 = JsonUtility_FromJson_TisSaveData_t3AFFF516FB57E3D04C452A330FB8073214DB01E3_m75F502B0BD256F7A91C3873DADBBF4CB69B8990D(L_0, /*hidden argument*/JsonUtility_FromJson_TisSaveData_t3AFFF516FB57E3D04C452A330FB8073214DB01E3_m75F502B0BD256F7A91C3873DADBBF4CB69B8990D_RuntimeMethod_var);
		V_0 = L_1;
		// this.currentCalibration = saveData.currentCalibration;
		SaveData_t3AFFF516FB57E3D04C452A330FB8073214DB01E3 * L_2 = V_0;
		NullCheck(L_2);
		SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * L_3 = L_2->get_currentCalibration_1();
		__this->set_currentCalibration_5(L_3);
		// this.savedCalibrations = saveData.savedConfigurations;
		SaveData_t3AFFF516FB57E3D04C452A330FB8073214DB01E3 * L_4 = V_0;
		NullCheck(L_4);
		List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309 * L_5 = L_4->get_savedConfigurations_0();
		__this->set_savedCalibrations_6(L_5);
		// }
		return;
	}
}
// System.String MotiveTrackingStreamer.MotiveStreamTrackingProvider::GetSelfAsJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MotiveStreamTrackingProvider_GetSelfAsJson_mEC2350910E9E7500A4EE45AEECD64B679B83EB53 (MotiveStreamTrackingProvider_tCC6640F591DAAF2DA2BB2C9A55410979F14B7E9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveData_t3AFFF516FB57E3D04C452A330FB8073214DB01E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SaveData_t3AFFF516FB57E3D04C452A330FB8073214DB01E3 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// SaveData saveData = new SaveData(savedCalibrations, currentCalibration);
		List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309 * L_0 = __this->get_savedCalibrations_6();
		SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * L_1 = __this->get_currentCalibration_5();
		SaveData_t3AFFF516FB57E3D04C452A330FB8073214DB01E3 * L_2 = (SaveData_t3AFFF516FB57E3D04C452A330FB8073214DB01E3 *)il2cpp_codegen_object_new(SaveData_t3AFFF516FB57E3D04C452A330FB8073214DB01E3_il2cpp_TypeInfo_var);
		SaveData__ctor_mE5D7239ABFE3FCC9E211FF5C7BA6E1F23D4B50E0(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// string json = JsonUtility.ToJson(saveData);
		SaveData_t3AFFF516FB57E3D04C452A330FB8073214DB01E3 * L_3 = V_0;
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
// MPDepthCore.Calibration.Camera.TrackerOffsetCalibration MotiveTrackingStreamer.MotiveStreamTrackingProvider::get_GetTrackerOffsetCalibration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 * MotiveStreamTrackingProvider_get_GetTrackerOffsetCalibration_m010AE51E89F90B46AFD500C043F0252D1B3E5290 (MotiveStreamTrackingProvider_tCC6640F591DAAF2DA2BB2C9A55410979F14B7E9F * __this, const RuntimeMethod* method)
{
	{
		// currentCalibration.TrackerOffsetCalibration;
		SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * L_0 = __this->get_currentCalibration_5();
		NullCheck(L_0);
		TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 * L_1 = L_0->get_TrackerOffsetCalibration_1();
		return L_1;
	}
}
// MPDepthCore.Calibration.Camera.SavedTrackerCalibration MotiveTrackingStreamer.MotiveStreamTrackingProvider::get_CurrentTrackerCalibration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MotiveStreamTrackingProvider_get_CurrentTrackerCalibration_m786ACB215B86CEC58A3D54A91655DABEBF24F83C (MotiveStreamTrackingProvider_tCC6640F591DAAF2DA2BB2C9A55410979F14B7E9F * __this, const RuntimeMethod* method)
{
	{
		// public override SavedTrackerCalibration CurrentTrackerCalibration => currentCalibration;
		SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * L_0 = __this->get_currentCalibration_5();
		return L_0;
	}
}
// System.Collections.Generic.List`1<MPDepthCore.Calibration.Camera.SavedTrackerCalibration> MotiveTrackingStreamer.MotiveStreamTrackingProvider::get_AllCalibrations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC * MotiveStreamTrackingProvider_get_AllCalibrations_mBBD622644615167F8D07617E012A78125BE8DBD9 (MotiveStreamTrackingProvider_tCC6640F591DAAF2DA2BB2C9A55410979F14B7E9F * __this, const RuntimeMethod* method)
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
		List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309 * L_0 = __this->get_savedCalibrations_6();
		List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC * L_1 = (List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC *)il2cpp_codegen_object_new(List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC_il2cpp_TypeInfo_var);
		List_1__ctor_m7F199C5D42B799C186A8C0DCFB7E43E94D3E8393(L_1, L_0, /*hidden argument*/List_1__ctor_m7F199C5D42B799C186A8C0DCFB7E43E94D3E8393_RuntimeMethod_var);
		return L_1;
	}
}
// System.String MotiveTrackingStreamer.MotiveStreamTrackingProvider::get_Filename()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MotiveStreamTrackingProvider_get_Filename_m7F199FF674A50B3559E20381B41104A5D728AE4D (MotiveStreamTrackingProvider_tCC6640F591DAAF2DA2BB2C9A55410979F14B7E9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral067E4026675E49D1B2AE162552113EDD3055D729);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override string Filename => "SavedMotiveStreamTrackerConfigurations.json";
		return _stringLiteral067E4026675E49D1B2AE162552113EDD3055D729;
	}
}
// System.Void MotiveTrackingStreamer.MotiveStreamTrackingProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveStreamTrackingProvider__ctor_mE9080EF9847E3FCD7D6EECE92804F3D125D8D475 (MotiveStreamTrackingProvider_tCC6640F591DAAF2DA2BB2C9A55410979F14B7E9F * __this, const RuntimeMethod* method)
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
// System.Int32 MotiveTrackingDataReceiver::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MotiveTrackingDataReceiver_get_Port_mEE538F0BFCF6033B785A2EFF502B69BA8B31B9B7 (MotiveTrackingDataReceiver_tDFDFB254132DD7F9559DCFF24C72E3DA8BEB3821 * __this, const RuntimeMethod* method)
{
	{
		// public int Port => Port;
		int32_t L_0;
		L_0 = MotiveTrackingDataReceiver_get_Port_mEE538F0BFCF6033B785A2EFF502B69BA8B31B9B7(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String MotiveTrackingDataReceiver::get_IP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MotiveTrackingDataReceiver_get_IP_m9C217B455858067ADDC5AAAA7AF5674096B23340 (MotiveTrackingDataReceiver_tDFDFB254132DD7F9559DCFF24C72E3DA8BEB3821 * __this, const RuntimeMethod* method)
{
	{
		// public string IP => address;
		String_t* L_0 = ((TrackingStreamConsumer_1_t61230F6E87D5FFECE501C98C2998F3D8D7CD0E45 *)__this)->get_address_6();
		return L_0;
	}
}
// System.Void MotiveTrackingDataReceiver::SetPort(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveTrackingDataReceiver_SetPort_m050D60E29E68F73AB1769C8757A56EDCCBFDB8B1 (MotiveTrackingDataReceiver_tDFDFB254132DD7F9559DCFF24C72E3DA8BEB3821 * __this, int32_t ___newPort0, const RuntimeMethod* method)
{
	{
		// port = newPort;
		int32_t L_0 = ___newPort0;
		((TrackingStreamConsumer_1_t61230F6E87D5FFECE501C98C2998F3D8D7CD0E45 *)__this)->set_port_5(L_0);
		// }
		return;
	}
}
// System.Void MotiveTrackingDataReceiver::SetIP(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveTrackingDataReceiver_SetIP_mA13E8DAAF11FBE531EE0BCBEE9649AD8BE95070D (MotiveTrackingDataReceiver_tDFDFB254132DD7F9559DCFF24C72E3DA8BEB3821 * __this, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___newAddress0, const RuntimeMethod* method)
{
	{
		// this.address = newAddress.ToString();
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_0 = ___newAddress0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		((TrackingStreamConsumer_1_t61230F6E87D5FFECE501C98C2998F3D8D7CD0E45 *)__this)->set_address_6(L_1);
		// }
		return;
	}
}
// System.Void MotiveTrackingDataReceiver::SetData(MotiveRigidBodyData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveTrackingDataReceiver_SetData_m0BE351CD4D2E94F2F9E9A9B96C564A77F055AB5C (MotiveTrackingDataReceiver_tDFDFB254132DD7F9559DCFF24C72E3DA8BEB3821 * __this, MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37 * ___receivedData0, const RuntimeMethod* method)
{
	{
		// ReceivedData = receivedData;
		MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37 * L_0 = ___receivedData0;
		__this->set_ReceivedData_16(L_0);
		// phonePos = receivedData.phonePos;
		MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37 * L_1 = ___receivedData0;
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = L_1->get_phonePos_2();
		__this->set_phonePos_17(L_2);
		// phoneRot = receivedData.phoneRot;
		MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37 * L_3 = ___receivedData0;
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = L_3->get_phoneRot_3();
		__this->set_phoneRot_18(L_4);
		// screenPos = receivedData.screenPos;
		MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37 * L_5 = ___receivedData0;
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = L_5->get_screenPos_4();
		__this->set_screenPos_19(L_6);
		// screenRot = receivedData.screenRot;
		MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37 * L_7 = ___receivedData0;
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = L_7->get_screenRot_5();
		__this->set_screenRot_20(L_8);
		// }
		return;
	}
}
// MotiveRigidBodyData MotiveTrackingDataReceiver::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37 * MotiveTrackingDataReceiver_GetData_mFB515C51134C4A061929540866276D1C0451C8B0 (MotiveTrackingDataReceiver_tDFDFB254132DD7F9559DCFF24C72E3DA8BEB3821 * __this, const RuntimeMethod* method)
{
	MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37 * V_0 = NULL;
	{
		// return ReceivedData;
		MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37 * L_0 = __this->get_ReceivedData_16();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		MotiveRigidBodyData_t38A0173363ADA22554E261852583DB920982DD37 * L_1 = V_0;
		return L_1;
	}
}
// System.Void MotiveTrackingDataReceiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveTrackingDataReceiver__ctor_mC4EE300196D3A6ABF4AA4281EDE699AA082868BB (MotiveTrackingDataReceiver_tDFDFB254132DD7F9559DCFF24C72E3DA8BEB3821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingStreamConsumer_1__ctor_m36B30ADB118ACE73D1054AE7DAF3F9D2B292E0F4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackingStreamConsumer_1__ctor_m36B30ADB118ACE73D1054AE7DAF3F9D2B292E0F4(__this, /*hidden argument*/TrackingStreamConsumer_1__ctor_m36B30ADB118ACE73D1054AE7DAF3F9D2B292E0F4_RuntimeMethod_var);
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
// System.Void MotiveTrackingStreamer.MotiveStreamTrackingProvider/SaveData::.ctor(System.Collections.Generic.List`1<MotiveTrackingStreamer.MotiveStreamTrackingProvider/SavedMotiveStreamTrackingConfiguration>,MotiveTrackingStreamer.MotiveStreamTrackingProvider/SavedMotiveStreamTrackingConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData__ctor_mE5D7239ABFE3FCC9E211FF5C7BA6E1F23D4B50E0 (SaveData_t3AFFF516FB57E3D04C452A330FB8073214DB01E3 * __this, List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309 * ___savedConfigurations0, SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * ___currentCalibration1, const RuntimeMethod* method)
{
	{
		// public SaveData(List<SavedMotiveStreamTrackingConfiguration> savedConfigurations, SavedMotiveStreamTrackingConfiguration currentCalibration)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.savedConfigurations = savedConfigurations;
		List_1_t725621D5B6D0C1CEC7ED935F6729797D89B2E309 * L_0 = ___savedConfigurations0;
		__this->set_savedConfigurations_0(L_0);
		// this.currentCalibration = currentCalibration;
		SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * L_1 = ___currentCalibration1;
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
// System.String MotiveTrackingStreamer.MotiveStreamTrackingProvider/SavedMotiveStreamTrackingConfiguration::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SavedMotiveStreamTrackingConfiguration_get_Name_mB6F9A22D09E8F9AA1CFCFC455E8AC2C4627D39F6 (SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * __this, const RuntimeMethod* method)
{
	{
		// get => name;
		String_t* L_0 = __this->get_name_0();
		return L_0;
	}
}
// System.Void MotiveTrackingStreamer.MotiveStreamTrackingProvider/SavedMotiveStreamTrackingConfiguration::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedMotiveStreamTrackingConfiguration_set_Name_mE2A20B45B41D020D0F73ADAB33BE25D242ECB34E (SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set => name = value;
		String_t* L_0 = ___value0;
		__this->set_name_0(L_0);
		return;
	}
}
// System.Void MotiveTrackingStreamer.MotiveStreamTrackingProvider/SavedMotiveStreamTrackingConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedMotiveStreamTrackingConfiguration__ctor_m7551621F707456ABA2AB5C1A7CBD4B405BFC0064 (SavedMotiveStreamTrackingConfiguration_t53109C5C3333FB8003C47CCF0F435C263AF87F8C * __this, const RuntimeMethod* method)
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
