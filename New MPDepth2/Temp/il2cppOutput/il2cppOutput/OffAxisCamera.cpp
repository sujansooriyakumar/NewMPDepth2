#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// OffAxisCamera.ScreenConfiguration.ManualScreenProvider
struct ManualScreenProvider_t638A649C694ACED4F678CA05FDAC5772AA9A4054;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// OffAxisCamera.OffAxisCameraRig
struct OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF;
// OffAxisCamera.ScreenConfiguration.OffAxisScreen
struct OffAxisScreen_tCAA01F5D720E5EE184693C9E2D59F5CD3AB130C0;
// OffAxisCamera.ScreenConfiguration.OffAxisScreenProvider
struct OffAxisScreenProvider_t45C80864E577E00448ACE703B2FAED5A7A961BFA;
// OffAxisCamera.ProjectionPlane
struct ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9;
// OffAxisCamera.ProjectionPlaneCamera
struct ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// OffAxisCamera.SetAsMainCamera
struct SetAsMainCamera_t3DBD3873C45CFEFFCBCE8CA2E6441460648DF830;
// System.String
struct String_t;
// OffAxisCamera.TrackingReceiver
struct TrackingReceiver_t9F4F5BA0AFA705C2ADFE3850A4ED2B143177F689;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// OffAxisCamera.OffAxisCameraRig/UpdateCameraLocationEvent
struct UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D;

IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral7B81A106961842A097CB7ACEED3FA889B0323994;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisOffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF_m386F5548E3C41F005177D2B946AC06247C6B7600_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingReceiver_UpdateCameraPosition_m351E3D984C48963B2D2D140FFE17863D59BD99A3_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t73BB8275FC118A6881462E407E42DB79FD5A2303 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
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

// UnityEngine.PrimitiveType
struct PrimitiveType_t0E20B7B2F4ABBD14BAE02F0444EE003C6479E93E 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveType_t0E20B7B2F4ABBD14BAE02F0444EE003C6479E93E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
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


// OffAxisCamera.ScreenConfiguration.OffAxisScreen
struct OffAxisScreen_tCAA01F5D720E5EE184693C9E2D59F5CD3AB130C0  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// OffAxisCamera.OffAxisCameraRig/UpdateCameraLocationEvent
struct UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D  : public MulticastDelegate_t
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


// OffAxisCamera.ProjectionPlane
struct ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// OffAxisCamera.OffAxisCameraRig OffAxisCamera.ProjectionPlane::offAxisCameraRig
	OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * ___offAxisCameraRig_4;
	// UnityEngine.Vector2 OffAxisCamera.ProjectionPlane::size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size_5;
	// UnityEngine.Vector2 OffAxisCamera.ProjectionPlane::aspectRatio
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___aspectRatio_6;
	// System.Boolean OffAxisCamera.ProjectionPlane::lockAspectRatio
	bool ___lockAspectRatio_7;
	// System.Boolean OffAxisCamera.ProjectionPlane::drawGizmo
	bool ___drawGizmo_8;
	// System.Boolean OffAxisCamera.ProjectionPlane::showAlignmentCube
	bool ___showAlignmentCube_9;
	// System.Single OffAxisCamera.ProjectionPlane::alignmentDepth
	float ___alignmentDepth_10;
	// UnityEngine.Material OffAxisCamera.ProjectionPlane::alignmentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___alignmentMaterial_11;
	// UnityEngine.Vector3 OffAxisCamera.ProjectionPlane::<BottomLeft>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CBottomLeftU3Ek__BackingField_12;
	// UnityEngine.Vector3 OffAxisCamera.ProjectionPlane::<BottomRight>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CBottomRightU3Ek__BackingField_13;
	// UnityEngine.Vector3 OffAxisCamera.ProjectionPlane::<TopLeft>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CTopLeftU3Ek__BackingField_14;
	// UnityEngine.Vector3 OffAxisCamera.ProjectionPlane::<TopRight>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CTopRightU3Ek__BackingField_15;
	// UnityEngine.Vector3 OffAxisCamera.ProjectionPlane::<DirRight>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CDirRightU3Ek__BackingField_16;
	// UnityEngine.Vector3 OffAxisCamera.ProjectionPlane::<DirUp>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CDirUpU3Ek__BackingField_17;
	// UnityEngine.Vector3 OffAxisCamera.ProjectionPlane::<DirNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CDirNormalU3Ek__BackingField_18;
	// UnityEngine.Vector3 OffAxisCamera.ProjectionPlane::bottomRight
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomRight_19;
	// UnityEngine.Vector3 OffAxisCamera.ProjectionPlane::bottomLeft
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomLeft_20;
	// UnityEngine.Vector2 OffAxisCamera.ProjectionPlane::previousSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___previousSize_21;
	// UnityEngine.Vector2 OffAxisCamera.ProjectionPlane::previousAspectRatio
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___previousAspectRatio_22;
	// UnityEngine.GameObject OffAxisCamera.ProjectionPlane::alignmentCube
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___alignmentCube_23;
	// UnityEngine.Transform OffAxisCamera.ProjectionPlane::backTrans
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___backTrans_24;
	// UnityEngine.Transform OffAxisCamera.ProjectionPlane::leftTrans
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___leftTrans_25;
	// UnityEngine.Transform OffAxisCamera.ProjectionPlane::rightTrans
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___rightTrans_26;
	// UnityEngine.Transform OffAxisCamera.ProjectionPlane::topTrans
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___topTrans_27;
	// UnityEngine.Transform OffAxisCamera.ProjectionPlane::bottomTrans
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___bottomTrans_28;
	// UnityEngine.Matrix4x4 OffAxisCamera.ProjectionPlane::m
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_29;

public:
	inline static int32_t get_offset_of_offAxisCameraRig_4() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___offAxisCameraRig_4)); }
	inline OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * get_offAxisCameraRig_4() const { return ___offAxisCameraRig_4; }
	inline OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF ** get_address_of_offAxisCameraRig_4() { return &___offAxisCameraRig_4; }
	inline void set_offAxisCameraRig_4(OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * value)
	{
		___offAxisCameraRig_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offAxisCameraRig_4), (void*)value);
	}

	inline static int32_t get_offset_of_size_5() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___size_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_size_5() const { return ___size_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_size_5() { return &___size_5; }
	inline void set_size_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___size_5 = value;
	}

	inline static int32_t get_offset_of_aspectRatio_6() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___aspectRatio_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_aspectRatio_6() const { return ___aspectRatio_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_aspectRatio_6() { return &___aspectRatio_6; }
	inline void set_aspectRatio_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___aspectRatio_6 = value;
	}

	inline static int32_t get_offset_of_lockAspectRatio_7() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___lockAspectRatio_7)); }
	inline bool get_lockAspectRatio_7() const { return ___lockAspectRatio_7; }
	inline bool* get_address_of_lockAspectRatio_7() { return &___lockAspectRatio_7; }
	inline void set_lockAspectRatio_7(bool value)
	{
		___lockAspectRatio_7 = value;
	}

	inline static int32_t get_offset_of_drawGizmo_8() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___drawGizmo_8)); }
	inline bool get_drawGizmo_8() const { return ___drawGizmo_8; }
	inline bool* get_address_of_drawGizmo_8() { return &___drawGizmo_8; }
	inline void set_drawGizmo_8(bool value)
	{
		___drawGizmo_8 = value;
	}

	inline static int32_t get_offset_of_showAlignmentCube_9() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___showAlignmentCube_9)); }
	inline bool get_showAlignmentCube_9() const { return ___showAlignmentCube_9; }
	inline bool* get_address_of_showAlignmentCube_9() { return &___showAlignmentCube_9; }
	inline void set_showAlignmentCube_9(bool value)
	{
		___showAlignmentCube_9 = value;
	}

	inline static int32_t get_offset_of_alignmentDepth_10() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___alignmentDepth_10)); }
	inline float get_alignmentDepth_10() const { return ___alignmentDepth_10; }
	inline float* get_address_of_alignmentDepth_10() { return &___alignmentDepth_10; }
	inline void set_alignmentDepth_10(float value)
	{
		___alignmentDepth_10 = value;
	}

	inline static int32_t get_offset_of_alignmentMaterial_11() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___alignmentMaterial_11)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_alignmentMaterial_11() const { return ___alignmentMaterial_11; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_alignmentMaterial_11() { return &___alignmentMaterial_11; }
	inline void set_alignmentMaterial_11(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___alignmentMaterial_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___alignmentMaterial_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBottomLeftU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___U3CBottomLeftU3Ek__BackingField_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CBottomLeftU3Ek__BackingField_12() const { return ___U3CBottomLeftU3Ek__BackingField_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CBottomLeftU3Ek__BackingField_12() { return &___U3CBottomLeftU3Ek__BackingField_12; }
	inline void set_U3CBottomLeftU3Ek__BackingField_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CBottomLeftU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CBottomRightU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___U3CBottomRightU3Ek__BackingField_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CBottomRightU3Ek__BackingField_13() const { return ___U3CBottomRightU3Ek__BackingField_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CBottomRightU3Ek__BackingField_13() { return &___U3CBottomRightU3Ek__BackingField_13; }
	inline void set_U3CBottomRightU3Ek__BackingField_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CBottomRightU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CTopLeftU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___U3CTopLeftU3Ek__BackingField_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CTopLeftU3Ek__BackingField_14() const { return ___U3CTopLeftU3Ek__BackingField_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CTopLeftU3Ek__BackingField_14() { return &___U3CTopLeftU3Ek__BackingField_14; }
	inline void set_U3CTopLeftU3Ek__BackingField_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CTopLeftU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CTopRightU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___U3CTopRightU3Ek__BackingField_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CTopRightU3Ek__BackingField_15() const { return ___U3CTopRightU3Ek__BackingField_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CTopRightU3Ek__BackingField_15() { return &___U3CTopRightU3Ek__BackingField_15; }
	inline void set_U3CTopRightU3Ek__BackingField_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CTopRightU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CDirRightU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___U3CDirRightU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CDirRightU3Ek__BackingField_16() const { return ___U3CDirRightU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CDirRightU3Ek__BackingField_16() { return &___U3CDirRightU3Ek__BackingField_16; }
	inline void set_U3CDirRightU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CDirRightU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CDirUpU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___U3CDirUpU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CDirUpU3Ek__BackingField_17() const { return ___U3CDirUpU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CDirUpU3Ek__BackingField_17() { return &___U3CDirUpU3Ek__BackingField_17; }
	inline void set_U3CDirUpU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CDirUpU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CDirNormalU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___U3CDirNormalU3Ek__BackingField_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CDirNormalU3Ek__BackingField_18() const { return ___U3CDirNormalU3Ek__BackingField_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CDirNormalU3Ek__BackingField_18() { return &___U3CDirNormalU3Ek__BackingField_18; }
	inline void set_U3CDirNormalU3Ek__BackingField_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CDirNormalU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_bottomRight_19() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___bottomRight_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_bottomRight_19() const { return ___bottomRight_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_bottomRight_19() { return &___bottomRight_19; }
	inline void set_bottomRight_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___bottomRight_19 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_20() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___bottomLeft_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_bottomLeft_20() const { return ___bottomLeft_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_bottomLeft_20() { return &___bottomLeft_20; }
	inline void set_bottomLeft_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___bottomLeft_20 = value;
	}

	inline static int32_t get_offset_of_previousSize_21() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___previousSize_21)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_previousSize_21() const { return ___previousSize_21; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_previousSize_21() { return &___previousSize_21; }
	inline void set_previousSize_21(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___previousSize_21 = value;
	}

	inline static int32_t get_offset_of_previousAspectRatio_22() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___previousAspectRatio_22)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_previousAspectRatio_22() const { return ___previousAspectRatio_22; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_previousAspectRatio_22() { return &___previousAspectRatio_22; }
	inline void set_previousAspectRatio_22(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___previousAspectRatio_22 = value;
	}

	inline static int32_t get_offset_of_alignmentCube_23() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___alignmentCube_23)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_alignmentCube_23() const { return ___alignmentCube_23; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_alignmentCube_23() { return &___alignmentCube_23; }
	inline void set_alignmentCube_23(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___alignmentCube_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___alignmentCube_23), (void*)value);
	}

	inline static int32_t get_offset_of_backTrans_24() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___backTrans_24)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_backTrans_24() const { return ___backTrans_24; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_backTrans_24() { return &___backTrans_24; }
	inline void set_backTrans_24(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___backTrans_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backTrans_24), (void*)value);
	}

	inline static int32_t get_offset_of_leftTrans_25() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___leftTrans_25)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_leftTrans_25() const { return ___leftTrans_25; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_leftTrans_25() { return &___leftTrans_25; }
	inline void set_leftTrans_25(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___leftTrans_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftTrans_25), (void*)value);
	}

	inline static int32_t get_offset_of_rightTrans_26() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___rightTrans_26)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_rightTrans_26() const { return ___rightTrans_26; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_rightTrans_26() { return &___rightTrans_26; }
	inline void set_rightTrans_26(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___rightTrans_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightTrans_26), (void*)value);
	}

	inline static int32_t get_offset_of_topTrans_27() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___topTrans_27)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_topTrans_27() const { return ___topTrans_27; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_topTrans_27() { return &___topTrans_27; }
	inline void set_topTrans_27(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___topTrans_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___topTrans_27), (void*)value);
	}

	inline static int32_t get_offset_of_bottomTrans_28() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___bottomTrans_28)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_bottomTrans_28() const { return ___bottomTrans_28; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_bottomTrans_28() { return &___bottomTrans_28; }
	inline void set_bottomTrans_28(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___bottomTrans_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bottomTrans_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_29() { return static_cast<int32_t>(offsetof(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9, ___m_29)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_29() const { return ___m_29; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_29() { return &___m_29; }
	inline void set_m_29(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_29 = value;
	}
};


// OffAxisCamera.ProjectionPlaneCamera
struct ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// OffAxisCamera.ProjectionPlane OffAxisCamera.ProjectionPlaneCamera::projectionScreen
	ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * ___projectionScreen_4;
	// System.Boolean OffAxisCamera.ProjectionPlaneCamera::clampNearPlane
	bool ___clampNearPlane_5;
	// System.Boolean OffAxisCamera.ProjectionPlaneCamera::drawGizmos
	bool ___drawGizmos_6;
	// UnityEngine.Transform OffAxisCamera.ProjectionPlaneCamera::calibrationTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___calibrationTransform_7;
	// UnityEngine.Transform OffAxisCamera.ProjectionPlaneCamera::OtherPlayerTracker
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___OtherPlayerTracker_8;
	// UnityEngine.Vector3 OffAxisCamera.ProjectionPlaneCamera::eyePos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eyePos_10;
	// System.Single OffAxisCamera.ProjectionPlaneCamera::n
	float ___n_11;
	// System.Single OffAxisCamera.ProjectionPlaneCamera::f
	float ___f_12;
	// System.Single OffAxisCamera.ProjectionPlaneCamera::l
	float ___l_13;
	// System.Single OffAxisCamera.ProjectionPlaneCamera::r
	float ___r_14;
	// System.Single OffAxisCamera.ProjectionPlaneCamera::b
	float ___b_15;
	// System.Single OffAxisCamera.ProjectionPlaneCamera::t
	float ___t_16;
	// UnityEngine.Vector3 OffAxisCamera.ProjectionPlaneCamera::va
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___va_17;
	// UnityEngine.Vector3 OffAxisCamera.ProjectionPlaneCamera::vb
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vb_18;
	// UnityEngine.Vector3 OffAxisCamera.ProjectionPlaneCamera::vc
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vc_19;
	// UnityEngine.Vector3 OffAxisCamera.ProjectionPlaneCamera::vd
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vd_20;
	// UnityEngine.Vector3 OffAxisCamera.ProjectionPlaneCamera::viewDir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___viewDir_21;
	// UnityEngine.Camera OffAxisCamera.ProjectionPlaneCamera::cam
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam_22;

public:
	inline static int32_t get_offset_of_projectionScreen_4() { return static_cast<int32_t>(offsetof(ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB, ___projectionScreen_4)); }
	inline ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * get_projectionScreen_4() const { return ___projectionScreen_4; }
	inline ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 ** get_address_of_projectionScreen_4() { return &___projectionScreen_4; }
	inline void set_projectionScreen_4(ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * value)
	{
		___projectionScreen_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectionScreen_4), (void*)value);
	}

	inline static int32_t get_offset_of_clampNearPlane_5() { return static_cast<int32_t>(offsetof(ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB, ___clampNearPlane_5)); }
	inline bool get_clampNearPlane_5() const { return ___clampNearPlane_5; }
	inline bool* get_address_of_clampNearPlane_5() { return &___clampNearPlane_5; }
	inline void set_clampNearPlane_5(bool value)
	{
		___clampNearPlane_5 = value;
	}

	inline static int32_t get_offset_of_drawGizmos_6() { return static_cast<int32_t>(offsetof(ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB, ___drawGizmos_6)); }
	inline bool get_drawGizmos_6() const { return ___drawGizmos_6; }
	inline bool* get_address_of_drawGizmos_6() { return &___drawGizmos_6; }
	inline void set_drawGizmos_6(bool value)
	{
		___drawGizmos_6 = value;
	}

	inline static int32_t get_offset_of_calibrationTransform_7() { return static_cast<int32_t>(offsetof(ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB, ___calibrationTransform_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_calibrationTransform_7() const { return ___calibrationTransform_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_calibrationTransform_7() { return &___calibrationTransform_7; }
	inline void set_calibrationTransform_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___calibrationTransform_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibrationTransform_7), (void*)value);
	}

	inline static int32_t get_offset_of_OtherPlayerTracker_8() { return static_cast<int32_t>(offsetof(ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB, ___OtherPlayerTracker_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_OtherPlayerTracker_8() const { return ___OtherPlayerTracker_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_OtherPlayerTracker_8() { return &___OtherPlayerTracker_8; }
	inline void set_OtherPlayerTracker_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___OtherPlayerTracker_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OtherPlayerTracker_8), (void*)value);
	}

	inline static int32_t get_offset_of_eyePos_10() { return static_cast<int32_t>(offsetof(ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB, ___eyePos_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_eyePos_10() const { return ___eyePos_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_eyePos_10() { return &___eyePos_10; }
	inline void set_eyePos_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___eyePos_10 = value;
	}

	inline static int32_t get_offset_of_n_11() { return static_cast<int32_t>(offsetof(ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB, ___n_11)); }
	inline float get_n_11() const { return ___n_11; }
	inline float* get_address_of_n_11() { return &___n_11; }
	inline void set_n_11(float value)
	{
		___n_11 = value;
	}

	inline static int32_t get_offset_of_f_12() { return static_cast<int32_t>(offsetof(ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB, ___f_12)); }
	inline float get_f_12() const { return ___f_12; }
	inline float* get_address_of_f_12() { return &___f_12; }
	inline void set_f_12(float value)
	{
		___f_12 = value;
	}

	inline static int32_t get_offset_of_l_13() { return static_cast<int32_t>(offsetof(ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB, ___l_13)); }
	inline float get_l_13() const { return ___l_13; }
	inline float* get_address_of_l_13() { return &___l_13; }
	inline void set_l_13(float value)
	{
		___l_13 = value;
	}

	inline static int32_t get_offset_of_r_14() { return static_cast<int32_t>(offsetof(ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB, ___r_14)); }
	inline float get_r_14() const { return ___r_14; }
	inline float* get_address_of_r_14() { return &___r_14; }
	inline void set_r_14(float value)
	{
		___r_14 = value;
	}

	inline static int32_t get_offset_of_b_15() { return static_cast<int32_t>(offsetof(ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB, ___b_15)); }
	inline float get_b_15() const { return ___b_15; }
	inline float* get_address_of_b_15() { return &___b_15; }
	inline void set_b_15(float value)
	{
		___b_15 = value;
	}

	inline static int32_t get_offset_of_t_16() { return static_cast<int32_t>(offsetof(ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB, ___t_16)); }
	inline float get_t_16() const { return ___t_16; }
	inline float* get_address_of_t_16() { return &___t_16; }
	inline void set_t_16(float value)
	{
		___t_16 = value;
	}

	inline static int32_t get_offset_of_va_17() { return static_cast<int32_t>(offsetof(ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB, ___va_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_va_17() const { return ___va_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_va_17() { return &___va_17; }
	inline void set_va_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___va_17 = value;
	}

	inline static int32_t get_offset_of_vb_18() { return static_cast<int32_t>(offsetof(ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB, ___vb_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_vb_18() const { return ___vb_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_vb_18() { return &___vb_18; }
	inline void set_vb_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___vb_18 = value;
	}

	inline static int32_t get_offset_of_vc_19() { return static_cast<int32_t>(offsetof(ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB, ___vc_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_vc_19() const { return ___vc_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_vc_19() { return &___vc_19; }
	inline void set_vc_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___vc_19 = value;
	}

	inline static int32_t get_offset_of_vd_20() { return static_cast<int32_t>(offsetof(ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB, ___vd_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_vd_20() const { return ___vd_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_vd_20() { return &___vd_20; }
	inline void set_vd_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___vd_20 = value;
	}

	inline static int32_t get_offset_of_viewDir_21() { return static_cast<int32_t>(offsetof(ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB, ___viewDir_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_viewDir_21() const { return ___viewDir_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_viewDir_21() { return &___viewDir_21; }
	inline void set_viewDir_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___viewDir_21 = value;
	}

	inline static int32_t get_offset_of_cam_22() { return static_cast<int32_t>(offsetof(ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB, ___cam_22)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_cam_22() const { return ___cam_22; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_cam_22() { return &___cam_22; }
	inline void set_cam_22(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___cam_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_22), (void*)value);
	}
};


// OffAxisCamera.SetAsMainCamera
struct SetAsMainCamera_t3DBD3873C45CFEFFCBCE8CA2E6441460648DF830  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// OffAxisCamera.TrackingReceiver
struct TrackingReceiver_t9F4F5BA0AFA705C2ADFE3850A4ED2B143177F689  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean OffAxisCamera.TrackingReceiver::debugOverride
	bool ___debugOverride_4;
	// UnityEngine.Vector3 OffAxisCamera.TrackingReceiver::initialPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialPosition_5;
	// OffAxisCamera.OffAxisCameraRig OffAxisCamera.TrackingReceiver::offAxisCameraRig
	OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * ___offAxisCameraRig_6;

public:
	inline static int32_t get_offset_of_debugOverride_4() { return static_cast<int32_t>(offsetof(TrackingReceiver_t9F4F5BA0AFA705C2ADFE3850A4ED2B143177F689, ___debugOverride_4)); }
	inline bool get_debugOverride_4() const { return ___debugOverride_4; }
	inline bool* get_address_of_debugOverride_4() { return &___debugOverride_4; }
	inline void set_debugOverride_4(bool value)
	{
		___debugOverride_4 = value;
	}

	inline static int32_t get_offset_of_initialPosition_5() { return static_cast<int32_t>(offsetof(TrackingReceiver_t9F4F5BA0AFA705C2ADFE3850A4ED2B143177F689, ___initialPosition_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initialPosition_5() const { return ___initialPosition_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initialPosition_5() { return &___initialPosition_5; }
	inline void set_initialPosition_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initialPosition_5 = value;
	}

	inline static int32_t get_offset_of_offAxisCameraRig_6() { return static_cast<int32_t>(offsetof(TrackingReceiver_t9F4F5BA0AFA705C2ADFE3850A4ED2B143177F689, ___offAxisCameraRig_6)); }
	inline OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * get_offAxisCameraRig_6() const { return ___offAxisCameraRig_6; }
	inline OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF ** get_address_of_offAxisCameraRig_6() { return &___offAxisCameraRig_6; }
	inline void set_offAxisCameraRig_6(OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * value)
	{
		___offAxisCameraRig_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offAxisCameraRig_6), (void*)value);
	}
};


// OffAxisCamera.ScreenConfiguration.ManualScreenProvider
struct ManualScreenProvider_t638A649C694ACED4F678CA05FDAC5772AA9A4054  : public OffAxisScreenProvider_t45C80864E577E00448ACE703B2FAED5A7A961BFA
{
public:
	// OffAxisCamera.ScreenConfiguration.OffAxisScreen OffAxisCamera.ScreenConfiguration.ManualScreenProvider::screen
	OffAxisScreen_tCAA01F5D720E5EE184693C9E2D59F5CD3AB130C0 * ___screen_4;

public:
	inline static int32_t get_offset_of_screen_4() { return static_cast<int32_t>(offsetof(ManualScreenProvider_t638A649C694ACED4F678CA05FDAC5772AA9A4054, ___screen_4)); }
	inline OffAxisScreen_tCAA01F5D720E5EE184693C9E2D59F5CD3AB130C0 * get_screen_4() const { return ___screen_4; }
	inline OffAxisScreen_tCAA01F5D720E5EE184693C9E2D59F5CD3AB130C0 ** get_address_of_screen_4() { return &___screen_4; }
	inline void set_screen_4(OffAxisScreen_tCAA01F5D720E5EE184693C9E2D59F5CD3AB130C0 * value)
	{
		___screen_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___screen_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// System.Void OffAxisCamera.ScreenConfiguration.OffAxisScreenProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OffAxisScreenProvider__ctor_mDF9537202D0D64A824B68C061127BC38303036B3 (OffAxisScreenProvider_t45C80864E577E00448ACE703B2FAED5A7A961BFA * __this, const RuntimeMethod* method);
// System.Void OffAxisCamera.OffAxisCameraRig/UpdateCameraLocationEvent::Invoke(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateCameraLocationEvent_Invoke_mFB4D78E478CAB8F8AF37A2817CABD4824518AD5A (UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 OffAxisCamera.ProjectionPlane::get_BottomLeft()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ProjectionPlane_get_BottomLeft_m6A70049FF38B914BBFC71DAF5755DAC0A0B8FBC7_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 OffAxisCamera.ProjectionPlane::get_BottomRight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ProjectionPlane_get_BottomRight_mC37A6F52D1B1C958A4793120F0F8CF90077A6314_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, const RuntimeMethod* method);
// UnityEngine.Vector3 OffAxisCamera.ProjectionPlane::get_TopLeft()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ProjectionPlane_get_TopLeft_m19409E7F46AF35379401BDCB2EE4D4EAD75FF71E_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 OffAxisCamera.ProjectionPlane::get_TopRight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ProjectionPlane_get_TopRight_m2B2BDBC721AB85FB378CFF1F7D372802B920E1D6_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 OffAxisCamera.ProjectionPlane::get_DirNormal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ProjectionPlane_get_DirNormal_mCD89509B1BEDECFB5ECE45AFFDDB052F8C022F35_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject OffAxisCamera.ProjectionPlane::CreateAlignmentQuad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ProjectionPlane_CreateAlignmentQuad_m5C89E8075B996BFFE4E3970C9BECA370E3016FE9 (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC (int32_t ___type0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void OffAxisCamera.ProjectionPlane::UpdateAlignmentQuad(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionPlane_UpdateAlignmentQuad_m192D986263810A37D9C6B669402B4F838C616648 (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation3, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// OffAxisCamera.ScreenConfiguration.OffAxisScreenProvider OffAxisCamera.OffAxisCameraRig::get_Screen()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OffAxisScreenProvider_t45C80864E577E00448ACE703B2FAED5A7A961BFA * OffAxisCameraRig_get_Screen_m9061550EBDE66B1EDBA9ACFE7FA87B9A6E146BEF_inline (OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void OffAxisCamera.ProjectionPlane::UpdateAlignmentCube()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionPlane_UpdateAlignmentCube_m9F98F6AF503E9EE2FC54082C30E9E7EFDDCC160D (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void OffAxisCamera.ProjectionPlane::set_BottomLeft(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProjectionPlane_set_BottomLeft_mAB5C2B87D1D4142137B87B5A03D6ABD5A4917DE9_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void OffAxisCamera.ProjectionPlane::set_BottomRight(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProjectionPlane_set_BottomRight_mEE96908203BD800421E2456E70C0D4D5E840C926_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void OffAxisCamera.ProjectionPlane::set_TopLeft(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProjectionPlane_set_TopLeft_m2EA1C3CE97DAB1776E161DFBE7C29F1C3D743649_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void OffAxisCamera.ProjectionPlane::set_TopRight(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProjectionPlane_set_TopRight_m2F21831B56E4EC9BCBCEEBB345A0635906CF504E_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void OffAxisCamera.ProjectionPlane::set_DirRight(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProjectionPlane_set_DirRight_m0491832022BB394EA6038EA5144A95A6C8B76A13_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void OffAxisCamera.ProjectionPlane::set_DirUp(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProjectionPlane_set_DirUp_m52B4FF22EF55607B31E7F85FB48404F304A44466_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 OffAxisCamera.ProjectionPlane::get_DirRight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ProjectionPlane_get_DirRight_mE96EAD340C9B86251669A7BDCA2112CF51917F0A_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 OffAxisCamera.ProjectionPlane::get_DirUp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ProjectionPlane_get_DirUp_m198349E14F1D476500DDD359BF1507F28CA88E4E_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// System.Void OffAxisCamera.ProjectionPlane::set_DirNormal(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProjectionPlane_set_DirNormal_m0747C3FB73D9C6C4B26C3E5AA53611A9CBA3A5C6_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_get_zero_m653FAA37D26B00352B992A4B87CE534251FB91CC (const RuntimeMethod* method);
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, int32_t ___row0, int32_t ___column1, float ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void OffAxisCamera.ProjectionPlaneCamera::PreventIllegalFrustrums()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionPlaneCamera_PreventIllegalFrustrums_m9FFAE84B290F7E3EB5ADBF026D5B5DD38973FBBC (ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 OffAxisCamera.ProjectionPlane::get_M()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ProjectionPlane_get_M_mD690653D2E6E7CEA9EAA48B2B3E62DD079CE1AFB_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_nearClipPlane_m4EA1D92F6E1D17E423EC036561E115F434DC2263 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m75A7270074A35D95B05F25EBF8CE392ECA6517DC (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m0FA1B9E2E815BECE2EA40023302EB942B52D9596 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Frustum(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_Frustum_mA62E93F263029C5E0CF4C1DD2CA2EE2428A6F2C2 (float ___left0, float ___right1, float ___bottom2, float ___top3, float ___zNear4, float ___zFar5, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_Translate_m48688727FA7BBA42DF2108C1A9395FC23431AC9A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Rotate(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_Rotate_m783F8A008EC7D0C3C02A5718002491F017F21E0E (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___lhs0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_worldToCameraMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_worldToCameraMatrix_mD9E982CC4F356AC310C5B3145FC59FD73C420BE3 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_projectionMatrix_m3645AC49FC94726BDA07191C80299D8361D5C328 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<OffAxisCamera.OffAxisCameraRig>()
inline OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * Component_GetComponentInParent_TisOffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF_m386F5548E3C41F005177D2B946AC06247C6B7600 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// System.Void OffAxisCamera.OffAxisCameraRig/UpdateCameraLocationEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateCameraLocationEvent__ctor_m68D4CFEF533BC38755AAF4A94FACC448FFF06198 (UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void OffAxisCamera.OffAxisCameraRig::add_CameraLocationUpdated(OffAxisCamera.OffAxisCameraRig/UpdateCameraLocationEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OffAxisCameraRig_add_CameraLocationUpdated_m37DA34A813EF3AF4BFD262F5E86EB8CB028876F2 (OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * __this, UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * ___value0, const RuntimeMethod* method);
// System.Boolean OffAxisCamera.OffAxisCameraRig::get_TrackingDisabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OffAxisCameraRig_get_TrackingDisabled_m554641DDAE1061E28B68370EBA2649C8FCCF7740_inline (OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * __this, const RuntimeMethod* method);
// System.Void OffAxisCamera.OffAxisCameraRig::remove_CameraLocationUpdated(OffAxisCamera.OffAxisCameraRig/UpdateCameraLocationEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OffAxisCameraRig_remove_CameraLocationUpdated_mBA927732010A49DECA971CEEC5BCD2E7D621CB73 (OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * __this, UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * ___value0, const RuntimeMethod* method);
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
// UnityEngine.Vector2 OffAxisCamera.ScreenConfiguration.ManualScreenProvider::get_Dimensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ManualScreenProvider_get_Dimensions_m043D6BDEEC8DFDFF178E27A26021B67DAD51CE06 (ManualScreenProvider_t638A649C694ACED4F678CA05FDAC5772AA9A4054 * __this, const RuntimeMethod* method)
{
	{
		// public override Vector2 Dimensions => screen.Dimensions;
		OffAxisScreen_tCAA01F5D720E5EE184693C9E2D59F5CD3AB130C0 * L_0 = __this->get_screen_4();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = VirtFuncInvoker0< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(4 /* UnityEngine.Vector2 OffAxisCamera.ScreenConfiguration.OffAxisScreen::get_Dimensions() */, L_0);
		return L_1;
	}
}
// System.Single OffAxisCamera.ScreenConfiguration.ManualScreenProvider::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ManualScreenProvider_get_Width_m25DA66075CC921B2D27E5702CD1C151DA6462EFE (ManualScreenProvider_t638A649C694ACED4F678CA05FDAC5772AA9A4054 * __this, const RuntimeMethod* method)
{
	{
		// public override float Width => screen.Width;
		OffAxisScreen_tCAA01F5D720E5EE184693C9E2D59F5CD3AB130C0 * L_0 = __this->get_screen_4();
		NullCheck(L_0);
		float L_1;
		L_1 = VirtFuncInvoker0< float >::Invoke(5 /* System.Single OffAxisCamera.ScreenConfiguration.OffAxisScreen::get_Width() */, L_0);
		return L_1;
	}
}
// System.Single OffAxisCamera.ScreenConfiguration.ManualScreenProvider::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ManualScreenProvider_get_Height_m220A026B640D850F3DBBFCA12CAAA80611CDD5AC (ManualScreenProvider_t638A649C694ACED4F678CA05FDAC5772AA9A4054 * __this, const RuntimeMethod* method)
{
	{
		// public override float Height => screen.Height;
		OffAxisScreen_tCAA01F5D720E5EE184693C9E2D59F5CD3AB130C0 * L_0 = __this->get_screen_4();
		NullCheck(L_0);
		float L_1;
		L_1 = VirtFuncInvoker0< float >::Invoke(6 /* System.Single OffAxisCamera.ScreenConfiguration.OffAxisScreen::get_Height() */, L_0);
		return L_1;
	}
}
// System.Void OffAxisCamera.ScreenConfiguration.ManualScreenProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualScreenProvider__ctor_mC429094CB833F6FCFFB875E3721B6E40EE7B6A30 (ManualScreenProvider_t638A649C694ACED4F678CA05FDAC5772AA9A4054 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] OffAxisScreen screen = default;
		__this->set_screen_4((OffAxisScreen_tCAA01F5D720E5EE184693C9E2D59F5CD3AB130C0 *)NULL);
		OffAxisScreenProvider__ctor_mDF9537202D0D64A824B68C061127BC38303036B3(__this, /*hidden argument*/NULL);
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
// OffAxisCamera.ScreenConfiguration.OffAxisScreenProvider OffAxisCamera.OffAxisCameraRig::get_Screen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OffAxisScreenProvider_t45C80864E577E00448ACE703B2FAED5A7A961BFA * OffAxisCameraRig_get_Screen_m9061550EBDE66B1EDBA9ACFE7FA87B9A6E146BEF (OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * __this, const RuntimeMethod* method)
{
	{
		// get => screen;
		OffAxisScreenProvider_t45C80864E577E00448ACE703B2FAED5A7A961BFA * L_0 = __this->get_screen_4();
		return L_0;
	}
}
// System.Void OffAxisCamera.OffAxisCameraRig::set_Screen(OffAxisCamera.ScreenConfiguration.OffAxisScreenProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OffAxisCameraRig_set_Screen_m1E9F6BE32A51E58D2E104569568D9933CD4B88F8 (OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * __this, OffAxisScreenProvider_t45C80864E577E00448ACE703B2FAED5A7A961BFA * ___value0, const RuntimeMethod* method)
{
	{
		// set => screen = value;
		OffAxisScreenProvider_t45C80864E577E00448ACE703B2FAED5A7A961BFA * L_0 = ___value0;
		__this->set_screen_4(L_0);
		return;
	}
}
// System.Boolean OffAxisCamera.OffAxisCameraRig::get_TrackingDisabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OffAxisCameraRig_get_TrackingDisabled_m554641DDAE1061E28B68370EBA2649C8FCCF7740 (OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * __this, const RuntimeMethod* method)
{
	{
		// get => trackingDisabled;
		bool L_0 = __this->get_trackingDisabled_5();
		return L_0;
	}
}
// System.Void OffAxisCamera.OffAxisCameraRig::set_TrackingDisabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OffAxisCameraRig_set_TrackingDisabled_m90CDD5B63CBF8F3B972C1F41D10D6995B6F68D13 (OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => trackingDisabled = value;
		bool L_0 = ___value0;
		__this->set_trackingDisabled_5(L_0);
		return;
	}
}
// System.Void OffAxisCamera.OffAxisCameraRig::DisableCameraTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OffAxisCameraRig_DisableCameraTracking_mD81DD93EBEA480488F81B9A3E7C60A66DFF7534E (OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * __this, const RuntimeMethod* method)
{
	{
		// trackingDisabled = true;
		__this->set_trackingDisabled_5((bool)1);
		// }
		return;
	}
}
// System.Void OffAxisCamera.OffAxisCameraRig::EnableCameraTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OffAxisCameraRig_EnableCameraTracking_mC24B2E1754DA3E2B4B80C77D0DBB0F0CC1C6EE96 (OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * __this, const RuntimeMethod* method)
{
	{
		// trackingDisabled = false;
		__this->set_trackingDisabled_5((bool)0);
		// }
		return;
	}
}
// System.Boolean OffAxisCamera.OffAxisCameraRig::GetTrackingDisabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OffAxisCameraRig_GetTrackingDisabled_m93D628E6E9E0EA7A92563F6D2DBE67E0C2182BE6 (OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return trackingDisabled;
		bool L_0 = __this->get_trackingDisabled_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void OffAxisCamera.OffAxisCameraRig::UpdateCameraLocation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OffAxisCameraRig_UpdateCameraLocation_mFC7D014DA0A8A2FAB93D3F55E01AE63410B988F0 (OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method)
{
	bool V_0 = false;
	UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * G_B3_0 = NULL;
	UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * G_B2_0 = NULL;
	{
		// if (!trackingDisabled)
		bool L_0 = __this->get_trackingDisabled_5();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// CameraLocationUpdated?.Invoke(position);
		UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * L_2 = __this->get_CameraLocationUpdated_6();
		UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_001b;
		}
	}
	{
		goto IL_0022;
	}

IL_001b:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___position0;
		NullCheck(G_B3_0);
		UpdateCameraLocationEvent_Invoke_mFB4D78E478CAB8F8AF37A2817CABD4824518AD5A(G_B3_0, L_4, /*hidden argument*/NULL);
	}

IL_0022:
	{
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void OffAxisCamera.OffAxisCameraRig::add_CameraLocationUpdated(OffAxisCamera.OffAxisCameraRig/UpdateCameraLocationEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OffAxisCameraRig_add_CameraLocationUpdated_m37DA34A813EF3AF4BFD262F5E86EB8CB028876F2 (OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * __this, UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * V_0 = NULL;
	UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * V_1 = NULL;
	UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * V_2 = NULL;
	{
		UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * L_0 = __this->get_CameraLocationUpdated_6();
		V_0 = L_0;
	}

IL_0007:
	{
		UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * L_1 = V_0;
		V_1 = L_1;
		UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * L_2 = V_1;
		UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D *)CastclassSealed((RuntimeObject*)L_4, UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D_il2cpp_TypeInfo_var));
		UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D ** L_5 = __this->get_address_of_CameraLocationUpdated_6();
		UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * L_6 = V_2;
		UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * L_7 = V_1;
		UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * L_8;
		L_8 = InterlockedCompareExchangeImpl<UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D *>((UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D **)L_5, L_6, L_7);
		V_0 = L_8;
		UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * L_9 = V_0;
		UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * L_10 = V_1;
		if ((!(((RuntimeObject*)(UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D *)L_9) == ((RuntimeObject*)(UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void OffAxisCamera.OffAxisCameraRig::remove_CameraLocationUpdated(OffAxisCamera.OffAxisCameraRig/UpdateCameraLocationEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OffAxisCameraRig_remove_CameraLocationUpdated_mBA927732010A49DECA971CEEC5BCD2E7D621CB73 (OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * __this, UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * V_0 = NULL;
	UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * V_1 = NULL;
	UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * V_2 = NULL;
	{
		UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * L_0 = __this->get_CameraLocationUpdated_6();
		V_0 = L_0;
	}

IL_0007:
	{
		UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * L_1 = V_0;
		V_1 = L_1;
		UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * L_2 = V_1;
		UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D *)CastclassSealed((RuntimeObject*)L_4, UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D_il2cpp_TypeInfo_var));
		UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D ** L_5 = __this->get_address_of_CameraLocationUpdated_6();
		UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * L_6 = V_2;
		UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * L_7 = V_1;
		UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * L_8;
		L_8 = InterlockedCompareExchangeImpl<UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D *>((UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D **)L_5, L_6, L_7);
		V_0 = L_8;
		UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * L_9 = V_0;
		UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * L_10 = V_1;
		if ((!(((RuntimeObject*)(UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D *)L_9) == ((RuntimeObject*)(UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void OffAxisCamera.OffAxisCameraRig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OffAxisCameraRig__ctor_mF568B1FBF29B8E4F59FC859C84B32A93613C6084 (OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] public OffAxisScreenProvider screen = default;
		__this->set_screen_4((OffAxisScreenProvider_t45C80864E577E00448ACE703B2FAED5A7A961BFA *)NULL);
		// bool trackingDisabled = false;
		__this->set_trackingDisabled_5((bool)0);
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
// System.Void OffAxisCamera.ScreenConfiguration.OffAxisScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OffAxisScreen__ctor_mA41AEB03D971ED3EF8A77BA35E7D1B22DB4FF54E (OffAxisScreen_tCAA01F5D720E5EE184693C9E2D59F5CD3AB130C0 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void OffAxisCamera.ScreenConfiguration.OffAxisScreenProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OffAxisScreenProvider__ctor_mDF9537202D0D64A824B68C061127BC38303036B3 (OffAxisScreenProvider_t45C80864E577E00448ACE703B2FAED5A7A961BFA * __this, const RuntimeMethod* method)
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
// UnityEngine.Vector3 OffAxisCamera.ProjectionPlane::get_BottomLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ProjectionPlane_get_BottomLeft_m6A70049FF38B914BBFC71DAF5755DAC0A0B8FBC7 (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method)
{
	{
		// internal Vector3 BottomLeft { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CBottomLeftU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void OffAxisCamera.ProjectionPlane::set_BottomLeft(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionPlane_set_BottomLeft_mAB5C2B87D1D4142137B87B5A03D6ABD5A4917DE9 (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// internal Vector3 BottomLeft { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CBottomLeftU3Ek__BackingField_12(L_0);
		return;
	}
}
// UnityEngine.Vector3 OffAxisCamera.ProjectionPlane::get_BottomRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ProjectionPlane_get_BottomRight_mC37A6F52D1B1C958A4793120F0F8CF90077A6314 (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method)
{
	{
		// internal Vector3 BottomRight { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CBottomRightU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void OffAxisCamera.ProjectionPlane::set_BottomRight(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionPlane_set_BottomRight_mEE96908203BD800421E2456E70C0D4D5E840C926 (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// internal Vector3 BottomRight { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CBottomRightU3Ek__BackingField_13(L_0);
		return;
	}
}
// UnityEngine.Vector3 OffAxisCamera.ProjectionPlane::get_TopLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ProjectionPlane_get_TopLeft_m19409E7F46AF35379401BDCB2EE4D4EAD75FF71E (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method)
{
	{
		// internal Vector3 TopLeft { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CTopLeftU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void OffAxisCamera.ProjectionPlane::set_TopLeft(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionPlane_set_TopLeft_m2EA1C3CE97DAB1776E161DFBE7C29F1C3D743649 (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// internal Vector3 TopLeft { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CTopLeftU3Ek__BackingField_14(L_0);
		return;
	}
}
// UnityEngine.Vector3 OffAxisCamera.ProjectionPlane::get_TopRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ProjectionPlane_get_TopRight_m2B2BDBC721AB85FB378CFF1F7D372802B920E1D6 (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method)
{
	{
		// internal Vector3 TopRight { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CTopRightU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void OffAxisCamera.ProjectionPlane::set_TopRight(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionPlane_set_TopRight_m2F21831B56E4EC9BCBCEEBB345A0635906CF504E (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// internal Vector3 TopRight { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CTopRightU3Ek__BackingField_15(L_0);
		return;
	}
}
// UnityEngine.Vector3 OffAxisCamera.ProjectionPlane::get_DirRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ProjectionPlane_get_DirRight_mE96EAD340C9B86251669A7BDCA2112CF51917F0A (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method)
{
	{
		// internal Vector3 DirRight { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CDirRightU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void OffAxisCamera.ProjectionPlane::set_DirRight(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionPlane_set_DirRight_m0491832022BB394EA6038EA5144A95A6C8B76A13 (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// internal Vector3 DirRight { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CDirRightU3Ek__BackingField_16(L_0);
		return;
	}
}
// UnityEngine.Vector3 OffAxisCamera.ProjectionPlane::get_DirUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ProjectionPlane_get_DirUp_m198349E14F1D476500DDD359BF1507F28CA88E4E (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method)
{
	{
		// internal Vector3 DirUp { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CDirUpU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void OffAxisCamera.ProjectionPlane::set_DirUp(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionPlane_set_DirUp_m52B4FF22EF55607B31E7F85FB48404F304A44466 (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// internal Vector3 DirUp { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CDirUpU3Ek__BackingField_17(L_0);
		return;
	}
}
// UnityEngine.Vector3 OffAxisCamera.ProjectionPlane::get_DirNormal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ProjectionPlane_get_DirNormal_mCD89509B1BEDECFB5ECE45AFFDDB052F8C022F35 (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method)
{
	{
		// internal Vector3 DirNormal { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CDirNormalU3Ek__BackingField_18();
		return L_0;
	}
}
// System.Void OffAxisCamera.ProjectionPlane::set_DirNormal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionPlane_set_DirNormal_m0747C3FB73D9C6C4B26C3E5AA53611A9CBA3A5C6 (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// internal Vector3 DirNormal { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CDirNormalU3Ek__BackingField_18(L_0);
		return;
	}
}
// UnityEngine.Matrix4x4 OffAxisCamera.ProjectionPlane::get_M()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ProjectionPlane_get_M_mD690653D2E6E7CEA9EAA48B2B3E62DD079CE1AFB (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method)
{
	{
		// internal Matrix4x4 M { get => m; }
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = __this->get_m_29();
		return L_0;
	}
}
// System.Void OffAxisCamera.ProjectionPlane::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionPlane_OnDrawGizmos_m9CAF782ED4839D1A404F1738034F73D1F4A8D7D9 (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (drawGizmo)
		bool L_0 = __this->get_drawGizmo_8();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_011e;
		}
	}
	{
		// float normalDrawDistance = Mathf.Min(size.x, size.y) / 4f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_2 = __this->get_address_of_size_5();
		float L_3 = L_2->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_4 = __this->get_address_of_size_5();
		float L_5 = L_4->get_y_1();
		float L_6;
		L_6 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_3, L_5, /*hidden argument*/NULL);
		V_1 = ((float)((float)L_6/(float)(4.0f)));
		// Gizmos.color = Color.red;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		L_7 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_7, /*hidden argument*/NULL);
		// Gizmos.DrawLine(BottomLeft, BottomRight);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = ProjectionPlane_get_BottomLeft_m6A70049FF38B914BBFC71DAF5755DAC0A0B8FBC7_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = ProjectionPlane_get_BottomRight_mC37A6F52D1B1C958A4793120F0F8CF90077A6314_inline(__this, /*hidden argument*/NULL);
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_8, L_9, /*hidden argument*/NULL);
		// Gizmos.DrawLine(BottomLeft, TopLeft);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = ProjectionPlane_get_BottomLeft_m6A70049FF38B914BBFC71DAF5755DAC0A0B8FBC7_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = ProjectionPlane_get_TopLeft_m19409E7F46AF35379401BDCB2EE4D4EAD75FF71E_inline(__this, /*hidden argument*/NULL);
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_10, L_11, /*hidden argument*/NULL);
		// Gizmos.DrawLine(TopRight, BottomRight);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = ProjectionPlane_get_TopRight_m2B2BDBC721AB85FB378CFF1F7D372802B920E1D6_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = ProjectionPlane_get_BottomRight_mC37A6F52D1B1C958A4793120F0F8CF90077A6314_inline(__this, /*hidden argument*/NULL);
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_12, L_13, /*hidden argument*/NULL);
		// Gizmos.DrawLine(TopLeft, TopRight);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = ProjectionPlane_get_TopLeft_m19409E7F46AF35379401BDCB2EE4D4EAD75FF71E_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = ProjectionPlane_get_TopRight_m2B2BDBC721AB85FB378CFF1F7D372802B920E1D6_inline(__this, /*hidden argument*/NULL);
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_14, L_15, /*hidden argument*/NULL);
		// Vector3 planeCenter = BottomLeft + ((TopRight - BottomLeft) * 0.5f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = ProjectionPlane_get_BottomLeft_m6A70049FF38B914BBFC71DAF5755DAC0A0B8FBC7_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = ProjectionPlane_get_TopRight_m2B2BDBC721AB85FB378CFF1F7D372802B920E1D6_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = ProjectionPlane_get_BottomLeft_m6A70049FF38B914BBFC71DAF5755DAC0A0B8FBC7_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_17, L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_19, (0.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_16, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		// Gizmos.DrawLine(planeCenter, planeCenter + DirNormal.normalized * normalDrawDistance);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = ProjectionPlane_get_DirNormal_mCD89509B1BEDECFB5ECE45AFFDDB052F8C022F35_inline(__this, /*hidden argument*/NULL);
		V_4 = L_24;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		float L_26 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_25, L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_23, L_27, /*hidden argument*/NULL);
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_22, L_28, /*hidden argument*/NULL);
		// Vector3 normalVector = planeCenter + DirNormal.normalized * normalDrawDistance;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = ProjectionPlane_get_DirNormal_mCD89509B1BEDECFB5ECE45AFFDDB052F8C022F35_inline(__this, /*hidden argument*/NULL);
		V_4 = L_30;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		float L_32 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_31, L_32, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_29, L_33, /*hidden argument*/NULL);
		V_3 = L_34;
		// Gizmos.DrawLine(BottomLeft, normalVector);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = ProjectionPlane_get_BottomLeft_m6A70049FF38B914BBFC71DAF5755DAC0A0B8FBC7_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = V_3;
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_35, L_36, /*hidden argument*/NULL);
		// Gizmos.DrawLine(BottomRight, normalVector);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = ProjectionPlane_get_BottomRight_mC37A6F52D1B1C958A4793120F0F8CF90077A6314_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = V_3;
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_37, L_38, /*hidden argument*/NULL);
		// Gizmos.DrawLine(TopLeft, normalVector);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = ProjectionPlane_get_TopLeft_m19409E7F46AF35379401BDCB2EE4D4EAD75FF71E_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = V_3;
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_39, L_40, /*hidden argument*/NULL);
		// Gizmos.DrawLine(TopRight, normalVector);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = ProjectionPlane_get_TopRight_m2B2BDBC721AB85FB378CFF1F7D372802B920E1D6_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42 = V_3;
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_41, L_42, /*hidden argument*/NULL);
	}

IL_011e:
	{
		// }
		return;
	}
}
// System.Void OffAxisCamera.ProjectionPlane::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionPlane_Start_mD1A9F52A74EEFBFC0AE525E8046DC2B8F9A8C0FC (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B81A106961842A097CB7ACEED3FA889B0323994);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_4 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_5 = NULL;
	{
		// if (Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00cc;
		}
	}
	{
		// alignmentCube = new GameObject("AlignmentCube");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_2, _stringLiteral7B81A106961842A097CB7ACEED3FA889B0323994, /*hidden argument*/NULL);
		__this->set_alignmentCube_23(L_2);
		// alignmentCube.transform.SetParent(transform, false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_alignmentCube_23();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_4, L_5, (bool)0, /*hidden argument*/NULL);
		// alignmentCube.transform.localPosition = Vector3.zero;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_alignmentCube_23();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_7, L_8, /*hidden argument*/NULL);
		// alignmentCube.transform.rotation = transform.rotation;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_alignmentCube_23();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_10, L_12, /*hidden argument*/NULL);
		// GameObject back = CreateAlignmentQuad();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = ProjectionPlane_CreateAlignmentQuad_m5C89E8075B996BFFE4E3970C9BECA370E3016FE9(__this, /*hidden argument*/NULL);
		V_1 = L_13;
		// backTrans = back.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = V_1;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		__this->set_backTrans_24(L_15);
		// GameObject left = CreateAlignmentQuad();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = ProjectionPlane_CreateAlignmentQuad_m5C89E8075B996BFFE4E3970C9BECA370E3016FE9(__this, /*hidden argument*/NULL);
		V_2 = L_16;
		// leftTrans = left.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_2;
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		__this->set_leftTrans_25(L_18);
		// GameObject right = CreateAlignmentQuad();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = ProjectionPlane_CreateAlignmentQuad_m5C89E8075B996BFFE4E3970C9BECA370E3016FE9(__this, /*hidden argument*/NULL);
		V_3 = L_19;
		// rightTrans = right.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = V_3;
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		__this->set_rightTrans_26(L_21);
		// GameObject top = CreateAlignmentQuad();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = ProjectionPlane_CreateAlignmentQuad_m5C89E8075B996BFFE4E3970C9BECA370E3016FE9(__this, /*hidden argument*/NULL);
		V_4 = L_22;
		// topTrans = top.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = V_4;
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		__this->set_topTrans_27(L_24);
		// GameObject bottom = CreateAlignmentQuad();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = ProjectionPlane_CreateAlignmentQuad_m5C89E8075B996BFFE4E3970C9BECA370E3016FE9(__this, /*hidden argument*/NULL);
		V_5 = L_25;
		// bottomTrans = bottom.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = V_5;
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_26, /*hidden argument*/NULL);
		__this->set_bottomTrans_28(L_27);
	}

IL_00cc:
	{
		// }
		return;
	}
}
// UnityEngine.GameObject OffAxisCamera.ProjectionPlane::CreateAlignmentQuad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ProjectionPlane_CreateAlignmentQuad_m5C89E8075B996BFFE4E3970C9BECA370E3016FE9 (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	{
		// GameObject quad = GameObject.CreatePrimitive(PrimitiveType.Quad);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC(5, /*hidden argument*/NULL);
		V_0 = L_0;
		// quad.transform.parent = alignmentCube.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_alignmentCube_23();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_2, L_4, /*hidden argument*/NULL);
		// quad.GetComponent<Renderer>().material = alignmentMaterial;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_0;
		NullCheck(L_5);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_6;
		L_6 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_5, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = __this->get_alignmentMaterial_11();
		NullCheck(L_6);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_6, L_7, /*hidden argument*/NULL);
		// return quad;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_0;
		V_1 = L_8;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_1;
		return L_9;
	}
}
// System.Void OffAxisCamera.ProjectionPlane::UpdateAlignmentCube()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionPlane_UpdateAlignmentCube_m9F98F6AF503E9EE2FC54082C30E9E7EFDDCC160D (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 halfSize = size * 0.5f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_size_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_0, (0.5f), /*hidden argument*/NULL);
		V_0 = L_1;
		// UpdateAlignmentQuad(backTrans, new Vector3(0, 0, alignmentDepth), new Vector3(size.x, size.y), Quaternion.identity);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_backTrans_24();
		float L_3 = __this->get_alignmentDepth_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (0.0f), (0.0f), L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_5 = __this->get_address_of_size_5();
		float L_6 = L_5->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_7 = __this->get_address_of_size_5();
		float L_8 = L_7->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_9), L_6, L_8, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		ProjectionPlane_UpdateAlignmentQuad_m192D986263810A37D9C6B669402B4F838C616648(__this, L_2, L_4, L_9, L_10, /*hidden argument*/NULL);
		// UpdateAlignmentQuad(leftTrans,
		//     new Vector3(-halfSize.x, 0, alignmentDepth * 0.5f),
		//     new Vector3(alignmentDepth, size.y, 0),
		//     Quaternion.Euler(0, -90, 0));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = __this->get_leftTrans_25();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = V_0;
		float L_13 = L_12.get_x_0();
		float L_14 = __this->get_alignmentDepth_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), ((-L_13)), (0.0f), ((float)il2cpp_codegen_multiply((float)L_14, (float)(0.5f))), /*hidden argument*/NULL);
		float L_16 = __this->get_alignmentDepth_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_17 = __this->get_address_of_size_5();
		float L_18 = L_17->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_19), L_16, L_18, (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20;
		L_20 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (-90.0f), (0.0f), /*hidden argument*/NULL);
		ProjectionPlane_UpdateAlignmentQuad_m192D986263810A37D9C6B669402B4F838C616648(__this, L_11, L_15, L_19, L_20, /*hidden argument*/NULL);
		// UpdateAlignmentQuad(rightTrans,
		//     new Vector3(halfSize.x, 0, alignmentDepth * 0.5f),
		//     new Vector3(alignmentDepth, size.y, 0),
		//     Quaternion.Euler(0, 90, 0));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = __this->get_rightTrans_26();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = V_0;
		float L_23 = L_22.get_x_0();
		float L_24 = __this->get_alignmentDepth_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_25), L_23, (0.0f), ((float)il2cpp_codegen_multiply((float)L_24, (float)(0.5f))), /*hidden argument*/NULL);
		float L_26 = __this->get_alignmentDepth_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_27 = __this->get_address_of_size_5();
		float L_28 = L_27->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_29), L_26, L_28, (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_30;
		L_30 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (90.0f), (0.0f), /*hidden argument*/NULL);
		ProjectionPlane_UpdateAlignmentQuad_m192D986263810A37D9C6B669402B4F838C616648(__this, L_21, L_25, L_29, L_30, /*hidden argument*/NULL);
		// UpdateAlignmentQuad(topTrans,
		//     new Vector3(0, halfSize.y, alignmentDepth * 0.5f),
		//     new Vector3(size.x, alignmentDepth, 0),
		//     Quaternion.Euler(-90, 0, 0));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31 = __this->get_topTrans_27();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32 = V_0;
		float L_33 = L_32.get_y_1();
		float L_34 = __this->get_alignmentDepth_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_35), (0.0f), L_33, ((float)il2cpp_codegen_multiply((float)L_34, (float)(0.5f))), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_36 = __this->get_address_of_size_5();
		float L_37 = L_36->get_x_0();
		float L_38 = __this->get_alignmentDepth_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_39), L_37, L_38, (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_40;
		L_40 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((-90.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		ProjectionPlane_UpdateAlignmentQuad_m192D986263810A37D9C6B669402B4F838C616648(__this, L_31, L_35, L_39, L_40, /*hidden argument*/NULL);
		// UpdateAlignmentQuad(bottomTrans,
		//     new Vector3(0, -halfSize.y, alignmentDepth * 0.5f),
		//     new Vector3(size.x, alignmentDepth, 0),
		//     Quaternion.Euler(90, 0, 0));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41 = __this->get_bottomTrans_28();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_42 = V_0;
		float L_43 = L_42.get_y_1();
		float L_44 = __this->get_alignmentDepth_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_45), (0.0f), ((-L_43)), ((float)il2cpp_codegen_multiply((float)L_44, (float)(0.5f))), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_46 = __this->get_address_of_size_5();
		float L_47 = L_46->get_x_0();
		float L_48 = __this->get_alignmentDepth_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_49), L_47, L_48, (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_50;
		L_50 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((90.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		ProjectionPlane_UpdateAlignmentQuad_m192D986263810A37D9C6B669402B4F838C616648(__this, L_41, L_45, L_49, L_50, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OffAxisCamera.ProjectionPlane::UpdateAlignmentQuad(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionPlane_UpdateAlignmentQuad_m192D986263810A37D9C6B669402B4F838C616648 (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale2, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation3, const RuntimeMethod* method)
{
	{
		// t.localPosition = pos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___pos1;
		NullCheck(L_0);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_0, L_1, /*hidden argument*/NULL);
		// t.localScale = scale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___scale2;
		NullCheck(L_2);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_2, L_3, /*hidden argument*/NULL);
		// t.localRotation = rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = ___t0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5 = ___rotation3;
		NullCheck(L_4);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OffAxisCamera.ProjectionPlane::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionPlane_Update_mE05F11A8D09F75B90DEEB2076E493D68D57A898B (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t G_B9_0 = 0;
	{
		// bottomLeft = BottomLeft;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = ProjectionPlane_get_BottomLeft_m6A70049FF38B914BBFC71DAF5755DAC0A0B8FBC7_inline(__this, /*hidden argument*/NULL);
		__this->set_bottomLeft_20(L_0);
		// bottomRight = BottomRight;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = ProjectionPlane_get_BottomRight_mC37A6F52D1B1C958A4793120F0F8CF90077A6314_inline(__this, /*hidden argument*/NULL);
		__this->set_bottomRight_19(L_1);
		// if (offAxisCameraRig.Screen != null)
		OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * L_2 = __this->get_offAxisCameraRig_4();
		NullCheck(L_2);
		OffAxisScreenProvider_t45C80864E577E00448ACE703B2FAED5A7A961BFA * L_3;
		L_3 = OffAxisCameraRig_get_Screen_m9061550EBDE66B1EDBA9ACFE7FA87B9A6E146BEF_inline(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		// size.x = offAxisCameraRig.Screen.Width;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_6 = __this->get_address_of_size_5();
		OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * L_7 = __this->get_offAxisCameraRig_4();
		NullCheck(L_7);
		OffAxisScreenProvider_t45C80864E577E00448ACE703B2FAED5A7A961BFA * L_8;
		L_8 = OffAxisCameraRig_get_Screen_m9061550EBDE66B1EDBA9ACFE7FA87B9A6E146BEF_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		float L_9;
		L_9 = VirtFuncInvoker0< float >::Invoke(5 /* System.Single OffAxisCamera.ScreenConfiguration.OffAxisScreenProvider::get_Width() */, L_8);
		L_6->set_x_0(L_9);
		// size.y = offAxisCameraRig.Screen.Height;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_10 = __this->get_address_of_size_5();
		OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * L_11 = __this->get_offAxisCameraRig_4();
		NullCheck(L_11);
		OffAxisScreenProvider_t45C80864E577E00448ACE703B2FAED5A7A961BFA * L_12;
		L_12 = OffAxisCameraRig_get_Screen_m9061550EBDE66B1EDBA9ACFE7FA87B9A6E146BEF_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		float L_13;
		L_13 = VirtFuncInvoker0< float >::Invoke(6 /* System.Single OffAxisCamera.ScreenConfiguration.OffAxisScreenProvider::get_Height() */, L_12);
		L_10->set_y_1(L_13);
		// lockAspectRatio = false;
		__this->set_lockAspectRatio_7((bool)0);
	}

IL_006d:
	{
		// if (Application.isPlaying)
		bool L_14;
		L_14 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		V_1 = L_14;
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_00a2;
		}
	}
	{
		// alignmentCube.SetActive(showAlignmentCube);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_alignmentCube_23();
		bool L_17 = __this->get_showAlignmentCube_9();
		NullCheck(L_16);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, L_17, /*hidden argument*/NULL);
		// if (alignmentCube.activeInHierarchy)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_alignmentCube_23();
		NullCheck(L_18);
		bool L_19;
		L_19 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_00a1;
		}
	}
	{
		// UpdateAlignmentCube();
		ProjectionPlane_UpdateAlignmentCube_m9F98F6AF503E9EE2FC54082C30E9E7EFDDCC160D(__this, /*hidden argument*/NULL);
	}

IL_00a1:
	{
	}

IL_00a2:
	{
		// if (lockAspectRatio && offAxisCameraRig.Screen != null)
		bool L_21 = __this->get_lockAspectRatio_7();
		if (!L_21)
		{
			goto IL_00bd;
		}
	}
	{
		OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * L_22 = __this->get_offAxisCameraRig_4();
		NullCheck(L_22);
		OffAxisScreenProvider_t45C80864E577E00448ACE703B2FAED5A7A961BFA * L_23;
		L_23 = OffAxisCameraRig_get_Screen_m9061550EBDE66B1EDBA9ACFE7FA87B9A6E146BEF_inline(L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B9_0 = ((int32_t)(L_24));
		goto IL_00be;
	}

IL_00bd:
	{
		G_B9_0 = 0;
	}

IL_00be:
	{
		V_3 = (bool)G_B9_0;
		bool L_25 = V_3;
		if (!L_25)
		{
			goto IL_0257;
		}
	}
	{
		// if (Math.Abs(aspectRatio.x - previousAspectRatio.x) > FloatTolerance)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_26 = __this->get_address_of_aspectRatio_6();
		float L_27 = L_26->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_28 = __this->get_address_of_previousAspectRatio_22();
		float L_29 = L_28->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_30;
		L_30 = fabsf(((float)il2cpp_codegen_subtract((float)L_27, (float)L_29)));
		V_4 = (bool)((((float)L_30) > ((float)(9.99999975E-05f)))? 1 : 0);
		bool L_31 = V_4;
		if (!L_31)
		{
			goto IL_0135;
		}
	}
	{
		// size.y = size.x / aspectRatio.x * aspectRatio.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_32 = __this->get_address_of_size_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_33 = __this->get_address_of_size_5();
		float L_34 = L_33->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_35 = __this->get_address_of_aspectRatio_6();
		float L_36 = L_35->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_37 = __this->get_address_of_aspectRatio_6();
		float L_38 = L_37->get_y_1();
		L_32->set_y_1(((float)il2cpp_codegen_multiply((float)((float)((float)L_34/(float)L_36)), (float)L_38)));
		// previousAspectRatio.y = aspectRatio.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_39 = __this->get_address_of_previousAspectRatio_22();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_40 = __this->get_address_of_aspectRatio_6();
		float L_41 = L_40->get_y_1();
		L_39->set_y_1(L_41);
	}

IL_0135:
	{
		// if (Math.Abs(aspectRatio.y - previousAspectRatio.y) > FloatTolerance)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_42 = __this->get_address_of_aspectRatio_6();
		float L_43 = L_42->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_44 = __this->get_address_of_previousAspectRatio_22();
		float L_45 = L_44->get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_46;
		L_46 = fabsf(((float)il2cpp_codegen_subtract((float)L_43, (float)L_45)));
		V_5 = (bool)((((float)L_46) > ((float)(9.99999975E-05f)))? 1 : 0);
		bool L_47 = V_5;
		if (!L_47)
		{
			goto IL_018e;
		}
	}
	{
		// size.x = size.y / aspectRatio.y * aspectRatio.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_48 = __this->get_address_of_size_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_49 = __this->get_address_of_size_5();
		float L_50 = L_49->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_51 = __this->get_address_of_aspectRatio_6();
		float L_52 = L_51->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_53 = __this->get_address_of_aspectRatio_6();
		float L_54 = L_53->get_x_0();
		L_48->set_x_0(((float)il2cpp_codegen_multiply((float)((float)((float)L_50/(float)L_52)), (float)L_54)));
	}

IL_018e:
	{
		// if (Math.Abs(size.x - previousSize.x) > FloatTolerance)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_55 = __this->get_address_of_size_5();
		float L_56 = L_55->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_57 = __this->get_address_of_previousSize_21();
		float L_58 = L_57->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_59;
		L_59 = fabsf(((float)il2cpp_codegen_subtract((float)L_56, (float)L_58)));
		V_6 = (bool)((((float)L_59) > ((float)(9.99999975E-05f)))? 1 : 0);
		bool L_60 = V_6;
		if (!L_60)
		{
			goto IL_01fd;
		}
	}
	{
		// size.y = size.x / aspectRatio.x * aspectRatio.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_61 = __this->get_address_of_size_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_62 = __this->get_address_of_size_5();
		float L_63 = L_62->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_64 = __this->get_address_of_aspectRatio_6();
		float L_65 = L_64->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_66 = __this->get_address_of_aspectRatio_6();
		float L_67 = L_66->get_y_1();
		L_61->set_y_1(((float)il2cpp_codegen_multiply((float)((float)((float)L_63/(float)L_65)), (float)L_67)));
		// previousSize.y = size.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_68 = __this->get_address_of_previousSize_21();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_69 = __this->get_address_of_size_5();
		float L_70 = L_69->get_y_1();
		L_68->set_y_1(L_70);
	}

IL_01fd:
	{
		// if (Math.Abs(size.y - previousSize.y) > FloatTolerance)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_71 = __this->get_address_of_size_5();
		float L_72 = L_71->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_73 = __this->get_address_of_previousSize_21();
		float L_74 = L_73->get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_75;
		L_75 = fabsf(((float)il2cpp_codegen_subtract((float)L_72, (float)L_74)));
		V_7 = (bool)((((float)L_75) > ((float)(9.99999975E-05f)))? 1 : 0);
		bool L_76 = V_7;
		if (!L_76)
		{
			goto IL_0256;
		}
	}
	{
		// size.x = size.y / aspectRatio.y * aspectRatio.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_77 = __this->get_address_of_size_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_78 = __this->get_address_of_size_5();
		float L_79 = L_78->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_80 = __this->get_address_of_aspectRatio_6();
		float L_81 = L_80->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_82 = __this->get_address_of_aspectRatio_6();
		float L_83 = L_82->get_x_0();
		L_77->set_x_0(((float)il2cpp_codegen_multiply((float)((float)((float)L_79/(float)L_81)), (float)L_83)));
	}

IL_0256:
	{
	}

IL_0257:
	{
		// size.x = Mathf.Max(0.05f, size.x);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_84 = __this->get_address_of_size_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_85 = __this->get_address_of_size_5();
		float L_86 = L_85->get_x_0();
		float L_87;
		L_87 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((0.0500000007f), L_86, /*hidden argument*/NULL);
		L_84->set_x_0(L_87);
		// size.y = Mathf.Max(0.05f, size.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_88 = __this->get_address_of_size_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_89 = __this->get_address_of_size_5();
		float L_90 = L_89->get_y_1();
		float L_91;
		L_91 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((0.0500000007f), L_90, /*hidden argument*/NULL);
		L_88->set_y_1(L_91);
		// aspectRatio.x = Mathf.Max(1, aspectRatio.x);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_92 = __this->get_address_of_aspectRatio_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_93 = __this->get_address_of_aspectRatio_6();
		float L_94 = L_93->get_x_0();
		float L_95;
		L_95 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((1.0f), L_94, /*hidden argument*/NULL);
		L_92->set_x_0(L_95);
		// aspectRatio.y = Mathf.Max(1, aspectRatio.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_96 = __this->get_address_of_aspectRatio_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_97 = __this->get_address_of_aspectRatio_6();
		float L_98 = L_97->get_y_1();
		float L_99;
		L_99 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((1.0f), L_98, /*hidden argument*/NULL);
		L_96->set_y_1(L_99);
		// previousSize = size;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_100 = __this->get_size_5();
		__this->set_previousSize_21(L_100);
		// previousAspectRatio = aspectRatio;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_101 = __this->get_aspectRatio_6();
		__this->set_previousAspectRatio_22(L_101);
		// BottomLeft = transform.TransformPoint(new Vector3(-size.x, -size.y) * 0.5f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_102;
		L_102 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_103 = __this->get_address_of_size_5();
		float L_104 = L_103->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_105 = __this->get_address_of_size_5();
		float L_106 = L_105->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_107;
		memset((&L_107), 0, sizeof(L_107));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_107), ((-L_104)), ((-L_106)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_108;
		L_108 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_107, (0.5f), /*hidden argument*/NULL);
		NullCheck(L_102);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_109;
		L_109 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_102, L_108, /*hidden argument*/NULL);
		ProjectionPlane_set_BottomLeft_mAB5C2B87D1D4142137B87B5A03D6ABD5A4917DE9_inline(__this, L_109, /*hidden argument*/NULL);
		// BottomRight = transform.TransformPoint(new Vector3(size.x, -size.y) * 0.5f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_110;
		L_110 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_111 = __this->get_address_of_size_5();
		float L_112 = L_111->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_113 = __this->get_address_of_size_5();
		float L_114 = L_113->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_115;
		memset((&L_115), 0, sizeof(L_115));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_115), L_112, ((-L_114)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_116;
		L_116 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_115, (0.5f), /*hidden argument*/NULL);
		NullCheck(L_110);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_117;
		L_117 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_110, L_116, /*hidden argument*/NULL);
		ProjectionPlane_set_BottomRight_mEE96908203BD800421E2456E70C0D4D5E840C926_inline(__this, L_117, /*hidden argument*/NULL);
		// TopLeft = transform.TransformPoint(new Vector3(-size.x, size.y) * 0.5f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_118;
		L_118 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_119 = __this->get_address_of_size_5();
		float L_120 = L_119->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_121 = __this->get_address_of_size_5();
		float L_122 = L_121->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_123;
		memset((&L_123), 0, sizeof(L_123));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_123), ((-L_120)), L_122, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_124;
		L_124 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_123, (0.5f), /*hidden argument*/NULL);
		NullCheck(L_118);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_125;
		L_125 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_118, L_124, /*hidden argument*/NULL);
		ProjectionPlane_set_TopLeft_m2EA1C3CE97DAB1776E161DFBE7C29F1C3D743649_inline(__this, L_125, /*hidden argument*/NULL);
		// TopRight = transform.TransformPoint(new Vector3(size.x, size.y) * 0.5f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_126;
		L_126 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_127 = __this->get_address_of_size_5();
		float L_128 = L_127->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_129 = __this->get_address_of_size_5();
		float L_130 = L_129->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_131;
		memset((&L_131), 0, sizeof(L_131));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_131), L_128, L_130, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_132;
		L_132 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_131, (0.5f), /*hidden argument*/NULL);
		NullCheck(L_126);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_133;
		L_133 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_126, L_132, /*hidden argument*/NULL);
		ProjectionPlane_set_TopRight_m2F21831B56E4EC9BCBCEEBB345A0635906CF504E_inline(__this, L_133, /*hidden argument*/NULL);
		// DirRight = (BottomRight - BottomLeft).normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_134;
		L_134 = ProjectionPlane_get_BottomRight_mC37A6F52D1B1C958A4793120F0F8CF90077A6314_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_135;
		L_135 = ProjectionPlane_get_BottomLeft_m6A70049FF38B914BBFC71DAF5755DAC0A0B8FBC7_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_136;
		L_136 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_134, L_135, /*hidden argument*/NULL);
		V_8 = L_136;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_137;
		L_137 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_8), /*hidden argument*/NULL);
		ProjectionPlane_set_DirRight_m0491832022BB394EA6038EA5144A95A6C8B76A13_inline(__this, L_137, /*hidden argument*/NULL);
		// DirUp = (TopLeft - BottomLeft).normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_138;
		L_138 = ProjectionPlane_get_TopLeft_m19409E7F46AF35379401BDCB2EE4D4EAD75FF71E_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_139;
		L_139 = ProjectionPlane_get_BottomLeft_m6A70049FF38B914BBFC71DAF5755DAC0A0B8FBC7_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_140;
		L_140 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_138, L_139, /*hidden argument*/NULL);
		V_8 = L_140;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_141;
		L_141 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_8), /*hidden argument*/NULL);
		ProjectionPlane_set_DirUp_m52B4FF22EF55607B31E7F85FB48404F304A44466_inline(__this, L_141, /*hidden argument*/NULL);
		// DirNormal = -Vector3.Cross(DirRight, DirUp).normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_142;
		L_142 = ProjectionPlane_get_DirRight_mE96EAD340C9B86251669A7BDCA2112CF51917F0A_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_143;
		L_143 = ProjectionPlane_get_DirUp_m198349E14F1D476500DDD359BF1507F28CA88E4E_inline(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_144;
		L_144 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(L_142, L_143, /*hidden argument*/NULL);
		V_8 = L_144;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_145;
		L_145 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_8), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_146;
		L_146 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_145, /*hidden argument*/NULL);
		ProjectionPlane_set_DirNormal_m0747C3FB73D9C6C4B26C3E5AA53611A9CBA3A5C6_inline(__this, L_146, /*hidden argument*/NULL);
		// m = Matrix4x4.zero;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_147;
		L_147 = Matrix4x4_get_zero_m653FAA37D26B00352B992A4B87CE534251FB91CC(/*hidden argument*/NULL);
		__this->set_m_29(L_147);
		// m[0, 0] = DirRight.x;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_148 = __this->get_address_of_m_29();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_149;
		L_149 = ProjectionPlane_get_DirRight_mE96EAD340C9B86251669A7BDCA2112CF51917F0A_inline(__this, /*hidden argument*/NULL);
		float L_150 = L_149.get_x_2();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_148, 0, 0, L_150, /*hidden argument*/NULL);
		// m[0, 1] = DirRight.y;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_151 = __this->get_address_of_m_29();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_152;
		L_152 = ProjectionPlane_get_DirRight_mE96EAD340C9B86251669A7BDCA2112CF51917F0A_inline(__this, /*hidden argument*/NULL);
		float L_153 = L_152.get_y_3();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_151, 0, 1, L_153, /*hidden argument*/NULL);
		// m[0, 2] = DirRight.z;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_154 = __this->get_address_of_m_29();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_155;
		L_155 = ProjectionPlane_get_DirRight_mE96EAD340C9B86251669A7BDCA2112CF51917F0A_inline(__this, /*hidden argument*/NULL);
		float L_156 = L_155.get_z_4();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_154, 0, 2, L_156, /*hidden argument*/NULL);
		// m[1, 0] = DirUp.x;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_157 = __this->get_address_of_m_29();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_158;
		L_158 = ProjectionPlane_get_DirUp_m198349E14F1D476500DDD359BF1507F28CA88E4E_inline(__this, /*hidden argument*/NULL);
		float L_159 = L_158.get_x_2();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_157, 1, 0, L_159, /*hidden argument*/NULL);
		// m[1, 1] = DirUp.y;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_160 = __this->get_address_of_m_29();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_161;
		L_161 = ProjectionPlane_get_DirUp_m198349E14F1D476500DDD359BF1507F28CA88E4E_inline(__this, /*hidden argument*/NULL);
		float L_162 = L_161.get_y_3();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_160, 1, 1, L_162, /*hidden argument*/NULL);
		// m[1, 2] = DirUp.z;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_163 = __this->get_address_of_m_29();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_164;
		L_164 = ProjectionPlane_get_DirUp_m198349E14F1D476500DDD359BF1507F28CA88E4E_inline(__this, /*hidden argument*/NULL);
		float L_165 = L_164.get_z_4();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_163, 1, 2, L_165, /*hidden argument*/NULL);
		// m[2, 0] = DirNormal.x;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_166 = __this->get_address_of_m_29();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_167;
		L_167 = ProjectionPlane_get_DirNormal_mCD89509B1BEDECFB5ECE45AFFDDB052F8C022F35_inline(__this, /*hidden argument*/NULL);
		float L_168 = L_167.get_x_2();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_166, 2, 0, L_168, /*hidden argument*/NULL);
		// m[2, 1] = DirNormal.y;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_169 = __this->get_address_of_m_29();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_170;
		L_170 = ProjectionPlane_get_DirNormal_mCD89509B1BEDECFB5ECE45AFFDDB052F8C022F35_inline(__this, /*hidden argument*/NULL);
		float L_171 = L_170.get_y_3();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_169, 2, 1, L_171, /*hidden argument*/NULL);
		// m[2, 2] = DirNormal.z;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_172 = __this->get_address_of_m_29();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_173;
		L_173 = ProjectionPlane_get_DirNormal_mCD89509B1BEDECFB5ECE45AFFDDB052F8C022F35_inline(__this, /*hidden argument*/NULL);
		float L_174 = L_173.get_z_4();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_172, 2, 2, L_174, /*hidden argument*/NULL);
		// m[3, 3] = 1.0f;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * L_175 = __this->get_address_of_m_29();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)L_175, 3, 3, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OffAxisCamera.ProjectionPlane::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionPlane_OnApplicationQuit_m73E114573941685ADED26B55B9D63E3AF9FAA19C (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// transform.parent = null;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_0, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/NULL);
		// if (Application.isPlaying && alignmentCube != null)
		bool L_1;
		L_1 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_alignmentCube_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 0;
	}

IL_0024:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// DestroyImmediate(alignmentCube);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_alignmentCube_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_5, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void OffAxisCamera.ProjectionPlane::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionPlane__ctor_m87CD98437DF15635AA4C79F2E61218F687818787 (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] public Vector2 size = new Vector2(8, 4.5f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (8.0f), (4.5f), /*hidden argument*/NULL);
		__this->set_size_5(L_0);
		// [SerializeField] Vector2 aspectRatio = new Vector2(16, 9);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_1), (16.0f), (9.0f), /*hidden argument*/NULL);
		__this->set_aspectRatio_6(L_1);
		// [SerializeField] bool lockAspectRatio = true;
		__this->set_lockAspectRatio_7((bool)1);
		// [SerializeField] bool drawGizmo = true;
		__this->set_drawGizmo_8((bool)1);
		// [SerializeField] bool showAlignmentCube = false;
		__this->set_showAlignmentCube_9((bool)0);
		// [SerializeField] float alignmentDepth = 1;
		__this->set_alignmentDepth_10((1.0f));
		// Vector2 previousSize = new Vector2(8, 4.5f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), (8.0f), (4.5f), /*hidden argument*/NULL);
		__this->set_previousSize_21(L_2);
		// Vector2 previousAspectRatio = new Vector2(16, 9);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_3), (16.0f), (9.0f), /*hidden argument*/NULL);
		__this->set_previousAspectRatio_22(L_3);
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
// System.Void OffAxisCamera.ProjectionPlaneCamera::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionPlaneCamera_Awake_m68032C5C42E6B92E18419078FE6E64034CA33B6C (ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cam = GetComponent<Camera>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		__this->set_cam_22(L_0);
		// }
		return;
	}
}
// System.Void OffAxisCamera.ProjectionPlaneCamera::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionPlaneCamera_LateUpdate_m16AD2FAC82278D448B56F8F81B99D20029FA655B (ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	{
		// if(projectionScreen != null)
		ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * L_0 = __this->get_projectionScreen_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0258;
		}
	}
	{
		// PreventIllegalFrustrums();
		ProjectionPlaneCamera_PreventIllegalFrustrums_m9FFAE84B290F7E3EB5ADBF026D5B5DD38973FBBC(__this, /*hidden argument*/NULL);
		// Vector3 pa = projectionScreen.BottomLeft;
		ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * L_3 = __this->get_projectionScreen_4();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = ProjectionPlane_get_BottomLeft_m6A70049FF38B914BBFC71DAF5755DAC0A0B8FBC7_inline(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// Vector3 pb = projectionScreen.BottomRight;
		ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * L_5 = __this->get_projectionScreen_4();
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = ProjectionPlane_get_BottomRight_mC37A6F52D1B1C958A4793120F0F8CF90077A6314_inline(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		// Vector3 pc = projectionScreen.TopLeft;
		ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * L_7 = __this->get_projectionScreen_4();
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = ProjectionPlane_get_TopLeft_m19409E7F46AF35379401BDCB2EE4D4EAD75FF71E_inline(L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		// Vector3 pd = projectionScreen.TopRight;
		ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * L_9 = __this->get_projectionScreen_4();
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = ProjectionPlane_get_TopRight_m2B2BDBC721AB85FB378CFF1F7D372802B920E1D6_inline(L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		// Vector3 vr = projectionScreen.DirRight;
		ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * L_11 = __this->get_projectionScreen_4();
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = ProjectionPlane_get_DirRight_mE96EAD340C9B86251669A7BDCA2112CF51917F0A_inline(L_11, /*hidden argument*/NULL);
		V_5 = L_12;
		// Vector3 vu = projectionScreen.DirUp;
		ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * L_13 = __this->get_projectionScreen_4();
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = ProjectionPlane_get_DirUp_m198349E14F1D476500DDD359BF1507F28CA88E4E_inline(L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		// Vector3 vn = projectionScreen.DirNormal;
		ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * L_15 = __this->get_projectionScreen_4();
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = ProjectionPlane_get_DirNormal_mCD89509B1BEDECFB5ECE45AFFDDB052F8C022F35_inline(L_15, /*hidden argument*/NULL);
		V_7 = L_16;
		// Matrix4x4 M = projectionScreen.M;
		ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * L_17 = __this->get_projectionScreen_4();
		NullCheck(L_17);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_18;
		L_18 = ProjectionPlane_get_M_mD690653D2E6E7CEA9EAA48B2B3E62DD079CE1AFB_inline(L_17, /*hidden argument*/NULL);
		V_8 = L_18;
		// eyePos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		__this->set_eyePos_10(L_20);
		// va = pa - eyePos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = __this->get_eyePos_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_21, L_22, /*hidden argument*/NULL);
		__this->set_va_17(L_23);
		// vb = pb - eyePos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = __this->get_eyePos_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_24, L_25, /*hidden argument*/NULL);
		__this->set_vb_18(L_26);
		// vc = pc - eyePos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = __this->get_eyePos_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_27, L_28, /*hidden argument*/NULL);
		__this->set_vc_19(L_29);
		// vd = pd - eyePos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = __this->get_eyePos_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_30, L_31, /*hidden argument*/NULL);
		__this->set_vd_20(L_32);
		// viewDir = eyePos + va + vb + vc + vd;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = __this->get_eyePos_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = __this->get_va_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_33, L_34, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = __this->get_vb_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_35, L_36, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = __this->get_vc_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_37, L_38, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = __this->get_vd_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_39, L_40, /*hidden argument*/NULL);
		__this->set_viewDir_21(L_41);
		// float d = -Vector3.Dot(va, vn);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42 = __this->get_va_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = V_7;
		float L_44;
		L_44 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_42, L_43, /*hidden argument*/NULL);
		V_9 = ((-L_44));
		// if (clampNearPlane)
		bool L_45 = __this->get_clampNearPlane_5();
		V_14 = L_45;
		bool L_46 = V_14;
		if (!L_46)
		{
			goto IL_013f;
		}
	}
	{
		// cam.nearClipPlane = d;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_47 = __this->get_cam_22();
		float L_48 = V_9;
		NullCheck(L_47);
		Camera_set_nearClipPlane_m4EA1D92F6E1D17E423EC036561E115F434DC2263(L_47, L_48, /*hidden argument*/NULL);
	}

IL_013f:
	{
		// n = cam.nearClipPlane;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_49 = __this->get_cam_22();
		NullCheck(L_49);
		float L_50;
		L_50 = Camera_get_nearClipPlane_m75A7270074A35D95B05F25EBF8CE392ECA6517DC(L_49, /*hidden argument*/NULL);
		__this->set_n_11(L_50);
		// f = cam.farClipPlane;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_51 = __this->get_cam_22();
		NullCheck(L_51);
		float L_52;
		L_52 = Camera_get_farClipPlane_m0FA1B9E2E815BECE2EA40023302EB942B52D9596(L_51, /*hidden argument*/NULL);
		__this->set_f_12(L_52);
		// float nearOverDist = n / d;
		float L_53 = __this->get_n_11();
		float L_54 = V_9;
		V_10 = ((float)((float)L_53/(float)L_54));
		// l = Vector3.Dot(vr, va) * nearOverDist;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56 = __this->get_va_17();
		float L_57;
		L_57 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_55, L_56, /*hidden argument*/NULL);
		float L_58 = V_10;
		__this->set_l_13(((float)il2cpp_codegen_multiply((float)L_57, (float)L_58)));
		// r = Vector3.Dot(vr, vb) * nearOverDist;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60 = __this->get_vb_18();
		float L_61;
		L_61 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_59, L_60, /*hidden argument*/NULL);
		float L_62 = V_10;
		__this->set_r_14(((float)il2cpp_codegen_multiply((float)L_61, (float)L_62)));
		// b = Vector3.Dot(vu, va) * nearOverDist;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64 = __this->get_va_17();
		float L_65;
		L_65 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_63, L_64, /*hidden argument*/NULL);
		float L_66 = V_10;
		__this->set_b_15(((float)il2cpp_codegen_multiply((float)L_65, (float)L_66)));
		// t = Vector3.Dot(vu, vc) * nearOverDist;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68 = __this->get_vc_19();
		float L_69;
		L_69 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_67, L_68, /*hidden argument*/NULL);
		float L_70 = V_10;
		__this->set_t_16(((float)il2cpp_codegen_multiply((float)L_69, (float)L_70)));
		// Matrix4x4 P = Matrix4x4.Frustum(l, r, b, t, n, f); // create the projection matrix
		float L_71 = __this->get_l_13();
		float L_72 = __this->get_r_14();
		float L_73 = __this->get_b_15();
		float L_74 = __this->get_t_16();
		float L_75 = __this->get_n_11();
		float L_76 = __this->get_f_12();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_77;
		L_77 = Matrix4x4_Frustum_mA62E93F263029C5E0CF4C1DD2CA2EE2428A6F2C2(L_71, L_72, L_73, L_74, L_75, L_76, /*hidden argument*/NULL);
		V_11 = L_77;
		// Matrix4x4 T = Matrix4x4.Translate(-eyePos);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78 = __this->get_eyePos_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79;
		L_79 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_78, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_80;
		L_80 = Matrix4x4_Translate_m48688727FA7BBA42DF2108C1A9395FC23431AC9A(L_79, /*hidden argument*/NULL);
		V_12 = L_80;
		// Matrix4x4 R = Matrix4x4.Rotate(Quaternion.Inverse(transform.rotation) * projectionScreen.transform.rotation);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_81;
		L_81 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_81);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_82;
		L_82 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_81, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_83;
		L_83 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_82, /*hidden argument*/NULL);
		ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * L_84 = __this->get_projectionScreen_4();
		NullCheck(L_84);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_85;
		L_85 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_84, /*hidden argument*/NULL);
		NullCheck(L_85);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_86;
		L_86 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_85, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_87;
		L_87 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_83, L_86, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_88;
		L_88 = Matrix4x4_Rotate_m783F8A008EC7D0C3C02A5718002491F017F21E0E(L_87, /*hidden argument*/NULL);
		V_13 = L_88;
		// cam.worldToCameraMatrix = M * R  * T;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_89 = __this->get_cam_22();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_90 = V_8;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_91 = V_13;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_92;
		L_92 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_90, L_91, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_93 = V_12;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_94;
		L_94 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_92, L_93, /*hidden argument*/NULL);
		NullCheck(L_89);
		Camera_set_worldToCameraMatrix_mD9E982CC4F356AC310C5B3145FC59FD73C420BE3(L_89, L_94, /*hidden argument*/NULL);
		// cam.projectionMatrix = P;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_95 = __this->get_cam_22();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_96 = V_11;
		NullCheck(L_95);
		Camera_set_projectionMatrix_m3645AC49FC94726BDA07191C80299D8361D5C328(L_95, L_96, /*hidden argument*/NULL);
	}

IL_0258:
	{
		// }
		return;
	}
}
// System.Void OffAxisCamera.ProjectionPlaneCamera::PreventIllegalFrustrums()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionPlaneCamera_PreventIllegalFrustrums_m9FFAE84B290F7E3EB5ADBF026D5B5DD38973FBBC (ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if(this.transform.localPosition.z <= 0)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_z_4();
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		// Vector3 pos = this.transform.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// pos.z = MinZThreshold;
		(&V_1)->set_z_4((0.00100000005f));
		// this.transform.localPosition = pos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_1;
		NullCheck(L_6);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void OffAxisCamera.ProjectionPlaneCamera::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionPlaneCamera_OnDrawGizmos_m6438A2AF6866B891C3CCA61683664C69A1416485 (ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (projectionScreen == null) return;
		ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * L_0 = __this->get_projectionScreen_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// if (projectionScreen == null) return;
		goto IL_00c6;
	}

IL_0016:
	{
		// if (drawGizmos)
		bool L_3 = __this->get_drawGizmos_6();
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_00c6;
		}
	}
	{
		// Vector3 pos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		// Gizmos.color = Color.green;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		L_7 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_7, /*hidden argument*/NULL);
		// Gizmos.DrawLine(pos, pos + va);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_va_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_10, /*hidden argument*/NULL);
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_8, L_11, /*hidden argument*/NULL);
		// Gizmos.DrawLine(pos, pos + vb);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = __this->get_vb_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_13, L_14, /*hidden argument*/NULL);
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_12, L_15, /*hidden argument*/NULL);
		// Gizmos.DrawLine(pos, pos + vc);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = __this->get_vc_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_17, L_18, /*hidden argument*/NULL);
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_16, L_19, /*hidden argument*/NULL);
		// Gizmos.DrawLine(pos, pos + vd);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = __this->get_vd_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_21, L_22, /*hidden argument*/NULL);
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_20, L_23, /*hidden argument*/NULL);
		// Vector3 pa = projectionScreen.BottomLeft;
		ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * L_24 = __this->get_projectionScreen_4();
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = ProjectionPlane_get_BottomLeft_m6A70049FF38B914BBFC71DAF5755DAC0A0B8FBC7_inline(L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		// Vector3 vr = projectionScreen.DirRight;
		ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * L_26 = __this->get_projectionScreen_4();
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = ProjectionPlane_get_DirRight_mE96EAD340C9B86251669A7BDCA2112CF51917F0A_inline(L_26, /*hidden argument*/NULL);
		V_4 = L_27;
		// Vector3 vu = projectionScreen.DirUp;
		ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * L_28 = __this->get_projectionScreen_4();
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = ProjectionPlane_get_DirUp_m198349E14F1D476500DDD359BF1507F28CA88E4E_inline(L_28, /*hidden argument*/NULL);
		V_5 = L_29;
		// Gizmos.color = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30;
		L_30 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_30, /*hidden argument*/NULL);
		// Gizmos.DrawLine(pos, viewDir);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = __this->get_viewDir_21();
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_31, L_32, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		// }
		return;
	}
}
// System.Void OffAxisCamera.ProjectionPlaneCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectionPlaneCamera__ctor_mF33FD7AB7A5602AB6CE5FB435B4950CB8D4FABDB (ProjectionPlaneCamera_t3C29E129A10046975A4BE5E084DFC45DC33412AB * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] bool clampNearPlane = true;
		__this->set_clampNearPlane_5((bool)1);
		// [SerializeField] bool drawGizmos = true;
		__this->set_drawGizmos_6((bool)1);
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
// System.Void OffAxisCamera.SetAsMainCamera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetAsMainCamera_Start_m1DD85D53134731C74DD4B7965CC800C1652DB14F (SetAsMainCamera_t3DBD3873C45CFEFFCBCE8CA2E6441460648DF830 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * V_0 = NULL;
	{
		// Camera cam = GetComponent<Camera>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		V_0 = L_0;
		// cam.enabled = false;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = V_0;
		NullCheck(L_1);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)0, /*hidden argument*/NULL);
		// cam.enabled = true;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = V_0;
		NullCheck(L_2);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OffAxisCamera.SetAsMainCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetAsMainCamera__ctor_m7CC455E9BE7BBF2ECAC4C73C76313F7FDB0D135E (SetAsMainCamera_t3DBD3873C45CFEFFCBCE8CA2E6441460648DF830 * __this, const RuntimeMethod* method)
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
// System.Void OffAxisCamera.TrackingReceiver::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingReceiver_OnEnable_m04404734FC6B44CAE2CCCB93CA6530EDD765658E (TrackingReceiver_t9F4F5BA0AFA705C2ADFE3850A4ED2B143177F689 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisOffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF_m386F5548E3C41F005177D2B946AC06247C6B7600_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingReceiver_UpdateCameraPosition_m351E3D984C48963B2D2D140FFE17863D59BD99A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// offAxisCameraRig = GetComponentInParent<OffAxisCameraRig>();
		OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * L_0;
		L_0 = Component_GetComponentInParent_TisOffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF_m386F5548E3C41F005177D2B946AC06247C6B7600(__this, /*hidden argument*/Component_GetComponentInParent_TisOffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF_m386F5548E3C41F005177D2B946AC06247C6B7600_RuntimeMethod_var);
		__this->set_offAxisCameraRig_6(L_0);
		// offAxisCameraRig.CameraLocationUpdated += UpdateCameraPosition;
		OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * L_1 = __this->get_offAxisCameraRig_6();
		UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * L_2 = (UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D *)il2cpp_codegen_object_new(UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D_il2cpp_TypeInfo_var);
		UpdateCameraLocationEvent__ctor_m68D4CFEF533BC38755AAF4A94FACC448FFF06198(L_2, __this, (intptr_t)((intptr_t)TrackingReceiver_UpdateCameraPosition_m351E3D984C48963B2D2D140FFE17863D59BD99A3_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		OffAxisCameraRig_add_CameraLocationUpdated_m37DA34A813EF3AF4BFD262F5E86EB8CB028876F2(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OffAxisCamera.TrackingReceiver::UpdateCameraPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingReceiver_UpdateCameraPosition_m351E3D984C48963B2D2D140FFE17863D59BD99A3 (TrackingReceiver_t9F4F5BA0AFA705C2ADFE3850A4ED2B143177F689 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___trackedPosition0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (debugOverride) return;
		bool L_0 = __this->get_debugOverride_4();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// if (debugOverride) return;
		goto IL_0042;
	}

IL_000d:
	{
		// if (offAxisCameraRig.TrackingDisabled) return;
		OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * L_2 = __this->get_offAxisCameraRig_6();
		NullCheck(L_2);
		bool L_3;
		L_3 = OffAxisCameraRig_get_TrackingDisabled_m554641DDAE1061E28B68370EBA2649C8FCCF7740_inline(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		// if (offAxisCameraRig.TrackingDisabled) return;
		goto IL_0042;
	}

IL_001e:
	{
		// trackedPosition.z = Mathf.Max(trackedPosition.z, 0.00001f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___trackedPosition0;
		float L_6 = L_5.get_z_4();
		float L_7;
		L_7 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_6, (9.99999975E-06f), /*hidden argument*/NULL);
		(&___trackedPosition0)->set_z_4(L_7);
		// this.transform.localPosition = trackedPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___trackedPosition0;
		NullCheck(L_8);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void OffAxisCamera.TrackingReceiver::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingReceiver_OnDisable_m2CAE58588117ED22EB9805AE4F0631C97BA36238 (TrackingReceiver_t9F4F5BA0AFA705C2ADFE3850A4ED2B143177F689 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingReceiver_UpdateCameraPosition_m351E3D984C48963B2D2D140FFE17863D59BD99A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// offAxisCameraRig.CameraLocationUpdated -= UpdateCameraPosition;
		OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * L_0 = __this->get_offAxisCameraRig_6();
		UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * L_1 = (UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D *)il2cpp_codegen_object_new(UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D_il2cpp_TypeInfo_var);
		UpdateCameraLocationEvent__ctor_m68D4CFEF533BC38755AAF4A94FACC448FFF06198(L_1, __this, (intptr_t)((intptr_t)TrackingReceiver_UpdateCameraPosition_m351E3D984C48963B2D2D140FFE17863D59BD99A3_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		OffAxisCameraRig_remove_CameraLocationUpdated_mBA927732010A49DECA971CEEC5BCD2E7D621CB73(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OffAxisCamera.TrackingReceiver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingReceiver_Start_m7758F558AF8F37376E1019D495615F7620844F16 (TrackingReceiver_t9F4F5BA0AFA705C2ADFE3850A4ED2B143177F689 * __this, const RuntimeMethod* method)
{
	{
		// initialPosition = this.transform.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_0, /*hidden argument*/NULL);
		__this->set_initialPosition_5(L_1);
		// }
		return;
	}
}
// System.Void OffAxisCamera.TrackingReceiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingReceiver__ctor_mEAB084479ED3C0A87EF5C3BAFEACB3E9E5171887 (TrackingReceiver_t9F4F5BA0AFA705C2ADFE3850A4ED2B143177F689 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] bool debugOverride = false;
		__this->set_debugOverride_4((bool)0);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D (UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___position0);

}
// System.Void OffAxisCamera.OffAxisCameraRig/UpdateCameraLocationEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateCameraLocationEvent__ctor_m68D4CFEF533BC38755AAF4A94FACC448FFF06198 (UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void OffAxisCamera.OffAxisCameraRig/UpdateCameraLocationEvent::Invoke(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateCameraLocationEvent_Invoke_mFB4D78E478CAB8F8AF37A2817CABD4824518AD5A (UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___position0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, targetThis, ___position0);
					else
						GenericVirtActionInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, targetThis, ___position0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___position0);
					else
						VirtActionInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___position0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___position0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult OffAxisCamera.OffAxisCameraRig/UpdateCameraLocationEvent::BeginInvoke(UnityEngine.Vector3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdateCameraLocationEvent_BeginInvoke_mAA653F8FCF035099E997D2067AE493745839D0A3 (UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___position0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void OffAxisCamera.OffAxisCameraRig/UpdateCameraLocationEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateCameraLocationEvent_EndInvoke_m3EB22EFD593BED1628ECC1A25709736EA1C20E0B (UpdateCameraLocationEvent_t05740E9A973F6BDF69E3665F20ACE5B2CD83312D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ProjectionPlane_get_BottomLeft_m6A70049FF38B914BBFC71DAF5755DAC0A0B8FBC7_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method)
{
	{
		// internal Vector3 BottomLeft { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CBottomLeftU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ProjectionPlane_get_BottomRight_mC37A6F52D1B1C958A4793120F0F8CF90077A6314_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method)
{
	{
		// internal Vector3 BottomRight { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CBottomRightU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ProjectionPlane_get_TopLeft_m19409E7F46AF35379401BDCB2EE4D4EAD75FF71E_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method)
{
	{
		// internal Vector3 TopLeft { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CTopLeftU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ProjectionPlane_get_TopRight_m2B2BDBC721AB85FB378CFF1F7D372802B920E1D6_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method)
{
	{
		// internal Vector3 TopRight { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CTopRightU3Ek__BackingField_15();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ProjectionPlane_get_DirNormal_mCD89509B1BEDECFB5ECE45AFFDDB052F8C022F35_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method)
{
	{
		// internal Vector3 DirNormal { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CDirNormalU3Ek__BackingField_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OffAxisScreenProvider_t45C80864E577E00448ACE703B2FAED5A7A961BFA * OffAxisCameraRig_get_Screen_m9061550EBDE66B1EDBA9ACFE7FA87B9A6E146BEF_inline (OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * __this, const RuntimeMethod* method)
{
	{
		// get => screen;
		OffAxisScreenProvider_t45C80864E577E00448ACE703B2FAED5A7A961BFA * L_0 = __this->get_screen_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProjectionPlane_set_BottomLeft_mAB5C2B87D1D4142137B87B5A03D6ABD5A4917DE9_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// internal Vector3 BottomLeft { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CBottomLeftU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProjectionPlane_set_BottomRight_mEE96908203BD800421E2456E70C0D4D5E840C926_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// internal Vector3 BottomRight { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CBottomRightU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProjectionPlane_set_TopLeft_m2EA1C3CE97DAB1776E161DFBE7C29F1C3D743649_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// internal Vector3 TopLeft { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CTopLeftU3Ek__BackingField_14(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProjectionPlane_set_TopRight_m2F21831B56E4EC9BCBCEEBB345A0635906CF504E_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// internal Vector3 TopRight { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CTopRightU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProjectionPlane_set_DirRight_m0491832022BB394EA6038EA5144A95A6C8B76A13_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// internal Vector3 DirRight { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CDirRightU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProjectionPlane_set_DirUp_m52B4FF22EF55607B31E7F85FB48404F304A44466_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// internal Vector3 DirUp { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CDirUpU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ProjectionPlane_get_DirRight_mE96EAD340C9B86251669A7BDCA2112CF51917F0A_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method)
{
	{
		// internal Vector3 DirRight { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CDirRightU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ProjectionPlane_get_DirUp_m198349E14F1D476500DDD359BF1507F28CA88E4E_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method)
{
	{
		// internal Vector3 DirUp { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CDirUpU3Ek__BackingField_17();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProjectionPlane_set_DirNormal_m0747C3FB73D9C6C4B26C3E5AA53611A9CBA3A5C6_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// internal Vector3 DirNormal { get; private set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CDirNormalU3Ek__BackingField_18(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ProjectionPlane_get_M_mD690653D2E6E7CEA9EAA48B2B3E62DD079CE1AFB_inline (ProjectionPlane_t0C6D7F2C84DCC899F8D9675A0775D6DAA34111C9 * __this, const RuntimeMethod* method)
{
	{
		// internal Matrix4x4 M { get => m; }
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = __this->get_m_29();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OffAxisCameraRig_get_TrackingDisabled_m554641DDAE1061E28B68370EBA2649C8FCCF7740_inline (OffAxisCameraRig_t4D75ABB703326AECD6E9264E7F58BAA1176788FF * __this, const RuntimeMethod* method)
{
	{
		// get => trackingDisabled;
		bool L_0 = __this->get_trackingDisabled_5();
		return L_0;
	}
}
