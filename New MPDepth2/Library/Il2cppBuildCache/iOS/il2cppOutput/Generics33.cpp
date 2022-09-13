#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<System.Single>
struct Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9;
// System.Collections.Generic.Comparer`1<System.Object>
struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.EventHandler`1<System.Xml.Linq.XObjectChangeEventArgs>
struct EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4;
// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>
struct ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD;
// System.Func`2<System.Int16,System.Boolean>
struct Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77;
// System.Func`2<System.Int16,System.Int16>
struct Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274;
// System.Func`2<System.Int32,System.Int32>
struct Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<UnityEngine.Vector3,System.Boolean>
struct Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269;
// System.Func`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441;
// System.Func`2<UnityEngine.Vector4,System.Boolean>
struct Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148;
// System.Func`2<UnityEngine.Vector4,UnityEngine.Vector4>
struct Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887;
// System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Collections.Generic.IEnumerable`1<System.Object>>
struct Func_3_tF89D1696E961C7EA5D26DEAEDD6A2F37BB5B660A;
// System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Object>
struct Func_3_t8AAFC034325BBE5359CC494DBD4E2EB3555037C4;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD;
// System.Collections.Generic.IEnumerable`1<System.Int16>
struct IEnumerable_1_tC4EACC3E0D106CC7E4C3E81A78B0F8B77DA55EDC;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_tDBC849B8248C833C53F1762E771EFC477EB8AF18;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>
struct IEnumerable_1_t47E725A87E8DA38B74327401954A54493CC3251E;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement>
struct IEnumerable_1_t70F856D4968B925F9EDFA9EB3A403F5B672FE7D2;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_tF437149CAED78D4A68294D431DE692A78F7D67B3;
// System.Collections.Generic.IEnumerator`1<System.Int16>
struct IEnumerator_1_t4D850EE545DDCA6BA70730002CC9549C6863CD35;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>
struct IEnumerator_1_t9C426231952B863270D78D88F9DB5B4E9A16CC6A;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector4>
struct IEnumerator_1_t01C92EC1202D8B9EF499D5B3D2B22925D411381B;
// System.Linq.Enumerable/Iterator`1<System.Int16>
struct Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B;
// System.Linq.Enumerable/Iterator`1<System.Int32>
struct Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279;
// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>
struct Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF;
// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>
struct Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E;
// System.Collections.Generic.List`1<System.Int16>
struct List_1_t985353431229C8151763A38589D03FBD829D85E5;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A;
// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Int16>
struct VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3;
// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Object>
struct VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5;
// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Single>
struct VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E;
// Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>
struct VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4;
// Photon.Voice.AudioUtil/VoiceDetector`1<System.Object>
struct VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3;
// Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>
struct VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC;
// Photon.Voice.AudioUtil/VoiceLevelDetectCalibrate`1<System.Object>
struct VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int16>
struct WhereEnumerableIterator_1_tCA508E67A7F0F9D88916DAA9C6CDE55E4AA6F666;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>
struct WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>
struct WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector4>
struct WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E;
// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int16,System.Int16>
struct WhereSelectArrayIterator_2_t715FB6279FFB5ABD9697099DBFF0EF05F5B3906E;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Int32>
struct WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct WhereSelectArrayIterator_2_t24DAF3FD3D83CD879E4F074D65CFAA4A9B39B26B;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Vector4,UnityEngine.Vector4>
struct WhereSelectArrayIterator_2_t001A753C631DF1C20F92EEB0BB9DACBBEB2E3D17;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int16,System.Int16>
struct WhereSelectEnumerableIterator_2_tA9CF203B0187CB8B2E0EA33761936A7F2049E894;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>
struct WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct WhereSelectEnumerableIterator_2_tA09EBC9BF1813566F035DFC8B7FC004BBEA4C3C0;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector4,UnityEngine.Vector4>
struct WhereSelectEnumerableIterator_2_tC1CC19A0F9ED270F282DF86D7C56F9FAE964E6DE;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int16,System.Int16>
struct WhereSelectListIterator_2_t8ACB1E9FD1514AD3F4E194D5E7600F4533E014B4;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>
struct WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct WhereSelectListIterator_2_tFC94707EF3202EDF8F9A7FA62950623145D647B8;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector4,UnityEngine.Vector4>
struct WhereSelectListIterator_2_t73FD5DF7B320D5154C368D51D5ADA4EB669CDF09;
// MS.Internal.Xml.Linq.ComponentModel.XDeferredAxis`1<System.Object>
struct XDeferredAxis_1_t579860EE72CB883274B0B5217C39487FA07F073B;
// MS.Internal.Xml.Linq.ComponentModel.XDeferredAxis`1<System.Xml.Linq.XElement>
struct XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99;
// MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1<System.Object>
struct XDeferredSingleton_1_tB946A0C7BE3A484971FF18BC1C0A2106202C1EC8;
// MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1<System.Xml.Linq.XAttribute>
struct XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C;
// MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1<System.Xml.Linq.XElement>
struct XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053;
// System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>
struct XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE;
// System.Xml.Linq.XHashtable`1<System.Object>
struct XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37;
// MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Object,System.Object>
struct XPropertyDescriptor_2_t01C06B58C295272B0A9A00B6C0790CA126B0AAEA;
// MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptionProvider`1<System.Object>
struct XTypeDescriptionProvider_1_t3E70768CA58B1E0422A52E2D980397207AEC99DB;
// MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptor`1<System.Object>
struct XTypeDescriptor_1_t8B5AE52536B37FAED17586280E80319C8E7D2B68;
// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>[]
struct EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C;
// System.Attribute[]
struct AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4;
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
// System.ComponentModel.PropertyDescriptor[]
struct PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_tF551C6836E2C7F849595B7EFAFDDD0C3A86BA62C;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.ComponentModel.CustomTypeDescriptor
struct CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IComparer
struct IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t7D54ECDB435500E465AB8ED63654818C8D79B1D9;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.OverflowException
struct OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Xml.Linq.XAttribute
struct XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7;
// MS.Internal.Xml.Linq.ComponentModel.XAttributeValuePropertyDescriptor
struct XAttributeValuePropertyDescriptor_tC5B11D2983357281D81E15BE00D30EFB16D4E1FB;
// System.Xml.Linq.XContainer
struct XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525;
// System.Xml.Linq.XElement
struct XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5;
// MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor
struct XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73;
// MS.Internal.Xml.Linq.ComponentModel.XElementDescendantsPropertyDescriptor
struct XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959;
// MS.Internal.Xml.Linq.ComponentModel.XElementElementPropertyDescriptor
struct XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818;
// MS.Internal.Xml.Linq.ComponentModel.XElementElementsPropertyDescriptor
struct XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6;
// MS.Internal.Xml.Linq.ComponentModel.XElementValuePropertyDescriptor
struct XElementValuePropertyDescriptor_tA4ABC94A15EC3C3758364365CA8BB54449B5656F;
// MS.Internal.Xml.Linq.ComponentModel.XElementXmlPropertyDescriptor
struct XElementXmlPropertyDescriptor_tD87FB80863A3CB334BD49862FBD0C300BCE47DB9;
// System.Xml.Linq.XName
struct XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956;
// System.Xml.Linq.XNamespace
struct XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7;
// System.Xml.Linq.XObject
struct XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6;
// System.Xml.Linq.XObjectChangeEventArgs
struct XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352;
// Photon.Voice.AudioUtil/ILevelMeter
struct ILevelMeter_t886B0966B211DE75BD8D5FBDFE9A0405DFF87BF5;
// Photon.Voice.AudioUtil/IVoiceDetector
struct IVoiceDetector_t313BD832212A58385BC35624BF7356606FF0DCB8;
// Photon.Voice.AudioUtil/LevelMeterFloat
struct LevelMeterFloat_t760D3DBB26D5D489891946710E1711FF9A262455;
// Photon.Voice.AudioUtil/LevelMeterShort
struct LevelMeterShort_t49A5B495010FBAC23F91CE71A7290FABE50EB4B7;
// Photon.Voice.AudioUtil/VoiceDetectorFloat
struct VoiceDetectorFloat_t07D26837C6B174754CB59564212B09934653EEFD;
// Photon.Voice.AudioUtil/VoiceDetectorShort
struct VoiceDetectorShort_tEB57780C72B1E5D60E7584C80B244E40B4C0DFDB;
// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor
struct EmptyCustomTypeDescriptor_t685EFA12E535D8266F3F878EB5FA7B02BD2630A4;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILevelMeter_t886B0966B211DE75BD8D5FBDFE9A0405DFF87BF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVoiceDetector_t313BD832212A58385BC35624BF7356606FF0DCB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LevelMeterFloat_t760D3DBB26D5D489891946710E1711FF9A262455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LevelMeterShort_t49A5B495010FBAC23F91CE71A7290FABE50EB4B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeDescriptor_t7B173A6626B330AB5B77345C4DE4AB6C7B38CA6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceDetectorFloat_t07D26837C6B174754CB59564212B09934653EEFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceDetectorShort_tEB57780C72B1E5D60E7584C80B244E40B4C0DFDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XAttributeValuePropertyDescriptor_tC5B11D2983357281D81E15BE00D30EFB16D4E1FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XElementValuePropertyDescriptor_tA4ABC94A15EC3C3758364365CA8BB54449B5656F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XElementXmlPropertyDescriptor_tD87FB80863A3CB334BD49862FBD0C300BCE47DB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral013505A10216A9CFC58EE2BA9FD767CABA4CDC23;
IL2CPP_EXTERN_C String_t* _stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96;
IL2CPP_EXTERN_C String_t* _stringLiteral27F5946EF97DA519B61A2DE957327C84C529D60F;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralBE3459BCE0B6CF73AD0738811B0D5F99BD764A6A;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mD1518B4300DA15FEAD09FCF99F29716CB4515AE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoiceLevelDetectCalibrate_1__ctor_m8A9B37D93E119476961BF9ADA95C289A9940F31D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XDeferredAxis_1__ctor_mF31626FBBCEA80BD14E4AC5E58F7A7F5BF628031_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XDeferredSingleton_1__ctor_m7788B5DD2DC93CAF2BDB3935678C13249B5CD7AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XHashtableState_Resize_m2F60ACE78E15F4F50EAD11B7DA897A2BB7B7362A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E;
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C;
struct AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Comparer`1<System.Object>
struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84  : public RuntimeObject
{
public:

public:
};

struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84_StaticFields
{
public:
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84_StaticFields, ___defaultComparer_0)); }
	inline Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Linq.Enumerable/Iterator`1<System.Int16>
struct Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	int16_t ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B, ___current_2)); }
	inline int16_t get_current_2() const { return ___current_2; }
	inline int16_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int16_t value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<System.Int32>
struct Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	int32_t ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___current_2)); }
	inline int32_t get_current_2() const { return ___current_2; }
	inline int32_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int32_t value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject * ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___current_2)); }
	inline RuntimeObject * get_current_2() const { return ___current_2; }
	inline RuntimeObject ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(RuntimeObject * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
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


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____items_1)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int16>
struct List_1_t985353431229C8151763A38589D03FBD829D85E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t985353431229C8151763A38589D03FBD829D85E5, ____items_1)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get__items_1() const { return ____items_1; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t985353431229C8151763A38589D03FBD829D85E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t985353431229C8151763A38589D03FBD829D85E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t985353431229C8151763A38589D03FBD829D85E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t985353431229C8151763A38589D03FBD829D85E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t985353431229C8151763A38589D03FBD829D85E5_StaticFields, ____emptyArray_5)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
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


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A, ____items_1)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get__items_1() const { return ____items_1; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A_StaticFields, ____emptyArray_5)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Int16>
struct VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3  : public RuntimeObject
{
public:
	// Photon.Voice.AudioUtil/IVoiceDetector Photon.Voice.AudioUtil/VoiceDetectorCalibration`1::voiceDetector
	RuntimeObject* ___voiceDetector_0;
	// Photon.Voice.AudioUtil/ILevelMeter Photon.Voice.AudioUtil/VoiceDetectorCalibration`1::levelMeter
	RuntimeObject* ___levelMeter_1;
	// System.Int32 Photon.Voice.AudioUtil/VoiceDetectorCalibration`1::valuesPerSec
	int32_t ___valuesPerSec_2;
	// System.Int32 Photon.Voice.AudioUtil/VoiceDetectorCalibration`1::calibrateCount
	int32_t ___calibrateCount_3;
	// System.Action`1<System.Single> Photon.Voice.AudioUtil/VoiceDetectorCalibration`1::onCalibrated
	Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * ___onCalibrated_4;

public:
	inline static int32_t get_offset_of_voiceDetector_0() { return static_cast<int32_t>(offsetof(VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3, ___voiceDetector_0)); }
	inline RuntimeObject* get_voiceDetector_0() const { return ___voiceDetector_0; }
	inline RuntimeObject** get_address_of_voiceDetector_0() { return &___voiceDetector_0; }
	inline void set_voiceDetector_0(RuntimeObject* value)
	{
		___voiceDetector_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceDetector_0), (void*)value);
	}

	inline static int32_t get_offset_of_levelMeter_1() { return static_cast<int32_t>(offsetof(VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3, ___levelMeter_1)); }
	inline RuntimeObject* get_levelMeter_1() const { return ___levelMeter_1; }
	inline RuntimeObject** get_address_of_levelMeter_1() { return &___levelMeter_1; }
	inline void set_levelMeter_1(RuntimeObject* value)
	{
		___levelMeter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelMeter_1), (void*)value);
	}

	inline static int32_t get_offset_of_valuesPerSec_2() { return static_cast<int32_t>(offsetof(VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3, ___valuesPerSec_2)); }
	inline int32_t get_valuesPerSec_2() const { return ___valuesPerSec_2; }
	inline int32_t* get_address_of_valuesPerSec_2() { return &___valuesPerSec_2; }
	inline void set_valuesPerSec_2(int32_t value)
	{
		___valuesPerSec_2 = value;
	}

	inline static int32_t get_offset_of_calibrateCount_3() { return static_cast<int32_t>(offsetof(VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3, ___calibrateCount_3)); }
	inline int32_t get_calibrateCount_3() const { return ___calibrateCount_3; }
	inline int32_t* get_address_of_calibrateCount_3() { return &___calibrateCount_3; }
	inline void set_calibrateCount_3(int32_t value)
	{
		___calibrateCount_3 = value;
	}

	inline static int32_t get_offset_of_onCalibrated_4() { return static_cast<int32_t>(offsetof(VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3, ___onCalibrated_4)); }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * get_onCalibrated_4() const { return ___onCalibrated_4; }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 ** get_address_of_onCalibrated_4() { return &___onCalibrated_4; }
	inline void set_onCalibrated_4(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * value)
	{
		___onCalibrated_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onCalibrated_4), (void*)value);
	}
};


// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Object>
struct VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5  : public RuntimeObject
{
public:
	// Photon.Voice.AudioUtil/IVoiceDetector Photon.Voice.AudioUtil/VoiceDetectorCalibration`1::voiceDetector
	RuntimeObject* ___voiceDetector_0;
	// Photon.Voice.AudioUtil/ILevelMeter Photon.Voice.AudioUtil/VoiceDetectorCalibration`1::levelMeter
	RuntimeObject* ___levelMeter_1;
	// System.Int32 Photon.Voice.AudioUtil/VoiceDetectorCalibration`1::valuesPerSec
	int32_t ___valuesPerSec_2;
	// System.Int32 Photon.Voice.AudioUtil/VoiceDetectorCalibration`1::calibrateCount
	int32_t ___calibrateCount_3;
	// System.Action`1<System.Single> Photon.Voice.AudioUtil/VoiceDetectorCalibration`1::onCalibrated
	Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * ___onCalibrated_4;

public:
	inline static int32_t get_offset_of_voiceDetector_0() { return static_cast<int32_t>(offsetof(VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5, ___voiceDetector_0)); }
	inline RuntimeObject* get_voiceDetector_0() const { return ___voiceDetector_0; }
	inline RuntimeObject** get_address_of_voiceDetector_0() { return &___voiceDetector_0; }
	inline void set_voiceDetector_0(RuntimeObject* value)
	{
		___voiceDetector_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceDetector_0), (void*)value);
	}

	inline static int32_t get_offset_of_levelMeter_1() { return static_cast<int32_t>(offsetof(VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5, ___levelMeter_1)); }
	inline RuntimeObject* get_levelMeter_1() const { return ___levelMeter_1; }
	inline RuntimeObject** get_address_of_levelMeter_1() { return &___levelMeter_1; }
	inline void set_levelMeter_1(RuntimeObject* value)
	{
		___levelMeter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelMeter_1), (void*)value);
	}

	inline static int32_t get_offset_of_valuesPerSec_2() { return static_cast<int32_t>(offsetof(VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5, ___valuesPerSec_2)); }
	inline int32_t get_valuesPerSec_2() const { return ___valuesPerSec_2; }
	inline int32_t* get_address_of_valuesPerSec_2() { return &___valuesPerSec_2; }
	inline void set_valuesPerSec_2(int32_t value)
	{
		___valuesPerSec_2 = value;
	}

	inline static int32_t get_offset_of_calibrateCount_3() { return static_cast<int32_t>(offsetof(VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5, ___calibrateCount_3)); }
	inline int32_t get_calibrateCount_3() const { return ___calibrateCount_3; }
	inline int32_t* get_address_of_calibrateCount_3() { return &___calibrateCount_3; }
	inline void set_calibrateCount_3(int32_t value)
	{
		___calibrateCount_3 = value;
	}

	inline static int32_t get_offset_of_onCalibrated_4() { return static_cast<int32_t>(offsetof(VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5, ___onCalibrated_4)); }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * get_onCalibrated_4() const { return ___onCalibrated_4; }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 ** get_address_of_onCalibrated_4() { return &___onCalibrated_4; }
	inline void set_onCalibrated_4(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * value)
	{
		___onCalibrated_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onCalibrated_4), (void*)value);
	}
};


// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Single>
struct VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E  : public RuntimeObject
{
public:
	// Photon.Voice.AudioUtil/IVoiceDetector Photon.Voice.AudioUtil/VoiceDetectorCalibration`1::voiceDetector
	RuntimeObject* ___voiceDetector_0;
	// Photon.Voice.AudioUtil/ILevelMeter Photon.Voice.AudioUtil/VoiceDetectorCalibration`1::levelMeter
	RuntimeObject* ___levelMeter_1;
	// System.Int32 Photon.Voice.AudioUtil/VoiceDetectorCalibration`1::valuesPerSec
	int32_t ___valuesPerSec_2;
	// System.Int32 Photon.Voice.AudioUtil/VoiceDetectorCalibration`1::calibrateCount
	int32_t ___calibrateCount_3;
	// System.Action`1<System.Single> Photon.Voice.AudioUtil/VoiceDetectorCalibration`1::onCalibrated
	Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * ___onCalibrated_4;

public:
	inline static int32_t get_offset_of_voiceDetector_0() { return static_cast<int32_t>(offsetof(VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E, ___voiceDetector_0)); }
	inline RuntimeObject* get_voiceDetector_0() const { return ___voiceDetector_0; }
	inline RuntimeObject** get_address_of_voiceDetector_0() { return &___voiceDetector_0; }
	inline void set_voiceDetector_0(RuntimeObject* value)
	{
		___voiceDetector_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceDetector_0), (void*)value);
	}

	inline static int32_t get_offset_of_levelMeter_1() { return static_cast<int32_t>(offsetof(VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E, ___levelMeter_1)); }
	inline RuntimeObject* get_levelMeter_1() const { return ___levelMeter_1; }
	inline RuntimeObject** get_address_of_levelMeter_1() { return &___levelMeter_1; }
	inline void set_levelMeter_1(RuntimeObject* value)
	{
		___levelMeter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelMeter_1), (void*)value);
	}

	inline static int32_t get_offset_of_valuesPerSec_2() { return static_cast<int32_t>(offsetof(VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E, ___valuesPerSec_2)); }
	inline int32_t get_valuesPerSec_2() const { return ___valuesPerSec_2; }
	inline int32_t* get_address_of_valuesPerSec_2() { return &___valuesPerSec_2; }
	inline void set_valuesPerSec_2(int32_t value)
	{
		___valuesPerSec_2 = value;
	}

	inline static int32_t get_offset_of_calibrateCount_3() { return static_cast<int32_t>(offsetof(VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E, ___calibrateCount_3)); }
	inline int32_t get_calibrateCount_3() const { return ___calibrateCount_3; }
	inline int32_t* get_address_of_calibrateCount_3() { return &___calibrateCount_3; }
	inline void set_calibrateCount_3(int32_t value)
	{
		___calibrateCount_3 = value;
	}

	inline static int32_t get_offset_of_onCalibrated_4() { return static_cast<int32_t>(offsetof(VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E, ___onCalibrated_4)); }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * get_onCalibrated_4() const { return ___onCalibrated_4; }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 ** get_address_of_onCalibrated_4() { return &___onCalibrated_4; }
	inline void set_onCalibrated_4(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * value)
	{
		___onCalibrated_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onCalibrated_4), (void*)value);
	}
};


// Photon.Voice.AudioUtil/VoiceLevelDetectCalibrate`1<System.Object>
struct VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54  : public RuntimeObject
{
public:
	// Photon.Voice.AudioUtil/ILevelMeter Photon.Voice.AudioUtil/VoiceLevelDetectCalibrate`1::<LevelMeter>k__BackingField
	RuntimeObject* ___U3CLevelMeterU3Ek__BackingField_0;
	// Photon.Voice.AudioUtil/IVoiceDetector Photon.Voice.AudioUtil/VoiceLevelDetectCalibrate`1::<VoiceDetector>k__BackingField
	RuntimeObject* ___U3CVoiceDetectorU3Ek__BackingField_1;
	// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<T> Photon.Voice.AudioUtil/VoiceLevelDetectCalibrate`1::calibration
	VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 * ___calibration_2;

public:
	inline static int32_t get_offset_of_U3CLevelMeterU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54, ___U3CLevelMeterU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CLevelMeterU3Ek__BackingField_0() const { return ___U3CLevelMeterU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CLevelMeterU3Ek__BackingField_0() { return &___U3CLevelMeterU3Ek__BackingField_0; }
	inline void set_U3CLevelMeterU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CLevelMeterU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLevelMeterU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVoiceDetectorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54, ___U3CVoiceDetectorU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CVoiceDetectorU3Ek__BackingField_1() const { return ___U3CVoiceDetectorU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CVoiceDetectorU3Ek__BackingField_1() { return &___U3CVoiceDetectorU3Ek__BackingField_1; }
	inline void set_U3CVoiceDetectorU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CVoiceDetectorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVoiceDetectorU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_calibration_2() { return static_cast<int32_t>(offsetof(VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54, ___calibration_2)); }
	inline VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 * get_calibration_2() const { return ___calibration_2; }
	inline VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 ** get_address_of_calibration_2() { return &___calibration_2; }
	inline void set_calibration_2(VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 * value)
	{
		___calibration_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibration_2), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XDeferredAxis`1<System.Object>
struct XDeferredAxis_1_t579860EE72CB883274B0B5217C39487FA07F073B  : public RuntimeObject
{
public:
	// System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Collections.Generic.IEnumerable`1<T>> MS.Internal.Xml.Linq.ComponentModel.XDeferredAxis`1::func
	Func_3_tF89D1696E961C7EA5D26DEAEDD6A2F37BB5B660A * ___func_0;
	// System.Xml.Linq.XElement MS.Internal.Xml.Linq.ComponentModel.XDeferredAxis`1::element
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___element_1;
	// System.Xml.Linq.XName MS.Internal.Xml.Linq.ComponentModel.XDeferredAxis`1::name
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name_2;

public:
	inline static int32_t get_offset_of_func_0() { return static_cast<int32_t>(offsetof(XDeferredAxis_1_t579860EE72CB883274B0B5217C39487FA07F073B, ___func_0)); }
	inline Func_3_tF89D1696E961C7EA5D26DEAEDD6A2F37BB5B660A * get_func_0() const { return ___func_0; }
	inline Func_3_tF89D1696E961C7EA5D26DEAEDD6A2F37BB5B660A ** get_address_of_func_0() { return &___func_0; }
	inline void set_func_0(Func_3_tF89D1696E961C7EA5D26DEAEDD6A2F37BB5B660A * value)
	{
		___func_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___func_0), (void*)value);
	}

	inline static int32_t get_offset_of_element_1() { return static_cast<int32_t>(offsetof(XDeferredAxis_1_t579860EE72CB883274B0B5217C39487FA07F073B, ___element_1)); }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * get_element_1() const { return ___element_1; }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 ** get_address_of_element_1() { return &___element_1; }
	inline void set_element_1(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * value)
	{
		___element_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___element_1), (void*)value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(XDeferredAxis_1_t579860EE72CB883274B0B5217C39487FA07F073B, ___name_2)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_name_2() const { return ___name_2; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1<System.Object>
struct XDeferredSingleton_1_tB946A0C7BE3A484971FF18BC1C0A2106202C1EC8  : public RuntimeObject
{
public:
	// System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,T> MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1::func
	Func_3_t8AAFC034325BBE5359CC494DBD4E2EB3555037C4 * ___func_0;
	// System.Xml.Linq.XElement MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1::element
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___element_1;
	// System.Xml.Linq.XName MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1::name
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name_2;

public:
	inline static int32_t get_offset_of_func_0() { return static_cast<int32_t>(offsetof(XDeferredSingleton_1_tB946A0C7BE3A484971FF18BC1C0A2106202C1EC8, ___func_0)); }
	inline Func_3_t8AAFC034325BBE5359CC494DBD4E2EB3555037C4 * get_func_0() const { return ___func_0; }
	inline Func_3_t8AAFC034325BBE5359CC494DBD4E2EB3555037C4 ** get_address_of_func_0() { return &___func_0; }
	inline void set_func_0(Func_3_t8AAFC034325BBE5359CC494DBD4E2EB3555037C4 * value)
	{
		___func_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___func_0), (void*)value);
	}

	inline static int32_t get_offset_of_element_1() { return static_cast<int32_t>(offsetof(XDeferredSingleton_1_tB946A0C7BE3A484971FF18BC1C0A2106202C1EC8, ___element_1)); }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * get_element_1() const { return ___element_1; }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 ** get_address_of_element_1() { return &___element_1; }
	inline void set_element_1(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * value)
	{
		___element_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___element_1), (void*)value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(XDeferredSingleton_1_tB946A0C7BE3A484971FF18BC1C0A2106202C1EC8, ___name_2)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_name_2() const { return ___name_2; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}
};


// System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>
struct XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE  : public RuntimeObject
{
public:
	// System.Int32[] System.Xml.Linq.XHashtable`1/XHashtableState::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<TValue>[] System.Xml.Linq.XHashtable`1/XHashtableState::entries
	EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* ___entries_1;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState::numEntries
	int32_t ___numEntries_2;
	// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue> System.Xml.Linq.XHashtable`1/XHashtableState::extractKey
	ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * ___extractKey_3;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE, ___entries_1)); }
	inline EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_numEntries_2() { return static_cast<int32_t>(offsetof(XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE, ___numEntries_2)); }
	inline int32_t get_numEntries_2() const { return ___numEntries_2; }
	inline int32_t* get_address_of_numEntries_2() { return &___numEntries_2; }
	inline void set_numEntries_2(int32_t value)
	{
		___numEntries_2 = value;
	}

	inline static int32_t get_offset_of_extractKey_3() { return static_cast<int32_t>(offsetof(XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE, ___extractKey_3)); }
	inline ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * get_extractKey_3() const { return ___extractKey_3; }
	inline ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 ** get_address_of_extractKey_3() { return &___extractKey_3; }
	inline void set_extractKey_3(ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * value)
	{
		___extractKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extractKey_3), (void*)value);
	}
};


// System.Xml.Linq.XHashtable`1<System.Object>
struct XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37  : public RuntimeObject
{
public:
	// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1::state
	XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37, ___state_0)); }
	inline XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * get_state_0() const { return ___state_0; }
	inline XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE ** get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * value)
	{
		___state_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_0), (void*)value);
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


// System.ComponentModel.CustomTypeDescriptor
struct CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC  : public RuntimeObject
{
public:
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.CustomTypeDescriptor::_parent
	RuntimeObject* ____parent_0;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC, ____parent_0)); }
	inline RuntimeObject* get__parent_0() const { return ____parent_0; }
	inline RuntimeObject** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(RuntimeObject* value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}
};


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


// System.ComponentModel.MemberDescriptor
struct MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.String System.ComponentModel.MemberDescriptor::displayName
	String_t* ___displayName_1;
	// System.Int32 System.ComponentModel.MemberDescriptor::nameHash
	int32_t ___nameHash_2;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attributeCollection
	AttributeCollection_tF551C6836E2C7F849595B7EFAFDDD0C3A86BA62C * ___attributeCollection_3;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attributes
	AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* ___attributes_4;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::originalAttributes
	AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* ___originalAttributes_5;
	// System.Boolean System.ComponentModel.MemberDescriptor::attributesFiltered
	bool ___attributesFiltered_6;
	// System.Boolean System.ComponentModel.MemberDescriptor::attributesFilled
	bool ___attributesFilled_7;
	// System.Int32 System.ComponentModel.MemberDescriptor::metadataVersion
	int32_t ___metadataVersion_8;
	// System.String System.ComponentModel.MemberDescriptor::category
	String_t* ___category_9;
	// System.String System.ComponentModel.MemberDescriptor::description
	String_t* ___description_10;
	// System.Object System.ComponentModel.MemberDescriptor::lockCookie
	RuntimeObject * ___lockCookie_11;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_displayName_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___displayName_1)); }
	inline String_t* get_displayName_1() const { return ___displayName_1; }
	inline String_t** get_address_of_displayName_1() { return &___displayName_1; }
	inline void set_displayName_1(String_t* value)
	{
		___displayName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayName_1), (void*)value);
	}

	inline static int32_t get_offset_of_nameHash_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___nameHash_2)); }
	inline int32_t get_nameHash_2() const { return ___nameHash_2; }
	inline int32_t* get_address_of_nameHash_2() { return &___nameHash_2; }
	inline void set_nameHash_2(int32_t value)
	{
		___nameHash_2 = value;
	}

	inline static int32_t get_offset_of_attributeCollection_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___attributeCollection_3)); }
	inline AttributeCollection_tF551C6836E2C7F849595B7EFAFDDD0C3A86BA62C * get_attributeCollection_3() const { return ___attributeCollection_3; }
	inline AttributeCollection_tF551C6836E2C7F849595B7EFAFDDD0C3A86BA62C ** get_address_of_attributeCollection_3() { return &___attributeCollection_3; }
	inline void set_attributeCollection_3(AttributeCollection_tF551C6836E2C7F849595B7EFAFDDD0C3A86BA62C * value)
	{
		___attributeCollection_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributeCollection_3), (void*)value);
	}

	inline static int32_t get_offset_of_attributes_4() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___attributes_4)); }
	inline AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* get_attributes_4() const { return ___attributes_4; }
	inline AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4** get_address_of_attributes_4() { return &___attributes_4; }
	inline void set_attributes_4(AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* value)
	{
		___attributes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributes_4), (void*)value);
	}

	inline static int32_t get_offset_of_originalAttributes_5() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___originalAttributes_5)); }
	inline AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* get_originalAttributes_5() const { return ___originalAttributes_5; }
	inline AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4** get_address_of_originalAttributes_5() { return &___originalAttributes_5; }
	inline void set_originalAttributes_5(AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* value)
	{
		___originalAttributes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalAttributes_5), (void*)value);
	}

	inline static int32_t get_offset_of_attributesFiltered_6() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___attributesFiltered_6)); }
	inline bool get_attributesFiltered_6() const { return ___attributesFiltered_6; }
	inline bool* get_address_of_attributesFiltered_6() { return &___attributesFiltered_6; }
	inline void set_attributesFiltered_6(bool value)
	{
		___attributesFiltered_6 = value;
	}

	inline static int32_t get_offset_of_attributesFilled_7() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___attributesFilled_7)); }
	inline bool get_attributesFilled_7() const { return ___attributesFilled_7; }
	inline bool* get_address_of_attributesFilled_7() { return &___attributesFilled_7; }
	inline void set_attributesFilled_7(bool value)
	{
		___attributesFilled_7 = value;
	}

	inline static int32_t get_offset_of_metadataVersion_8() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___metadataVersion_8)); }
	inline int32_t get_metadataVersion_8() const { return ___metadataVersion_8; }
	inline int32_t* get_address_of_metadataVersion_8() { return &___metadataVersion_8; }
	inline void set_metadataVersion_8(int32_t value)
	{
		___metadataVersion_8 = value;
	}

	inline static int32_t get_offset_of_category_9() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___category_9)); }
	inline String_t* get_category_9() const { return ___category_9; }
	inline String_t** get_address_of_category_9() { return &___category_9; }
	inline void set_category_9(String_t* value)
	{
		___category_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___category_9), (void*)value);
	}

	inline static int32_t get_offset_of_description_10() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___description_10)); }
	inline String_t* get_description_10() const { return ___description_10; }
	inline String_t** get_address_of_description_10() { return &___description_10; }
	inline void set_description_10(String_t* value)
	{
		___description_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_10), (void*)value);
	}

	inline static int32_t get_offset_of_lockCookie_11() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___lockCookie_11)); }
	inline RuntimeObject * get_lockCookie_11() const { return ___lockCookie_11; }
	inline RuntimeObject ** get_address_of_lockCookie_11() { return &___lockCookie_11; }
	inline void set_lockCookie_11(RuntimeObject * value)
	{
		___lockCookie_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lockCookie_11), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.ComponentModel.PropertyDescriptorCollection::cachedFoundProperties
	RuntimeObject* ___cachedFoundProperties_1;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::cachedIgnoreCase
	bool ___cachedIgnoreCase_2;
	// System.ComponentModel.PropertyDescriptor[] System.ComponentModel.PropertyDescriptorCollection::properties
	PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75* ___properties_3;
	// System.Int32 System.ComponentModel.PropertyDescriptorCollection::propCount
	int32_t ___propCount_4;
	// System.String[] System.ComponentModel.PropertyDescriptorCollection::namedSort
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___namedSort_5;
	// System.Collections.IComparer System.ComponentModel.PropertyDescriptorCollection::comparer
	RuntimeObject* ___comparer_6;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::propsOwned
	bool ___propsOwned_7;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::needSort
	bool ___needSort_8;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::readOnly
	bool ___readOnly_9;

public:
	inline static int32_t get_offset_of_cachedFoundProperties_1() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___cachedFoundProperties_1)); }
	inline RuntimeObject* get_cachedFoundProperties_1() const { return ___cachedFoundProperties_1; }
	inline RuntimeObject** get_address_of_cachedFoundProperties_1() { return &___cachedFoundProperties_1; }
	inline void set_cachedFoundProperties_1(RuntimeObject* value)
	{
		___cachedFoundProperties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedFoundProperties_1), (void*)value);
	}

	inline static int32_t get_offset_of_cachedIgnoreCase_2() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___cachedIgnoreCase_2)); }
	inline bool get_cachedIgnoreCase_2() const { return ___cachedIgnoreCase_2; }
	inline bool* get_address_of_cachedIgnoreCase_2() { return &___cachedIgnoreCase_2; }
	inline void set_cachedIgnoreCase_2(bool value)
	{
		___cachedIgnoreCase_2 = value;
	}

	inline static int32_t get_offset_of_properties_3() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___properties_3)); }
	inline PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75* get_properties_3() const { return ___properties_3; }
	inline PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75** get_address_of_properties_3() { return &___properties_3; }
	inline void set_properties_3(PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75* value)
	{
		___properties_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___properties_3), (void*)value);
	}

	inline static int32_t get_offset_of_propCount_4() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___propCount_4)); }
	inline int32_t get_propCount_4() const { return ___propCount_4; }
	inline int32_t* get_address_of_propCount_4() { return &___propCount_4; }
	inline void set_propCount_4(int32_t value)
	{
		___propCount_4 = value;
	}

	inline static int32_t get_offset_of_namedSort_5() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___namedSort_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_namedSort_5() const { return ___namedSort_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_namedSort_5() { return &___namedSort_5; }
	inline void set_namedSort_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___namedSort_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namedSort_5), (void*)value);
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_propsOwned_7() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___propsOwned_7)); }
	inline bool get_propsOwned_7() const { return ___propsOwned_7; }
	inline bool* get_address_of_propsOwned_7() { return &___propsOwned_7; }
	inline void set_propsOwned_7(bool value)
	{
		___propsOwned_7 = value;
	}

	inline static int32_t get_offset_of_needSort_8() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___needSort_8)); }
	inline bool get_needSort_8() const { return ___needSort_8; }
	inline bool* get_address_of_needSort_8() { return &___needSort_8; }
	inline void set_needSort_8(bool value)
	{
		___needSort_8 = value;
	}

	inline static int32_t get_offset_of_readOnly_9() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___readOnly_9)); }
	inline bool get_readOnly_9() const { return ___readOnly_9; }
	inline bool* get_address_of_readOnly_9() { return &___readOnly_9; }
	inline void set_readOnly_9(bool value)
	{
		___readOnly_9 = value;
	}
};

struct PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F_StaticFields
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection::Empty
	PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F_StaticFields, ___Empty_0)); }
	inline PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * get_Empty_0() const { return ___Empty_0; }
	inline PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
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


// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0  : public RuntimeObject
{
public:
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptionProvider::_parent
	TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * ____parent_0;
	// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::_emptyDescriptor
	EmptyCustomTypeDescriptor_t685EFA12E535D8266F3F878EB5FA7B02BD2630A4 * ____emptyDescriptor_1;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0, ____parent_0)); }
	inline TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * get__parent_0() const { return ____parent_0; }
	inline TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}

	inline static int32_t get_offset_of__emptyDescriptor_1() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0, ____emptyDescriptor_1)); }
	inline EmptyCustomTypeDescriptor_t685EFA12E535D8266F3F878EB5FA7B02BD2630A4 * get__emptyDescriptor_1() const { return ____emptyDescriptor_1; }
	inline EmptyCustomTypeDescriptor_t685EFA12E535D8266F3F878EB5FA7B02BD2630A4 ** get_address_of__emptyDescriptor_1() { return &____emptyDescriptor_1; }
	inline void set__emptyDescriptor_1(EmptyCustomTypeDescriptor_t685EFA12E535D8266F3F878EB5FA7B02BD2630A4 * value)
	{
		____emptyDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyDescriptor_1), (void*)value);
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

// System.Xml.Linq.XName
struct XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956  : public RuntimeObject
{
public:
	// System.Xml.Linq.XNamespace System.Xml.Linq.XName::ns
	XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * ___ns_0;
	// System.String System.Xml.Linq.XName::localName
	String_t* ___localName_1;
	// System.Int32 System.Xml.Linq.XName::hashCode
	int32_t ___hashCode_2;

public:
	inline static int32_t get_offset_of_ns_0() { return static_cast<int32_t>(offsetof(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956, ___ns_0)); }
	inline XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * get_ns_0() const { return ___ns_0; }
	inline XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 ** get_address_of_ns_0() { return &___ns_0; }
	inline void set_ns_0(XNamespace_t3A3A936B27B611FC80018B6964914C8AF6F8A2E7 * value)
	{
		___ns_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ns_0), (void*)value);
	}

	inline static int32_t get_offset_of_localName_1() { return static_cast<int32_t>(offsetof(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956, ___localName_1)); }
	inline String_t* get_localName_1() const { return ___localName_1; }
	inline String_t** get_address_of_localName_1() { return &___localName_1; }
	inline void set_localName_1(String_t* value)
	{
		___localName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localName_1), (void*)value);
	}

	inline static int32_t get_offset_of_hashCode_2() { return static_cast<int32_t>(offsetof(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956, ___hashCode_2)); }
	inline int32_t get_hashCode_2() const { return ___hashCode_2; }
	inline int32_t* get_address_of_hashCode_2() { return &___hashCode_2; }
	inline void set_hashCode_2(int32_t value)
	{
		___hashCode_2 = value;
	}
};


// System.Xml.Linq.XObject
struct XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6  : public RuntimeObject
{
public:
	// System.Xml.Linq.XContainer System.Xml.Linq.XObject::parent
	XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * ___parent_0;
	// System.Object System.Xml.Linq.XObject::annotations
	RuntimeObject * ___annotations_1;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6, ___parent_0)); }
	inline XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * get_parent_0() const { return ___parent_0; }
	inline XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_annotations_1() { return static_cast<int32_t>(offsetof(XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6, ___annotations_1)); }
	inline RuntimeObject * get_annotations_1() const { return ___annotations_1; }
	inline RuntimeObject ** get_address_of_annotations_1() { return &___annotations_1; }
	inline void set_annotations_1(RuntimeObject * value)
	{
		___annotations_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___annotations_1), (void*)value);
	}
};


// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>
struct Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94 
{
public:
	// TValue System.Xml.Linq.XHashtable`1/XHashtableState/Entry::Value
	RuntimeObject * ___Value_0;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState/Entry::HashCode
	int32_t ___HashCode_1;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState/Entry::Next
	int32_t ___Next_2;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94, ___Value_0)); }
	inline RuntimeObject * get_Value_0() const { return ___Value_0; }
	inline RuntimeObject ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(RuntimeObject * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}

	inline static int32_t get_offset_of_HashCode_1() { return static_cast<int32_t>(offsetof(Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94, ___HashCode_1)); }
	inline int32_t get_HashCode_1() const { return ___HashCode_1; }
	inline int32_t* get_address_of_HashCode_1() { return &___HashCode_1; }
	inline void set_HashCode_1(int32_t value)
	{
		___HashCode_1 = value;
	}

	inline static int32_t get_offset_of_Next_2() { return static_cast<int32_t>(offsetof(Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94, ___Next_2)); }
	inline int32_t get_Next_2() const { return ___Next_2; }
	inline int32_t* get_address_of_Next_2() { return &___Next_2; }
	inline void set_Next_2(int32_t value)
	{
		___Next_2 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Int16>
struct Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t985353431229C8151763A38589D03FBD829D85E5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int16_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813, ___list_0)); }
	inline List_1_t985353431229C8151763A38589D03FBD829D85E5 * get_list_0() const { return ___list_0; }
	inline List_1_t985353431229C8151763A38589D03FBD829D85E5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t985353431229C8151763A38589D03FBD829D85E5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813, ___current_3)); }
	inline int16_t get_current_3() const { return ___current_3; }
	inline int16_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int16_t value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___list_0)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_list_0() const { return ___list_0; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 
{
public:
	// T1 System.ValueTuple`5::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`5::Item2
	RuntimeObject * ___Item2_1;
	// T3 System.ValueTuple`5::Item3
	RuntimeObject * ___Item3_2;
	// T4 System.ValueTuple`5::Item4
	RuntimeObject * ___Item4_3;
	// T5 System.ValueTuple`5::Item5
	RuntimeObject * ___Item5_4;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701, ___Item2_1)); }
	inline RuntimeObject * get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_Item3_2() { return static_cast<int32_t>(offsetof(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701, ___Item3_2)); }
	inline RuntimeObject * get_Item3_2() const { return ___Item3_2; }
	inline RuntimeObject ** get_address_of_Item3_2() { return &___Item3_2; }
	inline void set_Item3_2(RuntimeObject * value)
	{
		___Item3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item3_2), (void*)value);
	}

	inline static int32_t get_offset_of_Item4_3() { return static_cast<int32_t>(offsetof(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701, ___Item4_3)); }
	inline RuntimeObject * get_Item4_3() const { return ___Item4_3; }
	inline RuntimeObject ** get_address_of_Item4_3() { return &___Item4_3; }
	inline void set_Item4_3(RuntimeObject * value)
	{
		___Item4_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item4_3), (void*)value);
	}

	inline static int32_t get_offset_of_Item5_4() { return static_cast<int32_t>(offsetof(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701, ___Item5_4)); }
	inline RuntimeObject * get_Item5_4() const { return ___Item5_4; }
	inline RuntimeObject ** get_address_of_Item5_4() { return &___Item5_4; }
	inline void set_Item5_4(RuntimeObject * value)
	{
		___Item5_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item5_4), (void*)value);
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int16>
struct WhereEnumerableIterator_1_tCA508E67A7F0F9D88916DAA9C6CDE55E4AA6F666  : public Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tCA508E67A7F0F9D88916DAA9C6CDE55E4AA6F666, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tCA508E67A7F0F9D88916DAA9C6CDE55E4AA6F666, ___predicate_4)); }
	inline Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tCA508E67A7F0F9D88916DAA9C6CDE55E4AA6F666, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>
struct WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D, ___source_3)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D, ___selector_5)); }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * get_selector_5() const { return ___selector_5; }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int16,System.Int16>
struct WhereSelectArrayIterator_2_t715FB6279FFB5ABD9697099DBFF0EF05F5B3906E  : public Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t715FB6279FFB5ABD9697099DBFF0EF05F5B3906E, ___source_3)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_source_3() const { return ___source_3; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t715FB6279FFB5ABD9697099DBFF0EF05F5B3906E, ___predicate_4)); }
	inline Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t715FB6279FFB5ABD9697099DBFF0EF05F5B3906E, ___selector_5)); }
	inline Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * get_selector_5() const { return ___selector_5; }
	inline Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t715FB6279FFB5ABD9697099DBFF0EF05F5B3906E, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Int32>
struct WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C, ___source_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_source_3() const { return ___source_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C, ___selector_5)); }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505, ___selector_5)); }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * get_selector_5() const { return ___selector_5; }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int16,System.Int16>
struct WhereSelectEnumerableIterator_2_tA9CF203B0187CB8B2E0EA33761936A7F2049E894  : public Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA9CF203B0187CB8B2E0EA33761936A7F2049E894, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA9CF203B0187CB8B2E0EA33761936A7F2049E894, ___predicate_4)); }
	inline Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA9CF203B0187CB8B2E0EA33761936A7F2049E894, ___selector_5)); }
	inline Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * get_selector_5() const { return ___selector_5; }
	inline Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA9CF203B0187CB8B2E0EA33761936A7F2049E894, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>
struct WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF, ___selector_5)); }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptionProvider`1<System.Object>
struct XTypeDescriptionProvider_1_t3E70768CA58B1E0422A52E2D980397207AEC99DB  : public TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0
{
public:

public:
};


// MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptor`1<System.Object>
struct XTypeDescriptor_1_t8B5AE52536B37FAED17586280E80319C8E7D2B68  : public CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC
{
public:

public:
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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


// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B  : public MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F
{
public:
	// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::converter
	TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * ___converter_12;
	// System.Collections.Hashtable System.ComponentModel.PropertyDescriptor::valueChangedHandlers
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___valueChangedHandlers_13;
	// System.Object[] System.ComponentModel.PropertyDescriptor::editors
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___editors_14;
	// System.Type[] System.ComponentModel.PropertyDescriptor::editorTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___editorTypes_15;
	// System.Int32 System.ComponentModel.PropertyDescriptor::editorCount
	int32_t ___editorCount_16;

public:
	inline static int32_t get_offset_of_converter_12() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B, ___converter_12)); }
	inline TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * get_converter_12() const { return ___converter_12; }
	inline TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 ** get_address_of_converter_12() { return &___converter_12; }
	inline void set_converter_12(TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * value)
	{
		___converter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___converter_12), (void*)value);
	}

	inline static int32_t get_offset_of_valueChangedHandlers_13() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B, ___valueChangedHandlers_13)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_valueChangedHandlers_13() const { return ___valueChangedHandlers_13; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_valueChangedHandlers_13() { return &___valueChangedHandlers_13; }
	inline void set_valueChangedHandlers_13(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___valueChangedHandlers_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueChangedHandlers_13), (void*)value);
	}

	inline static int32_t get_offset_of_editors_14() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B, ___editors_14)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_editors_14() const { return ___editors_14; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_editors_14() { return &___editors_14; }
	inline void set_editors_14(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___editors_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___editors_14), (void*)value);
	}

	inline static int32_t get_offset_of_editorTypes_15() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B, ___editorTypes_15)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_editorTypes_15() const { return ___editorTypes_15; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_editorTypes_15() { return &___editorTypes_15; }
	inline void set_editorTypes_15(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___editorTypes_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___editorTypes_15), (void*)value);
	}

	inline static int32_t get_offset_of_editorCount_16() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B, ___editorCount_16)); }
	inline int32_t get_editorCount_16() const { return ___editorCount_16; }
	inline int32_t* get_address_of_editorCount_16() { return &___editorCount_16; }
	inline void set_editorCount_16(int32_t value)
	{
		___editorCount_16 = value;
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


// System.Xml.Linq.XNode
struct XNode_tB88EE59443DF799686825ED2168D47C857C8CA99  : public XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6
{
public:
	// System.Xml.Linq.XNode System.Xml.Linq.XNode::next
	XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * ___next_2;

public:
	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99, ___next_2)); }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * get_next_2() const { return ___next_2; }
	inline XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(XNode_tB88EE59443DF799686825ED2168D47C857C8CA99 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_2), (void*)value);
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


// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___list_0)); }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * get_list_0() const { return ___list_0; }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>
struct Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995, ___list_0)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_list_0() const { return ___list_0; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995, ___current_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_current_3() const { return ___current_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector4>
struct Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781, ___list_0)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_list_0() const { return ___list_0; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781, ___current_3)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_current_3() const { return ___current_3; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___current_3 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>
struct Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF, ___current_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_current_2() const { return ___current_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>
struct Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F, ___current_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_current_2() const { return ___current_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___current_2 = value;
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


// Photon.Voice.AudioUtil/VoiceDetector`1<System.Object>
struct VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3  : public RuntimeObject
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
	inline static int32_t get_offset_of_U3COnU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3, ___U3COnU3Ek__BackingField_0)); }
	inline bool get_U3COnU3Ek__BackingField_0() const { return ___U3COnU3Ek__BackingField_0; }
	inline bool* get_address_of_U3COnU3Ek__BackingField_0() { return &___U3COnU3Ek__BackingField_0; }
	inline void set_U3COnU3Ek__BackingField_0(bool value)
	{
		___U3COnU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_norm_1() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3, ___norm_1)); }
	inline float get_norm_1() const { return ___norm_1; }
	inline float* get_address_of_norm_1() { return &___norm_1; }
	inline void set_norm_1(float value)
	{
		___norm_1 = value;
	}

	inline static int32_t get_offset_of_threshold_2() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3, ___threshold_2)); }
	inline float get_threshold_2() const { return ___threshold_2; }
	inline float* get_address_of_threshold_2() { return &___threshold_2; }
	inline void set_threshold_2(float value)
	{
		___threshold_2 = value;
	}

	inline static int32_t get_offset_of_detected_3() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3, ___detected_3)); }
	inline bool get_detected_3() const { return ___detected_3; }
	inline bool* get_address_of_detected_3() { return &___detected_3; }
	inline void set_detected_3(bool value)
	{
		___detected_3 = value;
	}

	inline static int32_t get_offset_of_U3CDetectedTimeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3, ___U3CDetectedTimeU3Ek__BackingField_4)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CDetectedTimeU3Ek__BackingField_4() const { return ___U3CDetectedTimeU3Ek__BackingField_4; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CDetectedTimeU3Ek__BackingField_4() { return &___U3CDetectedTimeU3Ek__BackingField_4; }
	inline void set_U3CDetectedTimeU3Ek__BackingField_4(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CDetectedTimeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_OnDetected_5() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3, ___OnDetected_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnDetected_5() const { return ___OnDetected_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnDetected_5() { return &___OnDetected_5; }
	inline void set_OnDetected_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnDetected_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDetected_5), (void*)value);
	}

	inline static int32_t get_offset_of_activityDelay_6() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3, ___activityDelay_6)); }
	inline int32_t get_activityDelay_6() const { return ___activityDelay_6; }
	inline int32_t* get_address_of_activityDelay_6() { return &___activityDelay_6; }
	inline void set_activityDelay_6(int32_t value)
	{
		___activityDelay_6 = value;
	}

	inline static int32_t get_offset_of_autoSilenceCounter_7() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3, ___autoSilenceCounter_7)); }
	inline int32_t get_autoSilenceCounter_7() const { return ___autoSilenceCounter_7; }
	inline int32_t* get_address_of_autoSilenceCounter_7() { return &___autoSilenceCounter_7; }
	inline void set_autoSilenceCounter_7(int32_t value)
	{
		___autoSilenceCounter_7 = value;
	}

	inline static int32_t get_offset_of_valuesCountPerSec_8() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3, ___valuesCountPerSec_8)); }
	inline int32_t get_valuesCountPerSec_8() const { return ___valuesCountPerSec_8; }
	inline int32_t* get_address_of_valuesCountPerSec_8() { return &___valuesCountPerSec_8; }
	inline void set_valuesCountPerSec_8(int32_t value)
	{
		___valuesCountPerSec_8 = value;
	}

	inline static int32_t get_offset_of_activityDelayValuesCount_9() { return static_cast<int32_t>(offsetof(VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3, ___activityDelayValuesCount_9)); }
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


// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___enumerator_5)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int16,System.Int16>
struct WhereSelectListIterator_2_t8ACB1E9FD1514AD3F4E194D5E7600F4533E014B4  : public Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t985353431229C8151763A38589D03FBD829D85E5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t8ACB1E9FD1514AD3F4E194D5E7600F4533E014B4, ___source_3)); }
	inline List_1_t985353431229C8151763A38589D03FBD829D85E5 * get_source_3() const { return ___source_3; }
	inline List_1_t985353431229C8151763A38589D03FBD829D85E5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t985353431229C8151763A38589D03FBD829D85E5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t8ACB1E9FD1514AD3F4E194D5E7600F4533E014B4, ___predicate_4)); }
	inline Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t8ACB1E9FD1514AD3F4E194D5E7600F4533E014B4, ___selector_5)); }
	inline Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * get_selector_5() const { return ___selector_5; }
	inline Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t8ACB1E9FD1514AD3F4E194D5E7600F4533E014B4, ___enumerator_6)); }
	inline Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>
struct WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325, ___source_3)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_source_3() const { return ___source_3; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325, ___selector_5)); }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325, ___enumerator_6)); }
	inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Object,System.Object>
struct XPropertyDescriptor_2_t01C06B58C295272B0A9A00B6C0790CA126B0AAEA  : public PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B
{
public:

public:
};


// MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Xml.Linq.XAttribute,System.String>
struct XPropertyDescriptor_2_t5BD42DA9A7C3AD4D0C490AA8369BBBC8501F75A6  : public PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B
{
public:

public:
};


// MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Xml.Linq.XElement,System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement>>
struct XPropertyDescriptor_2_tE396AEA8421C6F394CAE7E75CC2A6E4E84D8CA72  : public PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B
{
public:

public:
};


// MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Xml.Linq.XElement,System.Object>
struct XPropertyDescriptor_2_t518476A842EA5EB8FEEC6057D818BDAE7441E2B2  : public PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B
{
public:

public:
};


// MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Xml.Linq.XElement,System.String>
struct XPropertyDescriptor_2_tBE7145AD65B0D7CC4AAC61D812C87BABA3893ADF  : public PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B
{
public:

public:
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


// System.Xml.Linq.XContainer
struct XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525  : public XNode_tB88EE59443DF799686825ED2168D47C857C8CA99
{
public:
	// System.Object System.Xml.Linq.XContainer::content
	RuntimeObject * ___content_3;

public:
	inline static int32_t get_offset_of_content_3() { return static_cast<int32_t>(offsetof(XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525, ___content_3)); }
	inline RuntimeObject * get_content_3() const { return ___content_3; }
	inline RuntimeObject ** get_address_of_content_3() { return &___content_3; }
	inline void set_content_3(RuntimeObject * value)
	{
		___content_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___content_3), (void*)value);
	}
};


// System.Xml.Linq.XObjectChange
struct XObjectChange_tC48AC7229454DAB624E924DE01433C8F4CC6BBDE 
{
public:
	// System.Int32 System.Xml.Linq.XObjectChange::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XObjectChange_tC48AC7229454DAB624E924DE01433C8F4CC6BBDE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>
struct WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8  : public Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8, ___predicate_4)); }
	inline Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector4>
struct WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E  : public Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E, ___predicate_4)); }
	inline Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct WhereSelectArrayIterator_2_t24DAF3FD3D83CD879E4F074D65CFAA4A9B39B26B  : public Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t24DAF3FD3D83CD879E4F074D65CFAA4A9B39B26B, ___source_3)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_source_3() const { return ___source_3; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t24DAF3FD3D83CD879E4F074D65CFAA4A9B39B26B, ___predicate_4)); }
	inline Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t24DAF3FD3D83CD879E4F074D65CFAA4A9B39B26B, ___selector_5)); }
	inline Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t24DAF3FD3D83CD879E4F074D65CFAA4A9B39B26B, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Vector4,UnityEngine.Vector4>
struct WhereSelectArrayIterator_2_t001A753C631DF1C20F92EEB0BB9DACBBEB2E3D17  : public Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t001A753C631DF1C20F92EEB0BB9DACBBEB2E3D17, ___source_3)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_source_3() const { return ___source_3; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t001A753C631DF1C20F92EEB0BB9DACBBEB2E3D17, ___predicate_4)); }
	inline Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t001A753C631DF1C20F92EEB0BB9DACBBEB2E3D17, ___selector_5)); }
	inline Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t001A753C631DF1C20F92EEB0BB9DACBBEB2E3D17, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct WhereSelectEnumerableIterator_2_tA09EBC9BF1813566F035DFC8B7FC004BBEA4C3C0  : public Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA09EBC9BF1813566F035DFC8B7FC004BBEA4C3C0, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA09EBC9BF1813566F035DFC8B7FC004BBEA4C3C0, ___predicate_4)); }
	inline Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA09EBC9BF1813566F035DFC8B7FC004BBEA4C3C0, ___selector_5)); }
	inline Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA09EBC9BF1813566F035DFC8B7FC004BBEA4C3C0, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector4,UnityEngine.Vector4>
struct WhereSelectEnumerableIterator_2_tC1CC19A0F9ED270F282DF86D7C56F9FAE964E6DE  : public Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tC1CC19A0F9ED270F282DF86D7C56F9FAE964E6DE, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tC1CC19A0F9ED270F282DF86D7C56F9FAE964E6DE, ___predicate_4)); }
	inline Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tC1CC19A0F9ED270F282DF86D7C56F9FAE964E6DE, ___selector_5)); }
	inline Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tC1CC19A0F9ED270F282DF86D7C56F9FAE964E6DE, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529, ___source_3)); }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * get_source_3() const { return ___source_3; }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529, ___selector_5)); }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * get_selector_5() const { return ___selector_5; }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529, ___enumerator_6)); }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct WhereSelectListIterator_2_tFC94707EF3202EDF8F9A7FA62950623145D647B8  : public Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tFC94707EF3202EDF8F9A7FA62950623145D647B8, ___source_3)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_source_3() const { return ___source_3; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tFC94707EF3202EDF8F9A7FA62950623145D647B8, ___predicate_4)); }
	inline Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tFC94707EF3202EDF8F9A7FA62950623145D647B8, ___selector_5)); }
	inline Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tFC94707EF3202EDF8F9A7FA62950623145D647B8, ___enumerator_6)); }
	inline Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector4,UnityEngine.Vector4>
struct WhereSelectListIterator_2_t73FD5DF7B320D5154C368D51D5ADA4EB669CDF09  : public Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t73FD5DF7B320D5154C368D51D5ADA4EB669CDF09, ___source_3)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_source_3() const { return ___source_3; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t73FD5DF7B320D5154C368D51D5ADA4EB669CDF09, ___predicate_4)); }
	inline Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t73FD5DF7B320D5154C368D51D5ADA4EB669CDF09, ___selector_5)); }
	inline Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t73FD5DF7B320D5154C368D51D5ADA4EB669CDF09, ___enumerator_6)); }
	inline Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
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


// MS.Internal.Xml.Linq.ComponentModel.XAttributeValuePropertyDescriptor
struct XAttributeValuePropertyDescriptor_tC5B11D2983357281D81E15BE00D30EFB16D4E1FB  : public XPropertyDescriptor_2_t5BD42DA9A7C3AD4D0C490AA8369BBBC8501F75A6
{
public:
	// System.Xml.Linq.XAttribute MS.Internal.Xml.Linq.ComponentModel.XAttributeValuePropertyDescriptor::attribute
	XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * ___attribute_17;

public:
	inline static int32_t get_offset_of_attribute_17() { return static_cast<int32_t>(offsetof(XAttributeValuePropertyDescriptor_tC5B11D2983357281D81E15BE00D30EFB16D4E1FB, ___attribute_17)); }
	inline XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * get_attribute_17() const { return ___attribute_17; }
	inline XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 ** get_address_of_attribute_17() { return &___attribute_17; }
	inline void set_attribute_17(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * value)
	{
		___attribute_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attribute_17), (void*)value);
	}
};


// System.Xml.Linq.XElement
struct XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5  : public XContainer_t195526C99472280E1DE55FCBAF9060CD9DE37525
{
public:
	// System.Xml.Linq.XName System.Xml.Linq.XElement::name
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name_5;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::lastAttr
	XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * ___lastAttr_6;

public:
	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5, ___name_5)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_name_5() const { return ___name_5; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_5), (void*)value);
	}

	inline static int32_t get_offset_of_lastAttr_6() { return static_cast<int32_t>(offsetof(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5, ___lastAttr_6)); }
	inline XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * get_lastAttr_6() const { return ___lastAttr_6; }
	inline XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 ** get_address_of_lastAttr_6() { return &___lastAttr_6; }
	inline void set_lastAttr_6(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * value)
	{
		___lastAttr_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastAttr_6), (void*)value);
	}
};

struct XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_StaticFields
{
public:
	// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XElement::emptySequence
	RuntimeObject* ___emptySequence_4;

public:
	inline static int32_t get_offset_of_emptySequence_4() { return static_cast<int32_t>(offsetof(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_StaticFields, ___emptySequence_4)); }
	inline RuntimeObject* get_emptySequence_4() const { return ___emptySequence_4; }
	inline RuntimeObject** get_address_of_emptySequence_4() { return &___emptySequence_4; }
	inline void set_emptySequence_4(RuntimeObject* value)
	{
		___emptySequence_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptySequence_4), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor
struct XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73  : public XPropertyDescriptor_2_t518476A842EA5EB8FEEC6057D818BDAE7441E2B2
{
public:
	// MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1<System.Xml.Linq.XAttribute> MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor::value
	XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C * ___value_17;
	// System.Xml.Linq.XAttribute MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor::changeState
	XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * ___changeState_18;

public:
	inline static int32_t get_offset_of_value_17() { return static_cast<int32_t>(offsetof(XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73, ___value_17)); }
	inline XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C * get_value_17() const { return ___value_17; }
	inline XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C ** get_address_of_value_17() { return &___value_17; }
	inline void set_value_17(XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C * value)
	{
		___value_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_17), (void*)value);
	}

	inline static int32_t get_offset_of_changeState_18() { return static_cast<int32_t>(offsetof(XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73, ___changeState_18)); }
	inline XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * get_changeState_18() const { return ___changeState_18; }
	inline XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 ** get_address_of_changeState_18() { return &___changeState_18; }
	inline void set_changeState_18(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * value)
	{
		___changeState_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changeState_18), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XElementDescendantsPropertyDescriptor
struct XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959  : public XPropertyDescriptor_2_tE396AEA8421C6F394CAE7E75CC2A6E4E84D8CA72
{
public:
	// MS.Internal.Xml.Linq.ComponentModel.XDeferredAxis`1<System.Xml.Linq.XElement> MS.Internal.Xml.Linq.ComponentModel.XElementDescendantsPropertyDescriptor::value
	XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * ___value_17;
	// System.Xml.Linq.XName MS.Internal.Xml.Linq.ComponentModel.XElementDescendantsPropertyDescriptor::changeState
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___changeState_18;

public:
	inline static int32_t get_offset_of_value_17() { return static_cast<int32_t>(offsetof(XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959, ___value_17)); }
	inline XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * get_value_17() const { return ___value_17; }
	inline XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 ** get_address_of_value_17() { return &___value_17; }
	inline void set_value_17(XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * value)
	{
		___value_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_17), (void*)value);
	}

	inline static int32_t get_offset_of_changeState_18() { return static_cast<int32_t>(offsetof(XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959, ___changeState_18)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_changeState_18() const { return ___changeState_18; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_changeState_18() { return &___changeState_18; }
	inline void set_changeState_18(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___changeState_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changeState_18), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XElementElementPropertyDescriptor
struct XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818  : public XPropertyDescriptor_2_t518476A842EA5EB8FEEC6057D818BDAE7441E2B2
{
public:
	// MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1<System.Xml.Linq.XElement> MS.Internal.Xml.Linq.ComponentModel.XElementElementPropertyDescriptor::value
	XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053 * ___value_17;
	// System.Xml.Linq.XElement MS.Internal.Xml.Linq.ComponentModel.XElementElementPropertyDescriptor::changeState
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___changeState_18;

public:
	inline static int32_t get_offset_of_value_17() { return static_cast<int32_t>(offsetof(XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818, ___value_17)); }
	inline XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053 * get_value_17() const { return ___value_17; }
	inline XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053 ** get_address_of_value_17() { return &___value_17; }
	inline void set_value_17(XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053 * value)
	{
		___value_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_17), (void*)value);
	}

	inline static int32_t get_offset_of_changeState_18() { return static_cast<int32_t>(offsetof(XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818, ___changeState_18)); }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * get_changeState_18() const { return ___changeState_18; }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 ** get_address_of_changeState_18() { return &___changeState_18; }
	inline void set_changeState_18(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * value)
	{
		___changeState_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changeState_18), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XElementElementsPropertyDescriptor
struct XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6  : public XPropertyDescriptor_2_tE396AEA8421C6F394CAE7E75CC2A6E4E84D8CA72
{
public:
	// MS.Internal.Xml.Linq.ComponentModel.XDeferredAxis`1<System.Xml.Linq.XElement> MS.Internal.Xml.Linq.ComponentModel.XElementElementsPropertyDescriptor::value
	XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * ___value_17;
	// System.Object MS.Internal.Xml.Linq.ComponentModel.XElementElementsPropertyDescriptor::changeState
	RuntimeObject * ___changeState_18;

public:
	inline static int32_t get_offset_of_value_17() { return static_cast<int32_t>(offsetof(XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6, ___value_17)); }
	inline XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * get_value_17() const { return ___value_17; }
	inline XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 ** get_address_of_value_17() { return &___value_17; }
	inline void set_value_17(XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * value)
	{
		___value_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_17), (void*)value);
	}

	inline static int32_t get_offset_of_changeState_18() { return static_cast<int32_t>(offsetof(XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6, ___changeState_18)); }
	inline RuntimeObject * get_changeState_18() const { return ___changeState_18; }
	inline RuntimeObject ** get_address_of_changeState_18() { return &___changeState_18; }
	inline void set_changeState_18(RuntimeObject * value)
	{
		___changeState_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changeState_18), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XElementValuePropertyDescriptor
struct XElementValuePropertyDescriptor_tA4ABC94A15EC3C3758364365CA8BB54449B5656F  : public XPropertyDescriptor_2_tBE7145AD65B0D7CC4AAC61D812C87BABA3893ADF
{
public:
	// System.Xml.Linq.XElement MS.Internal.Xml.Linq.ComponentModel.XElementValuePropertyDescriptor::element
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___element_17;

public:
	inline static int32_t get_offset_of_element_17() { return static_cast<int32_t>(offsetof(XElementValuePropertyDescriptor_tA4ABC94A15EC3C3758364365CA8BB54449B5656F, ___element_17)); }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * get_element_17() const { return ___element_17; }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 ** get_address_of_element_17() { return &___element_17; }
	inline void set_element_17(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * value)
	{
		___element_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___element_17), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XElementXmlPropertyDescriptor
struct XElementXmlPropertyDescriptor_tD87FB80863A3CB334BD49862FBD0C300BCE47DB9  : public XPropertyDescriptor_2_tBE7145AD65B0D7CC4AAC61D812C87BABA3893ADF
{
public:
	// System.Xml.Linq.XElement MS.Internal.Xml.Linq.ComponentModel.XElementXmlPropertyDescriptor::element
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___element_17;

public:
	inline static int32_t get_offset_of_element_17() { return static_cast<int32_t>(offsetof(XElementXmlPropertyDescriptor_tD87FB80863A3CB334BD49862FBD0C300BCE47DB9, ___element_17)); }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * get_element_17() const { return ___element_17; }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 ** get_address_of_element_17() { return &___element_17; }
	inline void set_element_17(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * value)
	{
		___element_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___element_17), (void*)value);
	}
};


// System.Xml.Linq.XObjectChangeEventArgs
struct XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.Xml.Linq.XObjectChange System.Xml.Linq.XObjectChangeEventArgs::objectChange
	int32_t ___objectChange_1;

public:
	inline static int32_t get_offset_of_objectChange_1() { return static_cast<int32_t>(offsetof(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352, ___objectChange_1)); }
	inline int32_t get_objectChange_1() const { return ___objectChange_1; }
	inline int32_t* get_address_of_objectChange_1() { return &___objectChange_1; }
	inline void set_objectChange_1(int32_t value)
	{
		___objectChange_1 = value;
	}
};

struct XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields
{
public:
	// System.Xml.Linq.XObjectChangeEventArgs System.Xml.Linq.XObjectChangeEventArgs::Add
	XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * ___Add_2;
	// System.Xml.Linq.XObjectChangeEventArgs System.Xml.Linq.XObjectChangeEventArgs::Remove
	XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * ___Remove_3;
	// System.Xml.Linq.XObjectChangeEventArgs System.Xml.Linq.XObjectChangeEventArgs::Name
	XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * ___Name_4;
	// System.Xml.Linq.XObjectChangeEventArgs System.Xml.Linq.XObjectChangeEventArgs::Value
	XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * ___Value_5;

public:
	inline static int32_t get_offset_of_Add_2() { return static_cast<int32_t>(offsetof(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields, ___Add_2)); }
	inline XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * get_Add_2() const { return ___Add_2; }
	inline XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 ** get_address_of_Add_2() { return &___Add_2; }
	inline void set_Add_2(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * value)
	{
		___Add_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Add_2), (void*)value);
	}

	inline static int32_t get_offset_of_Remove_3() { return static_cast<int32_t>(offsetof(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields, ___Remove_3)); }
	inline XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * get_Remove_3() const { return ___Remove_3; }
	inline XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 ** get_address_of_Remove_3() { return &___Remove_3; }
	inline void set_Remove_3(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * value)
	{
		___Remove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Remove_3), (void*)value);
	}

	inline static int32_t get_offset_of_Name_4() { return static_cast<int32_t>(offsetof(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields, ___Name_4)); }
	inline XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * get_Name_4() const { return ___Name_4; }
	inline XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 ** get_address_of_Name_4() { return &___Name_4; }
	inline void set_Name_4(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * value)
	{
		___Name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_4), (void*)value);
	}

	inline static int32_t get_offset_of_Value_5() { return static_cast<int32_t>(offsetof(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352_StaticFields, ___Value_5)); }
	inline XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * get_Value_5() const { return ___Value_5; }
	inline XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 ** get_address_of_Value_5() { return &___Value_5; }
	inline void set_Value_5(XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * value)
	{
		___Value_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_5), (void*)value);
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


// System.Action`1<System.Single>
struct Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<System.Xml.Linq.XObjectChangeEventArgs>
struct EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4  : public MulticastDelegate_t
{
public:

public:
};


// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>
struct ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int16,System.Boolean>
struct Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int16,System.Int16>
struct Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32,System.Int32>
struct Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Vector3,System.Boolean>
struct Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Vector4,System.Boolean>
struct Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Vector4,UnityEngine.Vector4>
struct Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Collections.Generic.IEnumerable`1<System.Object>>
struct Func_3_tF89D1696E961C7EA5D26DEAEDD6A2F37BB5B660A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Object>
struct Func_3_t8AAFC034325BBE5359CC494DBD4E2EB3555037C4  : public MulticastDelegate_t
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


// System.ArithmeticException
struct ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.OverflowException
struct OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9  : public ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  m_Items[1];

public:
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  m_Items[1];

public:
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		m_Items[index] = value;
	}
};
// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>[]
struct EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94  m_Items[1];

public:
	inline Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_0), (void*)NULL);
	}
	inline Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_0), (void*)NULL);
	}
};
// System.Attribute[]
struct AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * m_Items[1];

public:
	inline Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.ComponentModel.PropertyDescriptor[]
struct PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * m_Items[1];

public:
	inline PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.String System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Single>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_gshared (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * __this, float ___obj0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_gshared_inline (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67_gshared (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int16>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t Enumerator_get_Current_mAE16C5472096C2336079B2487034152D64054833_gshared_inline (Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int16>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9CEA6A4E0A1CC86075937DCECD5E148265615A5A_gshared (Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_gshared_inline (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9FB106B6D83E0AEA63A4ADE22BC85158FCB05735_gshared (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector4>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Enumerator_get_Current_m32439407464C10970CC963587D0D2E0DD861ED9B_gshared_inline (Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector4>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF378337D9CA43F03755456627ECC0436E94A8B9C_gshared (Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Void System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4,T5)
inline void ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8_gshared)(__this, ___item10, ___item21, ___item32, ___item43, ___item54, method);
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.ValueTuple`5<T1,T2,T3,T4,T5>)
inline bool ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 , const RuntimeMethod*))ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1_gshared)(__this, ___other0, method);
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
inline bool ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E_gshared)(__this, ___obj0, method);
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
inline bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8 (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5>)
inline int32_t ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 , const RuntimeMethod*))ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
inline int32_t ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
inline int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple::CombineHashCodes(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m3F9A61D754020CB9186BA94BFD3A084725C34705 (int32_t ___h10, int32_t ___h21, int32_t ___h32, int32_t ___h43, int32_t ___h54, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCode()
inline int32_t ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, const RuntimeMethod*))ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9_gshared)(__this, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE_gshared)(__this, ___comparer0, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349_gshared)(__this, ___comparer0, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::ToString()
inline String_t* ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, const RuntimeMethod*))ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Single>::Invoke(!0)
inline void Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * __this, float ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *, float, const RuntimeMethod*))Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_gshared)(__this, ___obj0, method);
}
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void Photon.Voice.AudioUtil/LevelMeterFloat::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelMeterFloat__ctor_m06C495B6C05BE604DA7A76C310B1A8B77E2B6CE6 (LevelMeterFloat_t760D3DBB26D5D489891946710E1711FF9A262455 * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const RuntimeMethod* method);
// System.Void Photon.Voice.AudioUtil/VoiceDetectorFloat::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetectorFloat__ctor_mE328ED87C122A1B0B6EABF6701CF315212D8ADE3 (VoiceDetectorFloat_t07D26837C6B174754CB59564212B09934653EEFD * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const RuntimeMethod* method);
// System.Void Photon.Voice.AudioUtil/LevelMeterShort::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelMeterShort__ctor_mB1EC2B28D90FD54C518BF4D26CB6719A31940EDB (LevelMeterShort_t49A5B495010FBAC23F91CE71A7290FABE50EB4B7 * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const RuntimeMethod* method);
// System.Void Photon.Voice.AudioUtil/VoiceDetectorShort::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetectorShort__ctor_mF24E281C89FE50EAF0E11DEFC71D63734ADC8D65 (VoiceDetectorShort_tEB57780C72B1E5D60E7584C80B244E40B4C0DFDB * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_inline (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  (*) (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *, const RuntimeMethod*))Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
inline bool Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67 (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *, const RuntimeMethod*))Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Int16>::get_Current()
inline int16_t Enumerator_get_Current_mAE16C5472096C2336079B2487034152D64054833_inline (Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813 * __this, const RuntimeMethod* method)
{
	return ((  int16_t (*) (Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813 *, const RuntimeMethod*))Enumerator_get_Current_mAE16C5472096C2336079B2487034152D64054833_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int16>::MoveNext()
inline bool Enumerator_MoveNext_m9CEA6A4E0A1CC86075937DCECD5E148265615A5A (Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813 *, const RuntimeMethod*))Enumerator_MoveNext_m9CEA6A4E0A1CC86075937DCECD5E148265615A5A_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6 (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::get_Current()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_inline (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *, const RuntimeMethod*))Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::MoveNext()
inline bool Enumerator_MoveNext_m9FB106B6D83E0AEA63A4ADE22BC85158FCB05735 (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *, const RuntimeMethod*))Enumerator_MoveNext_m9FB106B6D83E0AEA63A4ADE22BC85158FCB05735_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector4>::get_Current()
inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Enumerator_get_Current_m32439407464C10970CC963587D0D2E0DD861ED9B_inline (Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 * __this, const RuntimeMethod* method)
{
	return ((  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  (*) (Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 *, const RuntimeMethod*))Enumerator_get_Current_m32439407464C10970CC963587D0D2E0DD861ED9B_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector4>::MoveNext()
inline bool Enumerator_MoveNext_mF378337D9CA43F03755456627ECC0436E94A8B9C (Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 *, const RuntimeMethod*))Enumerator_MoveNext_mF378337D9CA43F03755456627ECC0436E94A8B9C_gshared)(__this, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382 (int32_t* ___location10, int32_t ___value1, int32_t ___comparand2, const RuntimeMethod* method);
// System.Void System.OverflowException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m9D5C4C7E08BE06B4D72424590FB4365733FC351D (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8 (int32_t* ___location0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::MemoryBarrier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_MemoryBarrier_m9E2B68F7889D5D3AD76126930EE120D51C1B3402 (const RuntimeMethod* method);
// System.Int32 System.String::CompareOrdinal(System.String,System.Int32,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareOrdinal_m080D376EC2E7A0C528A440094A0DB97DFB34CD41 (String_t* ___strA0, int32_t ___indexA1, String_t* ___strB2, int32_t ___indexB3, int32_t ___length4, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.ComponentModel.PropertyDescriptor::.ctor(System.String,System.Attribute[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyDescriptor__ctor_m75229C6B90FE0810B721B1F6470D0A0A53E547DA (PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * __this, String_t* ___name0, AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* ___attrs1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.EventHandler System.ComponentModel.PropertyDescriptor::GetValueChangedHandler(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * PropertyDescriptor_GetValueChangedHandler_m541D7CCBA4649A8063EB6FF91B9D409DD8281AF4 (PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * __this, RuntimeObject * ___component0, const RuntimeMethod* method);
// System.Void System.ComponentModel.PropertyDescriptor::AddValueChanged(System.Object,System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyDescriptor_AddValueChanged_m9C10DF1969778E24B7F195A2F39347E69C898C21 (PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * __this, RuntimeObject * ___component0, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___handler1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Xml.Linq.XObjectChangeEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mD1518B4300DA15FEAD09FCF99F29716CB4515AE2 (EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Xml.Linq.XObject::add_Changing(System.EventHandler`1<System.Xml.Linq.XObjectChangeEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XObject_add_Changing_m16A2717DE03F19B8C6FD08E2CA77F71056743045 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 * ___value0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XObject::add_Changed(System.EventHandler`1<System.Xml.Linq.XObjectChangeEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XObject_add_Changed_m88D98E1E0CCF19AFE0F0489089322A548CFB27FD (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 * ___value0, const RuntimeMethod* method);
// System.Void System.ComponentModel.PropertyDescriptor::RemoveValueChanged(System.Object,System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyDescriptor_RemoveValueChanged_m53DAD55289BF8D507CBFB738D93F733A2FDBFDCE (PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * __this, RuntimeObject * ___component0, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___handler1, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XObject::remove_Changing(System.EventHandler`1<System.Xml.Linq.XObjectChangeEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XObject_remove_Changing_m6B56364DC1D1FBDE98A9302BD4AB8A12210AE982 (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 * ___value0, const RuntimeMethod* method);
// System.Void System.Xml.Linq.XObject::remove_Changed(System.EventHandler`1<System.Xml.Linq.XObjectChangeEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XObject_remove_Changed_m7D7EBD9DD34007304B78694594F3564FD6DD3E8C (XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 * __this, EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 * ___value0, const RuntimeMethod* method);
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor::GetProvider(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * TypeDescriptor_GetProvider_m11FFA30C459E9A3C61DEA0B8A7F96B09545BC86B (Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.ComponentModel.TypeDescriptionProvider::.ctor(System.ComponentModel.TypeDescriptionProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeDescriptionProvider__ctor_m6743A730A14CDF72C690886FDECCF202BC156448 (TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * __this, TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * ___parent0, const RuntimeMethod* method);
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetTypeDescriptor(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeDescriptionProvider_GetTypeDescriptor_m2ED48670C3D29D6A1CFE63D0F019BBFE8D03372E (TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * __this, Type_t * ___objectType0, RuntimeObject * ___instance1, const RuntimeMethod* method);
// System.Void System.ComponentModel.CustomTypeDescriptor::.ctor(System.ComponentModel.ICustomTypeDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomTypeDescriptor__ctor_m83CFDC2A68D4C72A3B5C0A79AEAF41486AAAB7DF (CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC * __this, RuntimeObject* ___parent0, const RuntimeMethod* method);
// System.Void System.ComponentModel.PropertyDescriptorCollection::.ctor(System.ComponentModel.PropertyDescriptor[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyDescriptorCollection__ctor_m124991BF4E348817ACCC6C4373FD66B31566E425 (PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * __this, PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75* ___properties0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementAttributePropertyDescriptor__ctor_mD710FF4686F1C385B0B65277AC4F045CAA17C60D (XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73 * __this, const RuntimeMethod* method);
// System.Int32 System.ComponentModel.PropertyDescriptorCollection::Add(System.ComponentModel.PropertyDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyDescriptorCollection_Add_mFD0446EF7C7F01E2DDBBA8F0ED3F8C5032CC21BA (PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * __this, PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * ___value0, const RuntimeMethod* method);
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementDescendantsPropertyDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementDescendantsPropertyDescriptor__ctor_m0BC8F572EAAB573A8A2A23F056D84C226A6DFAC8 (XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959 * __this, const RuntimeMethod* method);
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementElementPropertyDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementElementPropertyDescriptor__ctor_m713399FB2E19BA297379623AB9BF2951C4B347F5 (XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818 * __this, const RuntimeMethod* method);
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementElementsPropertyDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementElementsPropertyDescriptor__ctor_m155278BABE2A17E372EBA9D08826B04314D7020C (XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6 * __this, const RuntimeMethod* method);
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementValuePropertyDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementValuePropertyDescriptor__ctor_m45307263CA105982EC6BE1190654277922115003 (XElementValuePropertyDescriptor_tA4ABC94A15EC3C3758364365CA8BB54449B5656F * __this, const RuntimeMethod* method);
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementXmlPropertyDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementXmlPropertyDescriptor__ctor_mAD30542B05F6B53100F95FDC889AAFB606925E5B (XElementXmlPropertyDescriptor_tD87FB80863A3CB334BD49862FBD0C300BCE47DB9 * __this, const RuntimeMethod* method);
// System.Void MS.Internal.Xml.Linq.ComponentModel.XAttributeValuePropertyDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttributeValuePropertyDescriptor__ctor_mDE470C28BA32ECF708F651F39C278BC540E3F549 (XAttributeValuePropertyDescriptor_tC5B11D2983357281D81E15BE00D30EFB16D4E1FB * __this, const RuntimeMethod* method);
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.CustomTypeDescriptor::GetProperties(System.Attribute[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * CustomTypeDescriptor_GetProperties_mAF60EE9AC464C9683CA5D7065428DA14C94D40D0 (CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC * __this, AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* ___attributes0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___item10;
		__this->set_Item1_0(L_0);
		RuntimeObject * L_1 = ___item21;
		__this->set_Item2_1(L_1);
		RuntimeObject * L_2 = ___item32;
		__this->set_Item3_2(L_2);
		RuntimeObject * L_3 = ___item43;
		__this->set_Item4_3(L_3);
		RuntimeObject * L_4 = ___item54;
		__this->set_Item5_4(L_4);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8(_thisAdjusted, ___item10, ___item21, ___item32, ___item43, ___item54, method);
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this, (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )((*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)UnBox(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return (bool)L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_0;
		L_0 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0);
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		if (!L_4)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_5;
		L_5 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		RuntimeObject * L_6 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_7 = ___other0;
		RuntimeObject * L_8 = (RuntimeObject *)L_7.get_Item2_1();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_5);
		bool L_9;
		L_9 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_8);
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_10;
		L_10 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		RuntimeObject * L_11 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_12 = ___other0;
		RuntimeObject * L_13 = (RuntimeObject *)L_12.get_Item3_2();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_10);
		bool L_14;
		L_14 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_10, (RuntimeObject *)L_11, (RuntimeObject *)L_13);
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_15;
		L_15 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_16 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_17 = ___other0;
		RuntimeObject * L_18 = (RuntimeObject *)L_17.get_Item4_3();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_15);
		bool L_19;
		L_19 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_15, (RuntimeObject *)L_16, (RuntimeObject *)L_18);
		if (!L_19)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_20;
		L_20 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		RuntimeObject * L_21 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_22 = ___other0;
		RuntimeObject * L_23 = (RuntimeObject *)L_22.get_Item5_4();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_20);
		bool L_24;
		L_24 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_20, (RuntimeObject *)L_21, (RuntimeObject *)L_23);
		return (bool)L_24;
	}

IL_0077:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1_AdjustorThunk (RuntimeObject * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___other0;
		V_0 = (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )((*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_5 = V_0;
		RuntimeObject * L_6 = (RuntimeObject *)L_5.get_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_10 = V_0;
		RuntimeObject * L_11 = (RuntimeObject *)L_10.get_Item2_1();
		NullCheck((RuntimeObject*)L_8);
		bool L_12;
		L_12 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_11);
		if (!L_12)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_13 = ___comparer1;
		RuntimeObject * L_14 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_15 = V_0;
		RuntimeObject * L_16 = (RuntimeObject *)L_15.get_Item3_2();
		NullCheck((RuntimeObject*)L_13);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (RuntimeObject *)L_14, (RuntimeObject *)L_16);
		if (!L_17)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_18 = ___comparer1;
		RuntimeObject * L_19 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_20 = V_0;
		RuntimeObject * L_21 = (RuntimeObject *)L_20.get_Item4_3();
		NullCheck((RuntimeObject*)L_18);
		bool L_22;
		L_22 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_18, (RuntimeObject *)L_19, (RuntimeObject *)L_21);
		if (!L_22)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_23 = ___comparer1;
		RuntimeObject * L_24 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_25 = V_0;
		RuntimeObject * L_26 = (RuntimeObject *)L_25.get_Item5_4();
		NullCheck((RuntimeObject*)L_23);
		bool L_27;
		L_27 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_23, (RuntimeObject *)L_24, (RuntimeObject *)L_26);
		return (bool)L_27;
	}

IL_00a9:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_2 = (*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this);
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_3 = (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		int32_t L_10;
		L_10 = ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this, (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )((*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return (int32_t)L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_0;
		L_0 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		V_0 = (int32_t)L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return (int32_t)L_6;
	}

IL_001c:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_7;
		L_7 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 26)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_9 = ___other0;
		RuntimeObject * L_10 = (RuntimeObject *)L_9.get_Item2_1();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_7);
		int32_t L_11;
		L_11 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_0 = (int32_t)L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return (int32_t)L_13;
	}

IL_0038:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_14;
		L_14 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 29)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 29));
		RuntimeObject * L_15 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_16 = ___other0;
		RuntimeObject * L_17 = (RuntimeObject *)L_16.get_Item3_2();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_14);
		int32_t L_18;
		L_18 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_14, (RuntimeObject *)L_15, (RuntimeObject *)L_17);
		V_0 = (int32_t)L_18;
		int32_t L_19 = V_0;
		if (!L_19)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_20 = V_0;
		return (int32_t)L_20;
	}

IL_0054:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_21;
		L_21 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 32)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		RuntimeObject * L_22 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_23 = ___other0;
		RuntimeObject * L_24 = (RuntimeObject *)L_23.get_Item4_3();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_21);
		int32_t L_25;
		L_25 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_21, (RuntimeObject *)L_22, (RuntimeObject *)L_24);
		V_0 = (int32_t)L_25;
		int32_t L_26 = V_0;
		if (!L_26)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_27 = V_0;
		return (int32_t)L_27;
	}

IL_0070:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_28;
		L_28 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35));
		RuntimeObject * L_29 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_30 = ___other0;
		RuntimeObject * L_31 = (RuntimeObject *)L_30.get_Item5_4();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_28);
		int32_t L_32;
		L_32 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_28, (RuntimeObject *)L_29, (RuntimeObject *)L_31);
		return (int32_t)L_32;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED_AdjustorThunk (RuntimeObject * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_2 = (*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this);
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_3 = (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		V_0 = (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )((*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_10 = ___comparer1;
		RuntimeObject * L_11 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_12 = V_0;
		RuntimeObject * L_13 = (RuntimeObject *)L_12.get_Item1_0();
		NullCheck((RuntimeObject*)L_10);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_10, (RuntimeObject *)L_11, (RuntimeObject *)L_13);
		V_1 = (int32_t)L_14;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_1;
		return (int32_t)L_16;
	}

IL_0060:
	{
		RuntimeObject* L_17 = ___comparer1;
		RuntimeObject * L_18 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_19 = V_0;
		RuntimeObject * L_20 = (RuntimeObject *)L_19.get_Item2_1();
		NullCheck((RuntimeObject*)L_17);
		int32_t L_21;
		L_21 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_17, (RuntimeObject *)L_18, (RuntimeObject *)L_20);
		V_1 = (int32_t)L_21;
		int32_t L_22 = V_1;
		if (!L_22)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_23 = V_1;
		return (int32_t)L_23;
	}

IL_0082:
	{
		RuntimeObject* L_24 = ___comparer1;
		RuntimeObject * L_25 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_26 = V_0;
		RuntimeObject * L_27 = (RuntimeObject *)L_26.get_Item3_2();
		NullCheck((RuntimeObject*)L_24);
		int32_t L_28;
		L_28 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_24, (RuntimeObject *)L_25, (RuntimeObject *)L_27);
		V_1 = (int32_t)L_28;
		int32_t L_29 = V_1;
		if (!L_29)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_30 = V_1;
		return (int32_t)L_30;
	}

IL_00a4:
	{
		RuntimeObject* L_31 = ___comparer1;
		RuntimeObject * L_32 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_33 = V_0;
		RuntimeObject * L_34 = (RuntimeObject *)L_33.get_Item4_3();
		NullCheck((RuntimeObject*)L_31);
		int32_t L_35;
		L_35 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_31, (RuntimeObject *)L_32, (RuntimeObject *)L_34);
		V_1 = (int32_t)L_35;
		int32_t L_36 = V_1;
		if (!L_36)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_37 = V_1;
		return (int32_t)L_37;
	}

IL_00c6:
	{
		RuntimeObject* L_38 = ___comparer1;
		RuntimeObject * L_39 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_40 = V_0;
		RuntimeObject * L_41 = (RuntimeObject *)L_40.get_Item5_4();
		NullCheck((RuntimeObject*)L_38);
		int32_t L_42;
		L_42 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_38, (RuntimeObject *)L_39, (RuntimeObject *)L_41);
		return (int32_t)L_42;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	RuntimeObject ** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	RuntimeObject ** G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	RuntimeObject ** G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	RuntimeObject ** G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	RuntimeObject ** G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	int32_t G_B15_2 = 0;
	int32_t G_B15_3 = 0;
	RuntimeObject ** G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	int32_t G_B13_3 = 0;
	RuntimeObject ** G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	int32_t G_B14_2 = 0;
	int32_t G_B14_3 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t G_B16_3 = 0;
	RuntimeObject ** G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	int32_t G_B19_2 = 0;
	int32_t G_B19_3 = 0;
	int32_t G_B19_4 = 0;
	RuntimeObject ** G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	int32_t G_B17_2 = 0;
	int32_t G_B17_3 = 0;
	int32_t G_B17_4 = 0;
	RuntimeObject ** G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	int32_t G_B18_3 = 0;
	int32_t G_B18_4 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B20_2 = 0;
	int32_t G_B20_3 = 0;
	int32_t G_B20_4 = 0;
	{
		RuntimeObject ** L_0 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B3_0 = L_0;
			goto IL_002a;
		}
	}
	{
		RuntimeObject * L_2 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_2;
		RuntimeObject * L_3 = V_0;
		G_B2_0 = (&V_0);
		if (L_3)
		{
			G_B3_0 = (&V_0);
			goto IL_002a;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_4;
	}

IL_0035:
	{
		RuntimeObject ** L_5 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_6 = V_1;
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
		if (L_6)
		{
			G_B7_0 = L_5;
			G_B7_1 = G_B4_0;
			goto IL_005f;
		}
	}
	{
		RuntimeObject * L_7 = (*(RuntimeObject **)G_B5_0);
		V_1 = (RuntimeObject *)L_7;
		RuntimeObject * L_8 = V_1;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		if (L_8)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		NullCheck((RuntimeObject *)(*G_B7_0));
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B7_0));
		G_B8_0 = L_9;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		RuntimeObject ** L_10 = (RuntimeObject **)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_11 = V_2;
		G_B9_0 = L_10;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		if (L_11)
		{
			G_B11_0 = L_10;
			G_B11_1 = G_B8_0;
			G_B11_2 = G_B8_1;
			goto IL_0094;
		}
	}
	{
		RuntimeObject * L_12 = (*(RuntimeObject **)G_B9_0);
		V_2 = (RuntimeObject *)L_12;
		RuntimeObject * L_13 = V_2;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		if (L_13)
		{
			G_B11_0 = (&V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			goto IL_0094;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		goto IL_009f;
	}

IL_0094:
	{
		NullCheck((RuntimeObject *)(*G_B11_0));
		int32_t L_14;
		L_14 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B11_0));
		G_B12_0 = L_14;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		RuntimeObject ** L_15 = (RuntimeObject **)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_16 = V_3;
		G_B13_0 = L_15;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
		if (L_16)
		{
			G_B15_0 = L_15;
			G_B15_1 = G_B12_0;
			G_B15_2 = G_B12_1;
			G_B15_3 = G_B12_2;
			goto IL_00c9;
		}
	}
	{
		RuntimeObject * L_17 = (*(RuntimeObject **)G_B13_0);
		V_3 = (RuntimeObject *)L_17;
		RuntimeObject * L_18 = V_3;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		if (L_18)
		{
			G_B15_0 = (&V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00c9;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_00d4;
	}

IL_00c9:
	{
		NullCheck((RuntimeObject *)(*G_B15_0));
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B15_0));
		G_B16_0 = L_19;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_00d4:
	{
		RuntimeObject ** L_20 = (RuntimeObject **)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_21 = V_4;
		G_B17_0 = L_20;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
		G_B17_4 = G_B16_3;
		if (L_21)
		{
			G_B19_0 = L_20;
			G_B19_1 = G_B16_0;
			G_B19_2 = G_B16_1;
			G_B19_3 = G_B16_2;
			G_B19_4 = G_B16_3;
			goto IL_0101;
		}
	}
	{
		RuntimeObject * L_22 = (*(RuntimeObject **)G_B17_0);
		V_4 = (RuntimeObject *)L_22;
		RuntimeObject * L_23 = V_4;
		G_B18_0 = (&V_4);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		G_B18_4 = G_B17_4;
		if (L_23)
		{
			G_B19_0 = (&V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			G_B19_4 = G_B17_4;
			goto IL_0101;
		}
	}
	{
		G_B20_0 = 0;
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		G_B20_4 = G_B18_4;
		goto IL_010c;
	}

IL_0101:
	{
		NullCheck((RuntimeObject *)(*G_B19_0));
		int32_t L_24;
		L_24 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B19_0));
		G_B20_0 = L_24;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
		G_B20_4 = G_B19_4;
	}

IL_010c:
	{
		int32_t L_25;
		L_25 = ValueTuple_CombineHashCodes_m3F9A61D754020CB9186BA94BFD3A084725C34705((int32_t)G_B20_4, (int32_t)G_B20_3, (int32_t)G_B20_2, (int32_t)G_B20_1, (int32_t)G_B20_0, /*hidden argument*/NULL);
		return (int32_t)L_25;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___comparer0;
		int32_t L_1;
		L_1 = ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 38));
		return (int32_t)L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item2_1();
		NullCheck((RuntimeObject*)L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4);
		RuntimeObject* L_6 = ___comparer0;
		RuntimeObject * L_7 = (RuntimeObject *)__this->get_Item3_2();
		NullCheck((RuntimeObject*)L_6);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_6, (RuntimeObject *)L_7);
		RuntimeObject* L_9 = ___comparer0;
		RuntimeObject * L_10 = (RuntimeObject *)__this->get_Item4_3();
		NullCheck((RuntimeObject*)L_9);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (RuntimeObject *)L_10);
		RuntimeObject* L_12 = ___comparer0;
		RuntimeObject * L_13 = (RuntimeObject *)__this->get_Item5_4();
		NullCheck((RuntimeObject*)L_12);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_12, (RuntimeObject *)L_13);
		int32_t L_15;
		L_15 = ValueTuple_CombineHashCodes_m3F9A61D754020CB9186BA94BFD3A084725C34705((int32_t)L_2, (int32_t)L_5, (int32_t)L_8, (int32_t)L_11, (int32_t)L_14, /*hidden argument*/NULL);
		return (int32_t)L_15;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.String System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_3 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	RuntimeObject ** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	RuntimeObject ** G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_3 = NULL;
	RuntimeObject ** G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	RuntimeObject ** G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_3 = NULL;
	RuntimeObject ** G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_3 = NULL;
	RuntimeObject ** G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_3 = NULL;
	RuntimeObject ** G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_3 = NULL;
	RuntimeObject ** G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_3 = NULL;
	RuntimeObject ** G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_3 = NULL;
	RuntimeObject ** G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_3 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_3 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_1;
		RuntimeObject ** L_3 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_4 = V_0;
		G_B1_0 = L_3;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
		if (L_4)
		{
			G_B3_0 = L_3;
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003b;
		}
	}
	{
		RuntimeObject * L_5 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_5;
		RuntimeObject * L_6 = V_0;
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		if (L_6)
		{
			G_B3_0 = (&V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003b;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0046;
	}

IL_003b:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0046:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B4_3;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_8;
		RuntimeObject ** L_10 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_11 = V_1;
		G_B5_0 = L_10;
		G_B5_1 = 3;
		G_B5_2 = L_9;
		G_B5_3 = L_9;
		if (L_11)
		{
			G_B7_0 = L_10;
			G_B7_1 = 3;
			G_B7_2 = L_9;
			G_B7_3 = L_9;
			goto IL_007b;
		}
	}
	{
		RuntimeObject * L_12 = (*(RuntimeObject **)G_B5_0);
		V_1 = (RuntimeObject *)L_12;
		RuntimeObject * L_13 = V_1;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		if (L_13)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007b;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0086;
	}

IL_007b:
	{
		NullCheck((RuntimeObject *)(*G_B7_0));
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B7_0));
		G_B8_0 = L_14;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0086:
	{
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B8_3;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_15;
		RuntimeObject ** L_17 = (RuntimeObject **)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_18 = V_2;
		G_B9_0 = L_17;
		G_B9_1 = 5;
		G_B9_2 = L_16;
		G_B9_3 = L_16;
		if (L_18)
		{
			G_B11_0 = L_17;
			G_B11_1 = 5;
			G_B11_2 = L_16;
			G_B11_3 = L_16;
			goto IL_00bb;
		}
	}
	{
		RuntimeObject * L_19 = (*(RuntimeObject **)G_B9_0);
		V_2 = (RuntimeObject *)L_19;
		RuntimeObject * L_20 = V_2;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		if (L_20)
		{
			G_B11_0 = (&V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_00bb;
		}
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00c6;
	}

IL_00bb:
	{
		NullCheck((RuntimeObject *)(*G_B11_0));
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B11_0));
		G_B12_0 = L_21;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c6:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B12_3;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_22;
		RuntimeObject ** L_24 = (RuntimeObject **)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_25 = V_3;
		G_B13_0 = L_24;
		G_B13_1 = 7;
		G_B13_2 = L_23;
		G_B13_3 = L_23;
		if (L_25)
		{
			G_B15_0 = L_24;
			G_B15_1 = 7;
			G_B15_2 = L_23;
			G_B15_3 = L_23;
			goto IL_00fb;
		}
	}
	{
		RuntimeObject * L_26 = (*(RuntimeObject **)G_B13_0);
		V_3 = (RuntimeObject *)L_26;
		RuntimeObject * L_27 = V_3;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		if (L_27)
		{
			G_B15_0 = (&V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00fb;
		}
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_0106;
	}

IL_00fb:
	{
		NullCheck((RuntimeObject *)(*G_B15_0));
		String_t* L_28;
		L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B15_0));
		G_B16_0 = L_28;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_0106:
	{
		NullCheck(G_B16_2);
		ArrayElementTypeCheck (G_B16_2, G_B16_0);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B16_3;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_29;
		RuntimeObject ** L_31 = (RuntimeObject **)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_32 = V_4;
		G_B17_0 = L_31;
		G_B17_1 = ((int32_t)9);
		G_B17_2 = L_30;
		G_B17_3 = L_30;
		if (L_32)
		{
			G_B19_0 = L_31;
			G_B19_1 = ((int32_t)9);
			G_B19_2 = L_30;
			G_B19_3 = L_30;
			goto IL_013f;
		}
	}
	{
		RuntimeObject * L_33 = (*(RuntimeObject **)G_B17_0);
		V_4 = (RuntimeObject *)L_33;
		RuntimeObject * L_34 = V_4;
		G_B18_0 = (&V_4);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		if (L_34)
		{
			G_B19_0 = (&V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			goto IL_013f;
		}
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		goto IL_014a;
	}

IL_013f:
	{
		NullCheck((RuntimeObject *)(*G_B19_0));
		String_t* L_35;
		L_35 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B19_0));
		G_B20_0 = L_35;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
	}

IL_014a:
	{
		NullCheck(G_B20_2);
		ArrayElementTypeCheck (G_B20_2, G_B20_0);
		(G_B20_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B20_1), (String_t*)G_B20_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B20_3;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_37;
		L_37 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_36, /*hidden argument*/NULL);
		return (String_t*)L_37;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D(_thisAdjusted, method);
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
// System.Boolean Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Int16>::get_IsCalibrating()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceDetectorCalibration_1_get_IsCalibrating_m237250166FFABB2BF12B4ACEA1F6D31C1A100884_gshared (VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsCalibrating { get { return calibrateCount > 0; } }
		int32_t L_0 = (int32_t)__this->get_calibrateCount_3();
		return (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Int16>::.ctor(Photon.Voice.AudioUtil/IVoiceDetector,Photon.Voice.AudioUtil/ILevelMeter,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetectorCalibration_1__ctor_m87C1BC05601888CBB1019C7DC5A2D699FE79EFC0_gshared (VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3 * __this, RuntimeObject* ___voiceDetector0, RuntimeObject* ___levelMeter1, int32_t ___samplingRate2, int32_t ___channels3, const RuntimeMethod* method)
{
	{
		// public VoiceDetectorCalibration(IVoiceDetector voiceDetector, ILevelMeter levelMeter, int samplingRate, int channels)
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// this.valuesPerSec = samplingRate * channels;
		int32_t L_0 = ___samplingRate2;
		int32_t L_1 = ___channels3;
		__this->set_valuesPerSec_2(((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)));
		// this.voiceDetector = voiceDetector;
		RuntimeObject* L_2 = ___voiceDetector0;
		__this->set_voiceDetector_0(L_2);
		// this.levelMeter = levelMeter;
		RuntimeObject* L_3 = ___levelMeter1;
		__this->set_levelMeter_1(L_3);
		// }
		return;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Int16>::Calibrate(System.Int32,System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetectorCalibration_1_Calibrate_mB4EB9C368BC7697113CB8C9F8F4940A357942D3F_gshared (VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3 * __this, int32_t ___durationMs0, Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * ___onCalibrated1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILevelMeter_t886B0966B211DE75BD8D5FBDFE9A0405DFF87BF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.calibrateCount = valuesPerSec * durationMs / 1000;
		int32_t L_0 = (int32_t)__this->get_valuesPerSec_2();
		int32_t L_1 = ___durationMs0;
		__this->set_calibrateCount_3(((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1))/(int32_t)((int32_t)1000))));
		// this.onCalibrated = onCalibrated;
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_2 = ___onCalibrated1;
		__this->set_onCalibrated_4(L_2);
		// levelMeter.ResetAccumAvgPeakAmp();
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_levelMeter_1();
		NullCheck((RuntimeObject*)L_3);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Photon.Voice.AudioUtil/ILevelMeter::ResetAccumAvgPeakAmp() */, ILevelMeter_t886B0966B211DE75BD8D5FBDFE9A0405DFF87BF5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		// }
		return;
	}
}
// T[] Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Int16>::Process(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* VoiceDetectorCalibration_1_Process_m6536DE7ED71DAF2E10227BEF643EA1D82AFE483E_gshared (VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___buf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILevelMeter_t886B0966B211DE75BD8D5FBDFE9A0405DFF87BF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceDetector_t313BD832212A58385BC35624BF7356606FF0DCB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.calibrateCount != 0)
		int32_t L_0 = (int32_t)__this->get_calibrateCount_3();
		if (!L_0)
		{
			goto IL_0062;
		}
	}
	{
		// this.calibrateCount -= buf.Length;
		int32_t L_1 = (int32_t)__this->get_calibrateCount_3();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_2 = ___buf0;
		NullCheck(L_2);
		__this->set_calibrateCount_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))));
		// if (this.calibrateCount <= 0)
		int32_t L_3 = (int32_t)__this->get_calibrateCount_3();
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		// this.calibrateCount = 0;
		__this->set_calibrateCount_3(0);
		// this.voiceDetector.Threshold = levelMeter.AccumAvgPeakAmp * 2;
		RuntimeObject* L_4 = (RuntimeObject*)__this->get_voiceDetector_0();
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_levelMeter_1();
		NullCheck((RuntimeObject*)L_5);
		float L_6;
		L_6 = InterfaceFuncInvoker0< float >::Invoke(2 /* System.Single Photon.Voice.AudioUtil/ILevelMeter::get_AccumAvgPeakAmp() */, ILevelMeter_t886B0966B211DE75BD8D5FBDFE9A0405DFF87BF5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker1< float >::Invoke(3 /* System.Void Photon.Voice.AudioUtil/IVoiceDetector::set_Threshold(System.Single) */, IVoiceDetector_t313BD832212A58385BC35624BF7356606FF0DCB8_il2cpp_TypeInfo_var, (RuntimeObject*)L_4, (float)((float)il2cpp_codegen_multiply((float)L_6, (float)(2.0f))));
		// if (this.onCalibrated != null) this.onCalibrated(this.voiceDetector.Threshold);
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_7 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)__this->get_onCalibrated_4();
		if (!L_7)
		{
			goto IL_0062;
		}
	}
	{
		// if (this.onCalibrated != null) this.onCalibrated(this.voiceDetector.Threshold);
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_8 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)__this->get_onCalibrated_4();
		RuntimeObject* L_9 = (RuntimeObject*)__this->get_voiceDetector_0();
		NullCheck((RuntimeObject*)L_9);
		float L_10;
		L_10 = InterfaceFuncInvoker0< float >::Invoke(2 /* System.Single Photon.Voice.AudioUtil/IVoiceDetector::get_Threshold() */, IVoiceDetector_t313BD832212A58385BC35624BF7356606FF0DCB8_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
		NullCheck((Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)L_8);
		Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E((Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)L_8, (float)L_10, /*hidden argument*/Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var);
	}

IL_0062:
	{
		// return buf;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_11 = ___buf0;
		return (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)L_11;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Int16>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetectorCalibration_1_Dispose_mAB1E5B7B97346F37472DF009956438BEB65059F3_gshared (VoiceDetectorCalibration_1_tA106A118978F11C40A12060946B33BA05BD390D3 * __this, const RuntimeMethod* method)
{
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
// System.Boolean Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Object>::get_IsCalibrating()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceDetectorCalibration_1_get_IsCalibrating_m0D1FF619FCB36F15D1B4883056F6B164ACBA8DA1_gshared (VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsCalibrating { get { return calibrateCount > 0; } }
		int32_t L_0 = (int32_t)__this->get_calibrateCount_3();
		return (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Object>::.ctor(Photon.Voice.AudioUtil/IVoiceDetector,Photon.Voice.AudioUtil/ILevelMeter,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetectorCalibration_1__ctor_m5816A41100C12DAF3F312AFE4E37C5A9021E72EF_gshared (VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 * __this, RuntimeObject* ___voiceDetector0, RuntimeObject* ___levelMeter1, int32_t ___samplingRate2, int32_t ___channels3, const RuntimeMethod* method)
{
	{
		// public VoiceDetectorCalibration(IVoiceDetector voiceDetector, ILevelMeter levelMeter, int samplingRate, int channels)
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// this.valuesPerSec = samplingRate * channels;
		int32_t L_0 = ___samplingRate2;
		int32_t L_1 = ___channels3;
		__this->set_valuesPerSec_2(((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)));
		// this.voiceDetector = voiceDetector;
		RuntimeObject* L_2 = ___voiceDetector0;
		__this->set_voiceDetector_0(L_2);
		// this.levelMeter = levelMeter;
		RuntimeObject* L_3 = ___levelMeter1;
		__this->set_levelMeter_1(L_3);
		// }
		return;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Object>::Calibrate(System.Int32,System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetectorCalibration_1_Calibrate_m0599465C02AC530B39B3654DD01A4709919882CA_gshared (VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 * __this, int32_t ___durationMs0, Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * ___onCalibrated1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILevelMeter_t886B0966B211DE75BD8D5FBDFE9A0405DFF87BF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.calibrateCount = valuesPerSec * durationMs / 1000;
		int32_t L_0 = (int32_t)__this->get_valuesPerSec_2();
		int32_t L_1 = ___durationMs0;
		__this->set_calibrateCount_3(((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1))/(int32_t)((int32_t)1000))));
		// this.onCalibrated = onCalibrated;
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_2 = ___onCalibrated1;
		__this->set_onCalibrated_4(L_2);
		// levelMeter.ResetAccumAvgPeakAmp();
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_levelMeter_1();
		NullCheck((RuntimeObject*)L_3);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Photon.Voice.AudioUtil/ILevelMeter::ResetAccumAvgPeakAmp() */, ILevelMeter_t886B0966B211DE75BD8D5FBDFE9A0405DFF87BF5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		// }
		return;
	}
}
// T[] Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Object>::Process(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* VoiceDetectorCalibration_1_Process_mA430661AA2D203324243D65DD47B6C5C9C775498_gshared (VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___buf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILevelMeter_t886B0966B211DE75BD8D5FBDFE9A0405DFF87BF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceDetector_t313BD832212A58385BC35624BF7356606FF0DCB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.calibrateCount != 0)
		int32_t L_0 = (int32_t)__this->get_calibrateCount_3();
		if (!L_0)
		{
			goto IL_0062;
		}
	}
	{
		// this.calibrateCount -= buf.Length;
		int32_t L_1 = (int32_t)__this->get_calibrateCount_3();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___buf0;
		NullCheck(L_2);
		__this->set_calibrateCount_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))));
		// if (this.calibrateCount <= 0)
		int32_t L_3 = (int32_t)__this->get_calibrateCount_3();
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		// this.calibrateCount = 0;
		__this->set_calibrateCount_3(0);
		// this.voiceDetector.Threshold = levelMeter.AccumAvgPeakAmp * 2;
		RuntimeObject* L_4 = (RuntimeObject*)__this->get_voiceDetector_0();
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_levelMeter_1();
		NullCheck((RuntimeObject*)L_5);
		float L_6;
		L_6 = InterfaceFuncInvoker0< float >::Invoke(2 /* System.Single Photon.Voice.AudioUtil/ILevelMeter::get_AccumAvgPeakAmp() */, ILevelMeter_t886B0966B211DE75BD8D5FBDFE9A0405DFF87BF5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker1< float >::Invoke(3 /* System.Void Photon.Voice.AudioUtil/IVoiceDetector::set_Threshold(System.Single) */, IVoiceDetector_t313BD832212A58385BC35624BF7356606FF0DCB8_il2cpp_TypeInfo_var, (RuntimeObject*)L_4, (float)((float)il2cpp_codegen_multiply((float)L_6, (float)(2.0f))));
		// if (this.onCalibrated != null) this.onCalibrated(this.voiceDetector.Threshold);
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_7 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)__this->get_onCalibrated_4();
		if (!L_7)
		{
			goto IL_0062;
		}
	}
	{
		// if (this.onCalibrated != null) this.onCalibrated(this.voiceDetector.Threshold);
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_8 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)__this->get_onCalibrated_4();
		RuntimeObject* L_9 = (RuntimeObject*)__this->get_voiceDetector_0();
		NullCheck((RuntimeObject*)L_9);
		float L_10;
		L_10 = InterfaceFuncInvoker0< float >::Invoke(2 /* System.Single Photon.Voice.AudioUtil/IVoiceDetector::get_Threshold() */, IVoiceDetector_t313BD832212A58385BC35624BF7356606FF0DCB8_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
		NullCheck((Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)L_8);
		Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E((Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)L_8, (float)L_10, /*hidden argument*/Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var);
	}

IL_0062:
	{
		// return buf;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = ___buf0;
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_11;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetectorCalibration_1_Dispose_m070E2D2ABB5ACAD539B322992C63BC3BD62582E7_gshared (VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 * __this, const RuntimeMethod* method)
{
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
// System.Boolean Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Single>::get_IsCalibrating()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceDetectorCalibration_1_get_IsCalibrating_mD6FC692921AE703397F11C0580E773C15BB933EE_gshared (VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E * __this, const RuntimeMethod* method)
{
	{
		// public bool IsCalibrating { get { return calibrateCount > 0; } }
		int32_t L_0 = (int32_t)__this->get_calibrateCount_3();
		return (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Single>::.ctor(Photon.Voice.AudioUtil/IVoiceDetector,Photon.Voice.AudioUtil/ILevelMeter,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetectorCalibration_1__ctor_m271A7DEC9BFF2C27A5092C11C367714DA7CBDCD3_gshared (VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E * __this, RuntimeObject* ___voiceDetector0, RuntimeObject* ___levelMeter1, int32_t ___samplingRate2, int32_t ___channels3, const RuntimeMethod* method)
{
	{
		// public VoiceDetectorCalibration(IVoiceDetector voiceDetector, ILevelMeter levelMeter, int samplingRate, int channels)
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// this.valuesPerSec = samplingRate * channels;
		int32_t L_0 = ___samplingRate2;
		int32_t L_1 = ___channels3;
		__this->set_valuesPerSec_2(((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)));
		// this.voiceDetector = voiceDetector;
		RuntimeObject* L_2 = ___voiceDetector0;
		__this->set_voiceDetector_0(L_2);
		// this.levelMeter = levelMeter;
		RuntimeObject* L_3 = ___levelMeter1;
		__this->set_levelMeter_1(L_3);
		// }
		return;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Single>::Calibrate(System.Int32,System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetectorCalibration_1_Calibrate_mF57B0189F745642C6024E3217884E124A55D142E_gshared (VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E * __this, int32_t ___durationMs0, Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * ___onCalibrated1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILevelMeter_t886B0966B211DE75BD8D5FBDFE9A0405DFF87BF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.calibrateCount = valuesPerSec * durationMs / 1000;
		int32_t L_0 = (int32_t)__this->get_valuesPerSec_2();
		int32_t L_1 = ___durationMs0;
		__this->set_calibrateCount_3(((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1))/(int32_t)((int32_t)1000))));
		// this.onCalibrated = onCalibrated;
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_2 = ___onCalibrated1;
		__this->set_onCalibrated_4(L_2);
		// levelMeter.ResetAccumAvgPeakAmp();
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_levelMeter_1();
		NullCheck((RuntimeObject*)L_3);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Photon.Voice.AudioUtil/ILevelMeter::ResetAccumAvgPeakAmp() */, ILevelMeter_t886B0966B211DE75BD8D5FBDFE9A0405DFF87BF5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		// }
		return;
	}
}
// T[] Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Single>::Process(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* VoiceDetectorCalibration_1_Process_m9C7F3E93EC2F0CB55DC11C9DFBDC41D394F216EC_gshared (VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___buf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILevelMeter_t886B0966B211DE75BD8D5FBDFE9A0405DFF87BF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoiceDetector_t313BD832212A58385BC35624BF7356606FF0DCB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.calibrateCount != 0)
		int32_t L_0 = (int32_t)__this->get_calibrateCount_3();
		if (!L_0)
		{
			goto IL_0062;
		}
	}
	{
		// this.calibrateCount -= buf.Length;
		int32_t L_1 = (int32_t)__this->get_calibrateCount_3();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___buf0;
		NullCheck(L_2);
		__this->set_calibrateCount_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))));
		// if (this.calibrateCount <= 0)
		int32_t L_3 = (int32_t)__this->get_calibrateCount_3();
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		// this.calibrateCount = 0;
		__this->set_calibrateCount_3(0);
		// this.voiceDetector.Threshold = levelMeter.AccumAvgPeakAmp * 2;
		RuntimeObject* L_4 = (RuntimeObject*)__this->get_voiceDetector_0();
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_levelMeter_1();
		NullCheck((RuntimeObject*)L_5);
		float L_6;
		L_6 = InterfaceFuncInvoker0< float >::Invoke(2 /* System.Single Photon.Voice.AudioUtil/ILevelMeter::get_AccumAvgPeakAmp() */, ILevelMeter_t886B0966B211DE75BD8D5FBDFE9A0405DFF87BF5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker1< float >::Invoke(3 /* System.Void Photon.Voice.AudioUtil/IVoiceDetector::set_Threshold(System.Single) */, IVoiceDetector_t313BD832212A58385BC35624BF7356606FF0DCB8_il2cpp_TypeInfo_var, (RuntimeObject*)L_4, (float)((float)il2cpp_codegen_multiply((float)L_6, (float)(2.0f))));
		// if (this.onCalibrated != null) this.onCalibrated(this.voiceDetector.Threshold);
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_7 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)__this->get_onCalibrated_4();
		if (!L_7)
		{
			goto IL_0062;
		}
	}
	{
		// if (this.onCalibrated != null) this.onCalibrated(this.voiceDetector.Threshold);
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_8 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)__this->get_onCalibrated_4();
		RuntimeObject* L_9 = (RuntimeObject*)__this->get_voiceDetector_0();
		NullCheck((RuntimeObject*)L_9);
		float L_10;
		L_10 = InterfaceFuncInvoker0< float >::Invoke(2 /* System.Single Photon.Voice.AudioUtil/IVoiceDetector::get_Threshold() */, IVoiceDetector_t313BD832212A58385BC35624BF7356606FF0DCB8_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
		NullCheck((Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)L_8);
		Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E((Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)L_8, (float)L_10, /*hidden argument*/Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var);
	}

IL_0062:
	{
		// return buf;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_11 = ___buf0;
		return (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_11;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Single>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetectorCalibration_1_Dispose_m3F71E87CF4F02B55CC0C42F1295BDC112BEAE848_gshared (VoiceDetectorCalibration_1_tDC56BC8D99C1538843C12B706F4D44A12BFFBF3E * __this, const RuntimeMethod* method)
{
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
// System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::get_On()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceDetector_1_get_On_mAA630DFE422E1D5263686DDCE57F6E26C4DF8AB8_gshared (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, const RuntimeMethod* method)
{
	{
		// public bool On { get; set; }
		bool L_0 = (bool)__this->get_U3COnU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::set_On(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_set_On_m9C3770B164C8F7B26146F8662599117AE9018271_gshared (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool On { get; set; }
		bool L_0 = ___value0;
		__this->set_U3COnU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Single Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::get_Threshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VoiceDetector_1_get_Threshold_m12CAA451A36ECD2EB80D6B193B4B7B58A2B6D37A_gshared (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, const RuntimeMethod* method)
{
	{
		// public float Threshold { get { return threshold * norm; } set { threshold = value / norm; } }
		float L_0 = (float)__this->get_threshold_2();
		float L_1 = (float)__this->get_norm_1();
		return (float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::set_Threshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_set_Threshold_mDCB2E71BDDDA0E89C9EFBF5EF8B6126BAE58AB3A_gshared (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Threshold { get { return threshold * norm; } set { threshold = value / norm; } }
		float L_0 = ___value0;
		float L_1 = (float)__this->get_norm_1();
		__this->set_threshold_2(((float)((float)L_0/(float)L_1)));
		// public float Threshold { get { return threshold * norm; } set { threshold = value / norm; } }
		return;
	}
}
// System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::get_Detected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceDetector_1_get_Detected_m2556CDCC35307D5A1AE5D0573806C4E1C4C0F5C8_gshared (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, const RuntimeMethod* method)
{
	{
		// get { return detected; }
		bool L_0 = (bool)__this->get_detected_3();
		return (bool)L_0;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::set_Detected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_set_Detected_m13E95CCF06BB947C56591D1DB287436309D074AB_gshared (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (detected != value)
		bool L_0 = (bool)__this->get_detected_3();
		bool L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0036;
		}
	}
	{
		// detected = value; DetectedTime = DateTime.Now;
		bool L_2 = ___value0;
		__this->set_detected_3(L_2);
		// detected = value; DetectedTime = DateTime.Now;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3;
		L_3 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		NullCheck((VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *)__this);
		((  void (*) (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *)__this, (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// if (detected && OnDetected != null) OnDetected();
		bool L_4 = (bool)__this->get_detected_3();
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)__this->get_OnDetected_5();
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		// if (detected && OnDetected != null) OnDetected();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)__this->get_OnDetected_5();
		NullCheck((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_6);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_6, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.DateTime Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::get_DetectedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  VoiceDetector_1_get_DetectedTime_mA23867679948978C41F2E099A5A192319BB407B2_gshared (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, const RuntimeMethod* method)
{
	{
		// public DateTime DetectedTime { get; private set; }
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 )__this->get_U3CDetectedTimeU3Ek__BackingField_4();
		return (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 )L_0;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::set_DetectedTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_set_DetectedTime_m9ADD6F36D9B5A27E2E3256F87CD01249711ECC49_gshared (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		// public DateTime DetectedTime { get; private set; }
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CDetectedTimeU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::get_ActivityDelayMs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceDetector_1_get_ActivityDelayMs_m05917EEB9ACDA0292D88C20461174DD5720E93A2_gshared (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.activityDelay; }
		int32_t L_0 = (int32_t)__this->get_activityDelay_6();
		return (int32_t)L_0;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::set_ActivityDelayMs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_set_ActivityDelayMs_m39368140A17B0574B1770E3619769D1297897971_gshared (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// this.activityDelay = value;
		int32_t L_0 = ___value0;
		__this->set_activityDelay_6(L_0);
		// this.activityDelayValuesCount = value * valuesCountPerSec / 1000;
		int32_t L_1 = ___value0;
		int32_t L_2 = (int32_t)__this->get_valuesCountPerSec_8();
		__this->set_activityDelayValuesCount_9(((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_2))/(int32_t)((int32_t)1000))));
		// }
		return;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::add_OnDetected(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_add_OnDetected_m96C6150F2AD99D6BE409B3BCFD19835E33AD31F1_gshared (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)__this->get_OnDetected_5();
		V_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)Castclass((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)__this->get_address_of_OnDetected_5();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_6, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_7);
		V_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::remove_OnDetected(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_remove_OnDetected_mF9D29616EF9E7BB26168796BFE9BA56CB02C13DD_gshared (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)__this->get_OnDetected_5();
		V_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)Castclass((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)__this->get_address_of_OnDetected_5();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_6, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_7);
		V_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1__ctor_m19B47107FDBA28D2C419B78D712537EF1A707E2D_gshared (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const RuntimeMethod* method)
{
	{
		// internal VoiceDetector(int samplingRate, int numChannels)
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// this.valuesCountPerSec = samplingRate * numChannels;
		int32_t L_0 = ___samplingRate0;
		int32_t L_1 = ___numChannels1;
		__this->set_valuesCountPerSec_8(((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)));
		// this.ActivityDelayMs = 500;
		NullCheck((VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *)__this);
		((  void (*) (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *)__this, (int32_t)((int32_t)500), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// this.On = true;
		NullCheck((VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *)__this);
		((  void (*) (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// }
		return;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_Dispose_mC5935D1969604B393CE67893E2BAFD8D85E6D584_gshared (VoiceDetector_1_t1FED918F44C773247E5BBF30788F515706A047B4 * __this, const RuntimeMethod* method)
{
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
// System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1<System.Object>::get_On()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceDetector_1_get_On_m633537BBB955C530B28A99E172CF1F322E874EC4_gshared (VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3 * __this, const RuntimeMethod* method)
{
	{
		// public bool On { get; set; }
		bool L_0 = (bool)__this->get_U3COnU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Object>::set_On(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_set_On_m3956C0DAD4685B2E57C7B6C1B36CA6E866A4DBEF_gshared (VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool On { get; set; }
		bool L_0 = ___value0;
		__this->set_U3COnU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Single Photon.Voice.AudioUtil/VoiceDetector`1<System.Object>::get_Threshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VoiceDetector_1_get_Threshold_m687B27B5D5178DAF134456F1EEAA1D25F0D8DBE3_gshared (VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3 * __this, const RuntimeMethod* method)
{
	{
		// public float Threshold { get { return threshold * norm; } set { threshold = value / norm; } }
		float L_0 = (float)__this->get_threshold_2();
		float L_1 = (float)__this->get_norm_1();
		return (float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Object>::set_Threshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_set_Threshold_m5B427352D0FF0EB81992636D48B6D38BB4A54D1A_gshared (VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Threshold { get { return threshold * norm; } set { threshold = value / norm; } }
		float L_0 = ___value0;
		float L_1 = (float)__this->get_norm_1();
		__this->set_threshold_2(((float)((float)L_0/(float)L_1)));
		// public float Threshold { get { return threshold * norm; } set { threshold = value / norm; } }
		return;
	}
}
// System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1<System.Object>::get_Detected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceDetector_1_get_Detected_m568C6B5F250456A4FA6E37FD25E534186C21566C_gshared (VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3 * __this, const RuntimeMethod* method)
{
	{
		// get { return detected; }
		bool L_0 = (bool)__this->get_detected_3();
		return (bool)L_0;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Object>::set_Detected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_set_Detected_mB8A80B76ED702675EAF0C5A1A6890332354EF395_gshared (VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (detected != value)
		bool L_0 = (bool)__this->get_detected_3();
		bool L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0036;
		}
	}
	{
		// detected = value; DetectedTime = DateTime.Now;
		bool L_2 = ___value0;
		__this->set_detected_3(L_2);
		// detected = value; DetectedTime = DateTime.Now;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3;
		L_3 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		NullCheck((VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3 *)__this);
		((  void (*) (VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3 *, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3 *)__this, (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// if (detected && OnDetected != null) OnDetected();
		bool L_4 = (bool)__this->get_detected_3();
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)__this->get_OnDetected_5();
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		// if (detected && OnDetected != null) OnDetected();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)__this->get_OnDetected_5();
		NullCheck((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_6);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_6, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.DateTime Photon.Voice.AudioUtil/VoiceDetector`1<System.Object>::get_DetectedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  VoiceDetector_1_get_DetectedTime_m3CF1D02AACCE7CE8372B9C1E4F0B58A61D5A27EF_gshared (VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3 * __this, const RuntimeMethod* method)
{
	{
		// public DateTime DetectedTime { get; private set; }
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 )__this->get_U3CDetectedTimeU3Ek__BackingField_4();
		return (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 )L_0;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Object>::set_DetectedTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_set_DetectedTime_mBED23EEA8725EDEF58545C7082CC84FFE77DD22F_gshared (VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		// public DateTime DetectedTime { get; private set; }
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CDetectedTimeU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 Photon.Voice.AudioUtil/VoiceDetector`1<System.Object>::get_ActivityDelayMs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceDetector_1_get_ActivityDelayMs_m58511248ADFCC2AA0EF0397BEF10E05E515AAEE1_gshared (VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3 * __this, const RuntimeMethod* method)
{
	{
		// get { return this.activityDelay; }
		int32_t L_0 = (int32_t)__this->get_activityDelay_6();
		return (int32_t)L_0;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Object>::set_ActivityDelayMs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_set_ActivityDelayMs_mCA81BEDF7293DAB35BF31047FCF08B76FFFF1892_gshared (VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// this.activityDelay = value;
		int32_t L_0 = ___value0;
		__this->set_activityDelay_6(L_0);
		// this.activityDelayValuesCount = value * valuesCountPerSec / 1000;
		int32_t L_1 = ___value0;
		int32_t L_2 = (int32_t)__this->get_valuesCountPerSec_8();
		__this->set_activityDelayValuesCount_9(((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_2))/(int32_t)((int32_t)1000))));
		// }
		return;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Object>::add_OnDetected(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_add_OnDetected_m97FF8809DD0A02C42B0B96133AF4599218CD5664_gshared (VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)__this->get_OnDetected_5();
		V_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)Castclass((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)__this->get_address_of_OnDetected_5();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_6, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_7);
		V_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Object>::remove_OnDetected(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_remove_OnDetected_m1032AEA622560F2FE8F5AC3482871CEC65262A86_gshared (VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)__this->get_OnDetected_5();
		V_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)Castclass((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)__this->get_address_of_OnDetected_5();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_6, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_7);
		V_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Object>::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1__ctor_m46F9C4FCFE704D9AE0BDA3596C5586992078B3E7_gshared (VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3 * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const RuntimeMethod* method)
{
	{
		// internal VoiceDetector(int samplingRate, int numChannels)
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// this.valuesCountPerSec = samplingRate * numChannels;
		int32_t L_0 = ___samplingRate0;
		int32_t L_1 = ___numChannels1;
		__this->set_valuesCountPerSec_8(((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)));
		// this.ActivityDelayMs = 500;
		NullCheck((VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3 *)__this);
		((  void (*) (VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3 *)__this, (int32_t)((int32_t)500), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// this.On = true;
		NullCheck((VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3 *)__this);
		((  void (*) (VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// }
		return;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_Dispose_m46A618726270F4689DED81CE2EC893C7121FA039_gshared (VoiceDetector_1_t6DEBC5DB371A35D05A22ED9B454A82365A75C1E3 * __this, const RuntimeMethod* method)
{
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
// System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>::get_On()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceDetector_1_get_On_m122CD7F20E577E49D20483CC02FD7CD67F1B6368_gshared (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * __this, const RuntimeMethod* method)
{
	{
		// public bool On { get; set; }
		bool L_0 = (bool)__this->get_U3COnU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>::set_On(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_set_On_m49174EFD77CB5EF9B4DE212A29A20E34C9C5114A_gshared (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool On { get; set; }
		bool L_0 = ___value0;
		__this->set_U3COnU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Single Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>::get_Threshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VoiceDetector_1_get_Threshold_m134F18D079020E9E81E7BD7241039FE1DC813CE5_gshared (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * __this, const RuntimeMethod* method)
{
	{
		// public float Threshold { get { return threshold * norm; } set { threshold = value / norm; } }
		float L_0 = (float)__this->get_threshold_2();
		float L_1 = (float)__this->get_norm_1();
		return (float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>::set_Threshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_set_Threshold_m926AEB1DF9016169227562CB1855260B890877DC_gshared (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Threshold { get { return threshold * norm; } set { threshold = value / norm; } }
		float L_0 = ___value0;
		float L_1 = (float)__this->get_norm_1();
		__this->set_threshold_2(((float)((float)L_0/(float)L_1)));
		// public float Threshold { get { return threshold * norm; } set { threshold = value / norm; } }
		return;
	}
}
// System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>::get_Detected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceDetector_1_get_Detected_m9E69A8BECBFAC14EFB2894CDC8F070B53D2CC4C7_gshared (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * __this, const RuntimeMethod* method)
{
	{
		// get { return detected; }
		bool L_0 = (bool)__this->get_detected_3();
		return (bool)L_0;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>::set_Detected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_set_Detected_m7324B94BCE8D957581F1B8520EC8B233A67673D5_gshared (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (detected != value)
		bool L_0 = (bool)__this->get_detected_3();
		bool L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0036;
		}
	}
	{
		// detected = value; DetectedTime = DateTime.Now;
		bool L_2 = ___value0;
		__this->set_detected_3(L_2);
		// detected = value; DetectedTime = DateTime.Now;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3;
		L_3 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		NullCheck((VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC *)__this);
		((  void (*) (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC *, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC *)__this, (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// if (detected && OnDetected != null) OnDetected();
		bool L_4 = (bool)__this->get_detected_3();
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)__this->get_OnDetected_5();
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		// if (detected && OnDetected != null) OnDetected();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)__this->get_OnDetected_5();
		NullCheck((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_6);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_6, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.DateTime Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>::get_DetectedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  VoiceDetector_1_get_DetectedTime_m5807E3E1E2538E8AFDBA9D9681BC90A7FA44837B_gshared (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * __this, const RuntimeMethod* method)
{
	{
		// public DateTime DetectedTime { get; private set; }
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 )__this->get_U3CDetectedTimeU3Ek__BackingField_4();
		return (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 )L_0;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>::set_DetectedTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_set_DetectedTime_m640A37B7ABD6457E16150B241D6C1EE82D6E2AB3_gshared (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		// public DateTime DetectedTime { get; private set; }
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___value0;
		__this->set_U3CDetectedTimeU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>::get_ActivityDelayMs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceDetector_1_get_ActivityDelayMs_mD9258859B136415AD63BC0EC43EB63735FD26447_gshared (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * __this, const RuntimeMethod* method)
{
	{
		// get { return this.activityDelay; }
		int32_t L_0 = (int32_t)__this->get_activityDelay_6();
		return (int32_t)L_0;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>::set_ActivityDelayMs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_set_ActivityDelayMs_m79244EA860010075085485FE23F4063F24219AED_gshared (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// this.activityDelay = value;
		int32_t L_0 = ___value0;
		__this->set_activityDelay_6(L_0);
		// this.activityDelayValuesCount = value * valuesCountPerSec / 1000;
		int32_t L_1 = ___value0;
		int32_t L_2 = (int32_t)__this->get_valuesCountPerSec_8();
		__this->set_activityDelayValuesCount_9(((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_2))/(int32_t)((int32_t)1000))));
		// }
		return;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>::add_OnDetected(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_add_OnDetected_m4CBA16BE83727E99243DF3B0C84F1C6909FAA6FA_gshared (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)__this->get_OnDetected_5();
		V_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)Castclass((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)__this->get_address_of_OnDetected_5();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_6, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_7);
		V_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>::remove_OnDetected(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_remove_OnDetected_mB3097813CFF9247F3EA6637444AA5C7588B4FA2E_gshared (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)__this->get_OnDetected_5();
		V_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)Castclass((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)__this->get_address_of_OnDetected_5();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_6, (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_7);
		V_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1__ctor_m7C6E706C7F37F8989BA63C16BEF0A7509022FA05_gshared (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * __this, int32_t ___samplingRate0, int32_t ___numChannels1, const RuntimeMethod* method)
{
	{
		// internal VoiceDetector(int samplingRate, int numChannels)
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// this.valuesCountPerSec = samplingRate * numChannels;
		int32_t L_0 = ___samplingRate0;
		int32_t L_1 = ___numChannels1;
		__this->set_valuesCountPerSec_8(((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)));
		// this.ActivityDelayMs = 500;
		NullCheck((VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC *)__this);
		((  void (*) (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC *)__this, (int32_t)((int32_t)500), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// this.On = true;
		NullCheck((VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC *)__this);
		((  void (*) (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// }
		return;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceDetector_1_Dispose_mF836354B944D838736ABBFE3B34B4E9A2F535E17_gshared (VoiceDetector_1_t9B792B76CB7D16D5CFF64A76ACF4EF453C3DB2BC * __this, const RuntimeMethod* method)
{
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
// Photon.Voice.AudioUtil/ILevelMeter Photon.Voice.AudioUtil/VoiceLevelDetectCalibrate`1<System.Object>::get_LevelMeter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VoiceLevelDetectCalibrate_1_get_LevelMeter_mF2C177CFA9818E416D624ACDD0D785882140850A_gshared (VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 * __this, const RuntimeMethod* method)
{
	{
		// public ILevelMeter LevelMeter { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_U3CLevelMeterU3Ek__BackingField_0();
		return (RuntimeObject*)L_0;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceLevelDetectCalibrate`1<System.Object>::set_LevelMeter(Photon.Voice.AudioUtil/ILevelMeter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLevelDetectCalibrate_1_set_LevelMeter_mE2B17071840719D19ED3F2DA93EB0D7550B541EA_gshared (VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public ILevelMeter LevelMeter { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CLevelMeterU3Ek__BackingField_0(L_0);
		return;
	}
}
// Photon.Voice.AudioUtil/IVoiceDetector Photon.Voice.AudioUtil/VoiceLevelDetectCalibrate`1<System.Object>::get_VoiceDetector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VoiceLevelDetectCalibrate_1_get_VoiceDetector_mA5CEF86D75E90176FC741DE80AA3C02D3B9BA2CE_gshared (VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 * __this, const RuntimeMethod* method)
{
	{
		// public IVoiceDetector VoiceDetector { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_U3CVoiceDetectorU3Ek__BackingField_1();
		return (RuntimeObject*)L_0;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceLevelDetectCalibrate`1<System.Object>::set_VoiceDetector(Photon.Voice.AudioUtil/IVoiceDetector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLevelDetectCalibrate_1_set_VoiceDetector_m17AA78DD0D05EE6336DF4224A362B6167D904C6F_gshared (VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IVoiceDetector VoiceDetector { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CVoiceDetectorU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceLevelDetectCalibrate`1<System.Object>::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLevelDetectCalibrate_1__ctor_m8A9B37D93E119476961BF9ADA95C289A9940F31D_gshared (VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 * __this, int32_t ___samplingRate0, int32_t ___channels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelMeterFloat_t760D3DBB26D5D489891946710E1711FF9A262455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelMeterShort_t49A5B495010FBAC23F91CE71A7290FABE50EB4B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDetectorFloat_t07D26837C6B174754CB59564212B09934653EEFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceDetectorShort_tEB57780C72B1E5D60E7584C80B244E40B4C0DFDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	Type_t * G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	Type_t * G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	{
		// public VoiceLevelDetectCalibrate(int samplingRate, int channels)
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// var x = new T[1];
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (uint32_t)1);
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
		// if (x[0] is float)
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = 0;
		RuntimeObject * L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_3, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))
		{
			goto IL_003c;
		}
	}
	{
		// LevelMeter = new LevelMeterFloat(samplingRate, channels);
		int32_t L_4 = ___samplingRate0;
		int32_t L_5 = ___channels1;
		LevelMeterFloat_t760D3DBB26D5D489891946710E1711FF9A262455 * L_6 = (LevelMeterFloat_t760D3DBB26D5D489891946710E1711FF9A262455 *)il2cpp_codegen_object_new(LevelMeterFloat_t760D3DBB26D5D489891946710E1711FF9A262455_il2cpp_TypeInfo_var);
		LevelMeterFloat__ctor_m06C495B6C05BE604DA7A76C310B1A8B77E2B6CE6(L_6, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		NullCheck((VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *)__this);
		((  void (*) (VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *)__this, (RuntimeObject*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// VoiceDetector = new VoiceDetectorFloat(samplingRate, channels);
		int32_t L_7 = ___samplingRate0;
		int32_t L_8 = ___channels1;
		VoiceDetectorFloat_t07D26837C6B174754CB59564212B09934653EEFD * L_9 = (VoiceDetectorFloat_t07D26837C6B174754CB59564212B09934653EEFD *)il2cpp_codegen_object_new(VoiceDetectorFloat_t07D26837C6B174754CB59564212B09934653EEFD_il2cpp_TypeInfo_var);
		VoiceDetectorFloat__ctor_mE328ED87C122A1B0B6EABF6701CF315212D8ADE3(L_9, (int32_t)L_7, (int32_t)L_8, /*hidden argument*/NULL);
		NullCheck((VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *)__this);
		((  void (*) (VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *)__this, (RuntimeObject*)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		goto IL_009b;
	}

IL_003c:
	{
		// else if (x[0] is short)
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		RuntimeObject * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_12, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))
		{
			goto IL_006b;
		}
	}
	{
		// LevelMeter = new LevelMeterShort(samplingRate, channels);
		int32_t L_13 = ___samplingRate0;
		int32_t L_14 = ___channels1;
		LevelMeterShort_t49A5B495010FBAC23F91CE71A7290FABE50EB4B7 * L_15 = (LevelMeterShort_t49A5B495010FBAC23F91CE71A7290FABE50EB4B7 *)il2cpp_codegen_object_new(LevelMeterShort_t49A5B495010FBAC23F91CE71A7290FABE50EB4B7_il2cpp_TypeInfo_var);
		LevelMeterShort__ctor_mB1EC2B28D90FD54C518BF4D26CB6719A31940EDB(L_15, (int32_t)L_13, (int32_t)L_14, /*hidden argument*/NULL);
		NullCheck((VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *)__this);
		((  void (*) (VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *)__this, (RuntimeObject*)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// VoiceDetector = new VoiceDetectorShort(samplingRate, channels);
		int32_t L_16 = ___samplingRate0;
		int32_t L_17 = ___channels1;
		VoiceDetectorShort_tEB57780C72B1E5D60E7584C80B244E40B4C0DFDB * L_18 = (VoiceDetectorShort_tEB57780C72B1E5D60E7584C80B244E40B4C0DFDB *)il2cpp_codegen_object_new(VoiceDetectorShort_tEB57780C72B1E5D60E7584C80B244E40B4C0DFDB_il2cpp_TypeInfo_var);
		VoiceDetectorShort__ctor_mF24E281C89FE50EAF0E11DEFC71D63734ADC8D65(L_18, (int32_t)L_16, (int32_t)L_17, /*hidden argument*/NULL);
		NullCheck((VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *)__this);
		((  void (*) (VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *)__this, (RuntimeObject*)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		goto IL_009b;
	}

IL_006b:
	{
		// throw new Exception("VoiceLevelDetectCalibrate: type not supported: " + x[0].GetType());
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = V_0;
		NullCheck(L_19);
		NullCheck((RuntimeObject *)(*((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
		Type_t * L_20;
		L_20 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)(*((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))), /*hidden argument*/NULL);
		Type_t * L_21 = (Type_t *)L_20;
		G_B5_0 = L_21;
		G_B5_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBE3459BCE0B6CF73AD0738811B0D5F99BD764A6A));
		if (L_21)
		{
			G_B6_0 = L_21;
			G_B6_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBE3459BCE0B6CF73AD0738811B0D5F99BD764A6A));
			goto IL_008b;
		}
	}
	{
		G_B7_0 = ((String_t*)(NULL));
		G_B7_1 = G_B5_1;
		goto IL_0090;
	}

IL_008b:
	{
		NullCheck((RuntimeObject *)G_B6_0);
		String_t* L_22;
		L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B6_0);
		G_B7_0 = L_22;
		G_B7_1 = G_B6_1;
	}

IL_0090:
	{
		String_t* L_23;
		L_23 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B((String_t*)G_B7_1, (String_t*)G_B7_0, /*hidden argument*/NULL);
		Exception_t * L_24 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_24, (String_t*)L_23, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VoiceLevelDetectCalibrate_1__ctor_m8A9B37D93E119476961BF9ADA95C289A9940F31D_RuntimeMethod_var)));
	}

IL_009b:
	{
		// calibration = new VoiceDetectorCalibration<T>(VoiceDetector, LevelMeter, samplingRate, channels);
		NullCheck((VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *)__this);
		RuntimeObject* L_25;
		L_25 = ((  RuntimeObject* (*) (VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		NullCheck((VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *)__this);
		RuntimeObject* L_26;
		L_26 = ((  RuntimeObject* (*) (VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		int32_t L_27 = ___samplingRate0;
		int32_t L_28 = ___channels1;
		VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 * L_29 = (VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6));
		((  void (*) (VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 *, RuntimeObject*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)(L_29, (RuntimeObject*)L_25, (RuntimeObject*)L_26, (int32_t)L_27, (int32_t)L_28, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		__this->set_calibration_2(L_29);
		// }
		return;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceLevelDetectCalibrate`1<System.Object>::Calibrate(System.Int32,System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLevelDetectCalibrate_1_Calibrate_mA7D0DE8FBC2E946B287A0D3E9B17ED397E9726DC_gshared (VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 * __this, int32_t ___durationMs0, Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * ___onCalibrated1, const RuntimeMethod* method)
{
	{
		// calibration.Calibrate(durationMs, onCalibrated);
		VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 * L_0 = (VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 *)__this->get_calibration_2();
		int32_t L_1 = ___durationMs0;
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_2 = ___onCalibrated1;
		NullCheck((VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 *)L_0);
		((  void (*) (VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 *, int32_t, Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 *)L_0, (int32_t)L_1, (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		// }
		return;
	}
}
// System.Boolean Photon.Voice.AudioUtil/VoiceLevelDetectCalibrate`1<System.Object>::get_IsCalibrating()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceLevelDetectCalibrate_1_get_IsCalibrating_m45B7DB320E8028165C69EBC07B0FB8E45D728325_gshared (VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsCalibrating { get { return calibration.IsCalibrating; } }
		VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 * L_0 = (VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 *)__this->get_calibration_2();
		NullCheck((VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 *)L_0);
		bool L_1;
		L_1 = ((  bool (*) (VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		return (bool)L_1;
	}
}
// T[] Photon.Voice.AudioUtil/VoiceLevelDetectCalibrate`1<System.Object>::Process(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* VoiceLevelDetectCalibrate_1_Process_m1CE3A60D570F3DF76E5B8BE94A530CA9F6412359_gshared (VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___buf0, const RuntimeMethod* method)
{
	{
		// buf = (LevelMeter as IProcessor<T>).Process(buf);
		NullCheck((VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *)__this);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___buf0;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10))));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = InterfaceFuncInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(0 /* T[] Photon.Voice.IProcessor`1<System.Object>::Process(T[]) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10), (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10))), (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_1);
		___buf0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2;
		// buf = (calibration as IProcessor<T>).Process(buf);
		VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 * L_3 = (VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 *)__this->get_calibration_2();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = ___buf0;
		NullCheck((RuntimeObject*)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5;
		L_5 = InterfaceFuncInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(0 /* T[] Photon.Voice.IProcessor`1<System.Object>::Process(T[]) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10), (RuntimeObject*)L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_4);
		___buf0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_5;
		// buf = (VoiceDetector as IProcessor<T>).Process(buf);
		NullCheck((VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *)__this);
		RuntimeObject* L_6;
		L_6 = ((  RuntimeObject* (*) (VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = ___buf0;
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10))));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8;
		L_8 = InterfaceFuncInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(0 /* T[] Photon.Voice.IProcessor`1<System.Object>::Process(T[]) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10), (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10))), (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_7);
		___buf0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_8;
		// return buf;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = ___buf0;
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_9;
	}
}
// System.Void Photon.Voice.AudioUtil/VoiceLevelDetectCalibrate`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLevelDetectCalibrate_1_Dispose_m217713D2099DE6C2BC51D50F30DD00EE8D2CC5FC_gshared (VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (LevelMeter as IProcessor<T>).Dispose();
		NullCheck((VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *)__this);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10))));
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10))));
		// (VoiceDetector as IProcessor<T>).Dispose();
		NullCheck((VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *)__this);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((VoiceLevelDetectCalibrate_1_t32151F84966E77980783E786FE6E1E58D713BB54 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		NullCheck((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10))));
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10))));
		// calibration.Dispose();
		VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 * L_2 = (VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 *)__this->get_calibration_2();
		NullCheck((VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 *)L_2);
		((  void (*) (VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((VoiceDetectorCalibration_1_tA05671D1420CE1A157C25D3A02FB2F503C07A1F5 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_m5358A7C3085BC8A103D9793A6D2FCB7E36A2D2CE_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereArrayIterator_1_Clone_m2CF9FC5638704567A64DC86DD674EB4E6F380F79_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_2 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m37A95072CA5380DE7F2D6B57990507C92F045BB3_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_7 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject * L_9 = V_0;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_m294488B1E62E494973DD4880121A17A0C8A08118_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_4 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int16>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m1E3BB9C5FB8FC8F95B1E546892933732513FC1F9_gshared (WhereEnumerableIterator_1_tCA508E67A7F0F9D88916DAA9C6CDE55E4AA6F666 * __this, RuntimeObject* ___source0, Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this);
		((  void (*) (Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int16>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B * WhereEnumerableIterator_1_Clone_m6645AF62A5334D2B193EF2B4EF6A0824749E499B_gshared (WhereEnumerableIterator_1_tCA508E67A7F0F9D88916DAA9C6CDE55E4AA6F666 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * L_1 = (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_tCA508E67A7F0F9D88916DAA9C6CDE55E4AA6F666 * L_2 = (WhereEnumerableIterator_1_tCA508E67A7F0F9D88916DAA9C6CDE55E4AA6F666 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tCA508E67A7F0F9D88916DAA9C6CDE55E4AA6F666 *, RuntimeObject*, Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int16>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m62B1EC75BD5EF0919D71B41307F0E14D0AB3ACE6_gshared (WhereEnumerableIterator_1_tCA508E67A7F0F9D88916DAA9C6CDE55E4AA6F666 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this);
		((  void (*) (Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int16>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_mF29863CCBCE6750593F2A0625F1293237C284E10_gshared (WhereEnumerableIterator_1_tCA508E67A7F0F9D88916DAA9C6CDE55E4AA6F666 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int16_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int16>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		int16_t L_6;
		L_6 = InterfaceFuncInvoker0< int16_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int16>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int16_t)L_6;
		Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * L_7 = (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)__this->get_predicate_4();
		int16_t L_8 = V_1;
		NullCheck((Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)L_7, (int16_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		int16_t L_10 = V_1;
		((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int16>::Dispose() */, (Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int16>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mA2923FD952448152F00238B3A5019C8EEBBCB7FF_gshared (WhereEnumerableIterator_1_tCA508E67A7F0F9D88916DAA9C6CDE55E4AA6F666 * __this, Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * L_1 = (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)__this->get_predicate_4();
		Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * L_2 = ___predicate0;
		Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * L_3;
		L_3 = ((  Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * (*) (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *, Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)L_1, (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_tCA508E67A7F0F9D88916DAA9C6CDE55E4AA6F666 * L_4 = (WhereEnumerableIterator_1_tCA508E67A7F0F9D88916DAA9C6CDE55E4AA6F666 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tCA508E67A7F0F9D88916DAA9C6CDE55E4AA6F666 *, RuntimeObject*, Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mED9FE30D754A0ABE546A685684F523BC57509D0E_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, RuntimeObject* ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereEnumerableIterator_1_Clone_mB3FE252392A8FEA3638826A2C4D1195A4D3743BB_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_2 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_mB841131399B8BA11B9D6DB37E11F90B1BFFBDA2D_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m819D14CC69CC48B0B84E497DFF1953AAFFF13333_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int32_t)L_6;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_8 = V_1;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_10 = V_1;
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mD1B249C431E67DD9B73D781BEA79EF23E556B75E_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_2 = ___predicate0;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_3;
		L_3 = ((  Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_4 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mE8BFA73027409E16668838C4664CE7C48F3254DF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereEnumerableIterator_1_Clone_mD8AFDE4531ADC466665EEE89C052BFF645C1BDD6_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_2 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m4E1339513102BB6B49AD33EDB569D3FFD24ED023_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m6D8A420AEB325BF252721010781EF31CF64D73FF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m4016C553BF1DF1102C2A7B769244B2DC2EA3E716_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_4 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m591288EAD97C8D9D310610BFA96A98922E8AF347_gshared (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 * __this, RuntimeObject* ___source0, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
		((  void (*) (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF * WhereEnumerableIterator_1_Clone_m4ADE59B0DB8541F1FA457BE9CAD3EF2868817E56_gshared (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_1 = (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 * L_2 = (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 *, RuntimeObject*, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m64C95774F2781EB65AC8FE5A6CD5043BF61CEED8_gshared (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
		((  void (*) (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m1ABB7BE9CE39660B4C3E276C11F7757E9DDC4BD0_gshared (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = InterfaceFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_6;
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_7 = (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)__this->get_predicate_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_1;
		NullCheck((Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_7, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_1;
		((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>::Dispose() */, (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m1F41645152C3BCC477C7D1665291990DC5239347_gshared (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 * __this, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_1 = (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)__this->get_predicate_4();
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_2 = ___predicate0;
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_3;
		L_3 = ((  Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * (*) (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_1, (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 * L_4 = (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 *, RuntimeObject*, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector4>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m2FE5EE5EA89604DAEA0FA56A0D4621828DC5C973_gshared (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E * __this, RuntimeObject* ___source0, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
		((  void (*) (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector4>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F * WhereEnumerableIterator_1_Clone_m9A9E2C9F0C5D4A4CFA7A9B1C26EBDFA66C266A40_gshared (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_1 = (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E * L_2 = (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E *, RuntimeObject*, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector4>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_mB9B0CAB988738D879AB4781D8FC2FE10D0D4A38A_gshared (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
		((  void (*) (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector4>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m65BBB5587A0B647868632178750A4068D84020AF_gshared (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6;
		L_6 = InterfaceFuncInvoker0< Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Vector4>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_6;
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_7 = (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)__this->get_predicate_4();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8 = V_1;
		NullCheck((Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_7, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_10 = V_1;
		((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>::Dispose() */, (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector4>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m374142FAA1FCE8C47E3308F725ADA92FBF247578_gshared (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E * __this, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_1 = (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)__this->get_predicate_4();
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_2 = ___predicate0;
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_3;
		L_3 = ((  Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * (*) (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_1, (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E * L_4 = (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E *, RuntimeObject*, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_m3EB9274A8CE9B71A41BA4B8E9E22D9735713DFA3_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereListIterator_1_Clone_mF7E182440FC39477FC20CA48E0FAB270FED512F4_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_2 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_m11D0FD0206FC9B236608A1150FB26790BA09B2E5_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_11 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m1AD3C3728A42EA6188BB39667495E67F8A078501_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_4 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m753B845FC177A4500A5809EA02B94FD14C1017E9_gshared (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D * __this, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_m6D78D257291467E05FDD35D57F87C1B85FC13CF9_gshared (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D * L_3 = (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D *, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mC8EA524E00550DADCB86D2D527C1BFDEE335EDF6_gshared (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_1 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_4 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_6 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_8 = V_0;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_10 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_11 = V_0;
		NullCheck((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_10, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_14 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mB95AC53D5283844BEFB7F84CFABBED87446942F4_gshared (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int16,System.Int16>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mB5D9EDFE11577BF0DDE7DB19F07A00D9163E96E9_gshared (WhereSelectArrayIterator_2_t715FB6279FFB5ABD9697099DBFF0EF05F5B3906E * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___source0, Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * ___predicate1, Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this);
		((  void (*) (Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int16,System.Int16>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B * WhereSelectArrayIterator_2_Clone_mFF28257870DC315BC534DD10EE815DBD191ADAAC_gshared (WhereSelectArrayIterator_2_t715FB6279FFB5ABD9697099DBFF0EF05F5B3906E * __this, const RuntimeMethod* method)
{
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)__this->get_source_3();
		Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * L_1 = (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)__this->get_predicate_4();
		Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * L_2 = (Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t715FB6279FFB5ABD9697099DBFF0EF05F5B3906E * L_3 = (WhereSelectArrayIterator_2_t715FB6279FFB5ABD9697099DBFF0EF05F5B3906E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t715FB6279FFB5ABD9697099DBFF0EF05F5B3906E *, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *, Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)L_0, (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)L_1, (Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int16,System.Int16>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m203330BD89272858527C95C2949E7AB3F9EDBF8A_gshared (WhereSelectArrayIterator_2_t715FB6279FFB5ABD9697099DBFF0EF05F5B3906E * __this, const RuntimeMethod* method)
{
	int16_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int16_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (int16_t)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * L_6 = (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * L_7 = (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)__this->get_predicate_4();
		int16_t L_8 = V_0;
		NullCheck((Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)L_7, (int16_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * L_10 = (Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D *)__this->get_selector_5();
		int16_t L_11 = V_0;
		NullCheck((Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D *)L_10);
		int16_t L_12;
		L_12 = ((  int16_t (*) (Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D *)L_10, (int16_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_14 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int16>::Dispose() */, (Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int16,System.Int16>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mB3CD09A6D37A24BCF9FA4D2406F36B86024F5A56_gshared (WhereSelectArrayIterator_2_t715FB6279FFB5ABD9697099DBFF0EF05F5B3906E * __this, Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tCA508E67A7F0F9D88916DAA9C6CDE55E4AA6F666 * L_1 = (WhereEnumerableIterator_1_tCA508E67A7F0F9D88916DAA9C6CDE55E4AA6F666 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_tCA508E67A7F0F9D88916DAA9C6CDE55E4AA6F666 *, RuntimeObject*, Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Int32>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mF52E446394C3F8DFB90C987A3244FCCC6BA600AD_gshared (WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectArrayIterator_2_Clone_m22ABB7CEF3FF8768C972AF44377BA8D2267B1F4F_gshared (WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C * __this, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_2 = (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C * L_3 = (WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C *, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mE90B9B8E6833394962A9373FB647D6361B3B6796_gshared (WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (int32_t)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_6 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_8 = V_0;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_10 = (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)__this->get_selector_5();
		int32_t L_11 = V_0;
		NullCheck((Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_10);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_10, (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m51C6FAFCE81BD511E633CBBEC8E2A29EF144F1D7_gshared (WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mCB64A76E8C03C791C57D44E38D025D1C6EC7B880_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_m4ACA936AD86CEAB027D82949C74DEDD882A800D3_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * L_3 = (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mCF08A119CF0CC000264B5B6BA5EC4B40CC9640CC_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_10 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_11 = V_0;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m21B504E9811B348A8694F7C71E07ABCCDE69807B_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m808EB14C47B8DFA71B2AB70E4D0681C7EDE61A90_gshared (WhereSelectArrayIterator_2_t24DAF3FD3D83CD879E4F074D65CFAA4A9B39B26B * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___source0, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * ___predicate1, Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
		((  void (*) (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF * WhereSelectArrayIterator_2_Clone_m0DA4E243A7060AEF35B3AE67D031B0DCA56EC90D_gshared (WhereSelectArrayIterator_2_t24DAF3FD3D83CD879E4F074D65CFAA4A9B39B26B * __this, const RuntimeMethod* method)
{
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)__this->get_source_3();
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_1 = (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)__this->get_predicate_4();
		Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 * L_2 = (Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t24DAF3FD3D83CD879E4F074D65CFAA4A9B39B26B * L_3 = (WhereSelectArrayIterator_2_t24DAF3FD3D83CD879E4F074D65CFAA4A9B39B26B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t24DAF3FD3D83CD879E4F074D65CFAA4A9B39B26B *, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_0, (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_1, (Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m7F694AF8CE407FFC194746F77236F6D76CD294CC_gshared (WhereSelectArrayIterator_2_t24DAF3FD3D83CD879E4F074D65CFAA4A9B39B26B * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_6 = (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_7 = (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)__this->get_predicate_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		NullCheck((Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_7, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 * L_10 = (Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 *)__this->get_selector_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		NullCheck((Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 *)L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 *)L_10, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_14 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>::Dispose() */, (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m1589863FE5A28E1011045D41C94D1BF2019DE43C_gshared (WhereSelectArrayIterator_2_t24DAF3FD3D83CD879E4F074D65CFAA4A9B39B26B * __this, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 * L_1 = (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 *, RuntimeObject*, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Vector4,UnityEngine.Vector4>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m45AF94BD8E33E9589A5F7FA4F5E2081CA3C44D60_gshared (WhereSelectArrayIterator_2_t001A753C631DF1C20F92EEB0BB9DACBBEB2E3D17 * __this, Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___source0, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * ___predicate1, Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
		((  void (*) (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Vector4,UnityEngine.Vector4>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F * WhereSelectArrayIterator_2_Clone_m043FFAB244686CEA4669577B29D7E18F3A911DD0_gshared (WhereSelectArrayIterator_2_t001A753C631DF1C20F92EEB0BB9DACBBEB2E3D17 * __this, const RuntimeMethod* method)
{
	{
		Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_0 = (Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)__this->get_source_3();
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_1 = (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)__this->get_predicate_4();
		Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 * L_2 = (Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t001A753C631DF1C20F92EEB0BB9DACBBEB2E3D17 * L_3 = (WhereSelectArrayIterator_2_t001A753C631DF1C20F92EEB0BB9DACBBEB2E3D17 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t001A753C631DF1C20F92EEB0BB9DACBBEB2E3D17 *, Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)L_0, (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_1, (Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Vector4,UnityEngine.Vector4>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mB1B86ED020A2CF679B4EFB4B6D3635298F8B024F_gshared (WhereSelectArrayIterator_2_t001A753C631DF1C20F92EEB0BB9DACBBEB2E3D17 * __this, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_1 = (Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_6 = (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_7 = (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)__this->get_predicate_4();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8 = V_0;
		NullCheck((Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_7, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 * L_10 = (Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 *)__this->get_selector_5();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_11 = V_0;
		NullCheck((Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 *)L_10);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12;
		L_12 = ((  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  (*) (Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 *)L_10, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_14 = (Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>::Dispose() */, (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Vector4,UnityEngine.Vector4>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mB7CB9B253B16A3E4C4C04AC753AC24F2C5D35805_gshared (WhereSelectArrayIterator_2_t001A753C631DF1C20F92EEB0BB9DACBBEB2E3D17 * __this, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E * L_1 = (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E *, RuntimeObject*, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m634CE03BF281A9966A650B2BA6ED44AD72E5879F_gshared (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * __this, RuntimeObject* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_m82474F2DE866D303C5767C7B58EE3213342A29F0_gshared (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * L_3 = (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 *, RuntimeObject*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mAB2AD9EAF60076FC567705357B1A87DCC0FDC6F7_gshared (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m9AED0076EB03B4E46908FB05BEB74852F542382E_gshared (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_8 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_11 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_12 = V_1;
		NullCheck((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_11, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mDF3B69D0756C062EA752AA0B60FA20A65396313F_gshared (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int16,System.Int16>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mA91F6BFDE09B57623D4C37CA0E3957533BDCFE9F_gshared (WhereSelectEnumerableIterator_2_tA9CF203B0187CB8B2E0EA33761936A7F2049E894 * __this, RuntimeObject* ___source0, Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * ___predicate1, Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this);
		((  void (*) (Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int16,System.Int16>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B * WhereSelectEnumerableIterator_2_Clone_mD9B08C5888FB9A0F1D7330ED0F8EBDC7D74B7CEB_gshared (WhereSelectEnumerableIterator_2_tA9CF203B0187CB8B2E0EA33761936A7F2049E894 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * L_1 = (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)__this->get_predicate_4();
		Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * L_2 = (Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tA9CF203B0187CB8B2E0EA33761936A7F2049E894 * L_3 = (WhereSelectEnumerableIterator_2_tA9CF203B0187CB8B2E0EA33761936A7F2049E894 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tA9CF203B0187CB8B2E0EA33761936A7F2049E894 *, RuntimeObject*, Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *, Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)L_1, (Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int16,System.Int16>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mE0F857AC1A4596A4997C4821DCB6410BDC4EB388_gshared (WhereSelectEnumerableIterator_2_tA9CF203B0187CB8B2E0EA33761936A7F2049E894 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this);
		((  void (*) (Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int16,System.Int16>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mA826B65DD2AFD0D5062791D3E64D57062660102F_gshared (WhereSelectEnumerableIterator_2_tA9CF203B0187CB8B2E0EA33761936A7F2049E894 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int16_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int16>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		int16_t L_6;
		L_6 = InterfaceFuncInvoker0< int16_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int16>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int16_t)L_6;
		Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * L_7 = (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * L_8 = (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)__this->get_predicate_4();
		int16_t L_9 = V_1;
		NullCheck((Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)L_8, (int16_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * L_11 = (Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D *)__this->get_selector_5();
		int16_t L_12 = V_1;
		NullCheck((Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D *)L_11);
		int16_t L_13;
		L_13 = ((  int16_t (*) (Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D *)L_11, (int16_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int16>::Dispose() */, (Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int16,System.Int16>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m254FD3B0221DD11A3CCE0F98F5CE7A906DCADE1D_gshared (WhereSelectEnumerableIterator_2_tA9CF203B0187CB8B2E0EA33761936A7F2049E894 * __this, Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tCA508E67A7F0F9D88916DAA9C6CDE55E4AA6F666 * L_1 = (WhereEnumerableIterator_1_tCA508E67A7F0F9D88916DAA9C6CDE55E4AA6F666 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_tCA508E67A7F0F9D88916DAA9C6CDE55E4AA6F666 *, RuntimeObject*, Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m24BFAF64B8AEF6BAC15970E8CE4F9192236CCC11_gshared (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF * __this, RuntimeObject* ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectEnumerableIterator_2_Clone_m48529E6B525DC0A3DE4C3C65EC2F0A1D24A4E263_gshared (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_2 = (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF * L_3 = (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mB529F42305C163995535C0696422D8410CB02BB3_gshared (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mC11B40068E87BD32531EC0895238F0EF85DDB398_gshared (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int32_t)L_6;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_8 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_11 = (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)__this->get_selector_5();
		int32_t L_12 = V_1;
		NullCheck((Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m6B10C66012139D931A3FAC2CF5B589B789C2ABF4_gshared (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m6DFD3E949A8FA5121F520D501B78C17E84EBDFAC_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_mD5F17A02281E6D1529D117CFF2E0F8C347D1B13F_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * L_3 = (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mAA70577DEF67CEC98FE677984AE2175B7D4E4D00_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m95AEE737A22EFFFE6557F448BF5AFCC6241D0BD7_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_11 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m72A38A8170E8B837F5C090642BE08E3845A8EB37_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m807BEFEC08E9BAF29440531527903DE407E2A3CB_gshared (WhereSelectEnumerableIterator_2_tA09EBC9BF1813566F035DFC8B7FC004BBEA4C3C0 * __this, RuntimeObject* ___source0, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * ___predicate1, Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
		((  void (*) (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF * WhereSelectEnumerableIterator_2_Clone_mD3250EBFB8E6666C7254ABE1AA13AD6C4AF8ED2C_gshared (WhereSelectEnumerableIterator_2_tA09EBC9BF1813566F035DFC8B7FC004BBEA4C3C0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_1 = (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)__this->get_predicate_4();
		Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 * L_2 = (Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tA09EBC9BF1813566F035DFC8B7FC004BBEA4C3C0 * L_3 = (WhereSelectEnumerableIterator_2_tA09EBC9BF1813566F035DFC8B7FC004BBEA4C3C0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tA09EBC9BF1813566F035DFC8B7FC004BBEA4C3C0 *, RuntimeObject*, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_1, (Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m5C23FE6FD9C1B54D717892409C8E9C9B32784DF3_gshared (WhereSelectEnumerableIterator_2_tA09EBC9BF1813566F035DFC8B7FC004BBEA4C3C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
		((  void (*) (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mEAAF412434EE10744D4A5BC6C5DE80C98E31F86F_gshared (WhereSelectEnumerableIterator_2_tA09EBC9BF1813566F035DFC8B7FC004BBEA4C3C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = InterfaceFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_6;
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_7 = (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_8 = (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)__this->get_predicate_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_1;
		NullCheck((Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_8, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 * L_11 = (Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 *)__this->get_selector_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_1;
		NullCheck((Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 *)L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 *)L_11, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>::Dispose() */, (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m4A86FF6DB034FEFF6CAC67594004D07C166D751D_gshared (WhereSelectEnumerableIterator_2_tA09EBC9BF1813566F035DFC8B7FC004BBEA4C3C0 * __this, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 * L_1 = (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 *, RuntimeObject*, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector4,UnityEngine.Vector4>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m85DBE972EA62B77DF991DFE5733EA1AD5C4194DE_gshared (WhereSelectEnumerableIterator_2_tC1CC19A0F9ED270F282DF86D7C56F9FAE964E6DE * __this, RuntimeObject* ___source0, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * ___predicate1, Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
		((  void (*) (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector4,UnityEngine.Vector4>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F * WhereSelectEnumerableIterator_2_Clone_mB1397658B9F82C3FBDE88D8D14B61AEB08C8BAF1_gshared (WhereSelectEnumerableIterator_2_tC1CC19A0F9ED270F282DF86D7C56F9FAE964E6DE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_1 = (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)__this->get_predicate_4();
		Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 * L_2 = (Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tC1CC19A0F9ED270F282DF86D7C56F9FAE964E6DE * L_3 = (WhereSelectEnumerableIterator_2_tC1CC19A0F9ED270F282DF86D7C56F9FAE964E6DE *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tC1CC19A0F9ED270F282DF86D7C56F9FAE964E6DE *, RuntimeObject*, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_1, (Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector4,UnityEngine.Vector4>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m2BA61857860A94050076D53CD9280756E0F97725_gshared (WhereSelectEnumerableIterator_2_tC1CC19A0F9ED270F282DF86D7C56F9FAE964E6DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
		((  void (*) (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector4,UnityEngine.Vector4>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m777A14C3CE1D8791E49C1D1B0956AD5CC473FCDA_gshared (WhereSelectEnumerableIterator_2_tC1CC19A0F9ED270F282DF86D7C56F9FAE964E6DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6;
		L_6 = InterfaceFuncInvoker0< Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Vector4>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_6;
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_7 = (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_8 = (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)__this->get_predicate_4();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_9 = V_1;
		NullCheck((Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_8, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 * L_11 = (Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 *)__this->get_selector_5();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12 = V_1;
		NullCheck((Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 *)L_11);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_13;
		L_13 = ((  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  (*) (Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 *)L_11, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>::Dispose() */, (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector4,UnityEngine.Vector4>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m8962A8A123188D1AF0535A97BF28CA71AEB04E9C_gshared (WhereSelectEnumerableIterator_2_tC1CC19A0F9ED270F282DF86D7C56F9FAE964E6DE * __this, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E * L_1 = (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E *, RuntimeObject*, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m530D4471452DA4089C130C0D9FC5910907BF6007_gshared (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 * __this, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m72EFE228727E1A3BF476F5CF995391D549ED4C1E_gshared (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 * __this, const RuntimeMethod* method)
{
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 * L_3 = (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 *, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mB979C50B4E1833CA8C6A8394B5503C7FEB4A608A_gshared (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_3 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		NullCheck((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3);
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  L_4;
		L_4 = ((  Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  (*) (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_5 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_6();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_inline((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_8 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_11 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_12 = V_1;
		NullCheck((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_11, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_14 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mB12D7743450CEE6D221C22755DDB9F022B7E24B1_gshared (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int16,System.Int16>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m1665B165070DE83F8929FA2132A4F2B5AE1A6D37_gshared (WhereSelectListIterator_2_t8ACB1E9FD1514AD3F4E194D5E7600F4533E014B4 * __this, List_1_t985353431229C8151763A38589D03FBD829D85E5 * ___source0, Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * ___predicate1, Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this);
		((  void (*) (Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t985353431229C8151763A38589D03FBD829D85E5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int16,System.Int16>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B * WhereSelectListIterator_2_Clone_m3893BF040DCF7F9792D74A3CE2544AEB0EF0CC1A_gshared (WhereSelectListIterator_2_t8ACB1E9FD1514AD3F4E194D5E7600F4533E014B4 * __this, const RuntimeMethod* method)
{
	{
		List_1_t985353431229C8151763A38589D03FBD829D85E5 * L_0 = (List_1_t985353431229C8151763A38589D03FBD829D85E5 *)__this->get_source_3();
		Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * L_1 = (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)__this->get_predicate_4();
		Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * L_2 = (Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D *)__this->get_selector_5();
		WhereSelectListIterator_2_t8ACB1E9FD1514AD3F4E194D5E7600F4533E014B4 * L_3 = (WhereSelectListIterator_2_t8ACB1E9FD1514AD3F4E194D5E7600F4533E014B4 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t8ACB1E9FD1514AD3F4E194D5E7600F4533E014B4 *, List_1_t985353431229C8151763A38589D03FBD829D85E5 *, Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *, Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t985353431229C8151763A38589D03FBD829D85E5 *)L_0, (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)L_1, (Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Int16,System.Int16>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mFB47690CB58AA164BFF5136E6A055DBF273C8238_gshared (WhereSelectListIterator_2_t8ACB1E9FD1514AD3F4E194D5E7600F4533E014B4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int16_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t985353431229C8151763A38589D03FBD829D85E5 * L_3 = (List_1_t985353431229C8151763A38589D03FBD829D85E5 *)__this->get_source_3();
		NullCheck((List_1_t985353431229C8151763A38589D03FBD829D85E5 *)L_3);
		Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813  L_4;
		L_4 = ((  Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813  (*) (List_1_t985353431229C8151763A38589D03FBD829D85E5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t985353431229C8151763A38589D03FBD829D85E5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813 * L_5 = (Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813 *)__this->get_address_of_enumerator_6();
		int16_t L_6;
		L_6 = Enumerator_get_Current_mAE16C5472096C2336079B2487034152D64054833_inline((Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813 *)(Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (int16_t)L_6;
		Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * L_7 = (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * L_8 = (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)__this->get_predicate_4();
		int16_t L_9 = V_1;
		NullCheck((Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)L_8, (int16_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D * L_11 = (Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D *)__this->get_selector_5();
		int16_t L_12 = V_1;
		NullCheck((Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D *)L_11);
		int16_t L_13;
		L_13 = ((  int16_t (*) (Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D *, int16_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t5D19F52DB80D0B9DF04F4159B2D36CDF8D5F6F4D *)L_11, (int16_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813 * L_14 = (Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m9CEA6A4E0A1CC86075937DCECD5E148265615A5A((Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813 *)(Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int16>::Dispose() */, (Iterator_1_tD6B7A6D20ADB45FD90693506286A5D9EBBE9B53B *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int16,System.Int16>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m8AE2C9CABF96138ECFA3EAF8A49CD5692B082318_gshared (WhereSelectListIterator_2_t8ACB1E9FD1514AD3F4E194D5E7600F4533E014B4 * __this, Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tCA508E67A7F0F9D88916DAA9C6CDE55E4AA6F666 * L_1 = (WhereEnumerableIterator_1_tCA508E67A7F0F9D88916DAA9C6CDE55E4AA6F666 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_tCA508E67A7F0F9D88916DAA9C6CDE55E4AA6F666 *, RuntimeObject*, Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t8662C7F1465292E8962EEA48D3B09DF7BB5A1A77 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m895E21AE9AB1E3F19B3147EDC913BB567B1A65C7_gshared (WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325 * __this, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectListIterator_2_Clone_mEE6375B2C79172E13732CA49AAF389493C1C7100_gshared (WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325 * __this, const RuntimeMethod* method)
{
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_2 = (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)__this->get_selector_5();
		WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325 * L_3 = (WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325 *, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m637B802A50BA94CD511636CAF5D912C6B96B18A1_gshared (WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_3 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)__this->get_source_3();
		NullCheck((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_3);
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  L_4;
		L_4 = ((  Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * L_5 = (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)__this->get_address_of_enumerator_6();
		int32_t L_6;
		L_6 = Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (int32_t)L_6;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_8 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_11 = (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)__this->get_selector_5();
		int32_t L_12 = V_1;
		NullCheck((Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * L_14 = (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m7F75FF628D2E99D2BA127B84FDD08DD88048ADB0_gshared (WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325 * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mCF313A191371C8CCC2E79D89A3BF21714EFDB20E_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m667BCD94E83BB3A02AF2D66E07B089FA86971342_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * L_3 = (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mEE0E8B173345B059100E0736D106FFAE0C2D29CA_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_11 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_14 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAC87184664F73DD7F3EC4AB4CE2BDE71BE76249D_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mABEB92292FDAF81B22075A74F097FD37C3B5017E_gshared (WhereSelectListIterator_2_tFC94707EF3202EDF8F9A7FA62950623145D647B8 * __this, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___source0, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * ___predicate1, Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
		((  void (*) (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF * WhereSelectListIterator_2_Clone_mC9985CEE9A30F56C8B805FB1E4C8275A358C66C7_gshared (WhereSelectListIterator_2_tFC94707EF3202EDF8F9A7FA62950623145D647B8 * __this, const RuntimeMethod* method)
{
	{
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)__this->get_source_3();
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_1 = (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)__this->get_predicate_4();
		Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 * L_2 = (Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 *)__this->get_selector_5();
		WhereSelectListIterator_2_tFC94707EF3202EDF8F9A7FA62950623145D647B8 * L_3 = (WhereSelectListIterator_2_tFC94707EF3202EDF8F9A7FA62950623145D647B8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tFC94707EF3202EDF8F9A7FA62950623145D647B8 *, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)L_0, (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_1, (Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mF3D68A464F84D6482B343D59918218D79184DC85_gshared (WhereSelectListIterator_2_tFC94707EF3202EDF8F9A7FA62950623145D647B8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_3 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)__this->get_source_3();
		NullCheck((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)L_3);
		Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995  L_4;
		L_4 = ((  Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995  (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * L_5 = (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *)__this->get_address_of_enumerator_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_inline((Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *)(Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_6;
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_7 = (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_8 = (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)__this->get_predicate_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_1;
		NullCheck((Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_8, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 * L_11 = (Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 *)__this->get_selector_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_1;
		NullCheck((Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 *)L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tB224684875B4AE61A1AA0AA7CF56FECBA7C43441 *)L_11, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * L_14 = (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m9FB106B6D83E0AEA63A4ADE22BC85158FCB05735((Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *)(Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>::Dispose() */, (Iterator_1_t04F5D870FD247BBBEE27254587FA10F440D4EEFF *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector3,UnityEngine.Vector3>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m6031BB31C1626503BA51F12125C7B793019C90C8_gshared (WhereSelectListIterator_2_tFC94707EF3202EDF8F9A7FA62950623145D647B8 * __this, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 * L_1 = (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t0E01F06572EA26BE9E79530811037753CF6B3BF8 *, RuntimeObject*, Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t3041FD3183D19FE8416AE2E43A6398B2C06B7269 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector4,UnityEngine.Vector4>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m78051DC427D464A64912907CC7ECD07C5EFC4051_gshared (WhereSelectListIterator_2_t73FD5DF7B320D5154C368D51D5ADA4EB669CDF09 * __this, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___source0, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * ___predicate1, Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
		((  void (*) (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector4,UnityEngine.Vector4>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F * WhereSelectListIterator_2_Clone_m2F11AC7DDB4DD0712C95AA0AFE54A4AB21848A1E_gshared (WhereSelectListIterator_2_t73FD5DF7B320D5154C368D51D5ADA4EB669CDF09 * __this, const RuntimeMethod* method)
{
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_0 = (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)__this->get_source_3();
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_1 = (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)__this->get_predicate_4();
		Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 * L_2 = (Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 *)__this->get_selector_5();
		WhereSelectListIterator_2_t73FD5DF7B320D5154C368D51D5ADA4EB669CDF09 * L_3 = (WhereSelectListIterator_2_t73FD5DF7B320D5154C368D51D5ADA4EB669CDF09 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t73FD5DF7B320D5154C368D51D5ADA4EB669CDF09 *, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_0, (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_1, (Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector4,UnityEngine.Vector4>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE6591FF9060534AA33830F6B9F42831B30A2CBBB_gshared (WhereSelectListIterator_2_t73FD5DF7B320D5154C368D51D5ADA4EB669CDF09 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_3 = (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)__this->get_source_3();
		NullCheck((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_3);
		Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781  L_4;
		L_4 = ((  Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781  (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 * L_5 = (Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 *)__this->get_address_of_enumerator_6();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6;
		L_6 = Enumerator_get_Current_m32439407464C10970CC963587D0D2E0DD861ED9B_inline((Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 *)(Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_6;
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_7 = (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_8 = (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)__this->get_predicate_4();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_9 = V_1;
		NullCheck((Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_8, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 * L_11 = (Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 *)__this->get_selector_5();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12 = V_1;
		NullCheck((Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 *)L_11);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_13;
		L_13 = ((  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  (*) (Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t19A2FBD63BF4B3394113A8408A583765B31EA887 *)L_11, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 * L_14 = (Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mF378337D9CA43F03755456627ECC0436E94A8B9C((Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 *)(Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector4>::Dispose() */, (Iterator_1_t6AF67E04708C24763DAD54E836443FA31B92277F *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector4,UnityEngine.Vector4>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m62BF1DB06C52A957DA1DB7CD6EF09686F5EE6705_gshared (WhereSelectListIterator_2_t73FD5DF7B320D5154C368D51D5ADA4EB669CDF09 * __this, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E * L_1 = (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_tCA44A1FC5E609CADA6F3EDC28F98FEC656BCCD8E *, RuntimeObject*, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void MS.Internal.Xml.Linq.ComponentModel.XDeferredAxis`1<System.Object>::.ctor(System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,System.Collections.Generic.IEnumerable`1<T>>,System.Xml.Linq.XElement,System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDeferredAxis_1__ctor_mF31626FBBCEA80BD14E4AC5E58F7A7F5BF628031_gshared (XDeferredAxis_1_t579860EE72CB883274B0B5217C39487FA07F073B * __this, Func_3_tF89D1696E961C7EA5D26DEAEDD6A2F37BB5B660A * ___func0, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___element1, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name2, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		Func_3_tF89D1696E961C7EA5D26DEAEDD6A2F37BB5B660A * L_0 = ___func0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral013505A10216A9CFC58EE2BA9FD767CABA4CDC23)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XDeferredAxis_1__ctor_mF31626FBBCEA80BD14E4AC5E58F7A7F5BF628031_RuntimeMethod_var)));
	}

IL_0014:
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_2 = ___element1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27F5946EF97DA519B61A2DE957327C84C529D60F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XDeferredAxis_1__ctor_mF31626FBBCEA80BD14E4AC5E58F7A7F5BF628031_RuntimeMethod_var)));
	}

IL_0022:
	{
		Func_3_tF89D1696E961C7EA5D26DEAEDD6A2F37BB5B660A * L_4 = ___func0;
		__this->set_func_0(L_4);
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_5 = ___element1;
		__this->set_element_1(L_5);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_6 = ___name2;
		__this->set_name_2(L_6);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> MS.Internal.Xml.Linq.ComponentModel.XDeferredAxis`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDeferredAxis_1_GetEnumerator_m69C039FBA9652164A424A52BB3282A7530060C0D_gshared (XDeferredAxis_1_t579860EE72CB883274B0B5217C39487FA07F073B * __this, const RuntimeMethod* method)
{
	{
		Func_3_tF89D1696E961C7EA5D26DEAEDD6A2F37BB5B660A * L_0 = (Func_3_tF89D1696E961C7EA5D26DEAEDD6A2F37BB5B660A *)__this->get_func_0();
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_1 = (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)__this->get_element_1();
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_2 = (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)__this->get_name_2();
		NullCheck((Func_3_tF89D1696E961C7EA5D26DEAEDD6A2F37BB5B660A *)L_0);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Func_3_tF89D1696E961C7EA5D26DEAEDD6A2F37BB5B660A *, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Func_3_tF89D1696E961C7EA5D26DEAEDD6A2F37BB5B660A *)L_0, (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 *)L_1, (XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1), (RuntimeObject*)L_3);
		return (RuntimeObject*)L_4;
	}
}
// System.Collections.IEnumerator MS.Internal.Xml.Linq.ComponentModel.XDeferredAxis`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDeferredAxis_1_System_Collections_IEnumerable_GetEnumerator_m7ADCD8A49BFE9E3A84D2955C27C3F5EB2ABB4B66_gshared (XDeferredAxis_1_t579860EE72CB883274B0B5217C39487FA07F073B * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XDeferredAxis_1_t579860EE72CB883274B0B5217C39487FA07F073B *)__this);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (XDeferredAxis_1_t579860EE72CB883274B0B5217C39487FA07F073B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((XDeferredAxis_1_t579860EE72CB883274B0B5217C39487FA07F073B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (RuntimeObject*)L_0;
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
// System.Void MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1<System.Object>::.ctor(System.Func`3<System.Xml.Linq.XElement,System.Xml.Linq.XName,T>,System.Xml.Linq.XElement,System.Xml.Linq.XName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XDeferredSingleton_1__ctor_m7788B5DD2DC93CAF2BDB3935678C13249B5CD7AA_gshared (XDeferredSingleton_1_tB946A0C7BE3A484971FF18BC1C0A2106202C1EC8 * __this, Func_3_t8AAFC034325BBE5359CC494DBD4E2EB3555037C4 * ___func0, XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___element1, XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___name2, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		Func_3_t8AAFC034325BBE5359CC494DBD4E2EB3555037C4 * L_0 = ___func0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral013505A10216A9CFC58EE2BA9FD767CABA4CDC23)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XDeferredSingleton_1__ctor_m7788B5DD2DC93CAF2BDB3935678C13249B5CD7AA_RuntimeMethod_var)));
	}

IL_0014:
	{
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_2 = ___element1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27F5946EF97DA519B61A2DE957327C84C529D60F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XDeferredSingleton_1__ctor_m7788B5DD2DC93CAF2BDB3935678C13249B5CD7AA_RuntimeMethod_var)));
	}

IL_0022:
	{
		Func_3_t8AAFC034325BBE5359CC494DBD4E2EB3555037C4 * L_4 = ___func0;
		__this->set_func_0(L_4);
		XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * L_5 = ___element1;
		__this->set_element_1(L_5);
		XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * L_6 = ___name2;
		__this->set_name_2(L_6);
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
// System.Void System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_mE68E63173C17EF13FA0F533F0AA34F4FA753674F_gshared (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * __this, ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * ___extractKey0, int32_t ___capacity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_buckets_0(L_1);
		int32_t L_2 = ___capacity1;
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_3 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)(EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (uint32_t)L_2);
		__this->set_entries_1(L_3);
		ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * L_4 = ___extractKey0;
		__this->set_extractKey_3(L_4);
		return;
	}
}
// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * XHashtableState_Resize_m2F60ACE78E15F4F50EAD11B7DA897A2BB7B7362A_gshared (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject * V_6 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_numEntries_2();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		return (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)__this;
	}

IL_0012:
	{
		V_0 = (int32_t)0;
		V_2 = (int32_t)0;
		goto IL_00a7;
	}

IL_001b:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = (int32_t)L_5;
		int32_t L_6 = V_3;
		if (L_6)
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382((int32_t*)(int32_t*)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), (int32_t)(-1), (int32_t)0, /*hidden argument*/NULL);
		V_3 = (int32_t)L_9;
		goto IL_009f;
	}

IL_003d:
	{
		ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * L_10 = (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)__this->get_extractKey_3();
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_11 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_12 = V_3;
		NullCheck(L_11);
		RuntimeObject * L_13 = (RuntimeObject *)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->get_Value_0();
		NullCheck((ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)L_10);
		String_t* L_14;
		L_14 = ((  String_t* (*) (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)L_10, (RuntimeObject *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_005f:
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_16 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = (int32_t)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->get_Next_2();
		if (L_18)
		{
			goto IL_008d;
		}
	}
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_19 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t* L_21 = (int32_t*)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->get_address_of_Next_2();
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382((int32_t*)(int32_t*)L_21, (int32_t)(-1), (int32_t)0, /*hidden argument*/NULL);
		V_3 = (int32_t)L_22;
		goto IL_009f;
	}

IL_008d:
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_23 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = (int32_t)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->get_Next_2();
		V_3 = (int32_t)L_25;
	}

IL_009f:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00a7:
	{
		int32_t L_28 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_29 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_30 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_31 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))/(int32_t)2)))))
		{
			goto IL_00cd;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_32 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_32);
		V_0 = (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)));
		goto IL_00e2;
	}

IL_00cd:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_33 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_33);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))), (int32_t)2));
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) >= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_35 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m9D5C4C7E08BE06B4D72424590FB4365733FC351D(L_35, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XHashtableState_Resize_m2F60ACE78E15F4F50EAD11B7DA897A2BB7B7362A_RuntimeMethod_var)));
	}

IL_00e2:
	{
		ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * L_36 = (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)__this->get_extractKey_3();
		int32_t L_37 = V_0;
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_38 = (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *, ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_38, (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)L_36, (int32_t)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_1 = (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_38;
		V_4 = (int32_t)0;
		goto IL_013b;
	}

IL_00f4:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_39 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		int32_t L_40 = V_4;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_5 = (int32_t)L_42;
		goto IL_0130;
	}

IL_0101:
	{
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_43 = V_1;
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_44 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_45 = V_5;
		NullCheck(L_44);
		RuntimeObject * L_46 = (RuntimeObject *)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->get_Value_0();
		NullCheck((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_43);
		bool L_47;
		L_47 = ((  bool (*) (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *, RuntimeObject *, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_43, (RuntimeObject *)L_46, (RuntimeObject **)(RuntimeObject **)(&V_6), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_48 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_49 = V_5;
		NullCheck(L_48);
		int32_t L_50 = (int32_t)((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->get_Next_2();
		V_5 = (int32_t)L_50;
	}

IL_0130:
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) > ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_52 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_013b:
	{
		int32_t L_53 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_54 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length))))))
		{
			goto IL_00f4;
		}
	}
	{
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_55 = V_1;
		return (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_55;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_mA9B06BC8E0F95FB0FC63CC3D765A4F22887EB93A_gshared (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * __this, String_t* ___key0, int32_t ___index1, int32_t ___count2, RuntimeObject ** ___value3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___key0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		int32_t L_3;
		L_3 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((String_t*)L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___key0;
		int32_t L_6 = ___index1;
		int32_t L_7 = ___count2;
		NullCheck((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)__this);
		bool L_8;
		L_8 = ((  bool (*) (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)__this, (int32_t)L_4, (String_t*)L_5, (int32_t)L_6, (int32_t)L_7, (int32_t*)(int32_t*)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject ** L_9 = ___value3;
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_10 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		RuntimeObject * L_12 = (RuntimeObject *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->get_Value_0();
		*(RuntimeObject **)L_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_9, (void*)L_12);
		return (bool)1;
	}

IL_0033:
	{
		RuntimeObject ** L_13 = ___value3;
		il2cpp_codegen_initobj(L_13, sizeof(RuntimeObject *));
		return (bool)0;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::TryAdd(TValue,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m66B188F6F86501E916DC5D9C3C13AC115C08F977_gshared (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * __this, RuntimeObject * ___value0, RuntimeObject ** ___newValue1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		RuntimeObject ** L_0 = ___newValue1;
		RuntimeObject * L_1 = ___value0;
		*(RuntimeObject **)L_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)L_1);
		ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * L_2 = (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)__this->get_extractKey_3();
		RuntimeObject * L_3 = ___value0;
		NullCheck((ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)L_2);
		String_t* L_4;
		L_4 = ((  String_t* (*) (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)L_2, (RuntimeObject *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		V_2 = (String_t*)L_4;
		String_t* L_5 = V_2;
		if (L_5)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		String_t* L_6 = V_2;
		String_t* L_7 = V_2;
		NullCheck((String_t*)L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline((String_t*)L_7, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((String_t*)L_6, (int32_t)0, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_3 = (int32_t)L_9;
		int32_t* L_10 = (int32_t*)__this->get_address_of_numEntries_2();
		int32_t L_11;
		L_11 = Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8((int32_t*)(int32_t*)L_10, /*hidden argument*/NULL);
		V_0 = (int32_t)L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_13 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0044;
		}
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_15 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_16 = V_0;
		NullCheck(L_15);
		RuntimeObject * L_17 = ___value0;
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->set_Value_0(L_17);
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_18 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = V_3;
		((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->set_HashCode_1(L_20);
		Thread_MemoryBarrier_m9E2B68F7889D5D3AD76126930EE120D51C1B3402(/*hidden argument*/NULL);
		V_1 = (int32_t)0;
		goto IL_00b7;
	}

IL_0071:
	{
		int32_t L_21 = V_1;
		if (L_21)
		{
			goto IL_0095;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_22 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		int32_t L_23 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_24);
		NullCheck(L_22);
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382((int32_t*)(int32_t*)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_23&(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))), (int32_t)1))))))), (int32_t)L_25, (int32_t)0, /*hidden argument*/NULL);
		V_1 = (int32_t)L_26;
		goto IL_00ae;
	}

IL_0095:
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_27 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t* L_29 = (int32_t*)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->get_address_of_Next_2();
		int32_t L_30 = V_0;
		int32_t L_31;
		L_31 = Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382((int32_t*)(int32_t*)L_29, (int32_t)L_30, (int32_t)0, /*hidden argument*/NULL);
		V_1 = (int32_t)L_31;
	}

IL_00ae:
	{
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) > ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_33 = V_1;
		return (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
	}

IL_00b7:
	{
		int32_t L_34 = V_3;
		String_t* L_35 = V_2;
		String_t* L_36 = V_2;
		NullCheck((String_t*)L_36);
		int32_t L_37;
		L_37 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline((String_t*)L_36, /*hidden argument*/NULL);
		NullCheck((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)__this);
		bool L_38;
		L_38 = ((  bool (*) (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)__this, (int32_t)L_34, (String_t*)L_35, (int32_t)0, (int32_t)L_37, (int32_t*)(int32_t*)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_38)
		{
			goto IL_0071;
		}
	}
	{
		RuntimeObject ** L_39 = ___newValue1;
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_40 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_41 = V_1;
		NullCheck(L_40);
		RuntimeObject * L_42 = (RuntimeObject *)((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->get_Value_0();
		*(RuntimeObject **)L_39 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_39, (void*)L_42);
		return (bool)1;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::FindEntry(System.Int32,System.String,System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_mE4A022366877BF9D180DEA774989355DA126E01B_gshared (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * __this, int32_t ___hashCode0, String_t* ___key1, int32_t ___index2, int32_t ___count3, int32_t* ___entryIndex4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t* L_0 = ___entryIndex4;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		int32_t L_4 = ___hashCode0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)((int32_t)L_4&(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), (int32_t)1))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = (int32_t)L_7;
		goto IL_00f9;
	}

IL_0020:
	{
		int32_t L_8 = V_0;
		V_1 = (int32_t)L_8;
		goto IL_00f9;
	}

IL_0027:
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_9 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = (int32_t)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->get_HashCode_1();
		int32_t L_12 = ___hashCode0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_00e5;
		}
	}
	{
		ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * L_13 = (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)__this->get_extractKey_3();
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_14 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_15 = V_1;
		NullCheck(L_14);
		RuntimeObject * L_16 = (RuntimeObject *)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->get_Value_0();
		NullCheck((ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)L_13);
		String_t* L_17;
		L_17 = ((  String_t* (*) (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)L_13, (RuntimeObject *)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		V_2 = (String_t*)L_17;
		String_t* L_18 = V_2;
		if (L_18)
		{
			goto IL_00c8;
		}
	}
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_19 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->get_Next_2();
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_22 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_23 = V_1;
		NullCheck(L_22);
		RuntimeObject ** L_24 = (RuntimeObject **)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->get_address_of_Value_0();
		il2cpp_codegen_initobj(L_24, sizeof(RuntimeObject *));
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_25 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->get_Next_2();
		V_1 = (int32_t)L_27;
		int32_t L_28 = V_0;
		if (L_28)
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_29 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		int32_t L_30 = ___hashCode0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_31 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_31);
		int32_t L_32 = V_1;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_30&(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))), (int32_t)1))))), (int32_t)L_32);
		goto IL_00f9;
	}

IL_00b4:
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_33 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_34 = V_0;
		NullCheck(L_33);
		int32_t L_35 = V_1;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->set_Next_2(L_35);
		goto IL_00f9;
	}

IL_00c8:
	{
		int32_t L_36 = ___count3;
		String_t* L_37 = V_2;
		NullCheck((String_t*)L_37);
		int32_t L_38;
		L_38 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline((String_t*)L_37, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_39 = ___key1;
		int32_t L_40 = ___index2;
		String_t* L_41 = V_2;
		int32_t L_42 = ___count3;
		int32_t L_43;
		L_43 = String_CompareOrdinal_m080D376EC2E7A0C528A440094A0DB97DFB34CD41((String_t*)L_39, (int32_t)L_40, (String_t*)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		if (L_43)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t* L_44 = ___entryIndex4;
		int32_t L_45 = V_1;
		*((int32_t*)L_44) = (int32_t)L_45;
		return (bool)1;
	}

IL_00e5:
	{
		int32_t L_46 = V_1;
		V_0 = (int32_t)L_46;
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_47 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_48 = V_1;
		NullCheck(L_47);
		int32_t L_49 = (int32_t)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->get_Next_2();
		V_1 = (int32_t)L_49;
	}

IL_00f9:
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_51 = ___entryIndex4;
		int32_t L_52 = V_0;
		*((int32_t*)L_51) = (int32_t)L_52;
		return (bool)0;
	}
}
// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::ComputeHashCode(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_m7AF1650B3BEC69788C368FAC0BFFAEAFF075E13B_gshared (String_t* ___key0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (int32_t)((int32_t)352654597);
		int32_t L_0 = ___index1;
		int32_t L_1 = ___count2;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = ___index1;
		V_2 = (int32_t)L_2;
		goto IL_0020;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___key0;
		int32_t L_6 = V_2;
		NullCheck((String_t*)L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70((String_t*)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4<<(int32_t)7))^(int32_t)L_7))));
		int32_t L_8 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)((int32_t)((int32_t)L_12>>(int32_t)((int32_t)17)))));
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)((int32_t)L_14>>(int32_t)((int32_t)11)))));
		int32_t L_15 = V_0;
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)((int32_t)((int32_t)L_16>>(int32_t)5))));
		int32_t L_17 = V_0;
		return (int32_t)((int32_t)((int32_t)L_17&(int32_t)((int32_t)2147483647LL)));
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
// System.Void System.Xml.Linq.XHashtable`1<System.Object>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1__ctor_mB4BD2615B8F54F8589333762FAF1C4A8807725FF_gshared (XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 * __this, ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * ___extractKey0, int32_t ___capacity1, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * L_0 = ___extractKey0;
		int32_t L_1 = ___capacity1;
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_2 = (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *, ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_2, (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_state_0(L_2);
		return;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1<System.Object>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_m7A823EC488B0CF6F3FFE7A1DD5D82997343784F0_gshared (XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 * __this, String_t* ___key0, int32_t ___index1, int32_t ___count2, RuntimeObject ** ___value3, const RuntimeMethod* method)
{
	{
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_0 = (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)__this->get_state_0();
		String_t* L_1 = ___key0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___count2;
		RuntimeObject ** L_4 = ___value3;
		NullCheck((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_0);
		bool L_5;
		L_5 = ((  bool (*) (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *, String_t*, int32_t, int32_t, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_0, (String_t*)L_1, (int32_t)L_2, (int32_t)L_3, (RuntimeObject **)(RuntimeObject **)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (bool)L_5;
	}
}
// TValue System.Xml.Linq.XHashtable`1<System.Object>::Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XHashtable_1_Add_m675BFA5CB9B9AFF50836CB517F1C4C7E054629E1_gshared (XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 * V_1 = NULL;
	bool V_2 = false;
	XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	{
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_0 = (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)__this->get_state_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_0);
		bool L_2;
		L_2 = ((  bool (*) (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *, RuntimeObject *, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_0, (RuntimeObject *)L_1, (RuntimeObject **)(RuntimeObject **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject * L_3 = V_0;
		return (RuntimeObject *)L_3;
	}

IL_0012:
	{
		V_1 = (XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 *)__this;
		V_2 = (bool)0;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 * L_4 = V_1;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_4, (bool*)(bool*)(&V_2), /*hidden argument*/NULL);
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_5 = (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)__this->get_state_0();
		NullCheck((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_5);
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_6;
		L_6 = ((  XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * (*) (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_3 = (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_6;
		Thread_MemoryBarrier_m9E2B68F7889D5D3AD76126930EE120D51C1B3402(/*hidden argument*/NULL);
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_7 = V_3;
		__this->set_state_0(L_7);
		IL2CPP_LEAVE(0x0, FINALLY_0038);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		{
			bool L_8 = V_2;
			if (!L_8)
			{
				goto IL_0041;
			}
		}

IL_003b:
		{
			XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 * L_9 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_9, /*hidden argument*/NULL);
		}

IL_0041:
		{
			IL2CPP_END_FINALLY(56)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x0, IL_0000)
	}
	{
		return (RuntimeObject *)NULL;
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
// System.Void MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Object,System.Object>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPropertyDescriptor_2__ctor_m48AC1CCE2666109030688C2AA2C0D9799D23CB53_gshared (XPropertyDescriptor_2_t01C06B58C295272B0A9A00B6C0790CA126B0AAEA * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		NullCheck((PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)__this);
		PropertyDescriptor__ctor_m75229C6B90FE0810B721B1F6470D0A0A53E547DA((PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)__this, (String_t*)L_0, (AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4*)(AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Type MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Object,System.Object>::get_ComponentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * XPropertyDescriptor_2_get_ComponentType_m215C5BBB87AE67AAED890510DA4220EA7AD9CDC2_gshared (XPropertyDescriptor_2_t01C06B58C295272B0A9A00B6C0790CA126B0AAEA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		return (Type_t *)L_1;
	}
}
// System.Boolean MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Object,System.Object>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPropertyDescriptor_2_get_IsReadOnly_m5268CA4289171A891DD9A0852F7119C8BDC83ED3_gshared (XPropertyDescriptor_2_t01C06B58C295272B0A9A00B6C0790CA126B0AAEA * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Type MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Object,System.Object>::get_PropertyType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * XPropertyDescriptor_2_get_PropertyType_mFA5CD2CE2964536E21A1207B81C20F64D917D39E_gshared (XPropertyDescriptor_2_t01C06B58C295272B0A9A00B6C0790CA126B0AAEA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		return (Type_t *)L_1;
	}
}
// System.Boolean MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Object,System.Object>::get_SupportsChangeEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPropertyDescriptor_2_get_SupportsChangeEvents_mED592EAFE29A533F98741C4FA6BE389A3FCA6585_gshared (XPropertyDescriptor_2_t01C06B58C295272B0A9A00B6C0790CA126B0AAEA * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Object,System.Object>::AddValueChanged(System.Object,System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPropertyDescriptor_2_AddValueChanged_m99EE69679723127E706562485D15D02E3B98CFD6_gshared (XPropertyDescriptor_2_t01C06B58C295272B0A9A00B6C0790CA126B0AAEA * __this, RuntimeObject * ___component0, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mD1518B4300DA15FEAD09FCF99F29716CB4515AE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___component0;
		NullCheck((PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)__this);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1;
		L_1 = PropertyDescriptor_GetValueChangedHandler_m541D7CCBA4649A8063EB6FF91B9D409DD8281AF4((PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)__this, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___component0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = ___handler1;
		NullCheck((PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)__this);
		PropertyDescriptor_AddValueChanged_m9C10DF1969778E24B7F195A2F39347E69C898C21((PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)__this, (RuntimeObject *)L_2, (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_3, /*hidden argument*/NULL);
		if (!((!(((RuntimeObject*)(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		RuntimeObject * L_4 = ___component0;
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2))), IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)));
		RuntimeObject * L_5 = V_0;
		if (!L_5)
		{
			goto IL_0062;
		}
	}
	{
		RuntimeObject * L_6 = ___component0;
		NullCheck((PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)__this);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_7;
		L_7 = PropertyDescriptor_GetValueChangedHandler_m541D7CCBA4649A8063EB6FF91B9D409DD8281AF4((PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)__this, (RuntimeObject *)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0062;
		}
	}
	{
		RuntimeObject * L_8 = V_0;
		EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 * L_9 = (EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 *)il2cpp_codegen_object_new(EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mD1518B4300DA15FEAD09FCF99F29716CB4515AE2(L_9, (RuntimeObject *)__this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 34)), /*hidden argument*/EventHandler_1__ctor_mD1518B4300DA15FEAD09FCF99F29716CB4515AE2_RuntimeMethod_var);
		NullCheck((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_8);
		XObject_add_Changing_m16A2717DE03F19B8C6FD08E2CA77F71056743045((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_8, (EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 *)L_9, /*hidden argument*/NULL);
		RuntimeObject * L_10 = V_0;
		EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 * L_11 = (EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 *)il2cpp_codegen_object_new(EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mD1518B4300DA15FEAD09FCF99F29716CB4515AE2(L_11, (RuntimeObject *)__this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 33)), /*hidden argument*/EventHandler_1__ctor_mD1518B4300DA15FEAD09FCF99F29716CB4515AE2_RuntimeMethod_var);
		NullCheck((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_10);
		XObject_add_Changed_m88D98E1E0CCF19AFE0F0489089322A548CFB27FD((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_10, (EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 *)L_11, /*hidden argument*/NULL);
	}

IL_0062:
	{
		return;
	}
}
// System.Boolean MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Object,System.Object>::CanResetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPropertyDescriptor_2_CanResetValue_m242AC4FAAEEFD0434C72C42F8B7ACFB70F46B35A_gshared (XPropertyDescriptor_2_t01C06B58C295272B0A9A00B6C0790CA126B0AAEA * __this, RuntimeObject * ___component0, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Void MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Object,System.Object>::RemoveValueChanged(System.Object,System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPropertyDescriptor_2_RemoveValueChanged_m2FD0B6DF50908A9C9EEC6D5A5574EAF52C781E7A_gshared (XPropertyDescriptor_2_t01C06B58C295272B0A9A00B6C0790CA126B0AAEA * __this, RuntimeObject * ___component0, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mD1518B4300DA15FEAD09FCF99F29716CB4515AE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___component0;
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_1 = ___handler1;
		NullCheck((PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)__this);
		PropertyDescriptor_RemoveValueChanged_m53DAD55289BF8D507CBFB738D93F733A2FDBFDCE((PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)__this, (RuntimeObject *)L_0, (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)L_1, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___component0;
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2))), IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2)));
		RuntimeObject * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0055;
		}
	}
	{
		RuntimeObject * L_4 = ___component0;
		NullCheck((PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)__this);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_5;
		L_5 = PropertyDescriptor_GetValueChangedHandler_m541D7CCBA4649A8063EB6FF91B9D409DD8281AF4((PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)__this, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0055;
		}
	}
	{
		RuntimeObject * L_6 = V_0;
		EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 * L_7 = (EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 *)il2cpp_codegen_object_new(EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mD1518B4300DA15FEAD09FCF99F29716CB4515AE2(L_7, (RuntimeObject *)__this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 34)), /*hidden argument*/EventHandler_1__ctor_mD1518B4300DA15FEAD09FCF99F29716CB4515AE2_RuntimeMethod_var);
		NullCheck((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_6);
		XObject_remove_Changing_m6B56364DC1D1FBDE98A9302BD4AB8A12210AE982((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_6, (EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 *)L_7, /*hidden argument*/NULL);
		RuntimeObject * L_8 = V_0;
		EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 * L_9 = (EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 *)il2cpp_codegen_object_new(EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mD1518B4300DA15FEAD09FCF99F29716CB4515AE2(L_9, (RuntimeObject *)__this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 33)), /*hidden argument*/EventHandler_1__ctor_mD1518B4300DA15FEAD09FCF99F29716CB4515AE2_RuntimeMethod_var);
		NullCheck((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_8);
		XObject_remove_Changed_m7D7EBD9DD34007304B78694594F3564FD6DD3E8C((XObject_tD3CAB609801011E5C4A0FC219FA717B6B382C5D6 *)L_8, (EventHandler_1_tCA8F55540AA7E9762FC7550FF39978EC50A159D4 *)L_9, /*hidden argument*/NULL);
	}

IL_0055:
	{
		return;
	}
}
// System.Void MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Object,System.Object>::ResetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPropertyDescriptor_2_ResetValue_mA673B7AD43074028C109C804801849DCA305D571_gshared (XPropertyDescriptor_2_t01C06B58C295272B0A9A00B6C0790CA126B0AAEA * __this, RuntimeObject * ___component0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Object,System.Object>::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPropertyDescriptor_2_SetValue_m4B47D0FEEFD5867E049B635C665C047A37BF2D5A_gshared (XPropertyDescriptor_2_t01C06B58C295272B0A9A00B6C0790CA126B0AAEA * __this, RuntimeObject * ___component0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Object,System.Object>::ShouldSerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPropertyDescriptor_2_ShouldSerializeValue_mE91D0245E7DBA11C9150C8F53F6B0FBD40BAFC88_gshared (XPropertyDescriptor_2_t01C06B58C295272B0A9A00B6C0790CA126B0AAEA * __this, RuntimeObject * ___component0, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Void MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Object,System.Object>::OnChanged(System.Object,System.Xml.Linq.XObjectChangeEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPropertyDescriptor_2_OnChanged_mD788AC03BA5A3C98287F2476B5F8577CC4B04F93_gshared (XPropertyDescriptor_2_t01C06B58C295272B0A9A00B6C0790CA126B0AAEA * __this, RuntimeObject * ___sender0, XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * ___args1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Object,System.Object>::OnChanging(System.Object,System.Xml.Linq.XObjectChangeEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPropertyDescriptor_2_OnChanging_m34DF5DB2FA742D5C7EBF2C5E11F0AD756B5125C3_gshared (XPropertyDescriptor_2_t01C06B58C295272B0A9A00B6C0790CA126B0AAEA * __this, RuntimeObject * ___sender0, XObjectChangeEventArgs_t1E93EFEB1B18E24C50C7181693F5C0BAC01C7352 * ___args1, const RuntimeMethod* method)
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
// System.Void MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptionProvider`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XTypeDescriptionProvider_1__ctor_m61CD2F99935F6B4C2C5DD85FDACE75BE3032D29C_gshared (XTypeDescriptionProvider_1_t3E70768CA58B1E0422A52E2D980397207AEC99DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeDescriptor_t7B173A6626B330AB5B77345C4DE4AB6C7B38CA6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t7B173A6626B330AB5B77345C4DE4AB6C7B38CA6F_il2cpp_TypeInfo_var);
		TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * L_2;
		L_2 = TypeDescriptor_GetProvider_m11FFA30C459E9A3C61DEA0B8A7F96B09545BC86B((Type_t *)L_1, /*hidden argument*/NULL);
		NullCheck((TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 *)__this);
		TypeDescriptionProvider__ctor_m6743A730A14CDF72C690886FDECCF202BC156448((TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 *)__this, (TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 *)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.ComponentModel.ICustomTypeDescriptor MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptionProvider`1<System.Object>::GetTypeDescriptor(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XTypeDescriptionProvider_1_GetTypeDescriptor_m882037FAD02588301880CDF863D226B05ECEC676_gshared (XTypeDescriptionProvider_1_t3E70768CA58B1E0422A52E2D980397207AEC99DB * __this, Type_t * ___type0, RuntimeObject * ___instance1, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		RuntimeObject * L_1 = ___instance1;
		NullCheck((TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 *)__this);
		RuntimeObject* L_2;
		L_2 = TypeDescriptionProvider_GetTypeDescriptor_m2ED48670C3D29D6A1CFE63D0F019BBFE8D03372E((TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 *)__this, (Type_t *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		XTypeDescriptor_1_t8B5AE52536B37FAED17586280E80319C8E7D2B68 * L_3 = (XTypeDescriptor_1_t8B5AE52536B37FAED17586280E80319C8E7D2B68 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		((  void (*) (XTypeDescriptor_1_t8B5AE52536B37FAED17586280E80319C8E7D2B68 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(L_3, (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (RuntimeObject*)L_3;
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
// System.Void MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptor`1<System.Object>::.ctor(System.ComponentModel.ICustomTypeDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XTypeDescriptor_1__ctor_m1B30545B3DBB18E79EA64DCBC97DA3FF43AE087C_gshared (XTypeDescriptor_1_t8B5AE52536B37FAED17586280E80319C8E7D2B68 * __this, RuntimeObject* ___parent0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___parent0;
		NullCheck((CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC *)__this);
		CustomTypeDescriptor__ctor_m83CFDC2A68D4C72A3B5C0A79AEAF41486AAAB7DF((CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC *)__this, (RuntimeObject*)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.ComponentModel.PropertyDescriptorCollection MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptor`1<System.Object>::GetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * XTypeDescriptor_1_GetProperties_m32F175372231FDAD2378E31B2B6FBD134099594E_gshared (XTypeDescriptor_1_t8B5AE52536B37FAED17586280E80319C8E7D2B68 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC *)__this);
		PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_0;
		L_0 = VirtFuncInvoker1< PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *, AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* >::Invoke(26 /* System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.CustomTypeDescriptor::GetProperties(System.Attribute[]) */, (CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC *)__this, (AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4*)(AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4*)NULL);
		return (PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_0;
	}
}
// System.ComponentModel.PropertyDescriptorCollection MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptor`1<System.Object>::GetProperties(System.Attribute[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * XTypeDescriptor_1_GetProperties_m46B4D817EC6B3CB7DF597877C742B68DFBF92286_gshared (XTypeDescriptor_1_t8B5AE52536B37FAED17586280E80319C8E7D2B68 * __this, AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* ___attributes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttributeValuePropertyDescriptor_tC5B11D2983357281D81E15BE00D30EFB16D4E1FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElementValuePropertyDescriptor_tA4ABC94A15EC3C3758364365CA8BB54449B5656F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElementXmlPropertyDescriptor_tD87FB80863A3CB334BD49862FBD0C300BCE47DB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_0 = (PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)il2cpp_codegen_object_new(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F_il2cpp_TypeInfo_var);
		PropertyDescriptorCollection__ctor_m124991BF4E348817ACCC6C4373FD66B31566E425(L_0, (PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75*)(PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75*)NULL, /*hidden argument*/NULL);
		V_0 = (PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_0;
		AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* L_1 = ___attributes0;
		if (L_1)
		{
			goto IL_0099;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_2, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_0_0_0_var) };
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_3, (Type_t *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0072;
		}
	}
	{
		PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_7 = V_0;
		XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73 * L_8 = (XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73 *)il2cpp_codegen_object_new(XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73_il2cpp_TypeInfo_var);
		XElementAttributePropertyDescriptor__ctor_mD710FF4686F1C385B0B65277AC4F045CAA17C60D(L_8, /*hidden argument*/NULL);
		NullCheck((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_7);
		int32_t L_9;
		L_9 = PropertyDescriptorCollection_Add_mFD0446EF7C7F01E2DDBBA8F0ED3F8C5032CC21BA((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_7, (PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)L_8, /*hidden argument*/NULL);
		PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_10 = V_0;
		XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959 * L_11 = (XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959 *)il2cpp_codegen_object_new(XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959_il2cpp_TypeInfo_var);
		XElementDescendantsPropertyDescriptor__ctor_m0BC8F572EAAB573A8A2A23F056D84C226A6DFAC8(L_11, /*hidden argument*/NULL);
		NullCheck((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_10);
		int32_t L_12;
		L_12 = PropertyDescriptorCollection_Add_mFD0446EF7C7F01E2DDBBA8F0ED3F8C5032CC21BA((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_10, (PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)L_11, /*hidden argument*/NULL);
		PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_13 = V_0;
		XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818 * L_14 = (XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818 *)il2cpp_codegen_object_new(XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818_il2cpp_TypeInfo_var);
		XElementElementPropertyDescriptor__ctor_m713399FB2E19BA297379623AB9BF2951C4B347F5(L_14, /*hidden argument*/NULL);
		NullCheck((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_13);
		int32_t L_15;
		L_15 = PropertyDescriptorCollection_Add_mFD0446EF7C7F01E2DDBBA8F0ED3F8C5032CC21BA((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_13, (PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)L_14, /*hidden argument*/NULL);
		PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_16 = V_0;
		XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6 * L_17 = (XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6 *)il2cpp_codegen_object_new(XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6_il2cpp_TypeInfo_var);
		XElementElementsPropertyDescriptor__ctor_m155278BABE2A17E372EBA9D08826B04314D7020C(L_17, /*hidden argument*/NULL);
		NullCheck((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_16);
		int32_t L_18;
		L_18 = PropertyDescriptorCollection_Add_mFD0446EF7C7F01E2DDBBA8F0ED3F8C5032CC21BA((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_16, (PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)L_17, /*hidden argument*/NULL);
		PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_19 = V_0;
		XElementValuePropertyDescriptor_tA4ABC94A15EC3C3758364365CA8BB54449B5656F * L_20 = (XElementValuePropertyDescriptor_tA4ABC94A15EC3C3758364365CA8BB54449B5656F *)il2cpp_codegen_object_new(XElementValuePropertyDescriptor_tA4ABC94A15EC3C3758364365CA8BB54449B5656F_il2cpp_TypeInfo_var);
		XElementValuePropertyDescriptor__ctor_m45307263CA105982EC6BE1190654277922115003(L_20, /*hidden argument*/NULL);
		NullCheck((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_19);
		int32_t L_21;
		L_21 = PropertyDescriptorCollection_Add_mFD0446EF7C7F01E2DDBBA8F0ED3F8C5032CC21BA((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_19, (PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)L_20, /*hidden argument*/NULL);
		PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_22 = V_0;
		XElementXmlPropertyDescriptor_tD87FB80863A3CB334BD49862FBD0C300BCE47DB9 * L_23 = (XElementXmlPropertyDescriptor_tD87FB80863A3CB334BD49862FBD0C300BCE47DB9 *)il2cpp_codegen_object_new(XElementXmlPropertyDescriptor_tD87FB80863A3CB334BD49862FBD0C300BCE47DB9_il2cpp_TypeInfo_var);
		XElementXmlPropertyDescriptor__ctor_mAD30542B05F6B53100F95FDC889AAFB606925E5B(L_23, /*hidden argument*/NULL);
		NullCheck((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_22);
		int32_t L_24;
		L_24 = PropertyDescriptorCollection_Add_mFD0446EF7C7F01E2DDBBA8F0ED3F8C5032CC21BA((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_22, (PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)L_23, /*hidden argument*/NULL);
		goto IL_0099;
	}

IL_0072:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_27 = { reinterpret_cast<intptr_t> (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_0_0_0_var) };
		Type_t * L_28;
		L_28 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_27, /*hidden argument*/NULL);
		bool L_29;
		L_29 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_26, (Type_t *)L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0099;
		}
	}
	{
		PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_30 = V_0;
		XAttributeValuePropertyDescriptor_tC5B11D2983357281D81E15BE00D30EFB16D4E1FB * L_31 = (XAttributeValuePropertyDescriptor_tC5B11D2983357281D81E15BE00D30EFB16D4E1FB *)il2cpp_codegen_object_new(XAttributeValuePropertyDescriptor_tC5B11D2983357281D81E15BE00D30EFB16D4E1FB_il2cpp_TypeInfo_var);
		XAttributeValuePropertyDescriptor__ctor_mDE470C28BA32ECF708F651F39C278BC540E3F549(L_31, /*hidden argument*/NULL);
		NullCheck((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_30);
		int32_t L_32;
		L_32 = PropertyDescriptorCollection_Add_mFD0446EF7C7F01E2DDBBA8F0ED3F8C5032CC21BA((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_30, (PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)L_31, /*hidden argument*/NULL);
	}

IL_0099:
	{
		AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* L_33 = ___attributes0;
		NullCheck((CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC *)__this);
		PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_34;
		L_34 = CustomTypeDescriptor_GetProperties_mAF60EE9AC464C9683CA5D7065428DA14C94D40D0((CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC *)__this, (AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4*)L_33, /*hidden argument*/NULL);
		NullCheck((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_34);
		RuntimeObject* L_35;
		L_35 = VirtFuncInvoker0< RuntimeObject* >::Invoke(38 /* System.Collections.IEnumerator System.ComponentModel.PropertyDescriptorCollection::GetEnumerator() */, (PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_34);
		V_1 = (RuntimeObject*)L_35;
	}

IL_00a6:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00bc;
		}

IL_00a8:
		{
			RuntimeObject* L_36 = V_1;
			NullCheck((RuntimeObject*)L_36);
			RuntimeObject * L_37;
			L_37 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
			V_2 = (PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)((PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)Castclass((RuntimeObject*)L_37, PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B_il2cpp_TypeInfo_var));
			PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_38 = V_0;
			PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * L_39 = V_2;
			NullCheck((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_38);
			int32_t L_40;
			L_40 = PropertyDescriptorCollection_Add_mFD0446EF7C7F01E2DDBBA8F0ED3F8C5032CC21BA((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_38, (PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)L_39, /*hidden argument*/NULL);
		}

IL_00bc:
		{
			RuntimeObject* L_41 = V_1;
			NullCheck((RuntimeObject*)L_41);
			bool L_42;
			L_42 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
			if (L_42)
			{
				goto IL_00a8;
			}
		}

IL_00c4:
		{
			IL2CPP_LEAVE(0xD7, FINALLY_00c6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c6;
	}

FINALLY_00c6:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_43 = V_1;
			V_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_43, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_44 = V_3;
			if (!L_44)
			{
				goto IL_00d6;
			}
		}

IL_00d0:
		{
			RuntimeObject* L_45 = V_3;
			NullCheck((RuntimeObject*)L_45);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_45);
		}

IL_00d6:
		{
			IL2CPP_END_FINALLY(198)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(198)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xD7, IL_00d7)
	}

IL_00d7:
	{
		PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_46 = V_0;
		return (PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_46;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_gshared_inline (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t Enumerator_get_Current_mAE16C5472096C2336079B2487034152D64054833_gshared_inline (Enumerator_t14A4ACD2915B999F3B3D70AD01356996BC636813 * __this, const RuntimeMethod* method)
{
	{
		int16_t L_0 = (int16_t)__this->get_current_3();
		return (int16_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_current_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_gshared_inline (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )__this->get_current_3();
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Enumerator_get_Current_m32439407464C10970CC963587D0D2E0DD861ED9B_gshared_inline (Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 * __this, const RuntimeMethod* method)
{
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )__this->get_current_3();
		return (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_0;
	}
}
