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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Action`1<Photon.Voice.FrameOut`1<System.Single>>
struct Action_1_t0B1D8E060FEAA27D51B6AD68D56361DDCF6D383F;
// System.Action`1<System.Int16[]>
struct Action_1_t36DA73B27593F7623AE0D8CA71F9F3412BB9E635;
// System.Action`1<System.Single[]>
struct Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`2<System.ArraySegment`1<System.Byte>,Photon.Voice.FrameFlags>
struct Action_2_t4203FA193D835C197097DFF2303E7F02F8DBA45D;
// System.Action`3<System.Int32,System.IntPtr,System.Int32>
struct Action_3_t897FF49CFBEBC3E519C4E2672B4EA0BA7B40DBA3;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>
struct Dictionary_2_t4A0CF6A7FCEF18F04F5F245859A861E8BE4BFE75;
// System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.LocalVoice>
struct Dictionary_2_tA7F6D73676809D9EF54381D374C152C8891CB7AA;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A;
// System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>
struct Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0;
// System.Collections.Generic.Dictionary`2<Photon.Voice.Codec,System.Int32>
struct Dictionary_2_t29378254DA2EF1DF294AE5CD1E73420D108D8867;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Photon.Voice.LocalVoice>>
struct Dictionary_2_t173D966D87D699333F86F26576B4DEF9B46BFB9A;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.IOS.AudioInPusher>
struct Dictionary_2_tCE074E9B6B600C4D66DE2C4F6202ABAD4B751BA1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// Photon.Voice.OpusCodec/Encoder`1<System.Int16>
struct Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2;
// Photon.Voice.OpusCodec/Encoder`1<System.Single>
struct Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620;
// Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>
struct FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2;
// Photon.Voice.FactoryPrimitiveArrayPool`1<System.Single>
struct FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63;
// Photon.Voice.FrameOut`1<System.Int16>
struct FrameOut_1_t360F685F3D2F100DC469100D32F8A5B415EC536E;
// Photon.Voice.FrameOut`1<System.Single>
struct FrameOut_1_t2E75A31E49C5BB56BEAA73766430E3B7F2167044;
// Photon.Voice.Framer`1<System.Int16>
struct Framer_1_t5FBBEF15B9AB70C75546947448D1FFC19D4F7978;
// Photon.Voice.Framer`1<System.Single>
struct Framer_1_t04F378EE94C8949DC3D5E53C79B71D0E38A18623;
// System.Func`2<System.Int16,System.Int16>
struct Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D;
// System.Func`2<Photon.Voice.LocalVoice,System.Boolean>
struct Func_2_tB88CF4C4A2B2A48B1412626D3AEDEB9C7F289CD1;
// System.Func`2<Photon.Voice.LocalVoice,Photon.Voice.Codec>
struct Func_2_t9DAF740F320CC3CC70B4BF418FA15DD4C0C66D0A;
// System.Collections.Generic.IEnumerator`1<Photon.Voice.RemoteVoiceInfo>
struct IEnumerator_1_t24E6ABC30A0F340FA04F70A73950A148AD18934B;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t95750B1CF3F7626EC7AB30893A86E08F445DD75D;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,Photon.Voice.RemoteVoice>
struct KeyCollection_t6CA20A53ED328EFED712FE67FCEF2F44E7E1B4FB;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct KeyCollection_t88374B1D559D72E971E8F59BEAD2752BC5E908B5;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Photon.Voice.IOS.AudioInPusher>
struct KeyCollection_tECB996190883A9BEBF36B1CDF1F2E3BA64B01BE8;
// Photon.Voice.AudioUtil/LevelMeter`1<System.Int16>
struct LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3;
// Photon.Voice.AudioUtil/LevelMeter`1<System.Single>
struct LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5;
// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<System.Int16>>
struct List_1_t2B969941D952B3C04034F2CC42555A20E416F5EC;
// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<System.Single>>
struct List_1_tB8681DE57AE297E09DCA76242C38B88CB52192E5;
// Photon.Voice.LocalVoiceAudio`1<System.Int16>
struct LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8;
// Photon.Voice.LocalVoiceAudio`1<System.Single>
struct LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238;
// Photon.Voice.LocalVoiceFramed`1<System.Int16>
struct LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664;
// Photon.Voice.LocalVoiceFramed`1<System.Single>
struct LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0;
// Photon.Voice.ObjectFactory`2<System.Single[],System.Int32>
struct ObjectFactory_2_tB32E7297C589D922F2873BC3A95273E248C78375;
// Photon.Voice.PrimitiveArrayPool`1<System.Int16>
struct PrimitiveArrayPool_1_t32EAE13B1A603062BB2FBDD9D35F937DD34DD485;
// Photon.Voice.PrimitiveArrayPool`1<System.Single>
struct PrimitiveArrayPool_1_tC69A4367DAED259130664C75DBC74EBA50D1FA79;
// System.Collections.Generic.Queue`1<System.Int16[]>
struct Queue_1_t4A2620F8C38A3EF76782E492059C52B76FCF17D3;
// System.Collections.Generic.Queue`1<System.Single[]>
struct Queue_1_t865B9E26DEFD5908AB12DEAECF70EC4320C7D16E;
// System.Collections.Generic.Queue`1<Photon.Voice.FrameBuffer>
struct Queue_1_t45D1136463723E6F4A40C4DC038CA2F6908264B8;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,Photon.Voice.RemoteVoice>
struct ValueCollection_tC2E6D99B8A703A48AC16E7E35F20E3F66157021A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct ValueCollection_t50CCCC961D2BBEA2D92B50D6CA1B0FB0298B6C9D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Photon.Voice.IOS.AudioInPusher>
struct ValueCollection_t0762687C1FDC710D34ECD40CD277FA894693A1CE;
// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Int16>
struct VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3;
// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Single>
struct VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E;
// Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>
struct VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4;
// Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>
struct VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC;
// System.Collections.Generic.Dictionary`2/Entry<System.Byte,Photon.Voice.RemoteVoice>[]
struct EntryU5BU5D_t341F71F8C897485D7CB857448D4554EB25B99913;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>[]
struct EntryU5BU5D_tF211B265416025C253A1BB2CB5B87FB81E6A2A39;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Photon.Voice.IOS.AudioInPusher>[]
struct EntryU5BU5D_t9532B134019DD143908C8D2ECD876654851B9EDE;
// Photon.Voice.IOS.AudioSessionCategoryOption[]
struct AudioSessionCategoryOptionU5BU5D_t2A1DE090F6469C030DEF35A1898A4E58CB10018F;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// Photon.Voice.IOS.AudioInPusher
struct AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD;
// Photon.Voice.IOS.AudioInReader
struct AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Photon.Voice.IDecoder
struct IDecoder_t44AC81916D0D3FA60B33E6D2D98B8B0202342302;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IDisposable
struct IDisposable_t099785737FC6A1E3699919A94109383715A8D807;
// Photon.Voice.IEncoder
struct IEncoder_tA42B4BA524A255A892B8E21DB5A2B7E7D4867995;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Photon.Voice.ILogger
struct ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA;
// Photon.Voice.IServiceable
struct IServiceable_t3E0661D0BF2CE8495FAA0AE754176B0B7A6759E1;
// Photon.Voice.IVoiceTransport
struct IVoiceTransport_tA55914265033EC2D2D76602F02EF7FDEA06032E4;
// Photon.Voice.LocalVoice
struct LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A;
// POpusCodec.OpusEncoder
struct OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823;
// POpusCodec.OpusException
struct OpusException_t1A61902C00340ACDC9D674DE351B1C666CCD1573;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// Photon.Voice.RemoteVoice
struct RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87;
// Photon.Voice.RemoteVoiceInfo
struct RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Photon.Voice.SpacingProfile
struct SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68;
// System.String
struct String_t;
// System.Type
struct Type_t;
// Photon.Voice.VoiceClient
struct VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// POpusCodec.Wrapper
struct Wrapper_t02FC08D954149919540DD64B213654C82EED4DEC;
// Photon.Voice.Unity.AndroidAudioInAEC/DataCallback
struct DataCallback_t309F2AE294E34778F926EDB79F958D6EBCC73100;
// Photon.Voice.IOS.AudioInChangeNotifier/CallbackDelegate
struct CallbackDelegate_t88EA3BC17AD939181ADBC67CEDFF0C3CF6BEE417;
// Photon.Voice.IOS.AudioInChangeNotifier/MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t318D224F1E35043F0D8FF4F90AA4B841569E092E;
// Photon.Voice.IOS.AudioInPusher/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t8C27BB38028CD866DA8C6A7227FA67DC356319E9;
// Photon.Voice.IOS.AudioInPusher/CallbackDelegate
struct CallbackDelegate_tF714239823DC720B21370BF84E751276BFAE89B7;
// Photon.Voice.IOS.AudioInReader/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t05B9D84BFD8FFDFDB7DEB62E1562339B0FF2862D;
// Photon.Voice.AudioOutDelayControl/PlayDelayConfig
struct PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7;
// Photon.Voice.AudioUtil/LevelMeterDummy
struct LevelMeterDummy_tD005D3282BE1A5CD6D829F547A2CBF6BC916D70B;
// Photon.Voice.AudioUtil/LevelMeterFloat
struct LevelMeterFloat_t760D3DBB26D5D489891946710E1711FF9A262455;
// Photon.Voice.AudioUtil/LevelMeterShort
struct LevelMeterShort_t49A5B495010FBAC23F91CE71A7290FABE50EB4B7;
// Photon.Voice.AudioUtil/VoiceDetectorDummy
struct VoiceDetectorDummy_t13F7DD87648F4DB8C38FCBABC98DBCC270D3A5D0;
// Photon.Voice.AudioUtil/VoiceDetectorFloat
struct VoiceDetectorFloat_t07D26837C6B174754CB59564212B09934653EEFD;
// Photon.Voice.AudioUtil/VoiceDetectorShort
struct VoiceDetectorShort_tEB57780C72B1E5D60E7584C80B244E40B4C0DFDB;
// Photon.Voice.LoadBalancingTransport/<>c
struct U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B;
// Photon.Voice.OpusCodec/EncoderFloat
struct EncoderFloat_t59F828BE852C2C5049643A7DA8A76AE0DFCD35D8;
// Photon.Voice.OpusCodec/EncoderShort
struct EncoderShort_t1B066515A9C7163E7B94B8FEA3E07B88303D687B;
// Photon.Voice.OpusCodec/Util
struct Util_tB79F7CAD5C8FC71AB7A0EAF51F9E9F9F7B4E2E3E;
// Photon.Voice.RawCodec/ShortToFloat
struct ShortToFloat_tD1EA39685A18854B48A79FF97C114CCCCF4E1F82;
// Photon.Voice.SpacingProfile/<>c
struct U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15;
// Photon.Voice.VoiceClient/<>c
struct U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7;
// Photon.Voice.VoiceClient/<>c__DisplayClass49_0
struct U3CU3Ec__DisplayClass49_0_tB34D58F85F937CA72D917F5CD92F8E22D1729EFD;
// Photon.Voice.VoiceClient/<>c__DisplayClass52_0
struct U3CU3Ec__DisplayClass52_0_t53D9AE5ACB0CE6892061886C02B70EA0C44D4CC4;
// Photon.Voice.VoiceClient/<>c__DisplayClass52_1
struct U3CU3Ec__DisplayClass52_1_t023DBC1F8CD08F7D8DB30EC31652B12251379E68;
// Photon.Voice.VoiceClient/<>c__DisplayClass52_2
struct U3CU3Ec__DisplayClass52_2_t0CD3E610512D2EBA352D8BC6516D4F4D619D570D;
// Photon.Voice.VoiceClient/<>c__DisplayClass52_3
struct U3CU3Ec__DisplayClass52_3_t5C8BFE229FCE982F8650F0874CB455C6CFC32D3C;
// Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40
struct U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B;
// Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate
struct RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13;

IL2CPP_EXTERN_C RuntimeClass* Action_3_t897FF49CFBEBC3E519C4E2672B4EA0BA7B40DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Channels_t43E6EDAF5EC70F2F6C5181AF20CABA6C78A7D137_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameOut_1_t2E75A31E49C5BB56BEAA73766430E3B7F2167044_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpusApplicationType_tB8ADA34C34C04D074BB25ADF80F5528233D1CBE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpusCtlGetRequest_t049CC5B0BFF8AB8EB74538A9E0B44A02EEAE4942_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpusCtlSetRequest_t0E26A969D2CF66B2E4BD1245BC62EEC012ADA035_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpusException_t1A61902C00340ACDC9D674DE351B1C666CCD1573_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SamplingRate_tB35955BC7837DAB0BF0F4D73CAA2BAFD47646F51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral17B18DAA2E5F590F3527988AF3B31BFB53EA0EC2;
IL2CPP_EXTERN_C String_t* _stringLiteral27B7E8210FDB3F4A5E56C36B25D3777E07E4552C;
IL2CPP_EXTERN_C String_t* _stringLiteral2A7607A8D9CB052F456827F55F9736275BC685BC;
IL2CPP_EXTERN_C String_t* _stringLiteral2D290331D940C3D6D42EC70B1322FCCB67FDD0F2;
IL2CPP_EXTERN_C String_t* _stringLiteral335EBC24DB6EF912D16346AAD6E280C88C65D66A;
IL2CPP_EXTERN_C String_t* _stringLiteral4F7A190FCA5324777736687124641EB66C78C888;
IL2CPP_EXTERN_C String_t* _stringLiteral652644FEF0564E9346EB8F5F964757CF774FA1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral736977A8DC43E09C147CAFC8536005DA4284D6C8;
IL2CPP_EXTERN_C String_t* _stringLiteral7FECD1E35EAF7DA64DCE5DBA132AEE7E7CAC39C8;
IL2CPP_EXTERN_C String_t* _stringLiteral87611C547FCC3083E7DAFD5589BDA6DC1F2B9D53;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral91D12B2C38786B38DCDEB6D286A11596AC34E92C;
IL2CPP_EXTERN_C String_t* _stringLiteralA12A5890EB243359E97EB2D1526E2F3116ED4181;
IL2CPP_EXTERN_C String_t* _stringLiteralAD9FE087CEC5F90162F1D5E08A0D73EE7993C85E;
IL2CPP_EXTERN_C String_t* _stringLiteralB077F824E674FA6BF9233CCAE7339D3ACFA9BB46;
IL2CPP_EXTERN_C String_t* _stringLiteralD12049269E84B94ADC67D8C867306BAEEB90416C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE8F7BF4BDF48B06DD1CFBC52575BE0CD918C4973;
IL2CPP_EXTERN_C String_t* _stringLiteralF3F831EAD0E0AAAF7E07EC75A7133B72CB231F06;
IL2CPP_EXTERN_C String_t* _stringLiteralF58FD0E9D30863F8E935535EF48D09579499A0A1;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m951D1B4CD86FEF66370C92B87EF8A32203ACD5D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mEF62A93226E47F29D311582E0677EA8E37573204_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3__ctor_mFC8BD001C2B9360FB3DF14F796A628EAC4D81F55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioInPusher_nativePushCallback_m6BB35B4A42F7CF6FD7AD4CE24E7C1EE1DDDD737D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB8F94E0A244F660446D4ADAB7A62FF7F391D3417_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m7FDCA22BD761E723E00B8926B1F30557331BFFEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mAF78EC82F6811AFB6068D09343E164B970681C1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Encoder_1__ctor_m41B7B1A903690DC74302D619DC29D6A7E6741578_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Encoder_1__ctor_m9077E63DD228B223B7033E63ACA21B768789E119_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mDEFCDED916603553DBB44F2363E844D232B884D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFA11765DB3B1C2D8B904790C9B2DA123D1C604C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m25A4E8E566B755F3B5D4E285035BEA7B83ED2AAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m763AC53790967C7503AE2B3D581CEA882C6CE3DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD102ED220D0F16567214E8E5C69A3D8146D5D8AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF633D50299E68934066A6E44C1DC7504E92ABCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FactoryPrimitiveArrayPool_1_New_m4B62F1E511B7854408A14C347007968C092B4142_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FactoryPrimitiveArrayPool_1_New_mA7DF99EB941029EF5445393AFF981A7B6919711F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FrameOut_1__ctor_mE64EB72A44080E0E3114CAA125FA2C871A62D67F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FrameOut_1_get_Buf_mBBFA29E661AF47B93BF8300002DFD63CDAD854B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA5CEB73F2786970AE724DED666ACEA0BA9954B6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC3EC4F0ADB2359D5B5386277C54A9A5B5C2F5315_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2AB6475270004FDA7585570A8A7B1898C5942513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mF1D2B2C146EB355F5C3191E4A1C4C2034249BAA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LevelMeter_1__ctor_m975D1225718E7A4B76854FE92510EAB8E7911003_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LevelMeter_1__ctor_mEEB16B4E16393F3FBF8011F032CB5B27935E604A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalVoiceFramed_1_get_BufferFactory_m55FFB4181F0CF749B62E8D81C7F962EF460BFEC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalVoiceFramed_1_get_BufferFactory_mE185781006A94F4245FD1FD62C2B28E16D719738_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_IEnumerator_Reset_m5CFE226846C94BC15269EA17FCADEB64A95CBA4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDetector_1__ctor_m19B47107FDBA28D2C419B78D712537EF1A707E2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDetector_1__ctor_m7C6E706C7F37F8989BA63C16BEF0A7509022FA05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDetector_1_get_Detected_m2556CDCC35307D5A1AE5D0573806C4E1C4C0F5C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDetector_1_get_Detected_m9E69A8BECBFAC14EFB2894CDC8F070B53D2CC4C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDetector_1_get_On_m122CD7F20E577E49D20483CC02FD7CD67F1B6368_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDetector_1_get_On_mAA630DFE422E1D5263686DDCE57F6E26C4DF8AB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDetector_1_set_Detected_m13E95CCF06BB947C56591D1DB287436309D074AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceDetector_1_set_Detected_m7324B94BCE8D957581F1B8520EC8B233A67673D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Wrapper_HandleStatusCode_mBF7829238C148DAE9C3B897D84B47E64276C509D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Wrapper_get_opus_decoder_ctl_m9497BD2DFC1BB465D790A264C57AA25DB21C9DDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Wrapper_get_opus_encoder_ctl_m7C98E32FC1605D0693690FB94C33244C06A7A05B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Wrapper_opus_decode_m2D4FC825F80F7C7BBBCC59E220F21A7864F0E052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Wrapper_opus_decode_mE8CFDDD5365D40D8E9B9B06A780AD826BB5C57AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Wrapper_opus_decoder_create_m0A67B690D6AD0993A6BF896031AA286195F9F2EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Wrapper_opus_encode_m0F56B49B503C68E4BF4C20CA0E8177463C482EAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Wrapper_opus_encode_mE03DF089C18199717295D7CE5703674721E3525F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Wrapper_opus_encoder_create_m732A61C3B0A9B180D49419EFFEB1A1F28B07E942_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Wrapper_set_opus_decoder_ctl_m8150E7FB6BDC1C7ABB249C97855603EA584D7DAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Wrapper_set_opus_encoder_ctl_m55D922C5ACFAFE4FC35F34AEF469B4B5CC1101FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* SamplingRate_tB35955BC7837DAB0BF0F4D73CAA2BAFD47646F51_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>
struct Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t341F71F8C897485D7CB857448D4554EB25B99913* ___entries_1;
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
	KeyCollection_t6CA20A53ED328EFED712FE67FCEF2F44E7E1B4FB * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tC2E6D99B8A703A48AC16E7E35F20E3F66157021A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___entries_1)); }
	inline EntryU5BU5D_t341F71F8C897485D7CB857448D4554EB25B99913* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t341F71F8C897485D7CB857448D4554EB25B99913** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t341F71F8C897485D7CB857448D4554EB25B99913* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___keys_7)); }
	inline KeyCollection_t6CA20A53ED328EFED712FE67FCEF2F44E7E1B4FB * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t6CA20A53ED328EFED712FE67FCEF2F44E7E1B4FB ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t6CA20A53ED328EFED712FE67FCEF2F44E7E1B4FB * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ___values_8)); }
	inline ValueCollection_tC2E6D99B8A703A48AC16E7E35F20E3F66157021A * get_values_8() const { return ___values_8; }
	inline ValueCollection_tC2E6D99B8A703A48AC16E7E35F20E3F66157021A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tC2E6D99B8A703A48AC16E7E35F20E3F66157021A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tF211B265416025C253A1BB2CB5B87FB81E6A2A39* ___entries_1;
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
	KeyCollection_t88374B1D559D72E971E8F59BEAD2752BC5E908B5 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t50CCCC961D2BBEA2D92B50D6CA1B0FB0298B6C9D * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___entries_1)); }
	inline EntryU5BU5D_tF211B265416025C253A1BB2CB5B87FB81E6A2A39* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tF211B265416025C253A1BB2CB5B87FB81E6A2A39** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tF211B265416025C253A1BB2CB5B87FB81E6A2A39* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___keys_7)); }
	inline KeyCollection_t88374B1D559D72E971E8F59BEAD2752BC5E908B5 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t88374B1D559D72E971E8F59BEAD2752BC5E908B5 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t88374B1D559D72E971E8F59BEAD2752BC5E908B5 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ___values_8)); }
	inline ValueCollection_t50CCCC961D2BBEA2D92B50D6CA1B0FB0298B6C9D * get_values_8() const { return ___values_8; }
	inline ValueCollection_t50CCCC961D2BBEA2D92B50D6CA1B0FB0298B6C9D ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t50CCCC961D2BBEA2D92B50D6CA1B0FB0298B6C9D * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.IOS.AudioInPusher>
struct Dictionary_2_tCE074E9B6B600C4D66DE2C4F6202ABAD4B751BA1  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t9532B134019DD143908C8D2ECD876654851B9EDE* ___entries_1;
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
	KeyCollection_tECB996190883A9BEBF36B1CDF1F2E3BA64B01BE8 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0762687C1FDC710D34ECD40CD277FA894693A1CE * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tCE074E9B6B600C4D66DE2C4F6202ABAD4B751BA1, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tCE074E9B6B600C4D66DE2C4F6202ABAD4B751BA1, ___entries_1)); }
	inline EntryU5BU5D_t9532B134019DD143908C8D2ECD876654851B9EDE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t9532B134019DD143908C8D2ECD876654851B9EDE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t9532B134019DD143908C8D2ECD876654851B9EDE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tCE074E9B6B600C4D66DE2C4F6202ABAD4B751BA1, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tCE074E9B6B600C4D66DE2C4F6202ABAD4B751BA1, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tCE074E9B6B600C4D66DE2C4F6202ABAD4B751BA1, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tCE074E9B6B600C4D66DE2C4F6202ABAD4B751BA1, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tCE074E9B6B600C4D66DE2C4F6202ABAD4B751BA1, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tCE074E9B6B600C4D66DE2C4F6202ABAD4B751BA1, ___keys_7)); }
	inline KeyCollection_tECB996190883A9BEBF36B1CDF1F2E3BA64B01BE8 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tECB996190883A9BEBF36B1CDF1F2E3BA64B01BE8 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tECB996190883A9BEBF36B1CDF1F2E3BA64B01BE8 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tCE074E9B6B600C4D66DE2C4F6202ABAD4B751BA1, ___values_8)); }
	inline ValueCollection_t0762687C1FDC710D34ECD40CD277FA894693A1CE * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0762687C1FDC710D34ECD40CD277FA894693A1CE ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0762687C1FDC710D34ECD40CD277FA894693A1CE * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tCE074E9B6B600C4D66DE2C4F6202ABAD4B751BA1, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>
struct FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2  : public RuntimeObject
{
public:
	// Photon.Voice.PrimitiveArrayPool`1<T> Photon.Voice.FactoryPrimitiveArrayPool`1::pool
	PrimitiveArrayPool_1_t32EAE13B1A603062BB2FBDD9D35F937DD34DD485 * ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2, ___pool_0)); }
	inline PrimitiveArrayPool_1_t32EAE13B1A603062BB2FBDD9D35F937DD34DD485 * get_pool_0() const { return ___pool_0; }
	inline PrimitiveArrayPool_1_t32EAE13B1A603062BB2FBDD9D35F937DD34DD485 ** get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(PrimitiveArrayPool_1_t32EAE13B1A603062BB2FBDD9D35F937DD34DD485 * value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_0), (void*)value);
	}
};


// Photon.Voice.FactoryPrimitiveArrayPool`1<System.Single>
struct FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63  : public RuntimeObject
{
public:
	// Photon.Voice.PrimitiveArrayPool`1<T> Photon.Voice.FactoryPrimitiveArrayPool`1::pool
	PrimitiveArrayPool_1_tC69A4367DAED259130664C75DBC74EBA50D1FA79 * ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63, ___pool_0)); }
	inline PrimitiveArrayPool_1_tC69A4367DAED259130664C75DBC74EBA50D1FA79 * get_pool_0() const { return ___pool_0; }
	inline PrimitiveArrayPool_1_tC69A4367DAED259130664C75DBC74EBA50D1FA79 ** get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(PrimitiveArrayPool_1_tC69A4367DAED259130664C75DBC74EBA50D1FA79 * value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_0), (void*)value);
	}
};


// Photon.Voice.FrameOut`1<System.Int16>
struct FrameOut_1_t360F685F3D2F100DC469100D32F8A5B415EC536E  : public RuntimeObject
{
public:
	// T[] Photon.Voice.FrameOut`1::<Buf>k__BackingField
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___U3CBufU3Ek__BackingField_0;
	// System.Boolean Photon.Voice.FrameOut`1::<EndOfStream>k__BackingField
	bool ___U3CEndOfStreamU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CBufU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FrameOut_1_t360F685F3D2F100DC469100D32F8A5B415EC536E, ___U3CBufU3Ek__BackingField_0)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_U3CBufU3Ek__BackingField_0() const { return ___U3CBufU3Ek__BackingField_0; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_U3CBufU3Ek__BackingField_0() { return &___U3CBufU3Ek__BackingField_0; }
	inline void set_U3CBufU3Ek__BackingField_0(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___U3CBufU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBufU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEndOfStreamU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FrameOut_1_t360F685F3D2F100DC469100D32F8A5B415EC536E, ___U3CEndOfStreamU3Ek__BackingField_1)); }
	inline bool get_U3CEndOfStreamU3Ek__BackingField_1() const { return ___U3CEndOfStreamU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CEndOfStreamU3Ek__BackingField_1() { return &___U3CEndOfStreamU3Ek__BackingField_1; }
	inline void set_U3CEndOfStreamU3Ek__BackingField_1(bool value)
	{
		___U3CEndOfStreamU3Ek__BackingField_1 = value;
	}
};


// Photon.Voice.FrameOut`1<System.Single>
struct FrameOut_1_t2E75A31E49C5BB56BEAA73766430E3B7F2167044  : public RuntimeObject
{
public:
	// T[] Photon.Voice.FrameOut`1::<Buf>k__BackingField
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___U3CBufU3Ek__BackingField_0;
	// System.Boolean Photon.Voice.FrameOut`1::<EndOfStream>k__BackingField
	bool ___U3CEndOfStreamU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CBufU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FrameOut_1_t2E75A31E49C5BB56BEAA73766430E3B7F2167044, ___U3CBufU3Ek__BackingField_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_U3CBufU3Ek__BackingField_0() const { return ___U3CBufU3Ek__BackingField_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_U3CBufU3Ek__BackingField_0() { return &___U3CBufU3Ek__BackingField_0; }
	inline void set_U3CBufU3Ek__BackingField_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___U3CBufU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBufU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEndOfStreamU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FrameOut_1_t2E75A31E49C5BB56BEAA73766430E3B7F2167044, ___U3CEndOfStreamU3Ek__BackingField_1)); }
	inline bool get_U3CEndOfStreamU3Ek__BackingField_1() const { return ___U3CEndOfStreamU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CEndOfStreamU3Ek__BackingField_1() { return &___U3CEndOfStreamU3Ek__BackingField_1; }
	inline void set_U3CEndOfStreamU3Ek__BackingField_1(bool value)
	{
		___U3CEndOfStreamU3Ek__BackingField_1 = value;
	}
};


// Photon.Voice.AudioUtil/LevelMeter`1<System.Int16>
struct LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3  : public RuntimeObject
{
public:
	// System.Single Photon.Voice.AudioUtil/LevelMeter`1::ampSum
	float ___ampSum_0;
	// System.Single Photon.Voice.AudioUtil/LevelMeter`1::ampPeak
	float ___ampPeak_1;
	// System.Int32 Photon.Voice.AudioUtil/LevelMeter`1::bufferSize
	int32_t ___bufferSize_2;
	// System.Single[] Photon.Voice.AudioUtil/LevelMeter`1::prevValues
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___prevValues_3;
	// System.Int32 Photon.Voice.AudioUtil/LevelMeter`1::prevValuesHead
	int32_t ___prevValuesHead_4;
	// System.Single Photon.Voice.AudioUtil/LevelMeter`1::accumAvgPeakAmpSum
	float ___accumAvgPeakAmpSum_5;
	// System.Int32 Photon.Voice.AudioUtil/LevelMeter`1::accumAvgPeakAmpCount
	int32_t ___accumAvgPeakAmpCount_6;
	// System.Single Photon.Voice.AudioUtil/LevelMeter`1::currentPeakAmp
	float ___currentPeakAmp_7;
	// System.Single Photon.Voice.AudioUtil/LevelMeter`1::norm
	float ___norm_8;

public:
	inline static int32_t get_offset_of_ampSum_0() { return static_cast<int32_t>(offsetof(LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3, ___ampSum_0)); }
	inline float get_ampSum_0() const { return ___ampSum_0; }
	inline float* get_address_of_ampSum_0() { return &___ampSum_0; }
	inline void set_ampSum_0(float value)
	{
		___ampSum_0 = value;
	}

	inline static int32_t get_offset_of_ampPeak_1() { return static_cast<int32_t>(offsetof(LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3, ___ampPeak_1)); }
	inline float get_ampPeak_1() const { return ___ampPeak_1; }
	inline float* get_address_of_ampPeak_1() { return &___ampPeak_1; }
	inline void set_ampPeak_1(float value)
	{
		___ampPeak_1 = value;
	}

	inline static int32_t get_offset_of_bufferSize_2() { return static_cast<int32_t>(offsetof(LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3, ___bufferSize_2)); }
	inline int32_t get_bufferSize_2() const { return ___bufferSize_2; }
	inline int32_t* get_address_of_bufferSize_2() { return &___bufferSize_2; }
	inline void set_bufferSize_2(int32_t value)
	{
		___bufferSize_2 = value;
	}

	inline static int32_t get_offset_of_prevValues_3() { return static_cast<int32_t>(offsetof(LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3, ___prevValues_3)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_prevValues_3() const { return ___prevValues_3; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_prevValues_3() { return &___prevValues_3; }
	inline void set_prevValues_3(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___prevValues_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prevValues_3), (void*)value);
	}

	inline static int32_t get_offset_of_prevValuesHead_4() { return static_cast<int32_t>(offsetof(LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3, ___prevValuesHead_4)); }
	inline int32_t get_prevValuesHead_4() const { return ___prevValuesHead_4; }
	inline int32_t* get_address_of_prevValuesHead_4() { return &___prevValuesHead_4; }
	inline void set_prevValuesHead_4(int32_t value)
	{
		___prevValuesHead_4 = value;
	}

	inline static int32_t get_offset_of_accumAvgPeakAmpSum_5() { return static_cast<int32_t>(offsetof(LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3, ___accumAvgPeakAmpSum_5)); }
	inline float get_accumAvgPeakAmpSum_5() const { return ___accumAvgPeakAmpSum_5; }
	inline float* get_address_of_accumAvgPeakAmpSum_5() { return &___accumAvgPeakAmpSum_5; }
	inline void set_accumAvgPeakAmpSum_5(float value)
	{
		___accumAvgPeakAmpSum_5 = value;
	}

	inline static int32_t get_offset_of_accumAvgPeakAmpCount_6() { return static_cast<int32_t>(offsetof(LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3, ___accumAvgPeakAmpCount_6)); }
	inline int32_t get_accumAvgPeakAmpCount_6() const { return ___accumAvgPeakAmpCount_6; }
	inline int32_t* get_address_of_accumAvgPeakAmpCount_6() { return &___accumAvgPeakAmpCount_6; }
	inline void set_accumAvgPeakAmpCount_6(int32_t value)
	{
		___accumAvgPeakAmpCount_6 = value;
	}

	inline static int32_t get_offset_of_currentPeakAmp_7() { return static_cast<int32_t>(offsetof(LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3, ___currentPeakAmp_7)); }
	inline float get_currentPeakAmp_7() const { return ___currentPeakAmp_7; }
	inline float* get_address_of_currentPeakAmp_7() { return &___currentPeakAmp_7; }
	inline void set_currentPeakAmp_7(float value)
	{
		___currentPeakAmp_7 = value;
	}

	inline static int32_t get_offset_of_norm_8() { return static_cast<int32_t>(offsetof(LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3, ___norm_8)); }
	inline float get_norm_8() const { return ___norm_8; }
	inline float* get_address_of_norm_8() { return &___norm_8; }
	inline void set_norm_8(float value)
	{
		___norm_8 = value;
	}
};


// Photon.Voice.AudioUtil/LevelMeter`1<System.Single>
struct LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5  : public RuntimeObject
{
public:
	// System.Single Photon.Voice.AudioUtil/LevelMeter`1::ampSum
	float ___ampSum_0;
	// System.Single Photon.Voice.AudioUtil/LevelMeter`1::ampPeak
	float ___ampPeak_1;
	// System.Int32 Photon.Voice.AudioUtil/LevelMeter`1::bufferSize
	int32_t ___bufferSize_2;
	// System.Single[] Photon.Voice.AudioUtil/LevelMeter`1::prevValues
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___prevValues_3;
	// System.Int32 Photon.Voice.AudioUtil/LevelMeter`1::prevValuesHead
	int32_t ___prevValuesHead_4;
	// System.Single Photon.Voice.AudioUtil/LevelMeter`1::accumAvgPeakAmpSum
	float ___accumAvgPeakAmpSum_5;
	// System.Int32 Photon.Voice.AudioUtil/LevelMeter`1::accumAvgPeakAmpCount
	int32_t ___accumAvgPeakAmpCount_6;
	// System.Single Photon.Voice.AudioUtil/LevelMeter`1::currentPeakAmp
	float ___currentPeakAmp_7;
	// System.Single Photon.Voice.AudioUtil/LevelMeter`1::norm
	float ___norm_8;

public:
	inline static int32_t get_offset_of_ampSum_0() { return static_cast<int32_t>(offsetof(LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5, ___ampSum_0)); }
	inline float get_ampSum_0() const { return ___ampSum_0; }
	inline float* get_address_of_ampSum_0() { return &___ampSum_0; }
	inline void set_ampSum_0(float value)
	{
		___ampSum_0 = value;
	}

	inline static int32_t get_offset_of_ampPeak_1() { return static_cast<int32_t>(offsetof(LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5, ___ampPeak_1)); }
	inline float get_ampPeak_1() const { return ___ampPeak_1; }
	inline float* get_address_of_ampPeak_1() { return &___ampPeak_1; }
	inline void set_ampPeak_1(float value)
	{
		___ampPeak_1 = value;
	}

	inline static int32_t get_offset_of_bufferSize_2() { return static_cast<int32_t>(offsetof(LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5, ___bufferSize_2)); }
	inline int32_t get_bufferSize_2() const { return ___bufferSize_2; }
	inline int32_t* get_address_of_bufferSize_2() { return &___bufferSize_2; }
	inline void set_bufferSize_2(int32_t value)
	{
		___bufferSize_2 = value;
	}

	inline static int32_t get_offset_of_prevValues_3() { return static_cast<int32_t>(offsetof(LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5, ___prevValues_3)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_prevValues_3() const { return ___prevValues_3; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_prevValues_3() { return &___prevValues_3; }
	inline void set_prevValues_3(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___prevValues_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prevValues_3), (void*)value);
	}

	inline static int32_t get_offset_of_prevValuesHead_4() { return static_cast<int32_t>(offsetof(LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5, ___prevValuesHead_4)); }
	inline int32_t get_prevValuesHead_4() const { return ___prevValuesHead_4; }
	inline int32_t* get_address_of_prevValuesHead_4() { return &___prevValuesHead_4; }
	inline void set_prevValuesHead_4(int32_t value)
	{
		___prevValuesHead_4 = value;
	}

	inline static int32_t get_offset_of_accumAvgPeakAmpSum_5() { return static_cast<int32_t>(offsetof(LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5, ___accumAvgPeakAmpSum_5)); }
	inline float get_accumAvgPeakAmpSum_5() const { return ___accumAvgPeakAmpSum_5; }
	inline float* get_address_of_accumAvgPeakAmpSum_5() { return &___accumAvgPeakAmpSum_5; }
	inline void set_accumAvgPeakAmpSum_5(float value)
	{
		___accumAvgPeakAmpSum_5 = value;
	}

	inline static int32_t get_offset_of_accumAvgPeakAmpCount_6() { return static_cast<int32_t>(offsetof(LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5, ___accumAvgPeakAmpCount_6)); }
	inline int32_t get_accumAvgPeakAmpCount_6() const { return ___accumAvgPeakAmpCount_6; }
	inline int32_t* get_address_of_accumAvgPeakAmpCount_6() { return &___accumAvgPeakAmpCount_6; }
	inline void set_accumAvgPeakAmpCount_6(int32_t value)
	{
		___accumAvgPeakAmpCount_6 = value;
	}

	inline static int32_t get_offset_of_currentPeakAmp_7() { return static_cast<int32_t>(offsetof(LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5, ___currentPeakAmp_7)); }
	inline float get_currentPeakAmp_7() const { return ___currentPeakAmp_7; }
	inline float* get_address_of_currentPeakAmp_7() { return &___currentPeakAmp_7; }
	inline void set_currentPeakAmp_7(float value)
	{
		___currentPeakAmp_7 = value;
	}

	inline static int32_t get_offset_of_norm_8() { return static_cast<int32_t>(offsetof(LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5, ___norm_8)); }
	inline float get_norm_8() const { return ___norm_8; }
	inline float* get_address_of_norm_8() { return &___norm_8; }
	inline void set_norm_8(float value)
	{
		___norm_8 = value;
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


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// Photon.Voice.VoiceClient
struct VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E  : public RuntimeObject
{
public:
	// Photon.Voice.IVoiceTransport Photon.Voice.VoiceClient::transport
	RuntimeObject* ___transport_0;
	// Photon.Voice.ILogger Photon.Voice.VoiceClient::logger
	RuntimeObject* ___logger_1;
	// System.Int32 Photon.Voice.VoiceClient::<FramesLost>k__BackingField
	int32_t ___U3CFramesLostU3Ek__BackingField_2;
	// System.Int32 Photon.Voice.VoiceClient::<FramesReceived>k__BackingField
	int32_t ___U3CFramesReceivedU3Ek__BackingField_3;
	// System.Int32 Photon.Voice.VoiceClient::<RoundTripTime>k__BackingField
	int32_t ___U3CRoundTripTimeU3Ek__BackingField_4;
	// System.Int32 Photon.Voice.VoiceClient::<RoundTripTimeVariance>k__BackingField
	int32_t ___U3CRoundTripTimeVarianceU3Ek__BackingField_5;
	// System.Boolean Photon.Voice.VoiceClient::<SuppressInfoDuplicateWarning>k__BackingField
	bool ___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6;
	// Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate Photon.Voice.VoiceClient::<OnRemoteVoiceInfoAction>k__BackingField
	RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13 * ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_7;
	// System.Int32 Photon.Voice.VoiceClient::<DebugLostPercent>k__BackingField
	int32_t ___U3CDebugLostPercentU3Ek__BackingField_8;
	// System.Int32 Photon.Voice.VoiceClient::prevRtt
	int32_t ___prevRtt_9;
	// System.Collections.Generic.Dictionary`2<Photon.Voice.Codec,System.Int32> Photon.Voice.VoiceClient::remoteVoiceDelayFrames
	Dictionary_2_t29378254DA2EF1DF294AE5CD1E73420D108D8867 * ___remoteVoiceDelayFrames_10;
	// System.Byte Photon.Voice.VoiceClient::voiceIDMin
	uint8_t ___voiceIDMin_11;
	// System.Byte Photon.Voice.VoiceClient::voiceIDMax
	uint8_t ___voiceIDMax_12;
	// System.Byte Photon.Voice.VoiceClient::voiceIdLast
	uint8_t ___voiceIdLast_13;
	// System.Byte Photon.Voice.VoiceClient::globalInterestGroup
	uint8_t ___globalInterestGroup_14;
	// System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.LocalVoice> Photon.Voice.VoiceClient::localVoices
	Dictionary_2_tA7F6D73676809D9EF54381D374C152C8891CB7AA * ___localVoices_15;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Photon.Voice.LocalVoice>> Photon.Voice.VoiceClient::localVoicesPerChannel
	Dictionary_2_t173D966D87D699333F86F26576B4DEF9B46BFB9A * ___localVoicesPerChannel_16;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>> Photon.Voice.VoiceClient::remoteVoices
	Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B * ___remoteVoices_17;
	// System.Random Photon.Voice.VoiceClient::rnd
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___rnd_18;

public:
	inline static int32_t get_offset_of_transport_0() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___transport_0)); }
	inline RuntimeObject* get_transport_0() const { return ___transport_0; }
	inline RuntimeObject** get_address_of_transport_0() { return &___transport_0; }
	inline void set_transport_0(RuntimeObject* value)
	{
		___transport_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transport_0), (void*)value);
	}

	inline static int32_t get_offset_of_logger_1() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___logger_1)); }
	inline RuntimeObject* get_logger_1() const { return ___logger_1; }
	inline RuntimeObject** get_address_of_logger_1() { return &___logger_1; }
	inline void set_logger_1(RuntimeObject* value)
	{
		___logger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFramesLostU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___U3CFramesLostU3Ek__BackingField_2)); }
	inline int32_t get_U3CFramesLostU3Ek__BackingField_2() const { return ___U3CFramesLostU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CFramesLostU3Ek__BackingField_2() { return &___U3CFramesLostU3Ek__BackingField_2; }
	inline void set_U3CFramesLostU3Ek__BackingField_2(int32_t value)
	{
		___U3CFramesLostU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CFramesReceivedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___U3CFramesReceivedU3Ek__BackingField_3)); }
	inline int32_t get_U3CFramesReceivedU3Ek__BackingField_3() const { return ___U3CFramesReceivedU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CFramesReceivedU3Ek__BackingField_3() { return &___U3CFramesReceivedU3Ek__BackingField_3; }
	inline void set_U3CFramesReceivedU3Ek__BackingField_3(int32_t value)
	{
		___U3CFramesReceivedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CRoundTripTimeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___U3CRoundTripTimeU3Ek__BackingField_4)); }
	inline int32_t get_U3CRoundTripTimeU3Ek__BackingField_4() const { return ___U3CRoundTripTimeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CRoundTripTimeU3Ek__BackingField_4() { return &___U3CRoundTripTimeU3Ek__BackingField_4; }
	inline void set_U3CRoundTripTimeU3Ek__BackingField_4(int32_t value)
	{
		___U3CRoundTripTimeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CRoundTripTimeVarianceU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___U3CRoundTripTimeVarianceU3Ek__BackingField_5)); }
	inline int32_t get_U3CRoundTripTimeVarianceU3Ek__BackingField_5() const { return ___U3CRoundTripTimeVarianceU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CRoundTripTimeVarianceU3Ek__BackingField_5() { return &___U3CRoundTripTimeVarianceU3Ek__BackingField_5; }
	inline void set_U3CRoundTripTimeVarianceU3Ek__BackingField_5(int32_t value)
	{
		___U3CRoundTripTimeVarianceU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6)); }
	inline bool get_U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6() const { return ___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6() { return &___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6; }
	inline void set_U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6(bool value)
	{
		___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3COnRemoteVoiceInfoActionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_7)); }
	inline RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13 * get_U3COnRemoteVoiceInfoActionU3Ek__BackingField_7() const { return ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_7; }
	inline RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13 ** get_address_of_U3COnRemoteVoiceInfoActionU3Ek__BackingField_7() { return &___U3COnRemoteVoiceInfoActionU3Ek__BackingField_7; }
	inline void set_U3COnRemoteVoiceInfoActionU3Ek__BackingField_7(RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13 * value)
	{
		___U3COnRemoteVoiceInfoActionU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnRemoteVoiceInfoActionU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDebugLostPercentU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___U3CDebugLostPercentU3Ek__BackingField_8)); }
	inline int32_t get_U3CDebugLostPercentU3Ek__BackingField_8() const { return ___U3CDebugLostPercentU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CDebugLostPercentU3Ek__BackingField_8() { return &___U3CDebugLostPercentU3Ek__BackingField_8; }
	inline void set_U3CDebugLostPercentU3Ek__BackingField_8(int32_t value)
	{
		___U3CDebugLostPercentU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_prevRtt_9() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___prevRtt_9)); }
	inline int32_t get_prevRtt_9() const { return ___prevRtt_9; }
	inline int32_t* get_address_of_prevRtt_9() { return &___prevRtt_9; }
	inline void set_prevRtt_9(int32_t value)
	{
		___prevRtt_9 = value;
	}

	inline static int32_t get_offset_of_remoteVoiceDelayFrames_10() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___remoteVoiceDelayFrames_10)); }
	inline Dictionary_2_t29378254DA2EF1DF294AE5CD1E73420D108D8867 * get_remoteVoiceDelayFrames_10() const { return ___remoteVoiceDelayFrames_10; }
	inline Dictionary_2_t29378254DA2EF1DF294AE5CD1E73420D108D8867 ** get_address_of_remoteVoiceDelayFrames_10() { return &___remoteVoiceDelayFrames_10; }
	inline void set_remoteVoiceDelayFrames_10(Dictionary_2_t29378254DA2EF1DF294AE5CD1E73420D108D8867 * value)
	{
		___remoteVoiceDelayFrames_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteVoiceDelayFrames_10), (void*)value);
	}

	inline static int32_t get_offset_of_voiceIDMin_11() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___voiceIDMin_11)); }
	inline uint8_t get_voiceIDMin_11() const { return ___voiceIDMin_11; }
	inline uint8_t* get_address_of_voiceIDMin_11() { return &___voiceIDMin_11; }
	inline void set_voiceIDMin_11(uint8_t value)
	{
		___voiceIDMin_11 = value;
	}

	inline static int32_t get_offset_of_voiceIDMax_12() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___voiceIDMax_12)); }
	inline uint8_t get_voiceIDMax_12() const { return ___voiceIDMax_12; }
	inline uint8_t* get_address_of_voiceIDMax_12() { return &___voiceIDMax_12; }
	inline void set_voiceIDMax_12(uint8_t value)
	{
		___voiceIDMax_12 = value;
	}

	inline static int32_t get_offset_of_voiceIdLast_13() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___voiceIdLast_13)); }
	inline uint8_t get_voiceIdLast_13() const { return ___voiceIdLast_13; }
	inline uint8_t* get_address_of_voiceIdLast_13() { return &___voiceIdLast_13; }
	inline void set_voiceIdLast_13(uint8_t value)
	{
		___voiceIdLast_13 = value;
	}

	inline static int32_t get_offset_of_globalInterestGroup_14() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___globalInterestGroup_14)); }
	inline uint8_t get_globalInterestGroup_14() const { return ___globalInterestGroup_14; }
	inline uint8_t* get_address_of_globalInterestGroup_14() { return &___globalInterestGroup_14; }
	inline void set_globalInterestGroup_14(uint8_t value)
	{
		___globalInterestGroup_14 = value;
	}

	inline static int32_t get_offset_of_localVoices_15() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___localVoices_15)); }
	inline Dictionary_2_tA7F6D73676809D9EF54381D374C152C8891CB7AA * get_localVoices_15() const { return ___localVoices_15; }
	inline Dictionary_2_tA7F6D73676809D9EF54381D374C152C8891CB7AA ** get_address_of_localVoices_15() { return &___localVoices_15; }
	inline void set_localVoices_15(Dictionary_2_tA7F6D73676809D9EF54381D374C152C8891CB7AA * value)
	{
		___localVoices_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoices_15), (void*)value);
	}

	inline static int32_t get_offset_of_localVoicesPerChannel_16() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___localVoicesPerChannel_16)); }
	inline Dictionary_2_t173D966D87D699333F86F26576B4DEF9B46BFB9A * get_localVoicesPerChannel_16() const { return ___localVoicesPerChannel_16; }
	inline Dictionary_2_t173D966D87D699333F86F26576B4DEF9B46BFB9A ** get_address_of_localVoicesPerChannel_16() { return &___localVoicesPerChannel_16; }
	inline void set_localVoicesPerChannel_16(Dictionary_2_t173D966D87D699333F86F26576B4DEF9B46BFB9A * value)
	{
		___localVoicesPerChannel_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoicesPerChannel_16), (void*)value);
	}

	inline static int32_t get_offset_of_remoteVoices_17() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___remoteVoices_17)); }
	inline Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B * get_remoteVoices_17() const { return ___remoteVoices_17; }
	inline Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B ** get_address_of_remoteVoices_17() { return &___remoteVoices_17; }
	inline void set_remoteVoices_17(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B * value)
	{
		___remoteVoices_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteVoices_17), (void*)value);
	}

	inline static int32_t get_offset_of_rnd_18() { return static_cast<int32_t>(offsetof(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E, ___rnd_18)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_rnd_18() const { return ___rnd_18; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_rnd_18() { return &___rnd_18; }
	inline void set_rnd_18(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___rnd_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rnd_18), (void*)value);
	}
};


// POpusCodec.Wrapper
struct Wrapper_t02FC08D954149919540DD64B213654C82EED4DEC  : public RuntimeObject
{
public:

public:
};


// Photon.Voice.AudioOutDelayControl/PlayDelayConfig
struct PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7  : public RuntimeObject
{
public:
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::<Low>k__BackingField
	int32_t ___U3CLowU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::<High>k__BackingField
	int32_t ___U3CHighU3Ek__BackingField_1;
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::<Max>k__BackingField
	int32_t ___U3CMaxU3Ek__BackingField_2;
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::<SpeedUpPerc>k__BackingField
	int32_t ___U3CSpeedUpPercU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CLowU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7, ___U3CLowU3Ek__BackingField_0)); }
	inline int32_t get_U3CLowU3Ek__BackingField_0() const { return ___U3CLowU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CLowU3Ek__BackingField_0() { return &___U3CLowU3Ek__BackingField_0; }
	inline void set_U3CLowU3Ek__BackingField_0(int32_t value)
	{
		___U3CLowU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CHighU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7, ___U3CHighU3Ek__BackingField_1)); }
	inline int32_t get_U3CHighU3Ek__BackingField_1() const { return ___U3CHighU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CHighU3Ek__BackingField_1() { return &___U3CHighU3Ek__BackingField_1; }
	inline void set_U3CHighU3Ek__BackingField_1(int32_t value)
	{
		___U3CHighU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CMaxU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7, ___U3CMaxU3Ek__BackingField_2)); }
	inline int32_t get_U3CMaxU3Ek__BackingField_2() const { return ___U3CMaxU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CMaxU3Ek__BackingField_2() { return &___U3CMaxU3Ek__BackingField_2; }
	inline void set_U3CMaxU3Ek__BackingField_2(int32_t value)
	{
		___U3CMaxU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CSpeedUpPercU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7, ___U3CSpeedUpPercU3Ek__BackingField_3)); }
	inline int32_t get_U3CSpeedUpPercU3Ek__BackingField_3() const { return ___U3CSpeedUpPercU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CSpeedUpPercU3Ek__BackingField_3() { return &___U3CSpeedUpPercU3Ek__BackingField_3; }
	inline void set_U3CSpeedUpPercU3Ek__BackingField_3(int32_t value)
	{
		___U3CSpeedUpPercU3Ek__BackingField_3 = value;
	}
};


// Photon.Voice.AudioUtil/LevelMeterDummy
struct LevelMeterDummy_tD005D3282BE1A5CD6D829F547A2CBF6BC916D70B  : public RuntimeObject
{
public:

public:
};


// Photon.Voice.LoadBalancingTransport/<>c
struct U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B_StaticFields
{
public:
	// Photon.Voice.LoadBalancingTransport/<>c Photon.Voice.LoadBalancingTransport/<>c::<>9
	U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B * ___U3CU3E9_0;
	// System.Func`2<Photon.Voice.LocalVoice,Photon.Voice.Codec> Photon.Voice.LoadBalancingTransport/<>c::<>9__20_0
	Func_2_t9DAF740F320CC3CC70B4BF418FA15DD4C0C66D0A * ___U3CU3E9__20_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B_StaticFields, ___U3CU3E9__20_0_1)); }
	inline Func_2_t9DAF740F320CC3CC70B4BF418FA15DD4C0C66D0A * get_U3CU3E9__20_0_1() const { return ___U3CU3E9__20_0_1; }
	inline Func_2_t9DAF740F320CC3CC70B4BF418FA15DD4C0C66D0A ** get_address_of_U3CU3E9__20_0_1() { return &___U3CU3E9__20_0_1; }
	inline void set_U3CU3E9__20_0_1(Func_2_t9DAF740F320CC3CC70B4BF418FA15DD4C0C66D0A * value)
	{
		___U3CU3E9__20_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_0_1), (void*)value);
	}
};


// Photon.Voice.OpusCodec/DecoderFactory
struct DecoderFactory_tCA25011733525EE61FA25567B74D18F7574F3DED  : public RuntimeObject
{
public:

public:
};


// Photon.Voice.OpusCodec/Factory
struct Factory_t68149B8AD740BC9FFB266B0238A0E6F8DCF85211  : public RuntimeObject
{
public:

public:
};


// Photon.Voice.OpusCodec/Util
struct Util_tB79F7CAD5C8FC71AB7A0EAF51F9E9F9F7B4E2E3E  : public RuntimeObject
{
public:

public:
};


// Photon.Voice.RawCodec/ShortToFloat
struct ShortToFloat_tD1EA39685A18854B48A79FF97C114CCCCF4E1F82  : public RuntimeObject
{
public:
	// System.Action`1<Photon.Voice.FrameOut`1<System.Single>> Photon.Voice.RawCodec/ShortToFloat::output
	Action_1_t0B1D8E060FEAA27D51B6AD68D56361DDCF6D383F * ___output_0;
	// System.Single[] Photon.Voice.RawCodec/ShortToFloat::buf
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___buf_1;

public:
	inline static int32_t get_offset_of_output_0() { return static_cast<int32_t>(offsetof(ShortToFloat_tD1EA39685A18854B48A79FF97C114CCCCF4E1F82, ___output_0)); }
	inline Action_1_t0B1D8E060FEAA27D51B6AD68D56361DDCF6D383F * get_output_0() const { return ___output_0; }
	inline Action_1_t0B1D8E060FEAA27D51B6AD68D56361DDCF6D383F ** get_address_of_output_0() { return &___output_0; }
	inline void set_output_0(Action_1_t0B1D8E060FEAA27D51B6AD68D56361DDCF6D383F * value)
	{
		___output_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___output_0), (void*)value);
	}

	inline static int32_t get_offset_of_buf_1() { return static_cast<int32_t>(offsetof(ShortToFloat_tD1EA39685A18854B48A79FF97C114CCCCF4E1F82, ___buf_1)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_buf_1() const { return ___buf_1; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_buf_1() { return &___buf_1; }
	inline void set_buf_1(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___buf_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_1), (void*)value);
	}
};


// Photon.Voice.SpacingProfile/<>c
struct U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15_StaticFields
{
public:
	// Photon.Voice.SpacingProfile/<>c Photon.Voice.SpacingProfile/<>c::<>9
	U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 * ___U3CU3E9_0;
	// System.Func`2<System.Int16,System.Int16> Photon.Voice.SpacingProfile/<>c::<>9__13_0
	Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * ___U3CU3E9__13_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15_StaticFields, ___U3CU3E9__13_0_1)); }
	inline Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * get_U3CU3E9__13_0_1() const { return ___U3CU3E9__13_0_1; }
	inline Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D ** get_address_of_U3CU3E9__13_0_1() { return &___U3CU3E9__13_0_1; }
	inline void set_U3CU3E9__13_0_1(Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * value)
	{
		___U3CU3E9__13_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_0_1), (void*)value);
	}
};


// Photon.Voice.VoiceClient/<>c
struct U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7_StaticFields
{
public:
	// Photon.Voice.VoiceClient/<>c Photon.Voice.VoiceClient/<>c::<>9
	U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 * ___U3CU3E9_0;
	// System.Func`2<Photon.Voice.LocalVoice,System.Boolean> Photon.Voice.VoiceClient/<>c::<>9__61_0
	Func_2_tB88CF4C4A2B2A48B1412626D3AEDEB9C7F289CD1 * ___U3CU3E9__61_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__61_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7_StaticFields, ___U3CU3E9__61_0_1)); }
	inline Func_2_tB88CF4C4A2B2A48B1412626D3AEDEB9C7F289CD1 * get_U3CU3E9__61_0_1() const { return ___U3CU3E9__61_0_1; }
	inline Func_2_tB88CF4C4A2B2A48B1412626D3AEDEB9C7F289CD1 ** get_address_of_U3CU3E9__61_0_1() { return &___U3CU3E9__61_0_1; }
	inline void set_U3CU3E9__61_0_1(Func_2_tB88CF4C4A2B2A48B1412626D3AEDEB9C7F289CD1 * value)
	{
		___U3CU3E9__61_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__61_0_1), (void*)value);
	}
};


// Photon.Voice.VoiceClient/<>c__DisplayClass52_0
struct U3CU3Ec__DisplayClass52_0_t53D9AE5ACB0CE6892061886C02B70EA0C44D4CC4  : public RuntimeObject
{
public:
	// Photon.Voice.LocalVoiceAudio`1<System.Int16> Photon.Voice.VoiceClient/<>c__DisplayClass52_0::localVoice
	LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * ___localVoice_0;

public:
	inline static int32_t get_offset_of_localVoice_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_0_t53D9AE5ACB0CE6892061886C02B70EA0C44D4CC4, ___localVoice_0)); }
	inline LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * get_localVoice_0() const { return ___localVoice_0; }
	inline LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 ** get_address_of_localVoice_0() { return &___localVoice_0; }
	inline void set_localVoice_0(LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * value)
	{
		___localVoice_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoice_0), (void*)value);
	}
};


// Photon.Voice.VoiceClient/<>c__DisplayClass52_1
struct U3CU3Ec__DisplayClass52_1_t023DBC1F8CD08F7D8DB30EC31652B12251379E68  : public RuntimeObject
{
public:
	// Photon.Voice.LocalVoiceAudio`1<System.Single> Photon.Voice.VoiceClient/<>c__DisplayClass52_1::localVoice
	LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * ___localVoice_0;

public:
	inline static int32_t get_offset_of_localVoice_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_1_t023DBC1F8CD08F7D8DB30EC31652B12251379E68, ___localVoice_0)); }
	inline LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * get_localVoice_0() const { return ___localVoice_0; }
	inline LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 ** get_address_of_localVoice_0() { return &___localVoice_0; }
	inline void set_localVoice_0(LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * value)
	{
		___localVoice_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoice_0), (void*)value);
	}
};


// Photon.Voice.VoiceClient/<>c__DisplayClass52_2
struct U3CU3Ec__DisplayClass52_2_t0CD3E610512D2EBA352D8BC6516D4F4D619D570D  : public RuntimeObject
{
public:
	// Photon.Voice.LocalVoiceAudio`1<System.Single> Photon.Voice.VoiceClient/<>c__DisplayClass52_2::localVoice
	LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * ___localVoice_0;

public:
	inline static int32_t get_offset_of_localVoice_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_2_t0CD3E610512D2EBA352D8BC6516D4F4D619D570D, ___localVoice_0)); }
	inline LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * get_localVoice_0() const { return ___localVoice_0; }
	inline LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 ** get_address_of_localVoice_0() { return &___localVoice_0; }
	inline void set_localVoice_0(LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * value)
	{
		___localVoice_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoice_0), (void*)value);
	}
};


// Photon.Voice.VoiceClient/<>c__DisplayClass52_3
struct U3CU3Ec__DisplayClass52_3_t5C8BFE229FCE982F8650F0874CB455C6CFC32D3C  : public RuntimeObject
{
public:
	// Photon.Voice.LocalVoiceAudio`1<System.Int16> Photon.Voice.VoiceClient/<>c__DisplayClass52_3::localVoice
	LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * ___localVoice_0;

public:
	inline static int32_t get_offset_of_localVoice_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_3_t5C8BFE229FCE982F8650F0874CB455C6CFC32D3C, ___localVoice_0)); }
	inline LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * get_localVoice_0() const { return ___localVoice_0; }
	inline LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 ** get_address_of_localVoice_0() { return &___localVoice_0; }
	inline void set_localVoice_0(LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * value)
	{
		___localVoice_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoice_0), (void*)value);
	}
};


// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____array_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>
struct KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Byte,Photon.Voice.RemoteVoice>
struct KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382, ___value_1)); }
	inline RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * get_value_1() const { return ___value_1; }
	inline RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99, ___value_1)); }
	inline Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * get_value_1() const { return ___value_1; }
	inline Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t04437D6B70D98D1F7984710842118D93A0975323 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t04437D6B70D98D1F7984710842118D93A0975323__padding[16];
	};

public:
};


// Photon.Voice.IOS.AudioInChangeNotifier/MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t318D224F1E35043F0D8FF4F90AA4B841569E092E  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Type Photon.Voice.IOS.AudioInChangeNotifier/MonoPInvokeCallbackAttribute::type
	Type_t * ___type_0;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(MonoPInvokeCallbackAttribute_t318D224F1E35043F0D8FF4F90AA4B841569E092E, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}
};


// Photon.Voice.AudioUtil/LevelMeterFloat
struct LevelMeterFloat_t760D3DBB26D5D489891946710E1711FF9A262455  : public LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5
{
public:

public:
};


// Photon.Voice.AudioUtil/LevelMeterShort
struct LevelMeterShort_t49A5B495010FBAC23F91CE71A7290FABE50EB4B7  : public LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3
{
public:

public:
};


// Photon.Voice.ImageBufferInfo/StrideSet
struct StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF 
{
public:
	// System.Int32 Photon.Voice.ImageBufferInfo/StrideSet::stride0
	int32_t ___stride0_0;
	// System.Int32 Photon.Voice.ImageBufferInfo/StrideSet::stride1
	int32_t ___stride1_1;
	// System.Int32 Photon.Voice.ImageBufferInfo/StrideSet::stride2
	int32_t ___stride2_2;
	// System.Int32 Photon.Voice.ImageBufferInfo/StrideSet::stride3
	int32_t ___stride3_3;
	// System.Int32 Photon.Voice.ImageBufferInfo/StrideSet::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_stride0_0() { return static_cast<int32_t>(offsetof(StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF, ___stride0_0)); }
	inline int32_t get_stride0_0() const { return ___stride0_0; }
	inline int32_t* get_address_of_stride0_0() { return &___stride0_0; }
	inline void set_stride0_0(int32_t value)
	{
		___stride0_0 = value;
	}

	inline static int32_t get_offset_of_stride1_1() { return static_cast<int32_t>(offsetof(StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF, ___stride1_1)); }
	inline int32_t get_stride1_1() const { return ___stride1_1; }
	inline int32_t* get_address_of_stride1_1() { return &___stride1_1; }
	inline void set_stride1_1(int32_t value)
	{
		___stride1_1 = value;
	}

	inline static int32_t get_offset_of_stride2_2() { return static_cast<int32_t>(offsetof(StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF, ___stride2_2)); }
	inline int32_t get_stride2_2() const { return ___stride2_2; }
	inline int32_t* get_address_of_stride2_2() { return &___stride2_2; }
	inline void set_stride2_2(int32_t value)
	{
		___stride2_2 = value;
	}

	inline static int32_t get_offset_of_stride3_3() { return static_cast<int32_t>(offsetof(StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF, ___stride3_3)); }
	inline int32_t get_stride3_3() const { return ___stride3_3; }
	inline int32_t* get_address_of_stride3_3() { return &___stride3_3; }
	inline void set_stride3_3(int32_t value)
	{
		___stride3_3 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF, ___U3CLengthU3Ek__BackingField_4)); }
	inline int32_t get_U3CLengthU3Ek__BackingField_4() const { return ___U3CLengthU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CLengthU3Ek__BackingField_4() { return &___U3CLengthU3Ek__BackingField_4; }
	inline void set_U3CLengthU3Ek__BackingField_4(int32_t value)
	{
		___U3CLengthU3Ek__BackingField_4 = value;
	}
};


// Photon.Voice.VoiceClient/CreateOptions
struct CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2 
{
public:
	// System.Byte Photon.Voice.VoiceClient/CreateOptions::VoiceIDMin
	uint8_t ___VoiceIDMin_0;
	// System.Byte Photon.Voice.VoiceClient/CreateOptions::VoiceIDMax
	uint8_t ___VoiceIDMax_1;

public:
	inline static int32_t get_offset_of_VoiceIDMin_0() { return static_cast<int32_t>(offsetof(CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2, ___VoiceIDMin_0)); }
	inline uint8_t get_VoiceIDMin_0() const { return ___VoiceIDMin_0; }
	inline uint8_t* get_address_of_VoiceIDMin_0() { return &___VoiceIDMin_0; }
	inline void set_VoiceIDMin_0(uint8_t value)
	{
		___VoiceIDMin_0 = value;
	}

	inline static int32_t get_offset_of_VoiceIDMax_1() { return static_cast<int32_t>(offsetof(CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2, ___VoiceIDMax_1)); }
	inline uint8_t get_VoiceIDMax_1() const { return ___VoiceIDMax_1; }
	inline uint8_t* get_address_of_VoiceIDMax_1() { return &___VoiceIDMax_1; }
	inline void set_VoiceIDMax_1(uint8_t value)
	{
		___VoiceIDMax_1 = value;
	}
};

struct CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2_StaticFields
{
public:
	// Photon.Voice.VoiceClient/CreateOptions Photon.Voice.VoiceClient/CreateOptions::Default
	CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2  ___Default_2;

public:
	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2_StaticFields, ___Default_2)); }
	inline CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2  get_Default_2() const { return ___Default_2; }
	inline CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2 * get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2  value)
	{
		___Default_2 = value;
	}
};


// Photon.Voice.OpusCodec/Encoder`1<System.Int16>
struct Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2  : public RuntimeObject
{
public:
	// POpusCodec.OpusEncoder Photon.Voice.OpusCodec/Encoder`1::encoder
	OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823 * ___encoder_0;
	// System.Boolean Photon.Voice.OpusCodec/Encoder`1::disposed
	bool ___disposed_1;
	// System.String Photon.Voice.OpusCodec/Encoder`1::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_2;
	// System.Action`2<System.ArraySegment`1<System.Byte>,Photon.Voice.FrameFlags> Photon.Voice.OpusCodec/Encoder`1::<Output>k__BackingField
	Action_2_t4203FA193D835C197097DFF2303E7F02F8DBA45D * ___U3COutputU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_encoder_0() { return static_cast<int32_t>(offsetof(Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2, ___encoder_0)); }
	inline OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823 * get_encoder_0() const { return ___encoder_0; }
	inline OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823 ** get_address_of_encoder_0() { return &___encoder_0; }
	inline void set_encoder_0(OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823 * value)
	{
		___encoder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_0), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_1() { return static_cast<int32_t>(offsetof(Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2, ___disposed_1)); }
	inline bool get_disposed_1() const { return ___disposed_1; }
	inline bool* get_address_of_disposed_1() { return &___disposed_1; }
	inline void set_disposed_1(bool value)
	{
		___disposed_1 = value;
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2, ___U3CErrorU3Ek__BackingField_2)); }
	inline String_t* get_U3CErrorU3Ek__BackingField_2() const { return ___U3CErrorU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CErrorU3Ek__BackingField_2() { return &___U3CErrorU3Ek__BackingField_2; }
	inline void set_U3CErrorU3Ek__BackingField_2(String_t* value)
	{
		___U3CErrorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3COutputU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2, ___U3COutputU3Ek__BackingField_3)); }
	inline Action_2_t4203FA193D835C197097DFF2303E7F02F8DBA45D * get_U3COutputU3Ek__BackingField_3() const { return ___U3COutputU3Ek__BackingField_3; }
	inline Action_2_t4203FA193D835C197097DFF2303E7F02F8DBA45D ** get_address_of_U3COutputU3Ek__BackingField_3() { return &___U3COutputU3Ek__BackingField_3; }
	inline void set_U3COutputU3Ek__BackingField_3(Action_2_t4203FA193D835C197097DFF2303E7F02F8DBA45D * value)
	{
		___U3COutputU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COutputU3Ek__BackingField_3), (void*)value);
	}
};

struct Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2_StaticFields
{
public:
	// System.ArraySegment`1<System.Byte> Photon.Voice.OpusCodec/Encoder`1::EmptyBuffer
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___EmptyBuffer_4;

public:
	inline static int32_t get_offset_of_EmptyBuffer_4() { return static_cast<int32_t>(offsetof(Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2_StaticFields, ___EmptyBuffer_4)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_EmptyBuffer_4() const { return ___EmptyBuffer_4; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_EmptyBuffer_4() { return &___EmptyBuffer_4; }
	inline void set_EmptyBuffer_4(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___EmptyBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___EmptyBuffer_4))->____array_0), (void*)NULL);
	}
};


// Photon.Voice.OpusCodec/Encoder`1<System.Single>
struct Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620  : public RuntimeObject
{
public:
	// POpusCodec.OpusEncoder Photon.Voice.OpusCodec/Encoder`1::encoder
	OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823 * ___encoder_0;
	// System.Boolean Photon.Voice.OpusCodec/Encoder`1::disposed
	bool ___disposed_1;
	// System.String Photon.Voice.OpusCodec/Encoder`1::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_2;
	// System.Action`2<System.ArraySegment`1<System.Byte>,Photon.Voice.FrameFlags> Photon.Voice.OpusCodec/Encoder`1::<Output>k__BackingField
	Action_2_t4203FA193D835C197097DFF2303E7F02F8DBA45D * ___U3COutputU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_encoder_0() { return static_cast<int32_t>(offsetof(Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620, ___encoder_0)); }
	inline OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823 * get_encoder_0() const { return ___encoder_0; }
	inline OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823 ** get_address_of_encoder_0() { return &___encoder_0; }
	inline void set_encoder_0(OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823 * value)
	{
		___encoder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_0), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_1() { return static_cast<int32_t>(offsetof(Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620, ___disposed_1)); }
	inline bool get_disposed_1() const { return ___disposed_1; }
	inline bool* get_address_of_disposed_1() { return &___disposed_1; }
	inline void set_disposed_1(bool value)
	{
		___disposed_1 = value;
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620, ___U3CErrorU3Ek__BackingField_2)); }
	inline String_t* get_U3CErrorU3Ek__BackingField_2() const { return ___U3CErrorU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CErrorU3Ek__BackingField_2() { return &___U3CErrorU3Ek__BackingField_2; }
	inline void set_U3CErrorU3Ek__BackingField_2(String_t* value)
	{
		___U3CErrorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3COutputU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620, ___U3COutputU3Ek__BackingField_3)); }
	inline Action_2_t4203FA193D835C197097DFF2303E7F02F8DBA45D * get_U3COutputU3Ek__BackingField_3() const { return ___U3COutputU3Ek__BackingField_3; }
	inline Action_2_t4203FA193D835C197097DFF2303E7F02F8DBA45D ** get_address_of_U3COutputU3Ek__BackingField_3() { return &___U3COutputU3Ek__BackingField_3; }
	inline void set_U3COutputU3Ek__BackingField_3(Action_2_t4203FA193D835C197097DFF2303E7F02F8DBA45D * value)
	{
		___U3COutputU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COutputU3Ek__BackingField_3), (void*)value);
	}
};

struct Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620_StaticFields
{
public:
	// System.ArraySegment`1<System.Byte> Photon.Voice.OpusCodec/Encoder`1::EmptyBuffer
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___EmptyBuffer_4;

public:
	inline static int32_t get_offset_of_EmptyBuffer_4() { return static_cast<int32_t>(offsetof(Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620_StaticFields, ___EmptyBuffer_4)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_EmptyBuffer_4() const { return ___EmptyBuffer_4; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_EmptyBuffer_4() { return &___EmptyBuffer_4; }
	inline void set_EmptyBuffer_4(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___EmptyBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___EmptyBuffer_4))->____array_0), (void*)NULL);
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>
struct Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6, ___dictionary_0)); }
	inline Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6, ___current_3)); }
	inline KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,Photon.Voice.RemoteVoice>
struct Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E, ___dictionary_0)); }
	inline Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E, ___current_3)); }
	inline KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B, ___dictionary_0)); }
	inline Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B, ___current_3)); }
	inline KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___dictionary_0)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___current_3)); }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>
struct VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4  : public RuntimeObject
{
public:
	// System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1::<On>k__BackingField
	bool ___U3COnU3Ek__BackingField_0;
	// System.Single Photon.Voice.AudioUtil/VoiceDetector`1::norm
	float ___norm_1;
	// System.Single Photon.Voice.AudioUtil/VoiceDetector`1::threshold
	float ___threshold_2;
	// System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1::detected
	bool ___detected_3;
	// System.DateTime Photon.Voice.AudioUtil/VoiceDetector`1::<DetectedTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CDetectedTimeU3Ek__BackingField_4;
	// System.Action Photon.Voice.AudioUtil/VoiceDetector`1::OnDetected
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnDetected_5;
	// System.Int32 Photon.Voice.AudioUtil/VoiceDetector`1::activityDelay
	int32_t ___activityDelay_6;
	// System.Int32 Photon.Voice.AudioUtil/VoiceDetector`1::autoSilenceCounter
	int32_t ___autoSilenceCounter_7;
	// System.Int32 Photon.Voice.AudioUtil/VoiceDetector`1::valuesCountPerSec
	int32_t ___valuesCountPerSec_8;
	// System.Int32 Photon.Voice.AudioUtil/VoiceDetector`1::activityDelayValuesCount
	int32_t ___activityDelayValuesCount_9;

public:
	inline static int32_t get_offset_of_U3COnU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4, ___U3COnU3Ek__BackingField_0)); }
	inline bool get_U3COnU3Ek__BackingField_0() const { return ___U3COnU3Ek__BackingField_0; }
	inline bool* get_address_of_U3COnU3Ek__BackingField_0() { return &___U3COnU3Ek__BackingField_0; }
	inline void set_U3COnU3Ek__BackingField_0(bool value)
	{
		___U3COnU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_norm_1() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4, ___norm_1)); }
	inline float get_norm_1() const { return ___norm_1; }
	inline float* get_address_of_norm_1() { return &___norm_1; }
	inline void set_norm_1(float value)
	{
		___norm_1 = value;
	}

	inline static int32_t get_offset_of_threshold_2() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4, ___threshold_2)); }
	inline float get_threshold_2() const { return ___threshold_2; }
	inline float* get_address_of_threshold_2() { return &___threshold_2; }
	inline void set_threshold_2(float value)
	{
		___threshold_2 = value;
	}

	inline static int32_t get_offset_of_detected_3() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4, ___detected_3)); }
	inline bool get_detected_3() const { return ___detected_3; }
	inline bool* get_address_of_detected_3() { return &___detected_3; }
	inline void set_detected_3(bool value)
	{
		___detected_3 = value;
	}

	inline static int32_t get_offset_of_U3CDetectedTimeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4, ___U3CDetectedTimeU3Ek__BackingField_4)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CDetectedTimeU3Ek__BackingField_4() const { return ___U3CDetectedTimeU3Ek__BackingField_4; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CDetectedTimeU3Ek__BackingField_4() { return &___U3CDetectedTimeU3Ek__BackingField_4; }
	inline void set_U3CDetectedTimeU3Ek__BackingField_4(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CDetectedTimeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_OnDetected_5() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4, ___OnDetected_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnDetected_5() const { return ___OnDetected_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnDetected_5() { return &___OnDetected_5; }
	inline void set_OnDetected_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnDetected_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDetected_5), (void*)value);
	}

	inline static int32_t get_offset_of_activityDelay_6() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4, ___activityDelay_6)); }
	inline int32_t get_activityDelay_6() const { return ___activityDelay_6; }
	inline int32_t* get_address_of_activityDelay_6() { return &___activityDelay_6; }
	inline void set_activityDelay_6(int32_t value)
	{
		___activityDelay_6 = value;
	}

	inline static int32_t get_offset_of_autoSilenceCounter_7() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4, ___autoSilenceCounter_7)); }
	inline int32_t get_autoSilenceCounter_7() const { return ___autoSilenceCounter_7; }
	inline int32_t* get_address_of_autoSilenceCounter_7() { return &___autoSilenceCounter_7; }
	inline void set_autoSilenceCounter_7(int32_t value)
	{
		___autoSilenceCounter_7 = value;
	}

	inline static int32_t get_offset_of_valuesCountPerSec_8() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4, ___valuesCountPerSec_8)); }
	inline int32_t get_valuesCountPerSec_8() const { return ___valuesCountPerSec_8; }
	inline int32_t* get_address_of_valuesCountPerSec_8() { return &___valuesCountPerSec_8; }
	inline void set_valuesCountPerSec_8(int32_t value)
	{
		___valuesCountPerSec_8 = value;
	}

	inline static int32_t get_offset_of_activityDelayValuesCount_9() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4, ___activityDelayValuesCount_9)); }
	inline int32_t get_activityDelayValuesCount_9() const { return ___activityDelayValuesCount_9; }
	inline int32_t* get_address_of_activityDelayValuesCount_9() { return &___activityDelayValuesCount_9; }
	inline void set_activityDelayValuesCount_9(int32_t value)
	{
		___activityDelayValuesCount_9 = value;
	}
};


// Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>
struct VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC  : public RuntimeObject
{
public:
	// System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1::<On>k__BackingField
	bool ___U3COnU3Ek__BackingField_0;
	// System.Single Photon.Voice.AudioUtil/VoiceDetector`1::norm
	float ___norm_1;
	// System.Single Photon.Voice.AudioUtil/VoiceDetector`1::threshold
	float ___threshold_2;
	// System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1::detected
	bool ___detected_3;
	// System.DateTime Photon.Voice.AudioUtil/VoiceDetector`1::<DetectedTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CDetectedTimeU3Ek__BackingField_4;
	// System.Action Photon.Voice.AudioUtil/VoiceDetector`1::OnDetected
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnDetected_5;
	// System.Int32 Photon.Voice.AudioUtil/VoiceDetector`1::activityDelay
	int32_t ___activityDelay_6;
	// System.Int32 Photon.Voice.AudioUtil/VoiceDetector`1::autoSilenceCounter
	int32_t ___autoSilenceCounter_7;
	// System.Int32 Photon.Voice.AudioUtil/VoiceDetector`1::valuesCountPerSec
	int32_t ___valuesCountPerSec_8;
	// System.Int32 Photon.Voice.AudioUtil/VoiceDetector`1::activityDelayValuesCount
	int32_t ___activityDelayValuesCount_9;

public:
	inline static int32_t get_offset_of_U3COnU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC, ___U3COnU3Ek__BackingField_0)); }
	inline bool get_U3COnU3Ek__BackingField_0() const { return ___U3COnU3Ek__BackingField_0; }
	inline bool* get_address_of_U3COnU3Ek__BackingField_0() { return &___U3COnU3Ek__BackingField_0; }
	inline void set_U3COnU3Ek__BackingField_0(bool value)
	{
		___U3COnU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_norm_1() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC, ___norm_1)); }
	inline float get_norm_1() const { return ___norm_1; }
	inline float* get_address_of_norm_1() { return &___norm_1; }
	inline void set_norm_1(float value)
	{
		___norm_1 = value;
	}

	inline static int32_t get_offset_of_threshold_2() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC, ___threshold_2)); }
	inline float get_threshold_2() const { return ___threshold_2; }
	inline float* get_address_of_threshold_2() { return &___threshold_2; }
	inline void set_threshold_2(float value)
	{
		___threshold_2 = value;
	}

	inline static int32_t get_offset_of_detected_3() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC, ___detected_3)); }
	inline bool get_detected_3() const { return ___detected_3; }
	inline bool* get_address_of_detected_3() { return &___detected_3; }
	inline void set_detected_3(bool value)
	{
		___detected_3 = value;
	}

	inline static int32_t get_offset_of_U3CDetectedTimeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC, ___U3CDetectedTimeU3Ek__BackingField_4)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CDetectedTimeU3Ek__BackingField_4() const { return ___U3CDetectedTimeU3Ek__BackingField_4; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CDetectedTimeU3Ek__BackingField_4() { return &___U3CDetectedTimeU3Ek__BackingField_4; }
	inline void set_U3CDetectedTimeU3Ek__BackingField_4(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CDetectedTimeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_OnDetected_5() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC, ___OnDetected_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnDetected_5() const { return ___OnDetected_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnDetected_5() { return &___OnDetected_5; }
	inline void set_OnDetected_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnDetected_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDetected_5), (void*)value);
	}

	inline static int32_t get_offset_of_activityDelay_6() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC, ___activityDelay_6)); }
	inline int32_t get_activityDelay_6() const { return ___activityDelay_6; }
	inline int32_t* get_address_of_activityDelay_6() { return &___activityDelay_6; }
	inline void set_activityDelay_6(int32_t value)
	{
		___activityDelay_6 = value;
	}

	inline static int32_t get_offset_of_autoSilenceCounter_7() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC, ___autoSilenceCounter_7)); }
	inline int32_t get_autoSilenceCounter_7() const { return ___autoSilenceCounter_7; }
	inline int32_t* get_address_of_autoSilenceCounter_7() { return &___autoSilenceCounter_7; }
	inline void set_autoSilenceCounter_7(int32_t value)
	{
		___autoSilenceCounter_7 = value;
	}

	inline static int32_t get_offset_of_valuesCountPerSec_8() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC, ___valuesCountPerSec_8)); }
	inline int32_t get_valuesCountPerSec_8() const { return ___valuesCountPerSec_8; }
	inline int32_t* get_address_of_valuesCountPerSec_8() { return &___valuesCountPerSec_8; }
	inline void set_valuesCountPerSec_8(int32_t value)
	{
		___valuesCountPerSec_8 = value;
	}

	inline static int32_t get_offset_of_activityDelayValuesCount_9() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC, ___activityDelayValuesCount_9)); }
	inline int32_t get_activityDelayValuesCount_9() const { return ___activityDelayValuesCount_9; }
	inline int32_t* get_address_of_activityDelayValuesCount_9() { return &___activityDelayValuesCount_9; }
	inline void set_activityDelayValuesCount_9(int32_t value)
	{
		___activityDelayValuesCount_9 = value;
	}
};


// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___javaInterface_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___proxyObject_1)); }
	inline intptr_t get_proxyObject_1() const { return ___proxyObject_1; }
	inline intptr_t* get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(intptr_t value)
	{
		___proxyObject_1 = value;
	}
};

struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_JavaLangSystemClass_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};


// Photon.Voice.IOS.AudioInPusher
struct AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD  : public RuntimeObject
{
public:
	// System.Boolean Photon.Voice.IOS.AudioInPusher::initializationFinished
	bool ___initializationFinished_1;
	// System.IntPtr Photon.Voice.IOS.AudioInPusher::handle
	intptr_t ___handle_4;
	// System.Int32 Photon.Voice.IOS.AudioInPusher::instanceID
	int32_t ___instanceID_5;
	// System.Action`1<System.Single[]> Photon.Voice.IOS.AudioInPusher::pushCallback
	Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * ___pushCallback_6;
	// Photon.Voice.ObjectFactory`2<System.Single[],System.Int32> Photon.Voice.IOS.AudioInPusher::bufferFactory
	RuntimeObject* ___bufferFactory_7;
	// System.String Photon.Voice.IOS.AudioInPusher::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_initializationFinished_1() { return static_cast<int32_t>(offsetof(AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD, ___initializationFinished_1)); }
	inline bool get_initializationFinished_1() const { return ___initializationFinished_1; }
	inline bool* get_address_of_initializationFinished_1() { return &___initializationFinished_1; }
	inline void set_initializationFinished_1(bool value)
	{
		___initializationFinished_1 = value;
	}

	inline static int32_t get_offset_of_handle_4() { return static_cast<int32_t>(offsetof(AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD, ___handle_4)); }
	inline intptr_t get_handle_4() const { return ___handle_4; }
	inline intptr_t* get_address_of_handle_4() { return &___handle_4; }
	inline void set_handle_4(intptr_t value)
	{
		___handle_4 = value;
	}

	inline static int32_t get_offset_of_instanceID_5() { return static_cast<int32_t>(offsetof(AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD, ___instanceID_5)); }
	inline int32_t get_instanceID_5() const { return ___instanceID_5; }
	inline int32_t* get_address_of_instanceID_5() { return &___instanceID_5; }
	inline void set_instanceID_5(int32_t value)
	{
		___instanceID_5 = value;
	}

	inline static int32_t get_offset_of_pushCallback_6() { return static_cast<int32_t>(offsetof(AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD, ___pushCallback_6)); }
	inline Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * get_pushCallback_6() const { return ___pushCallback_6; }
	inline Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 ** get_address_of_pushCallback_6() { return &___pushCallback_6; }
	inline void set_pushCallback_6(Action_1_t82A2AC0D5E4AE8690CA77800B1CA0CF1955CF833 * value)
	{
		___pushCallback_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pushCallback_6), (void*)value);
	}

	inline static int32_t get_offset_of_bufferFactory_7() { return static_cast<int32_t>(offsetof(AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD, ___bufferFactory_7)); }
	inline RuntimeObject* get_bufferFactory_7() const { return ___bufferFactory_7; }
	inline RuntimeObject** get_address_of_bufferFactory_7() { return &___bufferFactory_7; }
	inline void set_bufferFactory_7(RuntimeObject* value)
	{
		___bufferFactory_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bufferFactory_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD, ___U3CErrorU3Ek__BackingField_8)); }
	inline String_t* get_U3CErrorU3Ek__BackingField_8() const { return ___U3CErrorU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CErrorU3Ek__BackingField_8() { return &___U3CErrorU3Ek__BackingField_8; }
	inline void set_U3CErrorU3Ek__BackingField_8(String_t* value)
	{
		___U3CErrorU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_8), (void*)value);
	}
};

struct AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD_StaticFields
{
public:
	// System.Int32 Photon.Voice.IOS.AudioInPusher::instanceCnt
	int32_t ___instanceCnt_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.IOS.AudioInPusher> Photon.Voice.IOS.AudioInPusher::instancePerHandle
	Dictionary_2_tCE074E9B6B600C4D66DE2C4F6202ABAD4B751BA1 * ___instancePerHandle_3;

public:
	inline static int32_t get_offset_of_instanceCnt_2() { return static_cast<int32_t>(offsetof(AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD_StaticFields, ___instanceCnt_2)); }
	inline int32_t get_instanceCnt_2() const { return ___instanceCnt_2; }
	inline int32_t* get_address_of_instanceCnt_2() { return &___instanceCnt_2; }
	inline void set_instanceCnt_2(int32_t value)
	{
		___instanceCnt_2 = value;
	}

	inline static int32_t get_offset_of_instancePerHandle_3() { return static_cast<int32_t>(offsetof(AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD_StaticFields, ___instancePerHandle_3)); }
	inline Dictionary_2_tCE074E9B6B600C4D66DE2C4F6202ABAD4B751BA1 * get_instancePerHandle_3() const { return ___instancePerHandle_3; }
	inline Dictionary_2_tCE074E9B6B600C4D66DE2C4F6202ABAD4B751BA1 ** get_address_of_instancePerHandle_3() { return &___instancePerHandle_3; }
	inline void set_instancePerHandle_3(Dictionary_2_tCE074E9B6B600C4D66DE2C4F6202ABAD4B751BA1 * value)
	{
		___instancePerHandle_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instancePerHandle_3), (void*)value);
	}
};


// Photon.Voice.IOS.AudioInReader
struct AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302  : public RuntimeObject
{
public:
	// System.IntPtr Photon.Voice.IOS.AudioInReader::audioIn
	intptr_t ___audioIn_1;
	// System.Boolean Photon.Voice.IOS.AudioInReader::initializationFinished
	bool ___initializationFinished_2;
	// System.String Photon.Voice.IOS.AudioInReader::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_audioIn_1() { return static_cast<int32_t>(offsetof(AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302, ___audioIn_1)); }
	inline intptr_t get_audioIn_1() const { return ___audioIn_1; }
	inline intptr_t* get_address_of_audioIn_1() { return &___audioIn_1; }
	inline void set_audioIn_1(intptr_t value)
	{
		___audioIn_1 = value;
	}

	inline static int32_t get_offset_of_initializationFinished_2() { return static_cast<int32_t>(offsetof(AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302, ___initializationFinished_2)); }
	inline bool get_initializationFinished_2() const { return ___initializationFinished_2; }
	inline bool* get_address_of_initializationFinished_2() { return &___initializationFinished_2; }
	inline void set_initializationFinished_2(bool value)
	{
		___initializationFinished_2 = value;
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302, ___U3CErrorU3Ek__BackingField_3)); }
	inline String_t* get_U3CErrorU3Ek__BackingField_3() const { return ___U3CErrorU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CErrorU3Ek__BackingField_3() { return &___U3CErrorU3Ek__BackingField_3; }
	inline void set_U3CErrorU3Ek__BackingField_3(String_t* value)
	{
		___U3CErrorU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_3), (void*)value);
	}
};


// Photon.Voice.IOS.AudioSessionCategory
struct AudioSessionCategory_tE250FDE11CD1BE66B77C0CDD6F78F2CC73F821C3 
{
public:
	// System.Int32 Photon.Voice.IOS.AudioSessionCategory::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioSessionCategory_tE250FDE11CD1BE66B77C0CDD6F78F2CC73F821C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.IOS.AudioSessionMode
struct AudioSessionMode_tCE654A88A20960DF6620AF7DA7C66E5AB9401EEB 
{
public:
	// System.Int32 Photon.Voice.IOS.AudioSessionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioSessionMode_tCE654A88A20960DF6620AF7DA7C66E5AB9401EEB, ___value___2)); }
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


// POpusCodec.Enums.Channels
struct Channels_t43E6EDAF5EC70F2F6C5181AF20CABA6C78A7D137 
{
public:
	// System.Int32 POpusCodec.Enums.Channels::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Channels_t43E6EDAF5EC70F2F6C5181AF20CABA6C78A7D137, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.Codec
struct Codec_t1F1715448DDDD52E006F1090156DA888E10CF3BF 
{
public:
	// System.Int32 Photon.Voice.Codec::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Codec_t1F1715448DDDD52E006F1090156DA888E10CF3BF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// POpusCodec.Enums.Delay
struct Delay_t5DEB1A2DE107884E8E3B8D29D1AF92141F13634B 
{
public:
	// System.Int32 POpusCodec.Enums.Delay::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Delay_t5DEB1A2DE107884E8E3B8D29D1AF92141F13634B, ___value___2)); }
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

// Photon.Voice.FrameFlags
struct FrameFlags_t451A8646E0D3D4677C915CE5F2980A1D05F6DA56 
{
public:
	// System.Byte Photon.Voice.FrameFlags::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FrameFlags_t451A8646E0D3D4677C915CE5F2980A1D05F6DA56, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// POpusCodec.Enums.OpusApplicationType
struct OpusApplicationType_tB8ADA34C34C04D074BB25ADF80F5528233D1CBE8 
{
public:
	// System.Int32 POpusCodec.Enums.OpusApplicationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OpusApplicationType_tB8ADA34C34C04D074BB25ADF80F5528233D1CBE8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// POpusCodec.Enums.OpusCtlGetRequest
struct OpusCtlGetRequest_t049CC5B0BFF8AB8EB74538A9E0B44A02EEAE4942 
{
public:
	// System.Int32 POpusCodec.Enums.OpusCtlGetRequest::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OpusCtlGetRequest_t049CC5B0BFF8AB8EB74538A9E0B44A02EEAE4942, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// POpusCodec.Enums.OpusCtlSetRequest
struct OpusCtlSetRequest_t0E26A969D2CF66B2E4BD1245BC62EEC012ADA035 
{
public:
	// System.Int32 POpusCodec.Enums.OpusCtlSetRequest::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OpusCtlSetRequest_t0E26A969D2CF66B2E4BD1245BC62EEC012ADA035, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// POpusCodec.Enums.OpusStatusCode
struct OpusStatusCode_tE73A92F28718AA6AD82E3BD5A9B1BAB01CEE908C 
{
public:
	// System.Int32 POpusCodec.Enums.OpusStatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OpusStatusCode_tE73A92F28718AA6AD82E3BD5A9B1BAB01CEE908C, ___value___2)); }
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


// POpusCodec.Enums.SamplingRate
struct SamplingRate_tB35955BC7837DAB0BF0F4D73CAA2BAFD47646F51 
{
public:
	// System.Int32 POpusCodec.Enums.SamplingRate::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SamplingRate_tB35955BC7837DAB0BF0F4D73CAA2BAFD47646F51, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.AudioUtil/VoiceDetectorDummy
struct VoiceDetectorDummy_t13F7DD87648F4DB8C38FCBABC98DBCC270D3A5D0  : public RuntimeObject
{
public:
	// System.DateTime Photon.Voice.AudioUtil/VoiceDetectorDummy::<DetectedTime>k__BackingField
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CDetectedTimeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CDetectedTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VoiceDetectorDummy_t13F7DD87648F4DB8C38FCBABC98DBCC270D3A5D0, ___U3CDetectedTimeU3Ek__BackingField_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CDetectedTimeU3Ek__BackingField_0() const { return ___U3CDetectedTimeU3Ek__BackingField_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CDetectedTimeU3Ek__BackingField_0() { return &___U3CDetectedTimeU3Ek__BackingField_0; }
	inline void set_U3CDetectedTimeU3Ek__BackingField_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CDetectedTimeU3Ek__BackingField_0 = value;
	}
};


// Photon.Voice.ImageBufferNative/PlaneSet
struct PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169 
{
public:
	// System.IntPtr Photon.Voice.ImageBufferNative/PlaneSet::plane0
	intptr_t ___plane0_0;
	// System.IntPtr Photon.Voice.ImageBufferNative/PlaneSet::plane1
	intptr_t ___plane1_1;
	// System.IntPtr Photon.Voice.ImageBufferNative/PlaneSet::plane2
	intptr_t ___plane2_2;
	// System.IntPtr Photon.Voice.ImageBufferNative/PlaneSet::plane3
	intptr_t ___plane3_3;
	// System.Int32 Photon.Voice.ImageBufferNative/PlaneSet::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_plane0_0() { return static_cast<int32_t>(offsetof(PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169, ___plane0_0)); }
	inline intptr_t get_plane0_0() const { return ___plane0_0; }
	inline intptr_t* get_address_of_plane0_0() { return &___plane0_0; }
	inline void set_plane0_0(intptr_t value)
	{
		___plane0_0 = value;
	}

	inline static int32_t get_offset_of_plane1_1() { return static_cast<int32_t>(offsetof(PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169, ___plane1_1)); }
	inline intptr_t get_plane1_1() const { return ___plane1_1; }
	inline intptr_t* get_address_of_plane1_1() { return &___plane1_1; }
	inline void set_plane1_1(intptr_t value)
	{
		___plane1_1 = value;
	}

	inline static int32_t get_offset_of_plane2_2() { return static_cast<int32_t>(offsetof(PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169, ___plane2_2)); }
	inline intptr_t get_plane2_2() const { return ___plane2_2; }
	inline intptr_t* get_address_of_plane2_2() { return &___plane2_2; }
	inline void set_plane2_2(intptr_t value)
	{
		___plane2_2 = value;
	}

	inline static int32_t get_offset_of_plane3_3() { return static_cast<int32_t>(offsetof(PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169, ___plane3_3)); }
	inline intptr_t get_plane3_3() const { return ___plane3_3; }
	inline intptr_t* get_address_of_plane3_3() { return &___plane3_3; }
	inline void set_plane3_3(intptr_t value)
	{
		___plane3_3 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169, ___U3CLengthU3Ek__BackingField_4)); }
	inline int32_t get_U3CLengthU3Ek__BackingField_4() const { return ___U3CLengthU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CLengthU3Ek__BackingField_4() { return &___U3CLengthU3Ek__BackingField_4; }
	inline void set_U3CLengthU3Ek__BackingField_4(int32_t value)
	{
		___U3CLengthU3Ek__BackingField_4 = value;
	}
};


// Photon.Voice.OpusCodec/FrameDuration
struct FrameDuration_tD560D6F059401A66EE1FF773851E931BC1E0CE4D 
{
public:
	// System.Int32 Photon.Voice.OpusCodec/FrameDuration::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FrameDuration_tD560D6F059401A66EE1FF773851E931BC1E0CE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.PhotonTransportProtocol/EventParam
struct EventParam_t286124572F0C3EE6A6ED8F2C96725E09626901F6 
{
public:
	// System.Byte Photon.Voice.PhotonTransportProtocol/EventParam::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventParam_t286124572F0C3EE6A6ED8F2C96725E09626901F6, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.PhotonTransportProtocol/EventSubcode
struct EventSubcode_t7A5F7428F1B6466E42F3130508DF733C68480FB3 
{
public:
	// System.Byte Photon.Voice.PhotonTransportProtocol/EventSubcode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventSubcode_t7A5F7428F1B6466E42F3130508DF733C68480FB3, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.WebRTCAudioLib/Error
struct Error_t9EB59F7E84B1C044178E67535493CBFE775492FA 
{
public:
	// System.Int32 Photon.Voice.WebRTCAudioLib/Error::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Error_t9EB59F7E84B1C044178E67535493CBFE775492FA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.WebRTCAudioLib/Param
struct Param_tEE9CDCCA13E64DCDC2F6D5EE05D7137F775A8676 
{
public:
	// System.Int32 Photon.Voice.WebRTCAudioLib/Param::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Param_tEE9CDCCA13E64DCDC2F6D5EE05D7137F775A8676, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E 
{
public:
	// Photon.Voice.IOS.AudioSessionCategory Photon.Voice.IOS.AudioSessionParameters::Category
	int32_t ___Category_0;
	// Photon.Voice.IOS.AudioSessionMode Photon.Voice.IOS.AudioSessionParameters::Mode
	int32_t ___Mode_1;
	// Photon.Voice.IOS.AudioSessionCategoryOption[] Photon.Voice.IOS.AudioSessionParameters::CategoryOptions
	AudioSessionCategoryOptionU5BU5D_t2A1DE090F6469C030DEF35A1898A4E58CB10018F* ___CategoryOptions_2;

public:
	inline static int32_t get_offset_of_Category_0() { return static_cast<int32_t>(offsetof(AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E, ___Category_0)); }
	inline int32_t get_Category_0() const { return ___Category_0; }
	inline int32_t* get_address_of_Category_0() { return &___Category_0; }
	inline void set_Category_0(int32_t value)
	{
		___Category_0 = value;
	}

	inline static int32_t get_offset_of_Mode_1() { return static_cast<int32_t>(offsetof(AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E, ___Mode_1)); }
	inline int32_t get_Mode_1() const { return ___Mode_1; }
	inline int32_t* get_address_of_Mode_1() { return &___Mode_1; }
	inline void set_Mode_1(int32_t value)
	{
		___Mode_1 = value;
	}

	inline static int32_t get_offset_of_CategoryOptions_2() { return static_cast<int32_t>(offsetof(AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E, ___CategoryOptions_2)); }
	inline AudioSessionCategoryOptionU5BU5D_t2A1DE090F6469C030DEF35A1898A4E58CB10018F* get_CategoryOptions_2() const { return ___CategoryOptions_2; }
	inline AudioSessionCategoryOptionU5BU5D_t2A1DE090F6469C030DEF35A1898A4E58CB10018F** get_address_of_CategoryOptions_2() { return &___CategoryOptions_2; }
	inline void set_CategoryOptions_2(AudioSessionCategoryOptionU5BU5D_t2A1DE090F6469C030DEF35A1898A4E58CB10018F* value)
	{
		___CategoryOptions_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CategoryOptions_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E_marshaled_pinvoke
{
	int32_t ___Category_0;
	int32_t ___Mode_1;
	int32_t* ___CategoryOptions_2;
};
// Native definition for COM marshalling of Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E_marshaled_com
{
	int32_t ___Category_0;
	int32_t ___Mode_1;
	int32_t* ___CategoryOptions_2;
};

// Photon.Voice.FrameBuffer
struct FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77 
{
public:
	// System.Byte[] Photon.Voice.FrameBuffer::array
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array_0;
	// System.Int32 Photon.Voice.FrameBuffer::offset
	int32_t ___offset_1;
	// System.Int32 Photon.Voice.FrameBuffer::count
	int32_t ___count_2;
	// System.IDisposable Photon.Voice.FrameBuffer::disposer
	RuntimeObject* ___disposer_3;
	// System.Boolean Photon.Voice.FrameBuffer::disposed
	bool ___disposed_4;
	// System.Int32 Photon.Voice.FrameBuffer::refCnt
	int32_t ___refCnt_5;
	// System.Runtime.InteropServices.GCHandle Photon.Voice.FrameBuffer::gcHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___gcHandle_6;
	// System.IntPtr Photon.Voice.FrameBuffer::ptr
	intptr_t ___ptr_7;
	// System.Boolean Photon.Voice.FrameBuffer::pinned
	bool ___pinned_8;
	// Photon.Voice.FrameFlags Photon.Voice.FrameBuffer::<Flags>k__BackingField
	uint8_t ___U3CFlagsU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77, ___array_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_array_0() const { return ___array_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_0), (void*)value);
	}

	inline static int32_t get_offset_of_offset_1() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77, ___offset_1)); }
	inline int32_t get_offset_1() const { return ___offset_1; }
	inline int32_t* get_address_of_offset_1() { return &___offset_1; }
	inline void set_offset_1(int32_t value)
	{
		___offset_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_disposer_3() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77, ___disposer_3)); }
	inline RuntimeObject* get_disposer_3() const { return ___disposer_3; }
	inline RuntimeObject** get_address_of_disposer_3() { return &___disposer_3; }
	inline void set_disposer_3(RuntimeObject* value)
	{
		___disposer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposer_3), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}

	inline static int32_t get_offset_of_refCnt_5() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77, ___refCnt_5)); }
	inline int32_t get_refCnt_5() const { return ___refCnt_5; }
	inline int32_t* get_address_of_refCnt_5() { return &___refCnt_5; }
	inline void set_refCnt_5(int32_t value)
	{
		___refCnt_5 = value;
	}

	inline static int32_t get_offset_of_gcHandle_6() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77, ___gcHandle_6)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_gcHandle_6() const { return ___gcHandle_6; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_gcHandle_6() { return &___gcHandle_6; }
	inline void set_gcHandle_6(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___gcHandle_6 = value;
	}

	inline static int32_t get_offset_of_ptr_7() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77, ___ptr_7)); }
	inline intptr_t get_ptr_7() const { return ___ptr_7; }
	inline intptr_t* get_address_of_ptr_7() { return &___ptr_7; }
	inline void set_ptr_7(intptr_t value)
	{
		___ptr_7 = value;
	}

	inline static int32_t get_offset_of_pinned_8() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77, ___pinned_8)); }
	inline bool get_pinned_8() const { return ___pinned_8; }
	inline bool* get_address_of_pinned_8() { return &___pinned_8; }
	inline void set_pinned_8(bool value)
	{
		___pinned_8 = value;
	}

	inline static int32_t get_offset_of_U3CFlagsU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77, ___U3CFlagsU3Ek__BackingField_13)); }
	inline uint8_t get_U3CFlagsU3Ek__BackingField_13() const { return ___U3CFlagsU3Ek__BackingField_13; }
	inline uint8_t* get_address_of_U3CFlagsU3Ek__BackingField_13() { return &___U3CFlagsU3Ek__BackingField_13; }
	inline void set_U3CFlagsU3Ek__BackingField_13(uint8_t value)
	{
		___U3CFlagsU3Ek__BackingField_13 = value;
	}
};

struct FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77_StaticFields
{
public:
	// System.Int32 Photon.Voice.FrameBuffer::statDisposerCreated
	int32_t ___statDisposerCreated_9;
	// System.Int32 Photon.Voice.FrameBuffer::statDisposerDisposed
	int32_t ___statDisposerDisposed_10;
	// System.Int32 Photon.Voice.FrameBuffer::statPinned
	int32_t ___statPinned_11;
	// System.Int32 Photon.Voice.FrameBuffer::statUnpinned
	int32_t ___statUnpinned_12;

public:
	inline static int32_t get_offset_of_statDisposerCreated_9() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77_StaticFields, ___statDisposerCreated_9)); }
	inline int32_t get_statDisposerCreated_9() const { return ___statDisposerCreated_9; }
	inline int32_t* get_address_of_statDisposerCreated_9() { return &___statDisposerCreated_9; }
	inline void set_statDisposerCreated_9(int32_t value)
	{
		___statDisposerCreated_9 = value;
	}

	inline static int32_t get_offset_of_statDisposerDisposed_10() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77_StaticFields, ___statDisposerDisposed_10)); }
	inline int32_t get_statDisposerDisposed_10() const { return ___statDisposerDisposed_10; }
	inline int32_t* get_address_of_statDisposerDisposed_10() { return &___statDisposerDisposed_10; }
	inline void set_statDisposerDisposed_10(int32_t value)
	{
		___statDisposerDisposed_10 = value;
	}

	inline static int32_t get_offset_of_statPinned_11() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77_StaticFields, ___statPinned_11)); }
	inline int32_t get_statPinned_11() const { return ___statPinned_11; }
	inline int32_t* get_address_of_statPinned_11() { return &___statPinned_11; }
	inline void set_statPinned_11(int32_t value)
	{
		___statPinned_11 = value;
	}

	inline static int32_t get_offset_of_statUnpinned_12() { return static_cast<int32_t>(offsetof(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77_StaticFields, ___statUnpinned_12)); }
	inline int32_t get_statUnpinned_12() const { return ___statUnpinned_12; }
	inline int32_t* get_address_of_statUnpinned_12() { return &___statUnpinned_12; }
	inline void set_statUnpinned_12(int32_t value)
	{
		___statUnpinned_12 = value;
	}
};

// Native definition for P/Invoke marshalling of Photon.Voice.FrameBuffer
struct FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___array_0;
	int32_t ___offset_1;
	int32_t ___count_2;
	RuntimeObject* ___disposer_3;
	int32_t ___disposed_4;
	int32_t ___refCnt_5;
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___gcHandle_6;
	intptr_t ___ptr_7;
	int32_t ___pinned_8;
	uint8_t ___U3CFlagsU3Ek__BackingField_13;
};
// Native definition for COM marshalling of Photon.Voice.FrameBuffer
struct FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___array_0;
	int32_t ___offset_1;
	int32_t ___count_2;
	RuntimeObject* ___disposer_3;
	int32_t ___disposed_4;
	int32_t ___refCnt_5;
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___gcHandle_6;
	intptr_t ___ptr_7;
	int32_t ___pinned_8;
	uint8_t ___U3CFlagsU3Ek__BackingField_13;
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

// POpusCodec.OpusEncoder
struct OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823  : public RuntimeObject
{
public:
	// System.IntPtr POpusCodec.OpusEncoder::_handle
	intptr_t ____handle_1;
	// System.Int32 POpusCodec.OpusEncoder::_frameSizePerChannel
	int32_t ____frameSizePerChannel_3;
	// POpusCodec.Enums.SamplingRate POpusCodec.OpusEncoder::_inputSamplingRate
	int32_t ____inputSamplingRate_4;
	// POpusCodec.Enums.Channels POpusCodec.OpusEncoder::_inputChannels
	int32_t ____inputChannels_5;
	// System.Byte[] POpusCodec.OpusEncoder::writePacket
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___writePacket_6;
	// POpusCodec.Enums.Delay POpusCodec.OpusEncoder::_encoderDelay
	int32_t ____encoderDelay_8;

public:
	inline static int32_t get_offset_of__handle_1() { return static_cast<int32_t>(offsetof(OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823, ____handle_1)); }
	inline intptr_t get__handle_1() const { return ____handle_1; }
	inline intptr_t* get_address_of__handle_1() { return &____handle_1; }
	inline void set__handle_1(intptr_t value)
	{
		____handle_1 = value;
	}

	inline static int32_t get_offset_of__frameSizePerChannel_3() { return static_cast<int32_t>(offsetof(OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823, ____frameSizePerChannel_3)); }
	inline int32_t get__frameSizePerChannel_3() const { return ____frameSizePerChannel_3; }
	inline int32_t* get_address_of__frameSizePerChannel_3() { return &____frameSizePerChannel_3; }
	inline void set__frameSizePerChannel_3(int32_t value)
	{
		____frameSizePerChannel_3 = value;
	}

	inline static int32_t get_offset_of__inputSamplingRate_4() { return static_cast<int32_t>(offsetof(OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823, ____inputSamplingRate_4)); }
	inline int32_t get__inputSamplingRate_4() const { return ____inputSamplingRate_4; }
	inline int32_t* get_address_of__inputSamplingRate_4() { return &____inputSamplingRate_4; }
	inline void set__inputSamplingRate_4(int32_t value)
	{
		____inputSamplingRate_4 = value;
	}

	inline static int32_t get_offset_of__inputChannels_5() { return static_cast<int32_t>(offsetof(OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823, ____inputChannels_5)); }
	inline int32_t get__inputChannels_5() const { return ____inputChannels_5; }
	inline int32_t* get_address_of__inputChannels_5() { return &____inputChannels_5; }
	inline void set__inputChannels_5(int32_t value)
	{
		____inputChannels_5 = value;
	}

	inline static int32_t get_offset_of_writePacket_6() { return static_cast<int32_t>(offsetof(OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823, ___writePacket_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_writePacket_6() const { return ___writePacket_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_writePacket_6() { return &___writePacket_6; }
	inline void set_writePacket_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___writePacket_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writePacket_6), (void*)value);
	}

	inline static int32_t get_offset_of__encoderDelay_8() { return static_cast<int32_t>(offsetof(OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823, ____encoderDelay_8)); }
	inline int32_t get__encoderDelay_8() const { return ____encoderDelay_8; }
	inline int32_t* get_address_of__encoderDelay_8() { return &____encoderDelay_8; }
	inline void set__encoderDelay_8(int32_t value)
	{
		____encoderDelay_8 = value;
	}
};

struct OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823_StaticFields
{
public:
	// System.ArraySegment`1<System.Byte> POpusCodec.OpusEncoder::EmptyBuffer
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___EmptyBuffer_7;

public:
	inline static int32_t get_offset_of_EmptyBuffer_7() { return static_cast<int32_t>(offsetof(OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823_StaticFields, ___EmptyBuffer_7)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_EmptyBuffer_7() const { return ___EmptyBuffer_7; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_EmptyBuffer_7() { return &___EmptyBuffer_7; }
	inline void set_EmptyBuffer_7(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___EmptyBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___EmptyBuffer_7))->____array_0), (void*)NULL);
	}
};


// POpusCodec.OpusException
struct OpusException_t1A61902C00340ACDC9D674DE351B1C666CCD1573  : public Exception_t
{
public:
	// POpusCodec.Enums.OpusStatusCode POpusCodec.OpusException::_statusCode
	int32_t ____statusCode_17;

public:
	inline static int32_t get_offset_of__statusCode_17() { return static_cast<int32_t>(offsetof(OpusException_t1A61902C00340ACDC9D674DE351B1C666CCD1573, ____statusCode_17)); }
	inline int32_t get__statusCode_17() const { return ____statusCode_17; }
	inline int32_t* get_address_of__statusCode_17() { return &____statusCode_17; }
	inline void set__statusCode_17(int32_t value)
	{
		____statusCode_17 = value;
	}
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


// Photon.Voice.VoiceInfo
struct VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 
{
public:
	// Photon.Voice.Codec Photon.Voice.VoiceInfo::<Codec>k__BackingField
	int32_t ___U3CCodecU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.VoiceInfo::<SamplingRate>k__BackingField
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	// System.Int32 Photon.Voice.VoiceInfo::<Channels>k__BackingField
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	// System.Int32 Photon.Voice.VoiceInfo::<FrameDurationUs>k__BackingField
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_3;
	// System.Int32 Photon.Voice.VoiceInfo::<Bitrate>k__BackingField
	int32_t ___U3CBitrateU3Ek__BackingField_4;
	// System.Int32 Photon.Voice.VoiceInfo::<Width>k__BackingField
	int32_t ___U3CWidthU3Ek__BackingField_5;
	// System.Int32 Photon.Voice.VoiceInfo::<Height>k__BackingField
	int32_t ___U3CHeightU3Ek__BackingField_6;
	// System.Int32 Photon.Voice.VoiceInfo::<FPS>k__BackingField
	int32_t ___U3CFPSU3Ek__BackingField_7;
	// System.Int32 Photon.Voice.VoiceInfo::<KeyFrameInt>k__BackingField
	int32_t ___U3CKeyFrameIntU3Ek__BackingField_8;
	// System.Object Photon.Voice.VoiceInfo::<UserData>k__BackingField
	RuntimeObject * ___U3CUserDataU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CCodecU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CCodecU3Ek__BackingField_0)); }
	inline int32_t get_U3CCodecU3Ek__BackingField_0() const { return ___U3CCodecU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCodecU3Ek__BackingField_0() { return &___U3CCodecU3Ek__BackingField_0; }
	inline void set_U3CCodecU3Ek__BackingField_0(int32_t value)
	{
		___U3CCodecU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSamplingRateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CSamplingRateU3Ek__BackingField_1)); }
	inline int32_t get_U3CSamplingRateU3Ek__BackingField_1() const { return ___U3CSamplingRateU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CSamplingRateU3Ek__BackingField_1() { return &___U3CSamplingRateU3Ek__BackingField_1; }
	inline void set_U3CSamplingRateU3Ek__BackingField_1(int32_t value)
	{
		___U3CSamplingRateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CChannelsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CChannelsU3Ek__BackingField_2)); }
	inline int32_t get_U3CChannelsU3Ek__BackingField_2() const { return ___U3CChannelsU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CChannelsU3Ek__BackingField_2() { return &___U3CChannelsU3Ek__BackingField_2; }
	inline void set_U3CChannelsU3Ek__BackingField_2(int32_t value)
	{
		___U3CChannelsU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CFrameDurationUsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CFrameDurationUsU3Ek__BackingField_3)); }
	inline int32_t get_U3CFrameDurationUsU3Ek__BackingField_3() const { return ___U3CFrameDurationUsU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CFrameDurationUsU3Ek__BackingField_3() { return &___U3CFrameDurationUsU3Ek__BackingField_3; }
	inline void set_U3CFrameDurationUsU3Ek__BackingField_3(int32_t value)
	{
		___U3CFrameDurationUsU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CBitrateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CBitrateU3Ek__BackingField_4)); }
	inline int32_t get_U3CBitrateU3Ek__BackingField_4() const { return ___U3CBitrateU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CBitrateU3Ek__BackingField_4() { return &___U3CBitrateU3Ek__BackingField_4; }
	inline void set_U3CBitrateU3Ek__BackingField_4(int32_t value)
	{
		___U3CBitrateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CWidthU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CWidthU3Ek__BackingField_5)); }
	inline int32_t get_U3CWidthU3Ek__BackingField_5() const { return ___U3CWidthU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CWidthU3Ek__BackingField_5() { return &___U3CWidthU3Ek__BackingField_5; }
	inline void set_U3CWidthU3Ek__BackingField_5(int32_t value)
	{
		___U3CWidthU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CHeightU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CHeightU3Ek__BackingField_6)); }
	inline int32_t get_U3CHeightU3Ek__BackingField_6() const { return ___U3CHeightU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CHeightU3Ek__BackingField_6() { return &___U3CHeightU3Ek__BackingField_6; }
	inline void set_U3CHeightU3Ek__BackingField_6(int32_t value)
	{
		___U3CHeightU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CFPSU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CFPSU3Ek__BackingField_7)); }
	inline int32_t get_U3CFPSU3Ek__BackingField_7() const { return ___U3CFPSU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CFPSU3Ek__BackingField_7() { return &___U3CFPSU3Ek__BackingField_7; }
	inline void set_U3CFPSU3Ek__BackingField_7(int32_t value)
	{
		___U3CFPSU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CKeyFrameIntU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CKeyFrameIntU3Ek__BackingField_8)); }
	inline int32_t get_U3CKeyFrameIntU3Ek__BackingField_8() const { return ___U3CKeyFrameIntU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CKeyFrameIntU3Ek__BackingField_8() { return &___U3CKeyFrameIntU3Ek__BackingField_8; }
	inline void set_U3CKeyFrameIntU3Ek__BackingField_8(int32_t value)
	{
		___U3CKeyFrameIntU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CUserDataU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3, ___U3CUserDataU3Ek__BackingField_9)); }
	inline RuntimeObject * get_U3CUserDataU3Ek__BackingField_9() const { return ___U3CUserDataU3Ek__BackingField_9; }
	inline RuntimeObject ** get_address_of_U3CUserDataU3Ek__BackingField_9() { return &___U3CUserDataU3Ek__BackingField_9; }
	inline void set_U3CUserDataU3Ek__BackingField_9(RuntimeObject * value)
	{
		___U3CUserDataU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserDataU3Ek__BackingField_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Photon.Voice.VoiceInfo
struct VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3_marshaled_pinvoke
{
	int32_t ___U3CCodecU3Ek__BackingField_0;
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_3;
	int32_t ___U3CBitrateU3Ek__BackingField_4;
	int32_t ___U3CWidthU3Ek__BackingField_5;
	int32_t ___U3CHeightU3Ek__BackingField_6;
	int32_t ___U3CFPSU3Ek__BackingField_7;
	int32_t ___U3CKeyFrameIntU3Ek__BackingField_8;
	Il2CppIUnknown* ___U3CUserDataU3Ek__BackingField_9;
};
// Native definition for COM marshalling of Photon.Voice.VoiceInfo
struct VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3_marshaled_com
{
	int32_t ___U3CCodecU3Ek__BackingField_0;
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_3;
	int32_t ___U3CBitrateU3Ek__BackingField_4;
	int32_t ___U3CWidthU3Ek__BackingField_5;
	int32_t ___U3CHeightU3Ek__BackingField_6;
	int32_t ___U3CFPSU3Ek__BackingField_7;
	int32_t ___U3CKeyFrameIntU3Ek__BackingField_8;
	Il2CppIUnknown* ___U3CUserDataU3Ek__BackingField_9;
};

// Photon.Voice.Unity.AndroidAudioInAEC/DataCallback
struct DataCallback_t309F2AE294E34778F926EDB79F958D6EBCC73100  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// System.Action`1<System.Int16[]> Photon.Voice.Unity.AndroidAudioInAEC/DataCallback::callback
	Action_1_t36DA73B27593F7623AE0D8CA71F9F3412BB9E635 * ___callback_4;
	// System.IntPtr Photon.Voice.Unity.AndroidAudioInAEC/DataCallback::javaBuf
	intptr_t ___javaBuf_5;
	// System.Int32 Photon.Voice.Unity.AndroidAudioInAEC/DataCallback::cntFrame
	int32_t ___cntFrame_6;
	// System.Int32 Photon.Voice.Unity.AndroidAudioInAEC/DataCallback::cntShort
	int32_t ___cntShort_7;

public:
	inline static int32_t get_offset_of_callback_4() { return static_cast<int32_t>(offsetof(DataCallback_t309F2AE294E34778F926EDB79F958D6EBCC73100, ___callback_4)); }
	inline Action_1_t36DA73B27593F7623AE0D8CA71F9F3412BB9E635 * get_callback_4() const { return ___callback_4; }
	inline Action_1_t36DA73B27593F7623AE0D8CA71F9F3412BB9E635 ** get_address_of_callback_4() { return &___callback_4; }
	inline void set_callback_4(Action_1_t36DA73B27593F7623AE0D8CA71F9F3412BB9E635 * value)
	{
		___callback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_4), (void*)value);
	}

	inline static int32_t get_offset_of_javaBuf_5() { return static_cast<int32_t>(offsetof(DataCallback_t309F2AE294E34778F926EDB79F958D6EBCC73100, ___javaBuf_5)); }
	inline intptr_t get_javaBuf_5() const { return ___javaBuf_5; }
	inline intptr_t* get_address_of_javaBuf_5() { return &___javaBuf_5; }
	inline void set_javaBuf_5(intptr_t value)
	{
		___javaBuf_5 = value;
	}

	inline static int32_t get_offset_of_cntFrame_6() { return static_cast<int32_t>(offsetof(DataCallback_t309F2AE294E34778F926EDB79F958D6EBCC73100, ___cntFrame_6)); }
	inline int32_t get_cntFrame_6() const { return ___cntFrame_6; }
	inline int32_t* get_address_of_cntFrame_6() { return &___cntFrame_6; }
	inline void set_cntFrame_6(int32_t value)
	{
		___cntFrame_6 = value;
	}

	inline static int32_t get_offset_of_cntShort_7() { return static_cast<int32_t>(offsetof(DataCallback_t309F2AE294E34778F926EDB79F958D6EBCC73100, ___cntShort_7)); }
	inline int32_t get_cntShort_7() const { return ___cntShort_7; }
	inline int32_t* get_address_of_cntShort_7() { return &___cntShort_7; }
	inline void set_cntShort_7(int32_t value)
	{
		___cntShort_7 = value;
	}
};


// Photon.Voice.AudioUtil/VoiceDetectorFloat
struct VoiceDetectorFloat_t07D26837C6B174754CB59564212B09934653EEFD  : public VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC
{
public:

public:
};


// Photon.Voice.AudioUtil/VoiceDetectorShort
struct VoiceDetectorShort_tEB57780C72B1E5D60E7584C80B244E40B4C0DFDB  : public VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4
{
public:

public:
};


// Photon.Voice.OpusCodec/EncoderFloat
struct EncoderFloat_t59F828BE852C2C5049643A7DA8A76AE0DFCD35D8  : public Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620
{
public:

public:
};


// Photon.Voice.OpusCodec/EncoderShort
struct EncoderShort_t1B066515A9C7163E7B94B8FEA3E07B88303D687B  : public Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2
{
public:

public:
};


// Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40
struct U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B  : public RuntimeObject
{
public:
	// System.Int32 Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Photon.Voice.RemoteVoiceInfo Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>2__current
	RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A * ___U3CU3E2__current_1;
	// System.Int32 Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Photon.Voice.VoiceClient Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>4__this
	VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>> Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>7__wrap1
	Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B  ___U3CU3E7__wrap1_4;
	// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>> Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<playerVoices>5__3
	KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  ___U3CplayerVoicesU3E5__3_5;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,Photon.Voice.RemoteVoice> Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>7__wrap3
	Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E  ___U3CU3E7__wrap3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B, ___U3CU3E2__current_1)); }
	inline RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B, ___U3CU3E4__this_3)); }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B, ___U3CU3E7__wrap1_4)); }
	inline Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B  value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_4))->___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CplayerVoicesU3E5__3_5() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B, ___U3CplayerVoicesU3E5__3_5)); }
	inline KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  get_U3CplayerVoicesU3E5__3_5() const { return ___U3CplayerVoicesU3E5__3_5; }
	inline KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 * get_address_of_U3CplayerVoicesU3E5__3_5() { return &___U3CplayerVoicesU3E5__3_5; }
	inline void set_U3CplayerVoicesU3E5__3_5(KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  value)
	{
		___U3CplayerVoicesU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CplayerVoicesU3E5__3_5))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_6() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B, ___U3CU3E7__wrap3_6)); }
	inline Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E  get_U3CU3E7__wrap3_6() const { return ___U3CU3E7__wrap3_6; }
	inline Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E * get_address_of_U3CU3E7__wrap3_6() { return &___U3CU3E7__wrap3_6; }
	inline void set_U3CU3E7__wrap3_6(Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E  value)
	{
		___U3CU3E7__wrap3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap3_6))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap3_6))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Action`1<Photon.Voice.FrameOut`1<System.Single>>
struct Action_1_t0B1D8E060FEAA27D51B6AD68D56361DDCF6D383F  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Int16[]>
struct Action_1_t36DA73B27593F7623AE0D8CA71F9F3412BB9E635  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<System.Int32,System.IntPtr,System.Int32>
struct Action_3_t897FF49CFBEBC3E519C4E2672B4EA0BA7B40DBA3  : public MulticastDelegate_t
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


// Photon.Voice.LocalVoice
struct LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9  : public RuntimeObject
{
public:
	// System.Byte Photon.Voice.LocalVoice::<InterestGroup>k__BackingField
	uint8_t ___U3CInterestGroupU3Ek__BackingField_1;
	// System.Boolean Photon.Voice.LocalVoice::transmitEnabled
	bool ___transmitEnabled_2;
	// System.Int32 Photon.Voice.LocalVoice::<FramesSent>k__BackingField
	int32_t ___U3CFramesSentU3Ek__BackingField_3;
	// System.Int32 Photon.Voice.LocalVoice::<FramesSentBytes>k__BackingField
	int32_t ___U3CFramesSentBytesU3Ek__BackingField_4;
	// System.Boolean Photon.Voice.LocalVoice::<Reliable>k__BackingField
	bool ___U3CReliableU3Ek__BackingField_5;
	// System.Boolean Photon.Voice.LocalVoice::<Encrypt>k__BackingField
	bool ___U3CEncryptU3Ek__BackingField_6;
	// Photon.Voice.IServiceable Photon.Voice.LocalVoice::<LocalUserServiceable>k__BackingField
	RuntimeObject* ___U3CLocalUserServiceableU3Ek__BackingField_7;
	// System.Boolean Photon.Voice.LocalVoice::debugEchoMode
	bool ___debugEchoMode_8;
	// Photon.Voice.VoiceInfo Photon.Voice.LocalVoice::info
	VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___info_9;
	// Photon.Voice.IEncoder Photon.Voice.LocalVoice::encoder
	RuntimeObject* ___encoder_10;
	// System.Byte Photon.Voice.LocalVoice::id
	uint8_t ___id_11;
	// System.Int32 Photon.Voice.LocalVoice::channelId
	int32_t ___channelId_12;
	// System.Byte Photon.Voice.LocalVoice::evNumber
	uint8_t ___evNumber_13;
	// Photon.Voice.VoiceClient Photon.Voice.LocalVoice::voiceClient
	VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * ___voiceClient_14;
	// System.ArraySegment`1<System.Byte> Photon.Voice.LocalVoice::configFrame
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___configFrame_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Photon.Voice.LocalVoice::disposed
	bool ___disposed_16;
	// System.Object Photon.Voice.LocalVoice::disposeLock
	RuntimeObject * ___disposeLock_17;
	// System.Int32 Photon.Voice.LocalVoice::lastTransmitTime
	int32_t ___lastTransmitTime_19;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32> Photon.Voice.LocalVoice::eventTimestamps
	Dictionary_2_t4A0CF6A7FCEF18F04F5F245859A861E8BE4BFE75 * ___eventTimestamps_20;
	// Photon.Voice.SpacingProfile Photon.Voice.LocalVoice::sendSpacingProfile
	SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68 * ___sendSpacingProfile_21;

public:
	inline static int32_t get_offset_of_U3CInterestGroupU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___U3CInterestGroupU3Ek__BackingField_1)); }
	inline uint8_t get_U3CInterestGroupU3Ek__BackingField_1() const { return ___U3CInterestGroupU3Ek__BackingField_1; }
	inline uint8_t* get_address_of_U3CInterestGroupU3Ek__BackingField_1() { return &___U3CInterestGroupU3Ek__BackingField_1; }
	inline void set_U3CInterestGroupU3Ek__BackingField_1(uint8_t value)
	{
		___U3CInterestGroupU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_transmitEnabled_2() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___transmitEnabled_2)); }
	inline bool get_transmitEnabled_2() const { return ___transmitEnabled_2; }
	inline bool* get_address_of_transmitEnabled_2() { return &___transmitEnabled_2; }
	inline void set_transmitEnabled_2(bool value)
	{
		___transmitEnabled_2 = value;
	}

	inline static int32_t get_offset_of_U3CFramesSentU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___U3CFramesSentU3Ek__BackingField_3)); }
	inline int32_t get_U3CFramesSentU3Ek__BackingField_3() const { return ___U3CFramesSentU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CFramesSentU3Ek__BackingField_3() { return &___U3CFramesSentU3Ek__BackingField_3; }
	inline void set_U3CFramesSentU3Ek__BackingField_3(int32_t value)
	{
		___U3CFramesSentU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CFramesSentBytesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___U3CFramesSentBytesU3Ek__BackingField_4)); }
	inline int32_t get_U3CFramesSentBytesU3Ek__BackingField_4() const { return ___U3CFramesSentBytesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CFramesSentBytesU3Ek__BackingField_4() { return &___U3CFramesSentBytesU3Ek__BackingField_4; }
	inline void set_U3CFramesSentBytesU3Ek__BackingField_4(int32_t value)
	{
		___U3CFramesSentBytesU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CReliableU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___U3CReliableU3Ek__BackingField_5)); }
	inline bool get_U3CReliableU3Ek__BackingField_5() const { return ___U3CReliableU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CReliableU3Ek__BackingField_5() { return &___U3CReliableU3Ek__BackingField_5; }
	inline void set_U3CReliableU3Ek__BackingField_5(bool value)
	{
		___U3CReliableU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CEncryptU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___U3CEncryptU3Ek__BackingField_6)); }
	inline bool get_U3CEncryptU3Ek__BackingField_6() const { return ___U3CEncryptU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CEncryptU3Ek__BackingField_6() { return &___U3CEncryptU3Ek__BackingField_6; }
	inline void set_U3CEncryptU3Ek__BackingField_6(bool value)
	{
		___U3CEncryptU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CLocalUserServiceableU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___U3CLocalUserServiceableU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CLocalUserServiceableU3Ek__BackingField_7() const { return ___U3CLocalUserServiceableU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CLocalUserServiceableU3Ek__BackingField_7() { return &___U3CLocalUserServiceableU3Ek__BackingField_7; }
	inline void set_U3CLocalUserServiceableU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CLocalUserServiceableU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocalUserServiceableU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_debugEchoMode_8() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___debugEchoMode_8)); }
	inline bool get_debugEchoMode_8() const { return ___debugEchoMode_8; }
	inline bool* get_address_of_debugEchoMode_8() { return &___debugEchoMode_8; }
	inline void set_debugEchoMode_8(bool value)
	{
		___debugEchoMode_8 = value;
	}

	inline static int32_t get_offset_of_info_9() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___info_9)); }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  get_info_9() const { return ___info_9; }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * get_address_of_info_9() { return &___info_9; }
	inline void set_info_9(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  value)
	{
		___info_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___info_9))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
	}

	inline static int32_t get_offset_of_encoder_10() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___encoder_10)); }
	inline RuntimeObject* get_encoder_10() const { return ___encoder_10; }
	inline RuntimeObject** get_address_of_encoder_10() { return &___encoder_10; }
	inline void set_encoder_10(RuntimeObject* value)
	{
		___encoder_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_10), (void*)value);
	}

	inline static int32_t get_offset_of_id_11() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___id_11)); }
	inline uint8_t get_id_11() const { return ___id_11; }
	inline uint8_t* get_address_of_id_11() { return &___id_11; }
	inline void set_id_11(uint8_t value)
	{
		___id_11 = value;
	}

	inline static int32_t get_offset_of_channelId_12() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___channelId_12)); }
	inline int32_t get_channelId_12() const { return ___channelId_12; }
	inline int32_t* get_address_of_channelId_12() { return &___channelId_12; }
	inline void set_channelId_12(int32_t value)
	{
		___channelId_12 = value;
	}

	inline static int32_t get_offset_of_evNumber_13() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___evNumber_13)); }
	inline uint8_t get_evNumber_13() const { return ___evNumber_13; }
	inline uint8_t* get_address_of_evNumber_13() { return &___evNumber_13; }
	inline void set_evNumber_13(uint8_t value)
	{
		___evNumber_13 = value;
	}

	inline static int32_t get_offset_of_voiceClient_14() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___voiceClient_14)); }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * get_voiceClient_14() const { return ___voiceClient_14; }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E ** get_address_of_voiceClient_14() { return &___voiceClient_14; }
	inline void set_voiceClient_14(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * value)
	{
		___voiceClient_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceClient_14), (void*)value);
	}

	inline static int32_t get_offset_of_configFrame_15() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___configFrame_15)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_configFrame_15() const { return ___configFrame_15; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_configFrame_15() { return &___configFrame_15; }
	inline void set_configFrame_15(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___configFrame_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___configFrame_15))->____array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_disposed_16() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___disposed_16)); }
	inline bool get_disposed_16() const { return ___disposed_16; }
	inline bool* get_address_of_disposed_16() { return &___disposed_16; }
	inline void set_disposed_16(bool value)
	{
		___disposed_16 = value;
	}

	inline static int32_t get_offset_of_disposeLock_17() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___disposeLock_17)); }
	inline RuntimeObject * get_disposeLock_17() const { return ___disposeLock_17; }
	inline RuntimeObject ** get_address_of_disposeLock_17() { return &___disposeLock_17; }
	inline void set_disposeLock_17(RuntimeObject * value)
	{
		___disposeLock_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposeLock_17), (void*)value);
	}

	inline static int32_t get_offset_of_lastTransmitTime_19() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___lastTransmitTime_19)); }
	inline int32_t get_lastTransmitTime_19() const { return ___lastTransmitTime_19; }
	inline int32_t* get_address_of_lastTransmitTime_19() { return &___lastTransmitTime_19; }
	inline void set_lastTransmitTime_19(int32_t value)
	{
		___lastTransmitTime_19 = value;
	}

	inline static int32_t get_offset_of_eventTimestamps_20() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___eventTimestamps_20)); }
	inline Dictionary_2_t4A0CF6A7FCEF18F04F5F245859A861E8BE4BFE75 * get_eventTimestamps_20() const { return ___eventTimestamps_20; }
	inline Dictionary_2_t4A0CF6A7FCEF18F04F5F245859A861E8BE4BFE75 ** get_address_of_eventTimestamps_20() { return &___eventTimestamps_20; }
	inline void set_eventTimestamps_20(Dictionary_2_t4A0CF6A7FCEF18F04F5F245859A861E8BE4BFE75 * value)
	{
		___eventTimestamps_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventTimestamps_20), (void*)value);
	}

	inline static int32_t get_offset_of_sendSpacingProfile_21() { return static_cast<int32_t>(offsetof(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9, ___sendSpacingProfile_21)); }
	inline SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68 * get_sendSpacingProfile_21() const { return ___sendSpacingProfile_21; }
	inline SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68 ** get_address_of_sendSpacingProfile_21() { return &___sendSpacingProfile_21; }
	inline void set_sendSpacingProfile_21(SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68 * value)
	{
		___sendSpacingProfile_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendSpacingProfile_21), (void*)value);
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Photon.Voice.RemoteVoiceInfo
struct RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A  : public RuntimeObject
{
public:
	// Photon.Voice.VoiceInfo Photon.Voice.RemoteVoiceInfo::<Info>k__BackingField
	VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___U3CInfoU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.RemoteVoiceInfo::<ChannelId>k__BackingField
	int32_t ___U3CChannelIdU3Ek__BackingField_1;
	// System.Int32 Photon.Voice.RemoteVoiceInfo::<PlayerId>k__BackingField
	int32_t ___U3CPlayerIdU3Ek__BackingField_2;
	// System.Byte Photon.Voice.RemoteVoiceInfo::<VoiceId>k__BackingField
	uint8_t ___U3CVoiceIdU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CInfoU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A, ___U3CInfoU3Ek__BackingField_0)); }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  get_U3CInfoU3Ek__BackingField_0() const { return ___U3CInfoU3Ek__BackingField_0; }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * get_address_of_U3CInfoU3Ek__BackingField_0() { return &___U3CInfoU3Ek__BackingField_0; }
	inline void set_U3CInfoU3Ek__BackingField_0(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  value)
	{
		___U3CInfoU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CInfoU3Ek__BackingField_0))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CChannelIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A, ___U3CChannelIdU3Ek__BackingField_1)); }
	inline int32_t get_U3CChannelIdU3Ek__BackingField_1() const { return ___U3CChannelIdU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CChannelIdU3Ek__BackingField_1() { return &___U3CChannelIdU3Ek__BackingField_1; }
	inline void set_U3CChannelIdU3Ek__BackingField_1(int32_t value)
	{
		___U3CChannelIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPlayerIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A, ___U3CPlayerIdU3Ek__BackingField_2)); }
	inline int32_t get_U3CPlayerIdU3Ek__BackingField_2() const { return ___U3CPlayerIdU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CPlayerIdU3Ek__BackingField_2() { return &___U3CPlayerIdU3Ek__BackingField_2; }
	inline void set_U3CPlayerIdU3Ek__BackingField_2(int32_t value)
	{
		___U3CPlayerIdU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CVoiceIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A, ___U3CVoiceIdU3Ek__BackingField_3)); }
	inline uint8_t get_U3CVoiceIdU3Ek__BackingField_3() const { return ___U3CVoiceIdU3Ek__BackingField_3; }
	inline uint8_t* get_address_of_U3CVoiceIdU3Ek__BackingField_3() { return &___U3CVoiceIdU3Ek__BackingField_3; }
	inline void set_U3CVoiceIdU3Ek__BackingField_3(uint8_t value)
	{
		___U3CVoiceIdU3Ek__BackingField_3 = value;
	}
};


// Photon.Voice.RemoteVoiceOptions
struct RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE 
{
public:
	// System.Action Photon.Voice.RemoteVoiceOptions::<OnRemoteVoiceRemoveAction>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0;
	// Photon.Voice.IDecoder Photon.Voice.RemoteVoiceOptions::<Decoder>k__BackingField
	RuntimeObject* ___U3CDecoderU3Ek__BackingField_1;
	// Photon.Voice.ILogger Photon.Voice.RemoteVoiceOptions::logger
	RuntimeObject* ___logger_2;
	// Photon.Voice.VoiceInfo Photon.Voice.RemoteVoiceOptions::voiceInfo
	VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___voiceInfo_3;
	// System.String Photon.Voice.RemoteVoiceOptions::<logPrefix>k__BackingField
	String_t* ___U3ClogPrefixU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE, ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0() const { return ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0() { return &___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0; }
	inline void set_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDecoderU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE, ___U3CDecoderU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CDecoderU3Ek__BackingField_1() const { return ___U3CDecoderU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CDecoderU3Ek__BackingField_1() { return &___U3CDecoderU3Ek__BackingField_1; }
	inline void set_U3CDecoderU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CDecoderU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDecoderU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_logger_2() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE, ___logger_2)); }
	inline RuntimeObject* get_logger_2() const { return ___logger_2; }
	inline RuntimeObject** get_address_of_logger_2() { return &___logger_2; }
	inline void set_logger_2(RuntimeObject* value)
	{
		___logger_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_2), (void*)value);
	}

	inline static int32_t get_offset_of_voiceInfo_3() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE, ___voiceInfo_3)); }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  get_voiceInfo_3() const { return ___voiceInfo_3; }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * get_address_of_voiceInfo_3() { return &___voiceInfo_3; }
	inline void set_voiceInfo_3(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  value)
	{
		___voiceInfo_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___voiceInfo_3))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3ClogPrefixU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE, ___U3ClogPrefixU3Ek__BackingField_4)); }
	inline String_t* get_U3ClogPrefixU3Ek__BackingField_4() const { return ___U3ClogPrefixU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3ClogPrefixU3Ek__BackingField_4() { return &___U3ClogPrefixU3Ek__BackingField_4; }
	inline void set_U3ClogPrefixU3Ek__BackingField_4(String_t* value)
	{
		___U3ClogPrefixU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClogPrefixU3Ek__BackingField_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Photon.Voice.RemoteVoiceOptions
struct RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE_marshaled_pinvoke
{
	Il2CppMethodPointer ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0;
	RuntimeObject* ___U3CDecoderU3Ek__BackingField_1;
	RuntimeObject* ___logger_2;
	VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3_marshaled_pinvoke ___voiceInfo_3;
	char* ___U3ClogPrefixU3Ek__BackingField_4;
};
// Native definition for COM marshalling of Photon.Voice.RemoteVoiceOptions
struct RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE_marshaled_com
{
	Il2CppMethodPointer ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0;
	RuntimeObject* ___U3CDecoderU3Ek__BackingField_1;
	RuntimeObject* ___logger_2;
	VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3_marshaled_com ___voiceInfo_3;
	Il2CppChar* ___U3ClogPrefixU3Ek__BackingField_4;
};

// Photon.Voice.IOS.AudioInChangeNotifier/CallbackDelegate
struct CallbackDelegate_t88EA3BC17AD939181ADBC67CEDFF0C3CF6BEE417  : public MulticastDelegate_t
{
public:

public:
};


// Photon.Voice.IOS.AudioInPusher/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t8C27BB38028CD866DA8C6A7227FA67DC356319E9  : public RuntimeObject
{
public:
	// Photon.Voice.IOS.AudioSessionParameters Photon.Voice.IOS.AudioInPusher/<>c__DisplayClass6_0::sessParam
	AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E  ___sessParam_0;
	// Photon.Voice.IOS.AudioInPusher Photon.Voice.IOS.AudioInPusher/<>c__DisplayClass6_0::<>4__this
	AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD * ___U3CU3E4__this_1;
	// Photon.Voice.ILogger Photon.Voice.IOS.AudioInPusher/<>c__DisplayClass6_0::logger
	RuntimeObject* ___logger_2;

public:
	inline static int32_t get_offset_of_sessParam_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t8C27BB38028CD866DA8C6A7227FA67DC356319E9, ___sessParam_0)); }
	inline AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E  get_sessParam_0() const { return ___sessParam_0; }
	inline AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E * get_address_of_sessParam_0() { return &___sessParam_0; }
	inline void set_sessParam_0(AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E  value)
	{
		___sessParam_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sessParam_0))->___CategoryOptions_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t8C27BB38028CD866DA8C6A7227FA67DC356319E9, ___U3CU3E4__this_1)); }
	inline AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}

	inline static int32_t get_offset_of_logger_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t8C27BB38028CD866DA8C6A7227FA67DC356319E9, ___logger_2)); }
	inline RuntimeObject* get_logger_2() const { return ___logger_2; }
	inline RuntimeObject** get_address_of_logger_2() { return &___logger_2; }
	inline void set_logger_2(RuntimeObject* value)
	{
		___logger_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_2), (void*)value);
	}
};


// Photon.Voice.IOS.AudioInPusher/CallbackDelegate
struct CallbackDelegate_tF714239823DC720B21370BF84E751276BFAE89B7  : public MulticastDelegate_t
{
public:

public:
};


// Photon.Voice.IOS.AudioInReader/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t05B9D84BFD8FFDFDB7DEB62E1562339B0FF2862D  : public RuntimeObject
{
public:
	// Photon.Voice.IOS.AudioInReader Photon.Voice.IOS.AudioInReader/<>c__DisplayClass7_0::<>4__this
	AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302 * ___U3CU3E4__this_0;
	// Photon.Voice.IOS.AudioSessionParameters Photon.Voice.IOS.AudioInReader/<>c__DisplayClass7_0::sessParam
	AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E  ___sessParam_1;
	// Photon.Voice.ILogger Photon.Voice.IOS.AudioInReader/<>c__DisplayClass7_0::logger
	RuntimeObject* ___logger_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t05B9D84BFD8FFDFDB7DEB62E1562339B0FF2862D, ___U3CU3E4__this_0)); }
	inline AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_sessParam_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t05B9D84BFD8FFDFDB7DEB62E1562339B0FF2862D, ___sessParam_1)); }
	inline AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E  get_sessParam_1() const { return ___sessParam_1; }
	inline AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E * get_address_of_sessParam_1() { return &___sessParam_1; }
	inline void set_sessParam_1(AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E  value)
	{
		___sessParam_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sessParam_1))->___CategoryOptions_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_logger_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t05B9D84BFD8FFDFDB7DEB62E1562339B0FF2862D, ___logger_2)); }
	inline RuntimeObject* get_logger_2() const { return ___logger_2; }
	inline RuntimeObject** get_address_of_logger_2() { return &___logger_2; }
	inline void set_logger_2(RuntimeObject* value)
	{
		___logger_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_2), (void*)value);
	}
};


// Photon.Voice.VoiceClient/<>c__DisplayClass49_0
struct U3CU3Ec__DisplayClass49_0_tB34D58F85F937CA72D917F5CD92F8E22D1729EFD  : public RuntimeObject
{
public:
	// Photon.Voice.VoiceClient Photon.Voice.VoiceClient/<>c__DisplayClass49_0::<>4__this
	VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * ___U3CU3E4__this_0;
	// Photon.Voice.IEncoder Photon.Voice.VoiceClient/<>c__DisplayClass49_0::encoder
	RuntimeObject* ___encoder_1;
	// Photon.Voice.VoiceInfo Photon.Voice.VoiceClient/<>c__DisplayClass49_0::voiceInfo
	VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___voiceInfo_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass49_0_tB34D58F85F937CA72D917F5CD92F8E22D1729EFD, ___U3CU3E4__this_0)); }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_encoder_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass49_0_tB34D58F85F937CA72D917F5CD92F8E22D1729EFD, ___encoder_1)); }
	inline RuntimeObject* get_encoder_1() const { return ___encoder_1; }
	inline RuntimeObject** get_address_of_encoder_1() { return &___encoder_1; }
	inline void set_encoder_1(RuntimeObject* value)
	{
		___encoder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_1), (void*)value);
	}

	inline static int32_t get_offset_of_voiceInfo_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass49_0_tB34D58F85F937CA72D917F5CD92F8E22D1729EFD, ___voiceInfo_2)); }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  get_voiceInfo_2() const { return ___voiceInfo_2; }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * get_address_of_voiceInfo_2() { return &___voiceInfo_2; }
	inline void set_voiceInfo_2(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  value)
	{
		___voiceInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___voiceInfo_2))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
	}
};


// Photon.Voice.LocalVoiceFramedBase
struct LocalVoiceFramedBase_t44C87DD9E75F9A7A763407E2C66FE744BDCB7471  : public LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9
{
public:
	// System.Int32 Photon.Voice.LocalVoiceFramedBase::<FrameSize>k__BackingField
	int32_t ___U3CFrameSizeU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CFrameSizeU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(LocalVoiceFramedBase_t44C87DD9E75F9A7A763407E2C66FE744BDCB7471, ___U3CFrameSizeU3Ek__BackingField_22)); }
	inline int32_t get_U3CFrameSizeU3Ek__BackingField_22() const { return ___U3CFrameSizeU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CFrameSizeU3Ek__BackingField_22() { return &___U3CFrameSizeU3Ek__BackingField_22; }
	inline void set_U3CFrameSizeU3Ek__BackingField_22(int32_t value)
	{
		___U3CFrameSizeU3Ek__BackingField_22 = value;
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


// Photon.Voice.RemoteVoice
struct RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87  : public RuntimeObject
{
public:
	// Photon.Voice.VoiceInfo Photon.Voice.RemoteVoice::<Info>k__BackingField
	VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___U3CInfoU3Ek__BackingField_0;
	// Photon.Voice.RemoteVoiceOptions Photon.Voice.RemoteVoice::options
	RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE  ___options_1;
	// System.Int32 Photon.Voice.RemoteVoice::channelId
	int32_t ___channelId_2;
	// System.Int32 Photon.Voice.RemoteVoice::<DelayFrames>k__BackingField
	int32_t ___U3CDelayFramesU3Ek__BackingField_3;
	// System.Int32 Photon.Voice.RemoteVoice::playerId
	int32_t ___playerId_4;
	// System.Byte Photon.Voice.RemoteVoice::voiceId
	uint8_t ___voiceId_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Photon.Voice.RemoteVoice::disposed
	bool ___disposed_6;
	// System.Object Photon.Voice.RemoteVoice::disposeLock
	RuntimeObject * ___disposeLock_7;
	// System.String Photon.Voice.RemoteVoice::<LogPrefix>k__BackingField
	String_t* ___U3CLogPrefixU3Ek__BackingField_8;
	// Photon.Voice.SpacingProfile Photon.Voice.RemoteVoice::receiveSpacingProfile
	SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68 * ___receiveSpacingProfile_9;
	// System.Byte Photon.Voice.RemoteVoice::lastEvNumber
	uint8_t ___lastEvNumber_10;
	// Photon.Voice.VoiceClient Photon.Voice.RemoteVoice::voiceClient
	VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * ___voiceClient_11;
	// System.Collections.Generic.Queue`1<Photon.Voice.FrameBuffer> Photon.Voice.RemoteVoice::frameQueue
	Queue_1_t45D1136463723E6F4A40C4DC038CA2F6908264B8 * ___frameQueue_12;
	// System.Threading.AutoResetEvent Photon.Voice.RemoteVoice::frameQueueReady
	AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * ___frameQueueReady_13;
	// System.Int32 Photon.Voice.RemoteVoice::flushingFramePosInQueue
	int32_t ___flushingFramePosInQueue_14;
	// Photon.Voice.FrameBuffer Photon.Voice.RemoteVoice::nullFrame
	FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77  ___nullFrame_15;

public:
	inline static int32_t get_offset_of_U3CInfoU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___U3CInfoU3Ek__BackingField_0)); }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  get_U3CInfoU3Ek__BackingField_0() const { return ___U3CInfoU3Ek__BackingField_0; }
	inline VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * get_address_of_U3CInfoU3Ek__BackingField_0() { return &___U3CInfoU3Ek__BackingField_0; }
	inline void set_U3CInfoU3Ek__BackingField_0(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  value)
	{
		___U3CInfoU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CInfoU3Ek__BackingField_0))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
	}

	inline static int32_t get_offset_of_options_1() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___options_1)); }
	inline RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE  get_options_1() const { return ___options_1; }
	inline RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE * get_address_of_options_1() { return &___options_1; }
	inline void set_options_1(RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE  value)
	{
		___options_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___options_1))->___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___options_1))->___U3CDecoderU3Ek__BackingField_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___options_1))->___logger_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___options_1))->___voiceInfo_3))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___options_1))->___U3ClogPrefixU3Ek__BackingField_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_channelId_2() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___channelId_2)); }
	inline int32_t get_channelId_2() const { return ___channelId_2; }
	inline int32_t* get_address_of_channelId_2() { return &___channelId_2; }
	inline void set_channelId_2(int32_t value)
	{
		___channelId_2 = value;
	}

	inline static int32_t get_offset_of_U3CDelayFramesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___U3CDelayFramesU3Ek__BackingField_3)); }
	inline int32_t get_U3CDelayFramesU3Ek__BackingField_3() const { return ___U3CDelayFramesU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CDelayFramesU3Ek__BackingField_3() { return &___U3CDelayFramesU3Ek__BackingField_3; }
	inline void set_U3CDelayFramesU3Ek__BackingField_3(int32_t value)
	{
		___U3CDelayFramesU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_playerId_4() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___playerId_4)); }
	inline int32_t get_playerId_4() const { return ___playerId_4; }
	inline int32_t* get_address_of_playerId_4() { return &___playerId_4; }
	inline void set_playerId_4(int32_t value)
	{
		___playerId_4 = value;
	}

	inline static int32_t get_offset_of_voiceId_5() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___voiceId_5)); }
	inline uint8_t get_voiceId_5() const { return ___voiceId_5; }
	inline uint8_t* get_address_of_voiceId_5() { return &___voiceId_5; }
	inline void set_voiceId_5(uint8_t value)
	{
		___voiceId_5 = value;
	}

	inline static int32_t get_offset_of_disposed_6() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___disposed_6)); }
	inline bool get_disposed_6() const { return ___disposed_6; }
	inline bool* get_address_of_disposed_6() { return &___disposed_6; }
	inline void set_disposed_6(bool value)
	{
		___disposed_6 = value;
	}

	inline static int32_t get_offset_of_disposeLock_7() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___disposeLock_7)); }
	inline RuntimeObject * get_disposeLock_7() const { return ___disposeLock_7; }
	inline RuntimeObject ** get_address_of_disposeLock_7() { return &___disposeLock_7; }
	inline void set_disposeLock_7(RuntimeObject * value)
	{
		___disposeLock_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposeLock_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLogPrefixU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___U3CLogPrefixU3Ek__BackingField_8)); }
	inline String_t* get_U3CLogPrefixU3Ek__BackingField_8() const { return ___U3CLogPrefixU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CLogPrefixU3Ek__BackingField_8() { return &___U3CLogPrefixU3Ek__BackingField_8; }
	inline void set_U3CLogPrefixU3Ek__BackingField_8(String_t* value)
	{
		___U3CLogPrefixU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLogPrefixU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_receiveSpacingProfile_9() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___receiveSpacingProfile_9)); }
	inline SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68 * get_receiveSpacingProfile_9() const { return ___receiveSpacingProfile_9; }
	inline SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68 ** get_address_of_receiveSpacingProfile_9() { return &___receiveSpacingProfile_9; }
	inline void set_receiveSpacingProfile_9(SpacingProfile_tD2728C7357F90CDEC875C74BF6D2161BD3CB2A68 * value)
	{
		___receiveSpacingProfile_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receiveSpacingProfile_9), (void*)value);
	}

	inline static int32_t get_offset_of_lastEvNumber_10() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___lastEvNumber_10)); }
	inline uint8_t get_lastEvNumber_10() const { return ___lastEvNumber_10; }
	inline uint8_t* get_address_of_lastEvNumber_10() { return &___lastEvNumber_10; }
	inline void set_lastEvNumber_10(uint8_t value)
	{
		___lastEvNumber_10 = value;
	}

	inline static int32_t get_offset_of_voiceClient_11() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___voiceClient_11)); }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * get_voiceClient_11() const { return ___voiceClient_11; }
	inline VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E ** get_address_of_voiceClient_11() { return &___voiceClient_11; }
	inline void set_voiceClient_11(VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * value)
	{
		___voiceClient_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceClient_11), (void*)value);
	}

	inline static int32_t get_offset_of_frameQueue_12() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___frameQueue_12)); }
	inline Queue_1_t45D1136463723E6F4A40C4DC038CA2F6908264B8 * get_frameQueue_12() const { return ___frameQueue_12; }
	inline Queue_1_t45D1136463723E6F4A40C4DC038CA2F6908264B8 ** get_address_of_frameQueue_12() { return &___frameQueue_12; }
	inline void set_frameQueue_12(Queue_1_t45D1136463723E6F4A40C4DC038CA2F6908264B8 * value)
	{
		___frameQueue_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameQueue_12), (void*)value);
	}

	inline static int32_t get_offset_of_frameQueueReady_13() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___frameQueueReady_13)); }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * get_frameQueueReady_13() const { return ___frameQueueReady_13; }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D ** get_address_of_frameQueueReady_13() { return &___frameQueueReady_13; }
	inline void set_frameQueueReady_13(AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * value)
	{
		___frameQueueReady_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameQueueReady_13), (void*)value);
	}

	inline static int32_t get_offset_of_flushingFramePosInQueue_14() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___flushingFramePosInQueue_14)); }
	inline int32_t get_flushingFramePosInQueue_14() const { return ___flushingFramePosInQueue_14; }
	inline int32_t* get_address_of_flushingFramePosInQueue_14() { return &___flushingFramePosInQueue_14; }
	inline void set_flushingFramePosInQueue_14(int32_t value)
	{
		___flushingFramePosInQueue_14 = value;
	}

	inline static int32_t get_offset_of_nullFrame_15() { return static_cast<int32_t>(offsetof(RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87, ___nullFrame_15)); }
	inline FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77  get_nullFrame_15() const { return ___nullFrame_15; }
	inline FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77 * get_address_of_nullFrame_15() { return &___nullFrame_15; }
	inline void set_nullFrame_15(FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77  value)
	{
		___nullFrame_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___nullFrame_15))->___array_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___nullFrame_15))->___disposer_3), (void*)NULL);
		#endif
	}
};


// Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate
struct RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13  : public MulticastDelegate_t
{
public:

public:
};


// Photon.Voice.LocalVoiceFramed`1<System.Int16>
struct LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664  : public LocalVoiceFramedBase_t44C87DD9E75F9A7A763407E2C66FE744BDCB7471
{
public:
	// Photon.Voice.Framer`1<T> Photon.Voice.LocalVoiceFramed`1::framer
	Framer_1_t5FBBEF15B9AB70C75546947448D1FFC19D4F7978 * ___framer_23;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::preProcessorsCnt
	int32_t ___preProcessorsCnt_24;
	// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<T>> Photon.Voice.LocalVoiceFramed`1::processors
	List_1_t2B969941D952B3C04034F2CC42555A20E416F5EC * ___processors_25;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::dataEncodeThreadStarted
	bool ___dataEncodeThreadStarted_26;
	// System.Collections.Generic.Queue`1<T[]> Photon.Voice.LocalVoiceFramed`1::pushDataQueue
	Queue_1_t4A2620F8C38A3EF76782E492059C52B76FCF17D3 * ___pushDataQueue_27;
	// System.Threading.AutoResetEvent Photon.Voice.LocalVoiceFramed`1::pushDataQueueReady
	AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * ___pushDataQueueReady_28;
	// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1::bufferFactory
	FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * ___bufferFactory_29;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkippedNextLog
	int32_t ___framesSkippedNextLog_30;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkipped
	int32_t ___framesSkipped_31;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::exitThread
	bool ___exitThread_32;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::processNullFramesCnt
	int32_t ___processNullFramesCnt_33;

public:
	inline static int32_t get_offset_of_framer_23() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___framer_23)); }
	inline Framer_1_t5FBBEF15B9AB70C75546947448D1FFC19D4F7978 * get_framer_23() const { return ___framer_23; }
	inline Framer_1_t5FBBEF15B9AB70C75546947448D1FFC19D4F7978 ** get_address_of_framer_23() { return &___framer_23; }
	inline void set_framer_23(Framer_1_t5FBBEF15B9AB70C75546947448D1FFC19D4F7978 * value)
	{
		___framer_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___framer_23), (void*)value);
	}

	inline static int32_t get_offset_of_preProcessorsCnt_24() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___preProcessorsCnt_24)); }
	inline int32_t get_preProcessorsCnt_24() const { return ___preProcessorsCnt_24; }
	inline int32_t* get_address_of_preProcessorsCnt_24() { return &___preProcessorsCnt_24; }
	inline void set_preProcessorsCnt_24(int32_t value)
	{
		___preProcessorsCnt_24 = value;
	}

	inline static int32_t get_offset_of_processors_25() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___processors_25)); }
	inline List_1_t2B969941D952B3C04034F2CC42555A20E416F5EC * get_processors_25() const { return ___processors_25; }
	inline List_1_t2B969941D952B3C04034F2CC42555A20E416F5EC ** get_address_of_processors_25() { return &___processors_25; }
	inline void set_processors_25(List_1_t2B969941D952B3C04034F2CC42555A20E416F5EC * value)
	{
		___processors_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___processors_25), (void*)value);
	}

	inline static int32_t get_offset_of_dataEncodeThreadStarted_26() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___dataEncodeThreadStarted_26)); }
	inline bool get_dataEncodeThreadStarted_26() const { return ___dataEncodeThreadStarted_26; }
	inline bool* get_address_of_dataEncodeThreadStarted_26() { return &___dataEncodeThreadStarted_26; }
	inline void set_dataEncodeThreadStarted_26(bool value)
	{
		___dataEncodeThreadStarted_26 = value;
	}

	inline static int32_t get_offset_of_pushDataQueue_27() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___pushDataQueue_27)); }
	inline Queue_1_t4A2620F8C38A3EF76782E492059C52B76FCF17D3 * get_pushDataQueue_27() const { return ___pushDataQueue_27; }
	inline Queue_1_t4A2620F8C38A3EF76782E492059C52B76FCF17D3 ** get_address_of_pushDataQueue_27() { return &___pushDataQueue_27; }
	inline void set_pushDataQueue_27(Queue_1_t4A2620F8C38A3EF76782E492059C52B76FCF17D3 * value)
	{
		___pushDataQueue_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pushDataQueue_27), (void*)value);
	}

	inline static int32_t get_offset_of_pushDataQueueReady_28() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___pushDataQueueReady_28)); }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * get_pushDataQueueReady_28() const { return ___pushDataQueueReady_28; }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D ** get_address_of_pushDataQueueReady_28() { return &___pushDataQueueReady_28; }
	inline void set_pushDataQueueReady_28(AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * value)
	{
		___pushDataQueueReady_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pushDataQueueReady_28), (void*)value);
	}

	inline static int32_t get_offset_of_bufferFactory_29() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___bufferFactory_29)); }
	inline FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * get_bufferFactory_29() const { return ___bufferFactory_29; }
	inline FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 ** get_address_of_bufferFactory_29() { return &___bufferFactory_29; }
	inline void set_bufferFactory_29(FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * value)
	{
		___bufferFactory_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bufferFactory_29), (void*)value);
	}

	inline static int32_t get_offset_of_framesSkippedNextLog_30() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___framesSkippedNextLog_30)); }
	inline int32_t get_framesSkippedNextLog_30() const { return ___framesSkippedNextLog_30; }
	inline int32_t* get_address_of_framesSkippedNextLog_30() { return &___framesSkippedNextLog_30; }
	inline void set_framesSkippedNextLog_30(int32_t value)
	{
		___framesSkippedNextLog_30 = value;
	}

	inline static int32_t get_offset_of_framesSkipped_31() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___framesSkipped_31)); }
	inline int32_t get_framesSkipped_31() const { return ___framesSkipped_31; }
	inline int32_t* get_address_of_framesSkipped_31() { return &___framesSkipped_31; }
	inline void set_framesSkipped_31(int32_t value)
	{
		___framesSkipped_31 = value;
	}

	inline static int32_t get_offset_of_exitThread_32() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___exitThread_32)); }
	inline bool get_exitThread_32() const { return ___exitThread_32; }
	inline bool* get_address_of_exitThread_32() { return &___exitThread_32; }
	inline void set_exitThread_32(bool value)
	{
		___exitThread_32 = value;
	}

	inline static int32_t get_offset_of_processNullFramesCnt_33() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664, ___processNullFramesCnt_33)); }
	inline int32_t get_processNullFramesCnt_33() const { return ___processNullFramesCnt_33; }
	inline int32_t* get_address_of_processNullFramesCnt_33() { return &___processNullFramesCnt_33; }
	inline void set_processNullFramesCnt_33(int32_t value)
	{
		___processNullFramesCnt_33 = value;
	}
};


// Photon.Voice.LocalVoiceFramed`1<System.Single>
struct LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0  : public LocalVoiceFramedBase_t44C87DD9E75F9A7A763407E2C66FE744BDCB7471
{
public:
	// Photon.Voice.Framer`1<T> Photon.Voice.LocalVoiceFramed`1::framer
	Framer_1_t04F378EE94C8949DC3D5E53C79B71D0E38A18623 * ___framer_23;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::preProcessorsCnt
	int32_t ___preProcessorsCnt_24;
	// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<T>> Photon.Voice.LocalVoiceFramed`1::processors
	List_1_tB8681DE57AE297E09DCA76242C38B88CB52192E5 * ___processors_25;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::dataEncodeThreadStarted
	bool ___dataEncodeThreadStarted_26;
	// System.Collections.Generic.Queue`1<T[]> Photon.Voice.LocalVoiceFramed`1::pushDataQueue
	Queue_1_t865B9E26DEFD5908AB12DEAECF70EC4320C7D16E * ___pushDataQueue_27;
	// System.Threading.AutoResetEvent Photon.Voice.LocalVoiceFramed`1::pushDataQueueReady
	AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * ___pushDataQueueReady_28;
	// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1::bufferFactory
	FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * ___bufferFactory_29;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkippedNextLog
	int32_t ___framesSkippedNextLog_30;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkipped
	int32_t ___framesSkipped_31;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::exitThread
	bool ___exitThread_32;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::processNullFramesCnt
	int32_t ___processNullFramesCnt_33;

public:
	inline static int32_t get_offset_of_framer_23() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___framer_23)); }
	inline Framer_1_t04F378EE94C8949DC3D5E53C79B71D0E38A18623 * get_framer_23() const { return ___framer_23; }
	inline Framer_1_t04F378EE94C8949DC3D5E53C79B71D0E38A18623 ** get_address_of_framer_23() { return &___framer_23; }
	inline void set_framer_23(Framer_1_t04F378EE94C8949DC3D5E53C79B71D0E38A18623 * value)
	{
		___framer_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___framer_23), (void*)value);
	}

	inline static int32_t get_offset_of_preProcessorsCnt_24() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___preProcessorsCnt_24)); }
	inline int32_t get_preProcessorsCnt_24() const { return ___preProcessorsCnt_24; }
	inline int32_t* get_address_of_preProcessorsCnt_24() { return &___preProcessorsCnt_24; }
	inline void set_preProcessorsCnt_24(int32_t value)
	{
		___preProcessorsCnt_24 = value;
	}

	inline static int32_t get_offset_of_processors_25() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___processors_25)); }
	inline List_1_tB8681DE57AE297E09DCA76242C38B88CB52192E5 * get_processors_25() const { return ___processors_25; }
	inline List_1_tB8681DE57AE297E09DCA76242C38B88CB52192E5 ** get_address_of_processors_25() { return &___processors_25; }
	inline void set_processors_25(List_1_tB8681DE57AE297E09DCA76242C38B88CB52192E5 * value)
	{
		___processors_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___processors_25), (void*)value);
	}

	inline static int32_t get_offset_of_dataEncodeThreadStarted_26() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___dataEncodeThreadStarted_26)); }
	inline bool get_dataEncodeThreadStarted_26() const { return ___dataEncodeThreadStarted_26; }
	inline bool* get_address_of_dataEncodeThreadStarted_26() { return &___dataEncodeThreadStarted_26; }
	inline void set_dataEncodeThreadStarted_26(bool value)
	{
		___dataEncodeThreadStarted_26 = value;
	}

	inline static int32_t get_offset_of_pushDataQueue_27() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___pushDataQueue_27)); }
	inline Queue_1_t865B9E26DEFD5908AB12DEAECF70EC4320C7D16E * get_pushDataQueue_27() const { return ___pushDataQueue_27; }
	inline Queue_1_t865B9E26DEFD5908AB12DEAECF70EC4320C7D16E ** get_address_of_pushDataQueue_27() { return &___pushDataQueue_27; }
	inline void set_pushDataQueue_27(Queue_1_t865B9E26DEFD5908AB12DEAECF70EC4320C7D16E * value)
	{
		___pushDataQueue_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pushDataQueue_27), (void*)value);
	}

	inline static int32_t get_offset_of_pushDataQueueReady_28() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___pushDataQueueReady_28)); }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * get_pushDataQueueReady_28() const { return ___pushDataQueueReady_28; }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D ** get_address_of_pushDataQueueReady_28() { return &___pushDataQueueReady_28; }
	inline void set_pushDataQueueReady_28(AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * value)
	{
		___pushDataQueueReady_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pushDataQueueReady_28), (void*)value);
	}

	inline static int32_t get_offset_of_bufferFactory_29() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___bufferFactory_29)); }
	inline FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * get_bufferFactory_29() const { return ___bufferFactory_29; }
	inline FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 ** get_address_of_bufferFactory_29() { return &___bufferFactory_29; }
	inline void set_bufferFactory_29(FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * value)
	{
		___bufferFactory_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bufferFactory_29), (void*)value);
	}

	inline static int32_t get_offset_of_framesSkippedNextLog_30() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___framesSkippedNextLog_30)); }
	inline int32_t get_framesSkippedNextLog_30() const { return ___framesSkippedNextLog_30; }
	inline int32_t* get_address_of_framesSkippedNextLog_30() { return &___framesSkippedNextLog_30; }
	inline void set_framesSkippedNextLog_30(int32_t value)
	{
		___framesSkippedNextLog_30 = value;
	}

	inline static int32_t get_offset_of_framesSkipped_31() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___framesSkipped_31)); }
	inline int32_t get_framesSkipped_31() const { return ___framesSkipped_31; }
	inline int32_t* get_address_of_framesSkipped_31() { return &___framesSkipped_31; }
	inline void set_framesSkipped_31(int32_t value)
	{
		___framesSkipped_31 = value;
	}

	inline static int32_t get_offset_of_exitThread_32() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___exitThread_32)); }
	inline bool get_exitThread_32() const { return ___exitThread_32; }
	inline bool* get_address_of_exitThread_32() { return &___exitThread_32; }
	inline void set_exitThread_32(bool value)
	{
		___exitThread_32 = value;
	}

	inline static int32_t get_offset_of_processNullFramesCnt_33() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0, ___processNullFramesCnt_33)); }
	inline int32_t get_processNullFramesCnt_33() const { return ___processNullFramesCnt_33; }
	inline int32_t* get_address_of_processNullFramesCnt_33() { return &___processNullFramesCnt_33; }
	inline void set_processNullFramesCnt_33(int32_t value)
	{
		___processNullFramesCnt_33 = value;
	}
};


// Photon.Voice.LocalVoiceAudio`1<System.Int16>
struct LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8  : public LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664
{
public:
	// Photon.Voice.AudioUtil/VoiceDetector`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetector
	VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * ___voiceDetector_34;
	// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetectorCalibration
	VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3 * ___voiceDetectorCalibration_35;
	// Photon.Voice.AudioUtil/LevelMeter`1<T> Photon.Voice.LocalVoiceAudio`1::levelMeter
	LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 * ___levelMeter_36;
	// System.Int32 Photon.Voice.LocalVoiceAudio`1::channels
	int32_t ___channels_37;
	// System.Boolean Photon.Voice.LocalVoiceAudio`1::resampleSource
	bool ___resampleSource_38;

public:
	inline static int32_t get_offset_of_voiceDetector_34() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8, ___voiceDetector_34)); }
	inline VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * get_voiceDetector_34() const { return ___voiceDetector_34; }
	inline VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 ** get_address_of_voiceDetector_34() { return &___voiceDetector_34; }
	inline void set_voiceDetector_34(VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * value)
	{
		___voiceDetector_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceDetector_34), (void*)value);
	}

	inline static int32_t get_offset_of_voiceDetectorCalibration_35() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8, ___voiceDetectorCalibration_35)); }
	inline VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3 * get_voiceDetectorCalibration_35() const { return ___voiceDetectorCalibration_35; }
	inline VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3 ** get_address_of_voiceDetectorCalibration_35() { return &___voiceDetectorCalibration_35; }
	inline void set_voiceDetectorCalibration_35(VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3 * value)
	{
		___voiceDetectorCalibration_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceDetectorCalibration_35), (void*)value);
	}

	inline static int32_t get_offset_of_levelMeter_36() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8, ___levelMeter_36)); }
	inline LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 * get_levelMeter_36() const { return ___levelMeter_36; }
	inline LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 ** get_address_of_levelMeter_36() { return &___levelMeter_36; }
	inline void set_levelMeter_36(LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 * value)
	{
		___levelMeter_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelMeter_36), (void*)value);
	}

	inline static int32_t get_offset_of_channels_37() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8, ___channels_37)); }
	inline int32_t get_channels_37() const { return ___channels_37; }
	inline int32_t* get_address_of_channels_37() { return &___channels_37; }
	inline void set_channels_37(int32_t value)
	{
		___channels_37 = value;
	}

	inline static int32_t get_offset_of_resampleSource_38() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8, ___resampleSource_38)); }
	inline bool get_resampleSource_38() const { return ___resampleSource_38; }
	inline bool* get_address_of_resampleSource_38() { return &___resampleSource_38; }
	inline void set_resampleSource_38(bool value)
	{
		___resampleSource_38 = value;
	}
};


// Photon.Voice.LocalVoiceAudio`1<System.Single>
struct LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238  : public LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0
{
public:
	// Photon.Voice.AudioUtil/VoiceDetector`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetector
	VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * ___voiceDetector_34;
	// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetectorCalibration
	VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E * ___voiceDetectorCalibration_35;
	// Photon.Voice.AudioUtil/LevelMeter`1<T> Photon.Voice.LocalVoiceAudio`1::levelMeter
	LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 * ___levelMeter_36;
	// System.Int32 Photon.Voice.LocalVoiceAudio`1::channels
	int32_t ___channels_37;
	// System.Boolean Photon.Voice.LocalVoiceAudio`1::resampleSource
	bool ___resampleSource_38;

public:
	inline static int32_t get_offset_of_voiceDetector_34() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238, ___voiceDetector_34)); }
	inline VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * get_voiceDetector_34() const { return ___voiceDetector_34; }
	inline VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC ** get_address_of_voiceDetector_34() { return &___voiceDetector_34; }
	inline void set_voiceDetector_34(VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * value)
	{
		___voiceDetector_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceDetector_34), (void*)value);
	}

	inline static int32_t get_offset_of_voiceDetectorCalibration_35() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238, ___voiceDetectorCalibration_35)); }
	inline VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E * get_voiceDetectorCalibration_35() const { return ___voiceDetectorCalibration_35; }
	inline VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E ** get_address_of_voiceDetectorCalibration_35() { return &___voiceDetectorCalibration_35; }
	inline void set_voiceDetectorCalibration_35(VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E * value)
	{
		___voiceDetectorCalibration_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceDetectorCalibration_35), (void*)value);
	}

	inline static int32_t get_offset_of_levelMeter_36() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238, ___levelMeter_36)); }
	inline LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 * get_levelMeter_36() const { return ___levelMeter_36; }
	inline LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 ** get_address_of_levelMeter_36() { return &___levelMeter_36; }
	inline void set_levelMeter_36(LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 * value)
	{
		___levelMeter_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelMeter_36), (void*)value);
	}

	inline static int32_t get_offset_of_channels_37() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238, ___channels_37)); }
	inline int32_t get_channels_37() const { return ___channels_37; }
	inline int32_t* get_address_of_channels_37() { return &___channels_37; }
	inline void set_channels_37(int32_t value)
	{
		___channels_37 = value;
	}

	inline static int32_t get_offset_of_resampleSource_38() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238, ___resampleSource_38)); }
	inline bool get_resampleSource_38() const { return ___resampleSource_38; }
	inline bool* get_address_of_resampleSource_38() { return &___resampleSource_38; }
	inline void set_resampleSource_38(bool value)
	{
		___resampleSource_38 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
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


// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32,System.IntPtr,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_mFC8BD001C2B9360FB3DF14F796A628EAC4D81F55_gshared (Action_3_t897FF49CFBEBC3E519C4E2672B4EA0BA7B40DBA3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Void Photon.Voice.AudioUtil/LevelMeter`1<System.Single>::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelMeter_1__ctor_mEEB16B4E16393F3FBF8011F032CB5B27935E604A_gshared (LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const RuntimeMethod* method);
// System.Void Photon.Voice.AudioUtil/LevelMeter`1<System.Int16>::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelMeter_1__ctor_m975D1225718E7A4B76854FE92510EAB8E7911003_gshared (LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const RuntimeMethod* method);
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1__ctor_m7C6E706C7F37F8989BA63C16BEF0A7509022FA05_gshared (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const RuntimeMethod* method);
// System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>::get_On()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceDetector_1_get_On_m122CD7F20E577E49D20483CC02FD7CD67F1B6368_gshared_inline (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>::set_Detected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_set_Detected_m7324B94BCE8D957581F1B8520EC8B233A67673D5_gshared (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>::get_Detected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceDetector_1_get_Detected_m9E69A8BECBFAC14EFB2894CDC8F070B53D2CC4C7_gshared_inline (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1__ctor_m19B47107FDBA28D2C419B78D712537EF1A707E2D_gshared (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const RuntimeMethod* method);
// System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::get_On()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceDetector_1_get_On_mAA630DFE422E1D5263686DDCE57F6E26C4DF8AB8_gshared_inline (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::set_Detected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_set_Detected_m13E95CCF06BB947C56591D1DB287436309D074AB_gshared (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::get_Detected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceDetector_1_get_Detected_m2556CDCC35307D5A1AE5D0573806C4E1C4C0F5C8_gshared_inline (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.OpusCodec/Encoder`1<System.Single>::.ctor(Photon.Voice.VoiceInfo,Photon.Voice.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_1__ctor_m41B7B1A903690DC74302D619DC29D6A7E6741578_gshared (Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620 * __this, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___i0, RuntimeObject* ___logger1, const RuntimeMethod* method);
// System.Void Photon.Voice.OpusCodec/Encoder`1<System.Int16>::.ctor(Photon.Voice.VoiceInfo,Photon.Voice.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_1__ctor_m9077E63DD228B223B7033E63ACA21B768789E119_gshared (Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2 * __this, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___i0, RuntimeObject* ___logger1, const RuntimeMethod* method);
// T[] Photon.Voice.FrameOut`1<System.Int16>::get_Buf()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* FrameOut_1_get_Buf_mBBFA29E661AF47B93BF8300002DFD63CDAD854B1_gshared_inline (FrameOut_1_t360F685F3D2F100DC469100D32F8A5B415EC536E * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.FrameOut`1<System.Single>::.ctor(T[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameOut_1__ctor_mE64EB72A44080E0E3114CAA125FA2C871A62D67F_gshared (FrameOut_1_t2E75A31E49C5BB56BEAA73766430E3B7F2167044 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___buf0, bool ___endOfStream1, const RuntimeMethod* method);
// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1<System.Int16>::get_BufferFactory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * LocalVoiceFramed_1_get_BufferFactory_mE185781006A94F4245FD1FD62C2B28E16D719738_gshared_inline (LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664 * __this, const RuntimeMethod* method);
// T[] Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>::New(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* FactoryPrimitiveArrayPool_1_New_m4B62F1E511B7854408A14C347007968C092B4142_gshared (FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Int16>::PushDataAsync(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1_gshared (LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___buf0, const RuntimeMethod* method);
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Single>::PushDataAsync(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82_gshared (LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___buf0, const RuntimeMethod* method);
// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1<System.Single>::get_BufferFactory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * LocalVoiceFramed_1_get_BufferFactory_m55FFB4181F0CF749B62E8D81C7F962EF460BFEC0_gshared_inline (LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0 * __this, const RuntimeMethod* method);
// T[] Photon.Voice.FactoryPrimitiveArrayPool`1<System.Single>::New(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* FactoryPrimitiveArrayPool_1_New_mA7DF99EB941029EF5445393AFF981A7B6919711F_gshared (FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C  Dictionary_2_GetEnumerator_m17437D82A5AF502166F10DD12B5C5830DDB95444_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6  Dictionary_2_GetEnumerator_mAD2EBD021C57B44EEC71DAC1FC0847ACCE2F7051_gshared (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  Enumerator_get_Current_mDD5FF5DE0A9753D6EC3A02500E649CA8E738CE83_gshared_inline (Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m6FB62A84CBE44A1ADC675B97E28FABD4A3658064_gshared_inline (KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mCA6E77030F4BE64105E6B3EFB3CBB8E6EC08CA0A_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t KeyValuePair_2_get_Key_m8C5CDCE6A0C4D1F01811F8A3DE5598AC9C50910C_gshared_inline (KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF4C1B40791EFD4A01AF190E5539417DBB5DA255B_gshared (Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m7567E65C01E35A09AD2AD4814D708A8E76469D31_gshared (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mA8B2C0245428CBCCFB6628B1799077BC4239B5FB_gshared (Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6 * __this, const RuntimeMethod* method);

// System.Int32 POpusCodec.Wrapper::opus_encoder_get_size(POpusCodec.Enums.Channels)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_encoder_get_size_mF5DE580D5571EBA6AF90FB069C041D0F0C7A1F25 (int32_t ___channels0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC (int32_t ___cb0, const RuntimeMethod* method);
// POpusCodec.Enums.OpusStatusCode POpusCodec.Wrapper::opus_encoder_init(System.IntPtr,POpusCodec.Enums.SamplingRate,POpusCodec.Enums.Channels,POpusCodec.Enums.OpusApplicationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_encoder_init_m2688A8B407D9560C0CFE552A289190898846FC9B (intptr_t ___st0, int32_t ___Fs1, int32_t ___channels2, int32_t ___application3, const RuntimeMethod* method);
// System.Void POpusCodec.Wrapper::HandleStatusCode(POpusCodec.Enums.OpusStatusCode,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wrapper_HandleStatusCode_mBF7829238C148DAE9C3B897D84B47E64276C509D (int32_t ___statusCode0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___info1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void POpusCodec.Wrapper::opus_encoder_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wrapper_opus_encoder_destroy_mDCB3B95144FC755F51C053242523DEE9D3031AD0 (intptr_t ___st0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880 (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * __this, String_t* ___objectName0, const RuntimeMethod* method);
// System.Int32 POpusCodec.Wrapper::opus_encode(System.IntPtr,System.Int16[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_encode_mE6D9EB706C2ED2EAE11440FE5B1C10BE0A42A541 (intptr_t ___st0, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___pcm1, int32_t ___frame_size2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data3, int32_t ___max_data_bytes4, const RuntimeMethod* method);
// System.Int32 POpusCodec.Wrapper::opus_encode_float(System.IntPtr,System.Single[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_encode_float_m68E43472ACA9329BD87A96297E5B04E33CB6DCF0 (intptr_t ___st0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___pcm1, int32_t ___frame_size2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data3, int32_t ___max_data_bytes4, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72 (intptr_t ___hglobal0, const RuntimeMethod* method);
// System.Int32 POpusCodec.Wrapper::opus_encoder_ctl_get(System.IntPtr,POpusCodec.Enums.OpusCtlGetRequest,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_encoder_ctl_get_m9AA986DCECE2C74071E7E145AB784AF3ADC75040 (intptr_t ___st0, int32_t ___request1, int32_t* ___value2, const RuntimeMethod* method);
// System.Int32 POpusCodec.Wrapper::opus_encoder_ctl_set(System.IntPtr,POpusCodec.Enums.OpusCtlSetRequest,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_encoder_ctl_set_mE0134BECBD775097E0918D3B391FE46D3408E7A9 (intptr_t ___st0, int32_t ___request1, int32_t ___value2, const RuntimeMethod* method);
// System.Int32 POpusCodec.Wrapper::opus_decoder_ctl_get(System.IntPtr,POpusCodec.Enums.OpusCtlGetRequest,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_decoder_ctl_get_mBD4CA046D84353B68239AA65CEF719F77D9597AE (intptr_t ___st0, int32_t ___request1, int32_t* ___value2, const RuntimeMethod* method);
// System.Int32 POpusCodec.Wrapper::opus_decoder_ctl_set(System.IntPtr,POpusCodec.Enums.OpusCtlSetRequest,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_decoder_ctl_set_m392642D44CA8EB86B0A9BC2E16E5EACFD9D144DD (intptr_t ___st0, int32_t ___request1, int32_t ___value2, const RuntimeMethod* method);
// System.Int32 POpusCodec.Wrapper::opus_decoder_get_size(POpusCodec.Enums.Channels)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_decoder_get_size_m8AACC5C30114E3FF5CCEE90E1C70CE25A22D940E (int32_t ___channels0, const RuntimeMethod* method);
// POpusCodec.Enums.OpusStatusCode POpusCodec.Wrapper::opus_decoder_init(System.IntPtr,POpusCodec.Enums.SamplingRate,POpusCodec.Enums.Channels)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_decoder_init_m99480FCD7EFAF963BAAA3F393D4DAE7530AE675B (intptr_t ___st0, int32_t ___Fs1, int32_t ___channels2, const RuntimeMethod* method);
// System.Void POpusCodec.Wrapper::opus_decoder_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wrapper_opus_decoder_destroy_m50F6A76E68802434E42C4118499FE579D04A7135 (intptr_t ___st0, const RuntimeMethod* method);
// System.IntPtr Photon.Voice.FrameBuffer::get_Ptr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FrameBuffer_get_Ptr_mD9C987B5A355E3BC15155106B558C009A96DA70B (FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Voice.FrameBuffer::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FrameBuffer_get_Length_m35BA177CE29573C3E4EBC62D1AC39F8695E23985_inline (FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77 * __this, const RuntimeMethod* method);
// System.Int32 POpusCodec.Wrapper::opus_decode(System.IntPtr,System.IntPtr,System.Int32,System.Int16[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_decode_mDBE1D2C24CF0AA2411BF7C9F1EC20EC84D9BD0F7 (intptr_t ___st0, intptr_t ___data1, int32_t ___len2, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___pcm3, int32_t ___frame_size4, int32_t ___decode_fec5, const RuntimeMethod* method);
// System.Int32 POpusCodec.Wrapper::opus_decode_float(System.IntPtr,System.IntPtr,System.Int32,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_decode_float_m4F3CB435F3709CD94B16B5D0673343837EFBEDC5 (intptr_t ___st0, intptr_t ___data1, int32_t ___len2, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___pcm3, int32_t ___frame_size4, int32_t ___decode_fec5, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.IntPtr POpusCodec.Wrapper::opus_strerror(POpusCodec.Enums.OpusStatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Wrapper_opus_strerror_m90E534BF89A0AC615E03DDB1751D3375023C48D9 (int32_t ___error0, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA (intptr_t ___ptr0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void POpusCodec.OpusException::.ctor(POpusCodec.Enums.OpusStatusCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpusException__ctor_m6C9DB91FD10CE2D516752DD6BED877A783062C8A (OpusException_t1A61902C00340ACDC9D674DE351B1C666CCD1573 * __this, int32_t ___statusCode0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, String_t* ___javaInterface0, const RuntimeMethod* method);
// System.Int16[] UnityEngine.AndroidJNI::FromShortArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* AndroidJNI_FromShortArray_mAD7FEF4EEAEC6A3DEF148C02EF4E00002A70542E (intptr_t ___array0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int16[]>::Invoke(!0)
inline void Action_1_Invoke_mEF62A93226E47F29D311582E0677EA8E37573204 (Action_1_t36DA73B27593F7623AE0D8CA71F9F3412BB9E635 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t36DA73B27593F7623AE0D8CA71F9F3412BB9E635 *, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.AndroidJNI::DeleteGlobalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteGlobalRef_m0B4945EEFFCA6F7CC0808310DD6FA8BFB58A4F53 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32,System.IntPtr,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_mFC8BD001C2B9360FB3DF14F796A628EAC4D81F55 (Action_3_t897FF49CFBEBC3E519C4E2672B4EA0BA7B40DBA3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t897FF49CFBEBC3E519C4E2672B4EA0BA7B40DBA3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_3__ctor_mFC8BD001C2B9360FB3DF14F796A628EAC4D81F55_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 Photon.Voice.IOS.AudioSessionParameters::CategoryOptionsToInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSessionParameters_CategoryOptionsToInt_m8329C4EBD776D9539F8F7B89C00E8D700943664D (AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E * __this, const RuntimeMethod* method);
// System.IntPtr Photon.Voice.IOS.AudioInPusher::Photon_Audio_In_CreatePusher(System.Int32,System.Action`3<System.Int32,System.IntPtr,System.Int32>,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioInPusher_Photon_Audio_In_CreatePusher_m5C483A4F77CF855973C624E40198855C313F35F9 (int32_t ___instanceID0, Action_3_t897FF49CFBEBC3E519C4E2672B4EA0BA7B40DBA3 * ___pushCallback1, int32_t ___sessionCategory2, int32_t ___sessionMode3, int32_t ___sessionCategoryOptions4, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.IOS.AudioInPusher>::Add(!0,!1)
inline void Dictionary_2_Add_mB8F94E0A244F660446D4ADAB7A62FF7F391D3417 (Dictionary_2_tCE074E9B6B600C4D66DE2C4F6202ABAD4B751BA1 * __this, int32_t ___key0, AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCE074E9B6B600C4D66DE2C4F6202ABAD4B751BA1 *, int32_t, AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD *, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Photon.Voice.IOS.AudioInPusher::set_Error(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioInPusher_set_Error_mE4F930729E4F5C2059950264F6D50BF735E01C3A_inline (AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Photon.Voice.IOS.AudioInPusher::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AudioInPusher_get_Error_m23BBFE8A70B2BBE96893659DAA6DE4D226C571FA_inline (AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.IntPtr Photon.Voice.IOS.AudioInReader::Photon_Audio_In_CreateReader(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AudioInReader_Photon_Audio_In_CreateReader_m90C0660E1E2D7C6C7EBBE908C1DDAC933A3A3265 (int32_t ___sessionCategory0, int32_t ___sessionMode1, int32_t ___sessionCategoryOptions2, const RuntimeMethod* method);
// System.Void Photon.Voice.IOS.AudioInReader::set_Error(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioInReader_set_Error_mEF7DB6CE6FB8FA712A987E1C6FCF609E34EF0441_inline (AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Photon.Voice.IOS.AudioInReader::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AudioInReader_get_Error_m0726467692BFD3A68B4CB0A9E618F6CC6A314472_inline (AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.AudioOutDelayControl/PlayDelayConfig::set_Low(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayDelayConfig_set_Low_m14EF1DB2F464EE9B681CE6238ACFA35D384A7B22_inline (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.AudioOutDelayControl/PlayDelayConfig::set_High(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayDelayConfig_set_High_m2E8DE7D3EDF1AACA02292E0730C469316AE26734_inline (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.AudioOutDelayControl/PlayDelayConfig::set_Max(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayDelayConfig_set_Max_mE552A68942B1720690ECBAB19D6EC0563B45CAD9_inline (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.AudioOutDelayControl/PlayDelayConfig::set_SpeedUpPerc(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayDelayConfig_set_SpeedUpPerc_m49BD574A07EC17DBE96C3A1438E9EEE741E7CC33_inline (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.AudioOutDelayControl/PlayDelayConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayDelayConfig__ctor_m68C418064F733C5BBC5F03405925E53BEDE7B15A (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::get_Low()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayDelayConfig_get_Low_m74AC25AC2F5F3FFFD56CEA6915863A418E5649AE_inline (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::get_High()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayDelayConfig_get_High_m92A553D9CA8B243F2B80DF55A65590D54F20A3CA_inline (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::get_Max()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayDelayConfig_get_Max_m1F354039B7D05E18CACE6D55A79A796091C59C48_inline (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::get_SpeedUpPerc()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayDelayConfig_get_SpeedUpPerc_mF0539C2832704C106F8A608B4340D3E6BCDCD933_inline (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.AudioUtil/LevelMeter`1<System.Single>::.ctor(System.Int32,System.Int32)
inline void LevelMeter_1__ctor_mEEB16B4E16393F3FBF8011F032CB5B27935E604A (LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const RuntimeMethod* method)
{
	((  void (*) (LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 *, int32_t, int32_t, const RuntimeMethod*))LevelMeter_1__ctor_mEEB16B4E16393F3FBF8011F032CB5B27935E604A_gshared)(__this, ___samplingRate0, ___numChannels1, method);
}
// System.Void Photon.Voice.AudioUtil/LevelMeter`1<System.Int16>::.ctor(System.Int32,System.Int32)
inline void LevelMeter_1__ctor_m975D1225718E7A4B76854FE92510EAB8E7911003 (LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const RuntimeMethod* method)
{
	((  void (*) (LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 *, int32_t, int32_t, const RuntimeMethod*))LevelMeter_1__ctor_m975D1225718E7A4B76854FE92510EAB8E7911003_gshared)(__this, ___samplingRate0, ___numChannels1, method);
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>::.ctor(System.Int32,System.Int32)
inline void VoiceDetector_1__ctor_m7C6E706C7F37F8989BA63C16BEF0A7509022FA05 (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const RuntimeMethod* method)
{
	((  void (*) (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC *, int32_t, int32_t, const RuntimeMethod*))VoiceDetector_1__ctor_m7C6E706C7F37F8989BA63C16BEF0A7509022FA05_gshared)(__this, ___samplingRate0, ___numChannels1, method);
}
// System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>::get_On()
inline bool VoiceDetector_1_get_On_m122CD7F20E577E49D20483CC02FD7CD67F1B6368_inline (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC *, const RuntimeMethod*))VoiceDetector_1_get_On_m122CD7F20E577E49D20483CC02FD7CD67F1B6368_gshared_inline)(__this, method);
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>::set_Detected(System.Boolean)
inline void VoiceDetector_1_set_Detected_m7324B94BCE8D957581F1B8520EC8B233A67673D5 (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC *, bool, const RuntimeMethod*))VoiceDetector_1_set_Detected_m7324B94BCE8D957581F1B8520EC8B233A67673D5_gshared)(__this, ___value0, method);
}
// System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>::get_Detected()
inline bool VoiceDetector_1_get_Detected_m9E69A8BECBFAC14EFB2894CDC8F070B53D2CC4C7_inline (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC *, const RuntimeMethod*))VoiceDetector_1_get_Detected_m9E69A8BECBFAC14EFB2894CDC8F070B53D2CC4C7_gshared_inline)(__this, method);
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::.ctor(System.Int32,System.Int32)
inline void VoiceDetector_1__ctor_m19B47107FDBA28D2C419B78D712537EF1A707E2D (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const RuntimeMethod* method)
{
	((  void (*) (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *, int32_t, int32_t, const RuntimeMethod*))VoiceDetector_1__ctor_m19B47107FDBA28D2C419B78D712537EF1A707E2D_gshared)(__this, ___samplingRate0, ___numChannels1, method);
}
// System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::get_On()
inline bool VoiceDetector_1_get_On_mAA630DFE422E1D5263686DDCE57F6E26C4DF8AB8_inline (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *, const RuntimeMethod*))VoiceDetector_1_get_On_mAA630DFE422E1D5263686DDCE57F6E26C4DF8AB8_gshared_inline)(__this, method);
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::set_Detected(System.Boolean)
inline void VoiceDetector_1_set_Detected_m13E95CCF06BB947C56591D1DB287436309D074AB (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *, bool, const RuntimeMethod*))VoiceDetector_1_set_Detected_m13E95CCF06BB947C56591D1DB287436309D074AB_gshared)(__this, ___value0, method);
}
// System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::get_Detected()
inline bool VoiceDetector_1_get_Detected_m2556CDCC35307D5A1AE5D0573806C4E1C4C0F5C8_inline (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *, const RuntimeMethod*))VoiceDetector_1_get_Detected_m2556CDCC35307D5A1AE5D0573806C4E1C4C0F5C8_gshared_inline)(__this, method);
}
// System.Void Photon.Voice.ImageBufferInfo/StrideSet::set_Length(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StrideSet_set_Length_m1B534D34EAF9959D432D837D7DC4F8E56F506F43_inline (StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.ImageBufferInfo/StrideSet::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StrideSet__ctor_m3413EDB50412A0DFA8028346F458151D2142035B (StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF * __this, int32_t ___length0, int32_t ___s01, int32_t ___s12, int32_t ___s23, int32_t ___s34, const RuntimeMethod* method);
// System.Int32 Photon.Voice.ImageBufferInfo/StrideSet::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StrideSet_get_Item_m2140546B05BA8D71EA5B87CABFF62F0E3BC312A6 (StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void Photon.Voice.ImageBufferInfo/StrideSet::set_Item(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StrideSet_set_Item_m93BEEBFF6E7FA2A5955B7430B2B4227B16FA9F3B (StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Int32 Photon.Voice.ImageBufferInfo/StrideSet::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StrideSet_get_Length_mE261F3B4A73E03A6EA9F543B637EE979FFD51331_inline (StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.ImageBufferNative/PlaneSet::set_Length(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlaneSet_set_Length_m7799AC791B2BF9C1CCC822E8AC2DBA3F23B7145E_inline (PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.ImageBufferNative/PlaneSet::.ctor(System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneSet__ctor_mBE92A321C300B44737FEB8143D96561C54C455B9 (PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169 * __this, int32_t ___length0, intptr_t ___p01, intptr_t ___p12, intptr_t ___p23, intptr_t ___p34, const RuntimeMethod* method);
// System.IntPtr Photon.Voice.ImageBufferNative/PlaneSet::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PlaneSet_get_Item_mD74850BC4327DA0F1E5FB4630A4C9CD4D3D22C9A (PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void Photon.Voice.ImageBufferNative/PlaneSet::set_Item(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneSet_set_Item_mEE14BA543CCBF284AA5C0754059E7FFC9CBC860E (PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169 * __this, int32_t ___key0, intptr_t ___value1, const RuntimeMethod* method);
// System.Int32 Photon.Voice.ImageBufferNative/PlaneSet::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlaneSet_get_Length_mC4AB38EA79E838926E0AF056C8DFF0EA34E15593_inline (PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.LoadBalancingTransport/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEF38BB0D123D2B71A120C516218F846C7D858DD3 (U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B * __this, const RuntimeMethod* method);
// Photon.Voice.VoiceInfo Photon.Voice.LocalVoice::get_Info()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  LocalVoice_get_Info_m1996B4F7A27EF2E408C0C0DE7BAED51524FA477B_inline (LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * __this, const RuntimeMethod* method);
// Photon.Voice.Codec Photon.Voice.VoiceInfo::get_Codec()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Codec_mEE43E2D47F30D9B9953DFB95479EC3B7BA9FE2E3_inline (VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.OpusCodec/Encoder`1<System.Single>::.ctor(Photon.Voice.VoiceInfo,Photon.Voice.ILogger)
inline void Encoder_1__ctor_m41B7B1A903690DC74302D619DC29D6A7E6741578 (Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620 * __this, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___i0, RuntimeObject* ___logger1, const RuntimeMethod* method)
{
	((  void (*) (Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620 *, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 , RuntimeObject*, const RuntimeMethod*))Encoder_1__ctor_m41B7B1A903690DC74302D619DC29D6A7E6741578_gshared)(__this, ___i0, ___logger1, method);
}
// System.ArraySegment`1<System.Byte> POpusCodec.OpusEncoder::Encode(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  OpusEncoder_Encode_mA02094AC74B3D8584A43144B42FFB6D7A17AE6CA (OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___pcmSamples0, const RuntimeMethod* method);
// System.Void Photon.Voice.OpusCodec/Encoder`1<System.Int16>::.ctor(Photon.Voice.VoiceInfo,Photon.Voice.ILogger)
inline void Encoder_1__ctor_m9077E63DD228B223B7033E63ACA21B768789E119 (Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2 * __this, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___i0, RuntimeObject* ___logger1, const RuntimeMethod* method)
{
	((  void (*) (Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2 *, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 , RuntimeObject*, const RuntimeMethod*))Encoder_1__ctor_m9077E63DD228B223B7033E63ACA21B768789E119_gshared)(__this, ___i0, ___logger1, method);
}
// System.ArraySegment`1<System.Byte> POpusCodec.OpusEncoder::Encode(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  OpusEncoder_Encode_mB285924B22403DCB1C3E0E31F708B6F4CAE9C60B (OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___pcmSamples0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Collections.IEnumerator System.Array::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964 (RuntimeArray * __this, const RuntimeMethod* method);
// T[] Photon.Voice.FrameOut`1<System.Int16>::get_Buf()
inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* FrameOut_1_get_Buf_mBBFA29E661AF47B93BF8300002DFD63CDAD854B1_inline (FrameOut_1_t360F685F3D2F100DC469100D32F8A5B415EC536E * __this, const RuntimeMethod* method)
{
	return ((  Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* (*) (FrameOut_1_t360F685F3D2F100DC469100D32F8A5B415EC536E *, const RuntimeMethod*))FrameOut_1_get_Buf_mBBFA29E661AF47B93BF8300002DFD63CDAD854B1_gshared_inline)(__this, method);
}
// System.Void Photon.Voice.AudioUtil::Convert(System.Int16[],System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioUtil_Convert_mC7F7157BD9FF2910A35E7DB143665624F74E08E3 (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___src0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___dst1, int32_t ___dstCount2, const RuntimeMethod* method);
// System.Void Photon.Voice.FrameOut`1<System.Single>::.ctor(T[],System.Boolean)
inline void FrameOut_1__ctor_mE64EB72A44080E0E3114CAA125FA2C871A62D67F (FrameOut_1_t2E75A31E49C5BB56BEAA73766430E3B7F2167044 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___buf0, bool ___endOfStream1, const RuntimeMethod* method)
{
	((  void (*) (FrameOut_1_t2E75A31E49C5BB56BEAA73766430E3B7F2167044 *, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, bool, const RuntimeMethod*))FrameOut_1__ctor_mE64EB72A44080E0E3114CAA125FA2C871A62D67F_gshared)(__this, ___buf0, ___endOfStream1, method);
}
// System.Void System.Action`1<Photon.Voice.FrameOut`1<System.Single>>::Invoke(!0)
inline void Action_1_Invoke_m951D1B4CD86FEF66370C92B87EF8A32203ACD5D7 (Action_1_t0B1D8E060FEAA27D51B6AD68D56361DDCF6D383F * __this, FrameOut_1_t2E75A31E49C5BB56BEAA73766430E3B7F2167044 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0B1D8E060FEAA27D51B6AD68D56361DDCF6D383F *, FrameOut_1_t2E75A31E49C5BB56BEAA73766430E3B7F2167044 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void Photon.Voice.SpacingProfile/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m136FB5C849DF47278DC80C16FD3605B830ADEF3E (U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 * __this, const RuntimeMethod* method);
// System.Int16 System.Math::Abs(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Math_Abs_m9B9260F0BD34F4E70E016E2714A9553C8AAD40D9 (int16_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.VoiceClient/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF6EAD72EAF3447B8E05F7362A512BADB343B30A0 (U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.LocalVoice::get_DebugEchoMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LocalVoice_get_DebugEchoMode_m98A24E697FB45440E960B0DC9420CD4C05903F6B_inline (LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.LocalVoice::.ctor(Photon.Voice.VoiceClient,Photon.Voice.IEncoder,System.Byte,Photon.Voice.VoiceInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalVoice__ctor_mA61893CACB4A7C26F76DA8D2BF2678AB86DD3318 (LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * __this, VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * ___voiceClient0, RuntimeObject* ___encoder1, uint8_t ___id2, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___voiceInfo3, int32_t ___channelId4, const RuntimeMethod* method);
// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1<System.Int16>::get_BufferFactory()
inline FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * LocalVoiceFramed_1_get_BufferFactory_mE185781006A94F4245FD1FD62C2B28E16D719738_inline (LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664 * __this, const RuntimeMethod* method)
{
	return ((  FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * (*) (LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664 *, const RuntimeMethod*))LocalVoiceFramed_1_get_BufferFactory_mE185781006A94F4245FD1FD62C2B28E16D719738_gshared_inline)(__this, method);
}
// T[] Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>::New(System.Int32)
inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* FactoryPrimitiveArrayPool_1_New_m4B62F1E511B7854408A14C347007968C092B4142 (FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	return ((  Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* (*) (FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 *, int32_t, const RuntimeMethod*))FactoryPrimitiveArrayPool_1_New_m4B62F1E511B7854408A14C347007968C092B4142_gshared)(__this, ___size0, method);
}
// System.Void Photon.Voice.AudioUtil::Convert(System.Single[],System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioUtil_Convert_mE7E3A1421F063E82C97D51909A11A44DB2B123B6 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___src0, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___dst1, int32_t ___dstCount2, const RuntimeMethod* method);
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Int16>::PushDataAsync(T[])
inline void LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1 (LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___buf0, const RuntimeMethod* method)
{
	((  void (*) (LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664 *, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, const RuntimeMethod*))LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1_gshared)(__this, ___buf0, method);
}
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Single>::PushDataAsync(T[])
inline void LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82 (LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___buf0, const RuntimeMethod* method)
{
	((  void (*) (LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0 *, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, const RuntimeMethod*))LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82_gshared)(__this, ___buf0, method);
}
// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1<System.Single>::get_BufferFactory()
inline FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * LocalVoiceFramed_1_get_BufferFactory_m55FFB4181F0CF749B62E8D81C7F962EF460BFEC0_inline (LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0 * __this, const RuntimeMethod* method)
{
	return ((  FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * (*) (LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0 *, const RuntimeMethod*))LocalVoiceFramed_1_get_BufferFactory_m55FFB4181F0CF749B62E8D81C7F962EF460BFEC0_gshared_inline)(__this, method);
}
// T[] Photon.Voice.FactoryPrimitiveArrayPool`1<System.Single>::New(System.Int32)
inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* FactoryPrimitiveArrayPool_1_New_mA7DF99EB941029EF5445393AFF981A7B6919711F (FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* (*) (FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 *, int32_t, const RuntimeMethod*))FactoryPrimitiveArrayPool_1_New_mA7DF99EB941029EF5445393AFF981A7B6919711F_gshared)(__this, ___size0, method);
}
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally2_m793ABF699DD08C7DBE1EF15DC58288BCB690ED25 (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally1_m1E37E3573DF0ECA9A68A526F0E8B9B5AE377089C (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>::GetEnumerator()
inline Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B  Dictionary_2_GetEnumerator_m7FDCA22BD761E723E00B8926B1F30557331BFFEC (Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B  (*) (Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m17437D82A5AF502166F10DD12B5C5830DDB95444_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>::get_Current()
inline KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  Enumerator_get_Current_mD102ED220D0F16567214E8E5C69A3D8146D5D8AF_inline (Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  (*) (Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B *, const RuntimeMethod*))Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>::get_Value()
inline Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * KeyValuePair_2_get_Value_mF1D2B2C146EB355F5C3191E4A1C4C2034249BAA3_inline (KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 * __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * (*) (KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>::GetEnumerator()
inline Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E  Dictionary_2_GetEnumerator_mAF78EC82F6811AFB6068D09343E164B970681C1E (Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E  (*) (Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mAD2EBD021C57B44EEC71DAC1FC0847ACCE2F7051_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,Photon.Voice.RemoteVoice>::get_Current()
inline KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382  Enumerator_get_Current_mF633D50299E68934066A6E44C1DC7504E92ABCC4_inline (Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382  (*) (Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E *, const RuntimeMethod*))Enumerator_get_Current_mDD5FF5DE0A9753D6EC3A02500E649CA8E738CE83_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Byte,Photon.Voice.RemoteVoice>::get_Value()
inline RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * KeyValuePair_2_get_Value_m2AB6475270004FDA7585570A8A7B1898C5942513_inline (KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 * __this, const RuntimeMethod* method)
{
	return ((  RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * (*) (KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m6FB62A84CBE44A1ADC675B97E28FABD4A3658064_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>::get_Key()
inline int32_t KeyValuePair_2_get_Key_mC3EC4F0ADB2359D5B5386277C54A9A5B5C2F5315_inline (KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCA6E77030F4BE64105E6B3EFB3CBB8E6EC08CA0A_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Byte,Photon.Voice.RemoteVoice>::get_Key()
inline uint8_t KeyValuePair_2_get_Key_mA5CEB73F2786970AE724DED666ACEA0BA9954B6F_inline (KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 * __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m8C5CDCE6A0C4D1F01811F8A3DE5598AC9C50910C_gshared_inline)(__this, method);
}
// Photon.Voice.VoiceInfo Photon.Voice.RemoteVoice::get_Info()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  RemoteVoice_get_Info_m1CEE9CD8D298502F545A2EE82BD99C0141A670E2_inline (RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.RemoteVoiceInfo::.ctor(System.Int32,System.Int32,System.Byte,Photon.Voice.VoiceInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVoiceInfo__ctor_m27E03F21BF9A67143072FBBACFD7F175250B9CA6 (RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A * __this, int32_t ___channelId0, int32_t ___playerId1, uint8_t ___voiceId2, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___info3, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,Photon.Voice.RemoteVoice>::MoveNext()
inline bool Enumerator_MoveNext_m763AC53790967C7503AE2B3D581CEA882C6CE3DB (Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E *, const RuntimeMethod*))Enumerator_MoveNext_mF4C1B40791EFD4A01AF190E5539417DBB5DA255B_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>::MoveNext()
inline bool Enumerator_MoveNext_m25A4E8E566B755F3B5D4E285035BEA7B83ED2AAE (Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B *, const RuntimeMethod*))Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared)(__this, method);
}
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_System_IDisposable_Dispose_m572FFFF4CD05AD4C5B1A96EB40277FA653F0908C (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>::Dispose()
inline void Enumerator_Dispose_mDEFCDED916603553DBB44F2363E844D232B884D5 (Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B *, const RuntimeMethod*))Enumerator_Dispose_m7567E65C01E35A09AD2AD4814D708A8E76469D31_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,Photon.Voice.RemoteVoice>::Dispose()
inline void Enumerator_Dispose_mFA11765DB3B1C2D8B904790C9B2DA123D1C604C1 (Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E *, const RuntimeMethod*))Enumerator_Dispose_mA8B2C0245428CBCCFB6628B1799077BC4239B5FB_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40__ctor_m370BF8BBB65C6860778208A7ECE261CC83C9EC60 (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Photon.Voice.RemoteVoiceInfo> Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.Collections.Generic.IEnumerable<Photon.Voice.RemoteVoiceInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_Generic_IEnumerableU3CPhoton_Voice_RemoteVoiceInfoU3E_GetEnumerator_m561C06EB0CD20D7B774681A871D11CF2E9D1FF16 (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method);
IL2CPP_EXTERN_C int32_t CDECL opus_encoder_get_size(int32_t);
IL2CPP_EXTERN_C int32_t CDECL opus_encoder_init(intptr_t, int32_t, int32_t, int32_t);
IL2CPP_EXTERN_C intptr_t CDECL opus_get_version_string();
IL2CPP_EXTERN_C int32_t CDECL opus_encode(intptr_t, int16_t*, int32_t, uint8_t*, int32_t);
IL2CPP_EXTERN_C int32_t CDECL opus_encode_float(intptr_t, float*, int32_t, uint8_t*, int32_t);
IL2CPP_EXTERN_C int32_t CDECL opus_encoder_ctl_set_ext(intptr_t, int32_t, int32_t);
IL2CPP_EXTERN_C int32_t CDECL opus_encoder_ctl_get_ext(intptr_t, int32_t, int32_t*);
IL2CPP_EXTERN_C int32_t CDECL opus_decoder_ctl_set_ext(intptr_t, int32_t, int32_t);
IL2CPP_EXTERN_C int32_t CDECL opus_decoder_ctl_get_ext(intptr_t, int32_t, int32_t*);
IL2CPP_EXTERN_C int32_t CDECL opus_decoder_get_size(int32_t);
IL2CPP_EXTERN_C int32_t CDECL opus_decoder_init(intptr_t, int32_t, int32_t);
IL2CPP_EXTERN_C int32_t CDECL opus_decode(intptr_t, intptr_t, int32_t, int16_t*, int32_t, int32_t);
IL2CPP_EXTERN_C int32_t CDECL opus_decode_float(intptr_t, intptr_t, int32_t, float*, int32_t, int32_t);
IL2CPP_EXTERN_C int32_t CDECL opus_packet_get_bandwidth(intptr_t);
IL2CPP_EXTERN_C int32_t CDECL opus_packet_get_nb_channels(uint8_t*);
IL2CPP_EXTERN_C intptr_t CDECL opus_strerror(int32_t);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 POpusCodec.Wrapper::opus_encoder_get_size(POpusCodec.Enums.Channels)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_encoder_get_size_mF5DE580D5571EBA6AF90FB069C041D0F0C7A1F25 (int32_t ___channels0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(opus_encoder_get_size)(___channels0);

	return returnValue;
}
// POpusCodec.Enums.OpusStatusCode POpusCodec.Wrapper::opus_encoder_init(System.IntPtr,POpusCodec.Enums.SamplingRate,POpusCodec.Enums.Channels,POpusCodec.Enums.OpusApplicationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_encoder_init_m2688A8B407D9560C0CFE552A289190898846FC9B (intptr_t ___st0, int32_t ___Fs1, int32_t ___channels2, int32_t ___application3, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(opus_encoder_init)(___st0, ___Fs1, ___channels2, ___application3);

	return returnValue;
}
// System.IntPtr POpusCodec.Wrapper::opus_get_version_string()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Wrapper_opus_get_version_string_m883864D214BC99507D453AC03914F291A21CF869 (const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(opus_get_version_string)();

	return returnValue;
}
// System.Int32 POpusCodec.Wrapper::opus_encode(System.IntPtr,System.Int16[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_encode_mE6D9EB706C2ED2EAE11440FE5B1C10BE0A42A541 (intptr_t ___st0, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___pcm1, int32_t ___frame_size2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data3, int32_t ___max_data_bytes4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int16_t*, int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___pcm1' to native representation
	int16_t* ____pcm1_marshaled = NULL;
	if (___pcm1 != NULL)
	{
		____pcm1_marshaled = reinterpret_cast<int16_t*>((___pcm1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___data3' to native representation
	uint8_t* ____data3_marshaled = NULL;
	if (___data3 != NULL)
	{
		____data3_marshaled = reinterpret_cast<uint8_t*>((___data3)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(opus_encode)(___st0, ____pcm1_marshaled, ___frame_size2, ____data3_marshaled, ___max_data_bytes4);

	return returnValue;
}
// System.Int32 POpusCodec.Wrapper::opus_encode_float(System.IntPtr,System.Single[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_encode_float_m68E43472ACA9329BD87A96297E5B04E33CB6DCF0 (intptr_t ___st0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___pcm1, int32_t ___frame_size2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data3, int32_t ___max_data_bytes4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, float*, int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___pcm1' to native representation
	float* ____pcm1_marshaled = NULL;
	if (___pcm1 != NULL)
	{
		____pcm1_marshaled = reinterpret_cast<float*>((___pcm1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___data3' to native representation
	uint8_t* ____data3_marshaled = NULL;
	if (___data3 != NULL)
	{
		____data3_marshaled = reinterpret_cast<uint8_t*>((___data3)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(opus_encode_float)(___st0, ____pcm1_marshaled, ___frame_size2, ____data3_marshaled, ___max_data_bytes4);

	return returnValue;
}
// System.Int32 POpusCodec.Wrapper::opus_encoder_ctl_set(System.IntPtr,POpusCodec.Enums.OpusCtlSetRequest,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_encoder_ctl_set_mE0134BECBD775097E0918D3B391FE46D3408E7A9 (intptr_t ___st0, int32_t ___request1, int32_t ___value2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(opus_encoder_ctl_set_ext)(___st0, ___request1, ___value2);

	return returnValue;
}
// System.Int32 POpusCodec.Wrapper::opus_encoder_ctl_get(System.IntPtr,POpusCodec.Enums.OpusCtlGetRequest,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_encoder_ctl_get_m9AA986DCECE2C74071E7E145AB784AF3ADC75040 (intptr_t ___st0, int32_t ___request1, int32_t* ___value2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(opus_encoder_ctl_get_ext)(___st0, ___request1, ___value2);

	return returnValue;
}
// System.Int32 POpusCodec.Wrapper::opus_decoder_ctl_set(System.IntPtr,POpusCodec.Enums.OpusCtlSetRequest,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_decoder_ctl_set_m392642D44CA8EB86B0A9BC2E16E5EACFD9D144DD (intptr_t ___st0, int32_t ___request1, int32_t ___value2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(opus_decoder_ctl_set_ext)(___st0, ___request1, ___value2);

	return returnValue;
}
// System.Int32 POpusCodec.Wrapper::opus_decoder_ctl_get(System.IntPtr,POpusCodec.Enums.OpusCtlGetRequest,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_decoder_ctl_get_mBD4CA046D84353B68239AA65CEF719F77D9597AE (intptr_t ___st0, int32_t ___request1, int32_t* ___value2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(opus_decoder_ctl_get_ext)(___st0, ___request1, ___value2);

	return returnValue;
}
// System.Int32 POpusCodec.Wrapper::opus_decoder_get_size(POpusCodec.Enums.Channels)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_decoder_get_size_m8AACC5C30114E3FF5CCEE90E1C70CE25A22D940E (int32_t ___channels0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(opus_decoder_get_size)(___channels0);

	return returnValue;
}
// POpusCodec.Enums.OpusStatusCode POpusCodec.Wrapper::opus_decoder_init(System.IntPtr,POpusCodec.Enums.SamplingRate,POpusCodec.Enums.Channels)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_decoder_init_m99480FCD7EFAF963BAAA3F393D4DAE7530AE675B (intptr_t ___st0, int32_t ___Fs1, int32_t ___channels2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(opus_decoder_init)(___st0, ___Fs1, ___channels2);

	return returnValue;
}
// System.Int32 POpusCodec.Wrapper::opus_decode(System.IntPtr,System.IntPtr,System.Int32,System.Int16[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_decode_mDBE1D2C24CF0AA2411BF7C9F1EC20EC84D9BD0F7 (intptr_t ___st0, intptr_t ___data1, int32_t ___len2, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___pcm3, int32_t ___frame_size4, int32_t ___decode_fec5, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t, int16_t*, int32_t, int32_t);

	// Marshaling of parameter '___pcm3' to native representation
	int16_t* ____pcm3_marshaled = NULL;
	if (___pcm3 != NULL)
	{
		____pcm3_marshaled = reinterpret_cast<int16_t*>((___pcm3)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(opus_decode)(___st0, ___data1, ___len2, ____pcm3_marshaled, ___frame_size4, ___decode_fec5);

	return returnValue;
}
// System.Int32 POpusCodec.Wrapper::opus_decode_float(System.IntPtr,System.IntPtr,System.Int32,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_decode_float_m4F3CB435F3709CD94B16B5D0673343837EFBEDC5 (intptr_t ___st0, intptr_t ___data1, int32_t ___len2, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___pcm3, int32_t ___frame_size4, int32_t ___decode_fec5, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t, float*, int32_t, int32_t);

	// Marshaling of parameter '___pcm3' to native representation
	float* ____pcm3_marshaled = NULL;
	if (___pcm3 != NULL)
	{
		____pcm3_marshaled = reinterpret_cast<float*>((___pcm3)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(opus_decode_float)(___st0, ___data1, ___len2, ____pcm3_marshaled, ___frame_size4, ___decode_fec5);

	return returnValue;
}
// System.Int32 POpusCodec.Wrapper::opus_packet_get_bandwidth(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_packet_get_bandwidth_m8BCF6B95762CFF935F154F1FCA6ABFB40F2E82FD (intptr_t ___data0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(opus_packet_get_bandwidth)(___data0);

	return returnValue;
}
// System.Int32 POpusCodec.Wrapper::opus_packet_get_nb_channels(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_packet_get_nb_channels_m929767E04985476A4934F9D6AF3EF926DC71B858 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (uint8_t*);

	// Marshaling of parameter '___data0' to native representation
	uint8_t* ____data0_marshaled = NULL;
	if (___data0 != NULL)
	{
		____data0_marshaled = reinterpret_cast<uint8_t*>((___data0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(opus_packet_get_nb_channels)(____data0_marshaled);

	return returnValue;
}
// System.IntPtr POpusCodec.Wrapper::opus_strerror(POpusCodec.Enums.OpusStatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Wrapper_opus_strerror_m90E534BF89A0AC615E03DDB1751D3375023C48D9 (int32_t ___error0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (int32_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(opus_strerror)(___error0);

	return returnValue;
}
// System.IntPtr POpusCodec.Wrapper::opus_encoder_create(POpusCodec.Enums.SamplingRate,POpusCodec.Enums.Channels,POpusCodec.Enums.OpusApplicationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Wrapper_opus_encoder_create_m732A61C3B0A9B180D49419EFFEB1A1F28B07E942 (int32_t ___Fs0, int32_t ___channels1, int32_t ___application2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Channels_t43E6EDAF5EC70F2F6C5181AF20CABA6C78A7D137_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpusApplicationType_tB8ADA34C34C04D074BB25ADF80F5528233D1CBE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamplingRate_tB35955BC7837DAB0BF0F4D73CAA2BAFD47646F51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral652644FEF0564E9346EB8F5F964757CF774FA1E4);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	Exception_t * G_B4_0 = NULL;
	Exception_t * G_B3_0 = NULL;
	{
		// int size = Wrapper.opus_encoder_get_size(channels);
		int32_t L_0 = ___channels1;
		int32_t L_1;
		L_1 = Wrapper_opus_encoder_get_size_mF5DE580D5571EBA6AF90FB069C041D0F0C7A1F25(L_0, /*hidden argument*/NULL);
		// IntPtr ptr = Marshal.AllocHGlobal(size);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC(L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		// OpusStatusCode statusCode = Wrapper.opus_encoder_init(ptr, Fs, channels, application);
		intptr_t L_3 = V_0;
		int32_t L_4 = ___Fs0;
		int32_t L_5 = ___channels1;
		int32_t L_6 = ___application2;
		int32_t L_7;
		L_7 = Wrapper_opus_encoder_init_m2688A8B407D9560C0CFE552A289190898846FC9B((intptr_t)L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		// HandleStatusCode(statusCode, "opus_encoder_create/opus_encoder_init", Fs, channels, application);
		int32_t L_8 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral652644FEF0564E9346EB8F5F964757CF774FA1E4);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral652644FEF0564E9346EB8F5F964757CF774FA1E4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_10;
		int32_t L_12 = ___Fs0;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(SamplingRate_tB35955BC7837DAB0BF0F4D73CAA2BAFD47646F51_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_14);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_11;
		int32_t L_16 = ___channels1;
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Channels_t43E6EDAF5EC70F2F6C5181AF20CABA6C78A7D137_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_18);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = L_15;
		int32_t L_20 = ___application2;
		int32_t L_21 = L_20;
		RuntimeObject * L_22 = Box(OpusApplicationType_tB8ADA34C34C04D074BB25ADF80F5528233D1CBE8_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_22);
		Wrapper_HandleStatusCode_mBF7829238C148DAE9C3B897D84B47E64276C509D(L_8, L_19, /*hidden argument*/NULL);
		// }
		goto IL_0061;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0047;
		}
		throw e;
	}

CATCH_0047:
	{ // begin catch(System.Exception)
		{
			// if (ptr != IntPtr.Zero)
			intptr_t L_23 = V_0;
			bool L_24;
			L_24 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_23, (intptr_t)(0), /*hidden argument*/NULL);
			G_B3_0 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			if (!L_24)
			{
				G_B4_0 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
				goto IL_0060;
			}
		}

IL_0054:
		{
			// Wrapper.opus_encoder_destroy(ptr);
			intptr_t L_25 = V_0;
			Wrapper_opus_encoder_destroy_mDCB3B95144FC755F51C053242523DEE9D3031AD0((intptr_t)L_25, /*hidden argument*/NULL);
			// ptr = IntPtr.Zero;
			V_0 = (intptr_t)(0);
			G_B4_0 = G_B3_0;
		}

IL_0060:
		{
			// throw ex;
			IL2CPP_RAISE_MANAGED_EXCEPTION(G_B4_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Wrapper_opus_encoder_create_m732A61C3B0A9B180D49419EFFEB1A1F28B07E942_RuntimeMethod_var)));
		}
	} // end catch (depth: 1)

IL_0061:
	{
		// return ptr;
		intptr_t L_26 = V_0;
		return (intptr_t)L_26;
	}
}
// System.Int32 POpusCodec.Wrapper::opus_encode(System.IntPtr,System.Int16[],System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_encode_m0F56B49B503C68E4BF4C20CA0E8177463C482EAD (intptr_t ___st0, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___pcm1, int32_t ___frame_size2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF58FD0E9D30863F8E935535EF48D09579499A0A1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (st == IntPtr.Zero)
		intptr_t L_0 = ___st0;
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new ObjectDisposedException("OpusEncoder");
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_2 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8F7BF4BDF48B06DD1CFBC52575BE0CD918C4973)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Wrapper_opus_encode_m0F56B49B503C68E4BF4C20CA0E8177463C482EAD_RuntimeMethod_var)));
	}

IL_0018:
	{
		// int payloadLength = opus_encode(st, pcm, frame_size, data, data.Length);
		intptr_t L_3 = ___st0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = ___pcm1;
		int32_t L_5 = ___frame_size2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___data3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___data3;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Wrapper_opus_encode_mE6D9EB706C2ED2EAE11440FE5B1C10BE0A42A541((intptr_t)L_3, L_4, L_5, L_6, ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), /*hidden argument*/NULL);
		V_0 = L_8;
		// if (payloadLength <= 0)
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		// HandleStatusCode((OpusStatusCode)payloadLength, "opus_encode/short", frame_size, data.Length);
		int32_t L_10 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralF58FD0E9D30863F8E935535EF48D09579499A0A1);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralF58FD0E9D30863F8E935535EF48D09579499A0A1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_12;
		int32_t L_14 = ___frame_size2;
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_13;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = ___data3;
		NullCheck(L_18);
		int32_t L_19 = ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)));
		RuntimeObject * L_20 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_20);
		Wrapper_HandleStatusCode_mBF7829238C148DAE9C3B897D84B47E64276C509D(L_10, L_17, /*hidden argument*/NULL);
	}

IL_0051:
	{
		// return payloadLength;
		int32_t L_21 = V_0;
		return L_21;
	}
}
// System.Int32 POpusCodec.Wrapper::opus_encode(System.IntPtr,System.Single[],System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_encode_mE03DF089C18199717295D7CE5703674721E3525F (intptr_t ___st0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___pcm1, int32_t ___frame_size2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD9FE087CEC5F90162F1D5E08A0D73EE7993C85E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (st == IntPtr.Zero)
		intptr_t L_0 = ___st0;
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new ObjectDisposedException("OpusEncoder");
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_2 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8F7BF4BDF48B06DD1CFBC52575BE0CD918C4973)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Wrapper_opus_encode_mE03DF089C18199717295D7CE5703674721E3525F_RuntimeMethod_var)));
	}

IL_0018:
	{
		// int payloadLength = opus_encode_float(st, pcm, frame_size, data, data.Length);
		intptr_t L_3 = ___st0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = ___pcm1;
		int32_t L_5 = ___frame_size2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___data3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___data3;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Wrapper_opus_encode_float_m68E43472ACA9329BD87A96297E5B04E33CB6DCF0((intptr_t)L_3, L_4, L_5, L_6, ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), /*hidden argument*/NULL);
		V_0 = L_8;
		// if (payloadLength <= 0)
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		// HandleStatusCode((OpusStatusCode)payloadLength, "opus_encode/float", frame_size, data.Length);
		int32_t L_10 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralAD9FE087CEC5F90162F1D5E08A0D73EE7993C85E);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralAD9FE087CEC5F90162F1D5E08A0D73EE7993C85E);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_12;
		int32_t L_14 = ___frame_size2;
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_13;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = ___data3;
		NullCheck(L_18);
		int32_t L_19 = ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)));
		RuntimeObject * L_20 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_20);
		Wrapper_HandleStatusCode_mBF7829238C148DAE9C3B897D84B47E64276C509D(L_10, L_17, /*hidden argument*/NULL);
	}

IL_0051:
	{
		// return payloadLength;
		int32_t L_21 = V_0;
		return L_21;
	}
}
// System.Void POpusCodec.Wrapper::opus_encoder_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wrapper_opus_encoder_destroy_mDCB3B95144FC755F51C053242523DEE9D3031AD0 (intptr_t ___st0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Marshal.FreeHGlobal(st);
		intptr_t L_0 = ___st0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 POpusCodec.Wrapper::get_opus_encoder_ctl(System.IntPtr,POpusCodec.Enums.OpusCtlGetRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_get_opus_encoder_ctl_m7C98E32FC1605D0693690FB94C33244C06A7A05B (intptr_t ___st0, int32_t ___request1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpusCtlGetRequest_t049CC5B0BFF8AB8EB74538A9E0B44A02EEAE4942_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB077F824E674FA6BF9233CCAE7339D3ACFA9BB46);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (st == IntPtr.Zero)
		intptr_t L_0 = ___st0;
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new ObjectDisposedException("OpusEncoder");
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_2 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8F7BF4BDF48B06DD1CFBC52575BE0CD918C4973)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Wrapper_get_opus_encoder_ctl_m7C98E32FC1605D0693690FB94C33244C06A7A05B_RuntimeMethod_var)));
	}

IL_0018:
	{
		// int value = 0;
		V_0 = 0;
		// OpusStatusCode statusCode = (OpusStatusCode)opus_encoder_ctl_get(st, request, ref value);
		intptr_t L_3 = ___st0;
		int32_t L_4 = ___request1;
		int32_t L_5;
		L_5 = Wrapper_opus_encoder_ctl_get_m9AA986DCECE2C74071E7E145AB784AF3ADC75040((intptr_t)L_3, L_4, (int32_t*)(&V_0), /*hidden argument*/NULL);
		// HandleStatusCode(statusCode, "opus_encoder_ctl_get", request);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralB077F824E674FA6BF9233CCAE7339D3ACFA9BB46);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralB077F824E674FA6BF9233CCAE7339D3ACFA9BB46);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_7;
		int32_t L_9 = ___request1;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(OpusCtlGetRequest_t049CC5B0BFF8AB8EB74538A9E0B44A02EEAE4942_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_11);
		Wrapper_HandleStatusCode_mBF7829238C148DAE9C3B897D84B47E64276C509D(L_5, L_8, /*hidden argument*/NULL);
		// return value;
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Void POpusCodec.Wrapper::set_opus_encoder_ctl(System.IntPtr,POpusCodec.Enums.OpusCtlSetRequest,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wrapper_set_opus_encoder_ctl_m55D922C5ACFAFE4FC35F34AEF469B4B5CC1101FE (intptr_t ___st0, int32_t ___request1, int32_t ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpusCtlSetRequest_t0E26A969D2CF66B2E4BD1245BC62EEC012ADA035_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D290331D940C3D6D42EC70B1322FCCB67FDD0F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (st == IntPtr.Zero)
		intptr_t L_0 = ___st0;
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new ObjectDisposedException("OpusEncoder");
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_2 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8F7BF4BDF48B06DD1CFBC52575BE0CD918C4973)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Wrapper_set_opus_encoder_ctl_m55D922C5ACFAFE4FC35F34AEF469B4B5CC1101FE_RuntimeMethod_var)));
	}

IL_0018:
	{
		// OpusStatusCode statusCode = (OpusStatusCode)opus_encoder_ctl_set(st, request, value);
		intptr_t L_3 = ___st0;
		int32_t L_4 = ___request1;
		int32_t L_5 = ___value2;
		int32_t L_6;
		L_6 = Wrapper_opus_encoder_ctl_set_mE0134BECBD775097E0918D3B391FE46D3408E7A9((intptr_t)L_3, L_4, L_5, /*hidden argument*/NULL);
		// HandleStatusCode(statusCode, "opus_encoder_ctl_set", request, value);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral2D290331D940C3D6D42EC70B1322FCCB67FDD0F2);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2D290331D940C3D6D42EC70B1322FCCB67FDD0F2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_8;
		int32_t L_10 = ___request1;
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(OpusCtlSetRequest_t0E26A969D2CF66B2E4BD1245BC62EEC012ADA035_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_9;
		int32_t L_14 = ___value2;
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_16);
		Wrapper_HandleStatusCode_mBF7829238C148DAE9C3B897D84B47E64276C509D(L_6, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 POpusCodec.Wrapper::get_opus_decoder_ctl(System.IntPtr,POpusCodec.Enums.OpusCtlGetRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_get_opus_decoder_ctl_m9497BD2DFC1BB465D790A264C57AA25DB21C9DDC (intptr_t ___st0, int32_t ___request1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpusCtlGetRequest_t049CC5B0BFF8AB8EB74538A9E0B44A02EEAE4942_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3F831EAD0E0AAAF7E07EC75A7133B72CB231F06);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (st == IntPtr.Zero)
		intptr_t L_0 = ___st0;
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new ObjectDisposedException("OpusDcoder");
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_2 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2A7607A8D9CB052F456827F55F9736275BC685BC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Wrapper_get_opus_decoder_ctl_m9497BD2DFC1BB465D790A264C57AA25DB21C9DDC_RuntimeMethod_var)));
	}

IL_0018:
	{
		// int value = 0;
		V_0 = 0;
		// OpusStatusCode statusCode = (OpusStatusCode)opus_decoder_ctl_get(st, request, ref value);
		intptr_t L_3 = ___st0;
		int32_t L_4 = ___request1;
		int32_t L_5;
		L_5 = Wrapper_opus_decoder_ctl_get_mBD4CA046D84353B68239AA65CEF719F77D9597AE((intptr_t)L_3, L_4, (int32_t*)(&V_0), /*hidden argument*/NULL);
		// HandleStatusCode(statusCode, "get_opus_decoder_ctl", request, value);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralF3F831EAD0E0AAAF7E07EC75A7133B72CB231F06);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralF3F831EAD0E0AAAF7E07EC75A7133B72CB231F06);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_7;
		int32_t L_9 = ___request1;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(OpusCtlGetRequest_t049CC5B0BFF8AB8EB74538A9E0B44A02EEAE4942_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_8;
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_15);
		Wrapper_HandleStatusCode_mBF7829238C148DAE9C3B897D84B47E64276C509D(L_5, L_12, /*hidden argument*/NULL);
		// return value;
		int32_t L_16 = V_0;
		return L_16;
	}
}
// System.Void POpusCodec.Wrapper::set_opus_decoder_ctl(System.IntPtr,POpusCodec.Enums.OpusCtlSetRequest,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wrapper_set_opus_decoder_ctl_m8150E7FB6BDC1C7ABB249C97855603EA584D7DAC (intptr_t ___st0, int32_t ___request1, int32_t ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpusCtlSetRequest_t0E26A969D2CF66B2E4BD1245BC62EEC012ADA035_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27B7E8210FDB3F4A5E56C36B25D3777E07E4552C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (st == IntPtr.Zero)
		intptr_t L_0 = ___st0;
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new ObjectDisposedException("OpusDecoder");
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_2 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91D12B2C38786B38DCDEB6D286A11596AC34E92C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Wrapper_set_opus_decoder_ctl_m8150E7FB6BDC1C7ABB249C97855603EA584D7DAC_RuntimeMethod_var)));
	}

IL_0018:
	{
		// OpusStatusCode statusCode = (OpusStatusCode)opus_decoder_ctl_set(st, request, value);
		intptr_t L_3 = ___st0;
		int32_t L_4 = ___request1;
		int32_t L_5 = ___value2;
		int32_t L_6;
		L_6 = Wrapper_opus_decoder_ctl_set_m392642D44CA8EB86B0A9BC2E16E5EACFD9D144DD((intptr_t)L_3, L_4, L_5, /*hidden argument*/NULL);
		// HandleStatusCode(statusCode, "set_opus_decoder_ctl", request, value);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral27B7E8210FDB3F4A5E56C36B25D3777E07E4552C);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral27B7E8210FDB3F4A5E56C36B25D3777E07E4552C);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_8;
		int32_t L_10 = ___request1;
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(OpusCtlSetRequest_t0E26A969D2CF66B2E4BD1245BC62EEC012ADA035_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_9;
		int32_t L_14 = ___value2;
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_16);
		Wrapper_HandleStatusCode_mBF7829238C148DAE9C3B897D84B47E64276C509D(L_6, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.IntPtr POpusCodec.Wrapper::opus_decoder_create(POpusCodec.Enums.SamplingRate,POpusCodec.Enums.Channels)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Wrapper_opus_decoder_create_m0A67B690D6AD0993A6BF896031AA286195F9F2EA (int32_t ___Fs0, int32_t ___channels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Channels_t43E6EDAF5EC70F2F6C5181AF20CABA6C78A7D137_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamplingRate_tB35955BC7837DAB0BF0F4D73CAA2BAFD47646F51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F7A190FCA5324777736687124641EB66C78C888);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	Exception_t * G_B4_0 = NULL;
	Exception_t * G_B3_0 = NULL;
	{
		// int size = Wrapper.opus_decoder_get_size(channels);
		int32_t L_0 = ___channels1;
		int32_t L_1;
		L_1 = Wrapper_opus_decoder_get_size_m8AACC5C30114E3FF5CCEE90E1C70CE25A22D940E(L_0, /*hidden argument*/NULL);
		// IntPtr ptr = Marshal.AllocHGlobal(size);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC(L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		// OpusStatusCode statusCode = Wrapper.opus_decoder_init(ptr, Fs, channels);
		intptr_t L_3 = V_0;
		int32_t L_4 = ___Fs0;
		int32_t L_5 = ___channels1;
		int32_t L_6;
		L_6 = Wrapper_opus_decoder_init_m99480FCD7EFAF963BAAA3F393D4DAE7530AE675B((intptr_t)L_3, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		// HandleStatusCode(statusCode, "opus_decoder_create", Fs, channels);
		int32_t L_7 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral4F7A190FCA5324777736687124641EB66C78C888);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral4F7A190FCA5324777736687124641EB66C78C888);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_9;
		int32_t L_11 = ___Fs0;
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(SamplingRate_tB35955BC7837DAB0BF0F4D73CAA2BAFD47646F51_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_13);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_10;
		int32_t L_15 = ___channels1;
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Channels_t43E6EDAF5EC70F2F6C5181AF20CABA6C78A7D137_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_17);
		Wrapper_HandleStatusCode_mBF7829238C148DAE9C3B897D84B47E64276C509D(L_7, L_14, /*hidden argument*/NULL);
		// }
		goto IL_0057;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003d;
		}
		throw e;
	}

CATCH_003d:
	{ // begin catch(System.Exception)
		{
			// if (ptr != IntPtr.Zero)
			intptr_t L_18 = V_0;
			bool L_19;
			L_19 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_18, (intptr_t)(0), /*hidden argument*/NULL);
			G_B3_0 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			if (!L_19)
			{
				G_B4_0 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
				goto IL_0056;
			}
		}

IL_004a:
		{
			// Wrapper.opus_decoder_destroy(ptr);
			intptr_t L_20 = V_0;
			Wrapper_opus_decoder_destroy_m50F6A76E68802434E42C4118499FE579D04A7135((intptr_t)L_20, /*hidden argument*/NULL);
			// ptr = IntPtr.Zero;
			V_0 = (intptr_t)(0);
			G_B4_0 = G_B3_0;
		}

IL_0056:
		{
			// throw ex;
			IL2CPP_RAISE_MANAGED_EXCEPTION(G_B4_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Wrapper_opus_decoder_create_m0A67B690D6AD0993A6BF896031AA286195F9F2EA_RuntimeMethod_var)));
		}
	} // end catch (depth: 1)

IL_0057:
	{
		// return ptr;
		intptr_t L_21 = V_0;
		return (intptr_t)L_21;
	}
}
// System.Void POpusCodec.Wrapper::opus_decoder_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wrapper_opus_decoder_destroy_m50F6A76E68802434E42C4118499FE579D04A7135 (intptr_t ___st0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Marshal.FreeHGlobal(st);
		intptr_t L_0 = ___st0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 POpusCodec.Wrapper::opus_decode(System.IntPtr,Photon.Voice.FrameBuffer,System.Int16[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_decode_mE8CFDDD5365D40D8E9B9B06A780AD826BB5C57AC (intptr_t ___st0, FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77  ___data1, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___pcm2, int32_t ___decode_fec3, int32_t ___channels4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FECD1E35EAF7DA64DCE5DBA132AEE7E7CAC39C8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (st == IntPtr.Zero)
		intptr_t L_0 = ___st0;
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new ObjectDisposedException("OpusDecoder");
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_2 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91D12B2C38786B38DCDEB6D286A11596AC34E92C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Wrapper_opus_decode_mE8CFDDD5365D40D8E9B9B06A780AD826BB5C57AC_RuntimeMethod_var)));
	}

IL_0018:
	{
		// int numSamplesDecoded = opus_decode(st, data.Ptr, data.Length, pcm, pcm.Length / channels, decode_fec);
		intptr_t L_3 = ___st0;
		intptr_t L_4;
		L_4 = FrameBuffer_get_Ptr_mD9C987B5A355E3BC15155106B558C009A96DA70B((FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77 *)(&___data1), /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = FrameBuffer_get_Length_m35BA177CE29573C3E4EBC62D1AC39F8695E23985_inline((FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77 *)(&___data1), /*hidden argument*/NULL);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_6 = ___pcm2;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_7 = ___pcm2;
		NullCheck(L_7);
		int32_t L_8 = ___channels4;
		int32_t L_9 = ___decode_fec3;
		int32_t L_10;
		L_10 = Wrapper_opus_decode_mDBE1D2C24CF0AA2411BF7C9F1EC20EC84D9BD0F7((intptr_t)L_3, (intptr_t)L_4, L_5, L_6, ((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))/(int32_t)L_8)), L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		// if (numSamplesDecoded == (int)OpusStatusCode.InvalidPacket)
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)-4)))))
		{
			goto IL_003c;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_003c:
	{
		// if (numSamplesDecoded <= 0)
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0081;
		}
	}
	{
		// HandleStatusCode((OpusStatusCode)numSamplesDecoded, "opus_decode/short", data.Length, pcm.Length, decode_fec, channels);
		int32_t L_13 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral7FECD1E35EAF7DA64DCE5DBA132AEE7E7CAC39C8);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral7FECD1E35EAF7DA64DCE5DBA132AEE7E7CAC39C8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_15;
		int32_t L_17;
		L_17 = FrameBuffer_get_Length_m35BA177CE29573C3E4EBC62D1AC39F8695E23985_inline((FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77 *)(&___data1), /*hidden argument*/NULL);
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_19);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_16;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_21 = ___pcm2;
		NullCheck(L_21);
		int32_t L_22 = ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)));
		RuntimeObject * L_23 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_23);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = L_20;
		int32_t L_25 = ___decode_fec3;
		int32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_27);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = L_24;
		int32_t L_29 = ___channels4;
		int32_t L_30 = L_29;
		RuntimeObject * L_31 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_31);
		Wrapper_HandleStatusCode_mBF7829238C148DAE9C3B897D84B47E64276C509D(L_13, L_28, /*hidden argument*/NULL);
	}

IL_0081:
	{
		// return numSamplesDecoded;
		int32_t L_32 = V_0;
		return L_32;
	}
}
// System.Int32 POpusCodec.Wrapper::opus_decode(System.IntPtr,Photon.Voice.FrameBuffer,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Wrapper_opus_decode_m2D4FC825F80F7C7BBBCC59E220F21A7864F0E052 (intptr_t ___st0, FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77  ___data1, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___pcm2, int32_t ___decode_fec3, int32_t ___channels4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral335EBC24DB6EF912D16346AAD6E280C88C65D66A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (st == IntPtr.Zero)
		intptr_t L_0 = ___st0;
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new ObjectDisposedException("OpusDecoder");
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_2 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91D12B2C38786B38DCDEB6D286A11596AC34E92C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Wrapper_opus_decode_m2D4FC825F80F7C7BBBCC59E220F21A7864F0E052_RuntimeMethod_var)));
	}

IL_0018:
	{
		// int numSamplesDecoded = opus_decode_float(st, data.Ptr, data.Length, pcm, pcm.Length / channels, decode_fec);
		intptr_t L_3 = ___st0;
		intptr_t L_4;
		L_4 = FrameBuffer_get_Ptr_mD9C987B5A355E3BC15155106B558C009A96DA70B((FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77 *)(&___data1), /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = FrameBuffer_get_Length_m35BA177CE29573C3E4EBC62D1AC39F8695E23985_inline((FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77 *)(&___data1), /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___pcm2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = ___pcm2;
		NullCheck(L_7);
		int32_t L_8 = ___channels4;
		int32_t L_9 = ___decode_fec3;
		int32_t L_10;
		L_10 = Wrapper_opus_decode_float_m4F3CB435F3709CD94B16B5D0673343837EFBEDC5((intptr_t)L_3, (intptr_t)L_4, L_5, L_6, ((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))/(int32_t)L_8)), L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		// if (numSamplesDecoded == (int)OpusStatusCode.InvalidPacket)
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)-4)))))
		{
			goto IL_003c;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_003c:
	{
		// if (numSamplesDecoded <= 0)
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0081;
		}
	}
	{
		// HandleStatusCode((OpusStatusCode)numSamplesDecoded, "opus_decode/float", data.Length, pcm.Length, decode_fec, channels);
		int32_t L_13 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral335EBC24DB6EF912D16346AAD6E280C88C65D66A);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral335EBC24DB6EF912D16346AAD6E280C88C65D66A);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_15;
		int32_t L_17;
		L_17 = FrameBuffer_get_Length_m35BA177CE29573C3E4EBC62D1AC39F8695E23985_inline((FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77 *)(&___data1), /*hidden argument*/NULL);
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_19);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_16;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_21 = ___pcm2;
		NullCheck(L_21);
		int32_t L_22 = ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)));
		RuntimeObject * L_23 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_23);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = L_20;
		int32_t L_25 = ___decode_fec3;
		int32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_27);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = L_24;
		int32_t L_29 = ___channels4;
		int32_t L_30 = L_29;
		RuntimeObject * L_31 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_31);
		Wrapper_HandleStatusCode_mBF7829238C148DAE9C3B897D84B47E64276C509D(L_13, L_28, /*hidden argument*/NULL);
	}

IL_0081:
	{
		// return numSamplesDecoded;
		int32_t L_32 = V_0;
		return L_32;
	}
}
// System.Void POpusCodec.Wrapper::HandleStatusCode(POpusCodec.Enums.OpusStatusCode,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wrapper_HandleStatusCode_mBF7829238C148DAE9C3B897D84B47E64276C509D (int32_t ___statusCode0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___info1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		// if (statusCode != OpusStatusCode.OK)
		int32_t L_0 = ___statusCode0;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		// var infoMsg = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach (var i in info) infoMsg += i.ToString() + ":";
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___info1;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0029;
	}

IL_000f:
	{
		// foreach (var i in info) infoMsg += i.ToString() + ":";
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// foreach (var i in info) infoMsg += i.ToString() + ":";
		String_t* L_6 = V_0;
		RuntimeObject * L_7 = V_3;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		String_t* L_9;
		L_9 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_6, L_8, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0029:
	{
		// foreach (var i in info) infoMsg += i.ToString() + ":";
		int32_t L_11 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_000f;
		}
	}
	{
		// throw new OpusException(statusCode, infoMsg  + Marshal.PtrToStringAnsi(opus_strerror(statusCode)));
		int32_t L_13 = ___statusCode0;
		String_t* L_14 = V_0;
		int32_t L_15 = ___statusCode0;
		intptr_t L_16;
		L_16 = Wrapper_opus_strerror_m90E534BF89A0AC615E03DDB1751D3375023C48D9(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var)));
		String_t* L_17;
		L_17 = Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA((intptr_t)L_16, /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_14, L_17, /*hidden argument*/NULL);
		OpusException_t1A61902C00340ACDC9D674DE351B1C666CCD1573 * L_19 = (OpusException_t1A61902C00340ACDC9D674DE351B1C666CCD1573 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OpusException_t1A61902C00340ACDC9D674DE351B1C666CCD1573_il2cpp_TypeInfo_var)));
		OpusException__ctor_m6C9DB91FD10CE2D516752DD6BED877A783062C8A(L_19, L_13, L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Wrapper_HandleStatusCode_mBF7829238C148DAE9C3B897D84B47E64276C509D_RuntimeMethod_var)));
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void POpusCodec.Wrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wrapper__ctor_m546FB02FD3F235DC91CE780EC182B2AC67CB570D (Wrapper_t02FC08D954149919540DD64B213654C82EED4DEC * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Voice.Unity.AndroidAudioInAEC/DataCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataCallback__ctor_m948B6BCB979C142F82BF957512AB9DC1AF447438 (DataCallback_t309F2AE294E34778F926EDB79F958D6EBCC73100 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA12A5890EB243359E97EB2D1526E2F3116ED4181);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DataCallback() : base("com.exitgames.photon.audioinaec.AudioInAEC$DataCallback") { }
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteralA12A5890EB243359E97EB2D1526E2F3116ED4181, /*hidden argument*/NULL);
		// public DataCallback() : base("com.exitgames.photon.audioinaec.AudioInAEC$DataCallback") { }
		return;
	}
}
// System.Void Photon.Voice.Unity.AndroidAudioInAEC/DataCallback::SetCallback(System.Action`1<System.Int16[]>,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataCallback_SetCallback_m7571248756B450B67B5BB6DEEA7778C2014AD9AB (DataCallback_t309F2AE294E34778F926EDB79F958D6EBCC73100 * __this, Action_1_t36DA73B27593F7623AE0D8CA71F9F3412BB9E635 * ___callback0, intptr_t ___javaBuf1, const RuntimeMethod* method)
{
	{
		// this.callback = callback;
		Action_1_t36DA73B27593F7623AE0D8CA71F9F3412BB9E635 * L_0 = ___callback0;
		__this->set_callback_4(L_0);
		// this.javaBuf = javaBuf;
		intptr_t L_1 = ___javaBuf1;
		__this->set_javaBuf_5((intptr_t)L_1);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.AndroidAudioInAEC/DataCallback::OnData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataCallback_OnData_m2C93EF30A0AC4BA29F5DB02BE1B80DB11B2F74F9 (DataCallback_t309F2AE294E34778F926EDB79F958D6EBCC73100 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mEF62A93226E47F29D311582E0677EA8E37573204_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_0 = NULL;
	{
		// if (callback != null)
		Action_1_t36DA73B27593F7623AE0D8CA71F9F3412BB9E635 * L_0 = __this->get_callback_4();
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		// var buf = AndroidJNI.FromShortArray(javaBuf);
		intptr_t L_1 = __this->get_javaBuf_5();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_2;
		L_2 = AndroidJNI_FromShortArray_mAD7FEF4EEAEC6A3DEF148C02EF4E00002A70542E((intptr_t)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// cntFrame++;
		int32_t L_3 = __this->get_cntFrame_6();
		__this->set_cntFrame_6(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		// cntShort += buf.Length;
		int32_t L_4 = __this->get_cntShort_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = V_0;
		NullCheck(L_5);
		__this->set_cntShort_7(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))));
		// this.callback(buf);
		Action_1_t36DA73B27593F7623AE0D8CA71F9F3412BB9E635 * L_6 = __this->get_callback_4();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_7 = V_0;
		NullCheck(L_6);
		Action_1_Invoke_mEF62A93226E47F29D311582E0677EA8E37573204(L_6, L_7, /*hidden argument*/Action_1_Invoke_mEF62A93226E47F29D311582E0677EA8E37573204_RuntimeMethod_var);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.AndroidAudioInAEC/DataCallback::OnStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataCallback_OnStop_mFDC6C9464B763DD3376699FF8AEFAD48C535C11E (DataCallback_t309F2AE294E34778F926EDB79F958D6EBCC73100 * __this, const RuntimeMethod* method)
{
	{
		// AndroidJNI.DeleteGlobalRef(javaBuf);
		intptr_t L_0 = __this->get_javaBuf_5();
		AndroidJNI_DeleteGlobalRef_m0B4945EEFFCA6F7CC0808310DD6FA8BFB58A4F53((intptr_t)L_0, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CallbackDelegate_t88EA3BC17AD939181ADBC67CEDFF0C3CF6BEE417 (CallbackDelegate_t88EA3BC17AD939181ADBC67CEDFF0C3CF6BEE417 * __this, int32_t ___instanceID0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___instanceID0);

}
// System.Void Photon.Voice.IOS.AudioInChangeNotifier/CallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackDelegate__ctor_mD7A0D659205192CE3BACB95D9DECD6A204220FEC (CallbackDelegate_t88EA3BC17AD939181ADBC67CEDFF0C3CF6BEE417 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Photon.Voice.IOS.AudioInChangeNotifier/CallbackDelegate::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackDelegate_Invoke_m5B85A26101CC0769B01E88761441CD5F55218865 (CallbackDelegate_t88EA3BC17AD939181ADBC67CEDFF0C3CF6BEE417 * __this, int32_t ___instanceID0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___instanceID0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceID0, targetMethod);
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
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___instanceID0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___instanceID0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___instanceID0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___instanceID0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceID0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Photon.Voice.IOS.AudioInChangeNotifier/CallbackDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CallbackDelegate_BeginInvoke_mE45F876746DA8874CADCC6A65544DFB94F8F71D1 (CallbackDelegate_t88EA3BC17AD939181ADBC67CEDFF0C3CF6BEE417 * __this, int32_t ___instanceID0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___instanceID0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Photon.Voice.IOS.AudioInChangeNotifier/CallbackDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackDelegate_EndInvoke_m7B138BCA64CF02E0FCAE65B10F3195DDB2F27820 (CallbackDelegate_t88EA3BC17AD939181ADBC67CEDFF0C3CF6BEE417 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Photon.Voice.IOS.AudioInChangeNotifier/MonoPInvokeCallbackAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_m86446E7FCB94A05EEFD4C81014DDD48294446485 (MonoPInvokeCallbackAttribute_t318D224F1E35043F0D8FF4F90AA4B841569E092E * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		// public MonoPInvokeCallbackAttribute(Type t) { type = t; }
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// public MonoPInvokeCallbackAttribute(Type t) { type = t; }
		Type_t * L_0 = ___t0;
		__this->set_type_0(L_0);
		// public MonoPInvokeCallbackAttribute(Type t) { type = t; }
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
// System.Void Photon.Voice.IOS.AudioInPusher/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m6BADE8FE3AE88EDEA952FBFBE9B3A19AD0955098 (U3CU3Ec__DisplayClass6_0_t8C27BB38028CD866DA8C6A7227FA67DC356319E9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.IOS.AudioInPusher/<>c__DisplayClass6_0::<.ctor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3C_ctorU3Eb__0_m8AA5AF2D879BA2D0F87767A73E673BEE598FF34E (U3CU3Ec__DisplayClass6_0_t8C27BB38028CD866DA8C6A7227FA67DC356319E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3__ctor_mFC8BD001C2B9360FB3DF14F796A628EAC4D81F55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t897FF49CFBEBC3E519C4E2672B4EA0BA7B40DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioInPusher_nativePushCallback_m6BB35B4A42F7CF6FD7AD4CE24E7C1EE1DDDD737D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB8F94E0A244F660446D4ADAB7A62FF7F391D3417_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tCE074E9B6B600C4D66DE2C4F6202ABAD4B751BA1 * V_0 = NULL;
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// lock (instancePerHandle) // prevent concurrent initialization
		IL2CPP_RUNTIME_CLASS_INIT(AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD_il2cpp_TypeInfo_var);
		Dictionary_2_tCE074E9B6B600C4D66DE2C4F6202ABAD4B751BA1 * L_0 = ((AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD_StaticFields*)il2cpp_codegen_static_fields_for(AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD_il2cpp_TypeInfo_var))->get_instancePerHandle_3();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_tCE074E9B6B600C4D66DE2C4F6202ABAD4B751BA1 * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		}

IL_0010:
		try
		{ // begin try (depth: 2)
			try
			{ // begin try (depth: 3)
				// var handle = Photon_Audio_In_CreatePusher(instanceCnt, nativePushCallback, (int)sessParam.Category, (int)sessParam.Mode, sessParam.CategoryOptionsToInt());
				IL2CPP_RUNTIME_CLASS_INIT(AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD_il2cpp_TypeInfo_var);
				int32_t L_2 = ((AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD_StaticFields*)il2cpp_codegen_static_fields_for(AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD_il2cpp_TypeInfo_var))->get_instanceCnt_2();
				Action_3_t897FF49CFBEBC3E519C4E2672B4EA0BA7B40DBA3 * L_3 = (Action_3_t897FF49CFBEBC3E519C4E2672B4EA0BA7B40DBA3 *)il2cpp_codegen_object_new(Action_3_t897FF49CFBEBC3E519C4E2672B4EA0BA7B40DBA3_il2cpp_TypeInfo_var);
				Action_3__ctor_mFC8BD001C2B9360FB3DF14F796A628EAC4D81F55(L_3, NULL, (intptr_t)((intptr_t)AudioInPusher_nativePushCallback_m6BB35B4A42F7CF6FD7AD4CE24E7C1EE1DDDD737D_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_mFC8BD001C2B9360FB3DF14F796A628EAC4D81F55_RuntimeMethod_var);
				AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E * L_4 = __this->get_address_of_sessParam_0();
				int32_t L_5 = L_4->get_Category_0();
				AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E * L_6 = __this->get_address_of_sessParam_0();
				int32_t L_7 = L_6->get_Mode_1();
				AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E * L_8 = __this->get_address_of_sessParam_0();
				int32_t L_9;
				L_9 = AudioSessionParameters_CategoryOptionsToInt_m8329C4EBD776D9539F8F7B89C00E8D700943664D((AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E *)L_8, /*hidden argument*/NULL);
				intptr_t L_10;
				L_10 = AudioInPusher_Photon_Audio_In_CreatePusher_m5C483A4F77CF855973C624E40198855C313F35F9(L_2, L_3, L_5, L_7, L_9, /*hidden argument*/NULL);
				V_2 = (intptr_t)L_10;
				// this.handle = handle;
				AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD * L_11 = __this->get_U3CU3E4__this_1();
				intptr_t L_12 = V_2;
				NullCheck(L_11);
				L_11->set_handle_4((intptr_t)L_12);
				// this.instanceID = instanceCnt;
				AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD * L_13 = __this->get_U3CU3E4__this_1();
				int32_t L_14 = ((AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD_StaticFields*)il2cpp_codegen_static_fields_for(AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD_il2cpp_TypeInfo_var))->get_instanceCnt_2();
				NullCheck(L_13);
				L_13->set_instanceID_5(L_14);
				// instancePerHandle.Add(instanceCnt++, this);
				Dictionary_2_tCE074E9B6B600C4D66DE2C4F6202ABAD4B751BA1 * L_15 = ((AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD_StaticFields*)il2cpp_codegen_static_fields_for(AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD_il2cpp_TypeInfo_var))->get_instancePerHandle_3();
				int32_t L_16 = ((AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD_StaticFields*)il2cpp_codegen_static_fields_for(AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD_il2cpp_TypeInfo_var))->get_instanceCnt_2();
				int32_t L_17 = L_16;
				((AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD_StaticFields*)il2cpp_codegen_static_fields_for(AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD_il2cpp_TypeInfo_var))->set_instanceCnt_2(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)));
				AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD * L_18 = __this->get_U3CU3E4__this_1();
				NullCheck(L_15);
				Dictionary_2_Add_mB8F94E0A244F660446D4ADAB7A62FF7F391D3417(L_15, L_17, L_18, /*hidden argument*/Dictionary_2_Add_mB8F94E0A244F660446D4ADAB7A62FF7F391D3417_RuntimeMethod_var);
				// }
				IL2CPP_LEAVE(0xF0, FINALLY_00d9);
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0083;
				}
				throw e;
			}

CATCH_0083:
			{ // begin catch(System.Exception)
				{
					// catch (Exception e)
					V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
					// Error = e.ToString();
					AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD * L_19 = __this->get_U3CU3E4__this_1();
					Exception_t * L_20 = V_3;
					NullCheck(L_20);
					String_t* L_21;
					L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
					NullCheck(L_19);
					AudioInPusher_set_Error_mE4F930729E4F5C2059950264F6D50BF735E01C3A_inline(L_19, L_21, /*hidden argument*/NULL);
					// if (Error == null) // should never happen but since Error used as validity flag, make sure that it's not null
					AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD * L_22 = __this->get_U3CU3E4__this_1();
					NullCheck(L_22);
					String_t* L_23;
					L_23 = AudioInPusher_get_Error_m23BBFE8A70B2BBE96893659DAA6DE4D226C571FA_inline(L_22, /*hidden argument*/NULL);
					if (L_23)
					{
						goto IL_00b2;
					}
				}

IL_00a2:
				{
					// Error = "Exception in AudioInPusher constructor";
					AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD * L_24 = __this->get_U3CU3E4__this_1();
					NullCheck(L_24);
					AudioInPusher_set_Error_mE4F930729E4F5C2059950264F6D50BF735E01C3A_inline(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral87611C547FCC3083E7DAFD5589BDA6DC1F2B9D53)), /*hidden argument*/NULL);
				}

IL_00b2:
				{
					// logger.LogError("[PV] AudioInPusher: " + Error);
					RuntimeObject* L_25 = __this->get_logger_2();
					AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD * L_26 = __this->get_U3CU3E4__this_1();
					NullCheck(L_26);
					String_t* L_27;
					L_27 = AudioInPusher_get_Error_m23BBFE8A70B2BBE96893659DAA6DE4D226C571FA_inline(L_26, /*hidden argument*/NULL);
					String_t* L_28;
					L_28 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral17B18DAA2E5F590F3527988AF3B31BFB53EA0EC2)), L_27, /*hidden argument*/NULL);
					ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29;
					L_29 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var)));
					NullCheck(L_25);
					InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var)), L_25, L_28, L_29);
					// }
					IL2CPP_POP_ACTIVE_EXCEPTION();
					IL2CPP_LEAVE(0xF0, FINALLY_00d9);
				}
			} // end catch (depth: 3)
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00d9;
		}

FINALLY_00d9:
		{ // begin finally (depth: 2)
			// initializationFinished = true;
			AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD * L_30 = __this->get_U3CU3E4__this_1();
			NullCheck(L_30);
			L_30->set_initializationFinished_1((bool)1);
			// }
			IL2CPP_END_FINALLY(217)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(217)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0xF0, FINALLY_00e6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e6;
	}

FINALLY_00e6:
	{ // begin finally (depth: 1)
		{
			bool L_31 = V_1;
			if (!L_31)
			{
				goto IL_00ef;
			}
		}

IL_00e9:
		{
			Dictionary_2_tCE074E9B6B600C4D66DE2C4F6202ABAD4B751BA1 * L_32 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_32, /*hidden argument*/NULL);
		}

IL_00ef:
		{
			IL2CPP_END_FINALLY(230)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(230)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF0, IL_00f0)
	}

IL_00f0:
	{
		// });
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CallbackDelegate_tF714239823DC720B21370BF84E751276BFAE89B7 (CallbackDelegate_tF714239823DC720B21370BF84E751276BFAE89B7 * __this, int32_t ___instanceID0, intptr_t ___buf1, int32_t ___len2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___instanceID0, ___buf1, ___len2);

}
// System.Void Photon.Voice.IOS.AudioInPusher/CallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackDelegate__ctor_m843AA75409A4C34FB4006DA32440FEE79F6C9F6C (CallbackDelegate_tF714239823DC720B21370BF84E751276BFAE89B7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Photon.Voice.IOS.AudioInPusher/CallbackDelegate::Invoke(System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackDelegate_Invoke_mC0F73E031CDAA53C916180BFF457E75955788EA6 (CallbackDelegate_tF714239823DC720B21370BF84E751276BFAE89B7 * __this, int32_t ___instanceID0, intptr_t ___buf1, int32_t ___len2, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, intptr_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___instanceID0, ___buf1, ___len2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceID0, ___buf1, ___len2, targetMethod);
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
						GenericInterfaceActionInvoker3< int32_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___instanceID0, ___buf1, ___len2);
					else
						GenericVirtActionInvoker3< int32_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___instanceID0, ___buf1, ___len2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___instanceID0, ___buf1, ___len2);
					else
						VirtActionInvoker3< int32_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___instanceID0, ___buf1, ___len2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceID0, ___buf1, ___len2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Photon.Voice.IOS.AudioInPusher/CallbackDelegate::BeginInvoke(System.Int32,System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CallbackDelegate_BeginInvoke_m83B7F3B23F18560E382AED5EDF14B01C921EEE98 (CallbackDelegate_tF714239823DC720B21370BF84E751276BFAE89B7 * __this, int32_t ___instanceID0, intptr_t ___buf1, int32_t ___len2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___instanceID0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___buf1);
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___len2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Photon.Voice.IOS.AudioInPusher/CallbackDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackDelegate_EndInvoke_mEA57C55D65ACA628B18B284E50CCE8C289436BAC (CallbackDelegate_tF714239823DC720B21370BF84E751276BFAE89B7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Photon.Voice.IOS.AudioInReader/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m385EEA881390C19376C987EF4BAF99DFB9A24CAE (U3CU3Ec__DisplayClass7_0_t05B9D84BFD8FFDFDB7DEB62E1562339B0FF2862D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.IOS.AudioInReader/<>c__DisplayClass7_0::<.ctor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3C_ctorU3Eb__0_m0ACF0F6BC6730E4DBC78105EEB5A2A438FAC60DD (U3CU3Ec__DisplayClass7_0_t05B9D84BFD8FFDFDB7DEB62E1562339B0FF2862D * __this, const RuntimeMethod* method)
{
	AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302 * V_0 = NULL;
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302 * V_3 = NULL;
	bool V_4 = false;
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// lock (this)
		AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302 * L_0 = __this->get_U3CU3E4__this_0();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302 * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		}

IL_0011:
		try
		{ // begin try (depth: 2)
			try
			{ // begin try (depth: 3)
				{
					// var audioIn = Photon_Audio_In_CreateReader((int)sessParam.Category, (int)sessParam.Mode, sessParam.CategoryOptionsToInt());
					AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E * L_2 = __this->get_address_of_sessParam_1();
					int32_t L_3 = L_2->get_Category_0();
					AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E * L_4 = __this->get_address_of_sessParam_1();
					int32_t L_5 = L_4->get_Mode_1();
					AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E * L_6 = __this->get_address_of_sessParam_1();
					int32_t L_7;
					L_7 = AudioSessionParameters_CategoryOptionsToInt_m8329C4EBD776D9539F8F7B89C00E8D700943664D((AudioSessionParameters_t1CDC7A44917B3D2D554440383473C28B84EFB26E *)L_6, /*hidden argument*/NULL);
					intptr_t L_8;
					L_8 = AudioInReader_Photon_Audio_In_CreateReader_m90C0660E1E2D7C6C7EBBE908C1DDAC933A3A3265(L_3, L_5, L_7, /*hidden argument*/NULL);
					V_2 = (intptr_t)L_8;
					// lock (this)
					AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302 * L_9 = __this->get_U3CU3E4__this_0();
					V_3 = L_9;
					V_4 = (bool)0;
				}

IL_0042:
				try
				{ // begin try (depth: 4)
					AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302 * L_10 = V_3;
					Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_10, (bool*)(&V_4), /*hidden argument*/NULL);
					// this.audioIn = audioIn;
					AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302 * L_11 = __this->get_U3CU3E4__this_0();
					intptr_t L_12 = V_2;
					NullCheck(L_11);
					L_11->set_audioIn_1((intptr_t)L_12);
					// }
					IL2CPP_LEAVE(0x63, FINALLY_0058);
				} // end try (depth: 4)
				catch(Il2CppExceptionWrapper& e)
				{
					__last_unhandled_exception = (Exception_t *)e.ex;
					goto FINALLY_0058;
				}

FINALLY_0058:
				{ // begin finally (depth: 4)
					{
						bool L_13 = V_4;
						if (!L_13)
						{
							goto IL_0062;
						}
					}

IL_005c:
					{
						AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302 * L_14 = V_3;
						Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_14, /*hidden argument*/NULL);
					}

IL_0062:
					{
						IL2CPP_END_FINALLY(88)
					}
				} // end finally (depth: 4)
				IL2CPP_CLEANUP(88)
				{
					IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
					IL2CPP_JUMP_TBL(0x63, IL_0063)
				}

IL_0063:
				{
					// }
					IL2CPP_LEAVE(0xD4, FINALLY_00bd);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0065;
				}
				throw e;
			}

CATCH_0065:
			{ // begin catch(System.Exception)
				{
					// catch (Exception e)
					V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
					// Error = e.ToString();
					AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302 * L_15 = __this->get_U3CU3E4__this_0();
					Exception_t * L_16 = V_5;
					NullCheck(L_16);
					String_t* L_17;
					L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
					NullCheck(L_15);
					AudioInReader_set_Error_mEF7DB6CE6FB8FA712A987E1C6FCF609E34EF0441_inline(L_15, L_17, /*hidden argument*/NULL);
					// if (Error == null) // should never happen but since Error used as validity flag, make sure that it's not null
					AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302 * L_18 = __this->get_U3CU3E4__this_0();
					NullCheck(L_18);
					String_t* L_19;
					L_19 = AudioInReader_get_Error_m0726467692BFD3A68B4CB0A9E618F6CC6A314472_inline(L_18, /*hidden argument*/NULL);
					if (L_19)
					{
						goto IL_0096;
					}
				}

IL_0086:
				{
					// Error = "Exception in AudioInReader constructor";
					AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302 * L_20 = __this->get_U3CU3E4__this_0();
					NullCheck(L_20);
					AudioInReader_set_Error_mEF7DB6CE6FB8FA712A987E1C6FCF609E34EF0441_inline(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral736977A8DC43E09C147CAFC8536005DA4284D6C8)), /*hidden argument*/NULL);
				}

IL_0096:
				{
					// logger.LogError("[PV] AudioInReader: " + Error);
					RuntimeObject* L_21 = __this->get_logger_2();
					AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302 * L_22 = __this->get_U3CU3E4__this_0();
					NullCheck(L_22);
					String_t* L_23;
					L_23 = AudioInReader_get_Error_m0726467692BFD3A68B4CB0A9E618F6CC6A314472_inline(L_22, /*hidden argument*/NULL);
					String_t* L_24;
					L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD12049269E84B94ADC67D8C867306BAEEB90416C)), L_23, /*hidden argument*/NULL);
					ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25;
					L_25 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var)));
					NullCheck(L_21);
					InterfaceActionInvoker2< String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ILogger_t4602E6C25C086ECF0B1991763F4D76A6AAE980EA_il2cpp_TypeInfo_var)), L_21, L_24, L_25);
					// }
					IL2CPP_POP_ACTIVE_EXCEPTION();
					IL2CPP_LEAVE(0xD4, FINALLY_00bd);
				}
			} // end catch (depth: 3)
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00bd;
		}

FINALLY_00bd:
		{ // begin finally (depth: 2)
			// initializationFinished = true;
			AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302 * L_26 = __this->get_U3CU3E4__this_0();
			NullCheck(L_26);
			L_26->set_initializationFinished_2((bool)1);
			// }
			IL2CPP_END_FINALLY(189)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(189)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0xD4, FINALLY_00ca);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ca;
	}

FINALLY_00ca:
	{ // begin finally (depth: 1)
		{
			bool L_27 = V_1;
			if (!L_27)
			{
				goto IL_00d3;
			}
		}

IL_00cd:
		{
			AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302 * L_28 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_28, /*hidden argument*/NULL);
		}

IL_00d3:
		{
			IL2CPP_END_FINALLY(202)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(202)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xD4, IL_00d4)
	}

IL_00d4:
	{
		// });
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
// System.Void Photon.Voice.AudioOutDelayControl/PlayDelayConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayDelayConfig__ctor_m68C418064F733C5BBC5F03405925E53BEDE7B15A (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, const RuntimeMethod* method)
{
	{
		// public PlayDelayConfig()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Low = 200;
		PlayDelayConfig_set_Low_m14EF1DB2F464EE9B681CE6238ACFA35D384A7B22_inline(__this, ((int32_t)200), /*hidden argument*/NULL);
		// High = 400;
		PlayDelayConfig_set_High_m2E8DE7D3EDF1AACA02292E0730C469316AE26734_inline(__this, ((int32_t)400), /*hidden argument*/NULL);
		// Max = 1000;
		PlayDelayConfig_set_Max_mE552A68942B1720690ECBAB19D6EC0563B45CAD9_inline(__this, ((int32_t)1000), /*hidden argument*/NULL);
		// SpeedUpPerc = 5;
		PlayDelayConfig_set_SpeedUpPerc_m49BD574A07EC17DBE96C3A1438E9EEE741E7CC33_inline(__this, 5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::get_Low()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayDelayConfig_get_Low_m74AC25AC2F5F3FFFD56CEA6915863A418E5649AE (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, const RuntimeMethod* method)
{
	{
		// public int Low { get  ; set; } // ms: (Target) Audio player initilizes the delay with this value on Start and after flush and moves to it during corrections
		int32_t L_0 = __this->get_U3CLowU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Photon.Voice.AudioOutDelayControl/PlayDelayConfig::set_Low(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayDelayConfig_set_Low_m14EF1DB2F464EE9B681CE6238ACFA35D384A7B22 (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Low { get  ; set; } // ms: (Target) Audio player initilizes the delay with this value on Start and after flush and moves to it during corrections
		int32_t L_0 = ___value0;
		__this->set_U3CLowU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::get_High()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayDelayConfig_get_High_m92A553D9CA8B243F2B80DF55A65590D54F20A3CA (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, const RuntimeMethod* method)
{
	{
		// public int High { get; set; } // ms: Audio player tries to keep the delay below this value.
		int32_t L_0 = __this->get_U3CHighU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Photon.Voice.AudioOutDelayControl/PlayDelayConfig::set_High(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayDelayConfig_set_High_m2E8DE7D3EDF1AACA02292E0730C469316AE26734 (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int High { get; set; } // ms: Audio player tries to keep the delay below this value.
		int32_t L_0 = ___value0;
		__this->set_U3CHighU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::get_Max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayDelayConfig_get_Max_m1F354039B7D05E18CACE6D55A79A796091C59C48 (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, const RuntimeMethod* method)
{
	{
		// public int Max { get; set; } // ms: Audio player guarantees that the delay never exceeds this value.
		int32_t L_0 = __this->get_U3CMaxU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Photon.Voice.AudioOutDelayControl/PlayDelayConfig::set_Max(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayDelayConfig_set_Max_mE552A68942B1720690ECBAB19D6EC0563B45CAD9 (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Max { get; set; } // ms: Audio player guarantees that the delay never exceeds this value.
		int32_t L_0 = ___value0;
		__this->set_U3CMaxU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::get_SpeedUpPerc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayDelayConfig_get_SpeedUpPerc_mF0539C2832704C106F8A608B4340D3E6BCDCD933 (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, const RuntimeMethod* method)
{
	{
		// public int SpeedUpPerc { get; set; } // playback speed-up to catch up the stream
		int32_t L_0 = __this->get_U3CSpeedUpPercU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Photon.Voice.AudioOutDelayControl/PlayDelayConfig::set_SpeedUpPerc(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayDelayConfig_set_SpeedUpPerc_m49BD574A07EC17DBE96C3A1438E9EEE741E7CC33 (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int SpeedUpPerc { get; set; } // playback speed-up to catch up the stream
		int32_t L_0 = ___value0;
		__this->set_U3CSpeedUpPercU3Ek__BackingField_3(L_0);
		return;
	}
}
// Photon.Voice.AudioOutDelayControl/PlayDelayConfig Photon.Voice.AudioOutDelayControl/PlayDelayConfig::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * PlayDelayConfig_Clone_mC7646AEC2B0A4E3827FBB0260CFBDA09C31E3A4F (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//                 return new PlayDelayConfig
		//                 {
		//                     Low = Low,
		//                     High = High,
		//                     Max = Max,
		//                     SpeedUpPerc = SpeedUpPerc,
		// #if PHOTON_VOICE_SOUND_TOUCH_ENABLE
		//                     TempoChangeHQ = TempoChangeHQ,
		// #endif
		//                 };
		PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * L_0 = (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 *)il2cpp_codegen_object_new(PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7_il2cpp_TypeInfo_var);
		PlayDelayConfig__ctor_m68C418064F733C5BBC5F03405925E53BEDE7B15A(L_0, /*hidden argument*/NULL);
		PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * L_1 = L_0;
		int32_t L_2;
		L_2 = PlayDelayConfig_get_Low_m74AC25AC2F5F3FFFD56CEA6915863A418E5649AE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		PlayDelayConfig_set_Low_m14EF1DB2F464EE9B681CE6238ACFA35D384A7B22_inline(L_1, L_2, /*hidden argument*/NULL);
		PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * L_3 = L_1;
		int32_t L_4;
		L_4 = PlayDelayConfig_get_High_m92A553D9CA8B243F2B80DF55A65590D54F20A3CA_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		PlayDelayConfig_set_High_m2E8DE7D3EDF1AACA02292E0730C469316AE26734_inline(L_3, L_4, /*hidden argument*/NULL);
		PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * L_5 = L_3;
		int32_t L_6;
		L_6 = PlayDelayConfig_get_Max_m1F354039B7D05E18CACE6D55A79A796091C59C48_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		PlayDelayConfig_set_Max_mE552A68942B1720690ECBAB19D6EC0563B45CAD9_inline(L_5, L_6, /*hidden argument*/NULL);
		PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * L_7 = L_5;
		int32_t L_8;
		L_8 = PlayDelayConfig_get_SpeedUpPerc_mF0539C2832704C106F8A608B4340D3E6BCDCD933_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		PlayDelayConfig_set_SpeedUpPerc_m49BD574A07EC17DBE96C3A1438E9EEE741E7CC33_inline(L_7, L_8, /*hidden argument*/NULL);
		return L_7;
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
// System.Single Photon.Voice.AudioUtil/LevelMeterDummy::get_CurrentAvgAmp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LevelMeterDummy_get_CurrentAvgAmp_m7AAEDF727F10A245CFC63E776067F53939D3239A (LevelMeterDummy_tD005D3282BE1A5CD6D829F547A2CBF6BC916D70B * __this, const RuntimeMethod* method)
{
	{
		// public float CurrentAvgAmp { get { return 0; } }
		return (0.0f);
	}
}
// System.Single Photon.Voice.AudioUtil/LevelMeterDummy::get_CurrentPeakAmp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LevelMeterDummy_get_CurrentPeakAmp_m1AE6E3414398CDF4C97493A1D342E406DE548F7E (LevelMeterDummy_tD005D3282BE1A5CD6D829F547A2CBF6BC916D70B * __this, const RuntimeMethod* method)
{
	{
		// public float CurrentPeakAmp { get { return 0; } }
		return (0.0f);
	}
}
// System.Single Photon.Voice.AudioUtil/LevelMeterDummy::get_AccumAvgPeakAmp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LevelMeterDummy_get_AccumAvgPeakAmp_m264830DFF00DED5A1FE98C695B3FB95F3E5E2FB8 (LevelMeterDummy_tD005D3282BE1A5CD6D829F547A2CBF6BC916D70B * __this, const RuntimeMethod* method)
{
	{
		// public float AccumAvgPeakAmp { get { return 0; } }
		return (0.0f);
	}
}
// System.Void Photon.Voice.AudioUtil/LevelMeterDummy::ResetAccumAvgPeakAmp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelMeterDummy_ResetAccumAvgPeakAmp_m2C6970D887BB73AE99A54A37A6C521CC8D71C735 (LevelMeterDummy_tD005D3282BE1A5CD6D829F547A2CBF6BC916D70B * __this, const RuntimeMethod* method)
{
	{
		// public void ResetAccumAvgPeakAmp() { }
		return;
	}
}
// System.Void Photon.Voice.AudioUtil/LevelMeterDummy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelMeterDummy__ctor_m791D44F915476FF178CE81D776D8CEB48AF92D8B (LevelMeterDummy_tD005D3282BE1A5CD6D829F547A2CBF6BC916D70B * __this, const RuntimeMethod* method)
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
// System.Void Photon.Voice.AudioUtil/LevelMeterFloat::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelMeterFloat__ctor_m06C495B6C05BE604DA7A76C310B1A8B77E2B6CE6 (LevelMeterFloat_t760D3DBB26D5D489891946710E1711FF9A262455 * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelMeter_1__ctor_mEEB16B4E16393F3FBF8011F032CB5B27935E604A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public LevelMeterFloat(int samplingRate, int numChannels) : base(samplingRate, numChannels)
		int32_t L_0 = ___samplingRate0;
		int32_t L_1 = ___numChannels1;
		LevelMeter_1__ctor_mEEB16B4E16393F3FBF8011F032CB5B27935E604A(__this, L_0, L_1, /*hidden argument*/LevelMeter_1__ctor_mEEB16B4E16393F3FBF8011F032CB5B27935E604A_RuntimeMethod_var);
		// norm = 1.0f;
		((LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 *)__this)->set_norm_8((1.0f));
		// }
		return;
	}
}
// System.Single[] Photon.Voice.AudioUtil/LevelMeterFloat::Process(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* LevelMeterFloat_Process_m93248BFB5B327A6525A64540B5AD528124FF5D91 (LevelMeterFloat_t760D3DBB26D5D489891946710E1711FF9A262455 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___buf0, const RuntimeMethod* method)
{
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		// foreach (var v in buf)
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___buf0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_00ab;
	}

IL_0009:
	{
		// foreach (var v in buf)
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// var a = v;
		V_2 = L_4;
		// if (a < 0)
		float L_5 = V_2;
		if ((!(((float)L_5) < ((float)(0.0f)))))
		{
			goto IL_0018;
		}
	}
	{
		// a = -a;
		float L_6 = V_2;
		V_2 = ((-L_6));
	}

IL_0018:
	{
		// ampSum = ampSum + a - this.prevValues[this.prevValuesHead];
		float L_7 = ((LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 *)__this)->get_ampSum_0();
		float L_8 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = ((LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 *)__this)->get_prevValues_3();
		int32_t L_10 = ((LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 *)__this)->get_prevValuesHead_4();
		NullCheck(L_9);
		int32_t L_11 = L_10;
		float L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		((LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 *)__this)->set_ampSum_0(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_7, (float)L_8)), (float)L_12)));
		// this.prevValues[this.prevValuesHead] = a;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_13 = ((LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 *)__this)->get_prevValues_3();
		int32_t L_14 = ((LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 *)__this)->get_prevValuesHead_4();
		float L_15 = V_2;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (float)L_15);
		// if (ampPeak < a)
		float L_16 = ((LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 *)__this)->get_ampPeak_1();
		float L_17 = V_2;
		if ((!(((float)L_16) < ((float)L_17))))
		{
			goto IL_0052;
		}
	}
	{
		// ampPeak = a;
		float L_18 = V_2;
		((LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 *)__this)->set_ampPeak_1(L_18);
	}

IL_0052:
	{
		// if (this.prevValuesHead == 0)
		int32_t L_19 = ((LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 *)__this)->get_prevValuesHead_4();
		if (L_19)
		{
			goto IL_0092;
		}
	}
	{
		// currentPeakAmp = ampPeak;
		float L_20 = ((LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 *)__this)->get_ampPeak_1();
		((LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 *)__this)->set_currentPeakAmp_7(L_20);
		// ampPeak = 0;
		((LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 *)__this)->set_ampPeak_1((0.0f));
		// accumAvgPeakAmpSum += currentPeakAmp;
		float L_21 = ((LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 *)__this)->get_accumAvgPeakAmpSum_5();
		float L_22 = ((LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 *)__this)->get_currentPeakAmp_7();
		((LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 *)__this)->set_accumAvgPeakAmpSum_5(((float)il2cpp_codegen_add((float)L_21, (float)L_22)));
		// accumAvgPeakAmpCount++;
		int32_t L_23 = ((LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 *)__this)->get_accumAvgPeakAmpCount_6();
		((LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 *)__this)->set_accumAvgPeakAmpCount_6(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)));
	}

IL_0092:
	{
		// this.prevValuesHead = (this.prevValuesHead + 1) % this.bufferSize;
		int32_t L_24 = ((LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 *)__this)->get_prevValuesHead_4();
		int32_t L_25 = ((LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 *)__this)->get_bufferSize_2();
		((LevelMeter_1_tFB444197C56AE7F7874C2706A33184781A06F8A5 *)__this)->set_prevValuesHead_4(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1))%(int32_t)L_25)));
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_00ab:
	{
		// foreach (var v in buf)
		int32_t L_27 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_28 = V_0;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))))
		{
			goto IL_0009;
		}
	}
	{
		// return buf;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_29 = ___buf0;
		return L_29;
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
// System.Void Photon.Voice.AudioUtil/LevelMeterShort::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelMeterShort__ctor_mB1EC2B28D90FD54C518BF4D26CB6719A31940EDB (LevelMeterShort_t49A5B495010FBAC23F91CE71A7290FABE50EB4B7 * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelMeter_1__ctor_m975D1225718E7A4B76854FE92510EAB8E7911003_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public LevelMeterShort(int samplingRate, int numChannels) : base(samplingRate, numChannels)
		int32_t L_0 = ___samplingRate0;
		int32_t L_1 = ___numChannels1;
		LevelMeter_1__ctor_m975D1225718E7A4B76854FE92510EAB8E7911003(__this, L_0, L_1, /*hidden argument*/LevelMeter_1__ctor_m975D1225718E7A4B76854FE92510EAB8E7911003_RuntimeMethod_var);
		// norm = 1.0f / short.MaxValue;
		((LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 *)__this)->set_norm_8((3.05185094E-05f));
		// }
		return;
	}
}
// System.Int16[] Photon.Voice.AudioUtil/LevelMeterShort::Process(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* LevelMeterShort_Process_m60DC1992DF4B434E270D94B52944FCEB97FAD67A (LevelMeterShort_t49A5B495010FBAC23F91CE71A7290FABE50EB4B7 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___buf0, const RuntimeMethod* method)
{
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_0 = NULL;
	int32_t V_1 = 0;
	int16_t V_2 = 0;
	{
		// foreach (var v in buf)
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = ___buf0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_00ac;
	}

IL_0009:
	{
		// foreach (var v in buf)
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int16_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// var a = v;
		V_2 = L_4;
		// if (a < 0)
		int16_t L_5 = V_2;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		// a = (short)-a;
		int16_t L_6 = V_2;
		V_2 = ((int16_t)((int16_t)((-L_6))));
	}

IL_0015:
	{
		// ampSum = ampSum + a - this.prevValues[this.prevValuesHead];
		float L_7 = ((LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 *)__this)->get_ampSum_0();
		int16_t L_8 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = ((LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 *)__this)->get_prevValues_3();
		int32_t L_10 = ((LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 *)__this)->get_prevValuesHead_4();
		NullCheck(L_9);
		int32_t L_11 = L_10;
		float L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		((LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 *)__this)->set_ampSum_0(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_7, (float)((float)((float)L_8)))), (float)L_12)));
		// this.prevValues[this.prevValuesHead] = a;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_13 = ((LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 *)__this)->get_prevValues_3();
		int32_t L_14 = ((LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 *)__this)->get_prevValuesHead_4();
		int16_t L_15 = V_2;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (float)((float)((float)L_15)));
		// if (ampPeak < a)
		float L_16 = ((LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 *)__this)->get_ampPeak_1();
		int16_t L_17 = V_2;
		if ((!(((float)L_16) < ((float)((float)((float)L_17))))))
		{
			goto IL_0053;
		}
	}
	{
		// ampPeak = a;
		int16_t L_18 = V_2;
		((LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 *)__this)->set_ampPeak_1(((float)((float)L_18)));
	}

IL_0053:
	{
		// if (this.prevValuesHead == 0)
		int32_t L_19 = ((LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 *)__this)->get_prevValuesHead_4();
		if (L_19)
		{
			goto IL_0093;
		}
	}
	{
		// currentPeakAmp = ampPeak;
		float L_20 = ((LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 *)__this)->get_ampPeak_1();
		((LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 *)__this)->set_currentPeakAmp_7(L_20);
		// ampPeak = 0;
		((LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 *)__this)->set_ampPeak_1((0.0f));
		// accumAvgPeakAmpSum += currentPeakAmp;
		float L_21 = ((LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 *)__this)->get_accumAvgPeakAmpSum_5();
		float L_22 = ((LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 *)__this)->get_currentPeakAmp_7();
		((LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 *)__this)->set_accumAvgPeakAmpSum_5(((float)il2cpp_codegen_add((float)L_21, (float)L_22)));
		// accumAvgPeakAmpCount++;
		int32_t L_23 = ((LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 *)__this)->get_accumAvgPeakAmpCount_6();
		((LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 *)__this)->set_accumAvgPeakAmpCount_6(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)));
	}

IL_0093:
	{
		// this.prevValuesHead = (this.prevValuesHead + 1) % this.bufferSize;
		int32_t L_24 = ((LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 *)__this)->get_prevValuesHead_4();
		int32_t L_25 = ((LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 *)__this)->get_bufferSize_2();
		((LevelMeter_1_t2BA1A6B2F5117CB74D605C0DF72A68CEF42361B3 *)__this)->set_prevValuesHead_4(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1))%(int32_t)L_25)));
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_00ac:
	{
		// foreach (var v in buf)
		int32_t L_27 = V_1;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_28 = V_0;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))))
		{
			goto IL_0009;
		}
	}
	{
		// return buf;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_29 = ___buf0;
		return L_29;
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
// System.Boolean Photon.Voice.AudioUtil/VoiceDetectorDummy::get_On()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceDetectorDummy_get_On_mD4B61A7F28AE118C5E4E5B46169ED6402EF91A6F (VoiceDetectorDummy_t13F7DD87648F4DB8C38FCBABC98DBCC270D3A5D0 * __this, const RuntimeMethod* method)
{
	{
		// public bool On { get { return false; } set { } }
		return (bool)0;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetectorDummy::set_On(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetectorDummy_set_On_mF89DA7123E2E380F3AB6FA4B258CCD4C1B375D59 (VoiceDetectorDummy_t13F7DD87648F4DB8C38FCBABC98DBCC270D3A5D0 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool On { get { return false; } set { } }
		return;
	}
}
// System.Single Photon.Voice.AudioUtil/VoiceDetectorDummy::get_Threshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VoiceDetectorDummy_get_Threshold_mEEEE266D0AF02E302ED540CB4FC711FAD9E27DFE (VoiceDetectorDummy_t13F7DD87648F4DB8C38FCBABC98DBCC270D3A5D0 * __this, const RuntimeMethod* method)
{
	{
		// public float Threshold { get { return 0; } set { } }
		return (0.0f);
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetectorDummy::set_Threshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetectorDummy_set_Threshold_m69C3B0CA37B7D345E934761DC6BF143557C2A789 (VoiceDetectorDummy_t13F7DD87648F4DB8C38FCBABC98DBCC270D3A5D0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Threshold { get { return 0; } set { } }
		return;
	}
}
// System.Boolean Photon.Voice.AudioUtil/VoiceDetectorDummy::get_Detected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceDetectorDummy_get_Detected_m75D24CF3980ACC0DF4EB12B7081841782D76C124 (VoiceDetectorDummy_t13F7DD87648F4DB8C38FCBABC98DBCC270D3A5D0 * __this, const RuntimeMethod* method)
{
	{
		// public bool Detected { get { return false; } }
		return (bool)0;
	}
}
// System.Int32 Photon.Voice.AudioUtil/VoiceDetectorDummy::get_ActivityDelayMs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceDetectorDummy_get_ActivityDelayMs_m94D9EF5A5A02277B8AA99070B518474DABB9C9A2 (VoiceDetectorDummy_t13F7DD87648F4DB8C38FCBABC98DBCC270D3A5D0 * __this, const RuntimeMethod* method)
{
	{
		// public int ActivityDelayMs { get { return 0; } set { } }
		return 0;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetectorDummy::set_ActivityDelayMs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetectorDummy_set_ActivityDelayMs_mC37CF913DC5E1A511C25EAA6CD2F06DBBD3E712B (VoiceDetectorDummy_t13F7DD87648F4DB8C38FCBABC98DBCC270D3A5D0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int ActivityDelayMs { get { return 0; } set { } }
		return;
	}
}
// System.DateTime Photon.Voice.AudioUtil/VoiceDetectorDummy::get_DetectedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  VoiceDetectorDummy_get_DetectedTime_m6985FE8CEC0DD091F6C2DE975F182413105E3FAD (VoiceDetectorDummy_t13F7DD87648F4DB8C38FCBABC98DBCC270D3A5D0 * __this, const RuntimeMethod* method)
{
	{
		// public DateTime DetectedTime { get; private set; }
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_U3CDetectedTimeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetectorDummy::set_DetectedTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetectorDummy_set_DetectedTime_mF3711D8CB7C13B5FB59A43D3D0C7FB3ECC36EBB8 (VoiceDetectorDummy_t13F7DD87648F4DB8C38FCBABC98DBCC270D3A5D0 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		// public DateTime DetectedTime { get; private set; }
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CDetectedTimeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetectorDummy::add_OnDetected(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetectorDummy_add_OnDetected_m183800E02541BCBCDD57DAE63C302C700596AC8A (VoiceDetectorDummy_t13F7DD87648F4DB8C38FCBABC98DBCC270D3A5D0 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	{
		// public event Action OnDetected { add { } remove { } } // Disabling Warning CS0067 The event 'AudioUtil.VoiceDetectorDummy.OnDetected' is never used.
		return;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetectorDummy::remove_OnDetected(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetectorDummy_remove_OnDetected_mDF03830B6165F049D0D25DD571919D8D0089B385 (VoiceDetectorDummy_t13F7DD87648F4DB8C38FCBABC98DBCC270D3A5D0 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	{
		// public event Action OnDetected { add { } remove { } } // Disabling Warning CS0067 The event 'AudioUtil.VoiceDetectorDummy.OnDetected' is never used.
		return;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetectorDummy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetectorDummy__ctor_m97BC955AAD1FB8157F9EC7DCD344202F6D1D7EC0 (VoiceDetectorDummy_t13F7DD87648F4DB8C38FCBABC98DBCC270D3A5D0 * __this, const RuntimeMethod* method)
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
// System.Void Photon.Voice.AudioUtil/VoiceDetectorFloat::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetectorFloat__ctor_mE328ED87C122A1B0B6EABF6701CF315212D8ADE3 (VoiceDetectorFloat_t07D26837C6B174754CB59564212B09934653EEFD * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDetector_1__ctor_m7C6E706C7F37F8989BA63C16BEF0A7509022FA05_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VoiceDetectorFloat(int samplingRate, int numChannels) : base(samplingRate, numChannels)
		int32_t L_0 = ___samplingRate0;
		int32_t L_1 = ___numChannels1;
		VoiceDetector_1__ctor_m7C6E706C7F37F8989BA63C16BEF0A7509022FA05(__this, L_0, L_1, /*hidden argument*/VoiceDetector_1__ctor_m7C6E706C7F37F8989BA63C16BEF0A7509022FA05_RuntimeMethod_var);
		// norm = 1f;
		((VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC *)__this)->set_norm_1((1.0f));
		// }
		return;
	}
}
// System.Single[] Photon.Voice.AudioUtil/VoiceDetectorFloat::Process(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* VoiceDetectorFloat_Process_m801D9D3AD87F43926B3235ACB8074C8C5A17B620 (VoiceDetectorFloat_t07D26837C6B174754CB59564212B09934653EEFD * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___buffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDetector_1_get_Detected_m9E69A8BECBFAC14EFB2894CDC8F070B53D2CC4C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDetector_1_get_On_m122CD7F20E577E49D20483CC02FD7CD67F1B6368_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDetector_1_set_Detected_m7324B94BCE8D957581F1B8520EC8B233A67673D5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (this.On)
		bool L_0;
		L_0 = VoiceDetector_1_get_On_m122CD7F20E577E49D20483CC02FD7CD67F1B6368_inline(__this, /*hidden argument*/VoiceDetector_1_get_On_m122CD7F20E577E49D20483CC02FD7CD67F1B6368_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0062;
		}
	}
	{
		// foreach (var s in buffer)
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ___buffer0;
		V_0 = L_1;
		V_1 = 0;
		goto IL_003b;
	}

IL_000e:
	{
		// foreach (var s in buffer)
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		float L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// if (s > this.threshold)
		float L_6 = ((VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC *)__this)->get_threshold_2();
		if ((!(((float)L_5) > ((float)L_6))))
		{
			goto IL_0029;
		}
	}
	{
		// this.Detected = true;
		VoiceDetector_1_set_Detected_m7324B94BCE8D957581F1B8520EC8B233A67673D5(__this, (bool)1, /*hidden argument*/VoiceDetector_1_set_Detected_m7324B94BCE8D957581F1B8520EC8B233A67673D5_RuntimeMethod_var);
		// this.autoSilenceCounter = 0;
		((VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC *)__this)->set_autoSilenceCounter_7(0);
		// }
		goto IL_0037;
	}

IL_0029:
	{
		// this.autoSilenceCounter++;
		int32_t L_7 = ((VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC *)__this)->get_autoSilenceCounter_7();
		((VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC *)__this)->set_autoSilenceCounter_7(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_003b:
	{
		// foreach (var s in buffer)
		int32_t L_9 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		// if (this.autoSilenceCounter > this.activityDelayValuesCount)
		int32_t L_11 = ((VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC *)__this)->get_autoSilenceCounter_7();
		int32_t L_12 = ((VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC *)__this)->get_activityDelayValuesCount_9();
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0056;
		}
	}
	{
		// this.Detected = false;
		VoiceDetector_1_set_Detected_m7324B94BCE8D957581F1B8520EC8B233A67673D5(__this, (bool)0, /*hidden argument*/VoiceDetector_1_set_Detected_m7324B94BCE8D957581F1B8520EC8B233A67673D5_RuntimeMethod_var);
	}

IL_0056:
	{
		// return Detected ? buffer : null;
		bool L_13;
		L_13 = VoiceDetector_1_get_Detected_m9E69A8BECBFAC14EFB2894CDC8F070B53D2CC4C7_inline(__this, /*hidden argument*/VoiceDetector_1_get_Detected_m9E69A8BECBFAC14EFB2894CDC8F070B53D2CC4C7_RuntimeMethod_var);
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		return (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)NULL;
	}

IL_0060:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14 = ___buffer0;
		return L_14;
	}

IL_0062:
	{
		// return buffer;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_15 = ___buffer0;
		return L_15;
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
// System.Void Photon.Voice.AudioUtil/VoiceDetectorShort::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetectorShort__ctor_mF24E281C89FE50EAF0E11DEFC71D63734ADC8D65 (VoiceDetectorShort_tEB57780C72B1E5D60E7584C80B244E40B4C0DFDB * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDetector_1__ctor_m19B47107FDBA28D2C419B78D712537EF1A707E2D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VoiceDetectorShort(int samplingRate, int numChannels) : base(samplingRate, numChannels)
		int32_t L_0 = ___samplingRate0;
		int32_t L_1 = ___numChannels1;
		VoiceDetector_1__ctor_m19B47107FDBA28D2C419B78D712537EF1A707E2D(__this, L_0, L_1, /*hidden argument*/VoiceDetector_1__ctor_m19B47107FDBA28D2C419B78D712537EF1A707E2D_RuntimeMethod_var);
		// norm = 1.0f / short.MaxValue;
		((VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *)__this)->set_norm_1((3.05185094E-05f));
		// }
		return;
	}
}
// System.Int16[] Photon.Voice.AudioUtil/VoiceDetectorShort::Process(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* VoiceDetectorShort_Process_m2E216D5F2F6F05C0AA0A34CE77D0D9A9392BDD4C (VoiceDetectorShort_tEB57780C72B1E5D60E7584C80B244E40B4C0DFDB * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___buffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDetector_1_get_Detected_m2556CDCC35307D5A1AE5D0573806C4E1C4C0F5C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDetector_1_get_On_mAA630DFE422E1D5263686DDCE57F6E26C4DF8AB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDetector_1_set_Detected_m13E95CCF06BB947C56591D1DB287436309D074AB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (this.On)
		bool L_0;
		L_0 = VoiceDetector_1_get_On_mAA630DFE422E1D5263686DDCE57F6E26C4DF8AB8_inline(__this, /*hidden argument*/VoiceDetector_1_get_On_mAA630DFE422E1D5263686DDCE57F6E26C4DF8AB8_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0063;
		}
	}
	{
		// foreach (var s in buffer)
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = ___buffer0;
		V_0 = L_1;
		V_1 = 0;
		goto IL_003c;
	}

IL_000e:
	{
		// foreach (var s in buffer)
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int16_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// if (s > this.threshold)
		float L_6 = ((VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *)__this)->get_threshold_2();
		if ((!(((float)((float)((float)L_5))) > ((float)L_6))))
		{
			goto IL_002a;
		}
	}
	{
		// this.Detected = true;
		VoiceDetector_1_set_Detected_m13E95CCF06BB947C56591D1DB287436309D074AB(__this, (bool)1, /*hidden argument*/VoiceDetector_1_set_Detected_m13E95CCF06BB947C56591D1DB287436309D074AB_RuntimeMethod_var);
		// this.autoSilenceCounter = 0;
		((VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *)__this)->set_autoSilenceCounter_7(0);
		// }
		goto IL_0038;
	}

IL_002a:
	{
		// this.autoSilenceCounter++;
		int32_t L_7 = ((VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *)__this)->get_autoSilenceCounter_7();
		((VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *)__this)->set_autoSilenceCounter_7(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
	}

IL_0038:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_003c:
	{
		// foreach (var s in buffer)
		int32_t L_9 = V_1;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		// if (this.autoSilenceCounter > this.activityDelayValuesCount)
		int32_t L_11 = ((VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *)__this)->get_autoSilenceCounter_7();
		int32_t L_12 = ((VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *)__this)->get_activityDelayValuesCount_9();
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0057;
		}
	}
	{
		// this.Detected = false;
		VoiceDetector_1_set_Detected_m13E95CCF06BB947C56591D1DB287436309D074AB(__this, (bool)0, /*hidden argument*/VoiceDetector_1_set_Detected_m13E95CCF06BB947C56591D1DB287436309D074AB_RuntimeMethod_var);
	}

IL_0057:
	{
		// return Detected ? buffer : null;
		bool L_13;
		L_13 = VoiceDetector_1_get_Detected_m2556CDCC35307D5A1AE5D0573806C4E1C4C0F5C8_inline(__this, /*hidden argument*/VoiceDetector_1_get_Detected_m2556CDCC35307D5A1AE5D0573806C4E1C4C0F5C8_RuntimeMethod_var);
		if (L_13)
		{
			goto IL_0061;
		}
	}
	{
		return (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)NULL;
	}

IL_0061:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_14 = ___buffer0;
		return L_14;
	}

IL_0063:
	{
		// return buffer;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_15 = ___buffer0;
		return L_15;
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
// System.Void Photon.Voice.ImageBufferInfo/StrideSet::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StrideSet__ctor_m3413EDB50412A0DFA8028346F458151D2142035B (StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF * __this, int32_t ___length0, int32_t ___s01, int32_t ___s12, int32_t ___s23, int32_t ___s34, const RuntimeMethod* method)
{
	{
		// Length = length;
		int32_t L_0 = ___length0;
		StrideSet_set_Length_m1B534D34EAF9959D432D837D7DC4F8E56F506F43_inline((StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF *)__this, L_0, /*hidden argument*/NULL);
		// stride0 = s0;
		int32_t L_1 = ___s01;
		__this->set_stride0_0(L_1);
		// stride1 = s1;
		int32_t L_2 = ___s12;
		__this->set_stride1_1(L_2);
		// stride2 = s2;
		int32_t L_3 = ___s23;
		__this->set_stride2_2(L_3);
		// stride3 = s3;
		int32_t L_4 = ___s34;
		__this->set_stride3_3(L_4);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void StrideSet__ctor_m3413EDB50412A0DFA8028346F458151D2142035B_AdjustorThunk (RuntimeObject * __this, int32_t ___length0, int32_t ___s01, int32_t ___s12, int32_t ___s23, int32_t ___s34, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF * _thisAdjusted = reinterpret_cast<StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF *>(__this + _offset);
	StrideSet__ctor_m3413EDB50412A0DFA8028346F458151D2142035B(_thisAdjusted, ___length0, ___s01, ___s12, ___s23, ___s34, method);
}
// System.Int32 Photon.Voice.ImageBufferInfo/StrideSet::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StrideSet_get_Item_m2140546B05BA8D71EA5B87CABFF62F0E3BC312A6 (StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF * __this, int32_t ___key0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0018;
			}
			case 1:
			{
				goto IL_001f;
			}
			case 2:
			{
				goto IL_0026;
			}
			case 3:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0018:
	{
		// case 0: return stride0;
		int32_t L_1 = __this->get_stride0_0();
		return L_1;
	}

IL_001f:
	{
		// case 1: return stride1;
		int32_t L_2 = __this->get_stride1_1();
		return L_2;
	}

IL_0026:
	{
		// case 2: return stride2;
		int32_t L_3 = __this->get_stride2_2();
		return L_3;
	}

IL_002d:
	{
		// case 3: return stride3;
		int32_t L_4 = __this->get_stride3_3();
		return L_4;
	}

IL_0034:
	{
		// default: return 0;
		return 0;
	}
}
IL2CPP_EXTERN_C  int32_t StrideSet_get_Item_m2140546B05BA8D71EA5B87CABFF62F0E3BC312A6_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF * _thisAdjusted = reinterpret_cast<StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StrideSet_get_Item_m2140546B05BA8D71EA5B87CABFF62F0E3BC312A6(_thisAdjusted, ___key0, method);
	return _returnValue;
}
// System.Void Photon.Voice.ImageBufferInfo/StrideSet::set_Item(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StrideSet_set_Item_m93BEEBFF6E7FA2A5955B7430B2B4227B16FA9F3B (StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0017;
			}
			case 1:
			{
				goto IL_001f;
			}
			case 2:
			{
				goto IL_0027;
			}
			case 3:
			{
				goto IL_002f;
			}
		}
	}
	{
		return;
	}

IL_0017:
	{
		// case 0: stride0 = value; break;
		int32_t L_1 = ___value1;
		__this->set_stride0_0(L_1);
		// case 0: stride0 = value; break;
		return;
	}

IL_001f:
	{
		// case 1: stride1 = value; break;
		int32_t L_2 = ___value1;
		__this->set_stride1_1(L_2);
		// case 1: stride1 = value; break;
		return;
	}

IL_0027:
	{
		// case 2: stride2 = value; break;
		int32_t L_3 = ___value1;
		__this->set_stride2_2(L_3);
		// case 2: stride2 = value; break;
		return;
	}

IL_002f:
	{
		// case 3: stride3 = value; break;
		int32_t L_4 = ___value1;
		__this->set_stride3_3(L_4);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void StrideSet_set_Item_m93BEEBFF6E7FA2A5955B7430B2B4227B16FA9F3B_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF * _thisAdjusted = reinterpret_cast<StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF *>(__this + _offset);
	StrideSet_set_Item_m93BEEBFF6E7FA2A5955B7430B2B4227B16FA9F3B(_thisAdjusted, ___key0, ___value1, method);
}
// System.Int32 Photon.Voice.ImageBufferInfo/StrideSet::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StrideSet_get_Length_mE261F3B4A73E03A6EA9F543B637EE979FFD51331 (StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF * __this, const RuntimeMethod* method)
{
	{
		// public int Length { get; private set; }
		int32_t L_0 = __this->get_U3CLengthU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t StrideSet_get_Length_mE261F3B4A73E03A6EA9F543B637EE979FFD51331_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF * _thisAdjusted = reinterpret_cast<StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StrideSet_get_Length_mE261F3B4A73E03A6EA9F543B637EE979FFD51331_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Photon.Voice.ImageBufferInfo/StrideSet::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StrideSet_set_Length_m1B534D34EAF9959D432D837D7DC4F8E56F506F43 (StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Length { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CLengthU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StrideSet_set_Length_m1B534D34EAF9959D432D837D7DC4F8E56F506F43_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF * _thisAdjusted = reinterpret_cast<StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF *>(__this + _offset);
	StrideSet_set_Length_m1B534D34EAF9959D432D837D7DC4F8E56F506F43_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Voice.ImageBufferNative/PlaneSet::.ctor(System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneSet__ctor_mBE92A321C300B44737FEB8143D96561C54C455B9 (PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169 * __this, int32_t ___length0, intptr_t ___p01, intptr_t ___p12, intptr_t ___p23, intptr_t ___p34, const RuntimeMethod* method)
{
	{
		// Length = length;
		int32_t L_0 = ___length0;
		PlaneSet_set_Length_m7799AC791B2BF9C1CCC822E8AC2DBA3F23B7145E_inline((PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169 *)__this, L_0, /*hidden argument*/NULL);
		// plane0 = p0;
		intptr_t L_1 = ___p01;
		__this->set_plane0_0((intptr_t)L_1);
		// plane1 = p1;
		intptr_t L_2 = ___p12;
		__this->set_plane1_1((intptr_t)L_2);
		// plane2 = p2;
		intptr_t L_3 = ___p23;
		__this->set_plane2_2((intptr_t)L_3);
		// plane3 = p3;
		intptr_t L_4 = ___p34;
		__this->set_plane3_3((intptr_t)L_4);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PlaneSet__ctor_mBE92A321C300B44737FEB8143D96561C54C455B9_AdjustorThunk (RuntimeObject * __this, int32_t ___length0, intptr_t ___p01, intptr_t ___p12, intptr_t ___p23, intptr_t ___p34, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169 * _thisAdjusted = reinterpret_cast<PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169 *>(__this + _offset);
	PlaneSet__ctor_mBE92A321C300B44737FEB8143D96561C54C455B9(_thisAdjusted, ___length0, ___p01, ___p12, ___p23, ___p34, method);
}
// System.IntPtr Photon.Voice.ImageBufferNative/PlaneSet::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PlaneSet_get_Item_mD74850BC4327DA0F1E5FB4630A4C9CD4D3D22C9A (PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___key0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0018;
			}
			case 1:
			{
				goto IL_001f;
			}
			case 2:
			{
				goto IL_0026;
			}
			case 3:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0018:
	{
		// case 0: return plane0;
		intptr_t L_1 = __this->get_plane0_0();
		return (intptr_t)L_1;
	}

IL_001f:
	{
		// case 1: return plane1;
		intptr_t L_2 = __this->get_plane1_1();
		return (intptr_t)L_2;
	}

IL_0026:
	{
		// case 2: return plane2;
		intptr_t L_3 = __this->get_plane2_2();
		return (intptr_t)L_3;
	}

IL_002d:
	{
		// case 3: return plane3;
		intptr_t L_4 = __this->get_plane3_3();
		return (intptr_t)L_4;
	}

IL_0034:
	{
		// default: return IntPtr.Zero;
		return (intptr_t)(0);
	}
}
IL2CPP_EXTERN_C  intptr_t PlaneSet_get_Item_mD74850BC4327DA0F1E5FB4630A4C9CD4D3D22C9A_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169 * _thisAdjusted = reinterpret_cast<PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169 *>(__this + _offset);
	intptr_t _returnValue;
	_returnValue = PlaneSet_get_Item_mD74850BC4327DA0F1E5FB4630A4C9CD4D3D22C9A(_thisAdjusted, ___key0, method);
	return _returnValue;
}
// System.Void Photon.Voice.ImageBufferNative/PlaneSet::set_Item(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneSet_set_Item_mEE14BA543CCBF284AA5C0754059E7FFC9CBC860E (PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169 * __this, int32_t ___key0, intptr_t ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0017;
			}
			case 1:
			{
				goto IL_001f;
			}
			case 2:
			{
				goto IL_0027;
			}
			case 3:
			{
				goto IL_002f;
			}
		}
	}
	{
		return;
	}

IL_0017:
	{
		// case 0: plane0 = value; break;
		intptr_t L_1 = ___value1;
		__this->set_plane0_0((intptr_t)L_1);
		// case 0: plane0 = value; break;
		return;
	}

IL_001f:
	{
		// case 1: plane1 = value; break;
		intptr_t L_2 = ___value1;
		__this->set_plane1_1((intptr_t)L_2);
		// case 1: plane1 = value; break;
		return;
	}

IL_0027:
	{
		// case 2: plane2 = value; break;
		intptr_t L_3 = ___value1;
		__this->set_plane2_2((intptr_t)L_3);
		// case 2: plane2 = value; break;
		return;
	}

IL_002f:
	{
		// case 3: plane3 = value; break;
		intptr_t L_4 = ___value1;
		__this->set_plane3_3((intptr_t)L_4);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PlaneSet_set_Item_mEE14BA543CCBF284AA5C0754059E7FFC9CBC860E_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, intptr_t ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169 * _thisAdjusted = reinterpret_cast<PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169 *>(__this + _offset);
	PlaneSet_set_Item_mEE14BA543CCBF284AA5C0754059E7FFC9CBC860E(_thisAdjusted, ___key0, ___value1, method);
}
// System.Int32 Photon.Voice.ImageBufferNative/PlaneSet::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlaneSet_get_Length_mC4AB38EA79E838926E0AF056C8DFF0EA34E15593 (PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169 * __this, const RuntimeMethod* method)
{
	{
		// public int Length { get; private set; }
		int32_t L_0 = __this->get_U3CLengthU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t PlaneSet_get_Length_mC4AB38EA79E838926E0AF056C8DFF0EA34E15593_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169 * _thisAdjusted = reinterpret_cast<PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PlaneSet_get_Length_mC4AB38EA79E838926E0AF056C8DFF0EA34E15593_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Photon.Voice.ImageBufferNative/PlaneSet::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneSet_set_Length_m7799AC791B2BF9C1CCC822E8AC2DBA3F23B7145E (PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Length { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CLengthU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void PlaneSet_set_Length_m7799AC791B2BF9C1CCC822E8AC2DBA3F23B7145E_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169 * _thisAdjusted = reinterpret_cast<PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169 *>(__this + _offset);
	PlaneSet_set_Length_m7799AC791B2BF9C1CCC822E8AC2DBA3F23B7145E_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Voice.LoadBalancingTransport/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE382D9893492F8DB62B934D1564EF2C3FADA758A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B * L_0 = (U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B *)il2cpp_codegen_object_new(U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mEF38BB0D123D2B71A120C516218F846C7D858DD3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Photon.Voice.LoadBalancingTransport/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEF38BB0D123D2B71A120C516218F846C7D858DD3 (U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Photon.Voice.Codec Photon.Voice.LoadBalancingTransport/<>c::<SendVoicesInfo>b__20_0(Photon.Voice.LocalVoice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CSendVoicesInfoU3Eb__20_0_mF9B077CE93824A703C4767BF58B0A2D5734E4D94 (U3CU3Ec_t7CF8071A50F9E6844B0ACBBFC6AC2FF3DEF5329B * __this, LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * ___v0, const RuntimeMethod* method)
{
	VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var codecVoices in voices.GroupBy(v => v.Info.Codec))
		LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * L_0 = ___v0;
		NullCheck(L_0);
		VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  L_1;
		L_1 = LocalVoice_get_Info_m1996B4F7A27EF2E408C0C0DE7BAED51524FA477B_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = VoiceInfo_get_Codec_mEE43E2D47F30D9B9953DFB95479EC3B7BA9FE2E3_inline((VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 *)(&V_0), /*hidden argument*/NULL);
		return L_2;
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
// System.Void Photon.Voice.OpusCodec/EncoderFloat::.ctor(Photon.Voice.VoiceInfo,Photon.Voice.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderFloat__ctor_m64AC426963736E17A99F9925BDBCB9315B013536 (EncoderFloat_t59F828BE852C2C5049643A7DA8A76AE0DFCD35D8 * __this, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___i0, RuntimeObject* ___logger1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_1__ctor_m41B7B1A903690DC74302D619DC29D6A7E6741578_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal EncoderFloat(VoiceInfo i, ILogger logger) : base(i, logger) { }
		VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  L_0 = ___i0;
		RuntimeObject* L_1 = ___logger1;
		IL2CPP_RUNTIME_CLASS_INIT(Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620_il2cpp_TypeInfo_var);
		Encoder_1__ctor_m41B7B1A903690DC74302D619DC29D6A7E6741578(__this, L_0, L_1, /*hidden argument*/Encoder_1__ctor_m41B7B1A903690DC74302D619DC29D6A7E6741578_RuntimeMethod_var);
		// internal EncoderFloat(VoiceInfo i, ILogger logger) : base(i, logger) { }
		return;
	}
}
// System.ArraySegment`1<System.Byte> Photon.Voice.OpusCodec/EncoderFloat::encodeTyped(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  EncoderFloat_encodeTyped_mD7F886009DABDCBE0EFCA4C985AD541EC4775275 (EncoderFloat_t59F828BE852C2C5049643A7DA8A76AE0DFCD35D8 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___buf0, const RuntimeMethod* method)
{
	{
		// return encoder.Encode(buf);
		OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823 * L_0 = ((Encoder_1_t439BF0A94F0F3694C5AF8B5EC4C91CBA46C4C620 *)__this)->get_encoder_0();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ___buf0;
		NullCheck(L_0);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_2;
		L_2 = OpusEncoder_Encode_mA02094AC74B3D8584A43144B42FFB6D7A17AE6CA(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Photon.Voice.OpusCodec/EncoderShort::.ctor(Photon.Voice.VoiceInfo,Photon.Voice.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderShort__ctor_mEC758D672B971A43190322126B6DC02E3BF44244 (EncoderShort_t1B066515A9C7163E7B94B8FEA3E07B88303D687B * __this, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___i0, RuntimeObject* ___logger1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_1__ctor_m9077E63DD228B223B7033E63ACA21B768789E119_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal EncoderShort(VoiceInfo i, ILogger logger) : base(i, logger) { }
		VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  L_0 = ___i0;
		RuntimeObject* L_1 = ___logger1;
		IL2CPP_RUNTIME_CLASS_INIT(Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2_il2cpp_TypeInfo_var);
		Encoder_1__ctor_m9077E63DD228B223B7033E63ACA21B768789E119(__this, L_0, L_1, /*hidden argument*/Encoder_1__ctor_m9077E63DD228B223B7033E63ACA21B768789E119_RuntimeMethod_var);
		// internal EncoderShort(VoiceInfo i, ILogger logger) : base(i, logger) { }
		return;
	}
}
// System.ArraySegment`1<System.Byte> Photon.Voice.OpusCodec/EncoderShort::encodeTyped(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  EncoderShort_encodeTyped_mB077E8CC522828111B2711477073DC9F0023D2E4 (EncoderShort_t1B066515A9C7163E7B94B8FEA3E07B88303D687B * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___buf0, const RuntimeMethod* method)
{
	{
		// return encoder.Encode(buf);
		OpusEncoder_t289CD686765411D189B07CC8CEEE006E19E1B823 * L_0 = ((Encoder_1_t1835B5877F1B49B43B635F05E7C29D83CC9C3EF2 *)__this)->get_encoder_0();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = ___buf0;
		NullCheck(L_0);
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_2;
		L_2 = OpusEncoder_Encode_mB285924B22403DCB1C3E0E31F708B6F4CAE9C60B(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Int32 Photon.Voice.OpusCodec/Util::bestEncoderSampleRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Util_bestEncoderSampleRate_mD09F0BF8F33C16D4BFF91FE35BB308DB4ECBA8F6 (int32_t ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamplingRate_tB35955BC7837DAB0BF0F4D73CAA2BAFD47646F51_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// int diff = int.MaxValue;
		V_0 = ((int32_t)2147483647LL);
		// int res = (int)SamplingRate.Sampling48000;
		V_1 = ((int32_t)48000);
		// foreach (var x in Enum.GetValues(typeof(SamplingRate)))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (SamplingRate_tB35955BC7837DAB0BF0F4D73CAA2BAFD47646F51_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeArray * L_2;
		L_2 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0048;
		}

IL_0023:
		{
			// foreach (var x in Enum.GetValues(typeof(SamplingRate)))
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
			V_3 = L_5;
			// var d = Math.Abs((int)x - f);
			RuntimeObject * L_6 = V_3;
			int32_t L_7 = ___f0;
			IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
			int32_t L_8;
			L_8 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract((int32_t)((*(int32_t*)((int32_t*)UnBox(L_6, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), (int32_t)L_7)));
			V_4 = L_8;
			// if (d < diff)
			int32_t L_9 = V_4;
			int32_t L_10 = V_0;
			if ((((int32_t)L_9) >= ((int32_t)L_10)))
			{
				goto IL_0048;
			}
		}

IL_003e:
		{
			// diff = d;
			int32_t L_11 = V_4;
			V_0 = L_11;
			// res = (int)x;
			RuntimeObject * L_12 = V_3;
			V_1 = ((*(int32_t*)((int32_t*)UnBox(L_12, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
		}

IL_0048:
		{
			// foreach (var x in Enum.GetValues(typeof(SamplingRate)))
			RuntimeObject* L_13 = V_2;
			NullCheck(L_13);
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0023;
			}
		}

IL_0050:
		{
			IL2CPP_LEAVE(0x66, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_15 = V_2;
			V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_15, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_16 = V_5;
			if (!L_16)
			{
				goto IL_0065;
			}
		}

IL_005e:
		{
			RuntimeObject* L_17 = V_5;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_17);
		}

IL_0065:
		{
			IL2CPP_END_FINALLY(82)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x66, IL_0066)
	}

IL_0066:
	{
		// return res;
		int32_t L_18 = V_1;
		return L_18;
	}
}
// System.Void Photon.Voice.OpusCodec/Util::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Util__ctor_m75865A517B928D306F7D9A3D426C77F0155639C5 (Util_tB79F7CAD5C8FC71AB7A0EAF51F9E9F9F7B4E2E3E * __this, const RuntimeMethod* method)
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
// System.Void Photon.Voice.RawCodec/ShortToFloat::.ctor(System.Action`1<Photon.Voice.FrameOut`1<System.Single>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortToFloat__ctor_m0EF5556F28439AC57C9AA286960F45495B68642A (ShortToFloat_tD1EA39685A18854B48A79FF97C114CCCCF4E1F82 * __this, Action_1_t0B1D8E060FEAA27D51B6AD68D56361DDCF6D383F * ___output0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float[] buf = new float[0];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_buf_1(L_0);
		// public ShortToFloat(Action<FrameOut<float>> output)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.output = output;
		Action_1_t0B1D8E060FEAA27D51B6AD68D56361DDCF6D383F * L_1 = ___output0;
		__this->set_output_0(L_1);
		// }
		return;
	}
}
// System.Void Photon.Voice.RawCodec/ShortToFloat::Output(Photon.Voice.FrameOut`1<System.Int16>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortToFloat_Output_m4AA99FC9640A8A6562A7565791A8074972E8368D (ShortToFloat_tD1EA39685A18854B48A79FF97C114CCCCF4E1F82 * __this, FrameOut_1_t360F685F3D2F100DC469100D32F8A5B415EC536E * ___shortBuf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m951D1B4CD86FEF66370C92B87EF8A32203ACD5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameOut_1__ctor_mE64EB72A44080E0E3114CAA125FA2C871A62D67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameOut_1_get_Buf_mBBFA29E661AF47B93BF8300002DFD63CDAD854B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameOut_1_t2E75A31E49C5BB56BEAA73766430E3B7F2167044_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (buf.Length < shortBuf.Buf.Length)
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = __this->get_buf_1();
		NullCheck(L_0);
		FrameOut_1_t360F685F3D2F100DC469100D32F8A5B415EC536E * L_1 = ___shortBuf0;
		NullCheck(L_1);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_2;
		L_2 = FrameOut_1_get_Buf_mBBFA29E661AF47B93BF8300002DFD63CDAD854B1_inline(L_1, /*hidden argument*/FrameOut_1_get_Buf_mBBFA29E661AF47B93BF8300002DFD63CDAD854B1_RuntimeMethod_var);
		NullCheck(L_2);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0025;
		}
	}
	{
		// buf = new float[shortBuf.Buf.Length];
		FrameOut_1_t360F685F3D2F100DC469100D32F8A5B415EC536E * L_3 = ___shortBuf0;
		NullCheck(L_3);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4;
		L_4 = FrameOut_1_get_Buf_mBBFA29E661AF47B93BF8300002DFD63CDAD854B1_inline(L_3, /*hidden argument*/FrameOut_1_get_Buf_mBBFA29E661AF47B93BF8300002DFD63CDAD854B1_RuntimeMethod_var);
		NullCheck(L_4);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))));
		__this->set_buf_1(L_5);
	}

IL_0025:
	{
		// AudioUtil.Convert(shortBuf.Buf, buf, shortBuf.Buf.Length);
		FrameOut_1_t360F685F3D2F100DC469100D32F8A5B415EC536E * L_6 = ___shortBuf0;
		NullCheck(L_6);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_7;
		L_7 = FrameOut_1_get_Buf_mBBFA29E661AF47B93BF8300002DFD63CDAD854B1_inline(L_6, /*hidden argument*/FrameOut_1_get_Buf_mBBFA29E661AF47B93BF8300002DFD63CDAD854B1_RuntimeMethod_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = __this->get_buf_1();
		FrameOut_1_t360F685F3D2F100DC469100D32F8A5B415EC536E * L_9 = ___shortBuf0;
		NullCheck(L_9);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_10;
		L_10 = FrameOut_1_get_Buf_mBBFA29E661AF47B93BF8300002DFD63CDAD854B1_inline(L_9, /*hidden argument*/FrameOut_1_get_Buf_mBBFA29E661AF47B93BF8300002DFD63CDAD854B1_RuntimeMethod_var);
		NullCheck(L_10);
		AudioUtil_Convert_mC7F7157BD9FF2910A35E7DB143665624F74E08E3(L_7, L_8, ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), /*hidden argument*/NULL);
		// output(new FrameOut<float>((float[])(object)buf, false));
		Action_1_t0B1D8E060FEAA27D51B6AD68D56361DDCF6D383F * L_11 = __this->get_output_0();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_12 = __this->get_buf_1();
		FrameOut_1_t2E75A31E49C5BB56BEAA73766430E3B7F2167044 * L_13 = (FrameOut_1_t2E75A31E49C5BB56BEAA73766430E3B7F2167044 *)il2cpp_codegen_object_new(FrameOut_1_t2E75A31E49C5BB56BEAA73766430E3B7F2167044_il2cpp_TypeInfo_var);
		FrameOut_1__ctor_mE64EB72A44080E0E3114CAA125FA2C871A62D67F(L_13, ((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)Castclass((RuntimeObject*)L_12, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var)), (bool)0, /*hidden argument*/FrameOut_1__ctor_mE64EB72A44080E0E3114CAA125FA2C871A62D67F_RuntimeMethod_var);
		NullCheck(L_11);
		Action_1_Invoke_m951D1B4CD86FEF66370C92B87EF8A32203ACD5D7(L_11, L_13, /*hidden argument*/Action_1_Invoke_m951D1B4CD86FEF66370C92B87EF8A32203ACD5D7_RuntimeMethod_var);
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
// System.Void Photon.Voice.SpacingProfile/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m98371BFC9ACB2782E02C5203B38EE046EF23257F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 * L_0 = (U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 *)il2cpp_codegen_object_new(U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m136FB5C849DF47278DC80C16FD3605B830ADEF3E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Photon.Voice.SpacingProfile/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m136FB5C849DF47278DC80C16FD3605B830ADEF3E (U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int16 Photon.Voice.SpacingProfile/<>c::<get_Max>b__13_0(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t U3CU3Ec_U3Cget_MaxU3Eb__13_0_m1A6AFC5E78F5FE26A46012DA1D338920914468D9 (U3CU3Ec_t8DFF7665E37FB9D07FA30932657E9C49B3F99D15 * __this, int16_t ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Max { get { return buf.Select(v => Math.Abs(v)).Max(); } }
		int16_t L_0 = ___v0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int16_t L_1;
		L_1 = Math_Abs_m9B9260F0BD34F4E70E016E2714A9553C8AAD40D9(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void Photon.Voice.VoiceClient/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m604EA90DC53CF07AB36625569C2248CC90BA3D7C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 * L_0 = (U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 *)il2cpp_codegen_object_new(U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF6EAD72EAF3447B8E05F7362A512BADB343B30A0(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF6EAD72EAF3447B8E05F7362A512BADB343B30A0 (U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Photon.Voice.VoiceClient/<>c::<sendVoicesInfoAndConfigFrame>b__61_0(Photon.Voice.LocalVoice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CsendVoicesInfoAndConfigFrameU3Eb__61_0_m914E6B373324E5CFFCC8530A0B0A781B49AD9779 (U3CU3Ec_tBC09E0C6C5981593BD130731ED119C17647C05E7 * __this, LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * ___x0, const RuntimeMethod* method)
{
	{
		// var debugEchoVoices = localVoices.Values.Where(x => x.DebugEchoMode);
		LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * L_0 = ___x0;
		NullCheck(L_0);
		bool L_1;
		L_1 = LocalVoice_get_DebugEchoMode_m98A24E697FB45440E960B0DC9420CD4C05903F6B_inline(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass49_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass49_0__ctor_m3FCE14228E31EF498BE59BFBB424E81B0F4029EB (U3CU3Ec__DisplayClass49_0_tB34D58F85F937CA72D917F5CD92F8E22D1729EFD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Photon.Voice.LocalVoice Photon.Voice.VoiceClient/<>c__DisplayClass49_0::<CreateLocalVoice>b__0(System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * U3CU3Ec__DisplayClass49_0_U3CCreateLocalVoiceU3Eb__0_m605074336D88D9E09608DA541B825332D7E99D7D (U3CU3Ec__DisplayClass49_0_tB34D58F85F937CA72D917F5CD92F8E22D1729EFD * __this, uint8_t ___vId0, int32_t ___chId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (LocalVoice)createLocalVoice(channelId, (vId, chId) => new LocalVoice(this, encoder, vId, voiceInfo, chId));
		VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * L_0 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_1 = __this->get_encoder_1();
		uint8_t L_2 = ___vId0;
		VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  L_3 = __this->get_voiceInfo_2();
		int32_t L_4 = ___chId1;
		LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * L_5 = (LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 *)il2cpp_codegen_object_new(LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9_il2cpp_TypeInfo_var);
		LocalVoice__ctor_mA61893CACB4A7C26F76DA8D2BF2678AB86DD3318(L_5, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass52_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0__ctor_m0A1C1F3B0EAB2D60EBE9C2C43F7BBB0C5E0874A1 (U3CU3Ec__DisplayClass52_0_t53D9AE5ACB0CE6892061886C02B70EA0C44D4CC4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass52_0::<CreateLocalVoiceAudioFromSource>b__0(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0_U3CCreateLocalVoiceAudioFromSourceU3Eb__0_m2CA55BBFC17758C3CC86DE36F45DBE8F2599DE00 (U3CU3Ec__DisplayClass52_0_t53D9AE5ACB0CE6892061886C02B70EA0C44D4CC4 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___buf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FactoryPrimitiveArrayPool_1_New_m4B62F1E511B7854408A14C347007968C092B4142_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceFramed_1_get_BufferFactory_mE185781006A94F4245FD1FD62C2B28E16D719738_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_0 = NULL;
	{
		// var shortBuf = localVoice.BufferFactory.New(buf.Length);
		LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * L_0 = __this->get_localVoice_0();
		NullCheck(L_0);
		FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * L_1;
		L_1 = LocalVoiceFramed_1_get_BufferFactory_mE185781006A94F4245FD1FD62C2B28E16D719738_inline(L_0, /*hidden argument*/LocalVoiceFramed_1_get_BufferFactory_mE185781006A94F4245FD1FD62C2B28E16D719738_RuntimeMethod_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___buf0;
		NullCheck(L_2);
		NullCheck(L_1);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3;
		L_3 = FactoryPrimitiveArrayPool_1_New_m4B62F1E511B7854408A14C347007968C092B4142(L_1, ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), /*hidden argument*/FactoryPrimitiveArrayPool_1_New_m4B62F1E511B7854408A14C347007968C092B4142_RuntimeMethod_var);
		V_0 = L_3;
		// AudioUtil.Convert(buf, shortBuf, buf.Length);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = ___buf0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___buf0;
		NullCheck(L_6);
		AudioUtil_Convert_mE7E3A1421F063E82C97D51909A11A44DB2B123B6(L_4, L_5, ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), /*hidden argument*/NULL);
		// localVoice.PushDataAsync(shortBuf);
		LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * L_7 = __this->get_localVoice_0();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_8 = V_0;
		NullCheck(L_7);
		LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1(L_7, L_8, /*hidden argument*/LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1_RuntimeMethod_var);
		// }, bufferFactory);
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
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass52_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_1__ctor_mB368AC7076E235A1C3ABB3340F28BDEB0D5EDBCD (U3CU3Ec__DisplayClass52_1_t023DBC1F8CD08F7D8DB30EC31652B12251379E68 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass52_1::<CreateLocalVoiceAudioFromSource>b__1(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_1_U3CCreateLocalVoiceAudioFromSourceU3Eb__1_m4233C2A64B414FA651ED6151D78E78873F70EAFA (U3CU3Ec__DisplayClass52_1_t023DBC1F8CD08F7D8DB30EC31652B12251379E68 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___buf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ((IAudioPusher<float>)source).SetCallback(buf => localVoice.PushDataAsync(buf), localVoice.BufferFactory);
		LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * L_0 = __this->get_localVoice_0();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ___buf0;
		NullCheck(L_0);
		LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82(L_0, L_1, /*hidden argument*/LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82_RuntimeMethod_var);
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
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass52_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_2__ctor_m203AE52464CF920E0BCEC094D093E8CEE6723B1D (U3CU3Ec__DisplayClass52_2_t0CD3E610512D2EBA352D8BC6516D4F4D619D570D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass52_2::<CreateLocalVoiceAudioFromSource>b__2(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_2_U3CCreateLocalVoiceAudioFromSourceU3Eb__2_mAA79676F20BB0169086284CB07585A17EA0C82AB (U3CU3Ec__DisplayClass52_2_t0CD3E610512D2EBA352D8BC6516D4F4D619D570D * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___buf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FactoryPrimitiveArrayPool_1_New_mA7DF99EB941029EF5445393AFF981A7B6919711F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceFramed_1_get_BufferFactory_m55FFB4181F0CF749B62E8D81C7F962EF460BFEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	{
		// var floatBuf = localVoice.BufferFactory.New(buf.Length);
		LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * L_0 = __this->get_localVoice_0();
		NullCheck(L_0);
		FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * L_1;
		L_1 = LocalVoiceFramed_1_get_BufferFactory_m55FFB4181F0CF749B62E8D81C7F962EF460BFEC0_inline(L_0, /*hidden argument*/LocalVoiceFramed_1_get_BufferFactory_m55FFB4181F0CF749B62E8D81C7F962EF460BFEC0_RuntimeMethod_var);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_2 = ___buf0;
		NullCheck(L_2);
		NullCheck(L_1);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3;
		L_3 = FactoryPrimitiveArrayPool_1_New_mA7DF99EB941029EF5445393AFF981A7B6919711F(L_1, ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), /*hidden argument*/FactoryPrimitiveArrayPool_1_New_mA7DF99EB941029EF5445393AFF981A7B6919711F_RuntimeMethod_var);
		V_0 = L_3;
		// AudioUtil.Convert(buf, floatBuf, buf.Length);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = ___buf0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = V_0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_6 = ___buf0;
		NullCheck(L_6);
		AudioUtil_Convert_mC7F7157BD9FF2910A35E7DB143665624F74E08E3(L_4, L_5, ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), /*hidden argument*/NULL);
		// localVoice.PushDataAsync(floatBuf);
		LocalVoiceAudio_1_tE0AF9873D736E6F804F50F87936D2ACE5C027238 * L_7 = __this->get_localVoice_0();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = V_0;
		NullCheck(L_7);
		LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82(L_7, L_8, /*hidden argument*/LocalVoiceFramed_1_PushDataAsync_m00A920DB3FF61949F367167B188A90AC6B9D9E82_RuntimeMethod_var);
		// }, bufferFactory);
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
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass52_3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_3__ctor_m79A1F59D648F42246AFEC22407455CC14C8AD31F (U3CU3Ec__DisplayClass52_3_t5C8BFE229FCE982F8650F0874CB455C6CFC32D3C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient/<>c__DisplayClass52_3::<CreateLocalVoiceAudioFromSource>b__3(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_3_U3CCreateLocalVoiceAudioFromSourceU3Eb__3_m600D8E95013B8040EAD14AE7B2802950A1E6B9C8 (U3CU3Ec__DisplayClass52_3_t5C8BFE229FCE982F8650F0874CB455C6CFC32D3C * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___buf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ((IAudioPusher<short>)source).SetCallback(buf => localVoice.PushDataAsync(buf), localVoice.BufferFactory);
		LocalVoiceAudio_1_t182FBE7037D6744DF89C98FF74FFFEEF55531FC8 * L_0 = __this->get_localVoice_0();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = ___buf0;
		NullCheck(L_0);
		LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1(L_0, L_1, /*hidden argument*/LocalVoiceFramed_1_PushDataAsync_m0B323B8BE7F08707A528E2E4D6D08A3976A09BA1_RuntimeMethod_var);
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
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40__ctor_m370BF8BBB65C6860778208A7ECE261CC83C9EC60 (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_System_IDisposable_Dispose_m572FFFF4CD05AD4C5B1A96EB40277FA653F0908C (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
			{
				goto IL_001e;
			}
		}

IL_0018:
		{
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)1)))
			{
				goto IL_001e;
			}
		}

IL_001c:
		{
			IL2CPP_LEAVE(0x2F, FINALLY_0028);
		}

IL_001e:
		{
		}

IL_001f:
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x2F, FINALLY_0021);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0021;
		}

FINALLY_0021:
		{ // begin finally (depth: 2)
			U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally2_m793ABF699DD08C7DBE1EF15DC58288BCB690ED25(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(33)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(33)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x2F, FINALLY_0028);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally1_m1E37E3573DF0ECA9A68A526F0E8B9B5AE377089C(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(40)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_RemoteVoiceInfosU3Ed__40_MoveNext_mB89B99E073789C2DB39ACAC3B6E81EF766FF342E (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m7FDCA22BD761E723E00B8926B1F30557331BFFEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mAF78EC82F6811AFB6068D09343E164B970681C1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m25A4E8E566B755F3B5D4E285035BEA7B83ED2AAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m763AC53790967C7503AE2B3D581CEA882C6CE3DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD102ED220D0F16567214E8E5C69A3D8146D5D8AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF633D50299E68934066A6E44C1DC7504E92ABCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA5CEB73F2786970AE724DED666ACEA0BA9954B6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC3EC4F0ADB2359D5B5386277C54A9A5B5C2F5315_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2AB6475270004FDA7585570A8A7B1898C5942513_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mF1D2B2C146EB355F5C3191E4A1C4C2034249BAA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * V_2 = NULL;
	KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001f;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00c1;
			}
		}

IL_0018:
		{
			V_0 = (bool)0;
			goto IL_0121;
		}

IL_001f:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (var playerVoices in this.remoteVoices)
			VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * L_4 = V_2;
			NullCheck(L_4);
			Dictionary_2_t90655E4AED330F8AED59C8CAFEE5FE3AC4DEF82B * L_5 = L_4->get_remoteVoices_17();
			NullCheck(L_5);
			Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B  L_6;
			L_6 = Dictionary_2_GetEnumerator_m7FDCA22BD761E723E00B8926B1F30557331BFFEC(L_5, /*hidden argument*/Dictionary_2_GetEnumerator_m7FDCA22BD761E723E00B8926B1F30557331BFFEC_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_4(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_00f4;
		}

IL_0044:
		{
			// foreach (var playerVoices in this.remoteVoices)
			Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B * L_7 = __this->get_address_of_U3CU3E7__wrap1_4();
			KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99  L_8;
			L_8 = Enumerator_get_Current_mD102ED220D0F16567214E8E5C69A3D8146D5D8AF_inline((Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B *)L_7, /*hidden argument*/Enumerator_get_Current_mD102ED220D0F16567214E8E5C69A3D8146D5D8AF_RuntimeMethod_var);
			__this->set_U3CplayerVoicesU3E5__3_5(L_8);
			// foreach (var voice in playerVoices.Value)
			KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 * L_9 = __this->get_address_of_U3CplayerVoicesU3E5__3_5();
			Dictionary_2_tAB002D0FC50507C5CEA22A2F58307B3BDF355FC0 * L_10;
			L_10 = KeyValuePair_2_get_Value_mF1D2B2C146EB355F5C3191E4A1C4C2034249BAA3_inline((KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 *)L_9, /*hidden argument*/KeyValuePair_2_get_Value_mF1D2B2C146EB355F5C3191E4A1C4C2034249BAA3_RuntimeMethod_var);
			NullCheck(L_10);
			Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E  L_11;
			L_11 = Dictionary_2_GetEnumerator_mAF78EC82F6811AFB6068D09343E164B970681C1E(L_10, /*hidden argument*/Dictionary_2_GetEnumerator_mAF78EC82F6811AFB6068D09343E164B970681C1E_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap3_6(L_11);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_00c9;
		}

IL_0075:
		{
			// foreach (var voice in playerVoices.Value)
			Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E * L_12 = __this->get_address_of_U3CU3E7__wrap3_6();
			KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382  L_13;
			L_13 = Enumerator_get_Current_mF633D50299E68934066A6E44C1DC7504E92ABCC4_inline((Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E *)L_12, /*hidden argument*/Enumerator_get_Current_mF633D50299E68934066A6E44C1DC7504E92ABCC4_RuntimeMethod_var);
			V_3 = L_13;
			// yield return new RemoteVoiceInfo(voice.Value.channelId, playerVoices.Key, voice.Key, voice.Value.Info);
			RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * L_14;
			L_14 = KeyValuePair_2_get_Value_m2AB6475270004FDA7585570A8A7B1898C5942513_inline((KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m2AB6475270004FDA7585570A8A7B1898C5942513_RuntimeMethod_var);
			NullCheck(L_14);
			int32_t L_15 = L_14->get_channelId_2();
			KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 * L_16 = __this->get_address_of_U3CplayerVoicesU3E5__3_5();
			int32_t L_17;
			L_17 = KeyValuePair_2_get_Key_mC3EC4F0ADB2359D5B5386277C54A9A5B5C2F5315_inline((KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 *)L_16, /*hidden argument*/KeyValuePair_2_get_Key_mC3EC4F0ADB2359D5B5386277C54A9A5B5C2F5315_RuntimeMethod_var);
			uint8_t L_18;
			L_18 = KeyValuePair_2_get_Key_mA5CEB73F2786970AE724DED666ACEA0BA9954B6F_inline((KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_mA5CEB73F2786970AE724DED666ACEA0BA9954B6F_RuntimeMethod_var);
			RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * L_19;
			L_19 = KeyValuePair_2_get_Value_m2AB6475270004FDA7585570A8A7B1898C5942513_inline((KeyValuePair_2_t22C91A9937DAA668CE062AB709303D2B89973382 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m2AB6475270004FDA7585570A8A7B1898C5942513_RuntimeMethod_var);
			NullCheck(L_19);
			VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  L_20;
			L_20 = RemoteVoice_get_Info_m1CEE9CD8D298502F545A2EE82BD99C0141A670E2_inline(L_19, /*hidden argument*/NULL);
			RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A * L_21 = (RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A *)il2cpp_codegen_object_new(RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A_il2cpp_TypeInfo_var);
			RemoteVoiceInfo__ctor_m27E03F21BF9A67143072FBBACFD7F175250B9CA6(L_21, L_15, L_17, L_18, L_20, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_21);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0121;
		}

IL_00c1:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_00c9:
		{
			// foreach (var voice in playerVoices.Value)
			Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E * L_22 = __this->get_address_of_U3CU3E7__wrap3_6();
			bool L_23;
			L_23 = Enumerator_MoveNext_m763AC53790967C7503AE2B3D581CEA882C6CE3DB((Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E *)L_22, /*hidden argument*/Enumerator_MoveNext_m763AC53790967C7503AE2B3D581CEA882C6CE3DB_RuntimeMethod_var);
			if (L_23)
			{
				goto IL_0075;
			}
		}

IL_00d6:
		{
			U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally2_m793ABF699DD08C7DBE1EF15DC58288BCB690ED25(__this, /*hidden argument*/NULL);
			Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E * L_24 = __this->get_address_of_U3CU3E7__wrap3_6();
			il2cpp_codegen_initobj(L_24, sizeof(Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E ));
			// }
			KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 * L_25 = __this->get_address_of_U3CplayerVoicesU3E5__3_5();
			il2cpp_codegen_initobj(L_25, sizeof(KeyValuePair_2_tC6BE5AE8DA63AAFF3D48462E307821AF95955E99 ));
		}

IL_00f4:
		{
			// foreach (var playerVoices in this.remoteVoices)
			Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B * L_26 = __this->get_address_of_U3CU3E7__wrap1_4();
			bool L_27;
			L_27 = Enumerator_MoveNext_m25A4E8E566B755F3B5D4E285035BEA7B83ED2AAE((Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B *)L_26, /*hidden argument*/Enumerator_MoveNext_m25A4E8E566B755F3B5D4E285035BEA7B83ED2AAE_RuntimeMethod_var);
			if (L_27)
			{
				goto IL_0044;
			}
		}

IL_0104:
		{
			U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally1_m1E37E3573DF0ECA9A68A526F0E8B9B5AE377089C(__this, /*hidden argument*/NULL);
			Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B * L_28 = __this->get_address_of_U3CU3E7__wrap1_4();
			il2cpp_codegen_initobj(L_28, sizeof(Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B ));
			// }
			V_0 = (bool)0;
			goto IL_0121;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_011a;
	}

FAULT_011a:
	{ // begin fault (depth: 1)
		U3Cget_RemoteVoiceInfosU3Ed__40_System_IDisposable_Dispose_m572FFFF4CD05AD4C5B1A96EB40277FA653F0908C(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(282)
	} // end fault
	IL2CPP_CLEANUP(282)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0121:
	{
		bool L_29 = V_0;
		return L_29;
	}
}
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally1_m1E37E3573DF0ECA9A68A526F0E8B9B5AE377089C (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mDEFCDED916603553DBB44F2363E844D232B884D5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B * L_0 = __this->get_address_of_U3CU3E7__wrap1_4();
		Enumerator_Dispose_mDEFCDED916603553DBB44F2363E844D232B884D5((Enumerator_tB14A35D7B496E09DDC30BB298CF539138E9A131B *)L_0, /*hidden argument*/Enumerator_Dispose_mDEFCDED916603553DBB44F2363E844D232B884D5_RuntimeMethod_var);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally2_m793ABF699DD08C7DBE1EF15DC58288BCB690ED25 (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFA11765DB3B1C2D8B904790C9B2DA123D1C604C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0(((int32_t)-3));
		Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E * L_0 = __this->get_address_of_U3CU3E7__wrap3_6();
		Enumerator_Dispose_mFA11765DB3B1C2D8B904790C9B2DA123D1C604C1((Enumerator_t03682E566E42B6B83DD5141738D2C2A3096AF95E *)L_0, /*hidden argument*/Enumerator_Dispose_mFA11765DB3B1C2D8B904790C9B2DA123D1C604C1_RuntimeMethod_var);
		return;
	}
}
// Photon.Voice.RemoteVoiceInfo Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.Collections.Generic.IEnumerator<Photon.Voice.RemoteVoiceInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A * U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_Generic_IEnumeratorU3CPhoton_Voice_RemoteVoiceInfoU3E_get_Current_mEE4ABEBFBC7FB787BB1212459E149E1FC371EB0A (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	{
		RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_IEnumerator_Reset_m5CFE226846C94BC15269EA17FCADEB64A95CBA4B (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_IEnumerator_Reset_m5CFE226846C94BC15269EA17FCADEB64A95CBA4B_RuntimeMethod_var)));
	}
}
// System.Object Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_IEnumerator_get_Current_m08F0709F7FFD4D90DBF1B145754BBB6A323D2712 (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	{
		RemoteVoiceInfo_t3E27C07CD51D8A4FB0DE4D1301141C9B828DD40A * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Photon.Voice.RemoteVoiceInfo> Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.Collections.Generic.IEnumerable<Photon.Voice.RemoteVoiceInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_Generic_IEnumerableU3CPhoton_Voice_RemoteVoiceInfoU3E_GetEnumerator_m561C06EB0CD20D7B774681A871D11CF2E9D1FF16 (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * L_3 = (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B *)il2cpp_codegen_object_new(U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B_il2cpp_TypeInfo_var);
		U3Cget_RemoteVoiceInfosU3Ed__40__ctor_m370BF8BBB65C6860778208A7ECE261CC83C9EC60(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * L_4 = V_0;
		VoiceClient_t59431EAB90729511B433F45EEA9F2B3ABDC2D96E * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_IEnumerable_GetEnumerator_mCF8CC2A6FBA4352A000535A9D6683A1BA96667D0 (U3Cget_RemoteVoiceInfosU3Ed__40_tFF161886DBE072D31A261E08B262A4CB4B733F8B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_Generic_IEnumerableU3CPhoton_Voice_RemoteVoiceInfoU3E_GetEnumerator_m561C06EB0CD20D7B774681A871D11CF2E9D1FF16(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void Photon.Voice.VoiceClient/CreateOptions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateOptions__cctor_mB7328F7D302B022C4DC5B61616B62BA98F641659 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// static public CreateOptions Default = new CreateOptions()
		// {
		//     VoiceIDMin = 1, // 0 means invalid id
		//     VoiceIDMax = 15 // preserve ids for other clients creating voices for the same player (server plugin)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2 ));
		(&V_0)->set_VoiceIDMin_0((uint8_t)1);
		(&V_0)->set_VoiceIDMax_1((uint8_t)((int32_t)15));
		CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2  L_0 = V_0;
		((CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2_StaticFields*)il2cpp_codegen_static_fields_for(CreateOptions_t91C9D79B507BAF5EC7F02F8120C6ECAC73138FE2_il2cpp_TypeInfo_var))->set_Default_2(L_0);
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
// System.Void Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVoiceInfoDelegate__ctor_mBBDE3F00B740CD64A1798232FDED7705CAC10747 (RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate::Invoke(System.Int32,System.Int32,System.Byte,Photon.Voice.VoiceInfo,Photon.Voice.RemoteVoiceOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVoiceInfoDelegate_Invoke_m4CB7FAF007FE7CDDD8BB3EAFEB061780C0711DB8 (RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13 * __this, int32_t ___channelId0, int32_t ___playerId1, uint8_t ___voiceId2, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___voiceInfo3, RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE * ___options4, const RuntimeMethod* method)
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
			if (___parameterCount == 5)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, uint8_t, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 , RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, uint8_t, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 , RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4, targetMethod);
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
						GenericInterfaceActionInvoker5< int32_t, int32_t, uint8_t, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 , RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE * >::Invoke(targetMethod, targetThis, ___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4);
					else
						GenericVirtActionInvoker5< int32_t, int32_t, uint8_t, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 , RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE * >::Invoke(targetMethod, targetThis, ___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< int32_t, int32_t, uint8_t, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 , RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4);
					else
						VirtActionInvoker5< int32_t, int32_t, uint8_t, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 , RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, uint8_t, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 , RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate::BeginInvoke(System.Int32,System.Int32,System.Byte,Photon.Voice.VoiceInfo,Photon.Voice.RemoteVoiceOptions&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RemoteVoiceInfoDelegate_BeginInvoke_mCF94EB1A8A0306D6FF7679198428E4977D14D5E1 (RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13 * __this, int32_t ___channelId0, int32_t ___playerId1, uint8_t ___voiceId2, VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  ___voiceInfo3, RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE * ___options4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___channelId0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___playerId1);
	__d_args[2] = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &___voiceId2);
	__d_args[3] = Box(VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3_il2cpp_TypeInfo_var, &___voiceInfo3);
	__d_args[4] = Box(RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE_il2cpp_TypeInfo_var, &*___options4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// System.Void Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate::EndInvoke(Photon.Voice.RemoteVoiceOptions&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVoiceInfoDelegate_EndInvoke_mD3A322865BB2CDB4C3AC7AAF234EE2F4C78E1DDB (RemoteVoiceInfoDelegate_tAFE566F65BB6CDF850E29AFE6BE771196D020D13 * __this, RemoteVoiceOptions_t8FB15748BE1B3B58F465CC25C8ADA12B50D05BEE * ___options0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___options0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FrameBuffer_get_Length_m35BA177CE29573C3E4EBC62D1AC39F8695E23985_inline (FrameBuffer_tECEC197CAFAB4DA0DA263106CE6D0B8DA4F3DD77 * __this, const RuntimeMethod* method)
{
	{
		// public int Length { get { return count; } }
		int32_t L_0 = __this->get_count_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioInPusher_set_Error_mE4F930729E4F5C2059950264F6D50BF735E01C3A_inline (AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Error { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CErrorU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AudioInPusher_get_Error_m23BBFE8A70B2BBE96893659DAA6DE4D226C571FA_inline (AudioInPusher_t5F5E40D556384EEBFABC6851344EE7874B845EAD * __this, const RuntimeMethod* method)
{
	{
		// public string Error { get; private set; }
		String_t* L_0 = __this->get_U3CErrorU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioInReader_set_Error_mEF7DB6CE6FB8FA712A987E1C6FCF609E34EF0441_inline (AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Error { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CErrorU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AudioInReader_get_Error_m0726467692BFD3A68B4CB0A9E618F6CC6A314472_inline (AudioInReader_t6D496E7875EE3DA1A08FC892E3F759EAF8315302 * __this, const RuntimeMethod* method)
{
	{
		// public string Error { get; private set; }
		String_t* L_0 = __this->get_U3CErrorU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayDelayConfig_set_Low_m14EF1DB2F464EE9B681CE6238ACFA35D384A7B22_inline (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Low { get  ; set; } // ms: (Target) Audio player initilizes the delay with this value on Start and after flush and moves to it during corrections
		int32_t L_0 = ___value0;
		__this->set_U3CLowU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayDelayConfig_set_High_m2E8DE7D3EDF1AACA02292E0730C469316AE26734_inline (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int High { get; set; } // ms: Audio player tries to keep the delay below this value.
		int32_t L_0 = ___value0;
		__this->set_U3CHighU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayDelayConfig_set_Max_mE552A68942B1720690ECBAB19D6EC0563B45CAD9_inline (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Max { get; set; } // ms: Audio player guarantees that the delay never exceeds this value.
		int32_t L_0 = ___value0;
		__this->set_U3CMaxU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayDelayConfig_set_SpeedUpPerc_m49BD574A07EC17DBE96C3A1438E9EEE741E7CC33_inline (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int SpeedUpPerc { get; set; } // playback speed-up to catch up the stream
		int32_t L_0 = ___value0;
		__this->set_U3CSpeedUpPercU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayDelayConfig_get_Low_m74AC25AC2F5F3FFFD56CEA6915863A418E5649AE_inline (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, const RuntimeMethod* method)
{
	{
		// public int Low { get  ; set; } // ms: (Target) Audio player initilizes the delay with this value on Start and after flush and moves to it during corrections
		int32_t L_0 = __this->get_U3CLowU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayDelayConfig_get_High_m92A553D9CA8B243F2B80DF55A65590D54F20A3CA_inline (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, const RuntimeMethod* method)
{
	{
		// public int High { get; set; } // ms: Audio player tries to keep the delay below this value.
		int32_t L_0 = __this->get_U3CHighU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayDelayConfig_get_Max_m1F354039B7D05E18CACE6D55A79A796091C59C48_inline (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, const RuntimeMethod* method)
{
	{
		// public int Max { get; set; } // ms: Audio player guarantees that the delay never exceeds this value.
		int32_t L_0 = __this->get_U3CMaxU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayDelayConfig_get_SpeedUpPerc_mF0539C2832704C106F8A608B4340D3E6BCDCD933_inline (PlayDelayConfig_t5703108D47FA4D05D1208F70F3F16E85F3F422E7 * __this, const RuntimeMethod* method)
{
	{
		// public int SpeedUpPerc { get; set; } // playback speed-up to catch up the stream
		int32_t L_0 = __this->get_U3CSpeedUpPercU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StrideSet_set_Length_m1B534D34EAF9959D432D837D7DC4F8E56F506F43_inline (StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Length { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CLengthU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StrideSet_get_Length_mE261F3B4A73E03A6EA9F543B637EE979FFD51331_inline (StrideSet_t999EDDC6A6725CB7A5DCA430C8BA14D2726F1CBF * __this, const RuntimeMethod* method)
{
	{
		// public int Length { get; private set; }
		int32_t L_0 = __this->get_U3CLengthU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlaneSet_set_Length_m7799AC791B2BF9C1CCC822E8AC2DBA3F23B7145E_inline (PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Length { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CLengthU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlaneSet_get_Length_mC4AB38EA79E838926E0AF056C8DFF0EA34E15593_inline (PlaneSet_t46CCD99B66223759A15B0C66C92EAD1B32DBE169 * __this, const RuntimeMethod* method)
{
	{
		// public int Length { get; private set; }
		int32_t L_0 = __this->get_U3CLengthU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  LocalVoice_get_Info_m1996B4F7A27EF2E408C0C0DE7BAED51524FA477B_inline (LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * __this, const RuntimeMethod* method)
{
	{
		// public VoiceInfo Info { get { return info; } }
		VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  L_0 = __this->get_info_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Codec_mEE43E2D47F30D9B9953DFB95479EC3B7BA9FE2E3_inline (VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3 * __this, const RuntimeMethod* method)
{
	{
		// public Codec Codec { get; set; }
		int32_t L_0 = __this->get_U3CCodecU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LocalVoice_get_DebugEchoMode_m98A24E697FB45440E960B0DC9420CD4C05903F6B_inline (LocalVoice_t736EC7933A085BF3FF9C93F2E68B746816E1BAC9 * __this, const RuntimeMethod* method)
{
	{
		// get { return debugEchoMode; }
		bool L_0 = __this->get_debugEchoMode_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  RemoteVoice_get_Info_m1CEE9CD8D298502F545A2EE82BD99C0141A670E2_inline (RemoteVoice_t6FB0A3FD118543D08300CF0D268A340CFD812D87 * __this, const RuntimeMethod* method)
{
	{
		// internal VoiceInfo Info { get; private set; }
		VoiceInfo_tCE4870F1D19B3A21E5EDC80E82B8121368DAECF3  L_0 = __this->get_U3CInfoU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceDetector_1_get_On_m122CD7F20E577E49D20483CC02FD7CD67F1B6368_gshared_inline (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * __this, const RuntimeMethod* method)
{
	{
		// public bool On { get; set; }
		bool L_0 = (bool)__this->get_U3COnU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceDetector_1_get_Detected_m9E69A8BECBFAC14EFB2894CDC8F070B53D2CC4C7_gshared_inline (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * __this, const RuntimeMethod* method)
{
	{
		// get { return detected; }
		bool L_0 = (bool)__this->get_detected_3();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceDetector_1_get_On_mAA630DFE422E1D5263686DDCE57F6E26C4DF8AB8_gshared_inline (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, const RuntimeMethod* method)
{
	{
		// public bool On { get; set; }
		bool L_0 = (bool)__this->get_U3COnU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceDetector_1_get_Detected_m2556CDCC35307D5A1AE5D0573806C4E1C4C0F5C8_gshared_inline (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, const RuntimeMethod* method)
{
	{
		// get { return detected; }
		bool L_0 = (bool)__this->get_detected_3();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* FrameOut_1_get_Buf_mBBFA29E661AF47B93BF8300002DFD63CDAD854B1_gshared_inline (FrameOut_1_t360F685F3D2F100DC469100D32F8A5B415EC536E * __this, const RuntimeMethod* method)
{
	{
		// public T[] Buf { get; private set; }
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)__this->get_U3CBufU3Ek__BackingField_0();
		return (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * LocalVoiceFramed_1_get_BufferFactory_mE185781006A94F4245FD1FD62C2B28E16D719738_gshared_inline (LocalVoiceFramed_1_tAFD630471C34707CBB15E2BDAF33F1A0F2457664 * __this, const RuntimeMethod* method)
{
	{
		// public FactoryPrimitiveArrayPool<T> BufferFactory { get { return bufferFactory; } }
		FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 * L_0 = (FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 *)__this->get_bufferFactory_29();
		return (FactoryPrimitiveArrayPool_1_tAAEAE4B9F6AE1B29CB99B1DA71148D45362C98A2 *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * LocalVoiceFramed_1_get_BufferFactory_m55FFB4181F0CF749B62E8D81C7F962EF460BFEC0_gshared_inline (LocalVoiceFramed_1_t84A642EF05CE342E7B4B4B98EFF4C875E5C0FEA0 * __this, const RuntimeMethod* method)
{
	{
		// public FactoryPrimitiveArrayPool<T> BufferFactory { get { return bufferFactory; } }
		FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 * L_0 = (FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 *)__this->get_bufferFactory_29();
		return (FactoryPrimitiveArrayPool_1_t04FA630374643CB348A2E78AA431D957337E6C63 *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  L_0 = (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )__this->get_current_3();
		return (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  Enumerator_get_Current_mDD5FF5DE0A9753D6EC3A02500E649CA8E738CE83_gshared_inline (Enumerator_t82EC38578AA05240F1D04E31474B7E844D0AA5D6 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  L_0 = (KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 )__this->get_current_3();
		return (KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m6FB62A84CBE44A1ADC675B97E28FABD4A3658064_gshared_inline (KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mCA6E77030F4BE64105E6B3EFB3CBB8E6EC08CA0A_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t KeyValuePair_2_get_Key_m8C5CDCE6A0C4D1F01811F8A3DE5598AC9C50910C_gshared_inline (KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = (uint8_t)__this->get_key_0();
		return (uint8_t)L_0;
	}
}
