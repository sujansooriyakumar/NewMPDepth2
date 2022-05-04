#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Reflection.AssemblyCompanyAttribute
struct AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4;
// System.Reflection.AssemblyConfigurationAttribute
struct AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C;
// System.Reflection.AssemblyCopyrightAttribute
struct AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC;
// System.Reflection.AssemblyDescriptionAttribute
struct AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3;
// System.Reflection.AssemblyFileVersionAttribute
struct AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F;
// System.Reflection.AssemblyInformationalVersionAttribute
struct AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0;
// System.Reflection.AssemblyProductAttribute
struct AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA;
// System.Reflection.AssemblyTitleAttribute
struct AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Diagnostics.DebuggerBrowsableAttribute
struct DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53;
// System.Reflection.DefaultMemberAttribute
struct DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5;
// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC;
// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36;
// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671;
// ExitGames.Client.Photon.PreserveAttribute
struct PreserveAttribute_t2BCD0353A0F5A0E17F2A79D927D033EC686FFD51;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// System.String
struct String_t;
// System.Runtime.Versioning.TargetFrameworkAttribute
struct TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
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

// System.Reflection.AssemblyCompanyAttribute
struct AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyCompanyAttribute::m_company
	String_t* ___m_company_0;

public:
	inline static int32_t get_offset_of_m_company_0() { return static_cast<int32_t>(offsetof(AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4, ___m_company_0)); }
	inline String_t* get_m_company_0() const { return ___m_company_0; }
	inline String_t** get_address_of_m_company_0() { return &___m_company_0; }
	inline void set_m_company_0(String_t* value)
	{
		___m_company_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_company_0), (void*)value);
	}
};


// System.Reflection.AssemblyConfigurationAttribute
struct AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyConfigurationAttribute::m_configuration
	String_t* ___m_configuration_0;

public:
	inline static int32_t get_offset_of_m_configuration_0() { return static_cast<int32_t>(offsetof(AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C, ___m_configuration_0)); }
	inline String_t* get_m_configuration_0() const { return ___m_configuration_0; }
	inline String_t** get_address_of_m_configuration_0() { return &___m_configuration_0; }
	inline void set_m_configuration_0(String_t* value)
	{
		___m_configuration_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_configuration_0), (void*)value);
	}
};


// System.Reflection.AssemblyCopyrightAttribute
struct AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyCopyrightAttribute::m_copyright
	String_t* ___m_copyright_0;

public:
	inline static int32_t get_offset_of_m_copyright_0() { return static_cast<int32_t>(offsetof(AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC, ___m_copyright_0)); }
	inline String_t* get_m_copyright_0() const { return ___m_copyright_0; }
	inline String_t** get_address_of_m_copyright_0() { return &___m_copyright_0; }
	inline void set_m_copyright_0(String_t* value)
	{
		___m_copyright_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_copyright_0), (void*)value);
	}
};


// System.Reflection.AssemblyDescriptionAttribute
struct AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyDescriptionAttribute::m_description
	String_t* ___m_description_0;

public:
	inline static int32_t get_offset_of_m_description_0() { return static_cast<int32_t>(offsetof(AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3, ___m_description_0)); }
	inline String_t* get_m_description_0() const { return ___m_description_0; }
	inline String_t** get_address_of_m_description_0() { return &___m_description_0; }
	inline void set_m_description_0(String_t* value)
	{
		___m_description_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_description_0), (void*)value);
	}
};


// System.Reflection.AssemblyFileVersionAttribute
struct AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyFileVersionAttribute::_version
	String_t* ____version_0;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F, ____version_0)); }
	inline String_t* get__version_0() const { return ____version_0; }
	inline String_t** get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(String_t* value)
	{
		____version_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____version_0), (void*)value);
	}
};


// System.Reflection.AssemblyInformationalVersionAttribute
struct AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyInformationalVersionAttribute::m_informationalVersion
	String_t* ___m_informationalVersion_0;

public:
	inline static int32_t get_offset_of_m_informationalVersion_0() { return static_cast<int32_t>(offsetof(AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0, ___m_informationalVersion_0)); }
	inline String_t* get_m_informationalVersion_0() const { return ___m_informationalVersion_0; }
	inline String_t** get_address_of_m_informationalVersion_0() { return &___m_informationalVersion_0; }
	inline void set_m_informationalVersion_0(String_t* value)
	{
		___m_informationalVersion_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_informationalVersion_0), (void*)value);
	}
};


// System.Reflection.AssemblyProductAttribute
struct AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyProductAttribute::m_product
	String_t* ___m_product_0;

public:
	inline static int32_t get_offset_of_m_product_0() { return static_cast<int32_t>(offsetof(AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA, ___m_product_0)); }
	inline String_t* get_m_product_0() const { return ___m_product_0; }
	inline String_t** get_address_of_m_product_0() { return &___m_product_0; }
	inline void set_m_product_0(String_t* value)
	{
		___m_product_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_product_0), (void*)value);
	}
};


// System.Reflection.AssemblyTitleAttribute
struct AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.AssemblyTitleAttribute::m_title
	String_t* ___m_title_0;

public:
	inline static int32_t get_offset_of_m_title_0() { return static_cast<int32_t>(offsetof(AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7, ___m_title_0)); }
	inline String_t* get_m_title_0() const { return ___m_title_0; }
	inline String_t** get_address_of_m_title_0() { return &___m_title_0; }
	inline void set_m_title_0(String_t* value)
	{
		___m_title_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_title_0), (void*)value);
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


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Reflection.DefaultMemberAttribute
struct DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Reflection.DefaultMemberAttribute::m_memberName
	String_t* ___m_memberName_0;

public:
	inline static int32_t get_offset_of_m_memberName_0() { return static_cast<int32_t>(offsetof(DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5, ___m_memberName_0)); }
	inline String_t* get_m_memberName_0() const { return ___m_memberName_0; }
	inline String_t** get_address_of_m_memberName_0() { return &___m_memberName_0; }
	inline void set_m_memberName_0(String_t* value)
	{
		___m_memberName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_memberName_0), (void*)value);
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

// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_0), (void*)value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
	}
};


// ExitGames.Client.Photon.PreserveAttribute
struct PreserveAttribute_t2BCD0353A0F5A0E17F2A79D927D033EC686FFD51  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// System.Runtime.Versioning.TargetFrameworkAttribute
struct TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.Versioning.TargetFrameworkAttribute::_frameworkName
	String_t* ____frameworkName_0;
	// System.String System.Runtime.Versioning.TargetFrameworkAttribute::_frameworkDisplayName
	String_t* ____frameworkDisplayName_1;

public:
	inline static int32_t get_offset_of__frameworkName_0() { return static_cast<int32_t>(offsetof(TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517, ____frameworkName_0)); }
	inline String_t* get__frameworkName_0() const { return ____frameworkName_0; }
	inline String_t** get_address_of__frameworkName_0() { return &____frameworkName_0; }
	inline void set__frameworkName_0(String_t* value)
	{
		____frameworkName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frameworkName_0), (void*)value);
	}

	inline static int32_t get_offset_of__frameworkDisplayName_1() { return static_cast<int32_t>(offsetof(TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517, ____frameworkDisplayName_1)); }
	inline String_t* get__frameworkDisplayName_1() const { return ____frameworkDisplayName_1; }
	inline String_t** get_address_of__frameworkDisplayName_1() { return &____frameworkDisplayName_1; }
	inline void set__frameworkDisplayName_1(String_t* value)
	{
		____frameworkDisplayName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frameworkDisplayName_1), (void*)value);
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


// System.Diagnostics.DebuggerBrowsableState
struct DebuggerBrowsableState_t2A824ECEB650CFABB239FD0918FCC88A09B45091 
{
public:
	// System.Int32 System.Diagnostics.DebuggerBrowsableState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggerBrowsableState_t2A824ECEB650CFABB239FD0918FCC88A09B45091, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};


// System.Diagnostics.DebuggerBrowsableAttribute
struct DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggerBrowsableState System.Diagnostics.DebuggerBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Reflection.AssemblyTitleAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyTitleAttribute__ctor_mE239F206B3B369C48AE1F3B4211688778FE99E8D (AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 * __this, String_t* ___title0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyInformationalVersionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyInformationalVersionAttribute__ctor_m9BF349D8F980B0ABAB2A6312E422915285FA1678 (AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0 * __this, String_t* ___informationalVersion0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyFileVersionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyFileVersionAttribute__ctor_mF855AEBC51CB72F4FF913499256741AE57B0F13D (AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F * __this, String_t* ___version0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyDescriptionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyDescriptionAttribute__ctor_m3A0BD500FF352A67235FBA499FBA58EFF15B1F25 (AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 * __this, String_t* ___description0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyCopyrightAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyCopyrightAttribute__ctor_mB0B5F5C1A7A8B172289CC694E2711F07A37CE3F3 (AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC * __this, String_t* ___copyright0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyConfigurationAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyConfigurationAttribute__ctor_m6EE76F5A155EDEA71967A32F78D777038ADD0757 (AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C * __this, String_t* ___configuration0, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyCompanyAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyCompanyAttribute__ctor_m435C9FEC405646617645636E67860598A0C46FF0 (AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 * __this, String_t* ___company0, const RuntimeMethod* method);
// System.Void System.Runtime.Versioning.TargetFrameworkAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetFrameworkAttribute__ctor_m0F8E5550F9199AC44F2CBCCD3E968EC26731187D (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___frameworkName0, const RuntimeMethod* method);
// System.Void System.Runtime.Versioning.TargetFrameworkAttribute::set_FrameworkDisplayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ExtensionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * __this, const RuntimeMethod* method);
// System.Void System.Reflection.AssemblyProductAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssemblyProductAttribute__ctor_m26DF1EBC1C86E7DA4786C66B44123899BE8DBCB8 (AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA * __this, String_t* ___product0, const RuntimeMethod* method);
// System.Void System.Reflection.DefaultMemberAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7 (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * __this, String_t* ___memberName0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggerBrowsableAttribute::.ctor(System.Diagnostics.DebuggerBrowsableState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5 (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * __this, int32_t ___state0, const RuntimeMethod* method);
// System.Void System.ObsoleteAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868 (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.FlagsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229 (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PreserveAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_mBB18E941CD40841C02EC38F7538614224711F5D7 (PreserveAttribute_t2BCD0353A0F5A0E17F2A79D927D033EC686FFD51 * __this, const RuntimeMethod* method);
// System.Void System.ObsoleteAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853 (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * __this, const RuntimeMethod* method);
static void Photon3Unity3D_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 * tmp = (AssemblyTitleAttribute_tABB894D0792C7F307694CC796C8AE5D6A20382E7 *)cache->attributes[0];
		AssemblyTitleAttribute__ctor_mE239F206B3B369C48AE1F3B4211688778FE99E8D(tmp, il2cpp_codegen_string_new_wrapper("\x50\x68\x6F\x74\x6F\x6E\x33\x55\x6E\x69\x74\x79\x33\x44"), NULL);
	}
	{
		AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0 * tmp = (AssemblyInformationalVersionAttribute_t962229DBE84C4A66FB0B542E9AEBC510F55950D0 *)cache->attributes[1];
		AssemblyInformationalVersionAttribute__ctor_m9BF349D8F980B0ABAB2A6312E422915285FA1678(tmp, il2cpp_codegen_string_new_wrapper("\x34\x2E\x31\x2E\x36\x2E\x31\x31"), NULL);
	}
	{
		AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F * tmp = (AssemblyFileVersionAttribute_tCC1036D0566155DC5688D9230EF3C07D82A1896F *)cache->attributes[2];
		AssemblyFileVersionAttribute__ctor_mF855AEBC51CB72F4FF913499256741AE57B0F13D(tmp, il2cpp_codegen_string_new_wrapper("\x34\x2E\x31\x2E\x36\x2E\x31\x31"), NULL);
	}
	{
		AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 * tmp = (AssemblyDescriptionAttribute_tF4460CCB289F6E2F71841792BBC7E6907DF612B3 *)cache->attributes[3];
		AssemblyDescriptionAttribute__ctor_m3A0BD500FF352A67235FBA499FBA58EFF15B1F25(tmp, il2cpp_codegen_string_new_wrapper("\x50\x68\x6F\x74\x6F\x6E\x20\x2E\x4E\x65\x74\x20\x43\x6C\x69\x65\x6E\x74\x20\x4C\x69\x62\x72\x61\x72\x79\x2E\x20\x44\x65\x62\x75\x67\x2E"), NULL);
	}
	{
		AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC * tmp = (AssemblyCopyrightAttribute_tA6A09319EF50B48D962810032000DEE7B12904EC *)cache->attributes[4];
		AssemblyCopyrightAttribute__ctor_mB0B5F5C1A7A8B172289CC694E2711F07A37CE3F3(tmp, il2cpp_codegen_string_new_wrapper("\x28\x63\x29\x20\x45\x78\x69\x74\x20\x47\x61\x6D\x65\x73\x20\x47\x6D\x62\x48\x2C\x20\x68\x74\x74\x70\x3A\x2F\x2F\x77\x77\x77\x2E\x65\x78\x69\x74\x67\x61\x6D\x65\x73\x2E\x63\x6F\x6D"), NULL);
	}
	{
		AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C * tmp = (AssemblyConfigurationAttribute_t071B324A83314FBA14A43F37BE7206C420218B7C *)cache->attributes[5];
		AssemblyConfigurationAttribute__ctor_m6EE76F5A155EDEA71967A32F78D777038ADD0757(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2D\x44\x65\x62\x75\x67"), NULL);
	}
	{
		AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 * tmp = (AssemblyCompanyAttribute_t642AAB097D7DEAAB623BEBE4664327E9B01D1DE4 *)cache->attributes[6];
		AssemblyCompanyAttribute__ctor_m435C9FEC405646617645636E67860598A0C46FF0(tmp, il2cpp_codegen_string_new_wrapper("\x45\x78\x69\x74\x20\x47\x61\x6D\x65\x73\x20\x47\x6D\x62\x48"), NULL);
	}
	{
		TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * tmp = (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 *)cache->attributes[7];
		TargetFrameworkAttribute__ctor_m0F8E5550F9199AC44F2CBCCD3E968EC26731187D(tmp, il2cpp_codegen_string_new_wrapper("\x2E\x4E\x45\x54\x53\x74\x61\x6E\x64\x61\x72\x64\x2C\x56\x65\x72\x73\x69\x6F\x6E\x3D\x76\x32\x2E\x30"), NULL);
		TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[8];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 263LL, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[9];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[10];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[11];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
	{
		AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA * tmp = (AssemblyProductAttribute_t6BB0E0F76C752E14A4C26B4D1E230019068601CA *)cache->attributes[12];
		AssemblyProductAttribute__ctor_m26DF1EBC1C86E7DA4786C66B44123899BE8DBCB8(tmp, il2cpp_codegen_string_new_wrapper("\x50\x68\x6F\x74\x6F\x6E\x20\x2E\x4E\x65\x74\x20\x43\x6C\x69\x65\x6E\x74\x20\x4C\x69\x62\x72\x61\x72\x79\x2E\x20\x44\x65\x62\x75\x67\x2E"), NULL);
	}
}
static void NonAllocDictionary_2_t0E8CF6DF8486E6FA7330679C764EDDF327FA43B8_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void Hashtable_tCEDCEDD497F0237203ED63E7C701083AC40B032E_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void EnetPeer_t0874B55C6A94DEDF9CB671C96472164B9901141E_CustomAttributesCacheGenerator_EnetPeer_U3CExecuteCommandU3Eb__66_0_m7EBBCC6EFBB4FB3BC24CB07793BCCABE9F44BDC6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_U3CStateU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_U3CProxyServerAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_U3CServerIpAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_U3CServerPortU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_U3CAddressResolvedAsIpv6U3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_U3CUrlProtocolU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_U3CUrlPathU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_get_State_mCBCA9960BADA39DECC2F2045BD347ACBAB128B0B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_set_State_m712603F001FBDF9DA589044E1C5467FABF737B8E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerAddress_m4981507B2D22C00AF4C4B0ABA66411AD5C69ACD8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerAddress_m9CE25AB187EC541E7E9F6C24B8D8BF83E7413946(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_get_ProxyServerAddress_mFA683D372C80D76BB3B7AC8F9EA223F7C032BB89(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_set_ProxyServerAddress_mF8055F819C55245D5624CCDA260A49DC2750D8A4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerIpAddress_mAE406EE0BCC1580AF0FD6F6C0DE566376D681EF6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerIpAddress_m72E960B4ABE772D66376F2807E18C4864CFEDA7D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerPort_mA51FD119B4DDAF036E456058DD69A934D7AA6EC4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerPort_m4BDB422EE73F6CB80DBDA279C7E08B6BECDE2AEB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_get_AddressResolvedAsIpv6_mC7C95893E297766A0A1E4347BE298AB4372CDA40(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_set_AddressResolvedAsIpv6_mF2BEAB0149F827B76AC77CA86F282D9AEB1DB77D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_get_UrlProtocol_mD88B17D05E5E0AD9A718FAD52745BE44543AF02F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_set_UrlProtocol_m5249189553C93CF53D8CF09197ED1F9B31DC6480(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_get_UrlPath_mABE5CA6D0A81EC8A559F2E7F7139E1395988B3FD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_set_UrlPath_m70364D9E8E756AA37E587E391F4897DB3FD6FA63(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_GetIpAddress_m17A9601346B2C1F0E28383E19DE3C621331AC5CA(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x47\x65\x74\x49\x70\x41\x64\x64\x72\x65\x73\x73\x65\x73\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_U3CHandleExceptionU3Eb__52_0_mB10DEB578BECA82F26303CF4E0173DCECFAD2B42(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_t5DA67A397EAF410991ED4FFE13646FAF0A0E0121_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void IProtocol_t73A5382B33D8B6436843A430FC8261CF33F9962F_CustomAttributesCacheGenerator_IProtocol_SerializeOperationRequest_m9703C1B4E60C1FC382C57C799654B7C3A2530B73(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x50\x61\x72\x61\x6D\x65\x74\x65\x72\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void SimulationItem_t14DDC27789EE4C58247943B3C8616CA9D14B02FF_CustomAttributesCacheGenerator_U3CDelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SimulationItem_t14DDC27789EE4C58247943B3C8616CA9D14B02FF_CustomAttributesCacheGenerator_SimulationItem_get_Delay_mDA6654CC9C4FFF76DDD27D0A1482BD845978707C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SimulationItem_t14DDC27789EE4C58247943B3C8616CA9D14B02FF_CustomAttributesCacheGenerator_SimulationItem_set_Delay_m839AE5C2E4A51FAC7E9BE44BEBC932CC921FDE2D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_t453B81B70F6B82F38088A756984AD4BA8721A77B_CustomAttributesCacheGenerator_U3CLostPackagesOutU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void NetworkSimulationSet_t453B81B70F6B82F38088A756984AD4BA8721A77B_CustomAttributesCacheGenerator_U3CLostPackagesInU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void NetworkSimulationSet_t453B81B70F6B82F38088A756984AD4BA8721A77B_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesOut_m57C4F3F82BF3B70DB87081B2F780FC37D7AEA16D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_t453B81B70F6B82F38088A756984AD4BA8721A77B_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesOut_m024E8BEA12F6955A3B7711E1EE2F18E5575F51A2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_t453B81B70F6B82F38088A756984AD4BA8721A77B_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesIn_m6CD3B14931F5025CC2679E8CE251E6C2308E9D8F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkSimulationSet_t453B81B70F6B82F38088A756984AD4BA8721A77B_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesIn_m668C2AB6015F735978CE082EF48D8D88D2D64A70(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ParameterDictionary_tFEEBE5629CBA89B11F06D3539363B7B3CC3A4E98_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void InitV3Flags_tB6FAB0E5D5AAF536D2FC77C9EA0E433572FF8D93_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * tmp = (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)cache->attributes[0];
		FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229(tmp, NULL);
	}
}
static void PeerBase_t60B2D401D5DA40564BFAA3373000F9E99CFF3CFE_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PeerBase_t60B2D401D5DA40564BFAA3373000F9E99CFF3CFE_CustomAttributesCacheGenerator_U3CProxyServerAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PeerBase_t60B2D401D5DA40564BFAA3373000F9E99CFF3CFE_CustomAttributesCacheGenerator_PeerBase_get_ServerAddress_m06C67C98770A7203276F621FBC8D8BD29AD80DE6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PeerBase_t60B2D401D5DA40564BFAA3373000F9E99CFF3CFE_CustomAttributesCacheGenerator_PeerBase_set_ServerAddress_mCBFD35C1A76D036D05A309BF04135A037D013E4C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PeerBase_t60B2D401D5DA40564BFAA3373000F9E99CFF3CFE_CustomAttributesCacheGenerator_PeerBase_get_ProxyServerAddress_m8810CBE72AA6A540B963917B3836D7AD9F4815DB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PeerBase_t60B2D401D5DA40564BFAA3373000F9E99CFF3CFE_CustomAttributesCacheGenerator_PeerBase_set_ProxyServerAddress_m203380963C30059C43DC6A61FAD7A0B38DF0CB63(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass108_0_t2637AF68A50EE446834D6F46FBB5C6E208AC060A_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass109_0_tAB095B85DB17C48CF6567F2950755D9F86A66872_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonClientWebSocket_t93C42D5EBDCB1F98378196667F28D554B87B0EEA_CustomAttributesCacheGenerator_PhotonClientWebSocket__ctor_m7AC1ACA7B35C8310FC616E23AD5E2E686736FF22(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_t2BCD0353A0F5A0E17F2A79D927D033EC686FFD51 * tmp = (PreserveAttribute_t2BCD0353A0F5A0E17F2A79D927D033EC686FFD51 *)cache->attributes[0];
		PreserveAttribute__ctor_mBB18E941CD40841C02EC38F7538614224711F5D7(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CCommandBufferSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CLimitOfUnreliableCommandsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_WarningSize(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x43\x68\x65\x63\x6B\x20\x51\x75\x65\x75\x65\x64\x4F\x75\x74\x67\x6F\x69\x6E\x67\x43\x6F\x6D\x6D\x61\x6E\x64\x73\x20\x61\x6E\x64\x20\x51\x75\x65\x75\x65\x64\x49\x6E\x63\x6F\x6D\x69\x6E\x67\x43\x6F\x6D\x6D\x61\x6E\x64\x73\x20\x6F\x6E\x20\x64\x65\x6D\x61\x6E\x64\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_NativeDatagramEncrypt(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x57\x68\x65\x72\x65\x20\x64\x79\x6E\x61\x6D\x69\x63\x20\x6C\x69\x6E\x6B\x69\x6E\x67\x20\x69\x73\x20\x61\x76\x61\x69\x6C\x61\x62\x6C\x65\x2C\x20\x74\x68\x69\x73\x20\x6C\x69\x62\x72\x61\x72\x79\x20\x77\x69\x6C\x6C\x20\x61\x74\x74\x65\x6D\x70\x74\x20\x74\x6F\x20\x6C\x6F\x61\x64\x20\x69\x74\x20\x61\x6E\x64\x20\x66\x61\x6C\x6C\x62\x61\x63\x6B\x20\x74\x6F\x20\x61\x20\x6D\x61\x6E\x61\x67\x65\x64\x20\x69\x6D\x70\x6C\x65\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x2E\x20\x54\x68\x69\x73\x20\x76\x61\x6C\x75\x65\x20\x69\x73\x20\x61\x6C\x77\x61\x79\x73\x20\x74\x72\x75\x65\x2E"), NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_CommandLogSize(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x74\x68\x65\x20\x49\x54\x72\x61\x66\x66\x69\x63\x52\x65\x63\x6F\x72\x64\x65\x72\x20\x74\x6F\x20\x63\x61\x70\x74\x75\x72\x65\x20\x61\x6C\x6C\x20\x74\x72\x61\x66\x66\x69\x63\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_NativeSocketLibAvailable(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x41\x20\x4E\x61\x74\x69\x76\x65\x20\x53\x6F\x63\x6B\x65\x74\x20\x69\x6D\x70\x6C\x65\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x69\x73\x20\x6E\x6F\x20\x6C\x6F\x6E\x67\x65\x72\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x74\x68\x69\x73\x20\x44\x4C\x4C\x20\x62\x75\x74\x20\x64\x65\x6C\x69\x76\x65\x72\x65\x64\x20\x69\x6E\x20\x61\x20\x73\x65\x70\x61\x72\x61\x74\x65\x20\x61\x64\x64\x2D\x6F\x6E\x2E\x20\x54\x68\x69\x73\x20\x76\x61\x6C\x75\x65\x20\x61\x6C\x77\x61\x79\x73\x20\x72\x65\x74\x75\x72\x6E\x73\x20\x66\x61\x6C\x73\x65\x2E"), NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_NativePayloadEncryptionLibAvailable(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x61\x74\x69\x76\x65\x20\x50\x61\x79\x6C\x6F\x61\x64\x20\x45\x6E\x63\x72\x79\x70\x74\x69\x6F\x6E\x20\x69\x73\x20\x6E\x6F\x20\x6C\x6F\x6E\x67\x65\x72\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x74\x68\x69\x73\x20\x44\x4C\x4C\x20\x62\x75\x74\x20\x64\x65\x6C\x69\x76\x65\x72\x65\x64\x20\x69\x6E\x20\x61\x20\x73\x65\x70\x61\x72\x61\x74\x65\x20\x61\x64\x64\x2D\x6F\x6E\x2E\x20\x54\x68\x69\x73\x20\x76\x61\x6C\x75\x65\x20\x61\x6C\x77\x61\x79\x73\x20\x72\x65\x74\x75\x72\x6E\x73\x20\x66\x61\x6C\x73\x65\x2E"), NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_NativeDatagramEncryptionLibAvailable(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x61\x74\x69\x76\x65\x20\x44\x61\x74\x61\x67\x72\x61\x6D\x20\x45\x6E\x63\x72\x79\x70\x74\x69\x6F\x6E\x20\x69\x73\x20\x6E\x6F\x20\x6C\x6F\x6E\x67\x65\x72\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x74\x68\x69\x73\x20\x44\x4C\x4C\x20\x62\x75\x74\x20\x64\x65\x6C\x69\x76\x65\x72\x65\x64\x20\x69\x6E\x20\x61\x20\x73\x65\x70\x61\x72\x61\x74\x65\x20\x61\x64\x64\x2D\x6F\x6E\x2E\x20\x54\x68\x69\x73\x20\x76\x61\x6C\x75\x65\x20\x61\x6C\x77\x61\x79\x73\x20\x72\x65\x74\x75\x72\x6E\x73\x20\x66\x61\x6C\x73\x65\x2E"), NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CSerializationProtocolTypeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CSocketImplementationU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CListenerU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_OnDisconnectMessage(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CEnableServerTracingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CTransportProtocolU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CIsSendingOnlyAcksU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CTrafficStatsIncomingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CTrafficStatsOutgoingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CTrafficStatsGameLevelU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CCountDiscardedU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CDeltaUnreliableNumberU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_CommandBufferSize_mF5AF1436D0BC26469829D2403BE34D6D16D6819C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_CommandBufferSize_mCF7412A912ED07D9AC2D416BAA974451B59B0569(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_LimitOfUnreliableCommands_mC9231E4E0E922DD7AB6C710FEA4B7778FD6E5F65(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_LimitOfUnreliableCommands_mFC34FB677FD6514744FD01FA5FFBE9CF1B6EB48D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_CommandLogToString_mC361D4B364AB1F758943763D98C782E5B179740C(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x74\x68\x65\x20\x49\x54\x72\x61\x66\x66\x69\x63\x52\x65\x63\x6F\x72\x64\x65\x72\x20\x74\x6F\x20\x63\x61\x70\x74\x75\x72\x65\x20\x61\x6C\x6C\x20\x74\x72\x61\x66\x66\x69\x63\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_SerializationProtocolType_m006FEAA62B9195004D382401582829EF5DFC259A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_SerializationProtocolType_m2057879CE88BA2674F048A45E566F4B1EC55A285(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_SocketImplementation_m5E83067DE18D91236EEAA8390FD6CD1F3121656A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_SocketImplementation_mA6CFBECD09D31F99B78C87C1337F61DAF0FD3F78(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_Listener_mD93577391E7A84C729AAF29559F4BA8E44406FCF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_Listener_mB4DEBC5C3D7608405DF14F34822718D1B55EBF27(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_add_OnDisconnectMessage_m5A4EDF81022B91BB18F092F50B2A7D4F98CDB50B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_remove_OnDisconnectMessage_m853B4F80F4BC0846D13B6CC9CE567511B5F606A9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_EnableServerTracing_mC9097CE7A01284573BA113D8CA902EDC9E0F5C08(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_EnableServerTracing_m0B4B74A9A9F188ACB590DD17120A720B82529CC1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_TransportProtocol_m241FC01029F5A01F6BA72281702348B7DACA1DDB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_TransportProtocol_m97D75B8FD75BDA8610B1935207B35DC05425F4C2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_IsSendingOnlyAcks_m0A21823796EC6246365F829EC411B089C154D8AE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_IsSendingOnlyAcks_m1B3800074EDD520E7AA522121CA7CD0A7EEB44CA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsIncoming_mE995CCB8EA2A71DBFCB052BBA1FC79CD3B9C16D3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsIncoming_mF93F339701A7C91C7010F9483D411B51DC53026D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsOutgoing_m98C77C2B52BEEF913AB61F3BFCFACFCF3B09E67D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsOutgoing_m94E14BCDAD4646D4E7CDFE161C1CDFC2B6426AF9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsGameLevel_m7B72D02A24AF29CC3785DD6AEFDBA60EBB99415E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsGameLevel_m0178E13B55ABC27A77C42F79965CD044DFA99549(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_CountDiscarded_mA27C7A72D5A5A88B0C0145D90C5923060051A3C7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_CountDiscarded_mEB5A6B44A33CECCA730B57C8A3044AF23B5CB825(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_DeltaUnreliableNumber_m30572390A28FD076DCA8E622CD6ED20120FAFD68(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_DeltaUnreliableNumber_m7E4B4A3CFF0F4BC3C426D0B3F75C8262CDBB5DB2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_U3CEstablishEncryptionU3Eb__220_0_m46E93E418BE49CCEF01AF91E395C8C652EF1BB3E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9____CommandBufferSize_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x65\x20\x72\x65\x6D\x61\x72\x6B\x73\x2E"), NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9____LimitOfUnreliableCommands_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x53\x65\x65\x20\x72\x65\x6D\x61\x72\x6B\x73\x2E"), NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9____LocalTimeInMilliSeconds_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x52\x65\x74\x75\x72\x6E\x73\x20\x53\x75\x70\x70\x6F\x72\x74\x43\x6C\x61\x73\x73\x2E\x47\x65\x74\x54\x69\x63\x6B\x43\x6F\x75\x6E\x74\x28\x29\x2E\x20\x53\x68\x6F\x75\x6C\x64\x20\x62\x65\x20\x72\x65\x70\x6C\x61\x63\x65\x64\x20\x62\x79\x20\x61\x20\x53\x74\x6F\x70\x57\x61\x74\x63\x68\x20\x6F\x72\x20\x74\x68\x65\x20\x70\x65\x72\x20\x70\x65\x65\x72\x20\x50\x68\x6F\x74\x6F\x6E\x50\x65\x65\x72\x2E\x43\x6C\x69\x65\x6E\x74\x54\x69\x6D\x65\x2E"), NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9____ClientVersion_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x73\x74\x61\x74\x69\x63\x20\x73\x74\x72\x69\x6E\x67\x20\x56\x65\x72\x73\x69\x6F\x6E\x20\x73\x68\x6F\x75\x6C\x64\x20\x62\x65\x20\x70\x72\x65\x66\x65\x72\x72\x65\x64\x2E"), NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9____LocalMsTimestampDelegate_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x50\x68\x6F\x74\x6F\x6E\x50\x65\x65\x72\x20\x77\x69\x6C\x6C\x20\x6E\x6F\x20\x6C\x6F\x6E\x67\x65\x72\x20\x75\x73\x65\x20\x74\x68\x69\x73\x20\x64\x65\x6C\x65\x67\x61\x74\x65\x2E\x20\x49\x74\x20\x75\x73\x65\x73\x20\x61\x20\x53\x74\x6F\x70\x77\x61\x74\x63\x68\x20\x69\x6E\x20\x61\x6C\x6C\x20\x63\x61\x73\x65\x73\x2E\x20\x59\x6F\x75\x20\x63\x61\x6E\x20\x61\x63\x63\x65\x73\x73\x20\x50\x68\x6F\x74\x6F\x6E\x50\x65\x65\x72\x2E\x43\x6F\x6E\x6E\x65\x63\x74\x69\x6F\x6E\x54\x69\x6D\x65\x2E"), NULL);
	}
}
static void PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9____IsSendingOnlyAcks_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x49\x6E\x74\x65\x72\x6E\x61\x6C\x6C\x79\x20\x6E\x6F\x74\x20\x75\x73\x65\x64\x20\x61\x6E\x79\x6D\x6F\x72\x65\x2E\x20\x43\x61\x6C\x6C\x20\x53\x65\x6E\x64\x41\x63\x6B\x73\x4F\x6E\x6C\x79\x28\x29\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void OperationResponse_tC5D3B4D9352F132457F166355EB22E70F7432EFB_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void EventData_t111F1C77441E7AB0A84868DCF00F3C79BF50287E_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 * tmp = (DefaultMemberAttribute_t8C9B3330DEA69EE364962477FF14FD2CFE30D4B5 *)cache->attributes[0];
		DefaultMemberAttribute__ctor_mA025B6F5B3A9292696E01108027840C8DFF7F4D7(tmp, il2cpp_codegen_string_new_wrapper("\x49\x74\x65\x6D"), NULL);
	}
}
static void Protocol_t18B9A114CA76A976994396BA85DDF41503932085_CustomAttributesCacheGenerator_Protocol_Serialize_m1DB35C65529AC68D12B73D2924EA6A120590BF1E(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Protocol_t18B9A114CA76A976994396BA85DDF41503932085_CustomAttributesCacheGenerator_Protocol_Deserialize_m5C346C284E11D246066E9F4095A49E63F174C992(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Protocol16_t7E9F76ABA406ADA001CDF37A591A2F9C3F3D6F8B_CustomAttributesCacheGenerator_Protocol16_SerializeOperationRequest_m883C8759A23BA0463368C563E8028922FFD736F5(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x50\x61\x72\x61\x6D\x65\x74\x65\x72\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void Protocol16_t7E9F76ABA406ADA001CDF37A591A2F9C3F3D6F8B_CustomAttributesCacheGenerator_Protocol16_SerializeParameterTable_m9EFA1E94D774336E5D9B08D26BDDD8D39D52A517(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x50\x61\x72\x61\x6D\x65\x74\x65\x72\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x20\x69\x6E\x73\x74\x65\x61\x64\x20\x6F\x66\x20\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x3C\x62\x79\x74\x65\x2C\x20\x6F\x62\x6A\x65\x63\x74\x3E\x2E"), NULL);
	}
}
static void Protocol18_t4A451F99059A6CA147827AE44233FA96A694E5A7_CustomAttributesCacheGenerator_Protocol18_ReadParameterTable_m63CF07C835C8010C702891E50219B4D26A3BE4A7(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x50\x61\x72\x61\x6D\x65\x74\x65\x72\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void Protocol18_t4A451F99059A6CA147827AE44233FA96A694E5A7_CustomAttributesCacheGenerator_Protocol18_SerializeOperationRequest_m864E4C5AA7213042C3DD58C37ED1364EA907A04F(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x50\x61\x72\x61\x6D\x65\x74\x65\x72\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void SocketTcp_t2EE99FE3C049DD81ACE6F7640146D8141850A7EE_CustomAttributesCacheGenerator_SocketTcp__ctor_m22A4CD41CAAAB499484B7F33457CEA288F339854(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_t2BCD0353A0F5A0E17F2A79D927D033EC686FFD51 * tmp = (PreserveAttribute_t2BCD0353A0F5A0E17F2A79D927D033EC686FFD51 *)cache->attributes[0];
		PreserveAttribute__ctor_mBB18E941CD40841C02EC38F7538614224711F5D7(tmp, NULL);
	}
}
static void SocketTcpAsync_tC88E14088BE01FF971BB632BD59D9D82695D4A38_CustomAttributesCacheGenerator_SocketTcpAsync__ctor_m779D6A4B954B975AA1C5891A43DAEAC0FE425D51(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_t2BCD0353A0F5A0E17F2A79D927D033EC686FFD51 * tmp = (PreserveAttribute_t2BCD0353A0F5A0E17F2A79D927D033EC686FFD51 *)cache->attributes[0];
		PreserveAttribute__ctor_mBB18E941CD40841C02EC38F7538614224711F5D7(tmp, NULL);
	}
}
static void SocketUdp_t1E7379DF2E39AC496BBF0C61A98E4EDB0683E135_CustomAttributesCacheGenerator_SocketUdp__ctor_m4F0261BEEDD5B8DD725D4EA6FED3A10927683D49(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_t2BCD0353A0F5A0E17F2A79D927D033EC686FFD51 * tmp = (PreserveAttribute_t2BCD0353A0F5A0E17F2A79D927D033EC686FFD51 *)cache->attributes[0];
		PreserveAttribute__ctor_mBB18E941CD40841C02EC38F7538614224711F5D7(tmp, NULL);
	}
}
static void SocketUdpAsync_t4686A91960750B55DFC073CEEA1DA9154D499A3B_CustomAttributesCacheGenerator_SocketUdpAsync__ctor_m32552141D6651BA12DABC3D413FB4ACBEDBC1E06(CustomAttributesCache* cache)
{
	{
		PreserveAttribute_t2BCD0353A0F5A0E17F2A79D927D033EC686FFD51 * tmp = (PreserveAttribute_t2BCD0353A0F5A0E17F2A79D927D033EC686FFD51 *)cache->attributes[0];
		PreserveAttribute__ctor_mBB18E941CD40841C02EC38F7538614224711F5D7(tmp, NULL);
	}
}
static void SupportClass_t267AC55131FDEA0D5B13E0D89326D9C6F6D816A2_CustomAttributesCacheGenerator_IntegerMilliseconds(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x61\x20\x53\x74\x6F\x70\x77\x61\x74\x63\x68\x20\x28\x6F\x72\x20\x65\x71\x75\x69\x76\x61\x6C\x65\x6E\x74\x29\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void SupportClass_t267AC55131FDEA0D5B13E0D89326D9C6F6D816A2_CustomAttributesCacheGenerator_SupportClass_GetTickCount_mCA6C993C49B166EA4A089FD064F493F94621EAA6(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x61\x20\x53\x74\x6F\x70\x77\x61\x74\x63\x68\x20\x28\x6F\x72\x20\x65\x71\x75\x69\x76\x61\x6C\x65\x6E\x74\x29\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void SupportClass_t267AC55131FDEA0D5B13E0D89326D9C6F6D816A2_CustomAttributesCacheGenerator_SupportClass_HashtableToString_m5E88D814AF2EF3EFBB28590A8DB300690F06D91E(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x44\x69\x63\x74\x69\x6F\x6E\x61\x72\x79\x54\x6F\x53\x74\x72\x69\x6E\x67\x28\x29\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void IntegerMillisecondsDelegate_t351548500DAAC5CE8D5106460ED14F431FBBB75F_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x61\x20\x53\x74\x6F\x70\x77\x61\x74\x63\x68\x20\x28\x6F\x72\x20\x65\x71\x75\x69\x76\x61\x6C\x65\x6E\x74\x29\x20\x69\x6E\x73\x74\x65\x61\x64\x2E"), NULL);
	}
}
static void U3CU3Ec__DisplayClass6_0_t67D227C1E90786C36BAEF252640998280D0087FE_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_t1E3A602FB626578BD08DE47E9045DFAA127BA231_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Pool_1_t5D587B680B1CD4B266FAEAEDBC3961E115802CBC_CustomAttributesCacheGenerator_Pool_1_Push_mEC1846BE1EDC5658BEBD67D72AB38DCA15405888(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x52\x65\x6C\x65\x61\x73\x65\x28\x29\x20\x72\x61\x74\x68\x65\x72\x20\x74\x68\x61\x6E\x20\x50\x75\x73\x68\x28\x29"), NULL);
	}
}
static void Pool_1_t5D587B680B1CD4B266FAEAEDBC3961E115802CBC_CustomAttributesCacheGenerator_Pool_1_Pop_mE85EEE7543DA5AE45C9C20142C14257FFC459E7E(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x41\x63\x71\x75\x69\x72\x65\x28\x29\x20\x72\x61\x74\x68\x65\x72\x20\x74\x68\x61\x6E\x20\x50\x6F\x70\x28\x29"), NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3COperationByteCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3COperationCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CResultByteCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CResultCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CEventByteCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CEventCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CLongestEventCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CLongestMessageCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CLongestRawMessageCallbackU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CLongestEventCallbackCodeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenSendingU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CDispatchIncomingCommandsCallsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CSendOutgoingCommandsCallsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationByteCount_m2089CBB504830D37FF4C8A894C43DE477C260521(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationByteCount_mF2EEBC60AE41230BF66C515E18683FBB93EF21C1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationCount_mFCBE5DE91F51FE07BCC0BF325D3230B9E315B316(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationCount_m6C392F9E340C3D18F0E1552F777CA82F6A104BA7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultByteCount_m3D34E15D0ED99023B62F3BA706AE93615282BDA7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultByteCount_mC5E873898F51DA4826DC1A2B45156148012DDC01(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultCount_mC6960E7FD026D72B9E69137CD98A92E60643416F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultCount_mFF2D679D1049B164B3D73709E9DE5598EC1C98E3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventByteCount_m4678995DB3EE17C240B20A96CBC80D2EF8D85DB4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventByteCount_mE2F4D11CB1D01ECE858EB6556844F576EDA426CE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventCount_m5CE59A2C42C6AEE017DA492A419CB1CC0379CCAF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventCount_mC9D5C6B905964C0B9C2A131AB5FFDA2E00839599(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallback_mE720B67A537F373F32B2FC256D86A075F9EFB355(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallback_m6E52F13679ED87DC02CAA8217A7068EF853C335B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_m59DC4D2BC17898DFAF128A9B4E31CD0901405E82(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m299FC1CCC08DBFE55444C69D0D224430FAF6E49C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallback_m7DD575B44E7B16114310081ADCFE7DEDB9C3AD00(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallback_m6798ED09614DE4BFE0897CD53AC7C54150E39CBA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestMessageCallback_mB280F291E9CF04792BDD8B7C3FF09CA8451BF2FD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestMessageCallback_mDE6BB0427C10CD1A53CC493F002E346C3B854C5B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestRawMessageCallback_m2E330C85865836C8A65AB5B4F00AC5CBCB3ADB98(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestRawMessageCallback_m5C613DA73858F138630885CC2488A0DC003CBE82(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallbackCode_mF9149C5649EFE6E449D10DB44DA3932141EEAE52(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallbackCode_mD64C7F662301CDA39E75D4770F40B22C4FD88AF7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_mF818217AEEC16E376C301D5F59472242CF59E7D5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_mA23DE9B7CBBDC749BA8E7BC462FA165D62FE2F7D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenSending_mE635BF2E6D533EBF517542214FF461FD0C26228A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m5D172DBCBB9C1DE9125223724BFF48DFF990B008(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_mDBEA7C2AE2DEABD7842358B6EA6583CB8EDC1788(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m233D81960697F0205EA072086240E7B9D4A6A82A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m0ACA2E1B4586D9075C4CC4B027FADA0D2381FC2D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_mE24596B0A895976D3CD523237BF1DF8C1F1ED356(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5____DispatchCalls_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_mAC32A5CCD287DA84CDA9F08282C1C8B0DB7B9868(tmp, il2cpp_codegen_string_new_wrapper("\x55\x73\x65\x20\x44\x69\x73\x70\x61\x74\x63\x68\x49\x6E\x63\x6F\x6D\x69\x6E\x67\x43\x6F\x6D\x6D\x61\x6E\x64\x73\x43\x61\x6C\x6C\x73\x2C\x20\x77\x68\x69\x63\x68\x20\x68\x61\x73\x20\x70\x72\x6F\x70\x65\x72\x20\x6E\x61\x6D\x69\x6E\x67\x2E"), NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CPackageHeaderSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CReliableCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CUnreliableCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CFragmentCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CControlCommandCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CTotalPacketCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CTotalCommandsInPacketsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CReliableCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CUnreliableCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CFragmentCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CControlCommandBytesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CTimestampOfLastAckU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CTimestampOfLastReliableCommandU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_PackageHeaderSize_m32A092602FF07FFBA520DF21550F91065EFD6308(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_PackageHeaderSize_m750B0D788B4FEB6BA1773358BA1EC7CA88DEB7DC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandCount_mDEF410010AE29D541E86CB6F8BA225ADE0E15110(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandCount_m611B156681B757C61898416AB34E37297FCD8510(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandCount_mDCE94AD8586AE33EAD14DCCA7B6817F34B8226FF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandCount_m9C4F449269CC07F54B833622D8943C8EBFDE60FC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandCount_mCDA675AAD42927C921445B808A6C67779A1DD4CA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandCount_m8ECD87B158A7DA1DB4E4E6E54D34B0A5D57BE193(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandCount_mA78317217ED6D18A5ED0C4ED27722EBF04DAC56B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandCount_mF8D39450381EF8C3AC2CAA6B9D4EA05E0E131DE7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_TotalPacketCount_mCB866F5DB8B679E1968798C27BA44C2B47A01A8E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_TotalPacketCount_m45662B78518824A2228C8EBEE39AEB5785C04C85(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_TotalCommandsInPackets_m764A7D73AEFB9536FA456B723BE7EB09D8D131F5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_TotalCommandsInPackets_m796483EA476191EF5AFEB1BEA096AB048C0F74B5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandBytes_mA276C73B57244E1A388DBD58D35BD2A203E78249(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandBytes_m1B2BCDFEFA23303D4A0514FBC5FB6128D9E80859(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandBytes_m724BE08D450265F884797FBDAE19E0E938724728(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandBytes_m43EC6C561FCA553EA885F46A4F028A1019013EB1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandBytes_m35A9623DB806DECDE7FD1AFD096A3731CD9569B6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandBytes_mB923F27141FE0F3544CDDBBF70513D368A4CAE9B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandBytes_mDF9BBEE4988E847D90B729534C34E5F377CA51E1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandBytes_m3925630DFD93A0B5F2DCA8A9B68727E88ED77434(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_TimestampOfLastAck_m9A766B1A91B0E1497B5B0C23DCB96CB3263B4AA3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastAck_mA32CBBE8AC69DD66FCA03837BE4B832847F1A4E3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_TimestampOfLastReliableCommand_m5E32E264C58AC523F8DE8874D7B67A4573E0CA40(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastReliableCommand_m7C868F33B4EDB18E1629FBD18B3FA1BABADACCE8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void StructWrapper_1_tD1BED93464853CA16DB39C89CFBC659FDD5F4C40_CustomAttributesCacheGenerator_U3CReturnPoolU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void StructWrapper_1_tD1BED93464853CA16DB39C89CFBC659FDD5F4C40_CustomAttributesCacheGenerator_StructWrapper_1_get_ReturnPool_m5422DDFF9396D221988D17ECFA0A7C1C79EBF579(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void StructWrapper_1_tD1BED93464853CA16DB39C89CFBC659FDD5F4C40_CustomAttributesCacheGenerator_StructWrapper_1_set_ReturnPool_m50F0E141FC9AE792C26D507A8BDB88E3D10AC891(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void StructWrapperUtility_t57B7B7A6BF5D2C5B954F09712D8657EF4DAA76D4_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void StructWrapperUtility_t57B7B7A6BF5D2C5B954F09712D8657EF4DAA76D4_CustomAttributesCacheGenerator_StructWrapperUtility_Unwrap_m4BBEEC2BBE61509FE1DBB2D8CFDD12454ECE4DA0(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void StructWrapperUtility_t57B7B7A6BF5D2C5B954F09712D8657EF4DAA76D4_CustomAttributesCacheGenerator_StructWrapperUtility_Get_mD22BB3A26C759ECE8A2459670C4BE70A810BF48B(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void U3CPrivateImplementationDetailsU3E_tDB82297A4499EE90E9CCFCEFE8CAE4D5746994DA_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_Photon3Unity3D_AttributeGenerators[];
const CustomAttributesCacheGenerator g_Photon3Unity3D_AttributeGenerators[223] = 
{
	NonAllocDictionary_2_t0E8CF6DF8486E6FA7330679C764EDDF327FA43B8_CustomAttributesCacheGenerator,
	Hashtable_tCEDCEDD497F0237203ED63E7C701083AC40B032E_CustomAttributesCacheGenerator,
	U3CU3Ec_t5DA67A397EAF410991ED4FFE13646FAF0A0E0121_CustomAttributesCacheGenerator,
	ParameterDictionary_tFEEBE5629CBA89B11F06D3539363B7B3CC3A4E98_CustomAttributesCacheGenerator,
	InitV3Flags_tB6FAB0E5D5AAF536D2FC77C9EA0E433572FF8D93_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass108_0_t2637AF68A50EE446834D6F46FBB5C6E208AC060A_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass109_0_tAB095B85DB17C48CF6567F2950755D9F86A66872_CustomAttributesCacheGenerator,
	OperationResponse_tC5D3B4D9352F132457F166355EB22E70F7432EFB_CustomAttributesCacheGenerator,
	EventData_t111F1C77441E7AB0A84868DCF00F3C79BF50287E_CustomAttributesCacheGenerator,
	IntegerMillisecondsDelegate_t351548500DAAC5CE8D5106460ED14F431FBBB75F_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass6_0_t67D227C1E90786C36BAEF252640998280D0087FE_CustomAttributesCacheGenerator,
	U3CU3Ec_t1E3A602FB626578BD08DE47E9045DFAA127BA231_CustomAttributesCacheGenerator,
	StructWrapperUtility_t57B7B7A6BF5D2C5B954F09712D8657EF4DAA76D4_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_tDB82297A4499EE90E9CCFCEFE8CAE4D5746994DA_CustomAttributesCacheGenerator,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_U3CStateU3Ek__BackingField,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_U3CProxyServerAddressU3Ek__BackingField,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_U3CServerIpAddressU3Ek__BackingField,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_U3CServerPortU3Ek__BackingField,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_U3CAddressResolvedAsIpv6U3Ek__BackingField,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_U3CUrlProtocolU3Ek__BackingField,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_U3CUrlPathU3Ek__BackingField,
	SimulationItem_t14DDC27789EE4C58247943B3C8616CA9D14B02FF_CustomAttributesCacheGenerator_U3CDelayU3Ek__BackingField,
	NetworkSimulationSet_t453B81B70F6B82F38088A756984AD4BA8721A77B_CustomAttributesCacheGenerator_U3CLostPackagesOutU3Ek__BackingField,
	NetworkSimulationSet_t453B81B70F6B82F38088A756984AD4BA8721A77B_CustomAttributesCacheGenerator_U3CLostPackagesInU3Ek__BackingField,
	PeerBase_t60B2D401D5DA40564BFAA3373000F9E99CFF3CFE_CustomAttributesCacheGenerator_U3CServerAddressU3Ek__BackingField,
	PeerBase_t60B2D401D5DA40564BFAA3373000F9E99CFF3CFE_CustomAttributesCacheGenerator_U3CProxyServerAddressU3Ek__BackingField,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CCommandBufferSizeU3Ek__BackingField,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CLimitOfUnreliableCommandsU3Ek__BackingField,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_WarningSize,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_NativeDatagramEncrypt,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_CommandLogSize,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_NativeSocketLibAvailable,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_NativePayloadEncryptionLibAvailable,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_NativeDatagramEncryptionLibAvailable,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CSerializationProtocolTypeU3Ek__BackingField,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CSocketImplementationU3Ek__BackingField,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CListenerU3Ek__BackingField,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_OnDisconnectMessage,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CEnableServerTracingU3Ek__BackingField,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CTransportProtocolU3Ek__BackingField,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CIsSendingOnlyAcksU3Ek__BackingField,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CTrafficStatsIncomingU3Ek__BackingField,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CTrafficStatsOutgoingU3Ek__BackingField,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CTrafficStatsGameLevelU3Ek__BackingField,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CCountDiscardedU3Ek__BackingField,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_U3CDeltaUnreliableNumberU3Ek__BackingField,
	SupportClass_t267AC55131FDEA0D5B13E0D89326D9C6F6D816A2_CustomAttributesCacheGenerator_IntegerMilliseconds,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3COperationByteCountU3Ek__BackingField,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3COperationCountU3Ek__BackingField,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CResultByteCountU3Ek__BackingField,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CResultCountU3Ek__BackingField,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CEventByteCountU3Ek__BackingField,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CEventCountU3Ek__BackingField,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CLongestEventCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CLongestMessageCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CLongestRawMessageCallbackU3Ek__BackingField,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CLongestEventCallbackCodeU3Ek__BackingField,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CLongestDeltaBetweenSendingU3Ek__BackingField,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CDispatchIncomingCommandsCallsU3Ek__BackingField,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_U3CSendOutgoingCommandsCallsU3Ek__BackingField,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CPackageHeaderSizeU3Ek__BackingField,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CReliableCommandCountU3Ek__BackingField,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CUnreliableCommandCountU3Ek__BackingField,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CFragmentCommandCountU3Ek__BackingField,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CControlCommandCountU3Ek__BackingField,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CTotalPacketCountU3Ek__BackingField,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CTotalCommandsInPacketsU3Ek__BackingField,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CReliableCommandBytesU3Ek__BackingField,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CUnreliableCommandBytesU3Ek__BackingField,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CFragmentCommandBytesU3Ek__BackingField,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CControlCommandBytesU3Ek__BackingField,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CTimestampOfLastAckU3Ek__BackingField,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_U3CTimestampOfLastReliableCommandU3Ek__BackingField,
	StructWrapper_1_tD1BED93464853CA16DB39C89CFBC659FDD5F4C40_CustomAttributesCacheGenerator_U3CReturnPoolU3Ek__BackingField,
	EnetPeer_t0874B55C6A94DEDF9CB671C96472164B9901141E_CustomAttributesCacheGenerator_EnetPeer_U3CExecuteCommandU3Eb__66_0_m7EBBCC6EFBB4FB3BC24CB07793BCCABE9F44BDC6,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_get_State_mCBCA9960BADA39DECC2F2045BD347ACBAB128B0B,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_set_State_m712603F001FBDF9DA589044E1C5467FABF737B8E,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerAddress_m4981507B2D22C00AF4C4B0ABA66411AD5C69ACD8,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerAddress_m9CE25AB187EC541E7E9F6C24B8D8BF83E7413946,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_get_ProxyServerAddress_mFA683D372C80D76BB3B7AC8F9EA223F7C032BB89,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_set_ProxyServerAddress_mF8055F819C55245D5624CCDA260A49DC2750D8A4,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerIpAddress_mAE406EE0BCC1580AF0FD6F6C0DE566376D681EF6,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerIpAddress_m72E960B4ABE772D66376F2807E18C4864CFEDA7D,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_get_ServerPort_mA51FD119B4DDAF036E456058DD69A934D7AA6EC4,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_set_ServerPort_m4BDB422EE73F6CB80DBDA279C7E08B6BECDE2AEB,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_get_AddressResolvedAsIpv6_mC7C95893E297766A0A1E4347BE298AB4372CDA40,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_set_AddressResolvedAsIpv6_mF2BEAB0149F827B76AC77CA86F282D9AEB1DB77D,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_get_UrlProtocol_mD88B17D05E5E0AD9A718FAD52745BE44543AF02F,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_set_UrlProtocol_m5249189553C93CF53D8CF09197ED1F9B31DC6480,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_get_UrlPath_mABE5CA6D0A81EC8A559F2E7F7139E1395988B3FD,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_set_UrlPath_m70364D9E8E756AA37E587E391F4897DB3FD6FA63,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_GetIpAddress_m17A9601346B2C1F0E28383E19DE3C621331AC5CA,
	IPhotonSocket_t355F8C20590AC0DE9BDB3AA31FEEC394ABECB06E_CustomAttributesCacheGenerator_IPhotonSocket_U3CHandleExceptionU3Eb__52_0_mB10DEB578BECA82F26303CF4E0173DCECFAD2B42,
	IProtocol_t73A5382B33D8B6436843A430FC8261CF33F9962F_CustomAttributesCacheGenerator_IProtocol_SerializeOperationRequest_m9703C1B4E60C1FC382C57C799654B7C3A2530B73,
	SimulationItem_t14DDC27789EE4C58247943B3C8616CA9D14B02FF_CustomAttributesCacheGenerator_SimulationItem_get_Delay_mDA6654CC9C4FFF76DDD27D0A1482BD845978707C,
	SimulationItem_t14DDC27789EE4C58247943B3C8616CA9D14B02FF_CustomAttributesCacheGenerator_SimulationItem_set_Delay_m839AE5C2E4A51FAC7E9BE44BEBC932CC921FDE2D,
	NetworkSimulationSet_t453B81B70F6B82F38088A756984AD4BA8721A77B_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesOut_m57C4F3F82BF3B70DB87081B2F780FC37D7AEA16D,
	NetworkSimulationSet_t453B81B70F6B82F38088A756984AD4BA8721A77B_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesOut_m024E8BEA12F6955A3B7711E1EE2F18E5575F51A2,
	NetworkSimulationSet_t453B81B70F6B82F38088A756984AD4BA8721A77B_CustomAttributesCacheGenerator_NetworkSimulationSet_get_LostPackagesIn_m6CD3B14931F5025CC2679E8CE251E6C2308E9D8F,
	NetworkSimulationSet_t453B81B70F6B82F38088A756984AD4BA8721A77B_CustomAttributesCacheGenerator_NetworkSimulationSet_set_LostPackagesIn_m668C2AB6015F735978CE082EF48D8D88D2D64A70,
	PeerBase_t60B2D401D5DA40564BFAA3373000F9E99CFF3CFE_CustomAttributesCacheGenerator_PeerBase_get_ServerAddress_m06C67C98770A7203276F621FBC8D8BD29AD80DE6,
	PeerBase_t60B2D401D5DA40564BFAA3373000F9E99CFF3CFE_CustomAttributesCacheGenerator_PeerBase_set_ServerAddress_mCBFD35C1A76D036D05A309BF04135A037D013E4C,
	PeerBase_t60B2D401D5DA40564BFAA3373000F9E99CFF3CFE_CustomAttributesCacheGenerator_PeerBase_get_ProxyServerAddress_m8810CBE72AA6A540B963917B3836D7AD9F4815DB,
	PeerBase_t60B2D401D5DA40564BFAA3373000F9E99CFF3CFE_CustomAttributesCacheGenerator_PeerBase_set_ProxyServerAddress_m203380963C30059C43DC6A61FAD7A0B38DF0CB63,
	PhotonClientWebSocket_t93C42D5EBDCB1F98378196667F28D554B87B0EEA_CustomAttributesCacheGenerator_PhotonClientWebSocket__ctor_m7AC1ACA7B35C8310FC616E23AD5E2E686736FF22,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_CommandBufferSize_mF5AF1436D0BC26469829D2403BE34D6D16D6819C,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_CommandBufferSize_mCF7412A912ED07D9AC2D416BAA974451B59B0569,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_LimitOfUnreliableCommands_mC9231E4E0E922DD7AB6C710FEA4B7778FD6E5F65,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_LimitOfUnreliableCommands_mFC34FB677FD6514744FD01FA5FFBE9CF1B6EB48D,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_CommandLogToString_mC361D4B364AB1F758943763D98C782E5B179740C,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_SerializationProtocolType_m006FEAA62B9195004D382401582829EF5DFC259A,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_SerializationProtocolType_m2057879CE88BA2674F048A45E566F4B1EC55A285,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_SocketImplementation_m5E83067DE18D91236EEAA8390FD6CD1F3121656A,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_SocketImplementation_mA6CFBECD09D31F99B78C87C1337F61DAF0FD3F78,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_Listener_mD93577391E7A84C729AAF29559F4BA8E44406FCF,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_Listener_mB4DEBC5C3D7608405DF14F34822718D1B55EBF27,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_add_OnDisconnectMessage_m5A4EDF81022B91BB18F092F50B2A7D4F98CDB50B,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_remove_OnDisconnectMessage_m853B4F80F4BC0846D13B6CC9CE567511B5F606A9,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_EnableServerTracing_mC9097CE7A01284573BA113D8CA902EDC9E0F5C08,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_EnableServerTracing_m0B4B74A9A9F188ACB590DD17120A720B82529CC1,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_TransportProtocol_m241FC01029F5A01F6BA72281702348B7DACA1DDB,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_TransportProtocol_m97D75B8FD75BDA8610B1935207B35DC05425F4C2,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_IsSendingOnlyAcks_m0A21823796EC6246365F829EC411B089C154D8AE,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_IsSendingOnlyAcks_m1B3800074EDD520E7AA522121CA7CD0A7EEB44CA,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsIncoming_mE995CCB8EA2A71DBFCB052BBA1FC79CD3B9C16D3,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsIncoming_mF93F339701A7C91C7010F9483D411B51DC53026D,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsOutgoing_m98C77C2B52BEEF913AB61F3BFCFACFCF3B09E67D,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsOutgoing_m94E14BCDAD4646D4E7CDFE161C1CDFC2B6426AF9,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_TrafficStatsGameLevel_m7B72D02A24AF29CC3785DD6AEFDBA60EBB99415E,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_TrafficStatsGameLevel_m0178E13B55ABC27A77C42F79965CD044DFA99549,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_CountDiscarded_mA27C7A72D5A5A88B0C0145D90C5923060051A3C7,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_CountDiscarded_mEB5A6B44A33CECCA730B57C8A3044AF23B5CB825,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_get_DeltaUnreliableNumber_m30572390A28FD076DCA8E622CD6ED20120FAFD68,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_set_DeltaUnreliableNumber_m7E4B4A3CFF0F4BC3C426D0B3F75C8262CDBB5DB2,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_U3CEstablishEncryptionU3Eb__220_0_m46E93E418BE49CCEF01AF91E395C8C652EF1BB3E,
	Protocol_t18B9A114CA76A976994396BA85DDF41503932085_CustomAttributesCacheGenerator_Protocol_Serialize_m1DB35C65529AC68D12B73D2924EA6A120590BF1E,
	Protocol_t18B9A114CA76A976994396BA85DDF41503932085_CustomAttributesCacheGenerator_Protocol_Deserialize_m5C346C284E11D246066E9F4095A49E63F174C992,
	Protocol16_t7E9F76ABA406ADA001CDF37A591A2F9C3F3D6F8B_CustomAttributesCacheGenerator_Protocol16_SerializeOperationRequest_m883C8759A23BA0463368C563E8028922FFD736F5,
	Protocol16_t7E9F76ABA406ADA001CDF37A591A2F9C3F3D6F8B_CustomAttributesCacheGenerator_Protocol16_SerializeParameterTable_m9EFA1E94D774336E5D9B08D26BDDD8D39D52A517,
	Protocol18_t4A451F99059A6CA147827AE44233FA96A694E5A7_CustomAttributesCacheGenerator_Protocol18_ReadParameterTable_m63CF07C835C8010C702891E50219B4D26A3BE4A7,
	Protocol18_t4A451F99059A6CA147827AE44233FA96A694E5A7_CustomAttributesCacheGenerator_Protocol18_SerializeOperationRequest_m864E4C5AA7213042C3DD58C37ED1364EA907A04F,
	SocketTcp_t2EE99FE3C049DD81ACE6F7640146D8141850A7EE_CustomAttributesCacheGenerator_SocketTcp__ctor_m22A4CD41CAAAB499484B7F33457CEA288F339854,
	SocketTcpAsync_tC88E14088BE01FF971BB632BD59D9D82695D4A38_CustomAttributesCacheGenerator_SocketTcpAsync__ctor_m779D6A4B954B975AA1C5891A43DAEAC0FE425D51,
	SocketUdp_t1E7379DF2E39AC496BBF0C61A98E4EDB0683E135_CustomAttributesCacheGenerator_SocketUdp__ctor_m4F0261BEEDD5B8DD725D4EA6FED3A10927683D49,
	SocketUdpAsync_t4686A91960750B55DFC073CEEA1DA9154D499A3B_CustomAttributesCacheGenerator_SocketUdpAsync__ctor_m32552141D6651BA12DABC3D413FB4ACBEDBC1E06,
	SupportClass_t267AC55131FDEA0D5B13E0D89326D9C6F6D816A2_CustomAttributesCacheGenerator_SupportClass_GetTickCount_mCA6C993C49B166EA4A089FD064F493F94621EAA6,
	SupportClass_t267AC55131FDEA0D5B13E0D89326D9C6F6D816A2_CustomAttributesCacheGenerator_SupportClass_HashtableToString_m5E88D814AF2EF3EFBB28590A8DB300690F06D91E,
	Pool_1_t5D587B680B1CD4B266FAEAEDBC3961E115802CBC_CustomAttributesCacheGenerator_Pool_1_Push_mEC1846BE1EDC5658BEBD67D72AB38DCA15405888,
	Pool_1_t5D587B680B1CD4B266FAEAEDBC3961E115802CBC_CustomAttributesCacheGenerator_Pool_1_Pop_mE85EEE7543DA5AE45C9C20142C14257FFC459E7E,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationByteCount_m2089CBB504830D37FF4C8A894C43DE477C260521,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationByteCount_mF2EEBC60AE41230BF66C515E18683FBB93EF21C1,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_OperationCount_mFCBE5DE91F51FE07BCC0BF325D3230B9E315B316,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_OperationCount_m6C392F9E340C3D18F0E1552F777CA82F6A104BA7,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultByteCount_m3D34E15D0ED99023B62F3BA706AE93615282BDA7,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultByteCount_mC5E873898F51DA4826DC1A2B45156148012DDC01,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_ResultCount_mC6960E7FD026D72B9E69137CD98A92E60643416F,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_ResultCount_mFF2D679D1049B164B3D73709E9DE5598EC1C98E3,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventByteCount_m4678995DB3EE17C240B20A96CBC80D2EF8D85DB4,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventByteCount_mE2F4D11CB1D01ECE858EB6556844F576EDA426CE,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_EventCount_m5CE59A2C42C6AEE017DA492A419CB1CC0379CCAF,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_EventCount_mC9D5C6B905964C0B9C2A131AB5FFDA2E00839599,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallback_mE720B67A537F373F32B2FC256D86A075F9EFB355,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallback_m6E52F13679ED87DC02CAA8217A7068EF853C335B,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_m59DC4D2BC17898DFAF128A9B4E31CD0901405E82,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m299FC1CCC08DBFE55444C69D0D224430FAF6E49C,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallback_m7DD575B44E7B16114310081ADCFE7DEDB9C3AD00,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallback_m6798ED09614DE4BFE0897CD53AC7C54150E39CBA,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestMessageCallback_mB280F291E9CF04792BDD8B7C3FF09CA8451BF2FD,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestMessageCallback_mDE6BB0427C10CD1A53CC493F002E346C3B854C5B,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestRawMessageCallback_m2E330C85865836C8A65AB5B4F00AC5CBCB3ADB98,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestRawMessageCallback_m5C613DA73858F138630885CC2488A0DC003CBE82,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestEventCallbackCode_mF9149C5649EFE6E449D10DB44DA3932141EEAE52,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestEventCallbackCode_mD64C7F662301CDA39E75D4770F40B22C4FD88AF7,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_mF818217AEEC16E376C301D5F59472242CF59E7D5,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_mA23DE9B7CBBDC749BA8E7BC462FA165D62FE2F7D,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_LongestDeltaBetweenSending_mE635BF2E6D533EBF517542214FF461FD0C26228A,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m5D172DBCBB9C1DE9125223724BFF48DFF990B008,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_mDBEA7C2AE2DEABD7842358B6EA6583CB8EDC1788,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m233D81960697F0205EA072086240E7B9D4A6A82A,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m0ACA2E1B4586D9075C4CC4B027FADA0D2381FC2D,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_mE24596B0A895976D3CD523237BF1DF8C1F1ED356,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_PackageHeaderSize_m32A092602FF07FFBA520DF21550F91065EFD6308,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_PackageHeaderSize_m750B0D788B4FEB6BA1773358BA1EC7CA88DEB7DC,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandCount_mDEF410010AE29D541E86CB6F8BA225ADE0E15110,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandCount_m611B156681B757C61898416AB34E37297FCD8510,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandCount_mDCE94AD8586AE33EAD14DCCA7B6817F34B8226FF,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandCount_m9C4F449269CC07F54B833622D8943C8EBFDE60FC,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandCount_mCDA675AAD42927C921445B808A6C67779A1DD4CA,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandCount_m8ECD87B158A7DA1DB4E4E6E54D34B0A5D57BE193,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandCount_mA78317217ED6D18A5ED0C4ED27722EBF04DAC56B,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandCount_mF8D39450381EF8C3AC2CAA6B9D4EA05E0E131DE7,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_TotalPacketCount_mCB866F5DB8B679E1968798C27BA44C2B47A01A8E,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_TotalPacketCount_m45662B78518824A2228C8EBEE39AEB5785C04C85,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_TotalCommandsInPackets_m764A7D73AEFB9536FA456B723BE7EB09D8D131F5,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_TotalCommandsInPackets_m796483EA476191EF5AFEB1BEA096AB048C0F74B5,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_ReliableCommandBytes_mA276C73B57244E1A388DBD58D35BD2A203E78249,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_ReliableCommandBytes_m1B2BCDFEFA23303D4A0514FBC5FB6128D9E80859,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_UnreliableCommandBytes_m724BE08D450265F884797FBDAE19E0E938724728,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_UnreliableCommandBytes_m43EC6C561FCA553EA885F46A4F028A1019013EB1,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_FragmentCommandBytes_m35A9623DB806DECDE7FD1AFD096A3731CD9569B6,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_FragmentCommandBytes_mB923F27141FE0F3544CDDBBF70513D368A4CAE9B,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_ControlCommandBytes_mDF9BBEE4988E847D90B729534C34E5F377CA51E1,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_ControlCommandBytes_m3925630DFD93A0B5F2DCA8A9B68727E88ED77434,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_TimestampOfLastAck_m9A766B1A91B0E1497B5B0C23DCB96CB3263B4AA3,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastAck_mA32CBBE8AC69DD66FCA03837BE4B832847F1A4E3,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_get_TimestampOfLastReliableCommand_m5E32E264C58AC523F8DE8874D7B67A4573E0CA40,
	TrafficStats_tB917F6A4AD0A9126A93E14382C7DDEBA6078CA86_CustomAttributesCacheGenerator_TrafficStats_set_TimestampOfLastReliableCommand_m7C868F33B4EDB18E1629FBD18B3FA1BABADACCE8,
	StructWrapper_1_tD1BED93464853CA16DB39C89CFBC659FDD5F4C40_CustomAttributesCacheGenerator_StructWrapper_1_get_ReturnPool_m5422DDFF9396D221988D17ECFA0A7C1C79EBF579,
	StructWrapper_1_tD1BED93464853CA16DB39C89CFBC659FDD5F4C40_CustomAttributesCacheGenerator_StructWrapper_1_set_ReturnPool_m50F0E141FC9AE792C26D507A8BDB88E3D10AC891,
	StructWrapperUtility_t57B7B7A6BF5D2C5B954F09712D8657EF4DAA76D4_CustomAttributesCacheGenerator_StructWrapperUtility_Unwrap_m4BBEEC2BBE61509FE1DBB2D8CFDD12454ECE4DA0,
	StructWrapperUtility_t57B7B7A6BF5D2C5B954F09712D8657EF4DAA76D4_CustomAttributesCacheGenerator_StructWrapperUtility_Get_mD22BB3A26C759ECE8A2459670C4BE70A810BF48B,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9____CommandBufferSize_PropertyInfo,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9____LimitOfUnreliableCommands_PropertyInfo,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9____LocalTimeInMilliSeconds_PropertyInfo,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9____ClientVersion_PropertyInfo,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9____LocalMsTimestampDelegate_PropertyInfo,
	PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9_CustomAttributesCacheGenerator_PhotonPeer_tC54896C3F711DB8B7BD163747681A76FC941ECD9____IsSendingOnlyAcks_PropertyInfo,
	TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5_CustomAttributesCacheGenerator_TrafficStatsGameLevel_t566D1E7060A87E884A134AC67DAF935FBBB2FEB5____DispatchCalls_PropertyInfo,
	Photon3Unity3D_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TargetFrameworkAttribute_set_FrameworkDisplayName_mB89F1A63CB77A414AF46D5695B37CD520EAB52AB_inline (TargetFrameworkAttribute_t9FA66D5D5B274F0E1A4FE20162AA70F62BFFB517 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__frameworkDisplayName_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
