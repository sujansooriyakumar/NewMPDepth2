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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.EventHandler`1<NaturalPoint.NatNetLib.NatNetClient/NativeFrameReceivedEventArgs>
struct EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB;
// System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sForcePlateDescription>
struct List_1_t854F66645104B53E0C1EF24E8111D90E2563A36B;
// System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sMarkerSetDescription>
struct List_1_tC709C217B50945D05E12E3AA49B2E9C0249EFCF6;
// System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sRigidBodyDescription>
struct List_1_t9F435504E656EFBD3B7B25E9848E92FCD4BAE99D;
// System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sSkeletonDescription>
struct List_1_t9810C814F95BB4E90A3A37A2DF5538EA18A5D299;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// NaturalPoint.NatNetLib.sAnalogChannelData[]
struct sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE;
// NaturalPoint.NatNetLib.sChannelName[]
struct sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51;
// NaturalPoint.NatNetLib.sDataDescription[]
struct sDataDescriptionU5BU5D_t8BCADB0C438529DA8FD293E283308DE540600A8E;
// NaturalPoint.NatNetLib.sDeviceData[]
struct sDeviceDataU5BU5D_t71A3F7035113DA4E0B2CEC0F70A1A5A8DE7148D2;
// NaturalPoint.NatNetLib.sForcePlateData[]
struct sForcePlateDataU5BU5D_t8B906D337B2A01D2A0A5EC375345A403AD3AD16B;
// NaturalPoint.NatNetLib.sForcePlateDescription[]
struct sForcePlateDescriptionU5BU5D_t0366CF1AA8F8665F970D991CB7009FF5DF6B19F2;
// NaturalPoint.NatNetLib.sMarker[]
struct sMarkerU5BU5D_t4660E1FB80824989BE6B8D72046540FAD489E4CE;
// NaturalPoint.NatNetLib.sMarkerSetData[]
struct sMarkerSetDataU5BU5D_t7CAAE2772EABCB3EADCCA7BF97039B2DFE1C9118;
// NaturalPoint.NatNetLib.sMarkerSetDescription[]
struct sMarkerSetDescriptionU5BU5D_t1D0A68F6C22808CEF2EF13C4F8C1E0962F338396;
// NaturalPoint.NatNetLib.sRigidBodyData[]
struct sRigidBodyDataU5BU5D_t80B47D36737E8C7D314FE0A98A8600ADC440B482;
// NaturalPoint.NatNetLib.sRigidBodyDescription[]
struct sRigidBodyDescriptionU5BU5D_tFF98B2BAC77AD36C05964568CE1C2F0C475E7968;
// NaturalPoint.NatNetLib.sSkeletonData[]
struct sSkeletonDataU5BU5D_t73F3A5AEF62C20F97925305516ED03260D43B301;
// NaturalPoint.NatNetLib.sSkeletonDescription[]
struct sSkeletonDescriptionU5BU5D_t4348381AD5C969E49C1855BC07B7C146A7B6BB53;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// NaturalPoint.NatNetLib.NatNetClient
struct NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF;
// NaturalPoint.NatNetLib.NatNetException
struct NatNetException_tE207E10FDA92F73DF0EE67DF1DE8817B096B4DBF;
// NaturalPoint.NatNetLib.NatNetFrameReceivedCallback
struct NatNetFrameReceivedCallback_t097D075BB3EEB6CF2A2EAFE2E06D10E2C033D768;
// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// NaturalPoint.NatNetLib.sAnalogChannelData
struct sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5;
// NaturalPoint.NatNetLib.sChannelName
struct sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D;
// NaturalPoint.NatNetLib.sDeviceData
struct sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48;
// NaturalPoint.NatNetLib.sForcePlateData
struct sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6;
// NaturalPoint.NatNetLib.sMarkerSetData
struct sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6;
// NaturalPoint.NatNetLib.sNatNetClientConnectParams
struct sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86;
// NaturalPoint.NatNetLib.sRigidBodyDescription
struct sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B;
// NaturalPoint.NatNetLib.NatNetClient/DataDescriptions
struct DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120;
// NaturalPoint.NatNetLib.NatNetClient/NativeFrameReceivedEventArgs
struct NativeFrameReceivedEventArgs_t915E8504219907B33B999E6A040590C57B2DF4FF;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t854F66645104B53E0C1EF24E8111D90E2563A36B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9810C814F95BB4E90A3A37A2DF5538EA18A5D299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9F435504E656EFBD3B7B25E9848E92FCD4BAE99D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC709C217B50945D05E12E3AA49B2E9C0249EFCF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NatNetError_t44495251803672087C12F1CEC69D0029FF1F278D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NatNetException_tE207E10FDA92F73DF0EE67DF1DE8817B096B4DBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NatNetFrameReceivedCallback_t097D075BB3EEB6CF2A2EAFE2E06D10E2C033D768_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeFrameReceivedEventArgs_t915E8504219907B33B999E6A040590C57B2DF4FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* sDataDescriptionU5BU5D_t8BCADB0C438529DA8FD293E283308DE540600A8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* sDeviceDataU5BU5D_t71A3F7035113DA4E0B2CEC0F70A1A5A8DE7148D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* sForcePlateDataU5BU5D_t8B906D337B2A01D2A0A5EC375345A403AD3AD16B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* sMarkerSetDataU5BU5D_t7CAAE2772EABCB3EADCCA7BF97039B2DFE1C9118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* sMarkerU5BU5D_t4660E1FB80824989BE6B8D72046540FAD489E4CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* sRigidBodyDataU5BU5D_t80B47D36737E8C7D314FE0A98A8600ADC440B482_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* sRigidBodyDescriptionU5BU5D_tFF98B2BAC77AD36C05964568CE1C2F0C475E7968_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* sSkeletonDataU5BU5D_t73F3A5AEF62C20F97925305516ED03260D43B301_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral340810EFBE99725AE48C21CF720C2DFF3C8F17FB;
IL2CPP_EXTERN_C String_t* _stringLiteral3FF9B65C67764CB559DC9108A50591D3C50A9A2A;
IL2CPP_EXTERN_C String_t* _stringLiteral7C79E83D16506B6D319B7EE84A9D1644CEE3A75A;
IL2CPP_EXTERN_C String_t* _stringLiteral9EADFE1B926EC5F3995F5166C9FF6ED04B4DD97E;
IL2CPP_EXTERN_C String_t* _stringLiteralA16A52DB0699C7E7D885CCE0CF2AD8A33ED72C3B;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB5CE0EDF26E01323C585E28C436D4DBEBD19334D;
IL2CPP_EXTERN_C String_t* _stringLiteralB5F40534E4C56DAFBECC32001A964F581972A00B;
IL2CPP_EXTERN_C String_t* _stringLiteralBC365D721538994EBA9C9ABDF53160BD2C1678E3;
IL2CPP_EXTERN_C String_t* _stringLiteralC09FA2504E824075F09459E00C909172891CAC8F;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralD072BDAE5B7A46EFBB3E52CE86039E468EC9E0B3;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m9A582F8B7D2AFA72C7D8AA636246769DB269BFE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB24315227E1C53FE76CF8E9000C144904006165F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB5C4FF4DE7AE0FFB5E9EC41826B8DDB84F334BD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB60AC93C558414E2F6ABED44688983CA989D1856_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFAEED57377BBF882F74A18920F5DA29FA227A08F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m41AA6195366F7E854B6CFC8DA92F19F1AB3E8E75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7162A2003985C2D05DE4C5A881E6FFF2F9F00D63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC6A79D89F7C05C24E18A2E3730DCCCCE6D347E11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF7E13A2CB9F1323F224998BB4F8AE1D563A8094F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NatNetClient_FrameReceivedNativeThunk_mABA3F63EA4053DD5E0266DDBF7F9839C47BC244C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NatNetClient_ThrowIfDisposed_m1901652F3A888512ABBF7C22F178DA7C9CAF674E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NatNetClient__ctor_mE2BFDBB24F611AA76500B762555BD714A3B5D9E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NatNetException_ThrowIfNotOK_mCC2D685A30BA27CFAADC9377422A42EBF09E6B59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m2384399C33D8259B11A61416F8EE82B4C7A929F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m03143D2D5185B779A4B75F58148CD1A6C8E870DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m12438E9AF44A0EA7806AB39FCB72AF6B983FC3D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* sChannelName_op_Implicit_m7BCC7A982685379185A2D4077A63FADF4C5E91FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5;;
struct sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshaled_com;
struct sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshaled_com;;
struct sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshaled_pinvoke;
struct sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshaled_pinvoke;;
struct sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D;;
struct sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshaled_com;
struct sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshaled_com;;
struct sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshaled_pinvoke;
struct sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshaled_pinvoke;;
struct sDataDescription_t1867298897A36828F439BA80E1153554BD63407F ;
struct sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48;;
struct sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshaled_com;
struct sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshaled_com;;
struct sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshaled_pinvoke;
struct sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshaled_pinvoke;;
struct sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6;;
struct sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshaled_com;
struct sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshaled_com;;
struct sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshaled_pinvoke;
struct sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshaled_pinvoke;;
struct sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6;;
struct sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshaled_com;
struct sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshaled_com;;
struct sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshaled_pinvoke;
struct sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshaled_pinvoke;;
struct sMarker_t111D88AF8AF385236E954237EF1C2A2128918469 ;
struct sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86;;
struct sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshaled_pinvoke;
struct sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshaled_pinvoke;;
struct sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A ;
struct sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B;;
struct sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshaled_com;
struct sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshaled_com;;
struct sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshaled_pinvoke;
struct sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshaled_pinvoke;;
struct sSkeletonData_t3293D9837DEB8B9CA3576C13DD130134442E5D4B ;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE;
struct sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51;
struct sDataDescriptionU5BU5D_t8BCADB0C438529DA8FD293E283308DE540600A8E;
struct sDeviceDataU5BU5D_t71A3F7035113DA4E0B2CEC0F70A1A5A8DE7148D2;
struct sForcePlateDataU5BU5D_t8B906D337B2A01D2A0A5EC375345A403AD3AD16B;
struct sMarkerU5BU5D_t4660E1FB80824989BE6B8D72046540FAD489E4CE;
struct sMarkerSetDataU5BU5D_t7CAAE2772EABCB3EADCCA7BF97039B2DFE1C9118;
struct sRigidBodyDataU5BU5D_t80B47D36737E8C7D314FE0A98A8600ADC440B482;
struct sRigidBodyDescriptionU5BU5D_tFF98B2BAC77AD36C05964568CE1C2F0C475E7968;
struct sSkeletonDataU5BU5D_t73F3A5AEF62C20F97925305516ED03260D43B301;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t704D11A4A441A6DD86F4283B92843CD7C753F6AA 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sForcePlateDescription>
struct List_1_t854F66645104B53E0C1EF24E8111D90E2563A36B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	sForcePlateDescriptionU5BU5D_t0366CF1AA8F8665F970D991CB7009FF5DF6B19F2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t854F66645104B53E0C1EF24E8111D90E2563A36B, ____items_1)); }
	inline sForcePlateDescriptionU5BU5D_t0366CF1AA8F8665F970D991CB7009FF5DF6B19F2* get__items_1() const { return ____items_1; }
	inline sForcePlateDescriptionU5BU5D_t0366CF1AA8F8665F970D991CB7009FF5DF6B19F2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(sForcePlateDescriptionU5BU5D_t0366CF1AA8F8665F970D991CB7009FF5DF6B19F2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t854F66645104B53E0C1EF24E8111D90E2563A36B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t854F66645104B53E0C1EF24E8111D90E2563A36B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t854F66645104B53E0C1EF24E8111D90E2563A36B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t854F66645104B53E0C1EF24E8111D90E2563A36B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	sForcePlateDescriptionU5BU5D_t0366CF1AA8F8665F970D991CB7009FF5DF6B19F2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t854F66645104B53E0C1EF24E8111D90E2563A36B_StaticFields, ____emptyArray_5)); }
	inline sForcePlateDescriptionU5BU5D_t0366CF1AA8F8665F970D991CB7009FF5DF6B19F2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline sForcePlateDescriptionU5BU5D_t0366CF1AA8F8665F970D991CB7009FF5DF6B19F2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(sForcePlateDescriptionU5BU5D_t0366CF1AA8F8665F970D991CB7009FF5DF6B19F2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sMarkerSetDescription>
struct List_1_tC709C217B50945D05E12E3AA49B2E9C0249EFCF6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	sMarkerSetDescriptionU5BU5D_t1D0A68F6C22808CEF2EF13C4F8C1E0962F338396* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC709C217B50945D05E12E3AA49B2E9C0249EFCF6, ____items_1)); }
	inline sMarkerSetDescriptionU5BU5D_t1D0A68F6C22808CEF2EF13C4F8C1E0962F338396* get__items_1() const { return ____items_1; }
	inline sMarkerSetDescriptionU5BU5D_t1D0A68F6C22808CEF2EF13C4F8C1E0962F338396** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(sMarkerSetDescriptionU5BU5D_t1D0A68F6C22808CEF2EF13C4F8C1E0962F338396* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC709C217B50945D05E12E3AA49B2E9C0249EFCF6, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC709C217B50945D05E12E3AA49B2E9C0249EFCF6, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC709C217B50945D05E12E3AA49B2E9C0249EFCF6, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC709C217B50945D05E12E3AA49B2E9C0249EFCF6_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	sMarkerSetDescriptionU5BU5D_t1D0A68F6C22808CEF2EF13C4F8C1E0962F338396* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC709C217B50945D05E12E3AA49B2E9C0249EFCF6_StaticFields, ____emptyArray_5)); }
	inline sMarkerSetDescriptionU5BU5D_t1D0A68F6C22808CEF2EF13C4F8C1E0962F338396* get__emptyArray_5() const { return ____emptyArray_5; }
	inline sMarkerSetDescriptionU5BU5D_t1D0A68F6C22808CEF2EF13C4F8C1E0962F338396** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(sMarkerSetDescriptionU5BU5D_t1D0A68F6C22808CEF2EF13C4F8C1E0962F338396* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sRigidBodyDescription>
struct List_1_t9F435504E656EFBD3B7B25E9848E92FCD4BAE99D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	sRigidBodyDescriptionU5BU5D_tFF98B2BAC77AD36C05964568CE1C2F0C475E7968* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9F435504E656EFBD3B7B25E9848E92FCD4BAE99D, ____items_1)); }
	inline sRigidBodyDescriptionU5BU5D_tFF98B2BAC77AD36C05964568CE1C2F0C475E7968* get__items_1() const { return ____items_1; }
	inline sRigidBodyDescriptionU5BU5D_tFF98B2BAC77AD36C05964568CE1C2F0C475E7968** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(sRigidBodyDescriptionU5BU5D_tFF98B2BAC77AD36C05964568CE1C2F0C475E7968* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9F435504E656EFBD3B7B25E9848E92FCD4BAE99D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9F435504E656EFBD3B7B25E9848E92FCD4BAE99D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9F435504E656EFBD3B7B25E9848E92FCD4BAE99D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9F435504E656EFBD3B7B25E9848E92FCD4BAE99D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	sRigidBodyDescriptionU5BU5D_tFF98B2BAC77AD36C05964568CE1C2F0C475E7968* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9F435504E656EFBD3B7B25E9848E92FCD4BAE99D_StaticFields, ____emptyArray_5)); }
	inline sRigidBodyDescriptionU5BU5D_tFF98B2BAC77AD36C05964568CE1C2F0C475E7968* get__emptyArray_5() const { return ____emptyArray_5; }
	inline sRigidBodyDescriptionU5BU5D_tFF98B2BAC77AD36C05964568CE1C2F0C475E7968** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(sRigidBodyDescriptionU5BU5D_tFF98B2BAC77AD36C05964568CE1C2F0C475E7968* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sSkeletonDescription>
struct List_1_t9810C814F95BB4E90A3A37A2DF5538EA18A5D299  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	sSkeletonDescriptionU5BU5D_t4348381AD5C969E49C1855BC07B7C146A7B6BB53* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9810C814F95BB4E90A3A37A2DF5538EA18A5D299, ____items_1)); }
	inline sSkeletonDescriptionU5BU5D_t4348381AD5C969E49C1855BC07B7C146A7B6BB53* get__items_1() const { return ____items_1; }
	inline sSkeletonDescriptionU5BU5D_t4348381AD5C969E49C1855BC07B7C146A7B6BB53** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(sSkeletonDescriptionU5BU5D_t4348381AD5C969E49C1855BC07B7C146A7B6BB53* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9810C814F95BB4E90A3A37A2DF5538EA18A5D299, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9810C814F95BB4E90A3A37A2DF5538EA18A5D299, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9810C814F95BB4E90A3A37A2DF5538EA18A5D299, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9810C814F95BB4E90A3A37A2DF5538EA18A5D299_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	sSkeletonDescriptionU5BU5D_t4348381AD5C969E49C1855BC07B7C146A7B6BB53* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9810C814F95BB4E90A3A37A2DF5538EA18A5D299_StaticFields, ____emptyArray_5)); }
	inline sSkeletonDescriptionU5BU5D_t4348381AD5C969E49C1855BC07B7C146A7B6BB53* get__emptyArray_5() const { return ____emptyArray_5; }
	inline sSkeletonDescriptionU5BU5D_t4348381AD5C969E49C1855BC07B7C146A7B6BB53** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(sSkeletonDescriptionU5BU5D_t4348381AD5C969E49C1855BC07B7C146A7B6BB53* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// NaturalPoint.NatNetLib.NativeMethods
struct NativeMethods_t91E0103F3F3A6A7954E697C14FD6C963F56E3DAF  : public RuntimeObject
{
public:

public:
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

// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;

public:
	inline static int32_t get_offset_of__Major_0() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Major_0)); }
	inline int32_t get__Major_0() const { return ____Major_0; }
	inline int32_t* get_address_of__Major_0() { return &____Major_0; }
	inline void set__Major_0(int32_t value)
	{
		____Major_0 = value;
	}

	inline static int32_t get_offset_of__Minor_1() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Minor_1)); }
	inline int32_t get__Minor_1() const { return ____Minor_1; }
	inline int32_t* get_address_of__Minor_1() { return &____Minor_1; }
	inline void set__Minor_1(int32_t value)
	{
		____Minor_1 = value;
	}

	inline static int32_t get_offset_of__Build_2() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Build_2)); }
	inline int32_t get__Build_2() const { return ____Build_2; }
	inline int32_t* get_address_of__Build_2() { return &____Build_2; }
	inline void set__Build_2(int32_t value)
	{
		____Build_2 = value;
	}

	inline static int32_t get_offset_of__Revision_3() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Revision_3)); }
	inline int32_t get__Revision_3() const { return ____Revision_3; }
	inline int32_t* get_address_of__Revision_3() { return &____Revision_3; }
	inline void set__Revision_3(int32_t value)
	{
		____Revision_3 = value;
	}
};

struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_StaticFields
{
public:
	// System.Char[] System.Version::SeparatorsArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___SeparatorsArray_4;

public:
	inline static int32_t get_offset_of_SeparatorsArray_4() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_StaticFields, ___SeparatorsArray_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_SeparatorsArray_4() const { return ___SeparatorsArray_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_SeparatorsArray_4() { return &___SeparatorsArray_4; }
	inline void set_SeparatorsArray_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___SeparatorsArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeparatorsArray_4), (void*)value);
	}
};


// NaturalPoint.NatNetLib.NatNetClient/DataDescriptions
struct DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sMarkerSetDescription> NaturalPoint.NatNetLib.NatNetClient/DataDescriptions::MarkerSetDescriptions
	List_1_tC709C217B50945D05E12E3AA49B2E9C0249EFCF6 * ___MarkerSetDescriptions_0;
	// System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sRigidBodyDescription> NaturalPoint.NatNetLib.NatNetClient/DataDescriptions::RigidBodyDescriptions
	List_1_t9F435504E656EFBD3B7B25E9848E92FCD4BAE99D * ___RigidBodyDescriptions_1;
	// System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sSkeletonDescription> NaturalPoint.NatNetLib.NatNetClient/DataDescriptions::SkeletonDescriptions
	List_1_t9810C814F95BB4E90A3A37A2DF5538EA18A5D299 * ___SkeletonDescriptions_2;
	// System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sForcePlateDescription> NaturalPoint.NatNetLib.NatNetClient/DataDescriptions::ForcePlateDescriptions
	List_1_t854F66645104B53E0C1EF24E8111D90E2563A36B * ___ForcePlateDescriptions_3;

public:
	inline static int32_t get_offset_of_MarkerSetDescriptions_0() { return static_cast<int32_t>(offsetof(DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120, ___MarkerSetDescriptions_0)); }
	inline List_1_tC709C217B50945D05E12E3AA49B2E9C0249EFCF6 * get_MarkerSetDescriptions_0() const { return ___MarkerSetDescriptions_0; }
	inline List_1_tC709C217B50945D05E12E3AA49B2E9C0249EFCF6 ** get_address_of_MarkerSetDescriptions_0() { return &___MarkerSetDescriptions_0; }
	inline void set_MarkerSetDescriptions_0(List_1_tC709C217B50945D05E12E3AA49B2E9C0249EFCF6 * value)
	{
		___MarkerSetDescriptions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MarkerSetDescriptions_0), (void*)value);
	}

	inline static int32_t get_offset_of_RigidBodyDescriptions_1() { return static_cast<int32_t>(offsetof(DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120, ___RigidBodyDescriptions_1)); }
	inline List_1_t9F435504E656EFBD3B7B25E9848E92FCD4BAE99D * get_RigidBodyDescriptions_1() const { return ___RigidBodyDescriptions_1; }
	inline List_1_t9F435504E656EFBD3B7B25E9848E92FCD4BAE99D ** get_address_of_RigidBodyDescriptions_1() { return &___RigidBodyDescriptions_1; }
	inline void set_RigidBodyDescriptions_1(List_1_t9F435504E656EFBD3B7B25E9848E92FCD4BAE99D * value)
	{
		___RigidBodyDescriptions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RigidBodyDescriptions_1), (void*)value);
	}

	inline static int32_t get_offset_of_SkeletonDescriptions_2() { return static_cast<int32_t>(offsetof(DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120, ___SkeletonDescriptions_2)); }
	inline List_1_t9810C814F95BB4E90A3A37A2DF5538EA18A5D299 * get_SkeletonDescriptions_2() const { return ___SkeletonDescriptions_2; }
	inline List_1_t9810C814F95BB4E90A3A37A2DF5538EA18A5D299 ** get_address_of_SkeletonDescriptions_2() { return &___SkeletonDescriptions_2; }
	inline void set_SkeletonDescriptions_2(List_1_t9810C814F95BB4E90A3A37A2DF5538EA18A5D299 * value)
	{
		___SkeletonDescriptions_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SkeletonDescriptions_2), (void*)value);
	}

	inline static int32_t get_offset_of_ForcePlateDescriptions_3() { return static_cast<int32_t>(offsetof(DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120, ___ForcePlateDescriptions_3)); }
	inline List_1_t854F66645104B53E0C1EF24E8111D90E2563A36B * get_ForcePlateDescriptions_3() const { return ___ForcePlateDescriptions_3; }
	inline List_1_t854F66645104B53E0C1EF24E8111D90E2563A36B ** get_address_of_ForcePlateDescriptions_3() { return &___ForcePlateDescriptions_3; }
	inline void set_ForcePlateDescriptions_3(List_1_t854F66645104B53E0C1EF24E8111D90E2563A36B * value)
	{
		___ForcePlateDescriptions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ForcePlateDescriptions_3), (void*)value);
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// NaturalPoint.NatNetLib.sChannelName
struct sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D 
{
public:
	// System.String NaturalPoint.NatNetLib.sChannelName::Value
	String_t* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D, ___Value_0)); }
	inline String_t* get_Value_0() const { return ___Value_0; }
	inline String_t** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(String_t* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of NaturalPoint.NatNetLib.sChannelName
struct sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshaled_pinvoke
{
	char ___Value_0[256];
};
// Native definition for COM marshalling of NaturalPoint.NatNetLib.sChannelName
struct sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshaled_com
{
	char ___Value_0[256];
};

// NaturalPoint.NatNetLib.sMarker
struct sMarker_t111D88AF8AF385236E954237EF1C2A2128918469 
{
public:
	// System.Int32 NaturalPoint.NatNetLib.sMarker::Id
	int32_t ___Id_0;
	// System.Single NaturalPoint.NatNetLib.sMarker::X
	float ___X_1;
	// System.Single NaturalPoint.NatNetLib.sMarker::Y
	float ___Y_2;
	// System.Single NaturalPoint.NatNetLib.sMarker::Z
	float ___Z_3;
	// System.Single NaturalPoint.NatNetLib.sMarker::Size
	float ___Size_4;
	// System.Int16 NaturalPoint.NatNetLib.sMarker::Params
	int16_t ___Params_5;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(sMarker_t111D88AF8AF385236E954237EF1C2A2128918469, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_X_1() { return static_cast<int32_t>(offsetof(sMarker_t111D88AF8AF385236E954237EF1C2A2128918469, ___X_1)); }
	inline float get_X_1() const { return ___X_1; }
	inline float* get_address_of_X_1() { return &___X_1; }
	inline void set_X_1(float value)
	{
		___X_1 = value;
	}

	inline static int32_t get_offset_of_Y_2() { return static_cast<int32_t>(offsetof(sMarker_t111D88AF8AF385236E954237EF1C2A2128918469, ___Y_2)); }
	inline float get_Y_2() const { return ___Y_2; }
	inline float* get_address_of_Y_2() { return &___Y_2; }
	inline void set_Y_2(float value)
	{
		___Y_2 = value;
	}

	inline static int32_t get_offset_of_Z_3() { return static_cast<int32_t>(offsetof(sMarker_t111D88AF8AF385236E954237EF1C2A2128918469, ___Z_3)); }
	inline float get_Z_3() const { return ___Z_3; }
	inline float* get_address_of_Z_3() { return &___Z_3; }
	inline void set_Z_3(float value)
	{
		___Z_3 = value;
	}

	inline static int32_t get_offset_of_Size_4() { return static_cast<int32_t>(offsetof(sMarker_t111D88AF8AF385236E954237EF1C2A2128918469, ___Size_4)); }
	inline float get_Size_4() const { return ___Size_4; }
	inline float* get_address_of_Size_4() { return &___Size_4; }
	inline void set_Size_4(float value)
	{
		___Size_4 = value;
	}

	inline static int32_t get_offset_of_Params_5() { return static_cast<int32_t>(offsetof(sMarker_t111D88AF8AF385236E954237EF1C2A2128918469, ___Params_5)); }
	inline int16_t get_Params_5() const { return ___Params_5; }
	inline int16_t* get_address_of_Params_5() { return &___Params_5; }
	inline void set_Params_5(int16_t value)
	{
		___Params_5 = value;
	}
};


// NaturalPoint.NatNetLib.sRigidBodyData
struct sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A 
{
public:
	// System.Int32 NaturalPoint.NatNetLib.sRigidBodyData::Id
	int32_t ___Id_0;
	// System.Single NaturalPoint.NatNetLib.sRigidBodyData::X
	float ___X_1;
	// System.Single NaturalPoint.NatNetLib.sRigidBodyData::Y
	float ___Y_2;
	// System.Single NaturalPoint.NatNetLib.sRigidBodyData::Z
	float ___Z_3;
	// System.Single NaturalPoint.NatNetLib.sRigidBodyData::QX
	float ___QX_4;
	// System.Single NaturalPoint.NatNetLib.sRigidBodyData::QY
	float ___QY_5;
	// System.Single NaturalPoint.NatNetLib.sRigidBodyData::QZ
	float ___QZ_6;
	// System.Single NaturalPoint.NatNetLib.sRigidBodyData::QW
	float ___QW_7;
	// System.Single NaturalPoint.NatNetLib.sRigidBodyData::MeanError
	float ___MeanError_8;
	// System.Int16 NaturalPoint.NatNetLib.sRigidBodyData::Params
	int16_t ___Params_9;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_X_1() { return static_cast<int32_t>(offsetof(sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A, ___X_1)); }
	inline float get_X_1() const { return ___X_1; }
	inline float* get_address_of_X_1() { return &___X_1; }
	inline void set_X_1(float value)
	{
		___X_1 = value;
	}

	inline static int32_t get_offset_of_Y_2() { return static_cast<int32_t>(offsetof(sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A, ___Y_2)); }
	inline float get_Y_2() const { return ___Y_2; }
	inline float* get_address_of_Y_2() { return &___Y_2; }
	inline void set_Y_2(float value)
	{
		___Y_2 = value;
	}

	inline static int32_t get_offset_of_Z_3() { return static_cast<int32_t>(offsetof(sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A, ___Z_3)); }
	inline float get_Z_3() const { return ___Z_3; }
	inline float* get_address_of_Z_3() { return &___Z_3; }
	inline void set_Z_3(float value)
	{
		___Z_3 = value;
	}

	inline static int32_t get_offset_of_QX_4() { return static_cast<int32_t>(offsetof(sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A, ___QX_4)); }
	inline float get_QX_4() const { return ___QX_4; }
	inline float* get_address_of_QX_4() { return &___QX_4; }
	inline void set_QX_4(float value)
	{
		___QX_4 = value;
	}

	inline static int32_t get_offset_of_QY_5() { return static_cast<int32_t>(offsetof(sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A, ___QY_5)); }
	inline float get_QY_5() const { return ___QY_5; }
	inline float* get_address_of_QY_5() { return &___QY_5; }
	inline void set_QY_5(float value)
	{
		___QY_5 = value;
	}

	inline static int32_t get_offset_of_QZ_6() { return static_cast<int32_t>(offsetof(sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A, ___QZ_6)); }
	inline float get_QZ_6() const { return ___QZ_6; }
	inline float* get_address_of_QZ_6() { return &___QZ_6; }
	inline void set_QZ_6(float value)
	{
		___QZ_6 = value;
	}

	inline static int32_t get_offset_of_QW_7() { return static_cast<int32_t>(offsetof(sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A, ___QW_7)); }
	inline float get_QW_7() const { return ___QW_7; }
	inline float* get_address_of_QW_7() { return &___QW_7; }
	inline void set_QW_7(float value)
	{
		___QW_7 = value;
	}

	inline static int32_t get_offset_of_MeanError_8() { return static_cast<int32_t>(offsetof(sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A, ___MeanError_8)); }
	inline float get_MeanError_8() const { return ___MeanError_8; }
	inline float* get_address_of_MeanError_8() { return &___MeanError_8; }
	inline void set_MeanError_8(float value)
	{
		___MeanError_8 = value;
	}

	inline static int32_t get_offset_of_Params_9() { return static_cast<int32_t>(offsetof(sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A, ___Params_9)); }
	inline int16_t get_Params_9() const { return ___Params_9; }
	inline int16_t* get_address_of_Params_9() { return &___Params_9; }
	inline void set_Params_9(int16_t value)
	{
		___Params_9 = value;
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


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.CallingConvention
struct CallingConvention_tCD05DC1A211D9713286784F4DDDE1BA18B839924 
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CallingConvention_tCD05DC1A211D9713286784F4DDDE1BA18B839924, ___value___2)); }
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

// NaturalPoint.NatNetLib.MarkerDataVector
struct MarkerDataVector_t8420E39F0ED6C68E785EE794300222A227CB8E3F 
{
public:
	// System.Single[] NaturalPoint.NatNetLib.MarkerDataVector::Values
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___Values_0;

public:
	inline static int32_t get_offset_of_Values_0() { return static_cast<int32_t>(offsetof(MarkerDataVector_t8420E39F0ED6C68E785EE794300222A227CB8E3F, ___Values_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_Values_0() const { return ___Values_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_Values_0() { return &___Values_0; }
	inline void set_Values_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___Values_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Values_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of NaturalPoint.NatNetLib.MarkerDataVector
struct MarkerDataVector_t8420E39F0ED6C68E785EE794300222A227CB8E3F_marshaled_pinvoke
{
	float ___Values_0[3];
};
// Native definition for COM marshalling of NaturalPoint.NatNetLib.MarkerDataVector
struct MarkerDataVector_t8420E39F0ED6C68E785EE794300222A227CB8E3F_marshaled_com
{
	float ___Values_0[3];
};

// NaturalPoint.NatNetLib.NatNetClient
struct NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF  : public RuntimeObject
{
public:
	// System.Boolean NaturalPoint.NatNetLib.NatNetClient::<Connected>k__BackingField
	bool ___U3CConnectedU3Ek__BackingField_0;
	// System.EventHandler`1<NaturalPoint.NatNetLib.NatNetClient/NativeFrameReceivedEventArgs> NaturalPoint.NatNetLib.NatNetClient::NativeFrameReceived
	EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * ___NativeFrameReceived_1;
	// System.IntPtr NaturalPoint.NatNetLib.NatNetClient::m_clientHandle
	intptr_t ___m_clientHandle_2;
	// System.Boolean NaturalPoint.NatNetLib.NatNetClient::m_disposed
	bool ___m_disposed_3;
	// NaturalPoint.NatNetLib.NatNetFrameReceivedCallback NaturalPoint.NatNetLib.NatNetClient::m_nativeFrameReceivedHandler
	NatNetFrameReceivedCallback_t097D075BB3EEB6CF2A2EAFE2E06D10E2C033D768 * ___m_nativeFrameReceivedHandler_4;
	// NaturalPoint.NatNetLib.NatNetClient/NativeFrameReceivedEventArgs NaturalPoint.NatNetLib.NatNetClient::m_nativeFrameReceivedEventArgs
	NativeFrameReceivedEventArgs_t915E8504219907B33B999E6A040590C57B2DF4FF * ___m_nativeFrameReceivedEventArgs_5;

public:
	inline static int32_t get_offset_of_U3CConnectedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF, ___U3CConnectedU3Ek__BackingField_0)); }
	inline bool get_U3CConnectedU3Ek__BackingField_0() const { return ___U3CConnectedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CConnectedU3Ek__BackingField_0() { return &___U3CConnectedU3Ek__BackingField_0; }
	inline void set_U3CConnectedU3Ek__BackingField_0(bool value)
	{
		___U3CConnectedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_NativeFrameReceived_1() { return static_cast<int32_t>(offsetof(NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF, ___NativeFrameReceived_1)); }
	inline EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * get_NativeFrameReceived_1() const { return ___NativeFrameReceived_1; }
	inline EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB ** get_address_of_NativeFrameReceived_1() { return &___NativeFrameReceived_1; }
	inline void set_NativeFrameReceived_1(EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * value)
	{
		___NativeFrameReceived_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NativeFrameReceived_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_clientHandle_2() { return static_cast<int32_t>(offsetof(NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF, ___m_clientHandle_2)); }
	inline intptr_t get_m_clientHandle_2() const { return ___m_clientHandle_2; }
	inline intptr_t* get_address_of_m_clientHandle_2() { return &___m_clientHandle_2; }
	inline void set_m_clientHandle_2(intptr_t value)
	{
		___m_clientHandle_2 = value;
	}

	inline static int32_t get_offset_of_m_disposed_3() { return static_cast<int32_t>(offsetof(NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF, ___m_disposed_3)); }
	inline bool get_m_disposed_3() const { return ___m_disposed_3; }
	inline bool* get_address_of_m_disposed_3() { return &___m_disposed_3; }
	inline void set_m_disposed_3(bool value)
	{
		___m_disposed_3 = value;
	}

	inline static int32_t get_offset_of_m_nativeFrameReceivedHandler_4() { return static_cast<int32_t>(offsetof(NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF, ___m_nativeFrameReceivedHandler_4)); }
	inline NatNetFrameReceivedCallback_t097D075BB3EEB6CF2A2EAFE2E06D10E2C033D768 * get_m_nativeFrameReceivedHandler_4() const { return ___m_nativeFrameReceivedHandler_4; }
	inline NatNetFrameReceivedCallback_t097D075BB3EEB6CF2A2EAFE2E06D10E2C033D768 ** get_address_of_m_nativeFrameReceivedHandler_4() { return &___m_nativeFrameReceivedHandler_4; }
	inline void set_m_nativeFrameReceivedHandler_4(NatNetFrameReceivedCallback_t097D075BB3EEB6CF2A2EAFE2E06D10E2C033D768 * value)
	{
		___m_nativeFrameReceivedHandler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nativeFrameReceivedHandler_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_nativeFrameReceivedEventArgs_5() { return static_cast<int32_t>(offsetof(NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF, ___m_nativeFrameReceivedEventArgs_5)); }
	inline NativeFrameReceivedEventArgs_t915E8504219907B33B999E6A040590C57B2DF4FF * get_m_nativeFrameReceivedEventArgs_5() const { return ___m_nativeFrameReceivedEventArgs_5; }
	inline NativeFrameReceivedEventArgs_t915E8504219907B33B999E6A040590C57B2DF4FF ** get_address_of_m_nativeFrameReceivedEventArgs_5() { return &___m_nativeFrameReceivedEventArgs_5; }
	inline void set_m_nativeFrameReceivedEventArgs_5(NativeFrameReceivedEventArgs_t915E8504219907B33B999E6A040590C57B2DF4FF * value)
	{
		___m_nativeFrameReceivedEventArgs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nativeFrameReceivedEventArgs_5), (void*)value);
	}
};


// NaturalPoint.NatNetLib.NatNetConnectionType
struct NatNetConnectionType_t3900CC02F73119D1AAD05687F01BA76014677C95 
{
public:
	// System.Int32 NaturalPoint.NatNetLib.NatNetConnectionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NatNetConnectionType_t3900CC02F73119D1AAD05687F01BA76014677C95, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// NaturalPoint.NatNetLib.NatNetDataDescriptionType
struct NatNetDataDescriptionType_tB26D3377B42634DDD87BE17705790D6273A5F615 
{
public:
	// System.Int32 NaturalPoint.NatNetLib.NatNetDataDescriptionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NatNetDataDescriptionType_tB26D3377B42634DDD87BE17705790D6273A5F615, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// NaturalPoint.NatNetLib.NatNetError
struct NatNetError_t44495251803672087C12F1CEC69D0029FF1F278D 
{
public:
	// System.Int32 NaturalPoint.NatNetLib.NatNetError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NatNetError_t44495251803672087C12F1CEC69D0029FF1F278D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// NaturalPoint.NatNetLib.sAnalogChannelData
struct sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5 
{
public:
	// System.Int32 NaturalPoint.NatNetLib.sAnalogChannelData::FrameCount
	int32_t ___FrameCount_0;
	// System.Single[] NaturalPoint.NatNetLib.sAnalogChannelData::Values
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___Values_1;

public:
	inline static int32_t get_offset_of_FrameCount_0() { return static_cast<int32_t>(offsetof(sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5, ___FrameCount_0)); }
	inline int32_t get_FrameCount_0() const { return ___FrameCount_0; }
	inline int32_t* get_address_of_FrameCount_0() { return &___FrameCount_0; }
	inline void set_FrameCount_0(int32_t value)
	{
		___FrameCount_0 = value;
	}

	inline static int32_t get_offset_of_Values_1() { return static_cast<int32_t>(offsetof(sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5, ___Values_1)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_Values_1() const { return ___Values_1; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_Values_1() { return &___Values_1; }
	inline void set_Values_1(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___Values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Values_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of NaturalPoint.NatNetLib.sAnalogChannelData
struct sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshaled_pinvoke
{
	int32_t ___FrameCount_0;
	float ___Values_1[30];
};
// Native definition for COM marshalling of NaturalPoint.NatNetLib.sAnalogChannelData
struct sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshaled_com
{
	int32_t ___FrameCount_0;
	float ___Values_1[30];
};

// NaturalPoint.NatNetLib.sDataDescription
struct sDataDescription_t1867298897A36828F439BA80E1153554BD63407F 
{
public:
	// System.Int32 NaturalPoint.NatNetLib.sDataDescription::DescriptionType
	int32_t ___DescriptionType_0;
	// System.IntPtr NaturalPoint.NatNetLib.sDataDescription::Description
	intptr_t ___Description_1;

public:
	inline static int32_t get_offset_of_DescriptionType_0() { return static_cast<int32_t>(offsetof(sDataDescription_t1867298897A36828F439BA80E1153554BD63407F, ___DescriptionType_0)); }
	inline int32_t get_DescriptionType_0() const { return ___DescriptionType_0; }
	inline int32_t* get_address_of_DescriptionType_0() { return &___DescriptionType_0; }
	inline void set_DescriptionType_0(int32_t value)
	{
		___DescriptionType_0 = value;
	}

	inline static int32_t get_offset_of_Description_1() { return static_cast<int32_t>(offsetof(sDataDescription_t1867298897A36828F439BA80E1153554BD63407F, ___Description_1)); }
	inline intptr_t get_Description_1() const { return ___Description_1; }
	inline intptr_t* get_address_of_Description_1() { return &___Description_1; }
	inline void set_Description_1(intptr_t value)
	{
		___Description_1 = value;
	}
};


// NaturalPoint.NatNetLib.sDeviceDescription
struct sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90 
{
public:
	// System.Int32 NaturalPoint.NatNetLib.sDeviceDescription::Id
	int32_t ___Id_0;
	// System.String NaturalPoint.NatNetLib.sDeviceDescription::Name
	String_t* ___Name_1;
	// System.String NaturalPoint.NatNetLib.sDeviceDescription::SerialNo
	String_t* ___SerialNo_2;
	// System.Int32 NaturalPoint.NatNetLib.sDeviceDescription::DeviceType
	int32_t ___DeviceType_3;
	// System.Int32 NaturalPoint.NatNetLib.sDeviceDescription::ChannelDataType
	int32_t ___ChannelDataType_4;
	// System.Int32 NaturalPoint.NatNetLib.sDeviceDescription::ChannelCount
	int32_t ___ChannelCount_5;
	// NaturalPoint.NatNetLib.sChannelName[] NaturalPoint.NatNetLib.sDeviceDescription::ChannelNames
	sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51* ___ChannelNames_6;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_1), (void*)value);
	}

	inline static int32_t get_offset_of_SerialNo_2() { return static_cast<int32_t>(offsetof(sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90, ___SerialNo_2)); }
	inline String_t* get_SerialNo_2() const { return ___SerialNo_2; }
	inline String_t** get_address_of_SerialNo_2() { return &___SerialNo_2; }
	inline void set_SerialNo_2(String_t* value)
	{
		___SerialNo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SerialNo_2), (void*)value);
	}

	inline static int32_t get_offset_of_DeviceType_3() { return static_cast<int32_t>(offsetof(sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90, ___DeviceType_3)); }
	inline int32_t get_DeviceType_3() const { return ___DeviceType_3; }
	inline int32_t* get_address_of_DeviceType_3() { return &___DeviceType_3; }
	inline void set_DeviceType_3(int32_t value)
	{
		___DeviceType_3 = value;
	}

	inline static int32_t get_offset_of_ChannelDataType_4() { return static_cast<int32_t>(offsetof(sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90, ___ChannelDataType_4)); }
	inline int32_t get_ChannelDataType_4() const { return ___ChannelDataType_4; }
	inline int32_t* get_address_of_ChannelDataType_4() { return &___ChannelDataType_4; }
	inline void set_ChannelDataType_4(int32_t value)
	{
		___ChannelDataType_4 = value;
	}

	inline static int32_t get_offset_of_ChannelCount_5() { return static_cast<int32_t>(offsetof(sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90, ___ChannelCount_5)); }
	inline int32_t get_ChannelCount_5() const { return ___ChannelCount_5; }
	inline int32_t* get_address_of_ChannelCount_5() { return &___ChannelCount_5; }
	inline void set_ChannelCount_5(int32_t value)
	{
		___ChannelCount_5 = value;
	}

	inline static int32_t get_offset_of_ChannelNames_6() { return static_cast<int32_t>(offsetof(sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90, ___ChannelNames_6)); }
	inline sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51* get_ChannelNames_6() const { return ___ChannelNames_6; }
	inline sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51** get_address_of_ChannelNames_6() { return &___ChannelNames_6; }
	inline void set_ChannelNames_6(sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51* value)
	{
		___ChannelNames_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ChannelNames_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of NaturalPoint.NatNetLib.sDeviceDescription
struct sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90_marshaled_pinvoke
{
	int32_t ___Id_0;
	char ___Name_1[128];
	char ___SerialNo_2[128];
	int32_t ___DeviceType_3;
	int32_t ___ChannelDataType_4;
	int32_t ___ChannelCount_5;
	sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshaled_pinvoke ___ChannelNames_6[32];
};
// Native definition for COM marshalling of NaturalPoint.NatNetLib.sDeviceDescription
struct sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90_marshaled_com
{
	int32_t ___Id_0;
	char ___Name_1[128];
	char ___SerialNo_2[128];
	int32_t ___DeviceType_3;
	int32_t ___ChannelDataType_4;
	int32_t ___ChannelCount_5;
	sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshaled_com ___ChannelNames_6[32];
};

// NaturalPoint.NatNetLib.sForcePlateDescription
struct sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7 
{
public:
	// System.Int32 NaturalPoint.NatNetLib.sForcePlateDescription::Id
	int32_t ___Id_0;
	// System.String NaturalPoint.NatNetLib.sForcePlateDescription::SerialNo
	String_t* ___SerialNo_1;
	// System.Single NaturalPoint.NatNetLib.sForcePlateDescription::Width
	float ___Width_2;
	// System.Single NaturalPoint.NatNetLib.sForcePlateDescription::Length
	float ___Length_3;
	// System.Single NaturalPoint.NatNetLib.sForcePlateDescription::OriginX
	float ___OriginX_4;
	// System.Single NaturalPoint.NatNetLib.sForcePlateDescription::OriginY
	float ___OriginY_5;
	// System.Single NaturalPoint.NatNetLib.sForcePlateDescription::OriginZ
	float ___OriginZ_6;
	// System.Single[] NaturalPoint.NatNetLib.sForcePlateDescription::CalibrationMatrix
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___CalibrationMatrix_7;
	// System.Single[] NaturalPoint.NatNetLib.sForcePlateDescription::Corners
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___Corners_8;
	// System.Int32 NaturalPoint.NatNetLib.sForcePlateDescription::PlateType
	int32_t ___PlateType_9;
	// System.Int32 NaturalPoint.NatNetLib.sForcePlateDescription::ChannelDataType
	int32_t ___ChannelDataType_10;
	// System.Int32 NaturalPoint.NatNetLib.sForcePlateDescription::ChannelCount
	int32_t ___ChannelCount_11;
	// NaturalPoint.NatNetLib.sChannelName[] NaturalPoint.NatNetLib.sForcePlateDescription::ChannelNames
	sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51* ___ChannelNames_12;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_SerialNo_1() { return static_cast<int32_t>(offsetof(sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7, ___SerialNo_1)); }
	inline String_t* get_SerialNo_1() const { return ___SerialNo_1; }
	inline String_t** get_address_of_SerialNo_1() { return &___SerialNo_1; }
	inline void set_SerialNo_1(String_t* value)
	{
		___SerialNo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SerialNo_1), (void*)value);
	}

	inline static int32_t get_offset_of_Width_2() { return static_cast<int32_t>(offsetof(sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7, ___Width_2)); }
	inline float get_Width_2() const { return ___Width_2; }
	inline float* get_address_of_Width_2() { return &___Width_2; }
	inline void set_Width_2(float value)
	{
		___Width_2 = value;
	}

	inline static int32_t get_offset_of_Length_3() { return static_cast<int32_t>(offsetof(sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7, ___Length_3)); }
	inline float get_Length_3() const { return ___Length_3; }
	inline float* get_address_of_Length_3() { return &___Length_3; }
	inline void set_Length_3(float value)
	{
		___Length_3 = value;
	}

	inline static int32_t get_offset_of_OriginX_4() { return static_cast<int32_t>(offsetof(sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7, ___OriginX_4)); }
	inline float get_OriginX_4() const { return ___OriginX_4; }
	inline float* get_address_of_OriginX_4() { return &___OriginX_4; }
	inline void set_OriginX_4(float value)
	{
		___OriginX_4 = value;
	}

	inline static int32_t get_offset_of_OriginY_5() { return static_cast<int32_t>(offsetof(sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7, ___OriginY_5)); }
	inline float get_OriginY_5() const { return ___OriginY_5; }
	inline float* get_address_of_OriginY_5() { return &___OriginY_5; }
	inline void set_OriginY_5(float value)
	{
		___OriginY_5 = value;
	}

	inline static int32_t get_offset_of_OriginZ_6() { return static_cast<int32_t>(offsetof(sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7, ___OriginZ_6)); }
	inline float get_OriginZ_6() const { return ___OriginZ_6; }
	inline float* get_address_of_OriginZ_6() { return &___OriginZ_6; }
	inline void set_OriginZ_6(float value)
	{
		___OriginZ_6 = value;
	}

	inline static int32_t get_offset_of_CalibrationMatrix_7() { return static_cast<int32_t>(offsetof(sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7, ___CalibrationMatrix_7)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_CalibrationMatrix_7() const { return ___CalibrationMatrix_7; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_CalibrationMatrix_7() { return &___CalibrationMatrix_7; }
	inline void set_CalibrationMatrix_7(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___CalibrationMatrix_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CalibrationMatrix_7), (void*)value);
	}

	inline static int32_t get_offset_of_Corners_8() { return static_cast<int32_t>(offsetof(sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7, ___Corners_8)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_Corners_8() const { return ___Corners_8; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_Corners_8() { return &___Corners_8; }
	inline void set_Corners_8(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___Corners_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Corners_8), (void*)value);
	}

	inline static int32_t get_offset_of_PlateType_9() { return static_cast<int32_t>(offsetof(sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7, ___PlateType_9)); }
	inline int32_t get_PlateType_9() const { return ___PlateType_9; }
	inline int32_t* get_address_of_PlateType_9() { return &___PlateType_9; }
	inline void set_PlateType_9(int32_t value)
	{
		___PlateType_9 = value;
	}

	inline static int32_t get_offset_of_ChannelDataType_10() { return static_cast<int32_t>(offsetof(sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7, ___ChannelDataType_10)); }
	inline int32_t get_ChannelDataType_10() const { return ___ChannelDataType_10; }
	inline int32_t* get_address_of_ChannelDataType_10() { return &___ChannelDataType_10; }
	inline void set_ChannelDataType_10(int32_t value)
	{
		___ChannelDataType_10 = value;
	}

	inline static int32_t get_offset_of_ChannelCount_11() { return static_cast<int32_t>(offsetof(sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7, ___ChannelCount_11)); }
	inline int32_t get_ChannelCount_11() const { return ___ChannelCount_11; }
	inline int32_t* get_address_of_ChannelCount_11() { return &___ChannelCount_11; }
	inline void set_ChannelCount_11(int32_t value)
	{
		___ChannelCount_11 = value;
	}

	inline static int32_t get_offset_of_ChannelNames_12() { return static_cast<int32_t>(offsetof(sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7, ___ChannelNames_12)); }
	inline sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51* get_ChannelNames_12() const { return ___ChannelNames_12; }
	inline sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51** get_address_of_ChannelNames_12() { return &___ChannelNames_12; }
	inline void set_ChannelNames_12(sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51* value)
	{
		___ChannelNames_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ChannelNames_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of NaturalPoint.NatNetLib.sForcePlateDescription
struct sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7_marshaled_pinvoke
{
	int32_t ___Id_0;
	char ___SerialNo_1[128];
	float ___Width_2;
	float ___Length_3;
	float ___OriginX_4;
	float ___OriginY_5;
	float ___OriginZ_6;
	float ___CalibrationMatrix_7[144];
	float ___Corners_8[12];
	int32_t ___PlateType_9;
	int32_t ___ChannelDataType_10;
	int32_t ___ChannelCount_11;
	sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshaled_pinvoke ___ChannelNames_12[32];
};
// Native definition for COM marshalling of NaturalPoint.NatNetLib.sForcePlateDescription
struct sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7_marshaled_com
{
	int32_t ___Id_0;
	char ___SerialNo_1[128];
	float ___Width_2;
	float ___Length_3;
	float ___OriginX_4;
	float ___OriginY_5;
	float ___OriginZ_6;
	float ___CalibrationMatrix_7[144];
	float ___Corners_8[12];
	int32_t ___PlateType_9;
	int32_t ___ChannelDataType_10;
	int32_t ___ChannelCount_11;
	sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshaled_com ___ChannelNames_12[32];
};

// NaturalPoint.NatNetLib.sMarkerSetData
struct sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6 
{
public:
	// System.String NaturalPoint.NatNetLib.sMarkerSetData::Name
	String_t* ___Name_0;
	// System.Int32 NaturalPoint.NatNetLib.sMarkerSetData::MarkerCount
	int32_t ___MarkerCount_1;
	// System.IntPtr NaturalPoint.NatNetLib.sMarkerSetData::Markers
	intptr_t ___Markers_2;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_MarkerCount_1() { return static_cast<int32_t>(offsetof(sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6, ___MarkerCount_1)); }
	inline int32_t get_MarkerCount_1() const { return ___MarkerCount_1; }
	inline int32_t* get_address_of_MarkerCount_1() { return &___MarkerCount_1; }
	inline void set_MarkerCount_1(int32_t value)
	{
		___MarkerCount_1 = value;
	}

	inline static int32_t get_offset_of_Markers_2() { return static_cast<int32_t>(offsetof(sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6, ___Markers_2)); }
	inline intptr_t get_Markers_2() const { return ___Markers_2; }
	inline intptr_t* get_address_of_Markers_2() { return &___Markers_2; }
	inline void set_Markers_2(intptr_t value)
	{
		___Markers_2 = value;
	}
};

// Native definition for P/Invoke marshalling of NaturalPoint.NatNetLib.sMarkerSetData
struct sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshaled_pinvoke
{
	char ___Name_0[256];
	int32_t ___MarkerCount_1;
	intptr_t ___Markers_2;
};
// Native definition for COM marshalling of NaturalPoint.NatNetLib.sMarkerSetData
struct sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshaled_com
{
	char ___Name_0[256];
	int32_t ___MarkerCount_1;
	intptr_t ___Markers_2;
};

// NaturalPoint.NatNetLib.sMarkerSetDescription
struct sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F 
{
public:
	// System.String NaturalPoint.NatNetLib.sMarkerSetDescription::Name
	String_t* ___Name_0;
	// System.Int32 NaturalPoint.NatNetLib.sMarkerSetDescription::MarkerCount
	int32_t ___MarkerCount_1;
	// System.IntPtr NaturalPoint.NatNetLib.sMarkerSetDescription::MarkerNames
	intptr_t ___MarkerNames_2;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_MarkerCount_1() { return static_cast<int32_t>(offsetof(sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F, ___MarkerCount_1)); }
	inline int32_t get_MarkerCount_1() const { return ___MarkerCount_1; }
	inline int32_t* get_address_of_MarkerCount_1() { return &___MarkerCount_1; }
	inline void set_MarkerCount_1(int32_t value)
	{
		___MarkerCount_1 = value;
	}

	inline static int32_t get_offset_of_MarkerNames_2() { return static_cast<int32_t>(offsetof(sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F, ___MarkerNames_2)); }
	inline intptr_t get_MarkerNames_2() const { return ___MarkerNames_2; }
	inline intptr_t* get_address_of_MarkerNames_2() { return &___MarkerNames_2; }
	inline void set_MarkerNames_2(intptr_t value)
	{
		___MarkerNames_2 = value;
	}
};

// Native definition for P/Invoke marshalling of NaturalPoint.NatNetLib.sMarkerSetDescription
struct sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F_marshaled_pinvoke
{
	char ___Name_0[256];
	int32_t ___MarkerCount_1;
	intptr_t ___MarkerNames_2;
};
// Native definition for COM marshalling of NaturalPoint.NatNetLib.sMarkerSetDescription
struct sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F_marshaled_com
{
	char ___Name_0[256];
	int32_t ___MarkerCount_1;
	intptr_t ___MarkerNames_2;
};

// NaturalPoint.NatNetLib.sRigidBodyDescription
struct sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B 
{
public:
	// System.String NaturalPoint.NatNetLib.sRigidBodyDescription::Name
	String_t* ___Name_0;
	// System.Int32 NaturalPoint.NatNetLib.sRigidBodyDescription::Id
	int32_t ___Id_1;
	// System.Int32 NaturalPoint.NatNetLib.sRigidBodyDescription::ParentId
	int32_t ___ParentId_2;
	// System.Single NaturalPoint.NatNetLib.sRigidBodyDescription::OffsetX
	float ___OffsetX_3;
	// System.Single NaturalPoint.NatNetLib.sRigidBodyDescription::OffsetY
	float ___OffsetY_4;
	// System.Single NaturalPoint.NatNetLib.sRigidBodyDescription::OffsetZ
	float ___OffsetZ_5;
	// System.Int32 NaturalPoint.NatNetLib.sRigidBodyDescription::MarkerCount
	int32_t ___MarkerCount_6;
	// System.IntPtr NaturalPoint.NatNetLib.sRigidBodyDescription::MarkerPositions
	intptr_t ___MarkerPositions_7;
	// System.IntPtr NaturalPoint.NatNetLib.sRigidBodyDescription::MarkerRequiredLabels
	intptr_t ___MarkerRequiredLabels_8;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Id_1() { return static_cast<int32_t>(offsetof(sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B, ___Id_1)); }
	inline int32_t get_Id_1() const { return ___Id_1; }
	inline int32_t* get_address_of_Id_1() { return &___Id_1; }
	inline void set_Id_1(int32_t value)
	{
		___Id_1 = value;
	}

	inline static int32_t get_offset_of_ParentId_2() { return static_cast<int32_t>(offsetof(sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B, ___ParentId_2)); }
	inline int32_t get_ParentId_2() const { return ___ParentId_2; }
	inline int32_t* get_address_of_ParentId_2() { return &___ParentId_2; }
	inline void set_ParentId_2(int32_t value)
	{
		___ParentId_2 = value;
	}

	inline static int32_t get_offset_of_OffsetX_3() { return static_cast<int32_t>(offsetof(sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B, ___OffsetX_3)); }
	inline float get_OffsetX_3() const { return ___OffsetX_3; }
	inline float* get_address_of_OffsetX_3() { return &___OffsetX_3; }
	inline void set_OffsetX_3(float value)
	{
		___OffsetX_3 = value;
	}

	inline static int32_t get_offset_of_OffsetY_4() { return static_cast<int32_t>(offsetof(sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B, ___OffsetY_4)); }
	inline float get_OffsetY_4() const { return ___OffsetY_4; }
	inline float* get_address_of_OffsetY_4() { return &___OffsetY_4; }
	inline void set_OffsetY_4(float value)
	{
		___OffsetY_4 = value;
	}

	inline static int32_t get_offset_of_OffsetZ_5() { return static_cast<int32_t>(offsetof(sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B, ___OffsetZ_5)); }
	inline float get_OffsetZ_5() const { return ___OffsetZ_5; }
	inline float* get_address_of_OffsetZ_5() { return &___OffsetZ_5; }
	inline void set_OffsetZ_5(float value)
	{
		___OffsetZ_5 = value;
	}

	inline static int32_t get_offset_of_MarkerCount_6() { return static_cast<int32_t>(offsetof(sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B, ___MarkerCount_6)); }
	inline int32_t get_MarkerCount_6() const { return ___MarkerCount_6; }
	inline int32_t* get_address_of_MarkerCount_6() { return &___MarkerCount_6; }
	inline void set_MarkerCount_6(int32_t value)
	{
		___MarkerCount_6 = value;
	}

	inline static int32_t get_offset_of_MarkerPositions_7() { return static_cast<int32_t>(offsetof(sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B, ___MarkerPositions_7)); }
	inline intptr_t get_MarkerPositions_7() const { return ___MarkerPositions_7; }
	inline intptr_t* get_address_of_MarkerPositions_7() { return &___MarkerPositions_7; }
	inline void set_MarkerPositions_7(intptr_t value)
	{
		___MarkerPositions_7 = value;
	}

	inline static int32_t get_offset_of_MarkerRequiredLabels_8() { return static_cast<int32_t>(offsetof(sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B, ___MarkerRequiredLabels_8)); }
	inline intptr_t get_MarkerRequiredLabels_8() const { return ___MarkerRequiredLabels_8; }
	inline intptr_t* get_address_of_MarkerRequiredLabels_8() { return &___MarkerRequiredLabels_8; }
	inline void set_MarkerRequiredLabels_8(intptr_t value)
	{
		___MarkerRequiredLabels_8 = value;
	}
};

// Native definition for P/Invoke marshalling of NaturalPoint.NatNetLib.sRigidBodyDescription
struct sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshaled_pinvoke
{
	char ___Name_0[256];
	int32_t ___Id_1;
	int32_t ___ParentId_2;
	float ___OffsetX_3;
	float ___OffsetY_4;
	float ___OffsetZ_5;
	int32_t ___MarkerCount_6;
	intptr_t ___MarkerPositions_7;
	intptr_t ___MarkerRequiredLabels_8;
};
// Native definition for COM marshalling of NaturalPoint.NatNetLib.sRigidBodyDescription
struct sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshaled_com
{
	char ___Name_0[256];
	int32_t ___Id_1;
	int32_t ___ParentId_2;
	float ___OffsetX_3;
	float ___OffsetY_4;
	float ___OffsetZ_5;
	int32_t ___MarkerCount_6;
	intptr_t ___MarkerPositions_7;
	intptr_t ___MarkerRequiredLabels_8;
};

// NaturalPoint.NatNetLib.sSkeletonData
struct sSkeletonData_t3293D9837DEB8B9CA3576C13DD130134442E5D4B 
{
public:
	// System.Int32 NaturalPoint.NatNetLib.sSkeletonData::Id
	int32_t ___Id_0;
	// System.Int32 NaturalPoint.NatNetLib.sSkeletonData::RigidBodyCount
	int32_t ___RigidBodyCount_1;
	// System.IntPtr NaturalPoint.NatNetLib.sSkeletonData::RigidBodies
	intptr_t ___RigidBodies_2;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(sSkeletonData_t3293D9837DEB8B9CA3576C13DD130134442E5D4B, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_RigidBodyCount_1() { return static_cast<int32_t>(offsetof(sSkeletonData_t3293D9837DEB8B9CA3576C13DD130134442E5D4B, ___RigidBodyCount_1)); }
	inline int32_t get_RigidBodyCount_1() const { return ___RigidBodyCount_1; }
	inline int32_t* get_address_of_RigidBodyCount_1() { return &___RigidBodyCount_1; }
	inline void set_RigidBodyCount_1(int32_t value)
	{
		___RigidBodyCount_1 = value;
	}

	inline static int32_t get_offset_of_RigidBodies_2() { return static_cast<int32_t>(offsetof(sSkeletonData_t3293D9837DEB8B9CA3576C13DD130134442E5D4B, ___RigidBodies_2)); }
	inline intptr_t get_RigidBodies_2() const { return ___RigidBodies_2; }
	inline intptr_t* get_address_of_RigidBodies_2() { return &___RigidBodies_2; }
	inline void set_RigidBodies_2(intptr_t value)
	{
		___RigidBodies_2 = value;
	}
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

// NaturalPoint.NatNetLib.NatNetConstants
struct NatNetConstants_t0F9EFBBD01F7E3A7503C7F355C08CA252C410922  : public RuntimeObject
{
public:

public:
};


// NaturalPoint.NatNetLib.NatNetException
struct NatNetException_tE207E10FDA92F73DF0EE67DF1DE8817B096B4DBF  : public Exception_t
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// NaturalPoint.NatNetLib.sDataDescriptions
struct sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD 
{
public:
	// System.Int32 NaturalPoint.NatNetLib.sDataDescriptions::DataDescriptionCount
	int32_t ___DataDescriptionCount_0;
	// NaturalPoint.NatNetLib.sDataDescription[] NaturalPoint.NatNetLib.sDataDescriptions::DataDescriptions
	sDataDescriptionU5BU5D_t8BCADB0C438529DA8FD293E283308DE540600A8E* ___DataDescriptions_1;

public:
	inline static int32_t get_offset_of_DataDescriptionCount_0() { return static_cast<int32_t>(offsetof(sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD, ___DataDescriptionCount_0)); }
	inline int32_t get_DataDescriptionCount_0() const { return ___DataDescriptionCount_0; }
	inline int32_t* get_address_of_DataDescriptionCount_0() { return &___DataDescriptionCount_0; }
	inline void set_DataDescriptionCount_0(int32_t value)
	{
		___DataDescriptionCount_0 = value;
	}

	inline static int32_t get_offset_of_DataDescriptions_1() { return static_cast<int32_t>(offsetof(sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD, ___DataDescriptions_1)); }
	inline sDataDescriptionU5BU5D_t8BCADB0C438529DA8FD293E283308DE540600A8E* get_DataDescriptions_1() const { return ___DataDescriptions_1; }
	inline sDataDescriptionU5BU5D_t8BCADB0C438529DA8FD293E283308DE540600A8E** get_address_of_DataDescriptions_1() { return &___DataDescriptions_1; }
	inline void set_DataDescriptions_1(sDataDescriptionU5BU5D_t8BCADB0C438529DA8FD293E283308DE540600A8E* value)
	{
		___DataDescriptions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DataDescriptions_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of NaturalPoint.NatNetLib.sDataDescriptions
struct sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD_marshaled_pinvoke
{
	int32_t ___DataDescriptionCount_0;
	sDataDescription_t1867298897A36828F439BA80E1153554BD63407F  ___DataDescriptions_1[2000];
};
// Native definition for COM marshalling of NaturalPoint.NatNetLib.sDataDescriptions
struct sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD_marshaled_com
{
	int32_t ___DataDescriptionCount_0;
	sDataDescription_t1867298897A36828F439BA80E1153554BD63407F  ___DataDescriptions_1[2000];
};

// NaturalPoint.NatNetLib.sDeviceData
struct sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48 
{
public:
	// System.Int32 NaturalPoint.NatNetLib.sDeviceData::Id
	int32_t ___Id_0;
	// System.Int32 NaturalPoint.NatNetLib.sDeviceData::ChannelCount
	int32_t ___ChannelCount_1;
	// NaturalPoint.NatNetLib.sAnalogChannelData[] NaturalPoint.NatNetLib.sDeviceData::ChannelData
	sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE* ___ChannelData_2;
	// System.Int16 NaturalPoint.NatNetLib.sDeviceData::Params
	int16_t ___Params_3;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_ChannelCount_1() { return static_cast<int32_t>(offsetof(sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48, ___ChannelCount_1)); }
	inline int32_t get_ChannelCount_1() const { return ___ChannelCount_1; }
	inline int32_t* get_address_of_ChannelCount_1() { return &___ChannelCount_1; }
	inline void set_ChannelCount_1(int32_t value)
	{
		___ChannelCount_1 = value;
	}

	inline static int32_t get_offset_of_ChannelData_2() { return static_cast<int32_t>(offsetof(sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48, ___ChannelData_2)); }
	inline sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE* get_ChannelData_2() const { return ___ChannelData_2; }
	inline sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE** get_address_of_ChannelData_2() { return &___ChannelData_2; }
	inline void set_ChannelData_2(sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE* value)
	{
		___ChannelData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ChannelData_2), (void*)value);
	}

	inline static int32_t get_offset_of_Params_3() { return static_cast<int32_t>(offsetof(sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48, ___Params_3)); }
	inline int16_t get_Params_3() const { return ___Params_3; }
	inline int16_t* get_address_of_Params_3() { return &___Params_3; }
	inline void set_Params_3(int16_t value)
	{
		___Params_3 = value;
	}
};

// Native definition for P/Invoke marshalling of NaturalPoint.NatNetLib.sDeviceData
struct sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshaled_pinvoke
{
	int32_t ___Id_0;
	int32_t ___ChannelCount_1;
	sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshaled_pinvoke ___ChannelData_2[32];
	int16_t ___Params_3;
};
// Native definition for COM marshalling of NaturalPoint.NatNetLib.sDeviceData
struct sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshaled_com
{
	int32_t ___Id_0;
	int32_t ___ChannelCount_1;
	sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshaled_com ___ChannelData_2[32];
	int16_t ___Params_3;
};

// NaturalPoint.NatNetLib.sForcePlateData
struct sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6 
{
public:
	// System.Int32 NaturalPoint.NatNetLib.sForcePlateData::Id
	int32_t ___Id_0;
	// System.Int32 NaturalPoint.NatNetLib.sForcePlateData::ChannelCount
	int32_t ___ChannelCount_1;
	// NaturalPoint.NatNetLib.sAnalogChannelData[] NaturalPoint.NatNetLib.sForcePlateData::ChannelData
	sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE* ___ChannelData_2;
	// System.Int16 NaturalPoint.NatNetLib.sForcePlateData::Params
	int16_t ___Params_3;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_ChannelCount_1() { return static_cast<int32_t>(offsetof(sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6, ___ChannelCount_1)); }
	inline int32_t get_ChannelCount_1() const { return ___ChannelCount_1; }
	inline int32_t* get_address_of_ChannelCount_1() { return &___ChannelCount_1; }
	inline void set_ChannelCount_1(int32_t value)
	{
		___ChannelCount_1 = value;
	}

	inline static int32_t get_offset_of_ChannelData_2() { return static_cast<int32_t>(offsetof(sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6, ___ChannelData_2)); }
	inline sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE* get_ChannelData_2() const { return ___ChannelData_2; }
	inline sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE** get_address_of_ChannelData_2() { return &___ChannelData_2; }
	inline void set_ChannelData_2(sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE* value)
	{
		___ChannelData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ChannelData_2), (void*)value);
	}

	inline static int32_t get_offset_of_Params_3() { return static_cast<int32_t>(offsetof(sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6, ___Params_3)); }
	inline int16_t get_Params_3() const { return ___Params_3; }
	inline int16_t* get_address_of_Params_3() { return &___Params_3; }
	inline void set_Params_3(int16_t value)
	{
		___Params_3 = value;
	}
};

// Native definition for P/Invoke marshalling of NaturalPoint.NatNetLib.sForcePlateData
struct sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshaled_pinvoke
{
	int32_t ___Id_0;
	int32_t ___ChannelCount_1;
	sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshaled_pinvoke ___ChannelData_2[32];
	int16_t ___Params_3;
};
// Native definition for COM marshalling of NaturalPoint.NatNetLib.sForcePlateData
struct sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshaled_com
{
	int32_t ___Id_0;
	int32_t ___ChannelCount_1;
	sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshaled_com ___ChannelData_2[32];
	int16_t ___Params_3;
};

// NaturalPoint.NatNetLib.sNatNetClientConnectParams
struct sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86 
{
public:
	// NaturalPoint.NatNetLib.NatNetConnectionType NaturalPoint.NatNetLib.sNatNetClientConnectParams::ConnectionType
	int32_t ___ConnectionType_0;
	// System.UInt16 NaturalPoint.NatNetLib.sNatNetClientConnectParams::ServerCommandPort
	uint16_t ___ServerCommandPort_1;
	// System.UInt16 NaturalPoint.NatNetLib.sNatNetClientConnectParams::ServerDataPort
	uint16_t ___ServerDataPort_2;
	// System.String NaturalPoint.NatNetLib.sNatNetClientConnectParams::ServerAddress
	String_t* ___ServerAddress_3;
	// System.String NaturalPoint.NatNetLib.sNatNetClientConnectParams::LocalAddress
	String_t* ___LocalAddress_4;
	// System.String NaturalPoint.NatNetLib.sNatNetClientConnectParams::MulticastAddress
	String_t* ___MulticastAddress_5;

public:
	inline static int32_t get_offset_of_ConnectionType_0() { return static_cast<int32_t>(offsetof(sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86, ___ConnectionType_0)); }
	inline int32_t get_ConnectionType_0() const { return ___ConnectionType_0; }
	inline int32_t* get_address_of_ConnectionType_0() { return &___ConnectionType_0; }
	inline void set_ConnectionType_0(int32_t value)
	{
		___ConnectionType_0 = value;
	}

	inline static int32_t get_offset_of_ServerCommandPort_1() { return static_cast<int32_t>(offsetof(sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86, ___ServerCommandPort_1)); }
	inline uint16_t get_ServerCommandPort_1() const { return ___ServerCommandPort_1; }
	inline uint16_t* get_address_of_ServerCommandPort_1() { return &___ServerCommandPort_1; }
	inline void set_ServerCommandPort_1(uint16_t value)
	{
		___ServerCommandPort_1 = value;
	}

	inline static int32_t get_offset_of_ServerDataPort_2() { return static_cast<int32_t>(offsetof(sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86, ___ServerDataPort_2)); }
	inline uint16_t get_ServerDataPort_2() const { return ___ServerDataPort_2; }
	inline uint16_t* get_address_of_ServerDataPort_2() { return &___ServerDataPort_2; }
	inline void set_ServerDataPort_2(uint16_t value)
	{
		___ServerDataPort_2 = value;
	}

	inline static int32_t get_offset_of_ServerAddress_3() { return static_cast<int32_t>(offsetof(sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86, ___ServerAddress_3)); }
	inline String_t* get_ServerAddress_3() const { return ___ServerAddress_3; }
	inline String_t** get_address_of_ServerAddress_3() { return &___ServerAddress_3; }
	inline void set_ServerAddress_3(String_t* value)
	{
		___ServerAddress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ServerAddress_3), (void*)value);
	}

	inline static int32_t get_offset_of_LocalAddress_4() { return static_cast<int32_t>(offsetof(sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86, ___LocalAddress_4)); }
	inline String_t* get_LocalAddress_4() const { return ___LocalAddress_4; }
	inline String_t** get_address_of_LocalAddress_4() { return &___LocalAddress_4; }
	inline void set_LocalAddress_4(String_t* value)
	{
		___LocalAddress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LocalAddress_4), (void*)value);
	}

	inline static int32_t get_offset_of_MulticastAddress_5() { return static_cast<int32_t>(offsetof(sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86, ___MulticastAddress_5)); }
	inline String_t* get_MulticastAddress_5() const { return ___MulticastAddress_5; }
	inline String_t** get_address_of_MulticastAddress_5() { return &___MulticastAddress_5; }
	inline void set_MulticastAddress_5(String_t* value)
	{
		___MulticastAddress_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MulticastAddress_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of NaturalPoint.NatNetLib.sNatNetClientConnectParams
struct sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshaled_pinvoke
{
	int32_t ___ConnectionType_0;
	uint16_t ___ServerCommandPort_1;
	uint16_t ___ServerDataPort_2;
	char* ___ServerAddress_3;
	char* ___LocalAddress_4;
	char* ___MulticastAddress_5;
};
// Native definition for COM marshalling of NaturalPoint.NatNetLib.sNatNetClientConnectParams
struct sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshaled_com
{
	int32_t ___ConnectionType_0;
	uint16_t ___ServerCommandPort_1;
	uint16_t ___ServerDataPort_2;
	Il2CppChar* ___ServerAddress_3;
	Il2CppChar* ___LocalAddress_4;
	Il2CppChar* ___MulticastAddress_5;
};

// NaturalPoint.NatNetLib.sSkeletonDescription
struct sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB 
{
public:
	// System.String NaturalPoint.NatNetLib.sSkeletonDescription::Name
	String_t* ___Name_0;
	// System.Int32 NaturalPoint.NatNetLib.sSkeletonDescription::Id
	int32_t ___Id_1;
	// System.Int32 NaturalPoint.NatNetLib.sSkeletonDescription::RigidBodyCount
	int32_t ___RigidBodyCount_2;
	// NaturalPoint.NatNetLib.sRigidBodyDescription[] NaturalPoint.NatNetLib.sSkeletonDescription::RigidBodies
	sRigidBodyDescriptionU5BU5D_tFF98B2BAC77AD36C05964568CE1C2F0C475E7968* ___RigidBodies_3;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Id_1() { return static_cast<int32_t>(offsetof(sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB, ___Id_1)); }
	inline int32_t get_Id_1() const { return ___Id_1; }
	inline int32_t* get_address_of_Id_1() { return &___Id_1; }
	inline void set_Id_1(int32_t value)
	{
		___Id_1 = value;
	}

	inline static int32_t get_offset_of_RigidBodyCount_2() { return static_cast<int32_t>(offsetof(sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB, ___RigidBodyCount_2)); }
	inline int32_t get_RigidBodyCount_2() const { return ___RigidBodyCount_2; }
	inline int32_t* get_address_of_RigidBodyCount_2() { return &___RigidBodyCount_2; }
	inline void set_RigidBodyCount_2(int32_t value)
	{
		___RigidBodyCount_2 = value;
	}

	inline static int32_t get_offset_of_RigidBodies_3() { return static_cast<int32_t>(offsetof(sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB, ___RigidBodies_3)); }
	inline sRigidBodyDescriptionU5BU5D_tFF98B2BAC77AD36C05964568CE1C2F0C475E7968* get_RigidBodies_3() const { return ___RigidBodies_3; }
	inline sRigidBodyDescriptionU5BU5D_tFF98B2BAC77AD36C05964568CE1C2F0C475E7968** get_address_of_RigidBodies_3() { return &___RigidBodies_3; }
	inline void set_RigidBodies_3(sRigidBodyDescriptionU5BU5D_tFF98B2BAC77AD36C05964568CE1C2F0C475E7968* value)
	{
		___RigidBodies_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RigidBodies_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of NaturalPoint.NatNetLib.sSkeletonDescription
struct sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB_marshaled_pinvoke
{
	char ___Name_0[256];
	int32_t ___Id_1;
	int32_t ___RigidBodyCount_2;
	sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshaled_pinvoke ___RigidBodies_3[200];
};
// Native definition for COM marshalling of NaturalPoint.NatNetLib.sSkeletonDescription
struct sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB_marshaled_com
{
	char ___Name_0[256];
	int32_t ___Id_1;
	int32_t ___RigidBodyCount_2;
	sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshaled_com ___RigidBodies_3[200];
};

// System.EventHandler`1<NaturalPoint.NatNetLib.NatNetClient/NativeFrameReceivedEventArgs>
struct EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB  : public MulticastDelegate_t
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


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// NaturalPoint.NatNetLib.NatNetFrameReceivedCallback
struct NatNetFrameReceivedCallback_t097D075BB3EEB6CF2A2EAFE2E06D10E2C033D768  : public MulticastDelegate_t
{
public:

public:
};


// NaturalPoint.NatNetLib.sFrameOfMocapData
struct sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33 
{
public:
	// System.Int32 NaturalPoint.NatNetLib.sFrameOfMocapData::FrameNumber
	int32_t ___FrameNumber_0;
	// System.Int32 NaturalPoint.NatNetLib.sFrameOfMocapData::MarkerSetCount
	int32_t ___MarkerSetCount_1;
	// NaturalPoint.NatNetLib.sMarkerSetData[] NaturalPoint.NatNetLib.sFrameOfMocapData::MarkerSets
	sMarkerSetDataU5BU5D_t7CAAE2772EABCB3EADCCA7BF97039B2DFE1C9118* ___MarkerSets_2;
	// System.Int32 NaturalPoint.NatNetLib.sFrameOfMocapData::OtherMarkerCount
	int32_t ___OtherMarkerCount_3;
	// System.IntPtr NaturalPoint.NatNetLib.sFrameOfMocapData::OtherMarkers
	intptr_t ___OtherMarkers_4;
	// System.Int32 NaturalPoint.NatNetLib.sFrameOfMocapData::RigidBodyCount
	int32_t ___RigidBodyCount_5;
	// NaturalPoint.NatNetLib.sRigidBodyData[] NaturalPoint.NatNetLib.sFrameOfMocapData::RigidBodies
	sRigidBodyDataU5BU5D_t80B47D36737E8C7D314FE0A98A8600ADC440B482* ___RigidBodies_6;
	// System.Int32 NaturalPoint.NatNetLib.sFrameOfMocapData::SkeletonCount
	int32_t ___SkeletonCount_7;
	// NaturalPoint.NatNetLib.sSkeletonData[] NaturalPoint.NatNetLib.sFrameOfMocapData::Skeletons
	sSkeletonDataU5BU5D_t73F3A5AEF62C20F97925305516ED03260D43B301* ___Skeletons_8;
	// System.Int32 NaturalPoint.NatNetLib.sFrameOfMocapData::LabeledMarkerCount
	int32_t ___LabeledMarkerCount_9;
	// NaturalPoint.NatNetLib.sMarker[] NaturalPoint.NatNetLib.sFrameOfMocapData::LabeledMarkers
	sMarkerU5BU5D_t4660E1FB80824989BE6B8D72046540FAD489E4CE* ___LabeledMarkers_10;
	// System.Int32 NaturalPoint.NatNetLib.sFrameOfMocapData::ForcePlateCount
	int32_t ___ForcePlateCount_11;
	// NaturalPoint.NatNetLib.sForcePlateData[] NaturalPoint.NatNetLib.sFrameOfMocapData::ForcePlates
	sForcePlateDataU5BU5D_t8B906D337B2A01D2A0A5EC375345A403AD3AD16B* ___ForcePlates_12;
	// System.Int32 NaturalPoint.NatNetLib.sFrameOfMocapData::DeviceCount
	int32_t ___DeviceCount_13;
	// NaturalPoint.NatNetLib.sDeviceData[] NaturalPoint.NatNetLib.sFrameOfMocapData::Devices
	sDeviceDataU5BU5D_t71A3F7035113DA4E0B2CEC0F70A1A5A8DE7148D2* ___Devices_14;
	// System.UInt32 NaturalPoint.NatNetLib.sFrameOfMocapData::Timecode
	uint32_t ___Timecode_15;
	// System.UInt32 NaturalPoint.NatNetLib.sFrameOfMocapData::TimecodeSubframe
	uint32_t ___TimecodeSubframe_16;
	// System.Double NaturalPoint.NatNetLib.sFrameOfMocapData::Timestamp
	double ___Timestamp_17;
	// System.UInt64 NaturalPoint.NatNetLib.sFrameOfMocapData::CameraMidExposureTimestamp
	uint64_t ___CameraMidExposureTimestamp_18;
	// System.UInt64 NaturalPoint.NatNetLib.sFrameOfMocapData::CameraDataReceivedTimestamp
	uint64_t ___CameraDataReceivedTimestamp_19;
	// System.UInt64 NaturalPoint.NatNetLib.sFrameOfMocapData::TransmitTimestamp
	uint64_t ___TransmitTimestamp_20;
	// System.Int16 NaturalPoint.NatNetLib.sFrameOfMocapData::Params
	int16_t ___Params_21;

public:
	inline static int32_t get_offset_of_FrameNumber_0() { return static_cast<int32_t>(offsetof(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33, ___FrameNumber_0)); }
	inline int32_t get_FrameNumber_0() const { return ___FrameNumber_0; }
	inline int32_t* get_address_of_FrameNumber_0() { return &___FrameNumber_0; }
	inline void set_FrameNumber_0(int32_t value)
	{
		___FrameNumber_0 = value;
	}

	inline static int32_t get_offset_of_MarkerSetCount_1() { return static_cast<int32_t>(offsetof(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33, ___MarkerSetCount_1)); }
	inline int32_t get_MarkerSetCount_1() const { return ___MarkerSetCount_1; }
	inline int32_t* get_address_of_MarkerSetCount_1() { return &___MarkerSetCount_1; }
	inline void set_MarkerSetCount_1(int32_t value)
	{
		___MarkerSetCount_1 = value;
	}

	inline static int32_t get_offset_of_MarkerSets_2() { return static_cast<int32_t>(offsetof(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33, ___MarkerSets_2)); }
	inline sMarkerSetDataU5BU5D_t7CAAE2772EABCB3EADCCA7BF97039B2DFE1C9118* get_MarkerSets_2() const { return ___MarkerSets_2; }
	inline sMarkerSetDataU5BU5D_t7CAAE2772EABCB3EADCCA7BF97039B2DFE1C9118** get_address_of_MarkerSets_2() { return &___MarkerSets_2; }
	inline void set_MarkerSets_2(sMarkerSetDataU5BU5D_t7CAAE2772EABCB3EADCCA7BF97039B2DFE1C9118* value)
	{
		___MarkerSets_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MarkerSets_2), (void*)value);
	}

	inline static int32_t get_offset_of_OtherMarkerCount_3() { return static_cast<int32_t>(offsetof(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33, ___OtherMarkerCount_3)); }
	inline int32_t get_OtherMarkerCount_3() const { return ___OtherMarkerCount_3; }
	inline int32_t* get_address_of_OtherMarkerCount_3() { return &___OtherMarkerCount_3; }
	inline void set_OtherMarkerCount_3(int32_t value)
	{
		___OtherMarkerCount_3 = value;
	}

	inline static int32_t get_offset_of_OtherMarkers_4() { return static_cast<int32_t>(offsetof(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33, ___OtherMarkers_4)); }
	inline intptr_t get_OtherMarkers_4() const { return ___OtherMarkers_4; }
	inline intptr_t* get_address_of_OtherMarkers_4() { return &___OtherMarkers_4; }
	inline void set_OtherMarkers_4(intptr_t value)
	{
		___OtherMarkers_4 = value;
	}

	inline static int32_t get_offset_of_RigidBodyCount_5() { return static_cast<int32_t>(offsetof(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33, ___RigidBodyCount_5)); }
	inline int32_t get_RigidBodyCount_5() const { return ___RigidBodyCount_5; }
	inline int32_t* get_address_of_RigidBodyCount_5() { return &___RigidBodyCount_5; }
	inline void set_RigidBodyCount_5(int32_t value)
	{
		___RigidBodyCount_5 = value;
	}

	inline static int32_t get_offset_of_RigidBodies_6() { return static_cast<int32_t>(offsetof(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33, ___RigidBodies_6)); }
	inline sRigidBodyDataU5BU5D_t80B47D36737E8C7D314FE0A98A8600ADC440B482* get_RigidBodies_6() const { return ___RigidBodies_6; }
	inline sRigidBodyDataU5BU5D_t80B47D36737E8C7D314FE0A98A8600ADC440B482** get_address_of_RigidBodies_6() { return &___RigidBodies_6; }
	inline void set_RigidBodies_6(sRigidBodyDataU5BU5D_t80B47D36737E8C7D314FE0A98A8600ADC440B482* value)
	{
		___RigidBodies_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RigidBodies_6), (void*)value);
	}

	inline static int32_t get_offset_of_SkeletonCount_7() { return static_cast<int32_t>(offsetof(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33, ___SkeletonCount_7)); }
	inline int32_t get_SkeletonCount_7() const { return ___SkeletonCount_7; }
	inline int32_t* get_address_of_SkeletonCount_7() { return &___SkeletonCount_7; }
	inline void set_SkeletonCount_7(int32_t value)
	{
		___SkeletonCount_7 = value;
	}

	inline static int32_t get_offset_of_Skeletons_8() { return static_cast<int32_t>(offsetof(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33, ___Skeletons_8)); }
	inline sSkeletonDataU5BU5D_t73F3A5AEF62C20F97925305516ED03260D43B301* get_Skeletons_8() const { return ___Skeletons_8; }
	inline sSkeletonDataU5BU5D_t73F3A5AEF62C20F97925305516ED03260D43B301** get_address_of_Skeletons_8() { return &___Skeletons_8; }
	inline void set_Skeletons_8(sSkeletonDataU5BU5D_t73F3A5AEF62C20F97925305516ED03260D43B301* value)
	{
		___Skeletons_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Skeletons_8), (void*)value);
	}

	inline static int32_t get_offset_of_LabeledMarkerCount_9() { return static_cast<int32_t>(offsetof(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33, ___LabeledMarkerCount_9)); }
	inline int32_t get_LabeledMarkerCount_9() const { return ___LabeledMarkerCount_9; }
	inline int32_t* get_address_of_LabeledMarkerCount_9() { return &___LabeledMarkerCount_9; }
	inline void set_LabeledMarkerCount_9(int32_t value)
	{
		___LabeledMarkerCount_9 = value;
	}

	inline static int32_t get_offset_of_LabeledMarkers_10() { return static_cast<int32_t>(offsetof(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33, ___LabeledMarkers_10)); }
	inline sMarkerU5BU5D_t4660E1FB80824989BE6B8D72046540FAD489E4CE* get_LabeledMarkers_10() const { return ___LabeledMarkers_10; }
	inline sMarkerU5BU5D_t4660E1FB80824989BE6B8D72046540FAD489E4CE** get_address_of_LabeledMarkers_10() { return &___LabeledMarkers_10; }
	inline void set_LabeledMarkers_10(sMarkerU5BU5D_t4660E1FB80824989BE6B8D72046540FAD489E4CE* value)
	{
		___LabeledMarkers_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LabeledMarkers_10), (void*)value);
	}

	inline static int32_t get_offset_of_ForcePlateCount_11() { return static_cast<int32_t>(offsetof(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33, ___ForcePlateCount_11)); }
	inline int32_t get_ForcePlateCount_11() const { return ___ForcePlateCount_11; }
	inline int32_t* get_address_of_ForcePlateCount_11() { return &___ForcePlateCount_11; }
	inline void set_ForcePlateCount_11(int32_t value)
	{
		___ForcePlateCount_11 = value;
	}

	inline static int32_t get_offset_of_ForcePlates_12() { return static_cast<int32_t>(offsetof(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33, ___ForcePlates_12)); }
	inline sForcePlateDataU5BU5D_t8B906D337B2A01D2A0A5EC375345A403AD3AD16B* get_ForcePlates_12() const { return ___ForcePlates_12; }
	inline sForcePlateDataU5BU5D_t8B906D337B2A01D2A0A5EC375345A403AD3AD16B** get_address_of_ForcePlates_12() { return &___ForcePlates_12; }
	inline void set_ForcePlates_12(sForcePlateDataU5BU5D_t8B906D337B2A01D2A0A5EC375345A403AD3AD16B* value)
	{
		___ForcePlates_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ForcePlates_12), (void*)value);
	}

	inline static int32_t get_offset_of_DeviceCount_13() { return static_cast<int32_t>(offsetof(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33, ___DeviceCount_13)); }
	inline int32_t get_DeviceCount_13() const { return ___DeviceCount_13; }
	inline int32_t* get_address_of_DeviceCount_13() { return &___DeviceCount_13; }
	inline void set_DeviceCount_13(int32_t value)
	{
		___DeviceCount_13 = value;
	}

	inline static int32_t get_offset_of_Devices_14() { return static_cast<int32_t>(offsetof(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33, ___Devices_14)); }
	inline sDeviceDataU5BU5D_t71A3F7035113DA4E0B2CEC0F70A1A5A8DE7148D2* get_Devices_14() const { return ___Devices_14; }
	inline sDeviceDataU5BU5D_t71A3F7035113DA4E0B2CEC0F70A1A5A8DE7148D2** get_address_of_Devices_14() { return &___Devices_14; }
	inline void set_Devices_14(sDeviceDataU5BU5D_t71A3F7035113DA4E0B2CEC0F70A1A5A8DE7148D2* value)
	{
		___Devices_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Devices_14), (void*)value);
	}

	inline static int32_t get_offset_of_Timecode_15() { return static_cast<int32_t>(offsetof(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33, ___Timecode_15)); }
	inline uint32_t get_Timecode_15() const { return ___Timecode_15; }
	inline uint32_t* get_address_of_Timecode_15() { return &___Timecode_15; }
	inline void set_Timecode_15(uint32_t value)
	{
		___Timecode_15 = value;
	}

	inline static int32_t get_offset_of_TimecodeSubframe_16() { return static_cast<int32_t>(offsetof(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33, ___TimecodeSubframe_16)); }
	inline uint32_t get_TimecodeSubframe_16() const { return ___TimecodeSubframe_16; }
	inline uint32_t* get_address_of_TimecodeSubframe_16() { return &___TimecodeSubframe_16; }
	inline void set_TimecodeSubframe_16(uint32_t value)
	{
		___TimecodeSubframe_16 = value;
	}

	inline static int32_t get_offset_of_Timestamp_17() { return static_cast<int32_t>(offsetof(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33, ___Timestamp_17)); }
	inline double get_Timestamp_17() const { return ___Timestamp_17; }
	inline double* get_address_of_Timestamp_17() { return &___Timestamp_17; }
	inline void set_Timestamp_17(double value)
	{
		___Timestamp_17 = value;
	}

	inline static int32_t get_offset_of_CameraMidExposureTimestamp_18() { return static_cast<int32_t>(offsetof(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33, ___CameraMidExposureTimestamp_18)); }
	inline uint64_t get_CameraMidExposureTimestamp_18() const { return ___CameraMidExposureTimestamp_18; }
	inline uint64_t* get_address_of_CameraMidExposureTimestamp_18() { return &___CameraMidExposureTimestamp_18; }
	inline void set_CameraMidExposureTimestamp_18(uint64_t value)
	{
		___CameraMidExposureTimestamp_18 = value;
	}

	inline static int32_t get_offset_of_CameraDataReceivedTimestamp_19() { return static_cast<int32_t>(offsetof(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33, ___CameraDataReceivedTimestamp_19)); }
	inline uint64_t get_CameraDataReceivedTimestamp_19() const { return ___CameraDataReceivedTimestamp_19; }
	inline uint64_t* get_address_of_CameraDataReceivedTimestamp_19() { return &___CameraDataReceivedTimestamp_19; }
	inline void set_CameraDataReceivedTimestamp_19(uint64_t value)
	{
		___CameraDataReceivedTimestamp_19 = value;
	}

	inline static int32_t get_offset_of_TransmitTimestamp_20() { return static_cast<int32_t>(offsetof(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33, ___TransmitTimestamp_20)); }
	inline uint64_t get_TransmitTimestamp_20() const { return ___TransmitTimestamp_20; }
	inline uint64_t* get_address_of_TransmitTimestamp_20() { return &___TransmitTimestamp_20; }
	inline void set_TransmitTimestamp_20(uint64_t value)
	{
		___TransmitTimestamp_20 = value;
	}

	inline static int32_t get_offset_of_Params_21() { return static_cast<int32_t>(offsetof(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33, ___Params_21)); }
	inline int16_t get_Params_21() const { return ___Params_21; }
	inline int16_t* get_address_of_Params_21() { return &___Params_21; }
	inline void set_Params_21(int16_t value)
	{
		___Params_21 = value;
	}
};

// Native definition for P/Invoke marshalling of NaturalPoint.NatNetLib.sFrameOfMocapData
struct sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33_marshaled_pinvoke
{
	int32_t ___FrameNumber_0;
	int32_t ___MarkerSetCount_1;
	sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshaled_pinvoke ___MarkerSets_2[2000];
	int32_t ___OtherMarkerCount_3;
	intptr_t ___OtherMarkers_4;
	int32_t ___RigidBodyCount_5;
	sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A  ___RigidBodies_6[1000];
	int32_t ___SkeletonCount_7;
	sSkeletonData_t3293D9837DEB8B9CA3576C13DD130134442E5D4B  ___Skeletons_8[100];
	int32_t ___LabeledMarkerCount_9;
	sMarker_t111D88AF8AF385236E954237EF1C2A2128918469  ___LabeledMarkers_10[1000];
	int32_t ___ForcePlateCount_11;
	sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshaled_pinvoke ___ForcePlates_12[8];
	int32_t ___DeviceCount_13;
	sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshaled_pinvoke ___Devices_14[32];
	uint32_t ___Timecode_15;
	uint32_t ___TimecodeSubframe_16;
	double ___Timestamp_17;
	uint64_t ___CameraMidExposureTimestamp_18;
	uint64_t ___CameraDataReceivedTimestamp_19;
	uint64_t ___TransmitTimestamp_20;
	int16_t ___Params_21;
};
// Native definition for COM marshalling of NaturalPoint.NatNetLib.sFrameOfMocapData
struct sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33_marshaled_com
{
	int32_t ___FrameNumber_0;
	int32_t ___MarkerSetCount_1;
	sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshaled_com ___MarkerSets_2[2000];
	int32_t ___OtherMarkerCount_3;
	intptr_t ___OtherMarkers_4;
	int32_t ___RigidBodyCount_5;
	sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A  ___RigidBodies_6[1000];
	int32_t ___SkeletonCount_7;
	sSkeletonData_t3293D9837DEB8B9CA3576C13DD130134442E5D4B  ___Skeletons_8[100];
	int32_t ___LabeledMarkerCount_9;
	sMarker_t111D88AF8AF385236E954237EF1C2A2128918469  ___LabeledMarkers_10[1000];
	int32_t ___ForcePlateCount_11;
	sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshaled_com ___ForcePlates_12[8];
	int32_t ___DeviceCount_13;
	sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshaled_com ___Devices_14[32];
	uint32_t ___Timecode_15;
	uint32_t ___TimecodeSubframe_16;
	double ___Timestamp_17;
	uint64_t ___CameraMidExposureTimestamp_18;
	uint64_t ___CameraDataReceivedTimestamp_19;
	uint64_t ___TransmitTimestamp_20;
	int16_t ___Params_21;
};

// System.Nullable`1<NaturalPoint.NatNetLib.sFrameOfMocapData>
struct Nullable_1_t8FA175848429A9829285EAB0E59E300CA5C78389 
{
public:
	// T System.Nullable`1::value
	sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t8FA175848429A9829285EAB0E59E300CA5C78389, ___value_0)); }
	inline sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33  get_value_0() const { return ___value_0; }
	inline sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___MarkerSets_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___RigidBodies_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___Skeletons_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___LabeledMarkers_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___ForcePlates_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___Devices_14), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t8FA175848429A9829285EAB0E59E300CA5C78389, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A  : public InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectName_17), (void*)value);
	}
};


// NaturalPoint.NatNetLib.NatNetClient/NativeFrameReceivedEventArgs
struct NativeFrameReceivedEventArgs_t915E8504219907B33B999E6A040590C57B2DF4FF  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.Nullable`1<NaturalPoint.NatNetLib.sFrameOfMocapData> NaturalPoint.NatNetLib.NatNetClient/NativeFrameReceivedEventArgs::m_marshaledFrame
	Nullable_1_t8FA175848429A9829285EAB0E59E300CA5C78389  ___m_marshaledFrame_1;
	// System.IntPtr NaturalPoint.NatNetLib.NatNetClient/NativeFrameReceivedEventArgs::m_nativeFrame
	intptr_t ___m_nativeFrame_2;

public:
	inline static int32_t get_offset_of_m_marshaledFrame_1() { return static_cast<int32_t>(offsetof(NativeFrameReceivedEventArgs_t915E8504219907B33B999E6A040590C57B2DF4FF, ___m_marshaledFrame_1)); }
	inline Nullable_1_t8FA175848429A9829285EAB0E59E300CA5C78389  get_m_marshaledFrame_1() const { return ___m_marshaledFrame_1; }
	inline Nullable_1_t8FA175848429A9829285EAB0E59E300CA5C78389 * get_address_of_m_marshaledFrame_1() { return &___m_marshaledFrame_1; }
	inline void set_m_marshaledFrame_1(Nullable_1_t8FA175848429A9829285EAB0E59E300CA5C78389  value)
	{
		___m_marshaledFrame_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_marshaledFrame_1))->___value_0))->___MarkerSets_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_marshaledFrame_1))->___value_0))->___RigidBodies_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_marshaledFrame_1))->___value_0))->___Skeletons_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_marshaledFrame_1))->___value_0))->___LabeledMarkers_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_marshaledFrame_1))->___value_0))->___ForcePlates_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_marshaledFrame_1))->___value_0))->___Devices_14), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_nativeFrame_2() { return static_cast<int32_t>(offsetof(NativeFrameReceivedEventArgs_t915E8504219907B33B999E6A040590C57B2DF4FF, ___m_nativeFrame_2)); }
	inline intptr_t get_m_nativeFrame_2() const { return ___m_nativeFrame_2; }
	inline intptr_t* get_address_of_m_nativeFrame_2() { return &___m_nativeFrame_2; }
	inline void set_m_nativeFrame_2(intptr_t value)
	{
		___m_nativeFrame_2 = value;
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
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// NaturalPoint.NatNetLib.sDataDescription[]
struct sDataDescriptionU5BU5D_t8BCADB0C438529DA8FD293E283308DE540600A8E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) sDataDescription_t1867298897A36828F439BA80E1153554BD63407F  m_Items[1];

public:
	inline sDataDescription_t1867298897A36828F439BA80E1153554BD63407F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline sDataDescription_t1867298897A36828F439BA80E1153554BD63407F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, sDataDescription_t1867298897A36828F439BA80E1153554BD63407F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline sDataDescription_t1867298897A36828F439BA80E1153554BD63407F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline sDataDescription_t1867298897A36828F439BA80E1153554BD63407F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, sDataDescription_t1867298897A36828F439BA80E1153554BD63407F  value)
	{
		m_Items[index] = value;
	}
};
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
// NaturalPoint.NatNetLib.sAnalogChannelData[]
struct sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5  m_Items[1];

public:
	inline sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Values_1), (void*)NULL);
	}
	inline sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Values_1), (void*)NULL);
	}
};
// NaturalPoint.NatNetLib.sChannelName[]
struct sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D  m_Items[1];

public:
	inline sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_0), (void*)NULL);
	}
	inline sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_0), (void*)NULL);
	}
};
// NaturalPoint.NatNetLib.sMarkerSetData[]
struct sMarkerSetDataU5BU5D_t7CAAE2772EABCB3EADCCA7BF97039B2DFE1C9118  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6  m_Items[1];

public:
	inline sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Name_0), (void*)NULL);
	}
	inline sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Name_0), (void*)NULL);
	}
};
// NaturalPoint.NatNetLib.sRigidBodyData[]
struct sRigidBodyDataU5BU5D_t80B47D36737E8C7D314FE0A98A8600ADC440B482  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A  m_Items[1];

public:
	inline sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A  value)
	{
		m_Items[index] = value;
	}
};
// NaturalPoint.NatNetLib.sSkeletonData[]
struct sSkeletonDataU5BU5D_t73F3A5AEF62C20F97925305516ED03260D43B301  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) sSkeletonData_t3293D9837DEB8B9CA3576C13DD130134442E5D4B  m_Items[1];

public:
	inline sSkeletonData_t3293D9837DEB8B9CA3576C13DD130134442E5D4B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline sSkeletonData_t3293D9837DEB8B9CA3576C13DD130134442E5D4B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, sSkeletonData_t3293D9837DEB8B9CA3576C13DD130134442E5D4B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline sSkeletonData_t3293D9837DEB8B9CA3576C13DD130134442E5D4B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline sSkeletonData_t3293D9837DEB8B9CA3576C13DD130134442E5D4B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, sSkeletonData_t3293D9837DEB8B9CA3576C13DD130134442E5D4B  value)
	{
		m_Items[index] = value;
	}
};
// NaturalPoint.NatNetLib.sMarker[]
struct sMarkerU5BU5D_t4660E1FB80824989BE6B8D72046540FAD489E4CE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) sMarker_t111D88AF8AF385236E954237EF1C2A2128918469  m_Items[1];

public:
	inline sMarker_t111D88AF8AF385236E954237EF1C2A2128918469  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline sMarker_t111D88AF8AF385236E954237EF1C2A2128918469 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, sMarker_t111D88AF8AF385236E954237EF1C2A2128918469  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline sMarker_t111D88AF8AF385236E954237EF1C2A2128918469  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline sMarker_t111D88AF8AF385236E954237EF1C2A2128918469 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, sMarker_t111D88AF8AF385236E954237EF1C2A2128918469  value)
	{
		m_Items[index] = value;
	}
};
// NaturalPoint.NatNetLib.sForcePlateData[]
struct sForcePlateDataU5BU5D_t8B906D337B2A01D2A0A5EC375345A403AD3AD16B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6  m_Items[1];

public:
	inline sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ChannelData_2), (void*)NULL);
	}
	inline sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ChannelData_2), (void*)NULL);
	}
};
// NaturalPoint.NatNetLib.sDeviceData[]
struct sDeviceDataU5BU5D_t71A3F7035113DA4E0B2CEC0F70A1A5A8DE7148D2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48  m_Items[1];

public:
	inline sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ChannelData_2), (void*)NULL);
	}
	inline sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ChannelData_2), (void*)NULL);
	}
};
// NaturalPoint.NatNetLib.sRigidBodyDescription[]
struct sRigidBodyDescriptionU5BU5D_tFF98B2BAC77AD36C05964568CE1C2F0C475E7968  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B  m_Items[1];

public:
	inline sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Name_0), (void*)NULL);
	}
	inline sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Name_0), (void*)NULL);
	}
};

IL2CPP_EXTERN_C void sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshal_pinvoke(const sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86& unmarshaled, sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshal_pinvoke_back(const sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshaled_pinvoke& marshaled, sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86& unmarshaled);
IL2CPP_EXTERN_C void sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshal_pinvoke_cleanup(sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshal_pinvoke(const sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5& unmarshaled, sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshal_pinvoke_back(const sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshaled_pinvoke& marshaled, sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5& unmarshaled);
IL2CPP_EXTERN_C void sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshal_pinvoke_cleanup(sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshal_com(const sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5& unmarshaled, sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshaled_com& marshaled);
IL2CPP_EXTERN_C void sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshal_com_back(const sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshaled_com& marshaled, sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5& unmarshaled);
IL2CPP_EXTERN_C void sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshal_com_cleanup(sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshaled_com& marshaled);
IL2CPP_EXTERN_C void sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshal_pinvoke(const sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D& unmarshaled, sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshal_pinvoke_back(const sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshaled_pinvoke& marshaled, sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D& unmarshaled);
IL2CPP_EXTERN_C void sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshal_pinvoke_cleanup(sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshal_com(const sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D& unmarshaled, sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshaled_com& marshaled);
IL2CPP_EXTERN_C void sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshal_com_back(const sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshaled_com& marshaled, sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D& unmarshaled);
IL2CPP_EXTERN_C void sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshal_com_cleanup(sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshaled_com& marshaled);
IL2CPP_EXTERN_C void sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshal_pinvoke(const sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6& unmarshaled, sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshal_pinvoke_back(const sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshaled_pinvoke& marshaled, sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6& unmarshaled);
IL2CPP_EXTERN_C void sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshal_pinvoke_cleanup(sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshal_pinvoke(const sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6& unmarshaled, sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshal_pinvoke_back(const sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshaled_pinvoke& marshaled, sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6& unmarshaled);
IL2CPP_EXTERN_C void sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshal_pinvoke_cleanup(sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshal_pinvoke(const sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48& unmarshaled, sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshal_pinvoke_back(const sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshaled_pinvoke& marshaled, sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48& unmarshaled);
IL2CPP_EXTERN_C void sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshal_pinvoke_cleanup(sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshal_com(const sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6& unmarshaled, sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshaled_com& marshaled);
IL2CPP_EXTERN_C void sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshal_com_back(const sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshaled_com& marshaled, sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6& unmarshaled);
IL2CPP_EXTERN_C void sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshal_com_cleanup(sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshaled_com& marshaled);
IL2CPP_EXTERN_C void sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshal_com(const sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6& unmarshaled, sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshaled_com& marshaled);
IL2CPP_EXTERN_C void sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshal_com_back(const sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshaled_com& marshaled, sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6& unmarshaled);
IL2CPP_EXTERN_C void sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshal_com_cleanup(sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshaled_com& marshaled);
IL2CPP_EXTERN_C void sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshal_com(const sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48& unmarshaled, sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshaled_com& marshaled);
IL2CPP_EXTERN_C void sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshal_com_back(const sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshaled_com& marshaled, sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48& unmarshaled);
IL2CPP_EXTERN_C void sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshal_com_cleanup(sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshaled_com& marshaled);
IL2CPP_EXTERN_C void sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshal_pinvoke(const sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B& unmarshaled, sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshal_pinvoke_back(const sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshaled_pinvoke& marshaled, sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B& unmarshaled);
IL2CPP_EXTERN_C void sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshal_pinvoke_cleanup(sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshal_com(const sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B& unmarshaled, sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshaled_com& marshaled);
IL2CPP_EXTERN_C void sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshal_com_back(const sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshaled_com& marshaled, sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B& unmarshaled);
IL2CPP_EXTERN_C void sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshal_com_cleanup(sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshaled_com& marshaled);

// System.Void System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sMarkerSetDescription>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF7E13A2CB9F1323F224998BB4F8AE1D563A8094F_gshared (List_1_tC709C217B50945D05E12E3AA49B2E9C0249EFCF6 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sRigidBodyDescription>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC6A79D89F7C05C24E18A2E3730DCCCCE6D347E11_gshared (List_1_t9F435504E656EFBD3B7B25E9848E92FCD4BAE99D * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sSkeletonDescription>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7162A2003985C2D05DE4C5A881E6FFF2F9F00D63_gshared (List_1_t9810C814F95BB4E90A3A37A2DF5538EA18A5D299 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sForcePlateDescription>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m41AA6195366F7E854B6CFC8DA92F19F1AB3E8E75_gshared (List_1_t854F66645104B53E0C1EF24E8111D90E2563A36B * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sMarkerSetDescription>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mB5C4FF4DE7AE0FFB5E9EC41826B8DDB84F334BD8_gshared (List_1_tC709C217B50945D05E12E3AA49B2E9C0249EFCF6 * __this, sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sRigidBodyDescription>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mB24315227E1C53FE76CF8E9000C144904006165F_gshared (List_1_t9F435504E656EFBD3B7B25E9848E92FCD4BAE99D * __this, sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sSkeletonDescription>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mFAEED57377BBF882F74A18920F5DA29FA227A08F_gshared (List_1_t9810C814F95BB4E90A3A37A2DF5538EA18A5D299 * __this, sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sForcePlateDescription>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mB60AC93C558414E2F6ABED44688983CA989D1856_gshared (List_1_t854F66645104B53E0C1EF24E8111D90E2563A36B * __this, sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7  ___item0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<NaturalPoint.NatNetLib.sFrameOfMocapData>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m03143D2D5185B779A4B75F58148CD1A6C8E870DD_gshared_inline (Nullable_1_t8FA175848429A9829285EAB0E59E300CA5C78389 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<NaturalPoint.NatNetLib.sFrameOfMocapData>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m2384399C33D8259B11A61416F8EE82B4C7A929F7_gshared (Nullable_1_t8FA175848429A9829285EAB0E59E300CA5C78389 * __this, sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33  ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<NaturalPoint.NatNetLib.sFrameOfMocapData>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33  Nullable_1_get_Value_m12438E9AF44A0EA7806AB39FCB72AF6B983FC3D4_gshared (Nullable_1_t8FA175848429A9829285EAB0E59E300CA5C78389 * __this, const RuntimeMethod* method);

// System.Void NaturalPoint.NatNetLib.NativeMethods::NatNet_GetVersion(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_NatNet_GetVersion_mEA86AD6BC8DD3941C2E88BA22A363FC2B53A7F19 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___version0, const RuntimeMethod* method);
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_mDC5888D1E4DE4E3BCA5D95CF38E9C08A6123170C (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, int32_t ___revision3, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void NaturalPoint.NatNetLib.NatNetClient/NativeFrameReceivedEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFrameReceivedEventArgs__ctor_mBE3078C2BF39CBCA0F67EEE8900A02823E1C77D8 (NativeFrameReceivedEventArgs_t915E8504219907B33B999E6A040590C57B2DF4FF * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// NaturalPoint.NatNetLib.NatNetError NaturalPoint.NatNetLib.NativeMethods::NatNet_Client_Create(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_NatNet_Client_Create_m56410E31EB63AD2837352B50FA05D0712D584919 (intptr_t* ___clientHandle0, const RuntimeMethod* method);
// System.Void NaturalPoint.NatNetLib.NatNetException::ThrowIfNotOK(NaturalPoint.NatNetLib.NatNetError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatNetException_ThrowIfNotOK_mCC2D685A30BA27CFAADC9377422A42EBF09E6B59 (int32_t ___result0, String_t* ___message1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void NaturalPoint.NatNetLib.NatNetException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatNetException__ctor_m3D27A5DE052F41581C76F8AB5C8C29149F21493A (NatNetException_tE207E10FDA92F73DF0EE67DF1DE8817B096B4DBF * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void NaturalPoint.NatNetLib.NatNetFrameReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatNetFrameReceivedCallback__ctor_mAFBCBF4755C3614247CE7A405BF238AE5CFC42C3 (NatNetFrameReceivedCallback_t097D075BB3EEB6CF2A2EAFE2E06D10E2C033D768 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// NaturalPoint.NatNetLib.NatNetError NaturalPoint.NatNetLib.NativeMethods::NatNet_Client_SetFrameReceivedCallback(System.IntPtr,NaturalPoint.NatNetLib.NatNetFrameReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_NatNet_Client_SetFrameReceivedCallback_mC1401EE3277FD9909187E54ADFF5A1CEF6D4B10C (intptr_t ___clientHandle0, NatNetFrameReceivedCallback_t097D075BB3EEB6CF2A2EAFE2E06D10E2C033D768 * ___pfnDataCallback1, const RuntimeMethod* method);
// System.Void NaturalPoint.NatNetLib.NatNetClient::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatNetClient_ThrowIfDisposed_m1901652F3A888512ABBF7C22F178DA7C9CAF674E (NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF * __this, const RuntimeMethod* method);
// NaturalPoint.NatNetLib.NatNetError NaturalPoint.NatNetLib.NativeMethods::NatNet_Client_Connect(System.IntPtr,NaturalPoint.NatNetLib.sNatNetClientConnectParams&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_NatNet_Client_Connect_m58ADCC773B5833631258E7CC3DD4B1712708070A (intptr_t ___clientHandle0, sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86 * ___connectParams1, const RuntimeMethod* method);
// System.Void NaturalPoint.NatNetLib.NatNetClient::set_Connected(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NatNetClient_set_Connected_m60CFB52771DC41FF94737638968D0F20CD288391_inline (NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean NaturalPoint.NatNetLib.NatNetClient::get_Connected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NatNetClient_get_Connected_m80378823D6DED924C378CBAAC662B6C313395356_inline (NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF * __this, const RuntimeMethod* method);
// NaturalPoint.NatNetLib.NatNetError NaturalPoint.NatNetLib.NativeMethods::NatNet_Client_Disconnect(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_NatNet_Client_Disconnect_m5A9166044569485A94237E28757AC006AE006635 (intptr_t ___clientHandle0, const RuntimeMethod* method);
// NaturalPoint.NatNetLib.NatNetError NaturalPoint.NatNetLib.NativeMethods::NatNet_Client_GetDataDescriptionList(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_NatNet_Client_GetDataDescriptionList_mA722232CA6F3F41677DDE4286DD66F0F9585EFB8 (intptr_t ___clientHandle0, intptr_t* ___pDataDescriptions1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3 (intptr_t ___ptr0, Type_t * ___structureType1, const RuntimeMethod* method);
// System.Void NaturalPoint.NatNetLib.NatNetClient/DataDescriptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataDescriptions__ctor_mF1113317D32AD963E2FB6783381397859B50E0A8 (DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sMarkerSetDescription>::.ctor(System.Int32)
inline void List_1__ctor_mF7E13A2CB9F1323F224998BB4F8AE1D563A8094F (List_1_tC709C217B50945D05E12E3AA49B2E9C0249EFCF6 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC709C217B50945D05E12E3AA49B2E9C0249EFCF6 *, int32_t, const RuntimeMethod*))List_1__ctor_mF7E13A2CB9F1323F224998BB4F8AE1D563A8094F_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sRigidBodyDescription>::.ctor(System.Int32)
inline void List_1__ctor_mC6A79D89F7C05C24E18A2E3730DCCCCE6D347E11 (List_1_t9F435504E656EFBD3B7B25E9848E92FCD4BAE99D * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9F435504E656EFBD3B7B25E9848E92FCD4BAE99D *, int32_t, const RuntimeMethod*))List_1__ctor_mC6A79D89F7C05C24E18A2E3730DCCCCE6D347E11_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sSkeletonDescription>::.ctor(System.Int32)
inline void List_1__ctor_m7162A2003985C2D05DE4C5A881E6FFF2F9F00D63 (List_1_t9810C814F95BB4E90A3A37A2DF5538EA18A5D299 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9810C814F95BB4E90A3A37A2DF5538EA18A5D299 *, int32_t, const RuntimeMethod*))List_1__ctor_m7162A2003985C2D05DE4C5A881E6FFF2F9F00D63_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sForcePlateDescription>::.ctor(System.Int32)
inline void List_1__ctor_m41AA6195366F7E854B6CFC8DA92F19F1AB3E8E75 (List_1_t854F66645104B53E0C1EF24E8111D90E2563A36B * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t854F66645104B53E0C1EF24E8111D90E2563A36B *, int32_t, const RuntimeMethod*))List_1__ctor_m41AA6195366F7E854B6CFC8DA92F19F1AB3E8E75_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sMarkerSetDescription>::Add(!0)
inline void List_1_Add_mB5C4FF4DE7AE0FFB5E9EC41826B8DDB84F334BD8 (List_1_tC709C217B50945D05E12E3AA49B2E9C0249EFCF6 * __this, sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC709C217B50945D05E12E3AA49B2E9C0249EFCF6 *, sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F , const RuntimeMethod*))List_1_Add_mB5C4FF4DE7AE0FFB5E9EC41826B8DDB84F334BD8_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sRigidBodyDescription>::Add(!0)
inline void List_1_Add_mB24315227E1C53FE76CF8E9000C144904006165F (List_1_t9F435504E656EFBD3B7B25E9848E92FCD4BAE99D * __this, sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9F435504E656EFBD3B7B25E9848E92FCD4BAE99D *, sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B , const RuntimeMethod*))List_1_Add_mB24315227E1C53FE76CF8E9000C144904006165F_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sSkeletonDescription>::Add(!0)
inline void List_1_Add_mFAEED57377BBF882F74A18920F5DA29FA227A08F (List_1_t9810C814F95BB4E90A3A37A2DF5538EA18A5D299 * __this, sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9810C814F95BB4E90A3A37A2DF5538EA18A5D299 *, sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB , const RuntimeMethod*))List_1_Add_mFAEED57377BBF882F74A18920F5DA29FA227A08F_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<NaturalPoint.NatNetLib.sForcePlateDescription>::Add(!0)
inline void List_1_Add_mB60AC93C558414E2F6ABED44688983CA989D1856 (List_1_t854F66645104B53E0C1EF24E8111D90E2563A36B * __this, sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t854F66645104B53E0C1EF24E8111D90E2563A36B *, sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7 , const RuntimeMethod*))List_1_Add_mB60AC93C558414E2F6ABED44688983CA989D1856_gshared)(__this, ___item0, method);
}
// System.Void NaturalPoint.NatNetLib.NatNetClient/NativeFrameReceivedEventArgs::set_NativeFramePointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFrameReceivedEventArgs_set_NativeFramePointer_m8A577AD325F79D2C04012D9E4BE503D363D8DE51 (NativeFrameReceivedEventArgs_t915E8504219907B33B999E6A040590C57B2DF4FF * __this, intptr_t ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<NaturalPoint.NatNetLib.NatNetClient/NativeFrameReceivedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m9A582F8B7D2AFA72C7D8AA636246769DB269BFE2 (EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * __this, RuntimeObject * ___sender0, NativeFrameReceivedEventArgs_t915E8504219907B33B999E6A040590C57B2DF4FF * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB *, RuntimeObject *, NativeFrameReceivedEventArgs_t915E8504219907B33B999E6A040590C57B2DF4FF *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Diagnostics.Debug::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_WriteLine_m2B08D80ABA95E71F063FA07FB6BF1771C7799ED0 (String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// NaturalPoint.NatNetLib.NatNetError NaturalPoint.NatNetLib.NativeMethods::NatNet_Client_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_NatNet_Client_Destroy_m24B9942CDC393DBF4F45EA25144310F88A473625 (intptr_t ___clientHandle0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880 (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * __this, String_t* ___objectName0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B (Exception_t * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080 (Exception_t * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<NaturalPoint.NatNetLib.sFrameOfMocapData>::get_HasValue()
inline bool Nullable_1_get_HasValue_m03143D2D5185B779A4B75F58148CD1A6C8E870DD_inline (Nullable_1_t8FA175848429A9829285EAB0E59E300CA5C78389 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t8FA175848429A9829285EAB0E59E300CA5C78389 *, const RuntimeMethod*))Nullable_1_get_HasValue_m03143D2D5185B779A4B75F58148CD1A6C8E870DD_gshared_inline)(__this, method);
}
// System.IntPtr NaturalPoint.NatNetLib.NatNetClient/NativeFrameReceivedEventArgs::get_NativeFramePointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeFrameReceivedEventArgs_get_NativeFramePointer_m2CE80DF1962895483102200F89ADDCA1174DD099 (NativeFrameReceivedEventArgs_t915E8504219907B33B999E6A040590C57B2DF4FF * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<NaturalPoint.NatNetLib.sFrameOfMocapData>::.ctor(!0)
inline void Nullable_1__ctor_m2384399C33D8259B11A61416F8EE82B4C7A929F7 (Nullable_1_t8FA175848429A9829285EAB0E59E300CA5C78389 * __this, sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t8FA175848429A9829285EAB0E59E300CA5C78389 *, sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33 , const RuntimeMethod*))Nullable_1__ctor_m2384399C33D8259B11A61416F8EE82B4C7A929F7_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<NaturalPoint.NatNetLib.sFrameOfMocapData>::get_Value()
inline sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33  Nullable_1_get_Value_m12438E9AF44A0EA7806AB39FCB72AF6B983FC3D4 (Nullable_1_t8FA175848429A9829285EAB0E59E300CA5C78389 * __this, const RuntimeMethod* method)
{
	return ((  sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33  (*) (Nullable_1_t8FA175848429A9829285EAB0E59E300CA5C78389 *, const RuntimeMethod*))Nullable_1_get_Value_m12438E9AF44A0EA7806AB39FCB72AF6B983FC3D4_gshared)(__this, method);
}
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
IL2CPP_EXTERN_C void CDECL NatNet_GetVersion(uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
IL2CPP_EXTERN_C void CDECL NatNet_DecodeID(int32_t, int32_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL NatNet_Client_Create(intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL NatNet_Client_Destroy(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL NatNet_Client_Connect(intptr_t, sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshaled_pinvoke*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL NatNet_Client_Disconnect(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL NatNet_Client_SetFrameReceivedCallback(intptr_t, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL NatNet_Client_GetDataDescriptionList(intptr_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL NatNet_Frame_GetRigidBodyCount(intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL NatNet_Frame_GetRigidBody(intptr_t, int32_t, sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A *);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL NatNet_Frame_RigidBody_Marker_GetPosition(intptr_t, int32_t, int32_t, float*, float*, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL NatNet_Frame_RigidBody_Marker_GetSize(intptr_t, int32_t, int32_t, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL NatNet_Frame_GetSkeletonCount(intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL NatNet_Frame_Skeleton_GetId(intptr_t, int32_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL NatNet_Frame_Skeleton_GetRigidBodyCount(intptr_t, int32_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL NatNet_Frame_Skeleton_GetRigidBody(intptr_t, int32_t, int32_t, sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A *);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL NatNet_Frame_GetTransmitTimestamp(intptr_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL NatNet_Frame_SecondsSinceHostTimestamp(intptr_t, uint64_t, double*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL NatNet_Frame_GetLabeledMarkerCount(intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL NatNet_Frame_GetLabeledMarker(intptr_t, int32_t, sMarker_t111D88AF8AF385236E954237EF1C2A2128918469 *);
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
// Conversion methods for marshalling of: NaturalPoint.NatNetLib.MarkerDataVector
IL2CPP_EXTERN_C void MarkerDataVector_t8420E39F0ED6C68E785EE794300222A227CB8E3F_marshal_pinvoke(const MarkerDataVector_t8420E39F0ED6C68E785EE794300222A227CB8E3F& unmarshaled, MarkerDataVector_t8420E39F0ED6C68E785EE794300222A227CB8E3F_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get_Values_0() != NULL)
	{
		if (3 > (unmarshaled.get_Values_0())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(3); i++)
		{
			(marshaled.___Values_0)[i] = (unmarshaled.get_Values_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void MarkerDataVector_t8420E39F0ED6C68E785EE794300222A227CB8E3F_marshal_pinvoke_back(const MarkerDataVector_t8420E39F0ED6C68E785EE794300222A227CB8E3F_marshaled_pinvoke& marshaled, MarkerDataVector_t8420E39F0ED6C68E785EE794300222A227CB8E3F& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_Values_0(reinterpret_cast<SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*>((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, 3)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(3); i++)
	{
		(unmarshaled.get_Values_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___Values_0)[i]);
	}
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.MarkerDataVector
IL2CPP_EXTERN_C void MarkerDataVector_t8420E39F0ED6C68E785EE794300222A227CB8E3F_marshal_pinvoke_cleanup(MarkerDataVector_t8420E39F0ED6C68E785EE794300222A227CB8E3F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: NaturalPoint.NatNetLib.MarkerDataVector
IL2CPP_EXTERN_C void MarkerDataVector_t8420E39F0ED6C68E785EE794300222A227CB8E3F_marshal_com(const MarkerDataVector_t8420E39F0ED6C68E785EE794300222A227CB8E3F& unmarshaled, MarkerDataVector_t8420E39F0ED6C68E785EE794300222A227CB8E3F_marshaled_com& marshaled)
{
	if (unmarshaled.get_Values_0() != NULL)
	{
		if (3 > (unmarshaled.get_Values_0())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(3); i++)
		{
			(marshaled.___Values_0)[i] = (unmarshaled.get_Values_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void MarkerDataVector_t8420E39F0ED6C68E785EE794300222A227CB8E3F_marshal_com_back(const MarkerDataVector_t8420E39F0ED6C68E785EE794300222A227CB8E3F_marshaled_com& marshaled, MarkerDataVector_t8420E39F0ED6C68E785EE794300222A227CB8E3F& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_Values_0(reinterpret_cast<SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*>((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, 3)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(3); i++)
	{
		(unmarshaled.get_Values_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___Values_0)[i]);
	}
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.MarkerDataVector
IL2CPP_EXTERN_C void MarkerDataVector_t8420E39F0ED6C68E785EE794300222A227CB8E3F_marshal_com_cleanup(MarkerDataVector_t8420E39F0ED6C68E785EE794300222A227CB8E3F_marshaled_com& marshaled)
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
// System.Version NaturalPoint.NatNetLib.NatNetClient::get_NatNetLibVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * NatNetClient_get_NatNetLibVersion_m3DE0F162D42010DAA2237E08BAA6364BE1EE501C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * V_1 = NULL;
	{
		// Byte[] natNetLibVersion = new Byte[4];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		// NatNetLib.NativeMethods.NatNet_GetVersion( natNetLibVersion );
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		NativeMethods_NatNet_GetVersion_mEA86AD6BC8DD3941C2E88BA22A363FC2B53A7F19(L_1, /*hidden argument*/NULL);
		// return new Version( natNetLibVersion[0], natNetLibVersion[1], natNetLibVersion[2], natNetLibVersion[3] );
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 1;
		uint8_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 2;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = 3;
		uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_14 = (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C *)il2cpp_codegen_object_new(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
		Version__ctor_mDC5888D1E4DE4E3BCA5D95CF38E9C08A6123170C(L_14, L_4, L_7, L_10, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_15 = V_1;
		return L_15;
	}
}
// System.Boolean NaturalPoint.NatNetLib.NatNetClient::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NatNetClient_get_Connected_m80378823D6DED924C378CBAAC662B6C313395356 (NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF * __this, const RuntimeMethod* method)
{
	{
		// public bool Connected { get; private set; }
		bool L_0 = __this->get_U3CConnectedU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void NaturalPoint.NatNetLib.NatNetClient::set_Connected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatNetClient_set_Connected_m60CFB52771DC41FF94737638968D0F20CD288391 (NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Connected { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CConnectedU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void NaturalPoint.NatNetLib.NatNetClient::add_NativeFrameReceived(System.EventHandler`1<NaturalPoint.NatNetLib.NatNetClient/NativeFrameReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatNetClient_add_NativeFrameReceived_mCE7BC12A6E1AB74743F701865734270FD153ECAD (NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF * __this, EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * V_0 = NULL;
	EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * V_1 = NULL;
	EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * V_2 = NULL;
	{
		EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * L_0 = __this->get_NativeFrameReceived_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * L_2 = V_1;
		EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB_il2cpp_TypeInfo_var));
		EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB ** L_5 = __this->get_address_of_NativeFrameReceived_1();
		EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * L_6 = V_2;
		EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * L_7 = V_1;
		EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB *>((EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * L_9 = V_0;
		EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB *)L_9) == ((RuntimeObject*)(EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NaturalPoint.NatNetLib.NatNetClient::remove_NativeFrameReceived(System.EventHandler`1<NaturalPoint.NatNetLib.NatNetClient/NativeFrameReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatNetClient_remove_NativeFrameReceived_m6452C9B68B6EEC611644D2F1EA30DEE934129F14 (NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF * __this, EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * V_0 = NULL;
	EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * V_1 = NULL;
	EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * V_2 = NULL;
	{
		EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * L_0 = __this->get_NativeFrameReceived_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * L_2 = V_1;
		EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB_il2cpp_TypeInfo_var));
		EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB ** L_5 = __this->get_address_of_NativeFrameReceived_1();
		EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * L_6 = V_2;
		EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * L_7 = V_1;
		EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB *>((EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * L_9 = V_0;
		EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB *)L_9) == ((RuntimeObject*)(EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NaturalPoint.NatNetLib.NatNetClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatNetClient__ctor_mE2BFDBB24F611AA76500B762555BD714A3B5D9E1 (NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NatNetClient_FrameReceivedNativeThunk_mABA3F63EA4053DD5E0266DDBF7F9839C47BC244C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NatNetFrameReceivedCallback_t097D075BB3EEB6CF2A2EAFE2E06D10E2C033D768_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeFrameReceivedEventArgs_t915E8504219907B33B999E6A040590C57B2DF4FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5F40534E4C56DAFBECC32001A964F581972A00B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD072BDAE5B7A46EFBB3E52CE86039E468EC9E0B3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// private IntPtr m_clientHandle = IntPtr.Zero;
		__this->set_m_clientHandle_2((intptr_t)(0));
		// private bool m_disposed = false;
		__this->set_m_disposed_3((bool)0);
		// private NativeFrameReceivedEventArgs m_nativeFrameReceivedEventArgs = new NativeFrameReceivedEventArgs();
		NativeFrameReceivedEventArgs_t915E8504219907B33B999E6A040590C57B2DF4FF * L_0 = (NativeFrameReceivedEventArgs_t915E8504219907B33B999E6A040590C57B2DF4FF *)il2cpp_codegen_object_new(NativeFrameReceivedEventArgs_t915E8504219907B33B999E6A040590C57B2DF4FF_il2cpp_TypeInfo_var);
		NativeFrameReceivedEventArgs__ctor_mBE3078C2BF39CBCA0F67EEE8900A02823E1C77D8(L_0, /*hidden argument*/NULL);
		__this->set_m_nativeFrameReceivedEventArgs_5(L_0);
		// public NatNetClient()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// NatNetError retval = NatNetLib.NativeMethods.NatNet_Client_Create( out m_clientHandle );
		intptr_t* L_1 = __this->get_address_of_m_clientHandle_2();
		int32_t L_2;
		L_2 = NativeMethods_NatNet_Client_Create_m56410E31EB63AD2837352B50FA05D0712D584919((intptr_t*)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// NatNetException.ThrowIfNotOK( retval, "NatNet_Client_Create failed." );
		int32_t L_3 = V_0;
		NatNetException_ThrowIfNotOK_mCC2D685A30BA27CFAADC9377422A42EBF09E6B59(L_3, _stringLiteralB5F40534E4C56DAFBECC32001A964F581972A00B, /*hidden argument*/NULL);
		// if ( m_clientHandle == IntPtr.Zero )
		intptr_t L_4 = __this->get_m_clientHandle_2();
		bool L_5;
		L_5 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_005d;
		}
	}
	{
		// throw new NatNetException( "NatNet_Client_Create returned null handle." );
		NatNetException_tE207E10FDA92F73DF0EE67DF1DE8817B096B4DBF * L_7 = (NatNetException_tE207E10FDA92F73DF0EE67DF1DE8817B096B4DBF *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NatNetException_tE207E10FDA92F73DF0EE67DF1DE8817B096B4DBF_il2cpp_TypeInfo_var)));
		NatNetException__ctor_m3D27A5DE052F41581C76F8AB5C8C29149F21493A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA16A52DB0699C7E7D885CCE0CF2AD8A33ED72C3B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NatNetClient__ctor_mE2BFDBB24F611AA76500B762555BD714A3B5D9E1_RuntimeMethod_var)));
	}

IL_005d:
	{
		// m_nativeFrameReceivedHandler = FrameReceivedNativeThunk;
		NatNetFrameReceivedCallback_t097D075BB3EEB6CF2A2EAFE2E06D10E2C033D768 * L_8 = (NatNetFrameReceivedCallback_t097D075BB3EEB6CF2A2EAFE2E06D10E2C033D768 *)il2cpp_codegen_object_new(NatNetFrameReceivedCallback_t097D075BB3EEB6CF2A2EAFE2E06D10E2C033D768_il2cpp_TypeInfo_var);
		NatNetFrameReceivedCallback__ctor_mAFBCBF4755C3614247CE7A405BF238AE5CFC42C3(L_8, __this, (intptr_t)((intptr_t)NatNetClient_FrameReceivedNativeThunk_mABA3F63EA4053DD5E0266DDBF7F9839C47BC244C_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_m_nativeFrameReceivedHandler_4(L_8);
		// retval = NatNetLib.NativeMethods.NatNet_Client_SetFrameReceivedCallback( m_clientHandle, m_nativeFrameReceivedHandler );
		intptr_t L_9 = __this->get_m_clientHandle_2();
		NatNetFrameReceivedCallback_t097D075BB3EEB6CF2A2EAFE2E06D10E2C033D768 * L_10 = __this->get_m_nativeFrameReceivedHandler_4();
		int32_t L_11;
		L_11 = NativeMethods_NatNet_Client_SetFrameReceivedCallback_mC1401EE3277FD9909187E54ADFF5A1CEF6D4B10C((intptr_t)L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// NatNetException.ThrowIfNotOK( retval, "NatNet_Client_SetFrameReceivedCallback failed." );
		int32_t L_12 = V_0;
		NatNetException_ThrowIfNotOK_mCC2D685A30BA27CFAADC9377422A42EBF09E6B59(L_12, _stringLiteralD072BDAE5B7A46EFBB3E52CE86039E468EC9E0B3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NaturalPoint.NatNetLib.NatNetClient::Connect(NaturalPoint.NatNetLib.NatNetConnectionType,System.Net.IPAddress,System.Net.IPAddress,System.UInt16,System.UInt16,System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatNetClient_Connect_m000605DC5DA06440EE73F819C3C53CE893622B27 (NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF * __this, int32_t ___connType0, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___localAddress1, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___serverAddress2, uint16_t ___serverCommandPort3, uint16_t ___serverDataPort4, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___multicastAddress5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral340810EFBE99725AE48C21CF720C2DFF3C8F17FB);
		s_Il2CppMethodInitialized = true;
	}
	sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86  V_2;
	memset((&V_2), 0, sizeof(V_2));
	sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86 * G_B2_0 = NULL;
	sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86 * G_B3_1 = NULL;
	{
		// ThrowIfDisposed();
		NatNetClient_ThrowIfDisposed_m1901652F3A888512ABBF7C22F178DA7C9CAF674E(__this, /*hidden argument*/NULL);
		// sNatNetClientConnectParams initParams = new sNatNetClientConnectParams {
		//     ConnectionType = connType,
		//     ServerCommandPort = serverCommandPort,
		//     ServerDataPort = serverDataPort,
		//     LocalAddress = localAddress.ToString(),
		//     ServerAddress = serverAddress.ToString(),
		//     MulticastAddress = multicastAddress == null ? null : multicastAddress.ToString()
		// };
		il2cpp_codegen_initobj((&V_2), sizeof(sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86 ));
		int32_t L_0 = ___connType0;
		(&V_2)->set_ConnectionType_0(L_0);
		uint16_t L_1 = ___serverCommandPort3;
		(&V_2)->set_ServerCommandPort_1(L_1);
		uint16_t L_2 = ___serverDataPort4;
		(&V_2)->set_ServerDataPort_2(L_2);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_3 = ___localAddress1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		(&V_2)->set_LocalAddress_4(L_4);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_5 = ___serverAddress2;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		(&V_2)->set_ServerAddress_3(L_6);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_7 = ___multicastAddress5;
		G_B1_0 = (&V_2);
		if (!L_7)
		{
			G_B2_0 = (&V_2);
			goto IL_0053;
		}
	}
	{
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_8 = ___multicastAddress5;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		G_B3_0 = L_9;
		G_B3_1 = G_B1_0;
		goto IL_0054;
	}

IL_0053:
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0054:
	{
		G_B3_1->set_MulticastAddress_5(G_B3_0);
		sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86  L_10 = V_2;
		V_0 = L_10;
		// NatNetError retval = NatNetLib.NativeMethods.NatNet_Client_Connect( m_clientHandle, ref initParams );
		intptr_t L_11 = __this->get_m_clientHandle_2();
		int32_t L_12;
		L_12 = NativeMethods_NatNet_Client_Connect_m58ADCC773B5833631258E7CC3DD4B1712708070A((intptr_t)L_11, (sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_12;
		// NatNetException.ThrowIfNotOK( retval, "NatNet_Client_Connect failed." );
		int32_t L_13 = V_1;
		NatNetException_ThrowIfNotOK_mCC2D685A30BA27CFAADC9377422A42EBF09E6B59(L_13, _stringLiteral340810EFBE99725AE48C21CF720C2DFF3C8F17FB, /*hidden argument*/NULL);
		// Connected = true;
		NatNetClient_set_Connected_m60CFB52771DC41FF94737638968D0F20CD288391_inline(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NaturalPoint.NatNetLib.NatNetClient::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatNetClient_Disconnect_m0B144094CE3A47097427E0069E0AD432B5914F65 (NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC09FA2504E824075F09459E00C909172891CAC8F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// ThrowIfDisposed();
		NatNetClient_ThrowIfDisposed_m1901652F3A888512ABBF7C22F178DA7C9CAF674E(__this, /*hidden argument*/NULL);
		// if ( Connected )
		bool L_0;
		L_0 = NatNetClient_get_Connected_m80378823D6DED924C378CBAAC662B6C313395356_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// NatNetError retval = NatNetLib.NativeMethods.NatNet_Client_Disconnect( m_clientHandle );
		intptr_t L_2 = __this->get_m_clientHandle_2();
		int32_t L_3;
		L_3 = NativeMethods_NatNet_Client_Disconnect_m5A9166044569485A94237E28757AC006AE006635((intptr_t)L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// NatNetException.ThrowIfNotOK( retval, "NatNet_Client_Disconnect failed." );
		int32_t L_4 = V_1;
		NatNetException_ThrowIfNotOK_mCC2D685A30BA27CFAADC9377422A42EBF09E6B59(L_4, _stringLiteralC09FA2504E824075F09459E00C909172891CAC8F, /*hidden argument*/NULL);
		// Connected = false;
		NatNetClient_set_Connected_m60CFB52771DC41FF94737638968D0F20CD288391_inline(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// NaturalPoint.NatNetLib.NatNetClient/DataDescriptions NaturalPoint.NatNetLib.NatNetClient::GetDataDescriptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120 * NatNetClient_GetDataDescriptions_m493DABD2A08E9057B07A7364E09DB92DA467E161 (NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB24315227E1C53FE76CF8E9000C144904006165F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB5C4FF4DE7AE0FFB5E9EC41826B8DDB84F334BD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB60AC93C558414E2F6ABED44688983CA989D1856_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFAEED57377BBF882F74A18920F5DA29FA227A08F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m41AA6195366F7E854B6CFC8DA92F19F1AB3E8E75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7162A2003985C2D05DE4C5A881E6FFF2F9F00D63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC6A79D89F7C05C24E18A2E3730DCCCCE6D347E11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF7E13A2CB9F1323F224998BB4F8AE1D563A8094F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t854F66645104B53E0C1EF24E8111D90E2563A36B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9810C814F95BB4E90A3A37A2DF5538EA18A5D299_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9F435504E656EFBD3B7B25E9848E92FCD4BAE99D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC709C217B50945D05E12E3AA49B2E9C0249EFCF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5CE0EDF26E01323C585E28C436D4DBEBD19334D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120 * V_7 = NULL;
	int32_t V_8 = 0;
	sDataDescription_t1867298897A36828F439BA80E1153554BD63407F  V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	sDataDescription_t1867298897A36828F439BA80E1153554BD63407F  V_14;
	memset((&V_14), 0, sizeof(V_14));
	sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F  V_15;
	memset((&V_15), 0, sizeof(V_15));
	sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B  V_16;
	memset((&V_16), 0, sizeof(V_16));
	sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB  V_17;
	memset((&V_17), 0, sizeof(V_17));
	sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7  V_18;
	memset((&V_18), 0, sizeof(V_18));
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	bool V_21 = false;
	DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120 * V_22 = NULL;
	{
		// ThrowIfDisposed();
		NatNetClient_ThrowIfDisposed_m1901652F3A888512ABBF7C22F178DA7C9CAF674E(__this, /*hidden argument*/NULL);
		// NatNetError retval = NatNetLib.NativeMethods.NatNet_Client_GetDataDescriptionList( m_clientHandle, out pDataDescriptions );
		intptr_t L_0 = __this->get_m_clientHandle_2();
		int32_t L_1;
		L_1 = NativeMethods_NatNet_Client_GetDataDescriptionList_mA722232CA6F3F41677DDE4286DD66F0F9585EFB8((intptr_t)L_0, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		// NatNetException.ThrowIfNotOK( retval, "NatNet_Client_GetDataDescriptions failed." );
		int32_t L_2 = V_1;
		NatNetException_ThrowIfNotOK_mCC2D685A30BA27CFAADC9377422A42EBF09E6B59(L_2, _stringLiteralB5CE0EDF26E01323C585E28C436D4DBEBD19334D, /*hidden argument*/NULL);
		// sDataDescriptions dataDescriptions = (sDataDescriptions)Marshal.PtrToStructure( pDataDescriptions, typeof( sDataDescriptions ) );
		intptr_t L_3 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_6;
		L_6 = Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3((intptr_t)L_3, L_5, /*hidden argument*/NULL);
		V_2 = ((*(sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD *)((sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD *)UnBox(L_6, sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD_il2cpp_TypeInfo_var))));
		// Int32 numMarkerSetDescs = 0;
		V_3 = 0;
		// Int32 numRigidBodyDescs = 0;
		V_4 = 0;
		// Int32 numSkeletonDescs = 0;
		V_5 = 0;
		// Int32 numForcePlateDescs = 0;
		V_6 = 0;
		// for ( Int32 i = 0; i < dataDescriptions.DataDescriptionCount; ++i )
		V_8 = 0;
		goto IL_00a3;
	}

IL_0048:
	{
		// sDataDescription desc = dataDescriptions.DataDescriptions[i];
		sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD  L_7 = V_2;
		sDataDescriptionU5BU5D_t8BCADB0C438529DA8FD293E283308DE540600A8E* L_8 = L_7.get_DataDescriptions_1();
		int32_t L_9 = V_8;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		sDataDescription_t1867298897A36828F439BA80E1153554BD63407F  L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_9 = L_11;
		// switch ( desc.DescriptionType )
		sDataDescription_t1867298897A36828F439BA80E1153554BD63407F  L_12 = V_9;
		int32_t L_13 = L_12.get_DescriptionType_0();
		V_11 = L_13;
		int32_t L_14 = V_11;
		V_10 = L_14;
		int32_t L_15 = V_10;
		switch (L_15)
		{
			case 0:
			{
				goto IL_007e;
			}
			case 1:
			{
				goto IL_0084;
			}
			case 2:
			{
				goto IL_008c;
			}
			case 3:
			{
				goto IL_0094;
			}
		}
	}
	{
		goto IL_009c;
	}

IL_007e:
	{
		// ++numMarkerSetDescs;
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		// break;
		goto IL_009c;
	}

IL_0084:
	{
		// ++numRigidBodyDescs;
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		// break;
		goto IL_009c;
	}

IL_008c:
	{
		// ++numSkeletonDescs;
		int32_t L_18 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		// break;
		goto IL_009c;
	}

IL_0094:
	{
		// ++numForcePlateDescs;
		int32_t L_19 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		// break;
		goto IL_009c;
	}

IL_009c:
	{
		// for ( Int32 i = 0; i < dataDescriptions.DataDescriptionCount; ++i )
		int32_t L_20 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_00a3:
	{
		// for ( Int32 i = 0; i < dataDescriptions.DataDescriptionCount; ++i )
		int32_t L_21 = V_8;
		sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD  L_22 = V_2;
		int32_t L_23 = L_22.get_DataDescriptionCount_0();
		V_12 = (bool)((((int32_t)L_21) < ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_12;
		if (L_24)
		{
			goto IL_0048;
		}
	}
	{
		// DataDescriptions retDescriptions = new DataDescriptions {
		//     MarkerSetDescriptions = new List<sMarkerSetDescription>( numMarkerSetDescs ),
		//     RigidBodyDescriptions = new List<sRigidBodyDescription>( numRigidBodyDescs ),
		//     SkeletonDescriptions = new List<sSkeletonDescription>( numSkeletonDescs ),
		//     ForcePlateDescriptions = new List<sForcePlateDescription>( numForcePlateDescs ),
		// };
		DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120 * L_25 = (DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120 *)il2cpp_codegen_object_new(DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120_il2cpp_TypeInfo_var);
		DataDescriptions__ctor_mF1113317D32AD963E2FB6783381397859B50E0A8(L_25, /*hidden argument*/NULL);
		DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120 * L_26 = L_25;
		int32_t L_27 = V_3;
		List_1_tC709C217B50945D05E12E3AA49B2E9C0249EFCF6 * L_28 = (List_1_tC709C217B50945D05E12E3AA49B2E9C0249EFCF6 *)il2cpp_codegen_object_new(List_1_tC709C217B50945D05E12E3AA49B2E9C0249EFCF6_il2cpp_TypeInfo_var);
		List_1__ctor_mF7E13A2CB9F1323F224998BB4F8AE1D563A8094F(L_28, L_27, /*hidden argument*/List_1__ctor_mF7E13A2CB9F1323F224998BB4F8AE1D563A8094F_RuntimeMethod_var);
		NullCheck(L_26);
		L_26->set_MarkerSetDescriptions_0(L_28);
		DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120 * L_29 = L_26;
		int32_t L_30 = V_4;
		List_1_t9F435504E656EFBD3B7B25E9848E92FCD4BAE99D * L_31 = (List_1_t9F435504E656EFBD3B7B25E9848E92FCD4BAE99D *)il2cpp_codegen_object_new(List_1_t9F435504E656EFBD3B7B25E9848E92FCD4BAE99D_il2cpp_TypeInfo_var);
		List_1__ctor_mC6A79D89F7C05C24E18A2E3730DCCCCE6D347E11(L_31, L_30, /*hidden argument*/List_1__ctor_mC6A79D89F7C05C24E18A2E3730DCCCCE6D347E11_RuntimeMethod_var);
		NullCheck(L_29);
		L_29->set_RigidBodyDescriptions_1(L_31);
		DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120 * L_32 = L_29;
		int32_t L_33 = V_5;
		List_1_t9810C814F95BB4E90A3A37A2DF5538EA18A5D299 * L_34 = (List_1_t9810C814F95BB4E90A3A37A2DF5538EA18A5D299 *)il2cpp_codegen_object_new(List_1_t9810C814F95BB4E90A3A37A2DF5538EA18A5D299_il2cpp_TypeInfo_var);
		List_1__ctor_m7162A2003985C2D05DE4C5A881E6FFF2F9F00D63(L_34, L_33, /*hidden argument*/List_1__ctor_m7162A2003985C2D05DE4C5A881E6FFF2F9F00D63_RuntimeMethod_var);
		NullCheck(L_32);
		L_32->set_SkeletonDescriptions_2(L_34);
		DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120 * L_35 = L_32;
		int32_t L_36 = V_6;
		List_1_t854F66645104B53E0C1EF24E8111D90E2563A36B * L_37 = (List_1_t854F66645104B53E0C1EF24E8111D90E2563A36B *)il2cpp_codegen_object_new(List_1_t854F66645104B53E0C1EF24E8111D90E2563A36B_il2cpp_TypeInfo_var);
		List_1__ctor_m41AA6195366F7E854B6CFC8DA92F19F1AB3E8E75(L_37, L_36, /*hidden argument*/List_1__ctor_m41AA6195366F7E854B6CFC8DA92F19F1AB3E8E75_RuntimeMethod_var);
		NullCheck(L_35);
		L_35->set_ForcePlateDescriptions_3(L_37);
		V_7 = L_35;
		// for ( Int32 i = 0; i < dataDescriptions.DataDescriptionCount; ++i )
		V_13 = 0;
		goto IL_01f0;
	}

IL_00f5:
	{
		// sDataDescription desc = dataDescriptions.DataDescriptions[i];
		sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD  L_38 = V_2;
		sDataDescriptionU5BU5D_t8BCADB0C438529DA8FD293E283308DE540600A8E* L_39 = L_38.get_DataDescriptions_1();
		int32_t L_40 = V_13;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		sDataDescription_t1867298897A36828F439BA80E1153554BD63407F  L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_14 = L_42;
		// switch ( desc.DescriptionType )
		sDataDescription_t1867298897A36828F439BA80E1153554BD63407F  L_43 = V_14;
		int32_t L_44 = L_43.get_DescriptionType_0();
		V_20 = L_44;
		int32_t L_45 = V_20;
		V_19 = L_45;
		int32_t L_46 = V_19;
		switch (L_46)
		{
			case 0:
			{
				goto IL_012e;
			}
			case 1:
			{
				goto IL_015f;
			}
			case 2:
			{
				goto IL_018d;
			}
			case 3:
			{
				goto IL_01bb;
			}
		}
	}
	{
		goto IL_01e9;
	}

IL_012e:
	{
		// sMarkerSetDescription markerSetDesc = (sMarkerSetDescription)Marshal.PtrToStructure( desc.Description, typeof( sMarkerSetDescription ) );
		sDataDescription_t1867298897A36828F439BA80E1153554BD63407F  L_47 = V_14;
		intptr_t L_48 = L_47.get_Description_1();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_49, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_51;
		L_51 = Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3((intptr_t)L_48, L_50, /*hidden argument*/NULL);
		V_15 = ((*(sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F *)((sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F *)UnBox(L_51, sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F_il2cpp_TypeInfo_var))));
		// retDescriptions.MarkerSetDescriptions.Add( markerSetDesc );
		DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120 * L_52 = V_7;
		NullCheck(L_52);
		List_1_tC709C217B50945D05E12E3AA49B2E9C0249EFCF6 * L_53 = L_52->get_MarkerSetDescriptions_0();
		sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F  L_54 = V_15;
		NullCheck(L_53);
		List_1_Add_mB5C4FF4DE7AE0FFB5E9EC41826B8DDB84F334BD8(L_53, L_54, /*hidden argument*/List_1_Add_mB5C4FF4DE7AE0FFB5E9EC41826B8DDB84F334BD8_RuntimeMethod_var);
		// break;
		goto IL_01e9;
	}

IL_015f:
	{
		// sRigidBodyDescription rigidBodyDesc = (sRigidBodyDescription)Marshal.PtrToStructure( desc.Description, typeof( sRigidBodyDescription ) );
		sDataDescription_t1867298897A36828F439BA80E1153554BD63407F  L_55 = V_14;
		intptr_t L_56 = L_55.get_Description_1();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_57 = { reinterpret_cast<intptr_t> (sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_58;
		L_58 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_59;
		L_59 = Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3((intptr_t)L_56, L_58, /*hidden argument*/NULL);
		V_16 = ((*(sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B *)((sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B *)UnBox(L_59, sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_il2cpp_TypeInfo_var))));
		// retDescriptions.RigidBodyDescriptions.Add( rigidBodyDesc );
		DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120 * L_60 = V_7;
		NullCheck(L_60);
		List_1_t9F435504E656EFBD3B7B25E9848E92FCD4BAE99D * L_61 = L_60->get_RigidBodyDescriptions_1();
		sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B  L_62 = V_16;
		NullCheck(L_61);
		List_1_Add_mB24315227E1C53FE76CF8E9000C144904006165F(L_61, L_62, /*hidden argument*/List_1_Add_mB24315227E1C53FE76CF8E9000C144904006165F_RuntimeMethod_var);
		// break;
		goto IL_01e9;
	}

IL_018d:
	{
		// sSkeletonDescription skeletonDesc = (sSkeletonDescription)Marshal.PtrToStructure( desc.Description, typeof( sSkeletonDescription ) );
		sDataDescription_t1867298897A36828F439BA80E1153554BD63407F  L_63 = V_14;
		intptr_t L_64 = L_63.get_Description_1();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_65 = { reinterpret_cast<intptr_t> (sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_66;
		L_66 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_65, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_67;
		L_67 = Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3((intptr_t)L_64, L_66, /*hidden argument*/NULL);
		V_17 = ((*(sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB *)((sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB *)UnBox(L_67, sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB_il2cpp_TypeInfo_var))));
		// retDescriptions.SkeletonDescriptions.Add( skeletonDesc );
		DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120 * L_68 = V_7;
		NullCheck(L_68);
		List_1_t9810C814F95BB4E90A3A37A2DF5538EA18A5D299 * L_69 = L_68->get_SkeletonDescriptions_2();
		sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB  L_70 = V_17;
		NullCheck(L_69);
		List_1_Add_mFAEED57377BBF882F74A18920F5DA29FA227A08F(L_69, L_70, /*hidden argument*/List_1_Add_mFAEED57377BBF882F74A18920F5DA29FA227A08F_RuntimeMethod_var);
		// break;
		goto IL_01e9;
	}

IL_01bb:
	{
		// sForcePlateDescription forcePlateDesc = (sForcePlateDescription)Marshal.PtrToStructure( desc.Description, typeof( sForcePlateDescription ) );
		sDataDescription_t1867298897A36828F439BA80E1153554BD63407F  L_71 = V_14;
		intptr_t L_72 = L_71.get_Description_1();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_73 = { reinterpret_cast<intptr_t> (sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_74;
		L_74 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_73, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_75;
		L_75 = Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3((intptr_t)L_72, L_74, /*hidden argument*/NULL);
		V_18 = ((*(sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7 *)((sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7 *)UnBox(L_75, sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7_il2cpp_TypeInfo_var))));
		// retDescriptions.ForcePlateDescriptions.Add( forcePlateDesc );
		DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120 * L_76 = V_7;
		NullCheck(L_76);
		List_1_t854F66645104B53E0C1EF24E8111D90E2563A36B * L_77 = L_76->get_ForcePlateDescriptions_3();
		sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7  L_78 = V_18;
		NullCheck(L_77);
		List_1_Add_mB60AC93C558414E2F6ABED44688983CA989D1856(L_77, L_78, /*hidden argument*/List_1_Add_mB60AC93C558414E2F6ABED44688983CA989D1856_RuntimeMethod_var);
		// break;
		goto IL_01e9;
	}

IL_01e9:
	{
		// for ( Int32 i = 0; i < dataDescriptions.DataDescriptionCount; ++i )
		int32_t L_79 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
	}

IL_01f0:
	{
		// for ( Int32 i = 0; i < dataDescriptions.DataDescriptionCount; ++i )
		int32_t L_80 = V_13;
		sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD  L_81 = V_2;
		int32_t L_82 = L_81.get_DataDescriptionCount_0();
		V_21 = (bool)((((int32_t)L_80) < ((int32_t)L_82))? 1 : 0);
		bool L_83 = V_21;
		if (L_83)
		{
			goto IL_00f5;
		}
	}
	{
		// return retDescriptions;
		DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120 * L_84 = V_7;
		V_22 = L_84;
		goto IL_0209;
	}

IL_0209:
	{
		// }
		DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120 * L_85 = V_22;
		return L_85;
	}
}
// System.Void NaturalPoint.NatNetLib.NatNetClient::FrameReceivedNativeThunk(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatNetClient_FrameReceivedNativeThunk_mABA3F63EA4053DD5E0266DDBF7F9839C47BC244C (NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF * __this, intptr_t ___pFrameOfMocapData0, intptr_t ___pUserData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m9A582F8B7D2AFA72C7D8AA636246769DB269BFE2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			// ThrowIfDisposed();
			NatNetClient_ThrowIfDisposed_m1901652F3A888512ABBF7C22F178DA7C9CAF674E(__this, /*hidden argument*/NULL);
			// if ( NativeFrameReceived != null )
			EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * L_0 = __this->get_NativeFrameReceived_1();
			V_0 = (bool)((!(((RuntimeObject*)(EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_1 = V_0;
			if (!L_1)
			{
				goto IL_0038;
			}
		}

IL_0016:
		{
			// m_nativeFrameReceivedEventArgs.NativeFramePointer = pFrameOfMocapData;
			NativeFrameReceivedEventArgs_t915E8504219907B33B999E6A040590C57B2DF4FF * L_2 = __this->get_m_nativeFrameReceivedEventArgs_5();
			intptr_t L_3 = ___pFrameOfMocapData0;
			NullCheck(L_2);
			NativeFrameReceivedEventArgs_set_NativeFramePointer_m8A577AD325F79D2C04012D9E4BE503D363D8DE51(L_2, (intptr_t)L_3, /*hidden argument*/NULL);
			// NativeFrameReceived( this, m_nativeFrameReceivedEventArgs );
			EventHandler_1_t2F5195091B820E1D2ED273CDA19A9B60A96CA6BB * L_4 = __this->get_NativeFrameReceived_1();
			NativeFrameReceivedEventArgs_t915E8504219907B33B999E6A040590C57B2DF4FF * L_5 = __this->get_m_nativeFrameReceivedEventArgs_5();
			NullCheck(L_4);
			EventHandler_1_Invoke_m9A582F8B7D2AFA72C7D8AA636246769DB269BFE2(L_4, __this, L_5, /*hidden argument*/EventHandler_1_Invoke_m9A582F8B7D2AFA72C7D8AA636246769DB269BFE2_RuntimeMethod_var);
		}

IL_0038:
		{
			goto IL_0056;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003b;
		}
		throw e;
	}

CATCH_003b:
	{ // begin catch(System.Exception)
		// catch ( Exception ex )
		V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// System.Diagnostics.Debug.WriteLine( "ERROR - Exception occurred in FrameReceivedNativeThunk: " + ex.ToString() );
		Exception_t * L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9EADFE1B926EC5F3995F5166C9FF6ED04B4DD97E)), L_7, /*hidden argument*/NULL);
		Debug_WriteLine_m2B08D80ABA95E71F063FA07FB6BF1771C7799ED0(L_8, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0056;
	} // end catch (depth: 1)

IL_0056:
	{
		// }
		return;
	}
}
// System.Void NaturalPoint.NatNetLib.NatNetClient::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatNetClient_Finalize_m53BA471A5A7F342E5F10526398CB554B4910452E (NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		// Dispose( false );
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void NaturalPoint.NatNetLib.NatNetClient::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x14, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void NaturalPoint.NatNetLib.NatNetClient::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatNetClient_Dispose_m9906AABAA938DB56AB19A42F0A6AE01CD49A045C (NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dispose( true );
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void NaturalPoint.NatNetLib.NatNetClient::Dispose(System.Boolean) */, __this, (bool)1);
		// GC.SuppressFinalize( this );
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NaturalPoint.NatNetLib.NatNetClient::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatNetClient_Dispose_m93D17C0050171C9B773F5433F401A1C42155673E (NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NatNetError_t44495251803672087C12F1CEC69D0029FF1F278D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FF9B65C67764CB559DC9108A50591D3C50A9A2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC365D721538994EBA9C9ABDF53160BD2C1678E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if ( m_disposed )
		bool L_0 = __this->get_m_disposed_3();
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_00aa;
	}

IL_0010:
	{
		// if ( Connected )
		bool L_2;
		L_2 = NatNetClient_get_Connected_m80378823D6DED924C378CBAAC662B6C313395356_inline(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_005e;
		}
	}
	{
		// NatNetError disconnectResult = NatNetLib.NativeMethods.NatNet_Client_Disconnect( m_clientHandle );
		intptr_t L_4 = __this->get_m_clientHandle_2();
		int32_t L_5;
		L_5 = NativeMethods_NatNet_Client_Disconnect_m5A9166044569485A94237E28757AC006AE006635((intptr_t)L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		// if ( disconnectResult != NatNetError.NatNetError_OK )
		int32_t L_6 = V_3;
		V_4 = (bool)((!(((uint32_t)L_6) <= ((uint32_t)0)))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		// System.Diagnostics.Debug.WriteLine( "NatNet_Client_Disconnect returned " + disconnectResult.ToString() + "." );
		RuntimeObject * L_8 = Box(NatNetError_t44495251803672087C12F1CEC69D0029FF1F278D_il2cpp_TypeInfo_var, (&V_3));
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		V_3 = *(int32_t*)UnBox(L_8);
		String_t* L_10;
		L_10 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralBC365D721538994EBA9C9ABDF53160BD2C1678E3, L_9, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, /*hidden argument*/NULL);
		Debug_WriteLine_m2B08D80ABA95E71F063FA07FB6BF1771C7799ED0(L_10, /*hidden argument*/NULL);
	}

IL_0055:
	{
		// Connected = false;
		NatNetClient_set_Connected_m60CFB52771DC41FF94737638968D0F20CD288391_inline(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_005e:
	{
		// NatNetError destroyResult = NatNetLib.NativeMethods.NatNet_Client_Destroy( m_clientHandle );
		intptr_t L_11 = __this->get_m_clientHandle_2();
		int32_t L_12;
		L_12 = NativeMethods_NatNet_Client_Destroy_m24B9942CDC393DBF4F45EA25144310F88A473625((intptr_t)L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		// if ( destroyResult != NatNetError.NatNetError_OK )
		int32_t L_13 = V_0;
		V_5 = (bool)((!(((uint32_t)L_13) <= ((uint32_t)0)))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0098;
		}
	}
	{
		// System.Diagnostics.Debug.WriteLine( "NatNet_Client_Destroy returned " + destroyResult.ToString() + "." );
		RuntimeObject * L_15 = Box(NatNetError_t44495251803672087C12F1CEC69D0029FF1F278D_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		V_0 = *(int32_t*)UnBox(L_15);
		String_t* L_17;
		L_17 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral3FF9B65C67764CB559DC9108A50591D3C50A9A2A, L_16, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, /*hidden argument*/NULL);
		Debug_WriteLine_m2B08D80ABA95E71F063FA07FB6BF1771C7799ED0(L_17, /*hidden argument*/NULL);
	}

IL_0098:
	{
		// m_clientHandle = IntPtr.Zero;
		__this->set_m_clientHandle_2((intptr_t)(0));
		// m_disposed = true;
		__this->set_m_disposed_3((bool)1);
	}

IL_00aa:
	{
		// }
		return;
	}
}
// System.Void NaturalPoint.NatNetLib.NatNetClient::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatNetClient_ThrowIfDisposed_m1901652F3A888512ABBF7C22F178DA7C9CAF674E (NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if ( m_disposed )
		bool L_0 = __this->get_m_disposed_3();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// throw new ObjectDisposedException( GetType().FullName );
		Type_t * L_2;
		L_2 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_2);
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_4 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NatNetClient_ThrowIfDisposed_m1901652F3A888512ABBF7C22F178DA7C9CAF674E_RuntimeMethod_var)));
	}

IL_001d:
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
// System.Void NaturalPoint.NatNetLib.NatNetException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatNetException__ctor_m01875A30423C32C40E032AE297605290F42B4D67 (NatNetException_tE207E10FDA92F73DF0EE67DF1DE8817B096B4DBF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NatNetException()
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NaturalPoint.NatNetLib.NatNetException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatNetException__ctor_m3D27A5DE052F41581C76F8AB5C8C29149F21493A (NatNetException_tE207E10FDA92F73DF0EE67DF1DE8817B096B4DBF * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base( message )
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NaturalPoint.NatNetLib.NatNetException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatNetException__ctor_m7FCD9F7448F88D37A6623F24AD42EBC5F32679F1 (NatNetException_tE207E10FDA92F73DF0EE67DF1DE8817B096B4DBF * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base( message, inner )
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___inner1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080(__this, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NaturalPoint.NatNetLib.NatNetException::ThrowIfNotOK(NaturalPoint.NatNetLib.NatNetError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatNetException_ThrowIfNotOK_mCC2D685A30BA27CFAADC9377422A42EBF09E6B59 (int32_t ___result0, String_t* ___message1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if ( result != NatNetError.NatNetError_OK )
		int32_t L_0 = ___result0;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// throw new NatNetException( message + " (" + result.ToString() + ")" );
		String_t* L_2 = ___message1;
		RuntimeObject * L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NatNetError_t44495251803672087C12F1CEC69D0029FF1F278D_il2cpp_TypeInfo_var)), (&___result0));
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		___result0 = *(int32_t*)UnBox(L_3);
		String_t* L_5;
		L_5 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32)), L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), /*hidden argument*/NULL);
		NatNetException_tE207E10FDA92F73DF0EE67DF1DE8817B096B4DBF * L_6 = (NatNetException_tE207E10FDA92F73DF0EE67DF1DE8817B096B4DBF *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NatNetException_tE207E10FDA92F73DF0EE67DF1DE8817B096B4DBF_il2cpp_TypeInfo_var)));
		NatNetException__ctor_m3D27A5DE052F41581C76F8AB5C8C29149F21493A(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NatNetException_ThrowIfNotOK_mCC2D685A30BA27CFAADC9377422A42EBF09E6B59_RuntimeMethod_var)));
	}

IL_002d:
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NatNetFrameReceivedCallback_t097D075BB3EEB6CF2A2EAFE2E06D10E2C033D768 (NatNetFrameReceivedCallback_t097D075BB3EEB6CF2A2EAFE2E06D10E2C033D768 * __this, intptr_t ___pFrameOfMocapData0, intptr_t ___pUserData1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___pFrameOfMocapData0, ___pUserData1);

}
// System.Void NaturalPoint.NatNetLib.NatNetFrameReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatNetFrameReceivedCallback__ctor_mAFBCBF4755C3614247CE7A405BF238AE5CFC42C3 (NatNetFrameReceivedCallback_t097D075BB3EEB6CF2A2EAFE2E06D10E2C033D768 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NaturalPoint.NatNetLib.NatNetFrameReceivedCallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatNetFrameReceivedCallback_Invoke_m1CC266EE1DDB1EEC63F335EA371787FFE66C58E1 (NatNetFrameReceivedCallback_t097D075BB3EEB6CF2A2EAFE2E06D10E2C033D768 * __this, intptr_t ___pFrameOfMocapData0, intptr_t ___pUserData1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pFrameOfMocapData0, ___pUserData1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pFrameOfMocapData0, ___pUserData1, targetMethod);
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
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___pFrameOfMocapData0, ___pUserData1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___pFrameOfMocapData0, ___pUserData1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pFrameOfMocapData0, ___pUserData1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pFrameOfMocapData0, ___pUserData1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pFrameOfMocapData0, ___pUserData1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult NaturalPoint.NatNetLib.NatNetFrameReceivedCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NatNetFrameReceivedCallback_BeginInvoke_m381B8669FE538826F209CE09BC03C0FDA9D1C9B3 (NatNetFrameReceivedCallback_t097D075BB3EEB6CF2A2EAFE2E06D10E2C033D768 * __this, intptr_t ___pFrameOfMocapData0, intptr_t ___pUserData1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pFrameOfMocapData0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pUserData1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void NaturalPoint.NatNetLib.NatNetFrameReceivedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatNetFrameReceivedCallback_EndInvoke_m604283E397023695B00A7FA668C34219C59A9186 (NatNetFrameReceivedCallback_t097D075BB3EEB6CF2A2EAFE2E06D10E2C033D768 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NaturalPoint.NatNetLib.NativeMethods::NatNet_GetVersion(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_NatNet_GetVersion_mEA86AD6BC8DD3941C2E88BA22A363FC2B53A7F19 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___version0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatNetLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatNetLib"), "NatNet_GetVersion", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___version0' to native representation
	uint8_t* ____version0_marshaled = NULL;
	if (___version0 != NULL)
	{
		____version0_marshaled = reinterpret_cast<uint8_t*>((___version0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
	reinterpret_cast<PInvokeFunc>(NatNet_GetVersion)(____version0_marshaled);
	#else
	il2cppPInvokeFunc(____version0_marshaled);
	#endif

}
// System.Void NaturalPoint.NatNetLib.NativeMethods::NatNet_DecodeID(System.Int32,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeMethods_NatNet_DecodeID_m83FC5174AEE0B94131DF7282EFBC493213A15FD2 (int32_t ___compositeId0, int32_t* ___entityId1, int32_t* ___memberId2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (int32_t, int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatNetLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatNetLib"), "NatNet_DecodeID", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
	reinterpret_cast<PInvokeFunc>(NatNet_DecodeID)(___compositeId0, ___entityId1, ___memberId2);
	#else
	il2cppPInvokeFunc(___compositeId0, ___entityId1, ___memberId2);
	#endif

}
// NaturalPoint.NatNetLib.NatNetError NaturalPoint.NatNetLib.NativeMethods::NatNet_Client_Create(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_NatNet_Client_Create_m56410E31EB63AD2837352B50FA05D0712D584919 (intptr_t* ___clientHandle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatNetLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatNetLib"), "NatNet_Client_Create", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(NatNet_Client_Create)(___clientHandle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___clientHandle0);
	#endif

	return returnValue;
}
// NaturalPoint.NatNetLib.NatNetError NaturalPoint.NatNetLib.NativeMethods::NatNet_Client_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_NatNet_Client_Destroy_m24B9942CDC393DBF4F45EA25144310F88A473625 (intptr_t ___clientHandle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatNetLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatNetLib"), "NatNet_Client_Destroy", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(NatNet_Client_Destroy)(___clientHandle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___clientHandle0);
	#endif

	return returnValue;
}
// NaturalPoint.NatNetLib.NatNetError NaturalPoint.NatNetLib.NativeMethods::NatNet_Client_Connect(System.IntPtr,NaturalPoint.NatNetLib.sNatNetClientConnectParams&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_NatNet_Client_Connect_m58ADCC773B5833631258E7CC3DD4B1712708070A (intptr_t ___clientHandle0, sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86 * ___connectParams1, const RuntimeMethod* method)
{


	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshaled_pinvoke*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatNetLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatNetLib"), "NatNet_Client_Connect", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___connectParams1' to native representation
	sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshaled_pinvoke* ____connectParams1_marshaled = NULL;
	sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshaled_pinvoke ____connectParams1_marshaled_dereferenced = {};
	sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshal_pinvoke(*___connectParams1, ____connectParams1_marshaled_dereferenced);
	____connectParams1_marshaled = &____connectParams1_marshaled_dereferenced;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(NatNet_Client_Connect)(___clientHandle0, ____connectParams1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___clientHandle0, ____connectParams1_marshaled);
	#endif

	// Marshaling of parameter '___connectParams1' back from native representation
	sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86  _____connectParams1_marshaled_unmarshaled_dereferenced;
	memset((&_____connectParams1_marshaled_unmarshaled_dereferenced), 0, sizeof(_____connectParams1_marshaled_unmarshaled_dereferenced));
	sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshal_pinvoke_back(*____connectParams1_marshaled, _____connectParams1_marshaled_unmarshaled_dereferenced);
	sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshal_pinvoke_cleanup(*____connectParams1_marshaled);
	*___connectParams1 = _____connectParams1_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___connectParams1)->___ServerAddress_3), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___connectParams1)->___LocalAddress_4), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___connectParams1)->___MulticastAddress_5), (void*)NULL);
	#endif

	return returnValue;
}
// NaturalPoint.NatNetLib.NatNetError NaturalPoint.NatNetLib.NativeMethods::NatNet_Client_Disconnect(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_NatNet_Client_Disconnect_m5A9166044569485A94237E28757AC006AE006635 (intptr_t ___clientHandle0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatNetLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatNetLib"), "NatNet_Client_Disconnect", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(NatNet_Client_Disconnect)(___clientHandle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___clientHandle0);
	#endif

	return returnValue;
}
// NaturalPoint.NatNetLib.NatNetError NaturalPoint.NatNetLib.NativeMethods::NatNet_Client_SetFrameReceivedCallback(System.IntPtr,NaturalPoint.NatNetLib.NatNetFrameReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_NatNet_Client_SetFrameReceivedCallback_mC1401EE3277FD9909187E54ADFF5A1CEF6D4B10C (intptr_t ___clientHandle0, NatNetFrameReceivedCallback_t097D075BB3EEB6CF2A2EAFE2E06D10E2C033D768 * ___pfnDataCallback1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatNetLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatNetLib"), "NatNet_Client_SetFrameReceivedCallback", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___pfnDataCallback1' to native representation
	Il2CppMethodPointer ____pfnDataCallback1_marshaled = NULL;
	____pfnDataCallback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___pfnDataCallback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(NatNet_Client_SetFrameReceivedCallback)(___clientHandle0, ____pfnDataCallback1_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___clientHandle0, ____pfnDataCallback1_marshaled);
	#endif

	return returnValue;
}
// NaturalPoint.NatNetLib.NatNetError NaturalPoint.NatNetLib.NativeMethods::NatNet_Client_GetDataDescriptionList(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_NatNet_Client_GetDataDescriptionList_mA722232CA6F3F41677DDE4286DD66F0F9585EFB8 (intptr_t ___clientHandle0, intptr_t* ___pDataDescriptions1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatNetLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatNetLib"), "NatNet_Client_GetDataDescriptionList", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(NatNet_Client_GetDataDescriptionList)(___clientHandle0, ___pDataDescriptions1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___clientHandle0, ___pDataDescriptions1);
	#endif

	return returnValue;
}
// NaturalPoint.NatNetLib.NatNetError NaturalPoint.NatNetLib.NativeMethods::NatNet_Frame_GetRigidBodyCount(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_NatNet_Frame_GetRigidBodyCount_mC72E39B1477513AF1547FCDD8602E351868F6631 (intptr_t ___pFrameOfMocapData0, int32_t* ___rigidBodyCount1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatNetLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatNetLib"), "NatNet_Frame_GetRigidBodyCount", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(NatNet_Frame_GetRigidBodyCount)(___pFrameOfMocapData0, ___rigidBodyCount1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___pFrameOfMocapData0, ___rigidBodyCount1);
	#endif

	return returnValue;
}
// NaturalPoint.NatNetLib.NatNetError NaturalPoint.NatNetLib.NativeMethods::NatNet_Frame_GetRigidBody(System.IntPtr,System.Int32,NaturalPoint.NatNetLib.sRigidBodyData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_NatNet_Frame_GetRigidBody_m9347EC36DC452C51AE109407F6C67EF7145081F0 (intptr_t ___pFrameOfMocapData0, int32_t ___rigidBodyIndex1, sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A * ___rigidBodyData2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatNetLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatNetLib"), "NatNet_Frame_GetRigidBody", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(NatNet_Frame_GetRigidBody)(___pFrameOfMocapData0, ___rigidBodyIndex1, ___rigidBodyData2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___pFrameOfMocapData0, ___rigidBodyIndex1, ___rigidBodyData2);
	#endif

	return returnValue;
}
// NaturalPoint.NatNetLib.NatNetError NaturalPoint.NatNetLib.NativeMethods::NatNet_Frame_RigidBody_Marker_GetPosition(System.IntPtr,System.Int32,System.Int32,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_NatNet_Frame_RigidBody_Marker_GetPosition_m83749BDD3822D0134CAB3A0C0120712DABEE4B99 (intptr_t ___pFrameOfMocapData0, int32_t ___rigidBodyIndex1, int32_t ___markerIndex2, float* ___markerPosX3, float* ___markerPosY4, float* ___markerPosZ5, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t, float*, float*, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatNetLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(float*) + sizeof(float*) + sizeof(float*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatNetLib"), "NatNet_Frame_RigidBody_Marker_GetPosition", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(NatNet_Frame_RigidBody_Marker_GetPosition)(___pFrameOfMocapData0, ___rigidBodyIndex1, ___markerIndex2, ___markerPosX3, ___markerPosY4, ___markerPosZ5);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___pFrameOfMocapData0, ___rigidBodyIndex1, ___markerIndex2, ___markerPosX3, ___markerPosY4, ___markerPosZ5);
	#endif

	return returnValue;
}
// NaturalPoint.NatNetLib.NatNetError NaturalPoint.NatNetLib.NativeMethods::NatNet_Frame_RigidBody_Marker_GetSize(System.IntPtr,System.Int32,System.Int32,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_NatNet_Frame_RigidBody_Marker_GetSize_mD1B0D70CC20ECC25721AB81AAC344BD0ECD274F9 (intptr_t ___pFrameOfMocapData0, int32_t ___rigidBodyIndex1, int32_t ___markerIndex2, float* ___markerSize3, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatNetLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(float*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatNetLib"), "NatNet_Frame_RigidBody_Marker_GetSize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(NatNet_Frame_RigidBody_Marker_GetSize)(___pFrameOfMocapData0, ___rigidBodyIndex1, ___markerIndex2, ___markerSize3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___pFrameOfMocapData0, ___rigidBodyIndex1, ___markerIndex2, ___markerSize3);
	#endif

	return returnValue;
}
// NaturalPoint.NatNetLib.NatNetError NaturalPoint.NatNetLib.NativeMethods::NatNet_Frame_GetSkeletonCount(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_NatNet_Frame_GetSkeletonCount_mD69F3A2F1876B9FFBAB76028B2858ECCFED70066 (intptr_t ___pFrameOfMocapData0, int32_t* ___skeletonCount1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatNetLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatNetLib"), "NatNet_Frame_GetSkeletonCount", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(NatNet_Frame_GetSkeletonCount)(___pFrameOfMocapData0, ___skeletonCount1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___pFrameOfMocapData0, ___skeletonCount1);
	#endif

	return returnValue;
}
// NaturalPoint.NatNetLib.NatNetError NaturalPoint.NatNetLib.NativeMethods::NatNet_Frame_Skeleton_GetId(System.IntPtr,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_NatNet_Frame_Skeleton_GetId_mD6DC18DC1D03CE3E1037BF0AD25A2A3CECB57EC6 (intptr_t ___pFrameOfMocapData0, int32_t ___skeletonIndex1, int32_t* ___skeletonId2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatNetLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatNetLib"), "NatNet_Frame_Skeleton_GetId", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(NatNet_Frame_Skeleton_GetId)(___pFrameOfMocapData0, ___skeletonIndex1, ___skeletonId2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___pFrameOfMocapData0, ___skeletonIndex1, ___skeletonId2);
	#endif

	return returnValue;
}
// NaturalPoint.NatNetLib.NatNetError NaturalPoint.NatNetLib.NativeMethods::NatNet_Frame_Skeleton_GetRigidBodyCount(System.IntPtr,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_NatNet_Frame_Skeleton_GetRigidBodyCount_mD565FCF7272A71D7D5161A6DA9812F2736C59055 (intptr_t ___pFrameOfMocapData0, int32_t ___skeletonIndex1, int32_t* ___rigidBodyCount2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatNetLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatNetLib"), "NatNet_Frame_Skeleton_GetRigidBodyCount", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(NatNet_Frame_Skeleton_GetRigidBodyCount)(___pFrameOfMocapData0, ___skeletonIndex1, ___rigidBodyCount2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___pFrameOfMocapData0, ___skeletonIndex1, ___rigidBodyCount2);
	#endif

	return returnValue;
}
// NaturalPoint.NatNetLib.NatNetError NaturalPoint.NatNetLib.NativeMethods::NatNet_Frame_Skeleton_GetRigidBody(System.IntPtr,System.Int32,System.Int32,NaturalPoint.NatNetLib.sRigidBodyData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_NatNet_Frame_Skeleton_GetRigidBody_m04FD9FD03C1AE91BAD672AA0F4655C32FCC34F43 (intptr_t ___pFrameOfMocapData0, int32_t ___skeletonIndex1, int32_t ___rigidBodyIndex2, sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A * ___rigidBodyData3, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t, sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatNetLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(sRigidBodyData_tD07E271C49A5FD1BAE566298544935A71D77515A *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatNetLib"), "NatNet_Frame_Skeleton_GetRigidBody", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(NatNet_Frame_Skeleton_GetRigidBody)(___pFrameOfMocapData0, ___skeletonIndex1, ___rigidBodyIndex2, ___rigidBodyData3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___pFrameOfMocapData0, ___skeletonIndex1, ___rigidBodyIndex2, ___rigidBodyData3);
	#endif

	return returnValue;
}
// NaturalPoint.NatNetLib.NatNetError NaturalPoint.NatNetLib.NativeMethods::NatNet_Frame_GetTransmitTimestamp(System.IntPtr,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_NatNet_Frame_GetTransmitTimestamp_m59E3F3ABF50DD80BA4D3250511C66919F5971714 (intptr_t ___pFrameOfMocapData0, uint64_t* ___pOutTransmitTimestamp1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatNetLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatNetLib"), "NatNet_Frame_GetTransmitTimestamp", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(NatNet_Frame_GetTransmitTimestamp)(___pFrameOfMocapData0, ___pOutTransmitTimestamp1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___pFrameOfMocapData0, ___pOutTransmitTimestamp1);
	#endif

	return returnValue;
}
// NaturalPoint.NatNetLib.NatNetError NaturalPoint.NatNetLib.NativeMethods::NatNet_Frame_SecondsSinceHostTimestamp(System.IntPtr,System.UInt64,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_NatNet_Frame_SecondsSinceHostTimestamp_m760E2195714F4F84D3AA08BBFCF93B6207EFD120 (intptr_t ___clientHandle0, uint64_t ___inTimestamp1, double* ___pOutTimeElapsed2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint64_t, double*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatNetLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint64_t) + sizeof(double*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatNetLib"), "NatNet_Frame_SecondsSinceHostTimestamp", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(NatNet_Frame_SecondsSinceHostTimestamp)(___clientHandle0, ___inTimestamp1, ___pOutTimeElapsed2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___clientHandle0, ___inTimestamp1, ___pOutTimeElapsed2);
	#endif

	return returnValue;
}
// NaturalPoint.NatNetLib.NatNetError NaturalPoint.NatNetLib.NativeMethods::NatNet_Frame_GetLabeledMarkerCount(System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_NatNet_Frame_GetLabeledMarkerCount_mB3A371038187A951D71131D8558379CD421BA046 (intptr_t ___pFrameOfMocapData0, int32_t* ___labeledMarkerCount1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatNetLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatNetLib"), "NatNet_Frame_GetLabeledMarkerCount", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(NatNet_Frame_GetLabeledMarkerCount)(___pFrameOfMocapData0, ___labeledMarkerCount1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___pFrameOfMocapData0, ___labeledMarkerCount1);
	#endif

	return returnValue;
}
// NaturalPoint.NatNetLib.NatNetError NaturalPoint.NatNetLib.NativeMethods::NatNet_Frame_GetLabeledMarker(System.IntPtr,System.Int32,NaturalPoint.NatNetLib.sMarker&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeMethods_NatNet_Frame_GetLabeledMarker_m48141AC2A1721BAED62A57DA5F18E022E3049A88 (intptr_t ___pFrameOfMocapData0, int32_t ___labeledMarkerIndex1, sMarker_t111D88AF8AF385236E954237EF1C2A2128918469 * ___labeledMarkerData2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, sMarker_t111D88AF8AF385236E954237EF1C2A2128918469 *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatNetLib_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(sMarker_t111D88AF8AF385236E954237EF1C2A2128918469 *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatNetLib"), "NatNet_Frame_GetLabeledMarker", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatNetLib_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(NatNet_Frame_GetLabeledMarker)(___pFrameOfMocapData0, ___labeledMarkerIndex1, ___labeledMarkerData2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___pFrameOfMocapData0, ___labeledMarkerIndex1, ___labeledMarkerData2);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sAnalogChannelData
IL2CPP_EXTERN_C void sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshal_pinvoke(const sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5& unmarshaled, sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshaled_pinvoke& marshaled)
{
	marshaled.___FrameCount_0 = unmarshaled.get_FrameCount_0();
	if (unmarshaled.get_Values_1() != NULL)
	{
		if (30 > (unmarshaled.get_Values_1())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(30); i++)
		{
			(marshaled.___Values_1)[i] = (unmarshaled.get_Values_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshal_pinvoke_back(const sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshaled_pinvoke& marshaled, sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_FrameCount_temp_0 = 0;
	unmarshaled_FrameCount_temp_0 = marshaled.___FrameCount_0;
	unmarshaled.set_FrameCount_0(unmarshaled_FrameCount_temp_0);
	unmarshaled.set_Values_1(reinterpret_cast<SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*>((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, 30)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(30); i++)
	{
		(unmarshaled.get_Values_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___Values_1)[i]);
	}
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sAnalogChannelData
IL2CPP_EXTERN_C void sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshal_pinvoke_cleanup(sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sAnalogChannelData
IL2CPP_EXTERN_C void sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshal_com(const sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5& unmarshaled, sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshaled_com& marshaled)
{
	marshaled.___FrameCount_0 = unmarshaled.get_FrameCount_0();
	if (unmarshaled.get_Values_1() != NULL)
	{
		if (30 > (unmarshaled.get_Values_1())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(30); i++)
		{
			(marshaled.___Values_1)[i] = (unmarshaled.get_Values_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshal_com_back(const sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshaled_com& marshaled, sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_FrameCount_temp_0 = 0;
	unmarshaled_FrameCount_temp_0 = marshaled.___FrameCount_0;
	unmarshaled.set_FrameCount_0(unmarshaled_FrameCount_temp_0);
	unmarshaled.set_Values_1(reinterpret_cast<SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*>((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, 30)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(30); i++)
	{
		(unmarshaled.get_Values_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___Values_1)[i]);
	}
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sAnalogChannelData
IL2CPP_EXTERN_C void sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshal_com_cleanup(sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sChannelName
IL2CPP_EXTERN_C void sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshal_pinvoke(const sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D& unmarshaled, sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_string_fixed(unmarshaled.get_Value_0(), (char*)&marshaled.___Value_0, 256);
}
IL2CPP_EXTERN_C void sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshal_pinvoke_back(const sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshaled_pinvoke& marshaled, sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D& unmarshaled)
{
	unmarshaled.set_Value_0(il2cpp_codegen_marshal_string_result(marshaled.___Value_0));
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sChannelName
IL2CPP_EXTERN_C void sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshal_pinvoke_cleanup(sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sChannelName
IL2CPP_EXTERN_C void sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshal_com(const sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D& unmarshaled, sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_string_fixed(unmarshaled.get_Value_0(), (char*)&marshaled.___Value_0, 256);
}
IL2CPP_EXTERN_C void sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshal_com_back(const sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshaled_com& marshaled, sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D& unmarshaled)
{
	unmarshaled.set_Value_0(il2cpp_codegen_marshal_string_result(marshaled.___Value_0));
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sChannelName
IL2CPP_EXTERN_C void sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshal_com_cleanup(sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshaled_com& marshaled)
{
}
// System.String NaturalPoint.NatNetLib.sChannelName::op_Implicit(NaturalPoint.NatNetLib.sChannelName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* sChannelName_op_Implicit_mE86BDF18D807AACCC3A5AB5E666DD6BC501A9508 (sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D  ___source0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// return source.Value;
		sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D  L_0 = ___source0;
		String_t* L_1 = L_0.get_Value_0();
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// NaturalPoint.NatNetLib.sChannelName NaturalPoint.NatNetLib.sChannelName::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D  sChannelName_op_Implicit_m7BCC7A982685379185A2D4077A63FADF4C5E91FB (String_t* ___source0, const RuntimeMethod* method)
{
	bool V_0 = false;
	sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if ( source.Length >= NatNetConstants.MaxNameLength )
		String_t* L_0 = ___source0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)((int32_t)256)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// throw new ArgumentException( "String too large for field: \"" + source + "\"" );
		String_t* L_3 = ___source0;
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C79E83D16506B6D319B7EE84A9D1644CEE3A75A)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_5 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&sChannelName_op_Implicit_m7BCC7A982685379185A2D4077A63FADF4C5E91FB_RuntimeMethod_var)));
	}

IL_002b:
	{
		// return new sChannelName { Value = source };
		il2cpp_codegen_initobj((&V_1), sizeof(sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D ));
		String_t* L_6 = ___source0;
		(&V_1)->set_Value_0(L_6);
		sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D  L_7 = V_1;
		V_2 = L_7;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D  L_8 = V_2;
		return L_8;
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
// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sDataDescriptions
IL2CPP_EXTERN_C void sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD_marshal_pinvoke(const sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD& unmarshaled, sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD_marshaled_pinvoke& marshaled)
{
	marshaled.___DataDescriptionCount_0 = unmarshaled.get_DataDescriptionCount_0();
	if (unmarshaled.get_DataDescriptions_1() != NULL)
	{
		if (2000 > (unmarshaled.get_DataDescriptions_1())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(2000); i++)
		{
			(marshaled.___DataDescriptions_1)[i] = (unmarshaled.get_DataDescriptions_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD_marshal_pinvoke_back(const sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD_marshaled_pinvoke& marshaled, sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sDataDescriptionU5BU5D_t8BCADB0C438529DA8FD293E283308DE540600A8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_DataDescriptionCount_temp_0 = 0;
	unmarshaled_DataDescriptionCount_temp_0 = marshaled.___DataDescriptionCount_0;
	unmarshaled.set_DataDescriptionCount_0(unmarshaled_DataDescriptionCount_temp_0);
	unmarshaled.set_DataDescriptions_1(reinterpret_cast<sDataDescriptionU5BU5D_t8BCADB0C438529DA8FD293E283308DE540600A8E*>((sDataDescriptionU5BU5D_t8BCADB0C438529DA8FD293E283308DE540600A8E*)SZArrayNew(sDataDescriptionU5BU5D_t8BCADB0C438529DA8FD293E283308DE540600A8E_il2cpp_TypeInfo_var, 2000)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(2000); i++)
	{
		(unmarshaled.get_DataDescriptions_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___DataDescriptions_1)[i]);
	}
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sDataDescriptions
IL2CPP_EXTERN_C void sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD_marshal_pinvoke_cleanup(sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sDataDescriptions
IL2CPP_EXTERN_C void sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD_marshal_com(const sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD& unmarshaled, sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD_marshaled_com& marshaled)
{
	marshaled.___DataDescriptionCount_0 = unmarshaled.get_DataDescriptionCount_0();
	if (unmarshaled.get_DataDescriptions_1() != NULL)
	{
		if (2000 > (unmarshaled.get_DataDescriptions_1())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(2000); i++)
		{
			(marshaled.___DataDescriptions_1)[i] = (unmarshaled.get_DataDescriptions_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
}
IL2CPP_EXTERN_C void sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD_marshal_com_back(const sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD_marshaled_com& marshaled, sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sDataDescriptionU5BU5D_t8BCADB0C438529DA8FD293E283308DE540600A8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_DataDescriptionCount_temp_0 = 0;
	unmarshaled_DataDescriptionCount_temp_0 = marshaled.___DataDescriptionCount_0;
	unmarshaled.set_DataDescriptionCount_0(unmarshaled_DataDescriptionCount_temp_0);
	unmarshaled.set_DataDescriptions_1(reinterpret_cast<sDataDescriptionU5BU5D_t8BCADB0C438529DA8FD293E283308DE540600A8E*>((sDataDescriptionU5BU5D_t8BCADB0C438529DA8FD293E283308DE540600A8E*)SZArrayNew(sDataDescriptionU5BU5D_t8BCADB0C438529DA8FD293E283308DE540600A8E_il2cpp_TypeInfo_var, 2000)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(2000); i++)
	{
		(unmarshaled.get_DataDescriptions_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___DataDescriptions_1)[i]);
	}
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sDataDescriptions
IL2CPP_EXTERN_C void sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD_marshal_com_cleanup(sDataDescriptions_t827917DB36EDEB3D527BE3BCE69BDF18E5485DBD_marshaled_com& marshaled)
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


// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sDeviceData
IL2CPP_EXTERN_C void sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshal_pinvoke(const sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48& unmarshaled, sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshaled_pinvoke& marshaled)
{
	marshaled.___Id_0 = unmarshaled.get_Id_0();
	marshaled.___ChannelCount_1 = unmarshaled.get_ChannelCount_1();
	if (unmarshaled.get_ChannelData_2() != NULL)
	{
		if (32 > (unmarshaled.get_ChannelData_2())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
		{
			sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshal_pinvoke((unmarshaled.get_ChannelData_2())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___ChannelData_2)[i]);
		}
	}
	marshaled.___Params_3 = unmarshaled.get_Params_3();
}
IL2CPP_EXTERN_C void sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshal_pinvoke_back(const sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshaled_pinvoke& marshaled, sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_Id_temp_0 = 0;
	unmarshaled_Id_temp_0 = marshaled.___Id_0;
	unmarshaled.set_Id_0(unmarshaled_Id_temp_0);
	int32_t unmarshaled_ChannelCount_temp_1 = 0;
	unmarshaled_ChannelCount_temp_1 = marshaled.___ChannelCount_1;
	unmarshaled.set_ChannelCount_1(unmarshaled_ChannelCount_temp_1);
	unmarshaled.set_ChannelData_2(reinterpret_cast<sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE*>((sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE*)SZArrayNew(sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE_il2cpp_TypeInfo_var, 32)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
	{
		sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5  _marshaled____ChannelData_2_i__unmarshaled;
		memset((&_marshaled____ChannelData_2_i__unmarshaled), 0, sizeof(_marshaled____ChannelData_2_i__unmarshaled));
		sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshal_pinvoke_back((marshaled.___ChannelData_2)[i], _marshaled____ChannelData_2_i__unmarshaled);
		(unmarshaled.get_ChannelData_2())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____ChannelData_2_i__unmarshaled);
	}
	int16_t unmarshaled_Params_temp_3 = 0;
	unmarshaled_Params_temp_3 = marshaled.___Params_3;
	unmarshaled.set_Params_3(unmarshaled_Params_temp_3);
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sDeviceData
IL2CPP_EXTERN_C void sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshal_pinvoke_cleanup(sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshaled_pinvoke& marshaled)
{
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
	{
		sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshal_pinvoke_cleanup((marshaled.___ChannelData_2)[i]);
	}
}


// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sDeviceData
IL2CPP_EXTERN_C void sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshal_com(const sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48& unmarshaled, sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshaled_com& marshaled)
{
	marshaled.___Id_0 = unmarshaled.get_Id_0();
	marshaled.___ChannelCount_1 = unmarshaled.get_ChannelCount_1();
	if (unmarshaled.get_ChannelData_2() != NULL)
	{
		if (32 > (unmarshaled.get_ChannelData_2())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
		{
			sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshal_com((unmarshaled.get_ChannelData_2())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___ChannelData_2)[i]);
		}
	}
	marshaled.___Params_3 = unmarshaled.get_Params_3();
}
IL2CPP_EXTERN_C void sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshal_com_back(const sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshaled_com& marshaled, sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_Id_temp_0 = 0;
	unmarshaled_Id_temp_0 = marshaled.___Id_0;
	unmarshaled.set_Id_0(unmarshaled_Id_temp_0);
	int32_t unmarshaled_ChannelCount_temp_1 = 0;
	unmarshaled_ChannelCount_temp_1 = marshaled.___ChannelCount_1;
	unmarshaled.set_ChannelCount_1(unmarshaled_ChannelCount_temp_1);
	unmarshaled.set_ChannelData_2(reinterpret_cast<sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE*>((sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE*)SZArrayNew(sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE_il2cpp_TypeInfo_var, 32)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
	{
		sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5  _marshaled____ChannelData_2_i__unmarshaled;
		memset((&_marshaled____ChannelData_2_i__unmarshaled), 0, sizeof(_marshaled____ChannelData_2_i__unmarshaled));
		sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshal_com_back((marshaled.___ChannelData_2)[i], _marshaled____ChannelData_2_i__unmarshaled);
		(unmarshaled.get_ChannelData_2())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____ChannelData_2_i__unmarshaled);
	}
	int16_t unmarshaled_Params_temp_3 = 0;
	unmarshaled_Params_temp_3 = marshaled.___Params_3;
	unmarshaled.set_Params_3(unmarshaled_Params_temp_3);
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sDeviceData
IL2CPP_EXTERN_C void sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshal_com_cleanup(sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshaled_com& marshaled)
{
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
	{
		sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshal_com_cleanup((marshaled.___ChannelData_2)[i]);
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


// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sDeviceDescription
IL2CPP_EXTERN_C void sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90_marshal_pinvoke(const sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90& unmarshaled, sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90_marshaled_pinvoke& marshaled)
{
	marshaled.___Id_0 = unmarshaled.get_Id_0();
	il2cpp_codegen_marshal_string_fixed(unmarshaled.get_Name_1(), (char*)&marshaled.___Name_1, 128);
	il2cpp_codegen_marshal_string_fixed(unmarshaled.get_SerialNo_2(), (char*)&marshaled.___SerialNo_2, 128);
	marshaled.___DeviceType_3 = unmarshaled.get_DeviceType_3();
	marshaled.___ChannelDataType_4 = unmarshaled.get_ChannelDataType_4();
	marshaled.___ChannelCount_5 = unmarshaled.get_ChannelCount_5();
	if (unmarshaled.get_ChannelNames_6() != NULL)
	{
		if (32 > (unmarshaled.get_ChannelNames_6())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
		{
			sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshal_pinvoke((unmarshaled.get_ChannelNames_6())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___ChannelNames_6)[i]);
		}
	}
}
IL2CPP_EXTERN_C void sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90_marshal_pinvoke_back(const sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90_marshaled_pinvoke& marshaled, sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_Id_temp_0 = 0;
	unmarshaled_Id_temp_0 = marshaled.___Id_0;
	unmarshaled.set_Id_0(unmarshaled_Id_temp_0);
	unmarshaled.set_Name_1(il2cpp_codegen_marshal_string_result(marshaled.___Name_1));
	unmarshaled.set_SerialNo_2(il2cpp_codegen_marshal_string_result(marshaled.___SerialNo_2));
	int32_t unmarshaled_DeviceType_temp_3 = 0;
	unmarshaled_DeviceType_temp_3 = marshaled.___DeviceType_3;
	unmarshaled.set_DeviceType_3(unmarshaled_DeviceType_temp_3);
	int32_t unmarshaled_ChannelDataType_temp_4 = 0;
	unmarshaled_ChannelDataType_temp_4 = marshaled.___ChannelDataType_4;
	unmarshaled.set_ChannelDataType_4(unmarshaled_ChannelDataType_temp_4);
	int32_t unmarshaled_ChannelCount_temp_5 = 0;
	unmarshaled_ChannelCount_temp_5 = marshaled.___ChannelCount_5;
	unmarshaled.set_ChannelCount_5(unmarshaled_ChannelCount_temp_5);
	unmarshaled.set_ChannelNames_6(reinterpret_cast<sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51*>((sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51*)SZArrayNew(sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51_il2cpp_TypeInfo_var, 32)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
	{
		sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D  _marshaled____ChannelNames_6_i__unmarshaled;
		memset((&_marshaled____ChannelNames_6_i__unmarshaled), 0, sizeof(_marshaled____ChannelNames_6_i__unmarshaled));
		sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshal_pinvoke_back((marshaled.___ChannelNames_6)[i], _marshaled____ChannelNames_6_i__unmarshaled);
		(unmarshaled.get_ChannelNames_6())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____ChannelNames_6_i__unmarshaled);
	}
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sDeviceDescription
IL2CPP_EXTERN_C void sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90_marshal_pinvoke_cleanup(sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90_marshaled_pinvoke& marshaled)
{
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
	{
		sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshal_pinvoke_cleanup((marshaled.___ChannelNames_6)[i]);
	}
}


// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sDeviceDescription
IL2CPP_EXTERN_C void sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90_marshal_com(const sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90& unmarshaled, sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90_marshaled_com& marshaled)
{
	marshaled.___Id_0 = unmarshaled.get_Id_0();
	il2cpp_codegen_marshal_string_fixed(unmarshaled.get_Name_1(), (char*)&marshaled.___Name_1, 128);
	il2cpp_codegen_marshal_string_fixed(unmarshaled.get_SerialNo_2(), (char*)&marshaled.___SerialNo_2, 128);
	marshaled.___DeviceType_3 = unmarshaled.get_DeviceType_3();
	marshaled.___ChannelDataType_4 = unmarshaled.get_ChannelDataType_4();
	marshaled.___ChannelCount_5 = unmarshaled.get_ChannelCount_5();
	if (unmarshaled.get_ChannelNames_6() != NULL)
	{
		if (32 > (unmarshaled.get_ChannelNames_6())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
		{
			sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshal_com((unmarshaled.get_ChannelNames_6())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___ChannelNames_6)[i]);
		}
	}
}
IL2CPP_EXTERN_C void sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90_marshal_com_back(const sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90_marshaled_com& marshaled, sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_Id_temp_0 = 0;
	unmarshaled_Id_temp_0 = marshaled.___Id_0;
	unmarshaled.set_Id_0(unmarshaled_Id_temp_0);
	unmarshaled.set_Name_1(il2cpp_codegen_marshal_string_result(marshaled.___Name_1));
	unmarshaled.set_SerialNo_2(il2cpp_codegen_marshal_string_result(marshaled.___SerialNo_2));
	int32_t unmarshaled_DeviceType_temp_3 = 0;
	unmarshaled_DeviceType_temp_3 = marshaled.___DeviceType_3;
	unmarshaled.set_DeviceType_3(unmarshaled_DeviceType_temp_3);
	int32_t unmarshaled_ChannelDataType_temp_4 = 0;
	unmarshaled_ChannelDataType_temp_4 = marshaled.___ChannelDataType_4;
	unmarshaled.set_ChannelDataType_4(unmarshaled_ChannelDataType_temp_4);
	int32_t unmarshaled_ChannelCount_temp_5 = 0;
	unmarshaled_ChannelCount_temp_5 = marshaled.___ChannelCount_5;
	unmarshaled.set_ChannelCount_5(unmarshaled_ChannelCount_temp_5);
	unmarshaled.set_ChannelNames_6(reinterpret_cast<sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51*>((sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51*)SZArrayNew(sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51_il2cpp_TypeInfo_var, 32)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
	{
		sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D  _marshaled____ChannelNames_6_i__unmarshaled;
		memset((&_marshaled____ChannelNames_6_i__unmarshaled), 0, sizeof(_marshaled____ChannelNames_6_i__unmarshaled));
		sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshal_com_back((marshaled.___ChannelNames_6)[i], _marshaled____ChannelNames_6_i__unmarshaled);
		(unmarshaled.get_ChannelNames_6())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____ChannelNames_6_i__unmarshaled);
	}
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sDeviceDescription
IL2CPP_EXTERN_C void sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90_marshal_com_cleanup(sDeviceDescription_t1023E05D3BF886DBA06F1B8D21314364A8A8BD90_marshaled_com& marshaled)
{
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
	{
		sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshal_com_cleanup((marshaled.___ChannelNames_6)[i]);
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


// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sForcePlateData
IL2CPP_EXTERN_C void sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshal_pinvoke(const sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6& unmarshaled, sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshaled_pinvoke& marshaled)
{
	marshaled.___Id_0 = unmarshaled.get_Id_0();
	marshaled.___ChannelCount_1 = unmarshaled.get_ChannelCount_1();
	if (unmarshaled.get_ChannelData_2() != NULL)
	{
		if (32 > (unmarshaled.get_ChannelData_2())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
		{
			sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshal_pinvoke((unmarshaled.get_ChannelData_2())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___ChannelData_2)[i]);
		}
	}
	marshaled.___Params_3 = unmarshaled.get_Params_3();
}
IL2CPP_EXTERN_C void sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshal_pinvoke_back(const sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshaled_pinvoke& marshaled, sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_Id_temp_0 = 0;
	unmarshaled_Id_temp_0 = marshaled.___Id_0;
	unmarshaled.set_Id_0(unmarshaled_Id_temp_0);
	int32_t unmarshaled_ChannelCount_temp_1 = 0;
	unmarshaled_ChannelCount_temp_1 = marshaled.___ChannelCount_1;
	unmarshaled.set_ChannelCount_1(unmarshaled_ChannelCount_temp_1);
	unmarshaled.set_ChannelData_2(reinterpret_cast<sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE*>((sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE*)SZArrayNew(sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE_il2cpp_TypeInfo_var, 32)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
	{
		sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5  _marshaled____ChannelData_2_i__unmarshaled;
		memset((&_marshaled____ChannelData_2_i__unmarshaled), 0, sizeof(_marshaled____ChannelData_2_i__unmarshaled));
		sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshal_pinvoke_back((marshaled.___ChannelData_2)[i], _marshaled____ChannelData_2_i__unmarshaled);
		(unmarshaled.get_ChannelData_2())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____ChannelData_2_i__unmarshaled);
	}
	int16_t unmarshaled_Params_temp_3 = 0;
	unmarshaled_Params_temp_3 = marshaled.___Params_3;
	unmarshaled.set_Params_3(unmarshaled_Params_temp_3);
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sForcePlateData
IL2CPP_EXTERN_C void sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshal_pinvoke_cleanup(sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshaled_pinvoke& marshaled)
{
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
	{
		sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshal_pinvoke_cleanup((marshaled.___ChannelData_2)[i]);
	}
}


// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sForcePlateData
IL2CPP_EXTERN_C void sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshal_com(const sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6& unmarshaled, sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshaled_com& marshaled)
{
	marshaled.___Id_0 = unmarshaled.get_Id_0();
	marshaled.___ChannelCount_1 = unmarshaled.get_ChannelCount_1();
	if (unmarshaled.get_ChannelData_2() != NULL)
	{
		if (32 > (unmarshaled.get_ChannelData_2())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
		{
			sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshal_com((unmarshaled.get_ChannelData_2())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___ChannelData_2)[i]);
		}
	}
	marshaled.___Params_3 = unmarshaled.get_Params_3();
}
IL2CPP_EXTERN_C void sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshal_com_back(const sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshaled_com& marshaled, sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_Id_temp_0 = 0;
	unmarshaled_Id_temp_0 = marshaled.___Id_0;
	unmarshaled.set_Id_0(unmarshaled_Id_temp_0);
	int32_t unmarshaled_ChannelCount_temp_1 = 0;
	unmarshaled_ChannelCount_temp_1 = marshaled.___ChannelCount_1;
	unmarshaled.set_ChannelCount_1(unmarshaled_ChannelCount_temp_1);
	unmarshaled.set_ChannelData_2(reinterpret_cast<sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE*>((sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE*)SZArrayNew(sAnalogChannelDataU5BU5D_t73280ABC74D373C58C12D13AE16988AC69E408BE_il2cpp_TypeInfo_var, 32)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
	{
		sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5  _marshaled____ChannelData_2_i__unmarshaled;
		memset((&_marshaled____ChannelData_2_i__unmarshaled), 0, sizeof(_marshaled____ChannelData_2_i__unmarshaled));
		sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshal_com_back((marshaled.___ChannelData_2)[i], _marshaled____ChannelData_2_i__unmarshaled);
		(unmarshaled.get_ChannelData_2())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____ChannelData_2_i__unmarshaled);
	}
	int16_t unmarshaled_Params_temp_3 = 0;
	unmarshaled_Params_temp_3 = marshaled.___Params_3;
	unmarshaled.set_Params_3(unmarshaled_Params_temp_3);
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sForcePlateData
IL2CPP_EXTERN_C void sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshal_com_cleanup(sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshaled_com& marshaled)
{
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
	{
		sAnalogChannelData_tC8393EE9246D0DFFA834BF2321E33FA21B2DC9A5_marshal_com_cleanup((marshaled.___ChannelData_2)[i]);
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


// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sForcePlateDescription
IL2CPP_EXTERN_C void sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7_marshal_pinvoke(const sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7& unmarshaled, sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7_marshaled_pinvoke& marshaled)
{
	marshaled.___Id_0 = unmarshaled.get_Id_0();
	il2cpp_codegen_marshal_string_fixed(unmarshaled.get_SerialNo_1(), (char*)&marshaled.___SerialNo_1, 128);
	marshaled.___Width_2 = unmarshaled.get_Width_2();
	marshaled.___Length_3 = unmarshaled.get_Length_3();
	marshaled.___OriginX_4 = unmarshaled.get_OriginX_4();
	marshaled.___OriginY_5 = unmarshaled.get_OriginY_5();
	marshaled.___OriginZ_6 = unmarshaled.get_OriginZ_6();
	if (unmarshaled.get_CalibrationMatrix_7() != NULL)
	{
		if (144 > (unmarshaled.get_CalibrationMatrix_7())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(144); i++)
		{
			(marshaled.___CalibrationMatrix_7)[i] = (unmarshaled.get_CalibrationMatrix_7())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	if (unmarshaled.get_Corners_8() != NULL)
	{
		if (12 > (unmarshaled.get_Corners_8())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(12); i++)
		{
			(marshaled.___Corners_8)[i] = (unmarshaled.get_Corners_8())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	marshaled.___PlateType_9 = unmarshaled.get_PlateType_9();
	marshaled.___ChannelDataType_10 = unmarshaled.get_ChannelDataType_10();
	marshaled.___ChannelCount_11 = unmarshaled.get_ChannelCount_11();
	if (unmarshaled.get_ChannelNames_12() != NULL)
	{
		if (32 > (unmarshaled.get_ChannelNames_12())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
		{
			sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshal_pinvoke((unmarshaled.get_ChannelNames_12())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___ChannelNames_12)[i]);
		}
	}
}
IL2CPP_EXTERN_C void sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7_marshal_pinvoke_back(const sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7_marshaled_pinvoke& marshaled, sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_Id_temp_0 = 0;
	unmarshaled_Id_temp_0 = marshaled.___Id_0;
	unmarshaled.set_Id_0(unmarshaled_Id_temp_0);
	unmarshaled.set_SerialNo_1(il2cpp_codegen_marshal_string_result(marshaled.___SerialNo_1));
	float unmarshaled_Width_temp_2 = 0.0f;
	unmarshaled_Width_temp_2 = marshaled.___Width_2;
	unmarshaled.set_Width_2(unmarshaled_Width_temp_2);
	float unmarshaled_Length_temp_3 = 0.0f;
	unmarshaled_Length_temp_3 = marshaled.___Length_3;
	unmarshaled.set_Length_3(unmarshaled_Length_temp_3);
	float unmarshaled_OriginX_temp_4 = 0.0f;
	unmarshaled_OriginX_temp_4 = marshaled.___OriginX_4;
	unmarshaled.set_OriginX_4(unmarshaled_OriginX_temp_4);
	float unmarshaled_OriginY_temp_5 = 0.0f;
	unmarshaled_OriginY_temp_5 = marshaled.___OriginY_5;
	unmarshaled.set_OriginY_5(unmarshaled_OriginY_temp_5);
	float unmarshaled_OriginZ_temp_6 = 0.0f;
	unmarshaled_OriginZ_temp_6 = marshaled.___OriginZ_6;
	unmarshaled.set_OriginZ_6(unmarshaled_OriginZ_temp_6);
	unmarshaled.set_CalibrationMatrix_7(reinterpret_cast<SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*>((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, 144)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(144); i++)
	{
		(unmarshaled.get_CalibrationMatrix_7())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___CalibrationMatrix_7)[i]);
	}
	unmarshaled.set_Corners_8(reinterpret_cast<SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*>((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, 12)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(12); i++)
	{
		(unmarshaled.get_Corners_8())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___Corners_8)[i]);
	}
	int32_t unmarshaled_PlateType_temp_9 = 0;
	unmarshaled_PlateType_temp_9 = marshaled.___PlateType_9;
	unmarshaled.set_PlateType_9(unmarshaled_PlateType_temp_9);
	int32_t unmarshaled_ChannelDataType_temp_10 = 0;
	unmarshaled_ChannelDataType_temp_10 = marshaled.___ChannelDataType_10;
	unmarshaled.set_ChannelDataType_10(unmarshaled_ChannelDataType_temp_10);
	int32_t unmarshaled_ChannelCount_temp_11 = 0;
	unmarshaled_ChannelCount_temp_11 = marshaled.___ChannelCount_11;
	unmarshaled.set_ChannelCount_11(unmarshaled_ChannelCount_temp_11);
	unmarshaled.set_ChannelNames_12(reinterpret_cast<sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51*>((sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51*)SZArrayNew(sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51_il2cpp_TypeInfo_var, 32)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
	{
		sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D  _marshaled____ChannelNames_12_i__unmarshaled;
		memset((&_marshaled____ChannelNames_12_i__unmarshaled), 0, sizeof(_marshaled____ChannelNames_12_i__unmarshaled));
		sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshal_pinvoke_back((marshaled.___ChannelNames_12)[i], _marshaled____ChannelNames_12_i__unmarshaled);
		(unmarshaled.get_ChannelNames_12())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____ChannelNames_12_i__unmarshaled);
	}
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sForcePlateDescription
IL2CPP_EXTERN_C void sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7_marshal_pinvoke_cleanup(sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7_marshaled_pinvoke& marshaled)
{
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
	{
		sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshal_pinvoke_cleanup((marshaled.___ChannelNames_12)[i]);
	}
}


// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sForcePlateDescription
IL2CPP_EXTERN_C void sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7_marshal_com(const sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7& unmarshaled, sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7_marshaled_com& marshaled)
{
	marshaled.___Id_0 = unmarshaled.get_Id_0();
	il2cpp_codegen_marshal_string_fixed(unmarshaled.get_SerialNo_1(), (char*)&marshaled.___SerialNo_1, 128);
	marshaled.___Width_2 = unmarshaled.get_Width_2();
	marshaled.___Length_3 = unmarshaled.get_Length_3();
	marshaled.___OriginX_4 = unmarshaled.get_OriginX_4();
	marshaled.___OriginY_5 = unmarshaled.get_OriginY_5();
	marshaled.___OriginZ_6 = unmarshaled.get_OriginZ_6();
	if (unmarshaled.get_CalibrationMatrix_7() != NULL)
	{
		if (144 > (unmarshaled.get_CalibrationMatrix_7())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(144); i++)
		{
			(marshaled.___CalibrationMatrix_7)[i] = (unmarshaled.get_CalibrationMatrix_7())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	if (unmarshaled.get_Corners_8() != NULL)
	{
		if (12 > (unmarshaled.get_Corners_8())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(12); i++)
		{
			(marshaled.___Corners_8)[i] = (unmarshaled.get_Corners_8())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	marshaled.___PlateType_9 = unmarshaled.get_PlateType_9();
	marshaled.___ChannelDataType_10 = unmarshaled.get_ChannelDataType_10();
	marshaled.___ChannelCount_11 = unmarshaled.get_ChannelCount_11();
	if (unmarshaled.get_ChannelNames_12() != NULL)
	{
		if (32 > (unmarshaled.get_ChannelNames_12())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
		{
			sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshal_com((unmarshaled.get_ChannelNames_12())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___ChannelNames_12)[i]);
		}
	}
}
IL2CPP_EXTERN_C void sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7_marshal_com_back(const sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7_marshaled_com& marshaled, sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_Id_temp_0 = 0;
	unmarshaled_Id_temp_0 = marshaled.___Id_0;
	unmarshaled.set_Id_0(unmarshaled_Id_temp_0);
	unmarshaled.set_SerialNo_1(il2cpp_codegen_marshal_string_result(marshaled.___SerialNo_1));
	float unmarshaled_Width_temp_2 = 0.0f;
	unmarshaled_Width_temp_2 = marshaled.___Width_2;
	unmarshaled.set_Width_2(unmarshaled_Width_temp_2);
	float unmarshaled_Length_temp_3 = 0.0f;
	unmarshaled_Length_temp_3 = marshaled.___Length_3;
	unmarshaled.set_Length_3(unmarshaled_Length_temp_3);
	float unmarshaled_OriginX_temp_4 = 0.0f;
	unmarshaled_OriginX_temp_4 = marshaled.___OriginX_4;
	unmarshaled.set_OriginX_4(unmarshaled_OriginX_temp_4);
	float unmarshaled_OriginY_temp_5 = 0.0f;
	unmarshaled_OriginY_temp_5 = marshaled.___OriginY_5;
	unmarshaled.set_OriginY_5(unmarshaled_OriginY_temp_5);
	float unmarshaled_OriginZ_temp_6 = 0.0f;
	unmarshaled_OriginZ_temp_6 = marshaled.___OriginZ_6;
	unmarshaled.set_OriginZ_6(unmarshaled_OriginZ_temp_6);
	unmarshaled.set_CalibrationMatrix_7(reinterpret_cast<SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*>((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, 144)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(144); i++)
	{
		(unmarshaled.get_CalibrationMatrix_7())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___CalibrationMatrix_7)[i]);
	}
	unmarshaled.set_Corners_8(reinterpret_cast<SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*>((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, 12)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(12); i++)
	{
		(unmarshaled.get_Corners_8())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___Corners_8)[i]);
	}
	int32_t unmarshaled_PlateType_temp_9 = 0;
	unmarshaled_PlateType_temp_9 = marshaled.___PlateType_9;
	unmarshaled.set_PlateType_9(unmarshaled_PlateType_temp_9);
	int32_t unmarshaled_ChannelDataType_temp_10 = 0;
	unmarshaled_ChannelDataType_temp_10 = marshaled.___ChannelDataType_10;
	unmarshaled.set_ChannelDataType_10(unmarshaled_ChannelDataType_temp_10);
	int32_t unmarshaled_ChannelCount_temp_11 = 0;
	unmarshaled_ChannelCount_temp_11 = marshaled.___ChannelCount_11;
	unmarshaled.set_ChannelCount_11(unmarshaled_ChannelCount_temp_11);
	unmarshaled.set_ChannelNames_12(reinterpret_cast<sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51*>((sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51*)SZArrayNew(sChannelNameU5BU5D_t4DF3A8EF3C3967159D8225D1EEB7B261A197FE51_il2cpp_TypeInfo_var, 32)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
	{
		sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D  _marshaled____ChannelNames_12_i__unmarshaled;
		memset((&_marshaled____ChannelNames_12_i__unmarshaled), 0, sizeof(_marshaled____ChannelNames_12_i__unmarshaled));
		sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshal_com_back((marshaled.___ChannelNames_12)[i], _marshaled____ChannelNames_12_i__unmarshaled);
		(unmarshaled.get_ChannelNames_12())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____ChannelNames_12_i__unmarshaled);
	}
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sForcePlateDescription
IL2CPP_EXTERN_C void sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7_marshal_com_cleanup(sForcePlateDescription_t769C77ADE551A0E0D0E6E2D0F83E748E26740ED7_marshaled_com& marshaled)
{
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
	{
		sChannelName_tFC2F7E5038796900D8456BA999687F20B489745D_marshal_com_cleanup((marshaled.___ChannelNames_12)[i]);
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






// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sFrameOfMocapData
IL2CPP_EXTERN_C void sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33_marshal_pinvoke(const sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33& unmarshaled, sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33_marshaled_pinvoke& marshaled)
{
	marshaled.___FrameNumber_0 = unmarshaled.get_FrameNumber_0();
	marshaled.___MarkerSetCount_1 = unmarshaled.get_MarkerSetCount_1();
	if (unmarshaled.get_MarkerSets_2() != NULL)
	{
		if (2000 > (unmarshaled.get_MarkerSets_2())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(2000); i++)
		{
			sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshal_pinvoke((unmarshaled.get_MarkerSets_2())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___MarkerSets_2)[i]);
		}
	}
	marshaled.___OtherMarkerCount_3 = unmarshaled.get_OtherMarkerCount_3();
	marshaled.___OtherMarkers_4 = unmarshaled.get_OtherMarkers_4();
	marshaled.___RigidBodyCount_5 = unmarshaled.get_RigidBodyCount_5();
	if (unmarshaled.get_RigidBodies_6() != NULL)
	{
		if (1000 > (unmarshaled.get_RigidBodies_6())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(1000); i++)
		{
			(marshaled.___RigidBodies_6)[i] = (unmarshaled.get_RigidBodies_6())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	marshaled.___SkeletonCount_7 = unmarshaled.get_SkeletonCount_7();
	if (unmarshaled.get_Skeletons_8() != NULL)
	{
		if (100 > (unmarshaled.get_Skeletons_8())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(100); i++)
		{
			(marshaled.___Skeletons_8)[i] = (unmarshaled.get_Skeletons_8())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	marshaled.___LabeledMarkerCount_9 = unmarshaled.get_LabeledMarkerCount_9();
	if (unmarshaled.get_LabeledMarkers_10() != NULL)
	{
		if (1000 > (unmarshaled.get_LabeledMarkers_10())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(1000); i++)
		{
			(marshaled.___LabeledMarkers_10)[i] = (unmarshaled.get_LabeledMarkers_10())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	marshaled.___ForcePlateCount_11 = unmarshaled.get_ForcePlateCount_11();
	if (unmarshaled.get_ForcePlates_12() != NULL)
	{
		if (8 > (unmarshaled.get_ForcePlates_12())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(8); i++)
		{
			sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshal_pinvoke((unmarshaled.get_ForcePlates_12())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___ForcePlates_12)[i]);
		}
	}
	marshaled.___DeviceCount_13 = unmarshaled.get_DeviceCount_13();
	if (unmarshaled.get_Devices_14() != NULL)
	{
		if (32 > (unmarshaled.get_Devices_14())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
		{
			sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshal_pinvoke((unmarshaled.get_Devices_14())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___Devices_14)[i]);
		}
	}
	marshaled.___Timecode_15 = unmarshaled.get_Timecode_15();
	marshaled.___TimecodeSubframe_16 = unmarshaled.get_TimecodeSubframe_16();
	marshaled.___Timestamp_17 = unmarshaled.get_Timestamp_17();
	marshaled.___CameraMidExposureTimestamp_18 = unmarshaled.get_CameraMidExposureTimestamp_18();
	marshaled.___CameraDataReceivedTimestamp_19 = unmarshaled.get_CameraDataReceivedTimestamp_19();
	marshaled.___TransmitTimestamp_20 = unmarshaled.get_TransmitTimestamp_20();
	marshaled.___Params_21 = unmarshaled.get_Params_21();
}
IL2CPP_EXTERN_C void sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33_marshal_pinvoke_back(const sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33_marshaled_pinvoke& marshaled, sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sDeviceDataU5BU5D_t71A3F7035113DA4E0B2CEC0F70A1A5A8DE7148D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sForcePlateDataU5BU5D_t8B906D337B2A01D2A0A5EC375345A403AD3AD16B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sMarkerSetDataU5BU5D_t7CAAE2772EABCB3EADCCA7BF97039B2DFE1C9118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sMarkerU5BU5D_t4660E1FB80824989BE6B8D72046540FAD489E4CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sRigidBodyDataU5BU5D_t80B47D36737E8C7D314FE0A98A8600ADC440B482_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sSkeletonDataU5BU5D_t73F3A5AEF62C20F97925305516ED03260D43B301_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_FrameNumber_temp_0 = 0;
	unmarshaled_FrameNumber_temp_0 = marshaled.___FrameNumber_0;
	unmarshaled.set_FrameNumber_0(unmarshaled_FrameNumber_temp_0);
	int32_t unmarshaled_MarkerSetCount_temp_1 = 0;
	unmarshaled_MarkerSetCount_temp_1 = marshaled.___MarkerSetCount_1;
	unmarshaled.set_MarkerSetCount_1(unmarshaled_MarkerSetCount_temp_1);
	unmarshaled.set_MarkerSets_2(reinterpret_cast<sMarkerSetDataU5BU5D_t7CAAE2772EABCB3EADCCA7BF97039B2DFE1C9118*>((sMarkerSetDataU5BU5D_t7CAAE2772EABCB3EADCCA7BF97039B2DFE1C9118*)SZArrayNew(sMarkerSetDataU5BU5D_t7CAAE2772EABCB3EADCCA7BF97039B2DFE1C9118_il2cpp_TypeInfo_var, 2000)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(2000); i++)
	{
		sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6  _marshaled____MarkerSets_2_i__unmarshaled;
		memset((&_marshaled____MarkerSets_2_i__unmarshaled), 0, sizeof(_marshaled____MarkerSets_2_i__unmarshaled));
		sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshal_pinvoke_back((marshaled.___MarkerSets_2)[i], _marshaled____MarkerSets_2_i__unmarshaled);
		(unmarshaled.get_MarkerSets_2())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____MarkerSets_2_i__unmarshaled);
	}
	int32_t unmarshaled_OtherMarkerCount_temp_3 = 0;
	unmarshaled_OtherMarkerCount_temp_3 = marshaled.___OtherMarkerCount_3;
	unmarshaled.set_OtherMarkerCount_3(unmarshaled_OtherMarkerCount_temp_3);
	intptr_t unmarshaled_OtherMarkers_temp_4;
	memset((&unmarshaled_OtherMarkers_temp_4), 0, sizeof(unmarshaled_OtherMarkers_temp_4));
	unmarshaled_OtherMarkers_temp_4 = marshaled.___OtherMarkers_4;
	unmarshaled.set_OtherMarkers_4(unmarshaled_OtherMarkers_temp_4);
	int32_t unmarshaled_RigidBodyCount_temp_5 = 0;
	unmarshaled_RigidBodyCount_temp_5 = marshaled.___RigidBodyCount_5;
	unmarshaled.set_RigidBodyCount_5(unmarshaled_RigidBodyCount_temp_5);
	unmarshaled.set_RigidBodies_6(reinterpret_cast<sRigidBodyDataU5BU5D_t80B47D36737E8C7D314FE0A98A8600ADC440B482*>((sRigidBodyDataU5BU5D_t80B47D36737E8C7D314FE0A98A8600ADC440B482*)SZArrayNew(sRigidBodyDataU5BU5D_t80B47D36737E8C7D314FE0A98A8600ADC440B482_il2cpp_TypeInfo_var, 1000)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(1000); i++)
	{
		(unmarshaled.get_RigidBodies_6())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___RigidBodies_6)[i]);
	}
	int32_t unmarshaled_SkeletonCount_temp_7 = 0;
	unmarshaled_SkeletonCount_temp_7 = marshaled.___SkeletonCount_7;
	unmarshaled.set_SkeletonCount_7(unmarshaled_SkeletonCount_temp_7);
	unmarshaled.set_Skeletons_8(reinterpret_cast<sSkeletonDataU5BU5D_t73F3A5AEF62C20F97925305516ED03260D43B301*>((sSkeletonDataU5BU5D_t73F3A5AEF62C20F97925305516ED03260D43B301*)SZArrayNew(sSkeletonDataU5BU5D_t73F3A5AEF62C20F97925305516ED03260D43B301_il2cpp_TypeInfo_var, 100)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(100); i++)
	{
		(unmarshaled.get_Skeletons_8())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___Skeletons_8)[i]);
	}
	int32_t unmarshaled_LabeledMarkerCount_temp_9 = 0;
	unmarshaled_LabeledMarkerCount_temp_9 = marshaled.___LabeledMarkerCount_9;
	unmarshaled.set_LabeledMarkerCount_9(unmarshaled_LabeledMarkerCount_temp_9);
	unmarshaled.set_LabeledMarkers_10(reinterpret_cast<sMarkerU5BU5D_t4660E1FB80824989BE6B8D72046540FAD489E4CE*>((sMarkerU5BU5D_t4660E1FB80824989BE6B8D72046540FAD489E4CE*)SZArrayNew(sMarkerU5BU5D_t4660E1FB80824989BE6B8D72046540FAD489E4CE_il2cpp_TypeInfo_var, 1000)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(1000); i++)
	{
		(unmarshaled.get_LabeledMarkers_10())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___LabeledMarkers_10)[i]);
	}
	int32_t unmarshaled_ForcePlateCount_temp_11 = 0;
	unmarshaled_ForcePlateCount_temp_11 = marshaled.___ForcePlateCount_11;
	unmarshaled.set_ForcePlateCount_11(unmarshaled_ForcePlateCount_temp_11);
	unmarshaled.set_ForcePlates_12(reinterpret_cast<sForcePlateDataU5BU5D_t8B906D337B2A01D2A0A5EC375345A403AD3AD16B*>((sForcePlateDataU5BU5D_t8B906D337B2A01D2A0A5EC375345A403AD3AD16B*)SZArrayNew(sForcePlateDataU5BU5D_t8B906D337B2A01D2A0A5EC375345A403AD3AD16B_il2cpp_TypeInfo_var, 8)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(8); i++)
	{
		sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6  _marshaled____ForcePlates_12_i__unmarshaled;
		memset((&_marshaled____ForcePlates_12_i__unmarshaled), 0, sizeof(_marshaled____ForcePlates_12_i__unmarshaled));
		sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshal_pinvoke_back((marshaled.___ForcePlates_12)[i], _marshaled____ForcePlates_12_i__unmarshaled);
		(unmarshaled.get_ForcePlates_12())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____ForcePlates_12_i__unmarshaled);
	}
	int32_t unmarshaled_DeviceCount_temp_13 = 0;
	unmarshaled_DeviceCount_temp_13 = marshaled.___DeviceCount_13;
	unmarshaled.set_DeviceCount_13(unmarshaled_DeviceCount_temp_13);
	unmarshaled.set_Devices_14(reinterpret_cast<sDeviceDataU5BU5D_t71A3F7035113DA4E0B2CEC0F70A1A5A8DE7148D2*>((sDeviceDataU5BU5D_t71A3F7035113DA4E0B2CEC0F70A1A5A8DE7148D2*)SZArrayNew(sDeviceDataU5BU5D_t71A3F7035113DA4E0B2CEC0F70A1A5A8DE7148D2_il2cpp_TypeInfo_var, 32)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
	{
		sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48  _marshaled____Devices_14_i__unmarshaled;
		memset((&_marshaled____Devices_14_i__unmarshaled), 0, sizeof(_marshaled____Devices_14_i__unmarshaled));
		sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshal_pinvoke_back((marshaled.___Devices_14)[i], _marshaled____Devices_14_i__unmarshaled);
		(unmarshaled.get_Devices_14())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____Devices_14_i__unmarshaled);
	}
	uint32_t unmarshaled_Timecode_temp_15 = 0;
	unmarshaled_Timecode_temp_15 = marshaled.___Timecode_15;
	unmarshaled.set_Timecode_15(unmarshaled_Timecode_temp_15);
	uint32_t unmarshaled_TimecodeSubframe_temp_16 = 0;
	unmarshaled_TimecodeSubframe_temp_16 = marshaled.___TimecodeSubframe_16;
	unmarshaled.set_TimecodeSubframe_16(unmarshaled_TimecodeSubframe_temp_16);
	double unmarshaled_Timestamp_temp_17 = 0.0;
	unmarshaled_Timestamp_temp_17 = marshaled.___Timestamp_17;
	unmarshaled.set_Timestamp_17(unmarshaled_Timestamp_temp_17);
	uint64_t unmarshaled_CameraMidExposureTimestamp_temp_18 = 0;
	unmarshaled_CameraMidExposureTimestamp_temp_18 = marshaled.___CameraMidExposureTimestamp_18;
	unmarshaled.set_CameraMidExposureTimestamp_18(unmarshaled_CameraMidExposureTimestamp_temp_18);
	uint64_t unmarshaled_CameraDataReceivedTimestamp_temp_19 = 0;
	unmarshaled_CameraDataReceivedTimestamp_temp_19 = marshaled.___CameraDataReceivedTimestamp_19;
	unmarshaled.set_CameraDataReceivedTimestamp_19(unmarshaled_CameraDataReceivedTimestamp_temp_19);
	uint64_t unmarshaled_TransmitTimestamp_temp_20 = 0;
	unmarshaled_TransmitTimestamp_temp_20 = marshaled.___TransmitTimestamp_20;
	unmarshaled.set_TransmitTimestamp_20(unmarshaled_TransmitTimestamp_temp_20);
	int16_t unmarshaled_Params_temp_21 = 0;
	unmarshaled_Params_temp_21 = marshaled.___Params_21;
	unmarshaled.set_Params_21(unmarshaled_Params_temp_21);
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sFrameOfMocapData
IL2CPP_EXTERN_C void sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33_marshal_pinvoke_cleanup(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33_marshaled_pinvoke& marshaled)
{
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(2000); i++)
	{
		sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshal_pinvoke_cleanup((marshaled.___MarkerSets_2)[i]);
	}
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(8); i++)
	{
		sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshal_pinvoke_cleanup((marshaled.___ForcePlates_12)[i]);
	}
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
	{
		sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshal_pinvoke_cleanup((marshaled.___Devices_14)[i]);
	}
}






// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sFrameOfMocapData
IL2CPP_EXTERN_C void sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33_marshal_com(const sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33& unmarshaled, sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33_marshaled_com& marshaled)
{
	marshaled.___FrameNumber_0 = unmarshaled.get_FrameNumber_0();
	marshaled.___MarkerSetCount_1 = unmarshaled.get_MarkerSetCount_1();
	if (unmarshaled.get_MarkerSets_2() != NULL)
	{
		if (2000 > (unmarshaled.get_MarkerSets_2())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(2000); i++)
		{
			sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshal_com((unmarshaled.get_MarkerSets_2())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___MarkerSets_2)[i]);
		}
	}
	marshaled.___OtherMarkerCount_3 = unmarshaled.get_OtherMarkerCount_3();
	marshaled.___OtherMarkers_4 = unmarshaled.get_OtherMarkers_4();
	marshaled.___RigidBodyCount_5 = unmarshaled.get_RigidBodyCount_5();
	if (unmarshaled.get_RigidBodies_6() != NULL)
	{
		if (1000 > (unmarshaled.get_RigidBodies_6())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(1000); i++)
		{
			(marshaled.___RigidBodies_6)[i] = (unmarshaled.get_RigidBodies_6())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	marshaled.___SkeletonCount_7 = unmarshaled.get_SkeletonCount_7();
	if (unmarshaled.get_Skeletons_8() != NULL)
	{
		if (100 > (unmarshaled.get_Skeletons_8())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(100); i++)
		{
			(marshaled.___Skeletons_8)[i] = (unmarshaled.get_Skeletons_8())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	marshaled.___LabeledMarkerCount_9 = unmarshaled.get_LabeledMarkerCount_9();
	if (unmarshaled.get_LabeledMarkers_10() != NULL)
	{
		if (1000 > (unmarshaled.get_LabeledMarkers_10())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(1000); i++)
		{
			(marshaled.___LabeledMarkers_10)[i] = (unmarshaled.get_LabeledMarkers_10())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	marshaled.___ForcePlateCount_11 = unmarshaled.get_ForcePlateCount_11();
	if (unmarshaled.get_ForcePlates_12() != NULL)
	{
		if (8 > (unmarshaled.get_ForcePlates_12())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(8); i++)
		{
			sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshal_com((unmarshaled.get_ForcePlates_12())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___ForcePlates_12)[i]);
		}
	}
	marshaled.___DeviceCount_13 = unmarshaled.get_DeviceCount_13();
	if (unmarshaled.get_Devices_14() != NULL)
	{
		if (32 > (unmarshaled.get_Devices_14())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
		{
			sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshal_com((unmarshaled.get_Devices_14())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___Devices_14)[i]);
		}
	}
	marshaled.___Timecode_15 = unmarshaled.get_Timecode_15();
	marshaled.___TimecodeSubframe_16 = unmarshaled.get_TimecodeSubframe_16();
	marshaled.___Timestamp_17 = unmarshaled.get_Timestamp_17();
	marshaled.___CameraMidExposureTimestamp_18 = unmarshaled.get_CameraMidExposureTimestamp_18();
	marshaled.___CameraDataReceivedTimestamp_19 = unmarshaled.get_CameraDataReceivedTimestamp_19();
	marshaled.___TransmitTimestamp_20 = unmarshaled.get_TransmitTimestamp_20();
	marshaled.___Params_21 = unmarshaled.get_Params_21();
}
IL2CPP_EXTERN_C void sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33_marshal_com_back(const sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33_marshaled_com& marshaled, sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sDeviceDataU5BU5D_t71A3F7035113DA4E0B2CEC0F70A1A5A8DE7148D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sForcePlateDataU5BU5D_t8B906D337B2A01D2A0A5EC375345A403AD3AD16B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sMarkerSetDataU5BU5D_t7CAAE2772EABCB3EADCCA7BF97039B2DFE1C9118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sMarkerU5BU5D_t4660E1FB80824989BE6B8D72046540FAD489E4CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sRigidBodyDataU5BU5D_t80B47D36737E8C7D314FE0A98A8600ADC440B482_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sSkeletonDataU5BU5D_t73F3A5AEF62C20F97925305516ED03260D43B301_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_FrameNumber_temp_0 = 0;
	unmarshaled_FrameNumber_temp_0 = marshaled.___FrameNumber_0;
	unmarshaled.set_FrameNumber_0(unmarshaled_FrameNumber_temp_0);
	int32_t unmarshaled_MarkerSetCount_temp_1 = 0;
	unmarshaled_MarkerSetCount_temp_1 = marshaled.___MarkerSetCount_1;
	unmarshaled.set_MarkerSetCount_1(unmarshaled_MarkerSetCount_temp_1);
	unmarshaled.set_MarkerSets_2(reinterpret_cast<sMarkerSetDataU5BU5D_t7CAAE2772EABCB3EADCCA7BF97039B2DFE1C9118*>((sMarkerSetDataU5BU5D_t7CAAE2772EABCB3EADCCA7BF97039B2DFE1C9118*)SZArrayNew(sMarkerSetDataU5BU5D_t7CAAE2772EABCB3EADCCA7BF97039B2DFE1C9118_il2cpp_TypeInfo_var, 2000)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(2000); i++)
	{
		sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6  _marshaled____MarkerSets_2_i__unmarshaled;
		memset((&_marshaled____MarkerSets_2_i__unmarshaled), 0, sizeof(_marshaled____MarkerSets_2_i__unmarshaled));
		sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshal_com_back((marshaled.___MarkerSets_2)[i], _marshaled____MarkerSets_2_i__unmarshaled);
		(unmarshaled.get_MarkerSets_2())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____MarkerSets_2_i__unmarshaled);
	}
	int32_t unmarshaled_OtherMarkerCount_temp_3 = 0;
	unmarshaled_OtherMarkerCount_temp_3 = marshaled.___OtherMarkerCount_3;
	unmarshaled.set_OtherMarkerCount_3(unmarshaled_OtherMarkerCount_temp_3);
	intptr_t unmarshaled_OtherMarkers_temp_4;
	memset((&unmarshaled_OtherMarkers_temp_4), 0, sizeof(unmarshaled_OtherMarkers_temp_4));
	unmarshaled_OtherMarkers_temp_4 = marshaled.___OtherMarkers_4;
	unmarshaled.set_OtherMarkers_4(unmarshaled_OtherMarkers_temp_4);
	int32_t unmarshaled_RigidBodyCount_temp_5 = 0;
	unmarshaled_RigidBodyCount_temp_5 = marshaled.___RigidBodyCount_5;
	unmarshaled.set_RigidBodyCount_5(unmarshaled_RigidBodyCount_temp_5);
	unmarshaled.set_RigidBodies_6(reinterpret_cast<sRigidBodyDataU5BU5D_t80B47D36737E8C7D314FE0A98A8600ADC440B482*>((sRigidBodyDataU5BU5D_t80B47D36737E8C7D314FE0A98A8600ADC440B482*)SZArrayNew(sRigidBodyDataU5BU5D_t80B47D36737E8C7D314FE0A98A8600ADC440B482_il2cpp_TypeInfo_var, 1000)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(1000); i++)
	{
		(unmarshaled.get_RigidBodies_6())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___RigidBodies_6)[i]);
	}
	int32_t unmarshaled_SkeletonCount_temp_7 = 0;
	unmarshaled_SkeletonCount_temp_7 = marshaled.___SkeletonCount_7;
	unmarshaled.set_SkeletonCount_7(unmarshaled_SkeletonCount_temp_7);
	unmarshaled.set_Skeletons_8(reinterpret_cast<sSkeletonDataU5BU5D_t73F3A5AEF62C20F97925305516ED03260D43B301*>((sSkeletonDataU5BU5D_t73F3A5AEF62C20F97925305516ED03260D43B301*)SZArrayNew(sSkeletonDataU5BU5D_t73F3A5AEF62C20F97925305516ED03260D43B301_il2cpp_TypeInfo_var, 100)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(100); i++)
	{
		(unmarshaled.get_Skeletons_8())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___Skeletons_8)[i]);
	}
	int32_t unmarshaled_LabeledMarkerCount_temp_9 = 0;
	unmarshaled_LabeledMarkerCount_temp_9 = marshaled.___LabeledMarkerCount_9;
	unmarshaled.set_LabeledMarkerCount_9(unmarshaled_LabeledMarkerCount_temp_9);
	unmarshaled.set_LabeledMarkers_10(reinterpret_cast<sMarkerU5BU5D_t4660E1FB80824989BE6B8D72046540FAD489E4CE*>((sMarkerU5BU5D_t4660E1FB80824989BE6B8D72046540FAD489E4CE*)SZArrayNew(sMarkerU5BU5D_t4660E1FB80824989BE6B8D72046540FAD489E4CE_il2cpp_TypeInfo_var, 1000)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(1000); i++)
	{
		(unmarshaled.get_LabeledMarkers_10())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___LabeledMarkers_10)[i]);
	}
	int32_t unmarshaled_ForcePlateCount_temp_11 = 0;
	unmarshaled_ForcePlateCount_temp_11 = marshaled.___ForcePlateCount_11;
	unmarshaled.set_ForcePlateCount_11(unmarshaled_ForcePlateCount_temp_11);
	unmarshaled.set_ForcePlates_12(reinterpret_cast<sForcePlateDataU5BU5D_t8B906D337B2A01D2A0A5EC375345A403AD3AD16B*>((sForcePlateDataU5BU5D_t8B906D337B2A01D2A0A5EC375345A403AD3AD16B*)SZArrayNew(sForcePlateDataU5BU5D_t8B906D337B2A01D2A0A5EC375345A403AD3AD16B_il2cpp_TypeInfo_var, 8)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(8); i++)
	{
		sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6  _marshaled____ForcePlates_12_i__unmarshaled;
		memset((&_marshaled____ForcePlates_12_i__unmarshaled), 0, sizeof(_marshaled____ForcePlates_12_i__unmarshaled));
		sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshal_com_back((marshaled.___ForcePlates_12)[i], _marshaled____ForcePlates_12_i__unmarshaled);
		(unmarshaled.get_ForcePlates_12())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____ForcePlates_12_i__unmarshaled);
	}
	int32_t unmarshaled_DeviceCount_temp_13 = 0;
	unmarshaled_DeviceCount_temp_13 = marshaled.___DeviceCount_13;
	unmarshaled.set_DeviceCount_13(unmarshaled_DeviceCount_temp_13);
	unmarshaled.set_Devices_14(reinterpret_cast<sDeviceDataU5BU5D_t71A3F7035113DA4E0B2CEC0F70A1A5A8DE7148D2*>((sDeviceDataU5BU5D_t71A3F7035113DA4E0B2CEC0F70A1A5A8DE7148D2*)SZArrayNew(sDeviceDataU5BU5D_t71A3F7035113DA4E0B2CEC0F70A1A5A8DE7148D2_il2cpp_TypeInfo_var, 32)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
	{
		sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48  _marshaled____Devices_14_i__unmarshaled;
		memset((&_marshaled____Devices_14_i__unmarshaled), 0, sizeof(_marshaled____Devices_14_i__unmarshaled));
		sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshal_com_back((marshaled.___Devices_14)[i], _marshaled____Devices_14_i__unmarshaled);
		(unmarshaled.get_Devices_14())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____Devices_14_i__unmarshaled);
	}
	uint32_t unmarshaled_Timecode_temp_15 = 0;
	unmarshaled_Timecode_temp_15 = marshaled.___Timecode_15;
	unmarshaled.set_Timecode_15(unmarshaled_Timecode_temp_15);
	uint32_t unmarshaled_TimecodeSubframe_temp_16 = 0;
	unmarshaled_TimecodeSubframe_temp_16 = marshaled.___TimecodeSubframe_16;
	unmarshaled.set_TimecodeSubframe_16(unmarshaled_TimecodeSubframe_temp_16);
	double unmarshaled_Timestamp_temp_17 = 0.0;
	unmarshaled_Timestamp_temp_17 = marshaled.___Timestamp_17;
	unmarshaled.set_Timestamp_17(unmarshaled_Timestamp_temp_17);
	uint64_t unmarshaled_CameraMidExposureTimestamp_temp_18 = 0;
	unmarshaled_CameraMidExposureTimestamp_temp_18 = marshaled.___CameraMidExposureTimestamp_18;
	unmarshaled.set_CameraMidExposureTimestamp_18(unmarshaled_CameraMidExposureTimestamp_temp_18);
	uint64_t unmarshaled_CameraDataReceivedTimestamp_temp_19 = 0;
	unmarshaled_CameraDataReceivedTimestamp_temp_19 = marshaled.___CameraDataReceivedTimestamp_19;
	unmarshaled.set_CameraDataReceivedTimestamp_19(unmarshaled_CameraDataReceivedTimestamp_temp_19);
	uint64_t unmarshaled_TransmitTimestamp_temp_20 = 0;
	unmarshaled_TransmitTimestamp_temp_20 = marshaled.___TransmitTimestamp_20;
	unmarshaled.set_TransmitTimestamp_20(unmarshaled_TransmitTimestamp_temp_20);
	int16_t unmarshaled_Params_temp_21 = 0;
	unmarshaled_Params_temp_21 = marshaled.___Params_21;
	unmarshaled.set_Params_21(unmarshaled_Params_temp_21);
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sFrameOfMocapData
IL2CPP_EXTERN_C void sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33_marshal_com_cleanup(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33_marshaled_com& marshaled)
{
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(2000); i++)
	{
		sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshal_com_cleanup((marshaled.___MarkerSets_2)[i]);
	}
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(8); i++)
	{
		sForcePlateData_t10528C68EB302A8B8B9C25BE8ACBDE607C81DCD6_marshal_com_cleanup((marshaled.___ForcePlates_12)[i]);
	}
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(32); i++)
	{
		sDeviceData_t9DAB3FBBD973B383B3861FD0CF07F82B3BD09B48_marshal_com_cleanup((marshaled.___Devices_14)[i]);
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
// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sMarkerSetData
IL2CPP_EXTERN_C void sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshal_pinvoke(const sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6& unmarshaled, sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_string_fixed(unmarshaled.get_Name_0(), (char*)&marshaled.___Name_0, 256);
	marshaled.___MarkerCount_1 = unmarshaled.get_MarkerCount_1();
	marshaled.___Markers_2 = unmarshaled.get_Markers_2();
}
IL2CPP_EXTERN_C void sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshal_pinvoke_back(const sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshaled_pinvoke& marshaled, sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6& unmarshaled)
{
	unmarshaled.set_Name_0(il2cpp_codegen_marshal_string_result(marshaled.___Name_0));
	int32_t unmarshaled_MarkerCount_temp_1 = 0;
	unmarshaled_MarkerCount_temp_1 = marshaled.___MarkerCount_1;
	unmarshaled.set_MarkerCount_1(unmarshaled_MarkerCount_temp_1);
	intptr_t unmarshaled_Markers_temp_2;
	memset((&unmarshaled_Markers_temp_2), 0, sizeof(unmarshaled_Markers_temp_2));
	unmarshaled_Markers_temp_2 = marshaled.___Markers_2;
	unmarshaled.set_Markers_2(unmarshaled_Markers_temp_2);
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sMarkerSetData
IL2CPP_EXTERN_C void sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshal_pinvoke_cleanup(sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sMarkerSetData
IL2CPP_EXTERN_C void sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshal_com(const sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6& unmarshaled, sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_string_fixed(unmarshaled.get_Name_0(), (char*)&marshaled.___Name_0, 256);
	marshaled.___MarkerCount_1 = unmarshaled.get_MarkerCount_1();
	marshaled.___Markers_2 = unmarshaled.get_Markers_2();
}
IL2CPP_EXTERN_C void sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshal_com_back(const sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshaled_com& marshaled, sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6& unmarshaled)
{
	unmarshaled.set_Name_0(il2cpp_codegen_marshal_string_result(marshaled.___Name_0));
	int32_t unmarshaled_MarkerCount_temp_1 = 0;
	unmarshaled_MarkerCount_temp_1 = marshaled.___MarkerCount_1;
	unmarshaled.set_MarkerCount_1(unmarshaled_MarkerCount_temp_1);
	intptr_t unmarshaled_Markers_temp_2;
	memset((&unmarshaled_Markers_temp_2), 0, sizeof(unmarshaled_Markers_temp_2));
	unmarshaled_Markers_temp_2 = marshaled.___Markers_2;
	unmarshaled.set_Markers_2(unmarshaled_Markers_temp_2);
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sMarkerSetData
IL2CPP_EXTERN_C void sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshal_com_cleanup(sMarkerSetData_tEE0B009EEC8D3C4DD0B56C0F1DCC27D24EACD8E6_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sMarkerSetDescription
IL2CPP_EXTERN_C void sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F_marshal_pinvoke(const sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F& unmarshaled, sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_string_fixed(unmarshaled.get_Name_0(), (char*)&marshaled.___Name_0, 256);
	marshaled.___MarkerCount_1 = unmarshaled.get_MarkerCount_1();
	marshaled.___MarkerNames_2 = unmarshaled.get_MarkerNames_2();
}
IL2CPP_EXTERN_C void sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F_marshal_pinvoke_back(const sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F_marshaled_pinvoke& marshaled, sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F& unmarshaled)
{
	unmarshaled.set_Name_0(il2cpp_codegen_marshal_string_result(marshaled.___Name_0));
	int32_t unmarshaled_MarkerCount_temp_1 = 0;
	unmarshaled_MarkerCount_temp_1 = marshaled.___MarkerCount_1;
	unmarshaled.set_MarkerCount_1(unmarshaled_MarkerCount_temp_1);
	intptr_t unmarshaled_MarkerNames_temp_2;
	memset((&unmarshaled_MarkerNames_temp_2), 0, sizeof(unmarshaled_MarkerNames_temp_2));
	unmarshaled_MarkerNames_temp_2 = marshaled.___MarkerNames_2;
	unmarshaled.set_MarkerNames_2(unmarshaled_MarkerNames_temp_2);
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sMarkerSetDescription
IL2CPP_EXTERN_C void sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F_marshal_pinvoke_cleanup(sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sMarkerSetDescription
IL2CPP_EXTERN_C void sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F_marshal_com(const sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F& unmarshaled, sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_string_fixed(unmarshaled.get_Name_0(), (char*)&marshaled.___Name_0, 256);
	marshaled.___MarkerCount_1 = unmarshaled.get_MarkerCount_1();
	marshaled.___MarkerNames_2 = unmarshaled.get_MarkerNames_2();
}
IL2CPP_EXTERN_C void sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F_marshal_com_back(const sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F_marshaled_com& marshaled, sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F& unmarshaled)
{
	unmarshaled.set_Name_0(il2cpp_codegen_marshal_string_result(marshaled.___Name_0));
	int32_t unmarshaled_MarkerCount_temp_1 = 0;
	unmarshaled_MarkerCount_temp_1 = marshaled.___MarkerCount_1;
	unmarshaled.set_MarkerCount_1(unmarshaled_MarkerCount_temp_1);
	intptr_t unmarshaled_MarkerNames_temp_2;
	memset((&unmarshaled_MarkerNames_temp_2), 0, sizeof(unmarshaled_MarkerNames_temp_2));
	unmarshaled_MarkerNames_temp_2 = marshaled.___MarkerNames_2;
	unmarshaled.set_MarkerNames_2(unmarshaled_MarkerNames_temp_2);
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sMarkerSetDescription
IL2CPP_EXTERN_C void sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F_marshal_com_cleanup(sMarkerSetDescription_t779943B0B4DE4B251CA6315D3093F6E4B4D3F21F_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sNatNetClientConnectParams
IL2CPP_EXTERN_C void sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshal_pinvoke(const sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86& unmarshaled, sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshaled_pinvoke& marshaled)
{
	marshaled.___ConnectionType_0 = unmarshaled.get_ConnectionType_0();
	marshaled.___ServerCommandPort_1 = unmarshaled.get_ServerCommandPort_1();
	marshaled.___ServerDataPort_2 = unmarshaled.get_ServerDataPort_2();
	marshaled.___ServerAddress_3 = il2cpp_codegen_marshal_string(unmarshaled.get_ServerAddress_3());
	marshaled.___LocalAddress_4 = il2cpp_codegen_marshal_string(unmarshaled.get_LocalAddress_4());
	marshaled.___MulticastAddress_5 = il2cpp_codegen_marshal_string(unmarshaled.get_MulticastAddress_5());
}
IL2CPP_EXTERN_C void sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshal_pinvoke_back(const sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshaled_pinvoke& marshaled, sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86& unmarshaled)
{
	int32_t unmarshaled_ConnectionType_temp_0 = 0;
	unmarshaled_ConnectionType_temp_0 = marshaled.___ConnectionType_0;
	unmarshaled.set_ConnectionType_0(unmarshaled_ConnectionType_temp_0);
	uint16_t unmarshaled_ServerCommandPort_temp_1 = 0;
	unmarshaled_ServerCommandPort_temp_1 = marshaled.___ServerCommandPort_1;
	unmarshaled.set_ServerCommandPort_1(unmarshaled_ServerCommandPort_temp_1);
	uint16_t unmarshaled_ServerDataPort_temp_2 = 0;
	unmarshaled_ServerDataPort_temp_2 = marshaled.___ServerDataPort_2;
	unmarshaled.set_ServerDataPort_2(unmarshaled_ServerDataPort_temp_2);
	unmarshaled.set_ServerAddress_3(il2cpp_codegen_marshal_string_result(marshaled.___ServerAddress_3));
	unmarshaled.set_LocalAddress_4(il2cpp_codegen_marshal_string_result(marshaled.___LocalAddress_4));
	unmarshaled.set_MulticastAddress_5(il2cpp_codegen_marshal_string_result(marshaled.___MulticastAddress_5));
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sNatNetClientConnectParams
IL2CPP_EXTERN_C void sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshal_pinvoke_cleanup(sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___ServerAddress_3);
	marshaled.___ServerAddress_3 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___LocalAddress_4);
	marshaled.___LocalAddress_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___MulticastAddress_5);
	marshaled.___MulticastAddress_5 = NULL;
}
// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sNatNetClientConnectParams
IL2CPP_EXTERN_C void sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshal_com(const sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86& unmarshaled, sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshaled_com& marshaled)
{
	marshaled.___ConnectionType_0 = unmarshaled.get_ConnectionType_0();
	marshaled.___ServerCommandPort_1 = unmarshaled.get_ServerCommandPort_1();
	marshaled.___ServerDataPort_2 = unmarshaled.get_ServerDataPort_2();
	marshaled.___ServerAddress_3 = il2cpp_codegen_marshal_bstring(unmarshaled.get_ServerAddress_3());
	marshaled.___LocalAddress_4 = il2cpp_codegen_marshal_bstring(unmarshaled.get_LocalAddress_4());
	marshaled.___MulticastAddress_5 = il2cpp_codegen_marshal_bstring(unmarshaled.get_MulticastAddress_5());
}
IL2CPP_EXTERN_C void sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshal_com_back(const sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshaled_com& marshaled, sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86& unmarshaled)
{
	int32_t unmarshaled_ConnectionType_temp_0 = 0;
	unmarshaled_ConnectionType_temp_0 = marshaled.___ConnectionType_0;
	unmarshaled.set_ConnectionType_0(unmarshaled_ConnectionType_temp_0);
	uint16_t unmarshaled_ServerCommandPort_temp_1 = 0;
	unmarshaled_ServerCommandPort_temp_1 = marshaled.___ServerCommandPort_1;
	unmarshaled.set_ServerCommandPort_1(unmarshaled_ServerCommandPort_temp_1);
	uint16_t unmarshaled_ServerDataPort_temp_2 = 0;
	unmarshaled_ServerDataPort_temp_2 = marshaled.___ServerDataPort_2;
	unmarshaled.set_ServerDataPort_2(unmarshaled_ServerDataPort_temp_2);
	unmarshaled.set_ServerAddress_3(il2cpp_codegen_marshal_bstring_result(marshaled.___ServerAddress_3));
	unmarshaled.set_LocalAddress_4(il2cpp_codegen_marshal_bstring_result(marshaled.___LocalAddress_4));
	unmarshaled.set_MulticastAddress_5(il2cpp_codegen_marshal_bstring_result(marshaled.___MulticastAddress_5));
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sNatNetClientConnectParams
IL2CPP_EXTERN_C void sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshal_com_cleanup(sNatNetClientConnectParams_t34454C837524C30A42494B0B6C0C3A50531D0D86_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___ServerAddress_3);
	marshaled.___ServerAddress_3 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___LocalAddress_4);
	marshaled.___LocalAddress_4 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___MulticastAddress_5);
	marshaled.___MulticastAddress_5 = NULL;
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
// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sRigidBodyDescription
IL2CPP_EXTERN_C void sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshal_pinvoke(const sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B& unmarshaled, sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_string_fixed(unmarshaled.get_Name_0(), (char*)&marshaled.___Name_0, 256);
	marshaled.___Id_1 = unmarshaled.get_Id_1();
	marshaled.___ParentId_2 = unmarshaled.get_ParentId_2();
	marshaled.___OffsetX_3 = unmarshaled.get_OffsetX_3();
	marshaled.___OffsetY_4 = unmarshaled.get_OffsetY_4();
	marshaled.___OffsetZ_5 = unmarshaled.get_OffsetZ_5();
	marshaled.___MarkerCount_6 = unmarshaled.get_MarkerCount_6();
	marshaled.___MarkerPositions_7 = unmarshaled.get_MarkerPositions_7();
	marshaled.___MarkerRequiredLabels_8 = unmarshaled.get_MarkerRequiredLabels_8();
}
IL2CPP_EXTERN_C void sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshal_pinvoke_back(const sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshaled_pinvoke& marshaled, sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B& unmarshaled)
{
	unmarshaled.set_Name_0(il2cpp_codegen_marshal_string_result(marshaled.___Name_0));
	int32_t unmarshaled_Id_temp_1 = 0;
	unmarshaled_Id_temp_1 = marshaled.___Id_1;
	unmarshaled.set_Id_1(unmarshaled_Id_temp_1);
	int32_t unmarshaled_ParentId_temp_2 = 0;
	unmarshaled_ParentId_temp_2 = marshaled.___ParentId_2;
	unmarshaled.set_ParentId_2(unmarshaled_ParentId_temp_2);
	float unmarshaled_OffsetX_temp_3 = 0.0f;
	unmarshaled_OffsetX_temp_3 = marshaled.___OffsetX_3;
	unmarshaled.set_OffsetX_3(unmarshaled_OffsetX_temp_3);
	float unmarshaled_OffsetY_temp_4 = 0.0f;
	unmarshaled_OffsetY_temp_4 = marshaled.___OffsetY_4;
	unmarshaled.set_OffsetY_4(unmarshaled_OffsetY_temp_4);
	float unmarshaled_OffsetZ_temp_5 = 0.0f;
	unmarshaled_OffsetZ_temp_5 = marshaled.___OffsetZ_5;
	unmarshaled.set_OffsetZ_5(unmarshaled_OffsetZ_temp_5);
	int32_t unmarshaled_MarkerCount_temp_6 = 0;
	unmarshaled_MarkerCount_temp_6 = marshaled.___MarkerCount_6;
	unmarshaled.set_MarkerCount_6(unmarshaled_MarkerCount_temp_6);
	intptr_t unmarshaled_MarkerPositions_temp_7;
	memset((&unmarshaled_MarkerPositions_temp_7), 0, sizeof(unmarshaled_MarkerPositions_temp_7));
	unmarshaled_MarkerPositions_temp_7 = marshaled.___MarkerPositions_7;
	unmarshaled.set_MarkerPositions_7(unmarshaled_MarkerPositions_temp_7);
	intptr_t unmarshaled_MarkerRequiredLabels_temp_8;
	memset((&unmarshaled_MarkerRequiredLabels_temp_8), 0, sizeof(unmarshaled_MarkerRequiredLabels_temp_8));
	unmarshaled_MarkerRequiredLabels_temp_8 = marshaled.___MarkerRequiredLabels_8;
	unmarshaled.set_MarkerRequiredLabels_8(unmarshaled_MarkerRequiredLabels_temp_8);
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sRigidBodyDescription
IL2CPP_EXTERN_C void sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshal_pinvoke_cleanup(sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sRigidBodyDescription
IL2CPP_EXTERN_C void sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshal_com(const sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B& unmarshaled, sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_string_fixed(unmarshaled.get_Name_0(), (char*)&marshaled.___Name_0, 256);
	marshaled.___Id_1 = unmarshaled.get_Id_1();
	marshaled.___ParentId_2 = unmarshaled.get_ParentId_2();
	marshaled.___OffsetX_3 = unmarshaled.get_OffsetX_3();
	marshaled.___OffsetY_4 = unmarshaled.get_OffsetY_4();
	marshaled.___OffsetZ_5 = unmarshaled.get_OffsetZ_5();
	marshaled.___MarkerCount_6 = unmarshaled.get_MarkerCount_6();
	marshaled.___MarkerPositions_7 = unmarshaled.get_MarkerPositions_7();
	marshaled.___MarkerRequiredLabels_8 = unmarshaled.get_MarkerRequiredLabels_8();
}
IL2CPP_EXTERN_C void sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshal_com_back(const sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshaled_com& marshaled, sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B& unmarshaled)
{
	unmarshaled.set_Name_0(il2cpp_codegen_marshal_string_result(marshaled.___Name_0));
	int32_t unmarshaled_Id_temp_1 = 0;
	unmarshaled_Id_temp_1 = marshaled.___Id_1;
	unmarshaled.set_Id_1(unmarshaled_Id_temp_1);
	int32_t unmarshaled_ParentId_temp_2 = 0;
	unmarshaled_ParentId_temp_2 = marshaled.___ParentId_2;
	unmarshaled.set_ParentId_2(unmarshaled_ParentId_temp_2);
	float unmarshaled_OffsetX_temp_3 = 0.0f;
	unmarshaled_OffsetX_temp_3 = marshaled.___OffsetX_3;
	unmarshaled.set_OffsetX_3(unmarshaled_OffsetX_temp_3);
	float unmarshaled_OffsetY_temp_4 = 0.0f;
	unmarshaled_OffsetY_temp_4 = marshaled.___OffsetY_4;
	unmarshaled.set_OffsetY_4(unmarshaled_OffsetY_temp_4);
	float unmarshaled_OffsetZ_temp_5 = 0.0f;
	unmarshaled_OffsetZ_temp_5 = marshaled.___OffsetZ_5;
	unmarshaled.set_OffsetZ_5(unmarshaled_OffsetZ_temp_5);
	int32_t unmarshaled_MarkerCount_temp_6 = 0;
	unmarshaled_MarkerCount_temp_6 = marshaled.___MarkerCount_6;
	unmarshaled.set_MarkerCount_6(unmarshaled_MarkerCount_temp_6);
	intptr_t unmarshaled_MarkerPositions_temp_7;
	memset((&unmarshaled_MarkerPositions_temp_7), 0, sizeof(unmarshaled_MarkerPositions_temp_7));
	unmarshaled_MarkerPositions_temp_7 = marshaled.___MarkerPositions_7;
	unmarshaled.set_MarkerPositions_7(unmarshaled_MarkerPositions_temp_7);
	intptr_t unmarshaled_MarkerRequiredLabels_temp_8;
	memset((&unmarshaled_MarkerRequiredLabels_temp_8), 0, sizeof(unmarshaled_MarkerRequiredLabels_temp_8));
	unmarshaled_MarkerRequiredLabels_temp_8 = marshaled.___MarkerRequiredLabels_8;
	unmarshaled.set_MarkerRequiredLabels_8(unmarshaled_MarkerRequiredLabels_temp_8);
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sRigidBodyDescription
IL2CPP_EXTERN_C void sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshal_com_cleanup(sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshaled_com& marshaled)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sSkeletonDescription
IL2CPP_EXTERN_C void sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB_marshal_pinvoke(const sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB& unmarshaled, sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_string_fixed(unmarshaled.get_Name_0(), (char*)&marshaled.___Name_0, 256);
	marshaled.___Id_1 = unmarshaled.get_Id_1();
	marshaled.___RigidBodyCount_2 = unmarshaled.get_RigidBodyCount_2();
	if (unmarshaled.get_RigidBodies_3() != NULL)
	{
		if (200 > (unmarshaled.get_RigidBodies_3())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(200); i++)
		{
			sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshal_pinvoke((unmarshaled.get_RigidBodies_3())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___RigidBodies_3)[i]);
		}
	}
}
IL2CPP_EXTERN_C void sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB_marshal_pinvoke_back(const sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB_marshaled_pinvoke& marshaled, sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sRigidBodyDescriptionU5BU5D_tFF98B2BAC77AD36C05964568CE1C2F0C475E7968_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_Name_0(il2cpp_codegen_marshal_string_result(marshaled.___Name_0));
	int32_t unmarshaled_Id_temp_1 = 0;
	unmarshaled_Id_temp_1 = marshaled.___Id_1;
	unmarshaled.set_Id_1(unmarshaled_Id_temp_1);
	int32_t unmarshaled_RigidBodyCount_temp_2 = 0;
	unmarshaled_RigidBodyCount_temp_2 = marshaled.___RigidBodyCount_2;
	unmarshaled.set_RigidBodyCount_2(unmarshaled_RigidBodyCount_temp_2);
	unmarshaled.set_RigidBodies_3(reinterpret_cast<sRigidBodyDescriptionU5BU5D_tFF98B2BAC77AD36C05964568CE1C2F0C475E7968*>((sRigidBodyDescriptionU5BU5D_tFF98B2BAC77AD36C05964568CE1C2F0C475E7968*)SZArrayNew(sRigidBodyDescriptionU5BU5D_tFF98B2BAC77AD36C05964568CE1C2F0C475E7968_il2cpp_TypeInfo_var, 200)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(200); i++)
	{
		sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B  _marshaled____RigidBodies_3_i__unmarshaled;
		memset((&_marshaled____RigidBodies_3_i__unmarshaled), 0, sizeof(_marshaled____RigidBodies_3_i__unmarshaled));
		sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshal_pinvoke_back((marshaled.___RigidBodies_3)[i], _marshaled____RigidBodies_3_i__unmarshaled);
		(unmarshaled.get_RigidBodies_3())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____RigidBodies_3_i__unmarshaled);
	}
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sSkeletonDescription
IL2CPP_EXTERN_C void sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB_marshal_pinvoke_cleanup(sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB_marshaled_pinvoke& marshaled)
{
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(200); i++)
	{
		sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshal_pinvoke_cleanup((marshaled.___RigidBodies_3)[i]);
	}
}


// Conversion methods for marshalling of: NaturalPoint.NatNetLib.sSkeletonDescription
IL2CPP_EXTERN_C void sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB_marshal_com(const sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB& unmarshaled, sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_string_fixed(unmarshaled.get_Name_0(), (char*)&marshaled.___Name_0, 256);
	marshaled.___Id_1 = unmarshaled.get_Id_1();
	marshaled.___RigidBodyCount_2 = unmarshaled.get_RigidBodyCount_2();
	if (unmarshaled.get_RigidBodies_3() != NULL)
	{
		if (200 > (unmarshaled.get_RigidBodies_3())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."), NULL);
		}

		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(200); i++)
		{
			sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshal_com((unmarshaled.get_RigidBodies_3())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___RigidBodies_3)[i]);
		}
	}
}
IL2CPP_EXTERN_C void sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB_marshal_com_back(const sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB_marshaled_com& marshaled, sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sRigidBodyDescriptionU5BU5D_tFF98B2BAC77AD36C05964568CE1C2F0C475E7968_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_Name_0(il2cpp_codegen_marshal_string_result(marshaled.___Name_0));
	int32_t unmarshaled_Id_temp_1 = 0;
	unmarshaled_Id_temp_1 = marshaled.___Id_1;
	unmarshaled.set_Id_1(unmarshaled_Id_temp_1);
	int32_t unmarshaled_RigidBodyCount_temp_2 = 0;
	unmarshaled_RigidBodyCount_temp_2 = marshaled.___RigidBodyCount_2;
	unmarshaled.set_RigidBodyCount_2(unmarshaled_RigidBodyCount_temp_2);
	unmarshaled.set_RigidBodies_3(reinterpret_cast<sRigidBodyDescriptionU5BU5D_tFF98B2BAC77AD36C05964568CE1C2F0C475E7968*>((sRigidBodyDescriptionU5BU5D_tFF98B2BAC77AD36C05964568CE1C2F0C475E7968*)SZArrayNew(sRigidBodyDescriptionU5BU5D_tFF98B2BAC77AD36C05964568CE1C2F0C475E7968_il2cpp_TypeInfo_var, 200)));
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(200); i++)
	{
		sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B  _marshaled____RigidBodies_3_i__unmarshaled;
		memset((&_marshaled____RigidBodies_3_i__unmarshaled), 0, sizeof(_marshaled____RigidBodies_3_i__unmarshaled));
		sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshal_com_back((marshaled.___RigidBodies_3)[i], _marshaled____RigidBodies_3_i__unmarshaled);
		(unmarshaled.get_RigidBodies_3())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____RigidBodies_3_i__unmarshaled);
	}
}
// Conversion method for clean up from marshalling of: NaturalPoint.NatNetLib.sSkeletonDescription
IL2CPP_EXTERN_C void sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB_marshal_com_cleanup(sSkeletonDescription_t7276046423248B00772D9A35B8FE0E34C6990FAB_marshaled_com& marshaled)
{
	for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(200); i++)
	{
		sRigidBodyDescription_tDF453FD5A0F09F342696C67FE5B2CF5F62103E5B_marshal_com_cleanup((marshaled.___RigidBodies_3)[i]);
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
// System.Void NaturalPoint.NatNetLib.NatNetClient/DataDescriptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataDescriptions__ctor_mF1113317D32AD963E2FB6783381397859B50E0A8 (DataDescriptions_tBBA51C420CC94C88F576A8452D2C8AF5941E5120 * __this, const RuntimeMethod* method)
{
	{
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
// System.IntPtr NaturalPoint.NatNetLib.NatNetClient/NativeFrameReceivedEventArgs::get_NativeFramePointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeFrameReceivedEventArgs_get_NativeFramePointer_m2CE80DF1962895483102200F89ADDCA1174DD099 (NativeFrameReceivedEventArgs_t915E8504219907B33B999E6A040590C57B2DF4FF * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return m_nativeFrame;
		intptr_t L_0 = __this->get_m_nativeFrame_2();
		V_0 = (intptr_t)L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		intptr_t L_1 = V_0;
		return (intptr_t)L_1;
	}
}
// System.Void NaturalPoint.NatNetLib.NatNetClient/NativeFrameReceivedEventArgs::set_NativeFramePointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFrameReceivedEventArgs_set_NativeFramePointer_m8A577AD325F79D2C04012D9E4BE503D363D8DE51 (NativeFrameReceivedEventArgs_t915E8504219907B33B999E6A040590C57B2DF4FF * __this, intptr_t ___value0, const RuntimeMethod* method)
{
	{
		// m_marshaledFrame = null;
		Nullable_1_t8FA175848429A9829285EAB0E59E300CA5C78389 * L_0 = __this->get_address_of_m_marshaledFrame_1();
		il2cpp_codegen_initobj(L_0, sizeof(Nullable_1_t8FA175848429A9829285EAB0E59E300CA5C78389 ));
		// m_nativeFrame = value;
		intptr_t L_1 = ___value0;
		__this->set_m_nativeFrame_2((intptr_t)L_1);
		// }
		return;
	}
}
// NaturalPoint.NatNetLib.sFrameOfMocapData NaturalPoint.NatNetLib.NatNetClient/NativeFrameReceivedEventArgs::get_MarshaledFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33  NativeFrameReceivedEventArgs_get_MarshaledFrame_m0A7134423B0A567DA938E2A4009F7D62048E37BA (NativeFrameReceivedEventArgs_t915E8504219907B33B999E6A040590C57B2DF4FF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m2384399C33D8259B11A61416F8EE82B4C7A929F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m03143D2D5185B779A4B75F58148CD1A6C8E870DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m12438E9AF44A0EA7806AB39FCB72AF6B983FC3D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if ( m_marshaledFrame.HasValue == false )
		Nullable_1_t8FA175848429A9829285EAB0E59E300CA5C78389 * L_0 = __this->get_address_of_m_marshaledFrame_1();
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m03143D2D5185B779A4B75F58148CD1A6C8E870DD_inline((Nullable_1_t8FA175848429A9829285EAB0E59E300CA5C78389 *)L_0, /*hidden argument*/Nullable_1_get_HasValue_m03143D2D5185B779A4B75F58148CD1A6C8E870DD_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		// m_marshaledFrame = (sFrameOfMocapData)Marshal.PtrToStructure( NativeFramePointer, typeof( sFrameOfMocapData ) );
		intptr_t L_3;
		L_3 = NativeFrameReceivedEventArgs_get_NativeFramePointer_m2CE80DF1962895483102200F89ADDCA1174DD099(__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		RuntimeObject * L_6;
		L_6 = Marshal_PtrToStructure_m5FA7EF86B49F005564D15359A6C10E4C7526F4A3((intptr_t)L_3, L_5, /*hidden argument*/NULL);
		Nullable_1_t8FA175848429A9829285EAB0E59E300CA5C78389  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Nullable_1__ctor_m2384399C33D8259B11A61416F8EE82B4C7A929F7((&L_7), ((*(sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33 *)((sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33 *)UnBox(L_6, sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33_il2cpp_TypeInfo_var)))), /*hidden argument*/Nullable_1__ctor_m2384399C33D8259B11A61416F8EE82B4C7A929F7_RuntimeMethod_var);
		__this->set_m_marshaledFrame_1(L_7);
	}

IL_003a:
	{
		// return m_marshaledFrame.Value;
		Nullable_1_t8FA175848429A9829285EAB0E59E300CA5C78389 * L_8 = __this->get_address_of_m_marshaledFrame_1();
		sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33  L_9;
		L_9 = Nullable_1_get_Value_m12438E9AF44A0EA7806AB39FCB72AF6B983FC3D4((Nullable_1_t8FA175848429A9829285EAB0E59E300CA5C78389 *)L_8, /*hidden argument*/Nullable_1_get_Value_m12438E9AF44A0EA7806AB39FCB72AF6B983FC3D4_RuntimeMethod_var);
		V_1 = L_9;
		goto IL_0048;
	}

IL_0048:
	{
		// }
		sFrameOfMocapData_t4096E8277223D6A026491931D7D857B08BF64D33  L_10 = V_1;
		return L_10;
	}
}
// System.Void NaturalPoint.NatNetLib.NatNetClient/NativeFrameReceivedEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFrameReceivedEventArgs__ctor_mBE3078C2BF39CBCA0F67EEE8900A02823E1C77D8 (NativeFrameReceivedEventArgs_t915E8504219907B33B999E6A040590C57B2DF4FF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NatNetClient_set_Connected_m60CFB52771DC41FF94737638968D0F20CD288391_inline (NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool Connected { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CConnectedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NatNetClient_get_Connected_m80378823D6DED924C378CBAAC662B6C313395356_inline (NatNetClient_t910E19557C858AF35256EB8F8AEF65F7515BF1AF * __this, const RuntimeMethod* method)
{
	{
		// public bool Connected { get; private set; }
		bool L_0 = __this->get_U3CConnectedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m03143D2D5185B779A4B75F58148CD1A6C8E870DD_gshared_inline (Nullable_1_t8FA175848429A9829285EAB0E59E300CA5C78389 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
