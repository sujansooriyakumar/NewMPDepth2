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

// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<MPDepthCore.Calibration.Screen.SavedScreenCalibration>
struct IEnumerable_1_tF1E6CDC8820C40A346A717355F80AE49FA722BB4;
// System.Collections.Generic.IEnumerable`1<MPDepthCore.Calibration.Camera.SavedTrackerCalibration>
struct IEnumerable_1_t2B84CF9AB9A89A0942B761D923C5B7431C933A09;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<MPDepthCore.Calibration.Screen.SavedScreenCalibration>
struct List_1_tAA196D57C1E25D2FB5BDFBE0A3ED862E24352ACA;
// System.Collections.Generic.List`1<MPDepthCore.Calibration.Camera.SavedTrackerCalibration>
struct List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC;
// System.Collections.Generic.List`1<MotiveScreenCalibrationProvider/SavedBasicScreenCalibration>
struct List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33;
// System.Collections.Generic.List`1<MotiveTrackingProvider/SavedMotiveTrackingConfiguration>
struct List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// MPDepthCore.Calibration.Screen.SavedScreenCalibration[]
struct SavedScreenCalibrationU5BU5D_t2AA8A5F8487BA7880D434F2D10E332EEC2B8C298;
// MPDepthCore.Calibration.Camera.SavedTrackerCalibration[]
struct SavedTrackerCalibrationU5BU5D_tA057D55D961AAA1BFD2BAA2CBBD56D1CE62195C3;
// MotiveScreenCalibrationProvider/SavedBasicScreenCalibration[]
struct SavedBasicScreenCalibrationU5BU5D_t68F3DDF30C76EF4B219D9E2B9B789A5E59BC3D52;
// MotiveTrackingProvider/SavedMotiveTrackingConfiguration[]
struct SavedMotiveTrackingConfigurationU5BU5D_tE0978361E418D99F4C9B877FC5378FB64441C471;
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
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// MPDepthCore.Calibration.Camera.EyeTrackingData
struct EyeTrackingData_tCEFBEC72106BDE88D157D2A3ECE2B59C185551CC;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// MPDepthCore.Calibration.Camera.MPDepthTrackingData
struct MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7;
// MPDepthCore.TrackingSources.MPDepthTrackingSource
struct MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MotiveRawTrackingSource
struct MotiveRawTrackingSource_t3F297BC6EE2275AC336EF9BEDC30BB4FA27F572C;
// MotiveScreenCalibrationProvider
struct MotiveScreenCalibrationProvider_tAF31304D33AD11DD269A9DDC85A8D2D11391D68E;
// MotiveScreenCalibrator
struct MotiveScreenCalibrator_t43196D474AFB511F39CA945C9C94C33AABF6B96C;
// MotiveTrackingCalibration
struct MotiveTrackingCalibration_tF34845DAD9A0418B57F4A9A52301BAFF2B8C636A;
// MotiveTrackingProvider
struct MotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// OffAxisCamera.OffAxisCameraRig
struct OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF;
// OffAxisCamera.ScreenConfiguration.OffAxisScreenProvider
struct OffAxisScreenProvider_t45C80864E577E00448ACE703B2FAED5A7A961BFA;
// MPDepthCore.Calibration.Camera.RawTrackingData
struct RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD;
// MPDepthCore.Calibration.Screen.SavedScreenCalibration
struct SavedScreenCalibration_t88233E99220A139210541430A7D1CAADA4F7CF4F;
// MPDepthCore.Calibration.Camera.SavedTrackerCalibration
struct SavedTrackerCalibration_t3FA08259D0F122FD3529F267C02CEBD78608A15B;
// MPDepthCore.Calibration.Screen.ScreenCalibrationProvider
struct ScreenCalibrationProvider_tD648C36DFC6279FB60A284A5824D0FA012CD9F80;
// MPDepthCore.Calibration.Screen.ScreenCalibrator
struct ScreenCalibrator_t611A4EFFF72D2856F28B5D524E5E3CC957C697E4;
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
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// MPDepthCore.TrackingSources.MPDepthTrackingSource/TrackingDataUpdatedEvent
struct TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5;
// MotiveScreenCalibrationProvider/SaveData
struct SaveData_t83DF79006253D7B9555CD5B9BA716D55D2C5E781;
// MotiveScreenCalibrationProvider/SavedBasicScreenCalibration
struct SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C;
// MotiveTrackingProvider/SaveMotiveData
struct SaveMotiveData_t050B4C7FBF43A41FE0EE3EB844A33843B3E50F11;
// MotiveTrackingProvider/SavedMotiveTrackingConfiguration
struct SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691;
// OffAxisCamera.OffAxisCameraRig/UpdateCameraLocationEvent
struct UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D;

IL2CPP_EXTERN_C RuntimeClass* CameraTrackingData_tAAE8DCC63B02088F63C7D759E4FCF8A268374FCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAA196D57C1E25D2FB5BDFBE0A3ED862E24352ACA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SaveMotiveData_t050B4C7FBF43A41FE0EE3EB844A33843B3E50F11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02EC0FD34739C2A844A6731C3854FA80A3DD1B28;
IL2CPP_EXTERN_C String_t* _stringLiteral486B66E7C5A80B862FB8B09AD92A68207CDDA2AD;
IL2CPP_EXTERN_C String_t* _stringLiteral4B317373334325A5D2FE52BFB6275002798E7BAD;
IL2CPP_EXTERN_C String_t* _stringLiteral650A649413F3C1D0B0504FDCFC2F260FE9F2FD7E;
IL2CPP_EXTERN_C String_t* _stringLiteral77917F65152BFCCFCED5473A1BCB1188F7DC422E;
IL2CPP_EXTERN_C String_t* _stringLiteral9E54B8318FAD38E8824DF8DE984A1A01A60453AA;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisTrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53_mDC6238E62F605314461360820EB92746B45D71E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD_mD68F0427E60767642B73EA35C3AE75CDD638D1DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisSaveMotiveData_t050B4C7FBF43A41FE0EE3EB844A33843B3E50F11_mCA487D26F47586101A0FFAFFD229D40D80D74960_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m042D30C333452FE7F79B5409C30E698DBC27485E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m764167FFF42A56728F2847CDB6BB09ABBE12176C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1D67B3E2497F31A26A4FAC296D583DB17CF6594D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3C28E95B11C84775EE80B021FB3651163D439C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F199C5D42B799C186A8C0DCFB7E43E94D3E8393_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7F7688637287C07B6EADE86D0B399C7BF3534155_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8D23998382903CA5F11981B851A7C60710DFBBE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MotiveTrackingCalibration_TrackingUpdated_m2EDEADB3552E4E6C643A4F2218D25C4E29717953_RuntimeMethod_var;
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
struct U3CModuleU3E_tED20C5B50A93C0D72CC4E94CEC88FCF01AEB4392 
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


// System.Collections.Generic.List`1<MPDepthCore.Calibration.Screen.SavedScreenCalibration>
struct List_1_tAA196D57C1E25D2FB5BDFBE0A3ED862E24352ACA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SavedScreenCalibrationU5BU5D_t2AA8A5F8487BA7880D434F2D10E332EEC2B8C298* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAA196D57C1E25D2FB5BDFBE0A3ED862E24352ACA, ____items_1)); }
	inline SavedScreenCalibrationU5BU5D_t2AA8A5F8487BA7880D434F2D10E332EEC2B8C298* get__items_1() const { return ____items_1; }
	inline SavedScreenCalibrationU5BU5D_t2AA8A5F8487BA7880D434F2D10E332EEC2B8C298** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SavedScreenCalibrationU5BU5D_t2AA8A5F8487BA7880D434F2D10E332EEC2B8C298* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAA196D57C1E25D2FB5BDFBE0A3ED862E24352ACA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAA196D57C1E25D2FB5BDFBE0A3ED862E24352ACA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAA196D57C1E25D2FB5BDFBE0A3ED862E24352ACA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tAA196D57C1E25D2FB5BDFBE0A3ED862E24352ACA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SavedScreenCalibrationU5BU5D_t2AA8A5F8487BA7880D434F2D10E332EEC2B8C298* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAA196D57C1E25D2FB5BDFBE0A3ED862E24352ACA_StaticFields, ____emptyArray_5)); }
	inline SavedScreenCalibrationU5BU5D_t2AA8A5F8487BA7880D434F2D10E332EEC2B8C298* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SavedScreenCalibrationU5BU5D_t2AA8A5F8487BA7880D434F2D10E332EEC2B8C298** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SavedScreenCalibrationU5BU5D_t2AA8A5F8487BA7880D434F2D10E332EEC2B8C298* value)
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


// System.Collections.Generic.List`1<MotiveScreenCalibrationProvider/SavedBasicScreenCalibration>
struct List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SavedBasicScreenCalibrationU5BU5D_t68F3DDF30C76EF4B219D9E2B9B789A5E59BC3D52* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33, ____items_1)); }
	inline SavedBasicScreenCalibrationU5BU5D_t68F3DDF30C76EF4B219D9E2B9B789A5E59BC3D52* get__items_1() const { return ____items_1; }
	inline SavedBasicScreenCalibrationU5BU5D_t68F3DDF30C76EF4B219D9E2B9B789A5E59BC3D52** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SavedBasicScreenCalibrationU5BU5D_t68F3DDF30C76EF4B219D9E2B9B789A5E59BC3D52* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SavedBasicScreenCalibrationU5BU5D_t68F3DDF30C76EF4B219D9E2B9B789A5E59BC3D52* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33_StaticFields, ____emptyArray_5)); }
	inline SavedBasicScreenCalibrationU5BU5D_t68F3DDF30C76EF4B219D9E2B9B789A5E59BC3D52* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SavedBasicScreenCalibrationU5BU5D_t68F3DDF30C76EF4B219D9E2B9B789A5E59BC3D52** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SavedBasicScreenCalibrationU5BU5D_t68F3DDF30C76EF4B219D9E2B9B789A5E59BC3D52* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<MotiveTrackingProvider/SavedMotiveTrackingConfiguration>
struct List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SavedMotiveTrackingConfigurationU5BU5D_tE0978361E418D99F4C9B877FC5378FB64441C471* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD, ____items_1)); }
	inline SavedMotiveTrackingConfigurationU5BU5D_tE0978361E418D99F4C9B877FC5378FB64441C471* get__items_1() const { return ____items_1; }
	inline SavedMotiveTrackingConfigurationU5BU5D_tE0978361E418D99F4C9B877FC5378FB64441C471** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SavedMotiveTrackingConfigurationU5BU5D_tE0978361E418D99F4C9B877FC5378FB64441C471* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SavedMotiveTrackingConfigurationU5BU5D_tE0978361E418D99F4C9B877FC5378FB64441C471* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD_StaticFields, ____emptyArray_5)); }
	inline SavedMotiveTrackingConfigurationU5BU5D_tE0978361E418D99F4C9B877FC5378FB64441C471* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SavedMotiveTrackingConfigurationU5BU5D_tE0978361E418D99F4C9B877FC5378FB64441C471** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SavedMotiveTrackingConfigurationU5BU5D_tE0978361E418D99F4C9B877FC5378FB64441C471* value)
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

// MotiveScreenCalibrationProvider/SaveData
struct SaveData_t83DF79006253D7B9555CD5B9BA716D55D2C5E781  : public RuntimeObject
{
public:
	// MotiveScreenCalibrationProvider/SavedBasicScreenCalibration MotiveScreenCalibrationProvider/SaveData::currentCalibration
	SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C * ___currentCalibration_0;
	// System.Collections.Generic.List`1<MotiveScreenCalibrationProvider/SavedBasicScreenCalibration> MotiveScreenCalibrationProvider/SaveData::savedCalibrations
	List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33 * ___savedCalibrations_1;

public:
	inline static int32_t get_offset_of_currentCalibration_0() { return static_cast<int32_t>(offsetof(SaveData_t83DF79006253D7B9555CD5B9BA716D55D2C5E781, ___currentCalibration_0)); }
	inline SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C * get_currentCalibration_0() const { return ___currentCalibration_0; }
	inline SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C ** get_address_of_currentCalibration_0() { return &___currentCalibration_0; }
	inline void set_currentCalibration_0(SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C * value)
	{
		___currentCalibration_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentCalibration_0), (void*)value);
	}

	inline static int32_t get_offset_of_savedCalibrations_1() { return static_cast<int32_t>(offsetof(SaveData_t83DF79006253D7B9555CD5B9BA716D55D2C5E781, ___savedCalibrations_1)); }
	inline List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33 * get_savedCalibrations_1() const { return ___savedCalibrations_1; }
	inline List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33 ** get_address_of_savedCalibrations_1() { return &___savedCalibrations_1; }
	inline void set_savedCalibrations_1(List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33 * value)
	{
		___savedCalibrations_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___savedCalibrations_1), (void*)value);
	}
};


// MotiveScreenCalibrationProvider/SavedBasicScreenCalibration
struct SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C  : public RuntimeObject
{
public:
	// System.Single MotiveScreenCalibrationProvider/SavedBasicScreenCalibration::Width
	float ___Width_0;
	// System.Single MotiveScreenCalibrationProvider/SavedBasicScreenCalibration::Height
	float ___Height_1;
	// System.String MotiveScreenCalibrationProvider/SavedBasicScreenCalibration::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_Width_0() { return static_cast<int32_t>(offsetof(SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C, ___Width_0)); }
	inline float get_Width_0() const { return ___Width_0; }
	inline float* get_address_of_Width_0() { return &___Width_0; }
	inline void set_Width_0(float value)
	{
		___Width_0 = value;
	}

	inline static int32_t get_offset_of_Height_1() { return static_cast<int32_t>(offsetof(SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C, ___Height_1)); }
	inline float get_Height_1() const { return ___Height_1; }
	inline float* get_address_of_Height_1() { return &___Height_1; }
	inline void set_Height_1(float value)
	{
		___Height_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}
};


// MotiveTrackingProvider/SaveMotiveData
struct SaveMotiveData_t050B4C7FBF43A41FE0EE3EB844A33843B3E50F11  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<MotiveTrackingProvider/SavedMotiveTrackingConfiguration> MotiveTrackingProvider/SaveMotiveData::savedConfigurations
	List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD * ___savedConfigurations_0;
	// MotiveTrackingProvider/SavedMotiveTrackingConfiguration MotiveTrackingProvider/SaveMotiveData::currentCalibration
	SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * ___currentCalibration_1;

public:
	inline static int32_t get_offset_of_savedConfigurations_0() { return static_cast<int32_t>(offsetof(SaveMotiveData_t050B4C7FBF43A41FE0EE3EB844A33843B3E50F11, ___savedConfigurations_0)); }
	inline List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD * get_savedConfigurations_0() const { return ___savedConfigurations_0; }
	inline List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD ** get_address_of_savedConfigurations_0() { return &___savedConfigurations_0; }
	inline void set_savedConfigurations_0(List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD * value)
	{
		___savedConfigurations_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___savedConfigurations_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentCalibration_1() { return static_cast<int32_t>(offsetof(SaveMotiveData_t050B4C7FBF43A41FE0EE3EB844A33843B3E50F11, ___currentCalibration_1)); }
	inline SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * get_currentCalibration_1() const { return ___currentCalibration_1; }
	inline SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 ** get_address_of_currentCalibration_1() { return &___currentCalibration_1; }
	inline void set_currentCalibration_1(SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * value)
	{
		___currentCalibration_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentCalibration_1), (void*)value);
	}
};


// MotiveTrackingProvider/SavedMotiveTrackingConfiguration
struct SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691  : public RuntimeObject
{
public:
	// System.String MotiveTrackingProvider/SavedMotiveTrackingConfiguration::name
	String_t* ___name_0;
	// MPDepthCore.Calibration.Camera.TrackerOffsetCalibration MotiveTrackingProvider/SavedMotiveTrackingConfiguration::TrackerOffsetCalibration
	TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 * ___TrackerOffsetCalibration_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_TrackerOffsetCalibration_1() { return static_cast<int32_t>(offsetof(SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691, ___TrackerOffsetCalibration_1)); }
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


// MotiveTrackingCalibration
struct MotiveTrackingCalibration_tF34845DAD9A0418B57F4A9A52301BAFF2B8C636A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MPDepthCore.TrackingSources.MPDepthTrackingSource MotiveTrackingCalibration::trackingSource
	MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7 * ___trackingSource_4;
	// UnityEngine.GameObject MotiveTrackingCalibration::calibrationObjects
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___calibrationObjects_5;
	// UnityEngine.GameObject MotiveTrackingCalibration::calibrationUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___calibrationUI_6;
	// UnityEngine.Transform MotiveTrackingCalibration::TrackedScreen
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___TrackedScreen_7;
	// System.Boolean MotiveTrackingCalibration::calibrating
	bool ___calibrating_8;
	// MPDepthCore.Calibration.Camera.MPDepthTrackingData MotiveTrackingCalibration::trackingData
	MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * ___trackingData_9;
	// System.Boolean MotiveTrackingCalibration::cancelled
	bool ___cancelled_10;
	// System.Single MotiveTrackingCalibration::defaultDistanceFromScreenCenter
	float ___defaultDistanceFromScreenCenter_11;
	// UnityEngine.Transform MotiveTrackingCalibration::calibrationTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___calibrationTransform_12;
	// UnityEngine.GameObject MotiveTrackingCalibration::mainUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mainUI_13;
	// OffAxisCamera.OffAxisCameraRig MotiveTrackingCalibration::offAxisCameraRig
	OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * ___offAxisCameraRig_14;
	// UnityEngine.Camera MotiveTrackingCalibration::offAxisCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___offAxisCamera_15;

public:
	inline static int32_t get_offset_of_trackingSource_4() { return static_cast<int32_t>(offsetof(MotiveTrackingCalibration_tF34845DAD9A0418B57F4A9A52301BAFF2B8C636A, ___trackingSource_4)); }
	inline MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7 * get_trackingSource_4() const { return ___trackingSource_4; }
	inline MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7 ** get_address_of_trackingSource_4() { return &___trackingSource_4; }
	inline void set_trackingSource_4(MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7 * value)
	{
		___trackingSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_calibrationObjects_5() { return static_cast<int32_t>(offsetof(MotiveTrackingCalibration_tF34845DAD9A0418B57F4A9A52301BAFF2B8C636A, ___calibrationObjects_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_calibrationObjects_5() const { return ___calibrationObjects_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_calibrationObjects_5() { return &___calibrationObjects_5; }
	inline void set_calibrationObjects_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___calibrationObjects_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibrationObjects_5), (void*)value);
	}

	inline static int32_t get_offset_of_calibrationUI_6() { return static_cast<int32_t>(offsetof(MotiveTrackingCalibration_tF34845DAD9A0418B57F4A9A52301BAFF2B8C636A, ___calibrationUI_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_calibrationUI_6() const { return ___calibrationUI_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_calibrationUI_6() { return &___calibrationUI_6; }
	inline void set_calibrationUI_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___calibrationUI_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibrationUI_6), (void*)value);
	}

	inline static int32_t get_offset_of_TrackedScreen_7() { return static_cast<int32_t>(offsetof(MotiveTrackingCalibration_tF34845DAD9A0418B57F4A9A52301BAFF2B8C636A, ___TrackedScreen_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_TrackedScreen_7() const { return ___TrackedScreen_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_TrackedScreen_7() { return &___TrackedScreen_7; }
	inline void set_TrackedScreen_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___TrackedScreen_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrackedScreen_7), (void*)value);
	}

	inline static int32_t get_offset_of_calibrating_8() { return static_cast<int32_t>(offsetof(MotiveTrackingCalibration_tF34845DAD9A0418B57F4A9A52301BAFF2B8C636A, ___calibrating_8)); }
	inline bool get_calibrating_8() const { return ___calibrating_8; }
	inline bool* get_address_of_calibrating_8() { return &___calibrating_8; }
	inline void set_calibrating_8(bool value)
	{
		___calibrating_8 = value;
	}

	inline static int32_t get_offset_of_trackingData_9() { return static_cast<int32_t>(offsetof(MotiveTrackingCalibration_tF34845DAD9A0418B57F4A9A52301BAFF2B8C636A, ___trackingData_9)); }
	inline MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * get_trackingData_9() const { return ___trackingData_9; }
	inline MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 ** get_address_of_trackingData_9() { return &___trackingData_9; }
	inline void set_trackingData_9(MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * value)
	{
		___trackingData_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingData_9), (void*)value);
	}

	inline static int32_t get_offset_of_cancelled_10() { return static_cast<int32_t>(offsetof(MotiveTrackingCalibration_tF34845DAD9A0418B57F4A9A52301BAFF2B8C636A, ___cancelled_10)); }
	inline bool get_cancelled_10() const { return ___cancelled_10; }
	inline bool* get_address_of_cancelled_10() { return &___cancelled_10; }
	inline void set_cancelled_10(bool value)
	{
		___cancelled_10 = value;
	}

	inline static int32_t get_offset_of_defaultDistanceFromScreenCenter_11() { return static_cast<int32_t>(offsetof(MotiveTrackingCalibration_tF34845DAD9A0418B57F4A9A52301BAFF2B8C636A, ___defaultDistanceFromScreenCenter_11)); }
	inline float get_defaultDistanceFromScreenCenter_11() const { return ___defaultDistanceFromScreenCenter_11; }
	inline float* get_address_of_defaultDistanceFromScreenCenter_11() { return &___defaultDistanceFromScreenCenter_11; }
	inline void set_defaultDistanceFromScreenCenter_11(float value)
	{
		___defaultDistanceFromScreenCenter_11 = value;
	}

	inline static int32_t get_offset_of_calibrationTransform_12() { return static_cast<int32_t>(offsetof(MotiveTrackingCalibration_tF34845DAD9A0418B57F4A9A52301BAFF2B8C636A, ___calibrationTransform_12)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_calibrationTransform_12() const { return ___calibrationTransform_12; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_calibrationTransform_12() { return &___calibrationTransform_12; }
	inline void set_calibrationTransform_12(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___calibrationTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibrationTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_mainUI_13() { return static_cast<int32_t>(offsetof(MotiveTrackingCalibration_tF34845DAD9A0418B57F4A9A52301BAFF2B8C636A, ___mainUI_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mainUI_13() const { return ___mainUI_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mainUI_13() { return &___mainUI_13; }
	inline void set_mainUI_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mainUI_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainUI_13), (void*)value);
	}

	inline static int32_t get_offset_of_offAxisCameraRig_14() { return static_cast<int32_t>(offsetof(MotiveTrackingCalibration_tF34845DAD9A0418B57F4A9A52301BAFF2B8C636A, ___offAxisCameraRig_14)); }
	inline OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * get_offAxisCameraRig_14() const { return ___offAxisCameraRig_14; }
	inline OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF ** get_address_of_offAxisCameraRig_14() { return &___offAxisCameraRig_14; }
	inline void set_offAxisCameraRig_14(OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * value)
	{
		___offAxisCameraRig_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offAxisCameraRig_14), (void*)value);
	}

	inline static int32_t get_offset_of_offAxisCamera_15() { return static_cast<int32_t>(offsetof(MotiveTrackingCalibration_tF34845DAD9A0418B57F4A9A52301BAFF2B8C636A, ___offAxisCamera_15)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_offAxisCamera_15() const { return ___offAxisCamera_15; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_offAxisCamera_15() { return &___offAxisCamera_15; }
	inline void set_offAxisCamera_15(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___offAxisCamera_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offAxisCamera_15), (void*)value);
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


// OffAxisCamera.ScreenConfiguration.OffAxisScreenProvider
struct OffAxisScreenProvider_t45C80864E577E00448ACE703B2FAED5A7A961BFA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// MPDepthCore.Calibration.Screen.ScreenCalibrator
struct ScreenCalibrator_t611A4EFFF72D2856F28B5D524E5E3CC957C697E4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MPDepthCore.TrackingSystem MPDepthCore.Calibration.Screen.ScreenCalibrator::trackingSystem
	TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53 * ___trackingSystem_4;

public:
	inline static int32_t get_offset_of_trackingSystem_4() { return static_cast<int32_t>(offsetof(ScreenCalibrator_t611A4EFFF72D2856F28B5D524E5E3CC957C697E4, ___trackingSystem_4)); }
	inline TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53 * get_trackingSystem_4() const { return ___trackingSystem_4; }
	inline TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53 ** get_address_of_trackingSystem_4() { return &___trackingSystem_4; }
	inline void set_trackingSystem_4(TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53 * value)
	{
		___trackingSystem_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingSystem_4), (void*)value);
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
};


// MotiveRawTrackingSource
struct MotiveRawTrackingSource_t3F297BC6EE2275AC336EF9BEDC30BB4FA27F572C  : public MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7
{
public:
	// UnityEngine.GameObject MotiveRawTrackingSource::cameraObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cameraObject_5;
	// UnityEngine.GameObject MotiveRawTrackingSource::screenObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___screenObject_6;
	// MPDepthCore.TrackingSources.MPDepthTrackingSource/TrackingDataUpdatedEvent MotiveRawTrackingSource::TrackingDataUpdated
	TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * ___TrackingDataUpdated_7;

public:
	inline static int32_t get_offset_of_cameraObject_5() { return static_cast<int32_t>(offsetof(MotiveRawTrackingSource_t3F297BC6EE2275AC336EF9BEDC30BB4FA27F572C, ___cameraObject_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cameraObject_5() const { return ___cameraObject_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cameraObject_5() { return &___cameraObject_5; }
	inline void set_cameraObject_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cameraObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraObject_5), (void*)value);
	}

	inline static int32_t get_offset_of_screenObject_6() { return static_cast<int32_t>(offsetof(MotiveRawTrackingSource_t3F297BC6EE2275AC336EF9BEDC30BB4FA27F572C, ___screenObject_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_screenObject_6() const { return ___screenObject_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_screenObject_6() { return &___screenObject_6; }
	inline void set_screenObject_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___screenObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___screenObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_TrackingDataUpdated_7() { return static_cast<int32_t>(offsetof(MotiveRawTrackingSource_t3F297BC6EE2275AC336EF9BEDC30BB4FA27F572C, ___TrackingDataUpdated_7)); }
	inline TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * get_TrackingDataUpdated_7() const { return ___TrackingDataUpdated_7; }
	inline TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 ** get_address_of_TrackingDataUpdated_7() { return &___TrackingDataUpdated_7; }
	inline void set_TrackingDataUpdated_7(TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * value)
	{
		___TrackingDataUpdated_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrackingDataUpdated_7), (void*)value);
	}
};


// MotiveScreenCalibrator
struct MotiveScreenCalibrator_t43196D474AFB511F39CA945C9C94C33AABF6B96C  : public ScreenCalibrator_t611A4EFFF72D2856F28B5D524E5E3CC957C697E4
{
public:
	// UnityEngine.Transform MotiveScreenCalibrator::TrackedScreen
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___TrackedScreen_5;
	// UnityEngine.Transform MotiveScreenCalibrator::calibrationTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___calibrationTransform_6;

public:
	inline static int32_t get_offset_of_TrackedScreen_5() { return static_cast<int32_t>(offsetof(MotiveScreenCalibrator_t43196D474AFB511F39CA945C9C94C33AABF6B96C, ___TrackedScreen_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_TrackedScreen_5() const { return ___TrackedScreen_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_TrackedScreen_5() { return &___TrackedScreen_5; }
	inline void set_TrackedScreen_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___TrackedScreen_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrackedScreen_5), (void*)value);
	}

	inline static int32_t get_offset_of_calibrationTransform_6() { return static_cast<int32_t>(offsetof(MotiveScreenCalibrator_t43196D474AFB511F39CA945C9C94C33AABF6B96C, ___calibrationTransform_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_calibrationTransform_6() const { return ___calibrationTransform_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_calibrationTransform_6() { return &___calibrationTransform_6; }
	inline void set_calibrationTransform_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___calibrationTransform_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibrationTransform_6), (void*)value);
	}
};


// MotiveTrackingProvider
struct MotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD  : public TrackingCalibrationProvider_t936458C67919392EE6B88C439729E2AECA9293AB
{
public:
	// MotiveTrackingProvider/SavedMotiveTrackingConfiguration MotiveTrackingProvider::currentCalibration
	SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * ___currentCalibration_5;
	// System.Collections.Generic.List`1<MotiveTrackingProvider/SavedMotiveTrackingConfiguration> MotiveTrackingProvider::savedCalibrations
	List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD * ___savedCalibrations_6;
	// MotiveTrackingCalibration MotiveTrackingProvider::calibrator
	MotiveTrackingCalibration_tF34845DAD9A0418B57F4A9A52301BAFF2B8C636A * ___calibrator_7;

public:
	inline static int32_t get_offset_of_currentCalibration_5() { return static_cast<int32_t>(offsetof(MotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD, ___currentCalibration_5)); }
	inline SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * get_currentCalibration_5() const { return ___currentCalibration_5; }
	inline SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 ** get_address_of_currentCalibration_5() { return &___currentCalibration_5; }
	inline void set_currentCalibration_5(SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * value)
	{
		___currentCalibration_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentCalibration_5), (void*)value);
	}

	inline static int32_t get_offset_of_savedCalibrations_6() { return static_cast<int32_t>(offsetof(MotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD, ___savedCalibrations_6)); }
	inline List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD * get_savedCalibrations_6() const { return ___savedCalibrations_6; }
	inline List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD ** get_address_of_savedCalibrations_6() { return &___savedCalibrations_6; }
	inline void set_savedCalibrations_6(List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD * value)
	{
		___savedCalibrations_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___savedCalibrations_6), (void*)value);
	}

	inline static int32_t get_offset_of_calibrator_7() { return static_cast<int32_t>(offsetof(MotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD, ___calibrator_7)); }
	inline MotiveTrackingCalibration_tF34845DAD9A0418B57F4A9A52301BAFF2B8C636A * get_calibrator_7() const { return ___calibrator_7; }
	inline MotiveTrackingCalibration_tF34845DAD9A0418B57F4A9A52301BAFF2B8C636A ** get_address_of_calibrator_7() { return &___calibrator_7; }
	inline void set_calibrator_7(MotiveTrackingCalibration_tF34845DAD9A0418B57F4A9A52301BAFF2B8C636A * value)
	{
		___calibrator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibrator_7), (void*)value);
	}
};


// MPDepthCore.Calibration.Screen.ScreenCalibrationProvider
struct ScreenCalibrationProvider_tD648C36DFC6279FB60A284A5824D0FA012CD9F80  : public OffAxisScreenProvider_t45C80864E577E00448ACE703B2FAED5A7A961BFA
{
public:

public:
};


// MotiveScreenCalibrationProvider
struct MotiveScreenCalibrationProvider_tAF31304D33AD11DD269A9DDC85A8D2D11391D68E  : public ScreenCalibrationProvider_tD648C36DFC6279FB60A284A5824D0FA012CD9F80
{
public:
	// MotiveScreenCalibrationProvider/SavedBasicScreenCalibration MotiveScreenCalibrationProvider::currentCalibration
	SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C * ___currentCalibration_4;
	// System.Collections.Generic.List`1<MotiveScreenCalibrationProvider/SavedBasicScreenCalibration> MotiveScreenCalibrationProvider::savedCalibrations
	List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33 * ___savedCalibrations_5;
	// MotiveScreenCalibrator MotiveScreenCalibrationProvider::screenCalibrator
	MotiveScreenCalibrator_t43196D474AFB511F39CA945C9C94C33AABF6B96C * ___screenCalibrator_6;

public:
	inline static int32_t get_offset_of_currentCalibration_4() { return static_cast<int32_t>(offsetof(MotiveScreenCalibrationProvider_tAF31304D33AD11DD269A9DDC85A8D2D11391D68E, ___currentCalibration_4)); }
	inline SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C * get_currentCalibration_4() const { return ___currentCalibration_4; }
	inline SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C ** get_address_of_currentCalibration_4() { return &___currentCalibration_4; }
	inline void set_currentCalibration_4(SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C * value)
	{
		___currentCalibration_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentCalibration_4), (void*)value);
	}

	inline static int32_t get_offset_of_savedCalibrations_5() { return static_cast<int32_t>(offsetof(MotiveScreenCalibrationProvider_tAF31304D33AD11DD269A9DDC85A8D2D11391D68E, ___savedCalibrations_5)); }
	inline List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33 * get_savedCalibrations_5() const { return ___savedCalibrations_5; }
	inline List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33 ** get_address_of_savedCalibrations_5() { return &___savedCalibrations_5; }
	inline void set_savedCalibrations_5(List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33 * value)
	{
		___savedCalibrations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___savedCalibrations_5), (void*)value);
	}

	inline static int32_t get_offset_of_screenCalibrator_6() { return static_cast<int32_t>(offsetof(MotiveScreenCalibrationProvider_tAF31304D33AD11DD269A9DDC85A8D2D11391D68E, ___screenCalibrator_6)); }
	inline MotiveScreenCalibrator_t43196D474AFB511F39CA945C9C94C33AABF6B96C * get_screenCalibrator_6() const { return ___screenCalibrator_6; }
	inline MotiveScreenCalibrator_t43196D474AFB511F39CA945C9C94C33AABF6B96C ** get_address_of_screenCalibrator_6() { return &___screenCalibrator_6; }
	inline void set_screenCalibrator_6(MotiveScreenCalibrator_t43196D474AFB511F39CA945C9C94C33AABF6B96C * value)
	{
		___screenCalibrator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___screenCalibrator_6), (void*)value);
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);

// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void MPDepthCore.Calibration.Camera.CameraTrackingData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraTrackingData__ctor_m9FA5E6359346DDCDE3F333153BE5FDC078901277 (CameraTrackingData_tAAE8DCC63B02088F63C7D759E4FCF8A268374FCE * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 MotiveRawTrackingSource::get_GetCameraToScreenPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MotiveRawTrackingSource_get_GetCameraToScreenPosition_m47BAE544D6184161651F06C6445DAD774660F7E5 (MotiveRawTrackingSource_t3F297BC6EE2275AC336EF9BEDC30BB4FA27F572C * __this, const RuntimeMethod* method);
// System.Void MPDepthCore.Calibration.Camera.RawTrackingData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawTrackingData__ctor_m8093224C329264DBAA5FE53BEC99F2BB94DA2535 (RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD * __this, const RuntimeMethod* method);
// System.Void MPDepthCore.TrackingSources.MPDepthTrackingSource/TrackingDataUpdatedEvent::Invoke(MPDepthCore.Calibration.Camera.MPDepthTrackingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingDataUpdatedEvent_Invoke_mA382D743DC3D1D6CCC6B5EEF5FEAE07DE1384E23 (TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * __this, MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * ___data0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void MPDepthCore.TrackingSources.MPDepthTrackingSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MPDepthTrackingSource__ctor_mB96D8CA4D5C343431C96F1FC1FC10208E3399D31 (MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<MPDepthCore.Calibration.Screen.SavedScreenCalibration>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m3C28E95B11C84775EE80B021FB3651163D439C4A (List_1_tAA196D57C1E25D2FB5BDFBE0A3ED862E24352ACA * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAA196D57C1E25D2FB5BDFBE0A3ED862E24352ACA *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Void MotiveScreenCalibrator::Calibrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveScreenCalibrator_Calibrate_mDEEFEBBAA0913B3FED117FE4B5C079B4A366B317 (MotiveScreenCalibrator_t43196D474AFB511F39CA945C9C94C33AABF6B96C * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<MotiveScreenCalibrationProvider/SavedBasicScreenCalibration>::get_Item(System.Int32)
inline SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C * List_1_get_Item_m8D23998382903CA5F11981B851A7C60710DFBBE9_inline (List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C * (*) (List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<MotiveScreenCalibrationProvider/SavedBasicScreenCalibration>::Add(!0)
inline void List_1_Add_m764167FFF42A56728F2847CDB6BB09ABBE12176C (List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33 * __this, SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33 *, SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<MotiveScreenCalibrationProvider/SavedBasicScreenCalibration>::.ctor()
inline void List_1__ctor_m1D67B3E2497F31A26A4FAC296D583DB17CF6594D (List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void MPDepthCore.Calibration.Screen.ScreenCalibrationProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenCalibrationProvider__ctor_m5338E3E7F62CD96173A565A1288A541B222CCDE0 (ScreenCalibrationProvider_tD648C36DFC6279FB60A284A5824D0FA012CD9F80 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void MPDepthCore.Calibration.Screen.ScreenCalibrator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenCalibrator__ctor_m2C6A7E738C994EBD613F72FAB3A8273D8F14B995 (ScreenCalibrator_t611A4EFFF72D2856F28B5D524E5E3CC957C697E4 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<MPDepthCore.TrackingSystem>()
inline TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53 * Component_GetComponentInParent_TisTrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53_mDC6238E62F605314461360820EB92746B45D71E4 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// System.Void MPDepthCore.TrackingSources.MPDepthTrackingSource/TrackingDataUpdatedEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingDataUpdatedEvent__ctor_mE191FC4729F2FBFA6D809DD6C46DBFA7841B6C75 (TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void MotiveTrackingProvider/SavedMotiveTrackingConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedMotiveTrackingConfiguration__ctor_mC0E37E152CE04E2AACD48509A6F27F6D02C28A89 (SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.String System.DateTime::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m242888E500DFD8CD675BDC455BC696AF47813954 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<MotiveTrackingProvider>()
inline MotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD * Component_GetComponent_TisMotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD_mD68F0427E60767642B73EA35C3AE75CDD638D1DA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void MotiveTrackingProvider::SaveCalibration(MotiveTrackingProvider/SavedMotiveTrackingConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveTrackingProvider_SaveCalibration_mA54D391F5AC3FC4D7F6D81ADFFFD67B724804F2A (MotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD * __this, SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * ___calibration0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<MotiveTrackingProvider/SavedMotiveTrackingConfiguration>::get_Item(System.Int32)
inline SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * List_1_get_Item_m7F7688637287C07B6EADE86D0B399C7BF3534155_inline (List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * (*) (List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void MotiveTrackingCalibration::CalculateCalibrationFromTrackingInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveTrackingCalibration_CalculateCalibrationFromTrackingInfo_mDD34F0218A4A68AFBEF35BB1F391B6D664BC64F3 (MotiveTrackingCalibration_tF34845DAD9A0418B57F4A9A52301BAFF2B8C636A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<MotiveTrackingProvider/SavedMotiveTrackingConfiguration>::Add(!0)
inline void List_1_Add_m042D30C333452FE7F79B5409C30E698DBC27485E (List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD * __this, SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD *, SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !!0 UnityEngine.JsonUtility::FromJson<MotiveTrackingProvider/SaveMotiveData>(System.String)
inline SaveMotiveData_t050B4C7FBF43A41FE0EE3EB844A33843B3E50F11 * JsonUtility_FromJson_TisSaveMotiveData_t050B4C7FBF43A41FE0EE3EB844A33843B3E50F11_mCA487D26F47586101A0FFAFFD229D40D80D74960 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  SaveMotiveData_t050B4C7FBF43A41FE0EE3EB844A33843B3E50F11 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void MotiveTrackingProvider/SaveMotiveData::.ctor(System.Collections.Generic.List`1<MotiveTrackingProvider/SavedMotiveTrackingConfiguration>,MotiveTrackingProvider/SavedMotiveTrackingConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveMotiveData__ctor_m43065D076A3B153AAFF0DA379776837BF959C1B5 (SaveMotiveData_t050B4C7FBF43A41FE0EE3EB844A33843B3E50F11 * __this, List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD * ___savedConfigurations0, SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * ___currentCalibration1, const RuntimeMethod* method);
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
// UnityEngine.Vector3 MotiveRawTrackingSource::get_GetCameraToScreenPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MotiveRawTrackingSource_get_GetCameraToScreenPosition_m47BAE544D6184161651F06C6445DAD774660F7E5 (MotiveRawTrackingSource_t3F297BC6EE2275AC336EF9BEDC30BB4FA27F572C * __this, const RuntimeMethod* method)
{
	{
		// protected Vector3 GetCameraToScreenPosition => cameraObject.transform.position - screenObject.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_cameraObject_5();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_screenObject_6();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void MotiveRawTrackingSource::TurnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveRawTrackingSource_TurnOff_m035F7B6DD805EAE4C7A1D84D821C779EBC34729A (MotiveRawTrackingSource_t3F297BC6EE2275AC336EF9BEDC30BB4FA27F572C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MotiveRawTrackingSource::TurnOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveRawTrackingSource_TurnOn_mF6D70C63CEB31F658FA81EC52459AF76F27E0E1D (MotiveRawTrackingSource_t3F297BC6EE2275AC336EF9BEDC30BB4FA27F572C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MotiveRawTrackingSource::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveRawTrackingSource_Update_mED1050C1345C60CD226E5975EC562CD0E5B9D8EF (MotiveRawTrackingSource_t3F297BC6EE2275AC336EF9BEDC30BB4FA27F572C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraTrackingData_tAAE8DCC63B02088F63C7D759E4FCF8A268374FCE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CameraTrackingData_tAAE8DCC63B02088F63C7D759E4FCF8A268374FCE * V_0 = NULL;
	MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * V_1 = NULL;
	TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * G_B2_0 = NULL;
	TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * G_B1_0 = NULL;
	{
		// CameraTrackingData cameraTrackingData = new CameraTrackingData
		// {
		//     Position = GetCameraToScreenPosition
		// };
		CameraTrackingData_tAAE8DCC63B02088F63C7D759E4FCF8A268374FCE * L_0 = (CameraTrackingData_tAAE8DCC63B02088F63C7D759E4FCF8A268374FCE *)il2cpp_codegen_object_new(CameraTrackingData_tAAE8DCC63B02088F63C7D759E4FCF8A268374FCE_il2cpp_TypeInfo_var);
		CameraTrackingData__ctor_m9FA5E6359346DDCDE3F333153BE5FDC078901277(L_0, /*hidden argument*/NULL);
		CameraTrackingData_tAAE8DCC63B02088F63C7D759E4FCF8A268374FCE * L_1 = L_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = MotiveRawTrackingSource_get_GetCameraToScreenPosition_m47BAE544D6184161651F06C6445DAD774660F7E5(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		((TrackingPose_t9D6C81FDF981E08EBF7CDBBB363CA99CAB3EC265 *)L_1)->set_Position_0(L_2);
		V_0 = L_1;
		// MPDepthTrackingData data = new RawTrackingData
		// {
		//     CameraTrackingData = cameraTrackingData,
		//     IsTracking = true
		// };
		RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD * L_3 = (RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD *)il2cpp_codegen_object_new(RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD_il2cpp_TypeInfo_var);
		RawTrackingData__ctor_m8093224C329264DBAA5FE53BEC99F2BB94DA2535(L_3, /*hidden argument*/NULL);
		RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD * L_4 = L_3;
		CameraTrackingData_tAAE8DCC63B02088F63C7D759E4FCF8A268374FCE * L_5 = V_0;
		NullCheck(L_4);
		((MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 *)L_4)->set_CameraTrackingData_1(L_5);
		RawTrackingData_t0CDED7B3428D64EEDC41E653AA5C1FFD2792FCFD * L_6 = L_4;
		NullCheck(L_6);
		((MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 *)L_6)->set_IsTracking_0((bool)1);
		V_1 = L_6;
		// TrackingDataUpdated?.Invoke(data);
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_7 = __this->get_TrackingDataUpdated_7();
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_8 = L_7;
		G_B1_0 = L_8;
		if (L_8)
		{
			G_B2_0 = L_8;
			goto IL_0033;
		}
	}
	{
		goto IL_003a;
	}

IL_0033:
	{
		MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * L_9 = V_1;
		NullCheck(G_B2_0);
		TrackingDataUpdatedEvent_Invoke_mA382D743DC3D1D6CCC6B5EEF5FEAE07DE1384E23(G_B2_0, L_9, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void MotiveRawTrackingSource::add_TrackingDataUpdated(MPDepthCore.TrackingSources.MPDepthTrackingSource/TrackingDataUpdatedEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveRawTrackingSource_add_TrackingDataUpdated_m52509D71D706FEE281A375F9D041095B1D67A5F1 (MotiveRawTrackingSource_t3F297BC6EE2275AC336EF9BEDC30BB4FA27F572C * __this, TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * ___value0, const RuntimeMethod* method)
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
// System.Void MotiveRawTrackingSource::remove_TrackingDataUpdated(MPDepthCore.TrackingSources.MPDepthTrackingSource/TrackingDataUpdatedEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveRawTrackingSource_remove_TrackingDataUpdated_mC1F47E21865ABB3FB2241483BA93B809C3C555DB (MotiveRawTrackingSource_t3F297BC6EE2275AC336EF9BEDC30BB4FA27F572C * __this, TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * ___value0, const RuntimeMethod* method)
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
// System.Void MotiveRawTrackingSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveRawTrackingSource__ctor_m243767C047B62BE58D5B7E037F8D55C36C0F4C6B (MotiveRawTrackingSource_t3F297BC6EE2275AC336EF9BEDC30BB4FA27F572C * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] GameObject cameraObject = default;
		__this->set_cameraObject_5((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// [SerializeField] GameObject screenObject = default;
		__this->set_screenObject_6((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
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
// MPDepthCore.Calibration.Screen.SavedScreenCalibration MotiveScreenCalibrationProvider::get_CurrentCalibration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MotiveScreenCalibrationProvider_get_CurrentCalibration_mB3732B072EA38FAB99286EC0DF6B6D73781664B9 (MotiveScreenCalibrationProvider_tAF31304D33AD11DD269A9DDC85A8D2D11391D68E * __this, const RuntimeMethod* method)
{
	{
		// public override SavedScreenCalibration CurrentCalibration => currentCalibration;
		SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C * L_0 = __this->get_currentCalibration_4();
		return L_0;
	}
}
// System.Collections.Generic.List`1<MPDepthCore.Calibration.Screen.SavedScreenCalibration> MotiveScreenCalibrationProvider::get_AllCalibrations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tAA196D57C1E25D2FB5BDFBE0A3ED862E24352ACA * MotiveScreenCalibrationProvider_get_AllCalibrations_m0AC31C104A14D012DD8C8FD2A9296729E8E6E696 (MotiveScreenCalibrationProvider_tAF31304D33AD11DD269A9DDC85A8D2D11391D68E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3C28E95B11C84775EE80B021FB3651163D439C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAA196D57C1E25D2FB5BDFBE0A3ED862E24352ACA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new List<SavedScreenCalibration>(savedCalibrations);
		List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33 * L_0 = __this->get_savedCalibrations_5();
		List_1_tAA196D57C1E25D2FB5BDFBE0A3ED862E24352ACA * L_1 = (List_1_tAA196D57C1E25D2FB5BDFBE0A3ED862E24352ACA *)il2cpp_codegen_object_new(List_1_tAA196D57C1E25D2FB5BDFBE0A3ED862E24352ACA_il2cpp_TypeInfo_var);
		List_1__ctor_m3C28E95B11C84775EE80B021FB3651163D439C4A(L_1, L_0, /*hidden argument*/List_1__ctor_m3C28E95B11C84775EE80B021FB3651163D439C4A_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void MotiveScreenCalibrationProvider::Calibrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveScreenCalibrationProvider_Calibrate_mAB76A79704F512A38D3DCFBD465794BA5FD3B0DA (MotiveScreenCalibrationProvider_tAF31304D33AD11DD269A9DDC85A8D2D11391D68E * __this, const RuntimeMethod* method)
{
	{
		// screenCalibrator.Calibrate();
		MotiveScreenCalibrator_t43196D474AFB511F39CA945C9C94C33AABF6B96C * L_0 = __this->get_screenCalibrator_6();
		NullCheck(L_0);
		MotiveScreenCalibrator_Calibrate_mDEEFEBBAA0913B3FED117FE4B5C079B4A366B317(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single MotiveScreenCalibrationProvider::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MotiveScreenCalibrationProvider_get_Width_m07F2F729492C9D7F2B261F8E6E96CBC98E263125 (MotiveScreenCalibrationProvider_tAF31304D33AD11DD269A9DDC85A8D2D11391D68E * __this, const RuntimeMethod* method)
{
	{
		// public override float Width => currentCalibration.Width;
		SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C * L_0 = __this->get_currentCalibration_4();
		NullCheck(L_0);
		float L_1 = L_0->get_Width_0();
		return L_1;
	}
}
// System.Single MotiveScreenCalibrationProvider::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MotiveScreenCalibrationProvider_get_Height_m6798BE7086E751FAA042FC6E425042D70FF21EB3 (MotiveScreenCalibrationProvider_tAF31304D33AD11DD269A9DDC85A8D2D11391D68E * __this, const RuntimeMethod* method)
{
	{
		// public override float Height => currentCalibration.Height;
		SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C * L_0 = __this->get_currentCalibration_4();
		NullCheck(L_0);
		float L_1 = L_0->get_Height_1();
		return L_1;
	}
}
// System.String MotiveScreenCalibrationProvider::get_Filename()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MotiveScreenCalibrationProvider_get_Filename_mA332F56519D0229B8D0D02B282F49B478DB53DBB (MotiveScreenCalibrationProvider_tAF31304D33AD11DD269A9DDC85A8D2D11391D68E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E54B8318FAD38E8824DF8DE984A1A01A60453AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override string Filename => $"BasicScreenCalibrationSave.json";
		return _stringLiteral9E54B8318FAD38E8824DF8DE984A1A01A60453AA;
	}
}
// System.Void MotiveScreenCalibrationProvider::SelectCalibration(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveScreenCalibrationProvider_SelectCalibration_m19AB4976632E1130FCC29B95BE0AE11C085F0A0D (MotiveScreenCalibrationProvider_tAF31304D33AD11DD269A9DDC85A8D2D11391D68E * __this, int32_t ___selectedIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8D23998382903CA5F11981B851A7C60710DFBBE9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentCalibration = savedCalibrations[selectedIndex];
		List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33 * L_0 = __this->get_savedCalibrations_5();
		int32_t L_1 = ___selectedIndex0;
		NullCheck(L_0);
		SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C * L_2;
		L_2 = List_1_get_Item_m8D23998382903CA5F11981B851A7C60710DFBBE9_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m8D23998382903CA5F11981B851A7C60710DFBBE9_RuntimeMethod_var);
		__this->set_currentCalibration_4(L_2);
		// }
		return;
	}
}
// System.Void MotiveScreenCalibrationProvider::TestSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveScreenCalibrationProvider_TestSave_mA116D6216F2B2E45162124B04BC5F8F879D6DCB6 (MotiveScreenCalibrationProvider_tAF31304D33AD11DD269A9DDC85A8D2D11391D68E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m764167FFF42A56728F2847CDB6BB09ABBE12176C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// savedCalibrations.Add(currentCalibration);
		List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33 * L_0 = __this->get_savedCalibrations_5();
		SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C * L_1 = __this->get_currentCalibration_4();
		NullCheck(L_0);
		List_1_Add_m764167FFF42A56728F2847CDB6BB09ABBE12176C(L_0, L_1, /*hidden argument*/List_1_Add_m764167FFF42A56728F2847CDB6BB09ABBE12176C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MotiveScreenCalibrationProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveScreenCalibrationProvider__ctor_m37A0E80EB584D8852FB14DAC7BFACCCD70974641 (MotiveScreenCalibrationProvider_tAF31304D33AD11DD269A9DDC85A8D2D11391D68E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1D67B3E2497F31A26A4FAC296D583DB17CF6594D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<SavedBasicScreenCalibration> savedCalibrations = new List<SavedBasicScreenCalibration>();
		List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33 * L_0 = (List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33 *)il2cpp_codegen_object_new(List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33_il2cpp_TypeInfo_var);
		List_1__ctor_m1D67B3E2497F31A26A4FAC296D583DB17CF6594D(L_0, /*hidden argument*/List_1__ctor_m1D67B3E2497F31A26A4FAC296D583DB17CF6594D_RuntimeMethod_var);
		__this->set_savedCalibrations_5(L_0);
		ScreenCalibrationProvider__ctor_m5338E3E7F62CD96173A565A1288A541B222CCDE0(__this, /*hidden argument*/NULL);
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
// System.Void MotiveScreenCalibrator::Calibrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveScreenCalibrator_Calibrate_mDEEFEBBAA0913B3FED117FE4B5C079B4A366B317 (MotiveScreenCalibrator_t43196D474AFB511F39CA945C9C94C33AABF6B96C * __this, const RuntimeMethod* method)
{
	{
		// calibrationTransform.rotation = TrackedScreen.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_calibrationTransform_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_TrackedScreen_5();
		NullCheck(L_1);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MotiveScreenCalibrator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveScreenCalibrator__ctor_m9C5338794387A2CF8CED42377A335C63A38CE569 (MotiveScreenCalibrator_t43196D474AFB511F39CA945C9C94C33AABF6B96C * __this, const RuntimeMethod* method)
{
	{
		ScreenCalibrator__ctor_m2C6A7E738C994EBD613F72FAB3A8273D8F14B995(__this, /*hidden argument*/NULL);
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
// System.Void MotiveTrackingCalibration::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveTrackingCalibration_Awake_mDD1E246C243B62B6AA0305B7EADB6788B2197E81 (MotiveTrackingCalibration_tF34845DAD9A0418B57F4A9A52301BAFF2B8C636A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisTrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53_mDC6238E62F605314461360820EB92746B45D71E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotiveTrackingCalibration_TrackingUpdated_m2EDEADB3552E4E6C643A4F2218D25C4E29717953_RuntimeMethod_var);
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
		__this->set_mainUI_13(L_2);
		// offAxisCameraRig = trackingSystem.offAxisCameraRig;
		TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53 * L_3 = V_0;
		NullCheck(L_3);
		OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * L_4 = L_3->get_offAxisCameraRig_8();
		__this->set_offAxisCameraRig_14(L_4);
		// offAxisCamera = trackingSystem.offAxisCamera;
		TrackingSystem_tA59049373A618D97402669E350B279EBA1CDAC53 * L_5 = V_0;
		NullCheck(L_5);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = L_5->get_offAxisCamera_9();
		__this->set_offAxisCamera_15(L_6);
		// trackingSource.TrackingDataUpdated += TrackingUpdated;
		MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7 * L_7 = __this->get_trackingSource_4();
		TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * L_8 = (TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 *)il2cpp_codegen_object_new(TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5_il2cpp_TypeInfo_var);
		TrackingDataUpdatedEvent__ctor_mE191FC4729F2FBFA6D809DD6C46DBFA7841B6C75(L_8, __this, (intptr_t)((intptr_t)MotiveTrackingCalibration_TrackingUpdated_m2EDEADB3552E4E6C643A4F2218D25C4E29717953_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< TrackingDataUpdatedEvent_t8B836DA8854CC4DABC27FFA284579B56A91F18B5 * >::Invoke(4 /* System.Void MPDepthCore.TrackingSources.MPDepthTrackingSource::add_TrackingDataUpdated(MPDepthCore.TrackingSources.MPDepthTrackingSource/TrackingDataUpdatedEvent) */, L_7, L_8);
		// }
		return;
	}
}
// System.Void MotiveTrackingCalibration::CalculateCalibrationFromTrackingInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveTrackingCalibration_CalculateCalibrationFromTrackingInfo_mDD34F0218A4A68AFBEF35BB1F391B6D664BC64F3 (MotiveTrackingCalibration_tF34845DAD9A0418B57F4A9A52301BAFF2B8C636A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD_mD68F0427E60767642B73EA35C3AE75CDD638D1DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691_il2cpp_TypeInfo_var);
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
	SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * V_5 = NULL;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_6;
	memset((&V_6), 0, sizeof(V_6));
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// calibrationTransform.position = Vector3.zero;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_calibrationTransform_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_1, /*hidden argument*/NULL);
		// calibrationTransform.rotation = Quaternion.Euler(Vector3.zero);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_calibrationTransform_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_2, L_4, /*hidden argument*/NULL);
		// Vector3 camPos = new Vector3(0, 0, trackingData.CameraTrackingData.Position.z);
		MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * L_5 = __this->get_trackingData_9();
		NullCheck(L_5);
		CameraTrackingData_tAAE8DCC63B02088F63C7D759E4FCF8A268374FCE * L_6 = L_5->get_CameraTrackingData_1();
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = ((TrackingPose_t9D6C81FDF981E08EBF7CDBBB363CA99CAB3EC265 *)L_6)->get_address_of_Position_0();
		float L_8 = L_7->get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (0.0f), (0.0f), L_8, /*hidden argument*/NULL);
		// offAxisCamera.transform.localPosition = camPos;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9 = __this->get_offAxisCamera_15();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		NullCheck(L_10);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_10, L_11, /*hidden argument*/NULL);
		// GameObject tempFace = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_12, /*hidden argument*/NULL);
		V_1 = L_12;
		// tempFace.transform.position = offAxisCamera.transform.localPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_1;
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15 = __this->get_offAxisCamera_15();
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_14, L_17, /*hidden argument*/NULL);
		// Vector3 flippedEulers = -trackingData.CameraTrackingData.Eulers;
		MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * L_18 = __this->get_trackingData_9();
		NullCheck(L_18);
		CameraTrackingData_tAAE8DCC63B02088F63C7D759E4FCF8A268374FCE * L_19 = L_18->get_CameraTrackingData_1();
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ((TrackingPose_t9D6C81FDF981E08EBF7CDBBB363CA99CAB3EC265 *)L_19)->get_Eulers_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		// tempFace.transform.eulerAngles = new Vector3(0, 180, 0) - new Vector3(flippedEulers.x, -flippedEulers.y, flippedEulers.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = V_1;
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_24), (0.0f), (180.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_2;
		float L_26 = L_25.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_2;
		float L_28 = L_27.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_2;
		float L_30 = L_29.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_31), L_26, ((-L_28)), L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_24, L_31, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_23, L_32, /*hidden argument*/NULL);
		// tempFace.name = "tempFace";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = V_1;
		NullCheck(L_33);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_33, _stringLiteral486B66E7C5A80B862FB8B09AD92A68207CDDA2AD, /*hidden argument*/NULL);
		// GameObject tempOffset = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_34, /*hidden argument*/NULL);
		V_3 = L_34;
		// tempOffset.transform.parent = tempFace.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = V_3;
		NullCheck(L_35);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_35, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = V_1;
		NullCheck(L_37);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_37, /*hidden argument*/NULL);
		NullCheck(L_36);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_36, L_38, /*hidden argument*/NULL);
		// tempOffset.name = "tempOffset";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = V_3;
		NullCheck(L_39);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_39, _stringLiteral77917F65152BFCCFCED5473A1BCB1188F7DC422E, /*hidden argument*/NULL);
		// Vector3 flippedPos = -trackingData.CameraTrackingData.Position;
		MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * L_40 = __this->get_trackingData_9();
		NullCheck(L_40);
		CameraTrackingData_tAAE8DCC63B02088F63C7D759E4FCF8A268374FCE * L_41 = L_40->get_CameraTrackingData_1();
		NullCheck(L_41);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42 = ((TrackingPose_t9D6C81FDF981E08EBF7CDBBB363CA99CAB3EC265 *)L_41)->get_Position_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_42, /*hidden argument*/NULL);
		V_4 = L_43;
		// tempOffset.transform.localPosition = new Vector3(flippedPos.x, flippedPos.y, flippedPos.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = V_3;
		NullCheck(L_44);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_44, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = V_4;
		float L_47 = L_46.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48 = V_4;
		float L_49 = L_48.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = V_4;
		float L_51 = L_50.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_52), L_47, L_49, L_51, /*hidden argument*/NULL);
		NullCheck(L_45);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_45, L_52, /*hidden argument*/NULL);
		// tempOffset.transform.localEulerAngles = Vector3.zero;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53 = V_3;
		NullCheck(L_53);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54;
		L_54 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_53, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_54);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(L_54, L_55, /*hidden argument*/NULL);
		// calibrationTransform.position = tempOffset.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56 = __this->get_calibrationTransform_12();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_57 = V_3;
		NullCheck(L_57);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58;
		L_58 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_57, /*hidden argument*/NULL);
		NullCheck(L_58);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		L_59 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_58, /*hidden argument*/NULL);
		NullCheck(L_56);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_56, L_59, /*hidden argument*/NULL);
		// calibrationTransform.rotation = tempOffset.transform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60 = __this->get_calibrationTransform_12();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_61 = V_3;
		NullCheck(L_61);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_62;
		L_62 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_61, /*hidden argument*/NULL);
		NullCheck(L_62);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_63;
		L_63 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_62, /*hidden argument*/NULL);
		NullCheck(L_60);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_60, L_63, /*hidden argument*/NULL);
		// MotiveTrackingProvider.SavedMotiveTrackingConfiguration calibration = new MotiveTrackingProvider.SavedMotiveTrackingConfiguration();
		SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * L_64 = (SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 *)il2cpp_codegen_object_new(SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691_il2cpp_TypeInfo_var);
		SavedMotiveTrackingConfiguration__ctor_mC0E37E152CE04E2AACD48509A6F27F6D02C28A89(L_64, /*hidden argument*/NULL);
		V_5 = L_64;
		// calibration.TrackerOffsetCalibration.Position = calibrationTransform.position;
		SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * L_65 = V_5;
		NullCheck(L_65);
		TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 * L_66 = L_65->get_TrackerOffsetCalibration_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_67 = __this->get_calibrationTransform_12();
		NullCheck(L_67);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
		L_68 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_67, /*hidden argument*/NULL);
		NullCheck(L_66);
		((TrackingPose_t9D6C81FDF981E08EBF7CDBBB363CA99CAB3EC265 *)L_66)->set_Position_0(L_68);
		// calibration.TrackerOffsetCalibration.Eulers = calibrationTransform.rotation.eulerAngles;
		SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * L_69 = V_5;
		NullCheck(L_69);
		TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 * L_70 = L_69->get_TrackerOffsetCalibration_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_71 = __this->get_calibrationTransform_12();
		NullCheck(L_71);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_72;
		L_72 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_71, /*hidden argument*/NULL);
		V_6 = L_72;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73;
		L_73 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_6), /*hidden argument*/NULL);
		NullCheck(L_70);
		((TrackingPose_t9D6C81FDF981E08EBF7CDBBB363CA99CAB3EC265 *)L_70)->set_Eulers_1(L_73);
		// calibration.name = System.DateTime.Now.ToString();
		SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * L_74 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_75;
		L_75 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		V_7 = L_75;
		String_t* L_76;
		L_76 = DateTime_ToString_m242888E500DFD8CD675BDC455BC696AF47813954((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_7), /*hidden argument*/NULL);
		NullCheck(L_74);
		L_74->set_name_0(L_76);
		// GetComponent<MotiveTrackingProvider>().SaveCalibration(calibration);
		MotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD * L_77;
		L_77 = Component_GetComponent_TisMotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD_mD68F0427E60767642B73EA35C3AE75CDD638D1DA(__this, /*hidden argument*/Component_GetComponent_TisMotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD_mD68F0427E60767642B73EA35C3AE75CDD638D1DA_RuntimeMethod_var);
		SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * L_78 = V_5;
		NullCheck(L_77);
		MotiveTrackingProvider_SaveCalibration_mA54D391F5AC3FC4D7F6D81ADFFFD67B724804F2A(L_77, L_78, /*hidden argument*/NULL);
		// Destroy(tempFace);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_79 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_79, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MotiveTrackingCalibration::TrackingUpdated(MPDepthCore.Calibration.Camera.MPDepthTrackingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveTrackingCalibration_TrackingUpdated_m2EDEADB3552E4E6C643A4F2218D25C4E29717953 (MotiveTrackingCalibration_tF34845DAD9A0418B57F4A9A52301BAFF2B8C636A * __this, MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * ___data0, const RuntimeMethod* method)
{
	{
		// this.trackingData = data;
		MPDepthTrackingData_t1C4585927FA6400A61AC93F18B144C0BE8C3F1F7 * L_0 = ___data0;
		__this->set_trackingData_9(L_0);
		// }
		return;
	}
}
// System.Void MotiveTrackingCalibration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveTrackingCalibration__ctor_m22CFA8DB283717BEEBC9DC929F7BFB803973263C (MotiveTrackingCalibration_tF34845DAD9A0418B57F4A9A52301BAFF2B8C636A * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] MPDepthTrackingSource trackingSource = default;
		__this->set_trackingSource_4((MPDepthTrackingSource_tA6C90370587E280BDD2EB3D24CE9E0CC7A9B8BE7 *)NULL);
		// [SerializeField] GameObject calibrationObjects = default;
		__this->set_calibrationObjects_5((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// bool calibrating = false;
		__this->set_calibrating_8((bool)0);
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
// System.Void MotiveTrackingProvider::SelectCalibration(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveTrackingProvider_SelectCalibration_mFD1B483B6A50AD79D154439E44758C6359D856A0 (MotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD * __this, int32_t ___selectedIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7F7688637287C07B6EADE86D0B399C7BF3534155_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentCalibration = savedCalibrations[selectedIndex];
		List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD * L_0 = __this->get_savedCalibrations_6();
		int32_t L_1 = ___selectedIndex0;
		NullCheck(L_0);
		SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * L_2;
		L_2 = List_1_get_Item_m7F7688637287C07B6EADE86D0B399C7BF3534155_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m7F7688637287C07B6EADE86D0B399C7BF3534155_RuntimeMethod_var);
		__this->set_currentCalibration_5(L_2);
		// calibrationTransform.position = currentCalibration.TrackerOffsetCalibration.Position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ((TrackingCalibrationProvider_t936458C67919392EE6B88C439729E2AECA9293AB *)__this)->get_calibrationTransform_4();
		SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * L_4 = __this->get_currentCalibration_5();
		NullCheck(L_4);
		TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 * L_5 = L_4->get_TrackerOffsetCalibration_1();
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ((TrackingPose_t9D6C81FDF981E08EBF7CDBBB363CA99CAB3EC265 *)L_5)->get_Position_0();
		NullCheck(L_3);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_6, /*hidden argument*/NULL);
		// calibrationTransform.rotation = Quaternion.Euler(currentCalibration.TrackerOffsetCalibration.Eulers);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = ((TrackingCalibrationProvider_t936458C67919392EE6B88C439729E2AECA9293AB *)__this)->get_calibrationTransform_4();
		SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * L_8 = __this->get_currentCalibration_5();
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
// System.Void MotiveTrackingProvider::Calibrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveTrackingProvider_Calibrate_mCFD52709C9C44315981407E5DD89B8CE7776E488 (MotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD * __this, const RuntimeMethod* method)
{
	{
		// calibrator.CalculateCalibrationFromTrackingInfo();
		MotiveTrackingCalibration_tF34845DAD9A0418B57F4A9A52301BAFF2B8C636A * L_0 = __this->get_calibrator_7();
		NullCheck(L_0);
		MotiveTrackingCalibration_CalculateCalibrationFromTrackingInfo_mDD34F0218A4A68AFBEF35BB1F391B6D664BC64F3(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MotiveTrackingProvider::FinishSetupAfterLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveTrackingProvider_FinishSetupAfterLoad_mA1A5EE23EC9237B51BB82EDAECB671BE5E178CD1 (MotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void MotiveTrackingProvider::SaveCalibration(MotiveTrackingProvider/SavedMotiveTrackingConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveTrackingProvider_SaveCalibration_mA54D391F5AC3FC4D7F6D81ADFFFD67B724804F2A (MotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD * __this, SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * ___calibration0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m042D30C333452FE7F79B5409C30E698DBC27485E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// savedCalibrations.Add(calibration);
		List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD * L_0 = __this->get_savedCalibrations_6();
		SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * L_1 = ___calibration0;
		NullCheck(L_0);
		List_1_Add_m042D30C333452FE7F79B5409C30E698DBC27485E(L_0, L_1, /*hidden argument*/List_1_Add_m042D30C333452FE7F79B5409C30E698DBC27485E_RuntimeMethod_var);
		// currentCalibration = calibration;
		SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * L_2 = ___calibration0;
		__this->set_currentCalibration_5(L_2);
		// }
		return;
	}
}
// System.Void MotiveTrackingProvider::SetCurrentToDefaultCalibration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveTrackingProvider_SetCurrentToDefaultCalibration_mA4A7A65669590A48AB5E6B5968BF9D42B5076DC3 (MotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentCalibration = new SavedMotiveTrackingConfiguration();
		SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * L_0 = (SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 *)il2cpp_codegen_object_new(SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691_il2cpp_TypeInfo_var);
		SavedMotiveTrackingConfiguration__ctor_mC0E37E152CE04E2AACD48509A6F27F6D02C28A89(L_0, /*hidden argument*/NULL);
		__this->set_currentCalibration_5(L_0);
		// }
		return;
	}
}
// System.Void MotiveTrackingProvider::LoadSelfFromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveTrackingProvider_LoadSelfFromJson_m3CA129BC11349EF2C5C5046B63EB6EC60ABA65D3 (MotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD * __this, String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisSaveMotiveData_t050B4C7FBF43A41FE0EE3EB844A33843B3E50F11_mCA487D26F47586101A0FFAFFD229D40D80D74960_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SaveMotiveData_t050B4C7FBF43A41FE0EE3EB844A33843B3E50F11 * V_0 = NULL;
	{
		// SaveMotiveData saveData = JsonUtility.FromJson<SaveMotiveData>(json);
		String_t* L_0 = ___json0;
		SaveMotiveData_t050B4C7FBF43A41FE0EE3EB844A33843B3E50F11 * L_1;
		L_1 = JsonUtility_FromJson_TisSaveMotiveData_t050B4C7FBF43A41FE0EE3EB844A33843B3E50F11_mCA487D26F47586101A0FFAFFD229D40D80D74960(L_0, /*hidden argument*/JsonUtility_FromJson_TisSaveMotiveData_t050B4C7FBF43A41FE0EE3EB844A33843B3E50F11_mCA487D26F47586101A0FFAFFD229D40D80D74960_RuntimeMethod_var);
		V_0 = L_1;
		// this.currentCalibration = saveData.currentCalibration;
		SaveMotiveData_t050B4C7FBF43A41FE0EE3EB844A33843B3E50F11 * L_2 = V_0;
		NullCheck(L_2);
		SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * L_3 = L_2->get_currentCalibration_1();
		__this->set_currentCalibration_5(L_3);
		// this.savedCalibrations = saveData.savedConfigurations;
		SaveMotiveData_t050B4C7FBF43A41FE0EE3EB844A33843B3E50F11 * L_4 = V_0;
		NullCheck(L_4);
		List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD * L_5 = L_4->get_savedConfigurations_0();
		__this->set_savedCalibrations_6(L_5);
		// }
		return;
	}
}
// System.String MotiveTrackingProvider::GetSelfAsJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MotiveTrackingProvider_GetSelfAsJson_mD115778C385C39E8A5A1A79DC21ABC451F5E452C (MotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveMotiveData_t050B4C7FBF43A41FE0EE3EB844A33843B3E50F11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SaveMotiveData_t050B4C7FBF43A41FE0EE3EB844A33843B3E50F11 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// SaveMotiveData saveData = new SaveMotiveData(savedCalibrations, currentCalibration);
		List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD * L_0 = __this->get_savedCalibrations_6();
		SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * L_1 = __this->get_currentCalibration_5();
		SaveMotiveData_t050B4C7FBF43A41FE0EE3EB844A33843B3E50F11 * L_2 = (SaveMotiveData_t050B4C7FBF43A41FE0EE3EB844A33843B3E50F11 *)il2cpp_codegen_object_new(SaveMotiveData_t050B4C7FBF43A41FE0EE3EB844A33843B3E50F11_il2cpp_TypeInfo_var);
		SaveMotiveData__ctor_m43065D076A3B153AAFF0DA379776837BF959C1B5(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// string json = JsonUtility.ToJson(saveData);
		SaveMotiveData_t050B4C7FBF43A41FE0EE3EB844A33843B3E50F11 * L_3 = V_0;
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
// MPDepthCore.Calibration.Camera.TrackerOffsetCalibration MotiveTrackingProvider::get_GetTrackerOffsetCalibration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 * MotiveTrackingProvider_get_GetTrackerOffsetCalibration_m3C3E2D64FC773FF78ABD22ED8EBD1CFEEFBABD59 (MotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD * __this, const RuntimeMethod* method)
{
	{
		// currentCalibration.TrackerOffsetCalibration;
		SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * L_0 = __this->get_currentCalibration_5();
		NullCheck(L_0);
		TrackerOffsetCalibration_tD2EC555FBB1EF1E2A33767B5EF260584742C3321 * L_1 = L_0->get_TrackerOffsetCalibration_1();
		return L_1;
	}
}
// MPDepthCore.Calibration.Camera.SavedTrackerCalibration MotiveTrackingProvider::get_CurrentTrackerCalibration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MotiveTrackingProvider_get_CurrentTrackerCalibration_mD9BE2219E7380787A52CE1C0D5BF88D5F27B44D9 (MotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD * __this, const RuntimeMethod* method)
{
	{
		// public override SavedTrackerCalibration CurrentTrackerCalibration => currentCalibration;
		SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * L_0 = __this->get_currentCalibration_5();
		return L_0;
	}
}
// System.Collections.Generic.List`1<MPDepthCore.Calibration.Camera.SavedTrackerCalibration> MotiveTrackingProvider::get_AllCalibrations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC * MotiveTrackingProvider_get_AllCalibrations_mB59A0CDFF2BBB1257D138D77E52AC5645047925A (MotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD * __this, const RuntimeMethod* method)
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
		List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD * L_0 = __this->get_savedCalibrations_6();
		List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC * L_1 = (List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC *)il2cpp_codegen_object_new(List_1_t84076098512FE39ABDDD8D93DB8CF61479176DBC_il2cpp_TypeInfo_var);
		List_1__ctor_m7F199C5D42B799C186A8C0DCFB7E43E94D3E8393(L_1, L_0, /*hidden argument*/List_1__ctor_m7F199C5D42B799C186A8C0DCFB7E43E94D3E8393_RuntimeMethod_var);
		return L_1;
	}
}
// System.String MotiveTrackingProvider::get_Filename()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MotiveTrackingProvider_get_Filename_mDCF1FAC8DAF256A9318945F79D172FB59A86CA58 (MotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B317373334325A5D2FE52BFB6275002798E7BAD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override string Filename => "MotiveTrackerConfigurations.json";
		return _stringLiteral4B317373334325A5D2FE52BFB6275002798E7BAD;
	}
}
// System.Void MotiveTrackingProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotiveTrackingProvider__ctor_mA02A008745A80149B2F390FD82CB4CC4FFA46AA0 (MotiveTrackingProvider_tBB8B5E35F1F8B45BD10A28BF3CD1D79FA73854FD * __this, const RuntimeMethod* method)
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
// System.Void MotiveScreenCalibrationProvider/SaveData::.ctor(System.Collections.Generic.List`1<MotiveScreenCalibrationProvider/SavedBasicScreenCalibration>,MotiveScreenCalibrationProvider/SavedBasicScreenCalibration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData__ctor_m7B578D7CF6913F68F85156AA3324C56F1A38A0F1 (SaveData_t83DF79006253D7B9555CD5B9BA716D55D2C5E781 * __this, List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33 * ___savedCalibrations0, SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C * ___currentCalibration1, const RuntimeMethod* method)
{
	{
		// public SaveData(List<SavedBasicScreenCalibration> savedCalibrations, SavedBasicScreenCalibration currentCalibration)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.savedCalibrations = savedCalibrations;
		List_1_t9A92D0AC903F26FA4E5546A8F44BAC96A6720F33 * L_0 = ___savedCalibrations0;
		__this->set_savedCalibrations_1(L_0);
		// this.currentCalibration = currentCalibration;
		SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C * L_1 = ___currentCalibration1;
		__this->set_currentCalibration_0(L_1);
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
// System.String MotiveScreenCalibrationProvider/SavedBasicScreenCalibration::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SavedBasicScreenCalibration_get_Name_m7C411B502CAEA94BDE37FF6C21565C6F361A3D42 (SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C * __this, const RuntimeMethod* method)
{
	{
		// get => name;
		String_t* L_0 = __this->get_name_2();
		return L_0;
	}
}
// System.Void MotiveScreenCalibrationProvider/SavedBasicScreenCalibration::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedBasicScreenCalibration_set_Name_m469F66CB8DC3579606F9B1966E60D2F79F723333 (SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set => name = value;
		String_t* L_0 = ___value0;
		__this->set_name_2(L_0);
		return;
	}
}
// System.Void MotiveScreenCalibrationProvider/SavedBasicScreenCalibration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedBasicScreenCalibration__ctor_m1318D8C8E3447F29C84B48A4EBBD18DC00B1FA25 (SavedBasicScreenCalibration_tDCA3B530B16F05B019E939A8068DA37F1D57BC5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral650A649413F3C1D0B0504FDCFC2F260FE9F2FD7E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [FormerlySerializedAs("width")] [SerializeField] public float Width = 0.8f;
		__this->set_Width_0((0.800000012f));
		// [SerializeField] public float Height = 0.45f;
		__this->set_Height_1((0.449999988f));
		// public string name = "Default calibration";
		__this->set_name_2(_stringLiteral650A649413F3C1D0B0504FDCFC2F260FE9F2FD7E);
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
// System.Void MotiveTrackingProvider/SaveMotiveData::.ctor(System.Collections.Generic.List`1<MotiveTrackingProvider/SavedMotiveTrackingConfiguration>,MotiveTrackingProvider/SavedMotiveTrackingConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveMotiveData__ctor_m43065D076A3B153AAFF0DA379776837BF959C1B5 (SaveMotiveData_t050B4C7FBF43A41FE0EE3EB844A33843B3E50F11 * __this, List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD * ___savedConfigurations0, SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * ___currentCalibration1, const RuntimeMethod* method)
{
	{
		// public SaveMotiveData(List<SavedMotiveTrackingConfiguration> savedConfigurations, SavedMotiveTrackingConfiguration currentCalibration)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.savedConfigurations = savedConfigurations;
		List_1_t6F2FF11C2B55AC0C4A229D14971E9E7779B74AFD * L_0 = ___savedConfigurations0;
		__this->set_savedConfigurations_0(L_0);
		// this.currentCalibration = currentCalibration;
		SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * L_1 = ___currentCalibration1;
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
// System.String MotiveTrackingProvider/SavedMotiveTrackingConfiguration::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SavedMotiveTrackingConfiguration_get_Name_mF5CE17D5C93F290C58D3C95D42F37C34449636DA (SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * __this, const RuntimeMethod* method)
{
	{
		// get => name;
		String_t* L_0 = __this->get_name_0();
		return L_0;
	}
}
// System.Void MotiveTrackingProvider/SavedMotiveTrackingConfiguration::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedMotiveTrackingConfiguration_set_Name_m528C67BB2D49FF6112046005D1099C1467B2A633 (SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set => name = value;
		String_t* L_0 = ___value0;
		__this->set_name_0(L_0);
		return;
	}
}
// System.Void MotiveTrackingProvider/SavedMotiveTrackingConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedMotiveTrackingConfiguration__ctor_mC0E37E152CE04E2AACD48509A6F27F6D02C28A89 (SavedMotiveTrackingConfiguration_t288ACCE38A039621ECBD31D5035F1803491A8691 * __this, const RuntimeMethod* method)
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
