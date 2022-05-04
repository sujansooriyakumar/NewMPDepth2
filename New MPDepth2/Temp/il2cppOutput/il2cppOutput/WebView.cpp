#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.Dictionary`2<MessagePanel/MessageType,System.String>
struct Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<MessagePanel/MessageType>
struct IEqualityComparer_1_tC8CA455F651899FCD4EB9C4528D5C483BCCDC372;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.Dictionary`2/KeyCollection<MessagePanel/MessageType,System.String>
struct KeyCollection_t6C5278C915B52E06FBCBDE8D5EAAC387089D7C57;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/ValueCollection<MessagePanel/MessageType,System.String>
struct ValueCollection_t6A738FE3F6CF8AD6805823F76BC75D969FEA41D8;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Collections.Generic.Dictionary`2/Entry<MessagePanel/MessageType,System.String>[]
struct EntryU5BU5D_tAA89C0829AB02D42545E2C731B08C594DA6BCD3B;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// IOSWebViewWindow
struct IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// MessagePanel
struct MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PartnerSO
struct PartnerSO_tFF6BFFA46059F8F874B42CCCD162EBAC4E489BDE;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// WebView
struct WebView_tB15A3B3EE1064AF86D64435F35306972B4D7F1ED;
// WebViewOptions
struct WebViewOptions_t1A01579D5E863A19168226D60B503DFDC33AD989;
// WebViewWindowBase
struct WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebViewOptions_t1A01579D5E863A19168226D60B503DFDC33AD989_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0458562336F91AC3F0C3FE71A886E75CE5C8F84A;
IL2CPP_EXTERN_C String_t* _stringLiteral18A3709EA856478AF45ABBD403B9D6BE5DACCDD9;
IL2CPP_EXTERN_C String_t* _stringLiteral301B85EE21FE45214CFF0F00BD4102041991FB87;
IL2CPP_EXTERN_C String_t* _stringLiteral394FCBB2964542A8543520F5CA33D90C0F5EB8A2;
IL2CPP_EXTERN_C String_t* _stringLiteral5C50188F739C20415B4412C00511AF3E8E52F497;
IL2CPP_EXTERN_C String_t* _stringLiteral6ECE23D6533EA6375C15187EDBCE0ABE2200FD28;
IL2CPP_EXTERN_C String_t* _stringLiteral75D50314061E23E4B56389DAABD2C476AC3ECAE1;
IL2CPP_EXTERN_C String_t* _stringLiteral7A84ED735619745C343817F018A79DDC552C4238;
IL2CPP_EXTERN_C String_t* _stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB84E84BCD9347EE36C5293F62BB8FF35359F63EA;
IL2CPP_EXTERN_C String_t* _stringLiteralBE86F00232CDCD6B0AE55F07CC02A298271564FA;
IL2CPP_EXTERN_C String_t* _stringLiteralCC757C1AF462C455DA292F07F8DC5D584F694ACF;
IL2CPP_EXTERN_C String_t* _stringLiteralD1E5373A42F76CF055D5606AC1B6117A2E3B584C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE70104D82091DB49D9519330472492177C05ECB5;
IL2CPP_EXTERN_C String_t* _stringLiteralF406F0AEED56D35FB7FD79CCB3504488A7C6FF06;
IL2CPP_EXTERN_C String_t* _stringLiteralFA76FC365E77B00EDA6D5C7CA58C51A2BCB7F602;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m4C8CEB4E6921B6E5C59BA000F0EAEF3B625B1467_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m4519CCC2D78183181E5B916CE527868718A804FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m390459B46602BF0AFD03E4B4D4A2FA1AD3070285_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE97DCC47F47A720555FC2651CB3D91F6626A4F07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisIOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213_m28EF6BA433F6DBE3AE928892C73EEDC2BF8F8A4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisWebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36_mD2CD27DA2A1EFAABA89BF670C491AC884617AE11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisPartnerSO_tFF6BFFA46059F8F874B42CCCD162EBAC4E489BDE_m47AA2AF0D7A2EB44C9EF1FF058F334D1729B5BAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebView_OnLoaded_m3D9296400D062EE8F1719CC8F9C440F28BEF00A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebView_OnWebMessageReceived_m8CAF51DBAC186226181597BC65DFF93D0FB8F451_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFFBE68AA623DD4EEC96101AD3119AD073DFBE981 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<MessagePanel/MessageType,System.String>
struct Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tAA89C0829AB02D42545E2C731B08C594DA6BCD3B* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t6C5278C915B52E06FBCBDE8D5EAAC387089D7C57 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t6A738FE3F6CF8AD6805823F76BC75D969FEA41D8 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB, ___entries_1)); }
	inline EntryU5BU5D_tAA89C0829AB02D42545E2C731B08C594DA6BCD3B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tAA89C0829AB02D42545E2C731B08C594DA6BCD3B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tAA89C0829AB02D42545E2C731B08C594DA6BCD3B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB, ___keys_7)); }
	inline KeyCollection_t6C5278C915B52E06FBCBDE8D5EAAC387089D7C57 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t6C5278C915B52E06FBCBDE8D5EAAC387089D7C57 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t6C5278C915B52E06FBCBDE8D5EAAC387089D7C57 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB, ___values_8)); }
	inline ValueCollection_t6A738FE3F6CF8AD6805823F76BC75D969FEA41D8 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t6A738FE3F6CF8AD6805823F76BC75D969FEA41D8 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t6A738FE3F6CF8AD6805823F76BC75D969FEA41D8 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
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


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
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


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// WebMessage
struct WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36 
{
public:
	// System.String WebMessage::type
	String_t* ___type_0;
	// System.String WebMessage::source
	String_t* ___source_1;
	// System.String WebMessage::eventName
	String_t* ___eventName_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> WebMessage::data
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___data_3;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36, ___type_0)); }
	inline String_t* get_type_0() const { return ___type_0; }
	inline String_t** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(String_t* value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}

	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_1), (void*)value);
	}

	inline static int32_t get_offset_of_eventName_2() { return static_cast<int32_t>(offsetof(WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36, ___eventName_2)); }
	inline String_t* get_eventName_2() const { return ___eventName_2; }
	inline String_t** get_address_of_eventName_2() { return &___eventName_2; }
	inline void set_eventName_2(String_t* value)
	{
		___eventName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventName_2), (void*)value);
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36, ___data_3)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_data_3() const { return ___data_3; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of WebMessage
struct WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36_marshaled_pinvoke
{
	char* ___type_0;
	char* ___source_1;
	char* ___eventName_2;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___data_3;
};
// Native definition for COM marshalling of WebMessage
struct WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36_marshaled_com
{
	Il2CppChar* ___type_0;
	Il2CppChar* ___source_1;
	Il2CppChar* ___eventName_2;
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___data_3;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// ColorMode
struct ColorMode_tF8855BE53475011801DBC8AC423FD3E7828C97F1 
{
public:
	// System.Int32 ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_tF8855BE53475011801DBC8AC423FD3E7828C97F1, ___value___2)); }
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

// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.NetworkReachability
struct NetworkReachability_t8F15310A11943C1C3752844598A796FB8EE2BFBC 
{
public:
	// System.Int32 UnityEngine.NetworkReachability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkReachability_t8F15310A11943C1C3752844598A796FB8EE2BFBC, ___value___2)); }
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

// UnityEngine.UserAuthorization
struct UserAuthorization_tD0093A861C0EF8B1A1B921B19DBD7E7280C8B4DD 
{
public:
	// System.Int32 UnityEngine.UserAuthorization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserAuthorization_tD0093A861C0EF8B1A1B921B19DBD7E7280C8B4DD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WebkitContentMode
struct WebkitContentMode_tAD88B8E5128FA40A341EB01EF72350CBD4144AA4 
{
public:
	// System.Int32 WebkitContentMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebkitContentMode_tAD88B8E5128FA40A341EB01EF72350CBD4144AA4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MessagePanel/MessageType
struct MessageType_tAC7CCB8DF618DE5B6C247585BFC64EFF0EA119DC 
{
public:
	// System.Int32 MessagePanel/MessageType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageType_tAC7CCB8DF618DE5B6C247585BFC64EFF0EA119DC, ___value___2)); }
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

// WebViewOptions
struct WebViewOptions_t1A01579D5E863A19168226D60B503DFDC33AD989  : public RuntimeObject
{
public:
	// System.Boolean WebViewOptions::Transparent
	bool ___Transparent_0;
	// System.Boolean WebViewOptions::Zoom
	bool ___Zoom_1;
	// System.String WebViewOptions::UA
	String_t* ___UA_2;
	// ColorMode WebViewOptions::AndroidForceDarkMode
	int32_t ___AndroidForceDarkMode_3;
	// System.Boolean WebViewOptions::EnableWKWebView
	bool ___EnableWKWebView_4;
	// WebkitContentMode WebViewOptions::WKContentMode
	int32_t ___WKContentMode_5;

public:
	inline static int32_t get_offset_of_Transparent_0() { return static_cast<int32_t>(offsetof(WebViewOptions_t1A01579D5E863A19168226D60B503DFDC33AD989, ___Transparent_0)); }
	inline bool get_Transparent_0() const { return ___Transparent_0; }
	inline bool* get_address_of_Transparent_0() { return &___Transparent_0; }
	inline void set_Transparent_0(bool value)
	{
		___Transparent_0 = value;
	}

	inline static int32_t get_offset_of_Zoom_1() { return static_cast<int32_t>(offsetof(WebViewOptions_t1A01579D5E863A19168226D60B503DFDC33AD989, ___Zoom_1)); }
	inline bool get_Zoom_1() const { return ___Zoom_1; }
	inline bool* get_address_of_Zoom_1() { return &___Zoom_1; }
	inline void set_Zoom_1(bool value)
	{
		___Zoom_1 = value;
	}

	inline static int32_t get_offset_of_UA_2() { return static_cast<int32_t>(offsetof(WebViewOptions_t1A01579D5E863A19168226D60B503DFDC33AD989, ___UA_2)); }
	inline String_t* get_UA_2() const { return ___UA_2; }
	inline String_t** get_address_of_UA_2() { return &___UA_2; }
	inline void set_UA_2(String_t* value)
	{
		___UA_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UA_2), (void*)value);
	}

	inline static int32_t get_offset_of_AndroidForceDarkMode_3() { return static_cast<int32_t>(offsetof(WebViewOptions_t1A01579D5E863A19168226D60B503DFDC33AD989, ___AndroidForceDarkMode_3)); }
	inline int32_t get_AndroidForceDarkMode_3() const { return ___AndroidForceDarkMode_3; }
	inline int32_t* get_address_of_AndroidForceDarkMode_3() { return &___AndroidForceDarkMode_3; }
	inline void set_AndroidForceDarkMode_3(int32_t value)
	{
		___AndroidForceDarkMode_3 = value;
	}

	inline static int32_t get_offset_of_EnableWKWebView_4() { return static_cast<int32_t>(offsetof(WebViewOptions_t1A01579D5E863A19168226D60B503DFDC33AD989, ___EnableWKWebView_4)); }
	inline bool get_EnableWKWebView_4() const { return ___EnableWKWebView_4; }
	inline bool* get_address_of_EnableWKWebView_4() { return &___EnableWKWebView_4; }
	inline void set_EnableWKWebView_4(bool value)
	{
		___EnableWKWebView_4 = value;
	}

	inline static int32_t get_offset_of_WKContentMode_5() { return static_cast<int32_t>(offsetof(WebViewOptions_t1A01579D5E863A19168226D60B503DFDC33AD989, ___WKContentMode_5)); }
	inline int32_t get_WKContentMode_5() const { return ___WKContentMode_5; }
	inline int32_t* get_address_of_WKContentMode_5() { return &___WKContentMode_5; }
	inline void set_WKContentMode_5(int32_t value)
	{
		___WKContentMode_5 = value;
	}
};


// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3  : public MulticastDelegate_t
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


// PartnerSO
struct PartnerSO_tFF6BFFA46059F8F874B42CCCD162EBAC4E489BDE  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String PartnerSO::Subdomain
	String_t* ___Subdomain_4;

public:
	inline static int32_t get_offset_of_Subdomain_4() { return static_cast<int32_t>(offsetof(PartnerSO_tFF6BFFA46059F8F874B42CCCD162EBAC4E489BDE, ___Subdomain_4)); }
	inline String_t* get_Subdomain_4() const { return ___Subdomain_4; }
	inline String_t** get_address_of_Subdomain_4() { return &___Subdomain_4; }
	inline void set_Subdomain_4(String_t* value)
	{
		___Subdomain_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Subdomain_4), (void*)value);
	}
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// MessagePanel
struct MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.Dictionary`2<MessagePanel/MessageType,System.String> MessagePanel::messageDict
	Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB * ___messageDict_4;
	// UnityEngine.UI.Text MessagePanel::messageLabel
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___messageLabel_5;

public:
	inline static int32_t get_offset_of_messageDict_4() { return static_cast<int32_t>(offsetof(MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD, ___messageDict_4)); }
	inline Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB * get_messageDict_4() const { return ___messageDict_4; }
	inline Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB ** get_address_of_messageDict_4() { return &___messageDict_4; }
	inline void set_messageDict_4(Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB * value)
	{
		___messageDict_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageDict_4), (void*)value);
	}

	inline static int32_t get_offset_of_messageLabel_5() { return static_cast<int32_t>(offsetof(MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD, ___messageLabel_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_messageLabel_5() const { return ___messageLabel_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_messageLabel_5() { return &___messageLabel_5; }
	inline void set_messageLabel_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___messageLabel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageLabel_5), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// WebView
struct WebView_tB15A3B3EE1064AF86D64435F35306972B4D7F1ED  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// WebViewWindowBase WebView::webViewObject
	WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B * ___webViewObject_7;
	// MessagePanel WebView::messagePanel
	MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD * ___messagePanel_8;
	// System.Int32 WebView::left
	int32_t ___left_9;
	// System.Int32 WebView::top
	int32_t ___top_10;
	// System.Int32 WebView::right
	int32_t ___right_11;
	// System.Int32 WebView::bottom
	int32_t ___bottom_12;
	// System.Boolean WebView::<Loaded>k__BackingField
	bool ___U3CLoadedU3Ek__BackingField_13;
	// System.Action`1<System.String> WebView::OnAvatarCreated
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___OnAvatarCreated_14;

public:
	inline static int32_t get_offset_of_webViewObject_7() { return static_cast<int32_t>(offsetof(WebView_tB15A3B3EE1064AF86D64435F35306972B4D7F1ED, ___webViewObject_7)); }
	inline WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B * get_webViewObject_7() const { return ___webViewObject_7; }
	inline WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B ** get_address_of_webViewObject_7() { return &___webViewObject_7; }
	inline void set_webViewObject_7(WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B * value)
	{
		___webViewObject_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webViewObject_7), (void*)value);
	}

	inline static int32_t get_offset_of_messagePanel_8() { return static_cast<int32_t>(offsetof(WebView_tB15A3B3EE1064AF86D64435F35306972B4D7F1ED, ___messagePanel_8)); }
	inline MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD * get_messagePanel_8() const { return ___messagePanel_8; }
	inline MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD ** get_address_of_messagePanel_8() { return &___messagePanel_8; }
	inline void set_messagePanel_8(MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD * value)
	{
		___messagePanel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messagePanel_8), (void*)value);
	}

	inline static int32_t get_offset_of_left_9() { return static_cast<int32_t>(offsetof(WebView_tB15A3B3EE1064AF86D64435F35306972B4D7F1ED, ___left_9)); }
	inline int32_t get_left_9() const { return ___left_9; }
	inline int32_t* get_address_of_left_9() { return &___left_9; }
	inline void set_left_9(int32_t value)
	{
		___left_9 = value;
	}

	inline static int32_t get_offset_of_top_10() { return static_cast<int32_t>(offsetof(WebView_tB15A3B3EE1064AF86D64435F35306972B4D7F1ED, ___top_10)); }
	inline int32_t get_top_10() const { return ___top_10; }
	inline int32_t* get_address_of_top_10() { return &___top_10; }
	inline void set_top_10(int32_t value)
	{
		___top_10 = value;
	}

	inline static int32_t get_offset_of_right_11() { return static_cast<int32_t>(offsetof(WebView_tB15A3B3EE1064AF86D64435F35306972B4D7F1ED, ___right_11)); }
	inline int32_t get_right_11() const { return ___right_11; }
	inline int32_t* get_address_of_right_11() { return &___right_11; }
	inline void set_right_11(int32_t value)
	{
		___right_11 = value;
	}

	inline static int32_t get_offset_of_bottom_12() { return static_cast<int32_t>(offsetof(WebView_tB15A3B3EE1064AF86D64435F35306972B4D7F1ED, ___bottom_12)); }
	inline int32_t get_bottom_12() const { return ___bottom_12; }
	inline int32_t* get_address_of_bottom_12() { return &___bottom_12; }
	inline void set_bottom_12(int32_t value)
	{
		___bottom_12 = value;
	}

	inline static int32_t get_offset_of_U3CLoadedU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(WebView_tB15A3B3EE1064AF86D64435F35306972B4D7F1ED, ___U3CLoadedU3Ek__BackingField_13)); }
	inline bool get_U3CLoadedU3Ek__BackingField_13() const { return ___U3CLoadedU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CLoadedU3Ek__BackingField_13() { return &___U3CLoadedU3Ek__BackingField_13; }
	inline void set_U3CLoadedU3Ek__BackingField_13(bool value)
	{
		___U3CLoadedU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_OnAvatarCreated_14() { return static_cast<int32_t>(offsetof(WebView_tB15A3B3EE1064AF86D64435F35306972B4D7F1ED, ___OnAvatarCreated_14)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_OnAvatarCreated_14() const { return ___OnAvatarCreated_14; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_OnAvatarCreated_14() { return &___OnAvatarCreated_14; }
	inline void set_OnAvatarCreated_14(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___OnAvatarCreated_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAvatarCreated_14), (void*)value);
	}
};


// WebViewWindowBase
struct WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action`1<System.String> WebViewWindowBase::OnJS
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___OnJS_4;
	// System.Action`1<System.String> WebViewWindowBase::OnError
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___OnError_5;
	// System.Action`1<System.String> WebViewWindowBase::OnHttpError
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___OnHttpError_6;
	// System.Action`1<System.String> WebViewWindowBase::OnStarted
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___OnStarted_7;
	// System.Action`1<System.String> WebViewWindowBase::OnLoaded
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___OnLoaded_8;
	// System.Action`1<System.String> WebViewWindowBase::OnHooked
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___OnHooked_9;
	// System.Int32 WebViewWindowBase::marginLeft
	int32_t ___marginLeft_10;
	// System.Int32 WebViewWindowBase::marginTop
	int32_t ___marginTop_11;
	// System.Int32 WebViewWindowBase::marginRight
	int32_t ___marginRight_12;
	// System.Int32 WebViewWindowBase::marginBottom
	int32_t ___marginBottom_13;
	// MessagePanel WebViewWindowBase::messageCanvas
	MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD * ___messageCanvas_14;
	// System.Int32 WebViewWindowBase::windowVisibleDisplayFrameHeight
	int32_t ___windowVisibleDisplayFrameHeight_15;
	// System.Boolean WebViewWindowBase::isVisible
	bool ___isVisible_16;
	// System.Boolean WebViewWindowBase::iskeyboardVisible
	bool ___iskeyboardVisible_17;
	// System.Boolean WebViewWindowBase::alertDialogEnabled
	bool ___alertDialogEnabled_18;
	// System.Boolean WebViewWindowBase::scrollBounceEnabled
	bool ___scrollBounceEnabled_19;

public:
	inline static int32_t get_offset_of_OnJS_4() { return static_cast<int32_t>(offsetof(WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B, ___OnJS_4)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_OnJS_4() const { return ___OnJS_4; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_OnJS_4() { return &___OnJS_4; }
	inline void set_OnJS_4(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___OnJS_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnJS_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnError_5() { return static_cast<int32_t>(offsetof(WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B, ___OnError_5)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_OnError_5() const { return ___OnError_5; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_OnError_5() { return &___OnError_5; }
	inline void set_OnError_5(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___OnError_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnError_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnHttpError_6() { return static_cast<int32_t>(offsetof(WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B, ___OnHttpError_6)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_OnHttpError_6() const { return ___OnHttpError_6; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_OnHttpError_6() { return &___OnHttpError_6; }
	inline void set_OnHttpError_6(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___OnHttpError_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHttpError_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnStarted_7() { return static_cast<int32_t>(offsetof(WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B, ___OnStarted_7)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_OnStarted_7() const { return ___OnStarted_7; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_OnStarted_7() { return &___OnStarted_7; }
	inline void set_OnStarted_7(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___OnStarted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStarted_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnLoaded_8() { return static_cast<int32_t>(offsetof(WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B, ___OnLoaded_8)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_OnLoaded_8() const { return ___OnLoaded_8; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_OnLoaded_8() { return &___OnLoaded_8; }
	inline void set_OnLoaded_8(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___OnLoaded_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLoaded_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnHooked_9() { return static_cast<int32_t>(offsetof(WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B, ___OnHooked_9)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_OnHooked_9() const { return ___OnHooked_9; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_OnHooked_9() { return &___OnHooked_9; }
	inline void set_OnHooked_9(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___OnHooked_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHooked_9), (void*)value);
	}

	inline static int32_t get_offset_of_marginLeft_10() { return static_cast<int32_t>(offsetof(WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B, ___marginLeft_10)); }
	inline int32_t get_marginLeft_10() const { return ___marginLeft_10; }
	inline int32_t* get_address_of_marginLeft_10() { return &___marginLeft_10; }
	inline void set_marginLeft_10(int32_t value)
	{
		___marginLeft_10 = value;
	}

	inline static int32_t get_offset_of_marginTop_11() { return static_cast<int32_t>(offsetof(WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B, ___marginTop_11)); }
	inline int32_t get_marginTop_11() const { return ___marginTop_11; }
	inline int32_t* get_address_of_marginTop_11() { return &___marginTop_11; }
	inline void set_marginTop_11(int32_t value)
	{
		___marginTop_11 = value;
	}

	inline static int32_t get_offset_of_marginRight_12() { return static_cast<int32_t>(offsetof(WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B, ___marginRight_12)); }
	inline int32_t get_marginRight_12() const { return ___marginRight_12; }
	inline int32_t* get_address_of_marginRight_12() { return &___marginRight_12; }
	inline void set_marginRight_12(int32_t value)
	{
		___marginRight_12 = value;
	}

	inline static int32_t get_offset_of_marginBottom_13() { return static_cast<int32_t>(offsetof(WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B, ___marginBottom_13)); }
	inline int32_t get_marginBottom_13() const { return ___marginBottom_13; }
	inline int32_t* get_address_of_marginBottom_13() { return &___marginBottom_13; }
	inline void set_marginBottom_13(int32_t value)
	{
		___marginBottom_13 = value;
	}

	inline static int32_t get_offset_of_messageCanvas_14() { return static_cast<int32_t>(offsetof(WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B, ___messageCanvas_14)); }
	inline MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD * get_messageCanvas_14() const { return ___messageCanvas_14; }
	inline MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD ** get_address_of_messageCanvas_14() { return &___messageCanvas_14; }
	inline void set_messageCanvas_14(MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD * value)
	{
		___messageCanvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageCanvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_windowVisibleDisplayFrameHeight_15() { return static_cast<int32_t>(offsetof(WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B, ___windowVisibleDisplayFrameHeight_15)); }
	inline int32_t get_windowVisibleDisplayFrameHeight_15() const { return ___windowVisibleDisplayFrameHeight_15; }
	inline int32_t* get_address_of_windowVisibleDisplayFrameHeight_15() { return &___windowVisibleDisplayFrameHeight_15; }
	inline void set_windowVisibleDisplayFrameHeight_15(int32_t value)
	{
		___windowVisibleDisplayFrameHeight_15 = value;
	}

	inline static int32_t get_offset_of_isVisible_16() { return static_cast<int32_t>(offsetof(WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B, ___isVisible_16)); }
	inline bool get_isVisible_16() const { return ___isVisible_16; }
	inline bool* get_address_of_isVisible_16() { return &___isVisible_16; }
	inline void set_isVisible_16(bool value)
	{
		___isVisible_16 = value;
	}

	inline static int32_t get_offset_of_iskeyboardVisible_17() { return static_cast<int32_t>(offsetof(WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B, ___iskeyboardVisible_17)); }
	inline bool get_iskeyboardVisible_17() const { return ___iskeyboardVisible_17; }
	inline bool* get_address_of_iskeyboardVisible_17() { return &___iskeyboardVisible_17; }
	inline void set_iskeyboardVisible_17(bool value)
	{
		___iskeyboardVisible_17 = value;
	}

	inline static int32_t get_offset_of_alertDialogEnabled_18() { return static_cast<int32_t>(offsetof(WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B, ___alertDialogEnabled_18)); }
	inline bool get_alertDialogEnabled_18() const { return ___alertDialogEnabled_18; }
	inline bool* get_address_of_alertDialogEnabled_18() { return &___alertDialogEnabled_18; }
	inline void set_alertDialogEnabled_18(bool value)
	{
		___alertDialogEnabled_18 = value;
	}

	inline static int32_t get_offset_of_scrollBounceEnabled_19() { return static_cast<int32_t>(offsetof(WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B, ___scrollBounceEnabled_19)); }
	inline bool get_scrollBounceEnabled_19() const { return ___scrollBounceEnabled_19; }
	inline bool* get_address_of_scrollBounceEnabled_19() { return &___scrollBounceEnabled_19; }
	inline void set_scrollBounceEnabled_19(bool value)
	{
		___scrollBounceEnabled_19 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// IOSWebViewWindow
struct IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213  : public WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B
{
public:
	// System.IntPtr IOSWebViewWindow::webView
	intptr_t ___webView_20;

public:
	inline static int32_t get_offset_of_webView_20() { return static_cast<int32_t>(offsetof(IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213, ___webView_20)); }
	inline intptr_t get_webView_20() const { return ___webView_20; }
	inline intptr_t* get_address_of_webView_20() { return &___webView_20; }
	inline void set_webView_20(intptr_t value)
	{
		___webView_20 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// !1 System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m169DFA431C9A313350A4A964D24135EFEE0BDC60_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mEA7DC2B06A480A5EC7DE49B6E83C2D121D1962EF_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared (String_t* ___path0, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.JsonConvert::DeserializeObject<WebMessage>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36  JsonConvert_DeserializeObject_TisWebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36_mD2CD27DA2A1EFAABA89BF670C491AC884617AE11_gshared (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Boolean UnityEngine.Application::HasUserAuthorization(UnityEngine.UserAuthorization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_HasUserAuthorization_mF2B71D5CC9F37FF5B600D495F9D57F9ABB77ECAC (int32_t ___mode0, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.Application::RequestUserAuthorization(UnityEngine.UserAuthorization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * Application_RequestUserAuthorization_mDA4EC05A984AC8CE9B7EB2B3038D0F2A124442B6 (int32_t ___mode0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.IntPtr IOSWebViewWindow::_CWebViewPlugin_Init(System.String,System.Boolean,System.Boolean,System.String,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IOSWebViewWindow__CWebViewPlugin_Init_mA561001589A85CB3262D544AB92144701BDE16EB (String_t* ___gameObject0, bool ___transparent1, bool ___zoom2, String_t* ___ua3, bool ___enableWKWebView4, int32_t ___wkContentMode5, const RuntimeMethod* method);
// System.Void IOSWebViewWindow::_CWebViewPlugin_SetMargins(System.IntPtr,System.Single,System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_SetMargins_m53E99E84B567EDE07140F5374E7B170AA4C2F9AE (intptr_t ___instance0, float ___left1, float ___top2, float ___right3, float ___bottom4, bool ___relative5, const RuntimeMethod* method);
// System.Void IOSWebViewWindow::_CWebViewPlugin_SetVisibility(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_SetVisibility_m55CC4B0FA8DA545B938F5398BC7C7A78E5DB26B7 (intptr_t ___instance0, bool ___visibility1, const RuntimeMethod* method);
// System.Boolean UnityEngine.TouchScreenKeyboard::get_visible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchScreenKeyboard_get_visible_m9099838FFE020BEAC716B29F5F47FBC831710549 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void IOSWebViewWindow::_CWebViewPlugin_SetAlertDialogEnabled(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_SetAlertDialogEnabled_m3AF7FB9E6555E35D47A2894E5A3D07BB2B7808F6 (intptr_t ___instance0, bool ___enabled1, const RuntimeMethod* method);
// System.Void IOSWebViewWindow::_CWebViewPlugin_SetScrollBounceEnabled(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_SetScrollBounceEnabled_m67BF74E8E487750CDFE7236D34160E8919299AE4 (intptr_t ___instance0, bool ___enabled1, const RuntimeMethod* method);
// System.Void IOSWebViewWindow::_CWebViewPlugin_LoadURL(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_LoadURL_m9AE1ACA41C5FBB4E3555D6085E004CDE5F70478D (intptr_t ___instance0, String_t* ___url1, const RuntimeMethod* method);
// System.Void IOSWebViewWindow::_CWebViewPlugin_LoadHTML(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_LoadHTML_m18EB2CF9A6D89623A6FC20FC91AC7329602375F6 (intptr_t ___instance0, String_t* ___html1, String_t* ___baseUrl2, const RuntimeMethod* method);
// System.Void IOSWebViewWindow::_CWebViewPlugin_EvaluateJS(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_EvaluateJS_m8635A850F52CA1F02FEDC8CF3B38FFA2B884BE89 (intptr_t ___instance0, String_t* ___url1, const RuntimeMethod* method);
// System.Int32 IOSWebViewWindow::_CWebViewPlugin_Progress(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IOSWebViewWindow__CWebViewPlugin_Progress_mA6830CD61BA0A7B8CAC35F9413C7E5BF0A06B677 (intptr_t ___instance0, const RuntimeMethod* method);
// System.Boolean IOSWebViewWindow::_CWebViewPlugin_CanGoBack(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOSWebViewWindow__CWebViewPlugin_CanGoBack_mD64EDA3F3035BA530655D81BAC4874FF91FC67CE (intptr_t ___instance0, const RuntimeMethod* method);
// System.Boolean IOSWebViewWindow::_CWebViewPlugin_CanGoForward(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOSWebViewWindow__CWebViewPlugin_CanGoForward_mBB5CD20BDACA062020F0060ACC8239466D60EC90 (intptr_t ___instance0, const RuntimeMethod* method);
// System.Void IOSWebViewWindow::_CWebViewPlugin_GoBack(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_GoBack_mCC98226CD59C644E701DFB075C6BBAA584F37242 (intptr_t ___instance0, const RuntimeMethod* method);
// System.Void IOSWebViewWindow::_CWebViewPlugin_GoForward(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_GoForward_m79BD89DCAE99775C28D4EE3D401773D4D11BCA99 (intptr_t ___instance0, const RuntimeMethod* method);
// System.Void IOSWebViewWindow::_CWebViewPlugin_Reload(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_Reload_mE177B9AAA6CCB2A43E469DA4FC8EF37C5B8376EA (intptr_t ___instance0, const RuntimeMethod* method);
// System.Void IOSWebViewWindow::_CWebViewPlugin_AddCustomHeader(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_AddCustomHeader_mEA0F4BB5B21389447C2BE9F851AFD77FB755FEFC (intptr_t ___instance0, String_t* ___headerKey1, String_t* ___headerValue2, const RuntimeMethod* method);
// System.String IOSWebViewWindow::_CWebViewPlugin_GetCustomHeaderValue(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWebViewWindow__CWebViewPlugin_GetCustomHeaderValue_m4EF87421C26E6C493F7FDA66B05D674FFCA83661 (intptr_t ___instance0, String_t* ___headerKey1, const RuntimeMethod* method);
// System.Void IOSWebViewWindow::_CWebViewPlugin_RemoveCustomHeader(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_RemoveCustomHeader_mDE7B29F5E4DB36272ADAB94B5BC80C9686F80061 (intptr_t ___instance0, String_t* ___headerKey1, const RuntimeMethod* method);
// System.Void IOSWebViewWindow::_CWebViewPlugin_ClearCustomHeader(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_ClearCustomHeader_mE747D696C47437AAADA96E345DC2A0DAE1EFC80B (intptr_t ___instance0, const RuntimeMethod* method);
// System.Void IOSWebViewWindow::_CWebViewPlugin_ClearCache(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_ClearCache_m1090C720AEEE4A6FFE405E6253A42E751001A6AA (intptr_t ___instance0, bool ___includeDiskFiles1, const RuntimeMethod* method);
// System.Void IOSWebViewWindow::_CWebViewPlugin_ClearCookies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_ClearCookies_m7D34B247EC9A7229527ADA200EB3C89D9130AD41 (const RuntimeMethod* method);
// System.String IOSWebViewWindow::_CWebViewPlugin_GetCookies(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWebViewWindow__CWebViewPlugin_GetCookies_mE3A23B2A9B0EB41E42FADA315904374AED245D8C (String_t* ___url0, const RuntimeMethod* method);
// System.Void IOSWebViewWindow::_CWebViewPlugin_SaveCookies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_SaveCookies_m9393D622486B75F465AC4D74360BCAB5BAE8B28C (const RuntimeMethod* method);
// System.Void IOSWebViewWindow::_CWebViewPlugin_SetBasicAuthInfo(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_SetBasicAuthInfo_m5875DDB1B330AD1563D4F837C375FEC4A4A73A70 (intptr_t ___instance0, String_t* ___userName1, String_t* ___password2, const RuntimeMethod* method);
// System.Int32 IOSWebViewWindow::_CWebViewPlugin_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IOSWebViewWindow__CWebViewPlugin_Destroy_mE9B609F7DE84E0C900A08FD3C7BFE8F505E1AC16 (intptr_t ___instance0, const RuntimeMethod* method);
// System.Void WebViewWindowBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewWindowBase__ctor_m8697F9255B4A388AF8F5828B6D24667BE756A90F (WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<MessagePanel/MessageType,System.String>::get_Item(!0)
inline String_t* Dictionary_2_get_Item_mE97DCC47F47A720555FC2651CB3D91F6626A4F07 (Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m169DFA431C9A313350A4A964D24135EFEE0BDC60_gshared)(__this, ___key0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_offsetMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMax_m5FDE1063C8BA1EC98D3C57C58DD2A1B9B721A8BF (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_offsetMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMin_m86D7818770137C150B70A3842EBF03F494C34271 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<MessagePanel/MessageType,System.String>::.ctor()
inline void Dictionary_2__ctor_m390459B46602BF0AFD03E4B4D4A2FA1AD3070285 (Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB *, const RuntimeMethod*))Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<MessagePanel/MessageType,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_m4C8CEB4E6921B6E5C59BA000F0EAEF3B625B1467 (Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB * __this, int32_t ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB *, int32_t, String_t*, const RuntimeMethod*))Dictionary_2_Add_mEA7DC2B06A480A5EC7DE49B6E83C2D121D1962EF_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.String PartnerSO::GetSubdomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartnerSO_GetSubdomain_mA3077209B8F2F8380AE307E256F73B80AF80BD52 (PartnerSO_tFF6BFFA46059F8F874B42CCCD162EBAC4E489BDE * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// UnityEngine.NetworkReachability UnityEngine.Application::get_internetReachability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_internetReachability_m039C30126BD989614BF2A4A3F33129177A95C61C (const RuntimeMethod* method);
// System.Void MessagePanel::SetMessage(MessagePanel/MessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagePanel_SetMessage_m07CA54A54E5887B9B95164FC8D143155AF93C1F5 (MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD * __this, int32_t ___type0, const RuntimeMethod* method);
// System.Void MessagePanel::SetVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagePanel_SetVisible_m5B50370A1F89681726796BD005CF77F2D6AC9FAF (MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD * __this, bool ___visible0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<IOSWebViewWindow>()
inline IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * GameObject_AddComponent_TisIOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213_m28EF6BA433F6DBE3AE928892C73EEDC2BF8F8A4E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebViewOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewOptions__ctor_m39A15400C4E62B6FBAE07AE770D61E673ED173DC (WebViewOptions_t1A01579D5E863A19168226D60B503DFDC33AD989 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<PartnerSO>(System.String)
inline PartnerSO_tFF6BFFA46059F8F874B42CCCD162EBAC4E489BDE * Resources_Load_TisPartnerSO_tFF6BFFA46059F8F874B42CCCD162EBAC4E489BDE_m47AA2AF0D7A2EB44C9EF1FF058F334D1729B5BAB (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  PartnerSO_tFF6BFFA46059F8F874B42CCCD162EBAC4E489BDE * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared)(___path0, method);
}
// System.String PartnerSO::GetUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartnerSO_GetUrl_m731303133C8ED51AD22B6F8575B56F3D7C76B2E7 (PartnerSO_tFF6BFFA46059F8F874B42CCCD162EBAC4E489BDE * __this, const RuntimeMethod* method);
// System.Void WebView::SetScreenPadding(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebView_SetScreenPadding_m2E6E6D2F2EEE3CFC665663FA837E717EA191EC78 (WebView_tB15A3B3EE1064AF86D64435F35306972B4D7F1ED * __this, int32_t ___left0, int32_t ___top1, int32_t ___right2, int32_t ___bottom3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void MessagePanel::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagePanel_SetMargins_mC89A03056C1FCE01EB91EBEC64FF679C8DBF5479 (MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD * __this, int32_t ___left0, int32_t ___top1, int32_t ___right2, int32_t ___bottom3, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.JsonConvert::DeserializeObject<WebMessage>(System.String)
inline WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36  JsonConvert_DeserializeObject_TisWebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36_mD2CD27DA2A1EFAABA89BF670C491AC884617AE11 (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36  (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisWebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36_mD2CD27DA2A1EFAABA89BF670C491AC884617AE11_gshared)(___value0, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m4519CCC2D78183181E5B916CE527868718A804FD (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, String_t*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Boolean WebView::get_Loaded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebView_get_Loaded_m2153ADABEBAE9B1C7A82984ECF5FAE698437317A_inline (WebView_tB15A3B3EE1064AF86D64435F35306972B4D7F1ED * __this, const RuntimeMethod* method);
// System.Void WebView::set_Loaded(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebView_set_Loaded_m17921B9CC187303A880D1ED05927D38C8B33EE37_inline (WebView_tB15A3B3EE1064AF86D64435F35306972B4D7F1ED * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawWireCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL _CWebViewPlugin_Init(char*, int32_t, int32_t, char*, int32_t, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _CWebViewPlugin_Destroy(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_SetMargins(intptr_t, float, float, float, float, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_SetVisibility(intptr_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_SetAlertDialogEnabled(intptr_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_SetScrollBounceEnabled(intptr_t, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _CWebViewPlugin_SetURLPattern(intptr_t, char*, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_LoadURL(intptr_t, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_LoadHTML(intptr_t, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_EvaluateJS(intptr_t, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _CWebViewPlugin_Progress(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _CWebViewPlugin_CanGoBack(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _CWebViewPlugin_CanGoForward(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_GoBack(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_GoForward(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_Reload(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_AddCustomHeader(intptr_t, char*, char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL _CWebViewPlugin_GetCustomHeaderValue(intptr_t, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_RemoveCustomHeader(intptr_t, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_ClearCustomHeader(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_ClearCookies();
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_SaveCookies();
IL2CPP_EXTERN_C char* DEFAULT_CALL _CWebViewPlugin_GetCookies(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_SetBasicAuthInfo(intptr_t, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _CWebViewPlugin_ClearCache(intptr_t, int32_t);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr IOSWebViewWindow::_CWebViewPlugin_Init(System.String,System.Boolean,System.Boolean,System.String,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IOSWebViewWindow__CWebViewPlugin_Init_mA561001589A85CB3262D544AB92144701BDE16EB (String_t* ___gameObject0, bool ___transparent1, bool ___zoom2, String_t* ___ua3, bool ___enableWKWebView4, int32_t ___wkContentMode5, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, char*, int32_t, int32_t);

	// Marshaling of parameter '___gameObject0' to native representation
	char* ____gameObject0_marshaled = NULL;
	____gameObject0_marshaled = il2cpp_codegen_marshal_string(___gameObject0);

	// Marshaling of parameter '___ua3' to native representation
	char* ____ua3_marshaled = NULL;
	____ua3_marshaled = il2cpp_codegen_marshal_string(___ua3);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_Init)(____gameObject0_marshaled, static_cast<int32_t>(___transparent1), static_cast<int32_t>(___zoom2), ____ua3_marshaled, static_cast<int32_t>(___enableWKWebView4), ___wkContentMode5);

	// Marshaling cleanup of parameter '___gameObject0' native representation
	il2cpp_codegen_marshal_free(____gameObject0_marshaled);
	____gameObject0_marshaled = NULL;

	// Marshaling cleanup of parameter '___ua3' native representation
	il2cpp_codegen_marshal_free(____ua3_marshaled);
	____ua3_marshaled = NULL;

	return returnValue;
}
// System.Int32 IOSWebViewWindow::_CWebViewPlugin_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IOSWebViewWindow__CWebViewPlugin_Destroy_mE9B609F7DE84E0C900A08FD3C7BFE8F505E1AC16 (intptr_t ___instance0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_Destroy)(___instance0);

	return returnValue;
}
// System.Void IOSWebViewWindow::_CWebViewPlugin_SetMargins(System.IntPtr,System.Single,System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_SetMargins_m53E99E84B567EDE07140F5374E7B170AA4C2F9AE (intptr_t ___instance0, float ___left1, float ___top2, float ___right3, float ___bottom4, bool ___relative5, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, float, float, float, float, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_SetMargins)(___instance0, ___left1, ___top2, ___right3, ___bottom4, static_cast<int32_t>(___relative5));

}
// System.Void IOSWebViewWindow::_CWebViewPlugin_SetVisibility(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_SetVisibility_m55CC4B0FA8DA545B938F5398BC7C7A78E5DB26B7 (intptr_t ___instance0, bool ___visibility1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_SetVisibility)(___instance0, static_cast<int32_t>(___visibility1));

}
// System.Void IOSWebViewWindow::_CWebViewPlugin_SetAlertDialogEnabled(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_SetAlertDialogEnabled_m3AF7FB9E6555E35D47A2894E5A3D07BB2B7808F6 (intptr_t ___instance0, bool ___enabled1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_SetAlertDialogEnabled)(___instance0, static_cast<int32_t>(___enabled1));

}
// System.Void IOSWebViewWindow::_CWebViewPlugin_SetScrollBounceEnabled(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_SetScrollBounceEnabled_m67BF74E8E487750CDFE7236D34160E8919299AE4 (intptr_t ___instance0, bool ___enabled1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_SetScrollBounceEnabled)(___instance0, static_cast<int32_t>(___enabled1));

}
// System.Boolean IOSWebViewWindow::_CWebViewPlugin_SetURLPattern(System.IntPtr,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOSWebViewWindow__CWebViewPlugin_SetURLPattern_mB17F413C2D45F19F539EC334E825D30A08A4D69D (intptr_t ___instance0, String_t* ___allowPattern1, String_t* ___denyPattern2, String_t* ___hookPattern3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, char*, char*);

	// Marshaling of parameter '___allowPattern1' to native representation
	char* ____allowPattern1_marshaled = NULL;
	____allowPattern1_marshaled = il2cpp_codegen_marshal_string(___allowPattern1);

	// Marshaling of parameter '___denyPattern2' to native representation
	char* ____denyPattern2_marshaled = NULL;
	____denyPattern2_marshaled = il2cpp_codegen_marshal_string(___denyPattern2);

	// Marshaling of parameter '___hookPattern3' to native representation
	char* ____hookPattern3_marshaled = NULL;
	____hookPattern3_marshaled = il2cpp_codegen_marshal_string(___hookPattern3);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_SetURLPattern)(___instance0, ____allowPattern1_marshaled, ____denyPattern2_marshaled, ____hookPattern3_marshaled);

	// Marshaling cleanup of parameter '___allowPattern1' native representation
	il2cpp_codegen_marshal_free(____allowPattern1_marshaled);
	____allowPattern1_marshaled = NULL;

	// Marshaling cleanup of parameter '___denyPattern2' native representation
	il2cpp_codegen_marshal_free(____denyPattern2_marshaled);
	____denyPattern2_marshaled = NULL;

	// Marshaling cleanup of parameter '___hookPattern3' native representation
	il2cpp_codegen_marshal_free(____hookPattern3_marshaled);
	____hookPattern3_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Void IOSWebViewWindow::_CWebViewPlugin_LoadURL(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_LoadURL_m9AE1ACA41C5FBB4E3555D6085E004CDE5F70478D (intptr_t ___instance0, String_t* ___url1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___url1' to native representation
	char* ____url1_marshaled = NULL;
	____url1_marshaled = il2cpp_codegen_marshal_string(___url1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_LoadURL)(___instance0, ____url1_marshaled);

	// Marshaling cleanup of parameter '___url1' native representation
	il2cpp_codegen_marshal_free(____url1_marshaled);
	____url1_marshaled = NULL;

}
// System.Void IOSWebViewWindow::_CWebViewPlugin_LoadHTML(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_LoadHTML_m18EB2CF9A6D89623A6FC20FC91AC7329602375F6 (intptr_t ___instance0, String_t* ___html1, String_t* ___baseUrl2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, char*);

	// Marshaling of parameter '___html1' to native representation
	char* ____html1_marshaled = NULL;
	____html1_marshaled = il2cpp_codegen_marshal_string(___html1);

	// Marshaling of parameter '___baseUrl2' to native representation
	char* ____baseUrl2_marshaled = NULL;
	____baseUrl2_marshaled = il2cpp_codegen_marshal_string(___baseUrl2);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_LoadHTML)(___instance0, ____html1_marshaled, ____baseUrl2_marshaled);

	// Marshaling cleanup of parameter '___html1' native representation
	il2cpp_codegen_marshal_free(____html1_marshaled);
	____html1_marshaled = NULL;

	// Marshaling cleanup of parameter '___baseUrl2' native representation
	il2cpp_codegen_marshal_free(____baseUrl2_marshaled);
	____baseUrl2_marshaled = NULL;

}
// System.Void IOSWebViewWindow::_CWebViewPlugin_EvaluateJS(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_EvaluateJS_m8635A850F52CA1F02FEDC8CF3B38FFA2B884BE89 (intptr_t ___instance0, String_t* ___url1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___url1' to native representation
	char* ____url1_marshaled = NULL;
	____url1_marshaled = il2cpp_codegen_marshal_string(___url1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_EvaluateJS)(___instance0, ____url1_marshaled);

	// Marshaling cleanup of parameter '___url1' native representation
	il2cpp_codegen_marshal_free(____url1_marshaled);
	____url1_marshaled = NULL;

}
// System.Int32 IOSWebViewWindow::_CWebViewPlugin_Progress(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IOSWebViewWindow__CWebViewPlugin_Progress_mA6830CD61BA0A7B8CAC35F9413C7E5BF0A06B677 (intptr_t ___instance0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_Progress)(___instance0);

	return returnValue;
}
// System.Boolean IOSWebViewWindow::_CWebViewPlugin_CanGoBack(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOSWebViewWindow__CWebViewPlugin_CanGoBack_mD64EDA3F3035BA530655D81BAC4874FF91FC67CE (intptr_t ___instance0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_CanGoBack)(___instance0);

	return static_cast<bool>(returnValue);
}
// System.Boolean IOSWebViewWindow::_CWebViewPlugin_CanGoForward(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOSWebViewWindow__CWebViewPlugin_CanGoForward_mBB5CD20BDACA062020F0060ACC8239466D60EC90 (intptr_t ___instance0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_CanGoForward)(___instance0);

	return static_cast<bool>(returnValue);
}
// System.Void IOSWebViewWindow::_CWebViewPlugin_GoBack(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_GoBack_mCC98226CD59C644E701DFB075C6BBAA584F37242 (intptr_t ___instance0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_GoBack)(___instance0);

}
// System.Void IOSWebViewWindow::_CWebViewPlugin_GoForward(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_GoForward_m79BD89DCAE99775C28D4EE3D401773D4D11BCA99 (intptr_t ___instance0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_GoForward)(___instance0);

}
// System.Void IOSWebViewWindow::_CWebViewPlugin_Reload(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_Reload_mE177B9AAA6CCB2A43E469DA4FC8EF37C5B8376EA (intptr_t ___instance0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_Reload)(___instance0);

}
// System.Void IOSWebViewWindow::_CWebViewPlugin_AddCustomHeader(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_AddCustomHeader_mEA0F4BB5B21389447C2BE9F851AFD77FB755FEFC (intptr_t ___instance0, String_t* ___headerKey1, String_t* ___headerValue2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, char*);

	// Marshaling of parameter '___headerKey1' to native representation
	char* ____headerKey1_marshaled = NULL;
	____headerKey1_marshaled = il2cpp_codegen_marshal_string(___headerKey1);

	// Marshaling of parameter '___headerValue2' to native representation
	char* ____headerValue2_marshaled = NULL;
	____headerValue2_marshaled = il2cpp_codegen_marshal_string(___headerValue2);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_AddCustomHeader)(___instance0, ____headerKey1_marshaled, ____headerValue2_marshaled);

	// Marshaling cleanup of parameter '___headerKey1' native representation
	il2cpp_codegen_marshal_free(____headerKey1_marshaled);
	____headerKey1_marshaled = NULL;

	// Marshaling cleanup of parameter '___headerValue2' native representation
	il2cpp_codegen_marshal_free(____headerValue2_marshaled);
	____headerValue2_marshaled = NULL;

}
// System.String IOSWebViewWindow::_CWebViewPlugin_GetCustomHeaderValue(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWebViewWindow__CWebViewPlugin_GetCustomHeaderValue_m4EF87421C26E6C493F7FDA66B05D674FFCA83661 (intptr_t ___instance0, String_t* ___headerKey1, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___headerKey1' to native representation
	char* ____headerKey1_marshaled = NULL;
	____headerKey1_marshaled = il2cpp_codegen_marshal_string(___headerKey1);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_GetCustomHeaderValue)(___instance0, ____headerKey1_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___headerKey1' native representation
	il2cpp_codegen_marshal_free(____headerKey1_marshaled);
	____headerKey1_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void IOSWebViewWindow::_CWebViewPlugin_RemoveCustomHeader(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_RemoveCustomHeader_mDE7B29F5E4DB36272ADAB94B5BC80C9686F80061 (intptr_t ___instance0, String_t* ___headerKey1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___headerKey1' to native representation
	char* ____headerKey1_marshaled = NULL;
	____headerKey1_marshaled = il2cpp_codegen_marshal_string(___headerKey1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_RemoveCustomHeader)(___instance0, ____headerKey1_marshaled);

	// Marshaling cleanup of parameter '___headerKey1' native representation
	il2cpp_codegen_marshal_free(____headerKey1_marshaled);
	____headerKey1_marshaled = NULL;

}
// System.Void IOSWebViewWindow::_CWebViewPlugin_ClearCustomHeader(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_ClearCustomHeader_mE747D696C47437AAADA96E345DC2A0DAE1EFC80B (intptr_t ___instance0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_ClearCustomHeader)(___instance0);

}
// System.Void IOSWebViewWindow::_CWebViewPlugin_ClearCookies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_ClearCookies_m7D34B247EC9A7229527ADA200EB3C89D9130AD41 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_ClearCookies)();

}
// System.Void IOSWebViewWindow::_CWebViewPlugin_SaveCookies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_SaveCookies_m9393D622486B75F465AC4D74360BCAB5BAE8B28C (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_SaveCookies)();

}
// System.String IOSWebViewWindow::_CWebViewPlugin_GetCookies(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWebViewWindow__CWebViewPlugin_GetCookies_mE3A23B2A9B0EB41E42FADA315904374AED245D8C (String_t* ___url0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___url0' to native representation
	char* ____url0_marshaled = NULL;
	____url0_marshaled = il2cpp_codegen_marshal_string(___url0);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_GetCookies)(____url0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___url0' native representation
	il2cpp_codegen_marshal_free(____url0_marshaled);
	____url0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void IOSWebViewWindow::_CWebViewPlugin_SetBasicAuthInfo(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_SetBasicAuthInfo_m5875DDB1B330AD1563D4F837C375FEC4A4A73A70 (intptr_t ___instance0, String_t* ___userName1, String_t* ___password2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, char*);

	// Marshaling of parameter '___userName1' to native representation
	char* ____userName1_marshaled = NULL;
	____userName1_marshaled = il2cpp_codegen_marshal_string(___userName1);

	// Marshaling of parameter '___password2' to native representation
	char* ____password2_marshaled = NULL;
	____password2_marshaled = il2cpp_codegen_marshal_string(___password2);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_SetBasicAuthInfo)(___instance0, ____userName1_marshaled, ____password2_marshaled);

	// Marshaling cleanup of parameter '___userName1' native representation
	il2cpp_codegen_marshal_free(____userName1_marshaled);
	____userName1_marshaled = NULL;

	// Marshaling cleanup of parameter '___password2' native representation
	il2cpp_codegen_marshal_free(____password2_marshaled);
	____password2_marshaled = NULL;

}
// System.Void IOSWebViewWindow::_CWebViewPlugin_ClearCache(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__CWebViewPlugin_ClearCache_m1090C720AEEE4A6FFE405E6253A42E751001A6AA (intptr_t ___instance0, bool ___includeDiskFiles1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_CWebViewPlugin_ClearCache)(___instance0, static_cast<int32_t>(___includeDiskFiles1));

}
// System.Void IOSWebViewWindow::Init(WebViewOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow_Init_mB4BC20B307030EAE0A66C2DF79AA84D5B380E0B3 (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, WebViewOptions_t1A01579D5E863A19168226D60B503DFDC33AD989 * ___options0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (!Application.HasUserAuthorization(UserAuthorization.WebCam))
		bool L_0;
		L_0 = Application_HasUserAuthorization_mF2B71D5CC9F37FF5B600D495F9D57F9ABB77ECAC(1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Application.RequestUserAuthorization(UserAuthorization.WebCam);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_2;
		L_2 = Application_RequestUserAuthorization_mDA4EC05A984AC8CE9B7EB2B3038D0F2A124442B6(1, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// webView = _CWebViewPlugin_Init(name, options.Transparent, options.Zoom, options.UA, options.EnableWKWebView, (int)options.WKContentMode);
		String_t* L_3;
		L_3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		WebViewOptions_t1A01579D5E863A19168226D60B503DFDC33AD989 * L_4 = ___options0;
		NullCheck(L_4);
		bool L_5 = L_4->get_Transparent_0();
		WebViewOptions_t1A01579D5E863A19168226D60B503DFDC33AD989 * L_6 = ___options0;
		NullCheck(L_6);
		bool L_7 = L_6->get_Zoom_1();
		WebViewOptions_t1A01579D5E863A19168226D60B503DFDC33AD989 * L_8 = ___options0;
		NullCheck(L_8);
		String_t* L_9 = L_8->get_UA_2();
		WebViewOptions_t1A01579D5E863A19168226D60B503DFDC33AD989 * L_10 = ___options0;
		NullCheck(L_10);
		bool L_11 = L_10->get_EnableWKWebView_4();
		WebViewOptions_t1A01579D5E863A19168226D60B503DFDC33AD989 * L_12 = ___options0;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_WKContentMode_5();
		intptr_t L_14;
		L_14 = IOSWebViewWindow__CWebViewPlugin_Init_mA561001589A85CB3262D544AB92144701BDE16EB(L_3, L_5, L_7, L_9, L_11, L_13, /*hidden argument*/NULL);
		__this->set_webView_20((intptr_t)L_14);
		// }
		return;
	}
}
// System.Void IOSWebViewWindow::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow_SetMargins_m2EBEE5F0CFB440AE5F7C190DE5470555A59EB37C (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, int32_t ___left0, int32_t ___top1, int32_t ___right2, int32_t ___bottom3, const RuntimeMethod* method)
{
	{
		// _CWebViewPlugin_SetMargins(webView, left, top, right, bottom, false);
		intptr_t L_0 = __this->get_webView_20();
		int32_t L_1 = ___left0;
		int32_t L_2 = ___top1;
		int32_t L_3 = ___right2;
		int32_t L_4 = ___bottom3;
		IOSWebViewWindow__CWebViewPlugin_SetMargins_m53E99E84B567EDE07140F5374E7B170AA4C2F9AE((intptr_t)L_0, ((float)((float)L_1)), ((float)((float)L_2)), ((float)((float)L_3)), ((float)((float)L_4)), (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean IOSWebViewWindow::get_IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOSWebViewWindow_get_IsVisible_mED2BE763BF10963876D129ACD1EC2013606D8992 (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return isVisible;
		bool L_0 = ((WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B *)__this)->get_isVisible_16();
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
// System.Void IOSWebViewWindow::set_IsVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow_set_IsVisible_m1F9A136CE55FECBAAB5ADD56DEB0557433F3FCFC (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// isVisible = value;
		bool L_0 = ___value0;
		((WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B *)__this)->set_isVisible_16(L_0);
		// _CWebViewPlugin_SetVisibility(webView, value);
		intptr_t L_1 = __this->get_webView_20();
		bool L_2 = ___value0;
		IOSWebViewWindow__CWebViewPlugin_SetVisibility_m55CC4B0FA8DA545B938F5398BC7C7A78E5DB26B7((intptr_t)L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean IOSWebViewWindow::get_IsKeyboardVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOSWebViewWindow_get_IsKeyboardVisible_mFC3E206064632FF4BF7FAEAB831CFBCE192C86C8 (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return  TouchScreenKeyboard.visible;
		bool L_0;
		L_0 = TouchScreenKeyboard_get_visible_m9099838FFE020BEAC716B29F5F47FBC831710549(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void IOSWebViewWindow::set_IsKeyboardVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow_set_IsKeyboardVisible_m826ECF263466C3D014903B372FF7AA3B45157E9A (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75D50314061E23E4B56389DAABD2C476AC3ECAE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("Overwritten by [TouchScreenKeyboard.visible]");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral75D50314061E23E4B56389DAABD2C476AC3ECAE1, /*hidden argument*/NULL);
		// iskeyboardVisible = TouchScreenKeyboard.visible;
		bool L_0;
		L_0 = TouchScreenKeyboard_get_visible_m9099838FFE020BEAC716B29F5F47FBC831710549(/*hidden argument*/NULL);
		((WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B *)__this)->set_iskeyboardVisible_17(L_0);
		// SetMargins(marginLeft, marginTop, marginRight, marginBottom);
		int32_t L_1 = ((WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B *)__this)->get_marginLeft_10();
		int32_t L_2 = ((WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B *)__this)->get_marginTop_11();
		int32_t L_3 = ((WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B *)__this)->get_marginRight_12();
		int32_t L_4 = ((WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B *)__this)->get_marginBottom_13();
		VirtActionInvoker4< int32_t, int32_t, int32_t, int32_t >::Invoke(13 /* System.Void WebViewWindowBase::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32) */, __this, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Boolean IOSWebViewWindow::get_AlertDialogEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOSWebViewWindow_get_AlertDialogEnabled_m8C15D8BC5840BCC9CD0E809AC73CB61754639B44 (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return alertDialogEnabled;
		bool L_0 = ((WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B *)__this)->get_alertDialogEnabled_18();
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
// System.Void IOSWebViewWindow::set_AlertDialogEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow_set_AlertDialogEnabled_m6A9AC0A89E7E213B3D1214454A14ABEAA79BE1F6 (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// alertDialogEnabled = value;
		bool L_0 = ___value0;
		((WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B *)__this)->set_alertDialogEnabled_18(L_0);
		// _CWebViewPlugin_SetAlertDialogEnabled(webView, value);
		intptr_t L_1 = __this->get_webView_20();
		bool L_2 = ___value0;
		IOSWebViewWindow__CWebViewPlugin_SetAlertDialogEnabled_m3AF7FB9E6555E35D47A2894E5A3D07BB2B7808F6((intptr_t)L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean IOSWebViewWindow::get_ScrollBounceEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOSWebViewWindow_get_ScrollBounceEnabled_m5DC3FAE7DE2BA84EBDE8B011D1FDDA868CE6D0B1 (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return scrollBounceEnabled;
		bool L_0 = ((WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B *)__this)->get_scrollBounceEnabled_19();
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
// System.Void IOSWebViewWindow::set_ScrollBounceEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow_set_ScrollBounceEnabled_m79F57F4712EC27F2E2D8E5355A9CB2B0731F0B2D (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// scrollBounceEnabled = value;
		bool L_0 = ___value0;
		((WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B *)__this)->set_scrollBounceEnabled_19(L_0);
		// _CWebViewPlugin_SetScrollBounceEnabled(webView, value);
		intptr_t L_1 = __this->get_webView_20();
		bool L_2 = ___value0;
		IOSWebViewWindow__CWebViewPlugin_SetScrollBounceEnabled_m67BF74E8E487750CDFE7236D34160E8919299AE4((intptr_t)L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IOSWebViewWindow::LoadURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow_LoadURL_m312CBDD82DAD26FAB4B86886B190CCD2D659EA75 (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, String_t* ___url0, const RuntimeMethod* method)
{
	{
		// _CWebViewPlugin_LoadURL(webView, url);
		intptr_t L_0 = __this->get_webView_20();
		String_t* L_1 = ___url0;
		IOSWebViewWindow__CWebViewPlugin_LoadURL_m9AE1ACA41C5FBB4E3555D6085E004CDE5F70478D((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IOSWebViewWindow::LoadHTML(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow_LoadHTML_mD72657829B22EEA9788AF97977C410A714F513CA (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, String_t* ___html0, String_t* ___baseUrl1, const RuntimeMethod* method)
{
	{
		// _CWebViewPlugin_LoadHTML(webView, html, baseUrl);
		intptr_t L_0 = __this->get_webView_20();
		String_t* L_1 = ___html0;
		String_t* L_2 = ___baseUrl1;
		IOSWebViewWindow__CWebViewPlugin_LoadHTML_m18EB2CF9A6D89623A6FC20FC91AC7329602375F6((intptr_t)L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IOSWebViewWindow::EvaluateJS(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow_EvaluateJS_m161EA7C28F6BC0A82DA92FE550E1F3C37A1EFDF9 (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, String_t* ___js0, const RuntimeMethod* method)
{
	{
		// _CWebViewPlugin_EvaluateJS(webView, js);
		intptr_t L_0 = __this->get_webView_20();
		String_t* L_1 = ___js0;
		IOSWebViewWindow__CWebViewPlugin_EvaluateJS_m8635A850F52CA1F02FEDC8CF3B38FFA2B884BE89((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 IOSWebViewWindow::get_Progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IOSWebViewWindow_get_Progress_m435E9828FBE5E1385A769670BAEFF98044E53B42 (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, const RuntimeMethod* method)
{
	{
		// public override int Progress => _CWebViewPlugin_Progress(webView);
		intptr_t L_0 = __this->get_webView_20();
		int32_t L_1;
		L_1 = IOSWebViewWindow__CWebViewPlugin_Progress_mA6830CD61BA0A7B8CAC35F9413C7E5BF0A06B677((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean IOSWebViewWindow::CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOSWebViewWindow_CanGoBack_mEA0072F0C9B450F86D0E5C5BBA7A9F605DFF5398 (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, const RuntimeMethod* method)
{
	{
		// public override bool CanGoBack() => _CWebViewPlugin_CanGoBack(webView);
		intptr_t L_0 = __this->get_webView_20();
		bool L_1;
		L_1 = IOSWebViewWindow__CWebViewPlugin_CanGoBack_mD64EDA3F3035BA530655D81BAC4874FF91FC67CE((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean IOSWebViewWindow::CanGoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOSWebViewWindow_CanGoForward_m80B1D08356337946F97D3C2F372CDF601B624669 (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, const RuntimeMethod* method)
{
	{
		// public override bool CanGoForward() => _CWebViewPlugin_CanGoForward(webView);
		intptr_t L_0 = __this->get_webView_20();
		bool L_1;
		L_1 = IOSWebViewWindow__CWebViewPlugin_CanGoForward_mBB5CD20BDACA062020F0060ACC8239466D60EC90((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void IOSWebViewWindow::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow_GoBack_m1973B7EFD8EB3CAEEE196231624DD6B1DB46B854 (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, const RuntimeMethod* method)
{
	{
		// public override void GoBack() => _CWebViewPlugin_GoBack(webView);
		intptr_t L_0 = __this->get_webView_20();
		IOSWebViewWindow__CWebViewPlugin_GoBack_mCC98226CD59C644E701DFB075C6BBAA584F37242((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSWebViewWindow::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow_GoForward_m3EC919E4E39DA8599CD03837B89E01A0D4B4A0E5 (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, const RuntimeMethod* method)
{
	{
		// public override void GoForward() => _CWebViewPlugin_GoForward(webView);
		intptr_t L_0 = __this->get_webView_20();
		IOSWebViewWindow__CWebViewPlugin_GoForward_m79BD89DCAE99775C28D4EE3D401773D4D11BCA99((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSWebViewWindow::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow_Reload_m3D29A8DD5520A59D265763FDC35259A14EAA8E36 (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, const RuntimeMethod* method)
{
	{
		// public override void Reload() => _CWebViewPlugin_Reload(webView);
		intptr_t L_0 = __this->get_webView_20();
		IOSWebViewWindow__CWebViewPlugin_Reload_mE177B9AAA6CCB2A43E469DA4FC8EF37C5B8376EA((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSWebViewWindow::AddCustomHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow_AddCustomHeader_mA056E9F520C9100AA6FC4D7CC13911F14EA7B75B (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		// public override void AddCustomHeader(string key, string value) => _CWebViewPlugin_AddCustomHeader(webView, key, value);
		intptr_t L_0 = __this->get_webView_20();
		String_t* L_1 = ___key0;
		String_t* L_2 = ___value1;
		IOSWebViewWindow__CWebViewPlugin_AddCustomHeader_mEA0F4BB5B21389447C2BE9F851AFD77FB755FEFC((intptr_t)L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String IOSWebViewWindow::GetCustomHeaderValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWebViewWindow_GetCustomHeaderValue_m21272A266DCB5B4556DC9724AEC6F6EB18F2549B (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	{
		// public override string GetCustomHeaderValue(string key) => _CWebViewPlugin_GetCustomHeaderValue(webView, key);
		intptr_t L_0 = __this->get_webView_20();
		String_t* L_1 = ___key0;
		String_t* L_2;
		L_2 = IOSWebViewWindow__CWebViewPlugin_GetCustomHeaderValue_m4EF87421C26E6C493F7FDA66B05D674FFCA83661((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void IOSWebViewWindow::RemoveCustomHeader(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow_RemoveCustomHeader_mDB037FE9D14873E6BC4434150E9235BFCB0F5910 (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	{
		// public override void RemoveCustomHeader(string key) => _CWebViewPlugin_RemoveCustomHeader(webView, key);
		intptr_t L_0 = __this->get_webView_20();
		String_t* L_1 = ___key0;
		IOSWebViewWindow__CWebViewPlugin_RemoveCustomHeader_mDE7B29F5E4DB36272ADAB94B5BC80C9686F80061((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSWebViewWindow::ClearCustomHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow_ClearCustomHeader_m36E9E1839FBF9005DC3CAAC9E58D6E87C593EAC0 (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, const RuntimeMethod* method)
{
	{
		// public override void ClearCustomHeader() => _CWebViewPlugin_ClearCustomHeader(webView);
		intptr_t L_0 = __this->get_webView_20();
		IOSWebViewWindow__CWebViewPlugin_ClearCustomHeader_mE747D696C47437AAADA96E345DC2A0DAE1EFC80B((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSWebViewWindow::ClearCache(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow_ClearCache_m9360B768554891BB73A97955CE0F24625C76E560 (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, bool ___includeDiskFiles0, const RuntimeMethod* method)
{
	{
		// public override void ClearCache(bool includeDiskFiles) => _CWebViewPlugin_ClearCache(webView, includeDiskFiles);
		intptr_t L_0 = __this->get_webView_20();
		bool L_1 = ___includeDiskFiles0;
		IOSWebViewWindow__CWebViewPlugin_ClearCache_m1090C720AEEE4A6FFE405E6253A42E751001A6AA((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSWebViewWindow::ClearCookies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow_ClearCookies_m59DC8F00214840CE6CFF8314D1C7114B7F25A943 (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, const RuntimeMethod* method)
{
	{
		// public override void ClearCookies() => _CWebViewPlugin_ClearCookies();
		IOSWebViewWindow__CWebViewPlugin_ClearCookies_m7D34B247EC9A7229527ADA200EB3C89D9130AD41(/*hidden argument*/NULL);
		return;
	}
}
// System.String IOSWebViewWindow::GetCookies(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOSWebViewWindow_GetCookies_m755484C8736C73B6D7761AC9BDA2C580571437DE (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, String_t* ___url0, const RuntimeMethod* method)
{
	{
		// public override string GetCookies(string url) => _CWebViewPlugin_GetCookies(url);
		String_t* L_0 = ___url0;
		String_t* L_1;
		L_1 = IOSWebViewWindow__CWebViewPlugin_GetCookies_mE3A23B2A9B0EB41E42FADA315904374AED245D8C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void IOSWebViewWindow::SaveCookies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow_SaveCookies_mC7B7C28023605284FD744725DAF13F683BD55D7C (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, const RuntimeMethod* method)
{
	{
		// public override void SaveCookies() => _CWebViewPlugin_SaveCookies();
		IOSWebViewWindow__CWebViewPlugin_SaveCookies_m9393D622486B75F465AC4D74360BCAB5BAE8B28C(/*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSWebViewWindow::SetBasicAuthInfo(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow_SetBasicAuthInfo_m98E27EB4E4F62BA3A7B12BB819DF7D2E577F0A58 (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, String_t* ___userName0, String_t* ___password1, const RuntimeMethod* method)
{
	{
		// public override void SetBasicAuthInfo(string userName, string password) => _CWebViewPlugin_SetBasicAuthInfo(webView, userName, password);
		intptr_t L_0 = __this->get_webView_20();
		String_t* L_1 = ___userName0;
		String_t* L_2 = ___password1;
		IOSWebViewWindow__CWebViewPlugin_SetBasicAuthInfo_m5875DDB1B330AD1563D4F837C375FEC4A4A73A70((intptr_t)L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IOSWebViewWindow::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow_OnDestroy_m36160311454E70EAB1B9DF19D926E968E0E06747 (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _CWebViewPlugin_Destroy(webView);
		intptr_t L_0 = __this->get_webView_20();
		int32_t L_1;
		L_1 = IOSWebViewWindow__CWebViewPlugin_Destroy_mE9B609F7DE84E0C900A08FD3C7BFE8F505E1AC16((intptr_t)L_0, /*hidden argument*/NULL);
		// webView = IntPtr.Zero;
		__this->set_webView_20((intptr_t)(0));
		// }
		return;
	}
}
// System.Void IOSWebViewWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSWebViewWindow__ctor_m49B74897B99AD6058008E80DB6064B73867600BD (IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * __this, const RuntimeMethod* method)
{
	{
		WebViewWindowBase__ctor_m8697F9255B4A388AF8F5828B6D24667BE756A90F(__this, /*hidden argument*/NULL);
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
// System.Void MessagePanel::SetMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagePanel_SetMessage_mB4CF5A8B2D5A70EA3633B422CA1673037D7F099F (MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// messageLabel.text = message;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_messageLabel_5();
		String_t* L_1 = ___message0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void MessagePanel::SetMessage(MessagePanel/MessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagePanel_SetMessage_m07CA54A54E5887B9B95164FC8D143155AF93C1F5 (MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD * __this, int32_t ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE97DCC47F47A720555FC2651CB3D91F6626A4F07_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// messageLabel.text = messageDict[type];
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_messageLabel_5();
		Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB * L_1 = __this->get_messageDict_4();
		int32_t L_2 = ___type0;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = Dictionary_2_get_Item_mE97DCC47F47A720555FC2651CB3D91F6626A4F07(L_1, L_2, /*hidden argument*/Dictionary_2_get_Item_mE97DCC47F47A720555FC2651CB3D91F6626A4F07_RuntimeMethod_var);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void MessagePanel::SetVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagePanel_SetVisible_m5B50370A1F89681726796BD005CF77F2D6AC9FAF (MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD * __this, bool ___visible0, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(visible);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_1 = ___visible0;
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MessagePanel::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagePanel_SetMargins_mC89A03056C1FCE01EB91EBEC64FF679C8DBF5479 (MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD * __this, int32_t ___left0, int32_t ___top1, int32_t ___right2, int32_t ___bottom3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * V_0 = NULL;
	{
		// RectTransform rect = transform as RectTransform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		V_0 = ((RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)IsInstSealed((RuntimeObject*)L_0, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var));
		// rect.offsetMax = new Vector2(-right, -top);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = V_0;
		int32_t L_2 = ___right2;
		int32_t L_3 = ___top1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), ((float)((float)((-L_2)))), ((float)((float)((-L_3)))), /*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_set_offsetMax_m5FDE1063C8BA1EC98D3C57C58DD2A1B9B721A8BF(L_1, L_4, /*hidden argument*/NULL);
		// rect.offsetMin = new Vector2(left, bottom);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5 = V_0;
		int32_t L_6 = ___left0;
		int32_t L_7 = ___bottom3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)((float)L_6)), ((float)((float)L_7)), /*hidden argument*/NULL);
		NullCheck(L_5);
		RectTransform_set_offsetMin_m86D7818770137C150B70A3842EBF03F494C34271(L_5, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MessagePanel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagePanel__ctor_m692B5C9F1433E575DEC85201D53FF10188222526 (MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4C8CEB4E6921B6E5C59BA000F0EAEF3B625B1467_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m390459B46602BF0AFD03E4B4D4A2FA1AD3070285_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE86F00232CDCD6B0AE55F07CC02A298271564FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC757C1AF462C455DA292F07F8DC5D584F694ACF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA76FC365E77B00EDA6D5C7CA58C51A2BCB7F602);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<MessageType, string> messageDict = new Dictionary<MessageType, string>()
		// {
		//     {MessageType.Loading, "Loading..." },
		//     {MessageType.NetworkError, "Network is not reachable." },
		//     {MessageType.NotSupported, "WebView browser is only supported on Android or iOS.\n \nBuild and run on device to test." }
		// };
		Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB * L_0 = (Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB *)il2cpp_codegen_object_new(Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m390459B46602BF0AFD03E4B4D4A2FA1AD3070285(L_0, /*hidden argument*/Dictionary_2__ctor_m390459B46602BF0AFD03E4B4D4A2FA1AD3070285_RuntimeMethod_var);
		Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB * L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_m4C8CEB4E6921B6E5C59BA000F0EAEF3B625B1467(L_1, 0, _stringLiteralBE86F00232CDCD6B0AE55F07CC02A298271564FA, /*hidden argument*/Dictionary_2_Add_m4C8CEB4E6921B6E5C59BA000F0EAEF3B625B1467_RuntimeMethod_var);
		Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB * L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_m4C8CEB4E6921B6E5C59BA000F0EAEF3B625B1467(L_2, 1, _stringLiteralCC757C1AF462C455DA292F07F8DC5D584F694ACF, /*hidden argument*/Dictionary_2_Add_m4C8CEB4E6921B6E5C59BA000F0EAEF3B625B1467_RuntimeMethod_var);
		Dictionary_2_tCB4F1699F3CA0FA180C07C0772A5E1C228C90CCB * L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_m4C8CEB4E6921B6E5C59BA000F0EAEF3B625B1467(L_3, 2, _stringLiteralFA76FC365E77B00EDA6D5C7CA58C51A2BCB7F602, /*hidden argument*/Dictionary_2_Add_m4C8CEB4E6921B6E5C59BA000F0EAEF3B625B1467_RuntimeMethod_var);
		__this->set_messageDict_4(L_3);
		// [SerializeField] private Text messageLabel = null;
		__this->set_messageLabel_5((Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 *)NULL);
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
// System.String PartnerSO::GetUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartnerSO_GetUrl_m731303133C8ED51AD22B6F8575B56F3D7C76B2E7 (PartnerSO_tFF6BFFA46059F8F874B42CCCD162EBAC4E489BDE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C50188F739C20415B4412C00511AF3E8E52F497);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return $"https://{GetSubdomain()}.readyplayer.me/avatar?frameApi";
		String_t* L_0;
		L_0 = PartnerSO_GetSubdomain_mA3077209B8F2F8380AE307E256F73B80AF80BD52(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2, L_0, _stringLiteral5C50188F739C20415B4412C00511AF3E8E52F497, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String PartnerSO::GetSubdomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartnerSO_GetSubdomain_mA3077209B8F2F8380AE307E256F73B80AF80BD52 (PartnerSO_tFF6BFFA46059F8F874B42CCCD162EBAC4E489BDE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE70104D82091DB49D9519330472492177C05ECB5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		// if (string.IsNullOrEmpty(Subdomain)) Subdomain = "demo";
		String_t* L_0 = __this->get_Subdomain_4();
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// if (string.IsNullOrEmpty(Subdomain)) Subdomain = "demo";
		__this->set_Subdomain_4(_stringLiteralE70104D82091DB49D9519330472492177C05ECB5);
	}

IL_001b:
	{
		// return Subdomain;
		String_t* L_3 = __this->get_Subdomain_4();
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.Void PartnerSO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartnerSO__ctor_mCAC0F1449256CBB70692AA70F029332E72616FA3 (PartnerSO_tFF6BFFA46059F8F874B42CCCD162EBAC4E489BDE * __this, const RuntimeMethod* method)
{
	{
		// public string Subdomain = null;
		__this->set_Subdomain_4((String_t*)NULL);
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
// Conversion methods for marshalling of: WebMessage
IL2CPP_EXTERN_C void WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36_marshal_pinvoke(const WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36& unmarshaled, WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36_marshaled_pinvoke& marshaled)
{
	Exception_t* ___data_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'data' of type 'WebMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___data_3Exception, NULL);
}
IL2CPP_EXTERN_C void WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36_marshal_pinvoke_back(const WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36_marshaled_pinvoke& marshaled, WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36& unmarshaled)
{
	Exception_t* ___data_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'data' of type 'WebMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___data_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: WebMessage
IL2CPP_EXTERN_C void WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36_marshal_pinvoke_cleanup(WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: WebMessage
IL2CPP_EXTERN_C void WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36_marshal_com(const WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36& unmarshaled, WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36_marshaled_com& marshaled)
{
	Exception_t* ___data_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'data' of type 'WebMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___data_3Exception, NULL);
}
IL2CPP_EXTERN_C void WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36_marshal_com_back(const WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36_marshaled_com& marshaled, WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36& unmarshaled)
{
	Exception_t* ___data_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'data' of type 'WebMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___data_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: WebMessage
IL2CPP_EXTERN_C void WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36_marshal_com_cleanup(WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean WebView::get_Loaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebView_get_Loaded_m2153ADABEBAE9B1C7A82984ECF5FAE698437317A (WebView_tB15A3B3EE1064AF86D64435F35306972B4D7F1ED * __this, const RuntimeMethod* method)
{
	{
		// public bool Loaded { get; private set; }
		bool L_0 = __this->get_U3CLoadedU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void WebView::set_Loaded(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebView_set_Loaded_m17921B9CC187303A880D1ED05927D38C8B33EE37 (WebView_tB15A3B3EE1064AF86D64435F35306972B4D7F1ED * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Loaded { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CLoadedU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.Void WebView::CreateWebView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebView_CreateWebView_mAEE0907090917285A0462E2C15F22105AF94219B (WebView_tB15A3B3EE1064AF86D64435F35306972B4D7F1ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisIOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213_m28EF6BA433F6DBE3AE928892C73EEDC2BF8F8A4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisPartnerSO_tFF6BFFA46059F8F874B42CCCD162EBAC4E489BDE_m47AA2AF0D7A2EB44C9EF1FF058F334D1729B5BAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewOptions_t1A01579D5E863A19168226D60B503DFDC33AD989_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebView_OnLoaded_m3D9296400D062EE8F1719CC8F9C440F28BEF00A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebView_OnWebMessageReceived_m8CAF51DBAC186226181597BC65DFF93D0FB8F451_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ECE23D6533EA6375C15187EDBCE0ABE2200FD28);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	WebViewOptions_t1A01579D5E863A19168226D60B503DFDC33AD989 * V_1 = NULL;
	PartnerSO_tFF6BFFA46059F8F874B42CCCD162EBAC4E489BDE * V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		// if (Application.internetReachability == NetworkReachability.NotReachable)
		int32_t L_0;
		L_0 = Application_get_internetReachability_m039C30126BD989614BF2A4A3F33129177A95C61C(/*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// messagePanel.SetMessage(MessagePanel.MessageType.NetworkError);
		MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD * L_2 = __this->get_messagePanel_8();
		NullCheck(L_2);
		MessagePanel_SetMessage_m07CA54A54E5887B9B95164FC8D143155AF93C1F5(L_2, 1, /*hidden argument*/NULL);
		// messagePanel.SetVisible(true);
		MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD * L_3 = __this->get_messagePanel_8();
		NullCheck(L_3);
		MessagePanel_SetVisible_m5B50370A1F89681726796BD005CF77F2D6AC9FAF(L_3, (bool)1, /*hidden argument*/NULL);
		goto IL_00cf;
	}

IL_002e:
	{
		// if (webViewObject == null)
		WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B * L_4 = __this->get_webViewObject_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_5;
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_006e;
		}
	}
	{
		// messagePanel.SetMessage(MessagePanel.MessageType.Loading);
		MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD * L_7 = __this->get_messagePanel_8();
		NullCheck(L_7);
		MessagePanel_SetMessage_m07CA54A54E5887B9B95164FC8D143155AF93C1F5(L_7, 0, /*hidden argument*/NULL);
		// messagePanel.SetVisible(true);
		MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD * L_8 = __this->get_messagePanel_8();
		NullCheck(L_8);
		MessagePanel_SetVisible_m5B50370A1F89681726796BD005CF77F2D6AC9FAF(L_8, (bool)1, /*hidden argument*/NULL);
		// webViewObject = gameObject.AddComponent<IOSWebViewWindow>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		IOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213 * L_10;
		L_10 = GameObject_AddComponent_TisIOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213_m28EF6BA433F6DBE3AE928892C73EEDC2BF8F8A4E(L_9, /*hidden argument*/GameObject_AddComponent_TisIOSWebViewWindow_t5C4A40381DE458DDD2E0488562BAC36D08218213_m28EF6BA433F6DBE3AE928892C73EEDC2BF8F8A4E_RuntimeMethod_var);
		__this->set_webViewObject_7(L_10);
	}

IL_006e:
	{
		// webViewObject.OnLoaded = OnLoaded;
		WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B * L_11 = __this->get_webViewObject_7();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_12 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_12, __this, (intptr_t)((intptr_t)WebView_OnLoaded_m3D9296400D062EE8F1719CC8F9C440F28BEF00A9_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		NullCheck(L_11);
		L_11->set_OnLoaded_8(L_12);
		// webViewObject.OnJS = OnWebMessageReceived;
		WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B * L_13 = __this->get_webViewObject_7();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_14 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_14, __this, (intptr_t)((intptr_t)WebView_OnWebMessageReceived_m8CAF51DBAC186226181597BC65DFF93D0FB8F451_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		NullCheck(L_13);
		L_13->set_OnJS_4(L_14);
		// WebViewOptions options = new WebViewOptions();
		WebViewOptions_t1A01579D5E863A19168226D60B503DFDC33AD989 * L_15 = (WebViewOptions_t1A01579D5E863A19168226D60B503DFDC33AD989 *)il2cpp_codegen_object_new(WebViewOptions_t1A01579D5E863A19168226D60B503DFDC33AD989_il2cpp_TypeInfo_var);
		WebViewOptions__ctor_m39A15400C4E62B6FBAE07AE770D61E673ED173DC(L_15, /*hidden argument*/NULL);
		V_1 = L_15;
		// webViewObject.Init(options);
		WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B * L_16 = __this->get_webViewObject_7();
		WebViewOptions_t1A01579D5E863A19168226D60B503DFDC33AD989 * L_17 = V_1;
		NullCheck(L_16);
		VirtActionInvoker1< WebViewOptions_t1A01579D5E863A19168226D60B503DFDC33AD989 * >::Invoke(12 /* System.Void WebViewWindowBase::Init(WebViewOptions) */, L_16, L_17);
		// PartnerSO partner = Resources.Load<PartnerSO>("Partner");
		PartnerSO_tFF6BFFA46059F8F874B42CCCD162EBAC4E489BDE * L_18;
		L_18 = Resources_Load_TisPartnerSO_tFF6BFFA46059F8F874B42CCCD162EBAC4E489BDE_m47AA2AF0D7A2EB44C9EF1FF058F334D1729B5BAB(_stringLiteral6ECE23D6533EA6375C15187EDBCE0ABE2200FD28, /*hidden argument*/Resources_Load_TisPartnerSO_tFF6BFFA46059F8F874B42CCCD162EBAC4E489BDE_m47AA2AF0D7A2EB44C9EF1FF058F334D1729B5BAB_RuntimeMethod_var);
		V_2 = L_18;
		// string url = partner.GetUrl();
		PartnerSO_tFF6BFFA46059F8F874B42CCCD162EBAC4E489BDE * L_19 = V_2;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = PartnerSO_GetUrl_m731303133C8ED51AD22B6F8575B56F3D7C76B2E7(L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		// webViewObject.LoadURL(url);
		WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B * L_21 = __this->get_webViewObject_7();
		String_t* L_22 = V_3;
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void WebViewWindowBase::LoadURL(System.String) */, L_21, L_22);
	}

IL_00cf:
	{
		// SetScreenPadding(left, top, right, bottom);
		int32_t L_23 = __this->get_left_9();
		int32_t L_24 = __this->get_top_10();
		int32_t L_25 = __this->get_right_11();
		int32_t L_26 = __this->get_bottom_12();
		WebView_SetScreenPadding_m2E6E6D2F2EEE3CFC665663FA837E717EA191EC78(__this, L_23, L_24, L_25, L_26, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebView::SetScreenPadding(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebView_SetScreenPadding_m2E6E6D2F2EEE3CFC665663FA837E717EA191EC78 (WebView_tB15A3B3EE1064AF86D64435F35306972B4D7F1ED * __this, int32_t ___left0, int32_t ___top1, int32_t ___right2, int32_t ___bottom3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// this.left = left;
		int32_t L_0 = ___left0;
		__this->set_left_9(L_0);
		// this.top = top;
		int32_t L_1 = ___top1;
		__this->set_top_10(L_1);
		// this.right = right;
		int32_t L_2 = ___right2;
		__this->set_right_11(L_2);
		// this.bottom = bottom;
		int32_t L_3 = ___bottom3;
		__this->set_bottom_12(L_3);
		// if (webViewObject)
		WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B * L_4 = __this->get_webViewObject_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		// webViewObject.SetMargins(left, top, right, bottom);
		WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B * L_7 = __this->get_webViewObject_7();
		int32_t L_8 = ___left0;
		int32_t L_9 = ___top1;
		int32_t L_10 = ___right2;
		int32_t L_11 = ___bottom3;
		NullCheck(L_7);
		VirtActionInvoker4< int32_t, int32_t, int32_t, int32_t >::Invoke(13 /* System.Void WebViewWindowBase::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32) */, L_7, L_8, L_9, L_10, L_11);
	}

IL_0040:
	{
		// messagePanel.SetMargins(left, top, right, bottom);
		MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD * L_12 = __this->get_messagePanel_8();
		int32_t L_13 = ___left0;
		int32_t L_14 = ___top1;
		int32_t L_15 = ___right2;
		int32_t L_16 = ___bottom3;
		NullCheck(L_12);
		MessagePanel_SetMargins_mC89A03056C1FCE01EB91EBEC64FF679C8DBF5479(L_12, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebView::SetVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebView_SetVisible_m67F36DA7434581E4C4A70658C278E8585A151453 (WebView_tB15A3B3EE1064AF86D64435F35306972B4D7F1ED * __this, bool ___visible0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (webViewObject)
		WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B * L_0 = __this->get_webViewObject_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// webViewObject.IsVisible = visible;
		WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B * L_3 = __this->get_webViewObject_7();
		bool L_4 = ___visible0;
		NullCheck(L_3);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void WebViewWindowBase::set_IsVisible(System.Boolean) */, L_3, L_4);
		// messagePanel.SetVisible(visible);
		MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD * L_5 = __this->get_messagePanel_8();
		bool L_6 = ___visible0;
		NullCheck(L_5);
		MessagePanel_SetVisible_m5B50370A1F89681726796BD005CF77F2D6AC9FAF(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void WebView::OnWebMessageReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebView_OnWebMessageReceived_m8CAF51DBAC186226181597BC65DFF93D0FB8F451 (WebView_tB15A3B3EE1064AF86D64435F35306972B4D7F1ED * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4519CCC2D78183181E5B916CE527868718A804FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisWebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36_mD2CD27DA2A1EFAABA89BF670C491AC884617AE11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0458562336F91AC3F0C3FE71A886E75CE5C8F84A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18A3709EA856478AF45ABBD403B9D6BE5DACCDD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1E5373A42F76CF055D5606AC1B6117A2E3B584C);
		s_Il2CppMethodInitialized = true;
	}
	WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B5_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B4_0 = NULL;
	{
		// Debug.Log($"--- WebView Message: { message }");
		String_t* L_0 = ___message0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral18A3709EA856478AF45ABBD403B9D6BE5DACCDD9, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			// WebMessage webMessage = JsonConvert.DeserializeObject<WebMessage>(message);
			String_t* L_2 = ___message0;
			IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
			WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36  L_3;
			L_3 = JsonConvert_DeserializeObject_TisWebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36_mD2CD27DA2A1EFAABA89BF670C491AC884617AE11(L_2, /*hidden argument*/JsonConvert_DeserializeObject_TisWebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36_mD2CD27DA2A1EFAABA89BF670C491AC884617AE11_RuntimeMethod_var);
			V_0 = L_3;
			// if(webMessage.eventName == AvatarExportEventName)
			WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36  L_4 = V_0;
			String_t* L_5 = L_4.get_eventName_2();
			bool L_6;
			L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteralD1E5373A42F76CF055D5606AC1B6117A2E3B584C, /*hidden argument*/NULL);
			V_1 = L_6;
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_0068;
			}
		}

IL_002e:
		{
			// if (webMessage.data.TryGetValue(DataUrlFieldName, out string avatarUrl))
			WebMessage_t8B2C0617911435B86C364C591EA81598EBFD6B36  L_8 = V_0;
			Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_9 = L_8.get_data_3();
			NullCheck(L_9);
			bool L_10;
			L_10 = Dictionary_2_TryGetValue_m4519CCC2D78183181E5B916CE527868718A804FD(L_9, _stringLiteral0458562336F91AC3F0C3FE71A886E75CE5C8F84A, (String_t**)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m4519CCC2D78183181E5B916CE527868718A804FD_RuntimeMethod_var);
			V_3 = L_10;
			bool L_11 = V_3;
			if (!L_11)
			{
				goto IL_0067;
			}
		}

IL_0045:
		{
			// webViewObject.IsVisible = false;
			WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B * L_12 = __this->get_webViewObject_7();
			NullCheck(L_12);
			VirtActionInvoker1< bool >::Invoke(5 /* System.Void WebViewWindowBase::set_IsVisible(System.Boolean) */, L_12, (bool)0);
			// OnAvatarCreated?.Invoke(avatarUrl);
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_13 = __this->get_OnAvatarCreated_14();
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_14 = L_13;
			G_B4_0 = L_14;
			if (L_14)
			{
				G_B5_0 = L_14;
				goto IL_005f;
			}
		}

IL_005c:
		{
			goto IL_0066;
		}

IL_005f:
		{
			String_t* L_15 = V_2;
			NullCheck(G_B5_0);
			Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B5_0, L_15, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		}

IL_0066:
		{
		}

IL_0067:
		{
		}

IL_0068:
		{
			goto IL_008e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006b;
		}
		throw e;
	}

CATCH_006b:
	{ // begin catch(System.Exception)
		// catch(Exception e)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// Debug.Log($"--- Message is not JSON: { message }\nError Message: { e.Message }");
		String_t* L_16 = ___message0;
		Exception_t * L_17 = V_4;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_17);
		String_t* L_19;
		L_19 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A84ED735619745C343817F018A79DDC552C4238)), L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB84E84BCD9347EE36C5293F62BB8FF35359F63EA)), L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_19, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008e;
	} // end catch (depth: 1)

IL_008e:
	{
		// }
		return;
	}
}
// System.Void WebView::OnLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebView_OnLoaded_m3D9296400D062EE8F1719CC8F9C440F28BEF00A9 (WebView_tB15A3B3EE1064AF86D64435F35306972B4D7F1ED * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral301B85EE21FE45214CFF0F00BD4102041991FB87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral394FCBB2964542A8543520F5CA33D90C0F5EB8A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF406F0AEED56D35FB7FD79CCB3504488A7C6FF06);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (Loaded) return;
		bool L_0;
		L_0 = WebView_get_Loaded_m2153ADABEBAE9B1C7A82984ECF5FAE698437317A_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// if (Loaded) return;
		goto IL_0042;
	}

IL_000d:
	{
		// Debug.Log("--- WebView Loaded.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralF406F0AEED56D35FB7FD79CCB3504488A7C6FF06, /*hidden argument*/NULL);
		// webViewObject.EvaluateJS(@"
		//     document.cookie = 'webview=true';
		// 
		//     if (window && window.webkit && window.webkit.messageHandlers && window.webkit.messageHandlers.unityControl) {
		//         window.Unity = {
		//             call: function(msg) {
		//                 window.webkit.messageHandlers.unityControl.postMessage(msg);
		//             }
		//         }
		//     }
		//     else {
		//         window.Unity = {
		//             call: function(msg) {
		//                 window.location = 'unity:' + msg;
		//             }
		//         }
		//     }
		// 
		//     function subscribe(event) {
		//         const json = parse(event);
		//         const source = json.source;
		// 
		//         if (source !== 'readyplayerme') {
		//             return;
		//         }
		// 
		//         Unity.call(event.data);
		//     }
		// 
		//     function parse(event) {
		//         try {
		//             return JSON.parse(event.data);
		//         } catch (error) {
		//             return null;
		//         }
		//     }
		// 
		//     window.postMessage(
		//         JSON.stringify({
		//             target: 'readyplayerme',
		//             type: 'subscribe',
		//             eventName: 'v1.**'
		//         }),
		//         '*'
		//     );
		// 
		//     window.removeEventListener('message', subscribe);
		//     window.addEventListener('message', subscribe)
		// ");
		WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B * L_2 = __this->get_webViewObject_7();
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(16 /* System.Void WebViewWindowBase::EvaluateJS(System.String) */, L_2, _stringLiteral301B85EE21FE45214CFF0F00BD4102041991FB87);
		// Loaded = true;
		WebView_set_Loaded_m17921B9CC187303A880D1ED05927D38C8B33EE37_inline(__this, (bool)1, /*hidden argument*/NULL);
		// Invoke(nameof(DisplayWebView), 1f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral394FCBB2964542A8543520F5CA33D90C0F5EB8A2, (1.0f), /*hidden argument*/NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void WebView::DisplayWebView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebView_DisplayWebView_m54C7E632C6B58EA8266767D3CEEE4FFE7F51489A (WebView_tB15A3B3EE1064AF86D64435F35306972B4D7F1ED * __this, const RuntimeMethod* method)
{
	{
		// private void DisplayWebView() => webViewObject.IsVisible = true;
		WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B * L_0 = __this->get_webViewObject_7();
		NullCheck(L_0);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void WebViewWindowBase::set_IsVisible(System.Boolean) */, L_0, (bool)1);
		return;
	}
}
// System.Void WebView::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebView_OnDrawGizmos_m807744CCA27EFAD20FD6964511C3661534C25604 (WebView_tB15A3B3EE1064AF86D64435F35306972B4D7F1ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// RectTransform rectTransform = transform as RectTransform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		V_0 = ((RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)IsInstSealed((RuntimeObject*)L_0, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var));
		// Gizmos.matrix = rectTransform.localToWorldMatrix;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = V_0;
		NullCheck(L_1);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_2;
		L_2 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC(L_1, /*hidden argument*/NULL);
		Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C(L_2, /*hidden argument*/NULL);
		// Gizmos.color = Color.green;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_3, /*hidden argument*/NULL);
		// Vector3 center = new Vector3((left - right) / 2, (bottom - top) / 2);
		int32_t L_4 = __this->get_left_9();
		int32_t L_5 = __this->get_right_11();
		int32_t L_6 = __this->get_bottom_12();
		int32_t L_7 = __this->get_top_10();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), ((float)((float)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5))/(int32_t)2)))), ((float)((float)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7))/(int32_t)2)))), /*hidden argument*/NULL);
		// Vector3 size = new Vector3(rectTransform.rect.width - (left + right), rectTransform.rect.height - (bottom + top));
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_8 = V_0;
		NullCheck(L_8);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_9;
		L_9 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		float L_10;
		L_10 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		int32_t L_11 = __this->get_left_9();
		int32_t L_12 = __this->get_right_11();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_13 = V_0;
		NullCheck(L_13);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_14;
		L_14 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		float L_15;
		L_15 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		int32_t L_16 = __this->get_bottom_12();
		int32_t L_17 = __this->get_top_10();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), ((float)il2cpp_codegen_subtract((float)L_10, (float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12)))))), ((float)il2cpp_codegen_subtract((float)L_15, (float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17)))))), /*hidden argument*/NULL);
		// Gizmos.DrawWireCube(center, size);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_2;
		Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF(L_18, L_19, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebView__ctor_m006F2051F10D1B0A2683EEB179C4B1BF703E955B (WebView_tB15A3B3EE1064AF86D64435F35306972B4D7F1ED * __this, const RuntimeMethod* method)
{
	{
		// private WebViewWindowBase webViewObject = null;
		__this->set_webViewObject_7((WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B *)NULL);
		// [SerializeField] private MessagePanel messagePanel = null;
		__this->set_messagePanel_8((MessagePanel_t684B6E91DB3F96E01D06A817EEF3E0865EDCE7FD *)NULL);
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
// System.Void WebViewOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewOptions__ctor_m39A15400C4E62B6FBAE07AE770D61E673ED173DC (WebViewOptions_t1A01579D5E863A19168226D60B503DFDC33AD989 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool Transparent = false;
		__this->set_Transparent_0((bool)0);
		// public bool Zoom = false;
		__this->set_Zoom_1((bool)0);
		// public string UA = "";
		__this->set_UA_2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public ColorMode AndroidForceDarkMode = ColorMode.DarkModeOff;
		__this->set_AndroidForceDarkMode_3(1);
		// public bool EnableWKWebView = true;
		__this->set_EnableWKWebView_4((bool)1);
		// public WebkitContentMode WKContentMode = WebkitContentMode.Recommended;
		__this->set_WKContentMode_5(0);
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
// System.Void WebViewWindowBase::CallFromJS(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewWindowBase_CallFromJS_mAE8B934245DBA9C8C7FE43C78D93637067B9E607 (WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B2_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B1_0 = NULL;
	{
		// public void CallFromJS(string message) => OnJS?.Invoke(message);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_OnJS_4();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		String_t* L_2 = ___message0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B2_0, L_2, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
	}

IL_0013:
	{
		return;
	}
}
// System.Void WebViewWindowBase::CallOnHooked(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewWindowBase_CallOnHooked_mE5D3E01FCCD8069F2070D0706EB7789C63AB553B (WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B2_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B1_0 = NULL;
	{
		// public void CallOnHooked(string message) => OnHooked?.Invoke(message);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_OnHooked_9();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		String_t* L_2 = ___message0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B2_0, L_2, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
	}

IL_0013:
	{
		return;
	}
}
// System.Void WebViewWindowBase::CallOnLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewWindowBase_CallOnLoaded_m357319307F5DCB0E292779E1003F9479315D5BEE (WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B2_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B1_0 = NULL;
	{
		// public void CallOnLoaded(string url) => OnLoaded?.Invoke(url);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_OnLoaded_8();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		String_t* L_2 = ___url0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B2_0, L_2, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
	}

IL_0013:
	{
		return;
	}
}
// System.Void WebViewWindowBase::CallOnStarted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewWindowBase_CallOnStarted_m388D111FB25F0655407FE9DE02868B0F3CE779E4 (WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B2_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B1_0 = NULL;
	{
		// public void CallOnStarted(string url) => OnStarted?.Invoke(url);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_OnStarted_7();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		String_t* L_2 = ___url0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B2_0, L_2, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
	}

IL_0013:
	{
		return;
	}
}
// System.Void WebViewWindowBase::CallOnError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewWindowBase_CallOnError_mA5E42AB34FBEB655E73DC9403D2DEF6382D5BFB9 (WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B * __this, String_t* ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B2_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B1_0 = NULL;
	{
		// public void CallOnError(string error) => OnError?.Invoke(error);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_OnError_5();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		String_t* L_2 = ___error0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B2_0, L_2, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
	}

IL_0013:
	{
		return;
	}
}
// System.Void WebViewWindowBase::CallOnHttpError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewWindowBase_CallOnHttpError_m20913F55144C26A7175AE30B382A930E71391F3B (WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B * __this, String_t* ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B2_0 = NULL;
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * G_B1_0 = NULL;
	{
		// public void CallOnHttpError(string error) => OnHttpError?.Invoke(error);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_OnHttpError_6();
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		String_t* L_2 = ___error0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(G_B2_0, L_2, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
	}

IL_0013:
	{
		return;
	}
}
// System.Void WebViewWindowBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebViewWindowBase__ctor_m8697F9255B4A388AF8F5828B6D24667BE756A90F (WebViewWindowBase_tF0902B8EED02DF0A793DC16D017F4D20B083560B * __this, const RuntimeMethod* method)
{
	{
		// protected bool isVisible = false;
		__this->set_isVisible_16((bool)0);
		// protected bool iskeyboardVisible = false;
		__this->set_iskeyboardVisible_17((bool)0);
		// protected bool alertDialogEnabled = true;
		__this->set_alertDialogEnabled_18((bool)1);
		// protected bool scrollBounceEnabled = true;
		__this->set_scrollBounceEnabled_19((bool)1);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool WebView_get_Loaded_m2153ADABEBAE9B1C7A82984ECF5FAE698437317A_inline (WebView_tB15A3B3EE1064AF86D64435F35306972B4D7F1ED * __this, const RuntimeMethod* method)
{
	{
		// public bool Loaded { get; private set; }
		bool L_0 = __this->get_U3CLoadedU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebView_set_Loaded_m17921B9CC187303A880D1ED05927D38C8B33EE37_inline (WebView_tB15A3B3EE1064AF86D64435F35306972B4D7F1ED * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Loaded { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CLoadedU3Ek__BackingField_13(L_0);
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
