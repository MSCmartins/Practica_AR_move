﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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

// Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>
struct AbstractBuilderLite_2_t60C513A8D55878C329D569792411DEF020D52088;
// Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>
struct AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>
struct Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7;
// System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>
struct Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256;
// Google.ProtocolBuffers.GeneratedBuilderLite`2<System.Object,System.Object>
struct GeneratedBuilderLite_2_tFE76F6CF01CB14F6E94310424938B05647711B6B;
// Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/AccelerometerEvent,proto.PhoneEvent/Types/AccelerometerEvent/Builder>
struct GeneratedBuilderLite_2_t864BA4B29C32529A83928995C9ADAD10B6FC33EA;
// Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/DepthMapEvent,proto.PhoneEvent/Types/DepthMapEvent/Builder>
struct GeneratedBuilderLite_2_t47ABB9A2A99234420D194EB139F96C3DAD790B17;
// Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/GyroscopeEvent,proto.PhoneEvent/Types/GyroscopeEvent/Builder>
struct GeneratedBuilderLite_2_t811FA5EA40172941BD33D03255BD0C4A1BF48EEA;
// Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/KeyEvent,proto.PhoneEvent/Types/KeyEvent/Builder>
struct GeneratedBuilderLite_2_tBB766E92AB4EE14DD2E6768ADADCF48B13DDE02D;
// Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent,proto.PhoneEvent/Types/MotionEvent/Builder>
struct GeneratedBuilderLite_2_tAFD62F41883615C90F37345B46DE10B236102BC7;
// Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>
struct GeneratedBuilderLite_2_tB12EF56175A53FFD1085AEB28087A72447BD4394;
// Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>
struct GeneratedBuilderLite_2_t4CCAA45209A9F62F93E7444CEE497A4FF30A8397;
// Google.ProtocolBuffers.GeneratedMessageLite`2<System.Object,System.Object>
struct GeneratedMessageLite_2_tE8C6F7808298EF1BE3D921F73060152DDB9F80F1;
// Google.ProtocolBuffers.GeneratedMessageLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>
struct GeneratedMessageLite_2_t82DB2ACD6D40D03C3414CF8083201076C2B10FEB;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t20C0141C3FEEDAA44BFE8521FEEDDF47289CB40B;
// System.Collections.Generic.IComparer`1<System.String>
struct IComparer_1_t9D94970C7FA2307DB453148499A627C3F64331AE;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t673DFF64E51C18A8B1287F4BD988966CE3B15A45;
// System.Collections.Generic.IEnumerable`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer>
struct IEnumerable_1_t74164533D012B513A3778CC0E133A38AD38F6E26;
// Google.ProtocolBuffers.Collections.IPopsicleList`1<System.Single>
struct IPopsicleList_1_t1FA330E7090CADA096C686F44391F0BD3156C43C;
// Google.ProtocolBuffers.Collections.IPopsicleList`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer>
struct IPopsicleList_1_tBFD458C0908A3A272EA6AD56B996967F43FB94B7;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA;
// System.Collections.Generic.List`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer>
struct List_1_t0770552599C156AA2D564DF1DAC69D6C18BCDDC6;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Object>
struct PopsicleList_1_t9C08B2276117871A6598106BB61F90D90197985C;
// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Single>
struct PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827;
// Google.ProtocolBuffers.Collections.PopsicleList`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer>
struct PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer[]
struct PointerU5BU5D_tFDAE1A4F43CA284EEEB5F305482E8A969630CBE5;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Google.ProtocolBuffers.ByteString
struct ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586;
// Google.ProtocolBuffers.ExtensionRegistry
struct ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5;
// Google.ProtocolBuffers.ICodedInputStream
struct ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932;
// Google.ProtocolBuffers.ICodedOutputStream
struct ICodedOutputStream_t92C3F4E7AA3A87700C4151FEF30B0AF5BD0A4F9D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Google.ProtocolBuffers.IMessageLite
struct IMessageLite_tA796EF3E5E4656B8FC42C9138B1423CB43BC5D68;
// Google.ProtocolBuffers.InvalidProtocolBufferException
struct InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// proto.PhoneEvent/Types/AccelerometerEvent
struct AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA;
// proto.PhoneEvent/Types/DepthMapEvent
struct DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885;
// proto.PhoneEvent/Types/GyroscopeEvent
struct GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19;
// proto.PhoneEvent/Types/KeyEvent
struct KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD;
// proto.PhoneEvent/Types/MotionEvent
struct MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6;
// proto.PhoneEvent/Types/OrientationEvent
struct OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder
struct Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1;
// proto.PhoneEvent/Types/DepthMapEvent/Builder
struct Builder_tEBEB64D39617078197E85E05786FC36089B301C5;
// proto.PhoneEvent/Types/GyroscopeEvent/Builder
struct Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70;
// proto.PhoneEvent/Types/KeyEvent/Builder
struct Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC;
// proto.PhoneEvent/Types/MotionEvent/Builder
struct Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D;
// proto.PhoneEvent/Types/OrientationEvent/Builder
struct Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer
struct Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder
struct Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302;

IL2CPP_EXTERN_C RuntimeClass* AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_tEBEB64D39617078197E85E05786FC36089B301C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICodedOutputStream_t92C3F4E7AA3A87700C4151FEF30B0AF5BD0A4F9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhoneEvent_t8977146DDA5AF16F3661CAAFF1E4DA378BA2C70E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1ADA0A4B45FFBFCF792C61B451AF43A6C341E292;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral9167D3A5FE683F0DD7B16CE29BAFE3083934E11B;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteralB05F3F32A7D87C546E7C6C02EB005F2AD312A554;
IL2CPP_EXTERN_C const RuntimeMethod* AbstractBuilderLite_2_MergeDelimitedFrom_m8C049EEE34F924B068109BA2019AC2F28D765D2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AbstractBuilderLite_2_MergeDelimitedFrom_mDBA09B0371D1C1CBA64A902149E769C909F0757D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AbstractBuilderLite_2_MergeFrom_m077F8BDC9A40BD2744DA305716D47D7FD4C02BE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AbstractBuilderLite_2_MergeFrom_m9E6216E1C08706C3E61356A7FB9A3FB0E52E2666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AbstractBuilderLite_2_MergeFrom_mA162BF3102EA42D62F2EA3BC70A44C54C341464B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AbstractBuilderLite_2_MergeFrom_mBFA22BE8CEA616188C6E7F55E6174E39563EC193_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AbstractBuilderLite_2_MergeFrom_mF34461DF32719A18A93F56C01A45DB0C65FB1645_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AbstractBuilderLite_2_MergeFrom_mF36F3941940332A01B21431C4BC0783BC925C1DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Builder_MergeFrom_m5E5725DC32B12003C02A46D4DEAF803B0BF1CE95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Builder_MergeFrom_m693E28037F615F8C6C975FED34B1038CCE7E4190_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Builder_MergeFrom_m7F1DB8FB5995652428C4B3EBBAA0851C2D9514CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Builder_MergeFrom_m905A61E66BF7F4A56A2C9435E7B1E958EA96EDEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Builder_MergeFrom_mAE0A78C84760ED6705E35C312E4AB0D2E684C036_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Builder_MergeFrom_mB6B7BA290DB1D631B578D87FF1B3C78EE1BA0A64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Builder_MergeFrom_mEF631AE74750AAD3265232D34A958CD55CA88013_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedBuilderLite_2_MergeFrom_m01DA9562C507B081A600AA8A24362A78F6331C0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedBuilderLite_2_MergeFrom_m032E96A57ECDFC51F9550E5F5680E93771DB2AB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedBuilderLite_2_MergeFrom_m97D6A578CACE3131A64EC3A2DBFE7839655EF0B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedBuilderLite_2_MergeFrom_mA237D82615DE1B46C35392FAFBE3754B13024867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedBuilderLite_2_MergeFrom_mAE26DA88C1759DA85732893EDCB9A7C46703E50F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedBuilderLite_2_MergeFrom_mD54454BB926B06D6F7BED729A65E3077DC0C1271_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedBuilderLite_2_MergeFrom_mFE12F3933FE4756BAEAA2465FA6F5E9C5DE72A77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedBuilderLite_2__ctor_m4D600BF5EDC880CCB2785A4CCCC95932A065C7D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedBuilderLite_2__ctor_m509C28EFE7B402DEAAB6E501F86507BDE40D42DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedBuilderLite_2__ctor_m61E4509BE2C8EDCEEE4713C2126DB468BF310088_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedBuilderLite_2__ctor_m74D649FCF418A76D77A171C1E9BACA82B773EBD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedBuilderLite_2__ctor_m9E75F0D534EC9FE62FE8E73B5E4F25A01136B67B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedBuilderLite_2__ctor_mD7325A4241D20915B0AF5874B5C6A4E78E1702E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedBuilderLite_2__ctor_mDDA4587CC7CC1FD23D6A9C169CCFAF348A20672C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedMessageLite_2_PrintField_m638873B95E598C7021E09266718B2CF1107340CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedMessageLite_2__ctor_mB94010B443D2F8CACD70FB9DE924F5CBC6FD8E7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ICodedInputStream_ReadMessageArray_TisPointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_mB1BDBAEDFAEE5035123A071FCA1AC7381285AF65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PopsicleList_1_Add_m02EB2B8F8118B6BFDA6308B3078D852A163F53E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PopsicleList_1_Add_m3520CDCD790B303679967E7B4FD10724E7D59E14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PopsicleList_1_Add_mBF830C6032B6BBF797AFC55C674F6CDA5C241011_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PopsicleList_1_Add_mFC00286C6B3AB9097A56085772F9A5C62513C9B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PopsicleList_1_Clear_m29BCCE5060DC16C5CF51BF5227C8BC6101047A33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PopsicleList_1_Clear_mD8CA13514562BEB119AC8409BD1D1B5E08E0A781_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PopsicleList_1_get_Count_mE3C43D8A8F72DE905F65EC5581F5E40E50D1B63C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PopsicleList_1_get_Count_mF2360C487F3B806D6B8D5863B19C3D746E9874A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PopsicleList_1_set_Item_m4DD2312A90005595B7AD483EE03762A2E1A5E809_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PopsicleList_1_set_Item_mB1BEF45A67FD508B139537A1F492ABE3A9D1E769_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/AccelerometerEvent,proto.PhoneEvent/Types/AccelerometerEvent/Builder>
struct  AbstractBuilderLite_2_tBA36F86484F2E777A1407003D57D765197507C78  : public RuntimeObject
{
public:

public:
};


// Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/DepthMapEvent,proto.PhoneEvent/Types/DepthMapEvent/Builder>
struct  AbstractBuilderLite_2_tBD3B8E60B794A8CFFA16C1CED62DA849845E4637  : public RuntimeObject
{
public:

public:
};


// Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/GyroscopeEvent,proto.PhoneEvent/Types/GyroscopeEvent/Builder>
struct  AbstractBuilderLite_2_t280E3B510C6334CB73AC6EC44470D71BEEBE6D6C  : public RuntimeObject
{
public:

public:
};


// Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/KeyEvent,proto.PhoneEvent/Types/KeyEvent/Builder>
struct  AbstractBuilderLite_2_tFE9C2E43FB6DF4858C62D1FF7F3CE9F390F2C530  : public RuntimeObject
{
public:

public:
};


// Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent,proto.PhoneEvent/Types/MotionEvent/Builder>
struct  AbstractBuilderLite_2_tAE631D68188C56F5394839F3879174DB379BD106  : public RuntimeObject
{
public:

public:
};


// Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>
struct  AbstractBuilderLite_2_t5DFF1C05F8B13ACB57B5729CA9F922BDFD0F7799  : public RuntimeObject
{
public:

public:
};


// Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>
struct  AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26  : public RuntimeObject
{
public:

public:
};


// Google.ProtocolBuffers.AbstractMessageLite`2<proto.PhoneEvent/Types/AccelerometerEvent,proto.PhoneEvent/Types/AccelerometerEvent/Builder>
struct  AbstractMessageLite_2_t50EE739C21FF83C6024E15E4973D750495207422  : public RuntimeObject
{
public:

public:
};


// Google.ProtocolBuffers.AbstractMessageLite`2<proto.PhoneEvent/Types/DepthMapEvent,proto.PhoneEvent/Types/DepthMapEvent/Builder>
struct  AbstractMessageLite_2_t4ADDE22B803DB51AB10D949586E4D5C9B2D58C0B  : public RuntimeObject
{
public:

public:
};


// Google.ProtocolBuffers.AbstractMessageLite`2<proto.PhoneEvent/Types/GyroscopeEvent,proto.PhoneEvent/Types/GyroscopeEvent/Builder>
struct  AbstractMessageLite_2_t2D04CF0612F3B2516B7231A736DCB2C46F83DD6A  : public RuntimeObject
{
public:

public:
};


// Google.ProtocolBuffers.AbstractMessageLite`2<proto.PhoneEvent/Types/KeyEvent,proto.PhoneEvent/Types/KeyEvent/Builder>
struct  AbstractMessageLite_2_tA33D3E0252B1350E2925A5B74EBE67F4FEAC3EA9  : public RuntimeObject
{
public:

public:
};


// Google.ProtocolBuffers.AbstractMessageLite`2<proto.PhoneEvent/Types/MotionEvent,proto.PhoneEvent/Types/MotionEvent/Builder>
struct  AbstractMessageLite_2_t0CE25D86A50470E732DA48C87AE14BBDFF504F01  : public RuntimeObject
{
public:

public:
};


// Google.ProtocolBuffers.AbstractMessageLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>
struct  AbstractMessageLite_2_tA8140F4BD9BC5B81604AAE1625564BF59F9E53ED  : public RuntimeObject
{
public:

public:
};


// Google.ProtocolBuffers.AbstractMessageLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>
struct  AbstractMessageLite_2_tD7D5F2FBA66BA8E86E2629EBA238136FCE83B342  : public RuntimeObject
{
public:

public:
};


// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Single>
struct  PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Google.ProtocolBuffers.Collections.PopsicleList`1::items
	List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___items_2;
	// System.Boolean Google.ProtocolBuffers.Collections.PopsicleList`1::readOnly
	bool ___readOnly_3;

public:
	inline static int32_t get_offset_of_items_2() { return static_cast<int32_t>(offsetof(PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827, ___items_2)); }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * get_items_2() const { return ___items_2; }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA ** get_address_of_items_2() { return &___items_2; }
	inline void set_items_2(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * value)
	{
		___items_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_2), (void*)value);
	}

	inline static int32_t get_offset_of_readOnly_3() { return static_cast<int32_t>(offsetof(PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827, ___readOnly_3)); }
	inline bool get_readOnly_3() const { return ___readOnly_3; }
	inline bool* get_address_of_readOnly_3() { return &___readOnly_3; }
	inline void set_readOnly_3(bool value)
	{
		___readOnly_3 = value;
	}
};

struct PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827_StaticFields
{
public:
	// System.Boolean Google.ProtocolBuffers.Collections.PopsicleList`1::CheckForNull
	bool ___CheckForNull_0;
	// T[] Google.ProtocolBuffers.Collections.PopsicleList`1::EmptySet
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___EmptySet_1;

public:
	inline static int32_t get_offset_of_CheckForNull_0() { return static_cast<int32_t>(offsetof(PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827_StaticFields, ___CheckForNull_0)); }
	inline bool get_CheckForNull_0() const { return ___CheckForNull_0; }
	inline bool* get_address_of_CheckForNull_0() { return &___CheckForNull_0; }
	inline void set_CheckForNull_0(bool value)
	{
		___CheckForNull_0 = value;
	}

	inline static int32_t get_offset_of_EmptySet_1() { return static_cast<int32_t>(offsetof(PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827_StaticFields, ___EmptySet_1)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_EmptySet_1() const { return ___EmptySet_1; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_EmptySet_1() { return &___EmptySet_1; }
	inline void set_EmptySet_1(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___EmptySet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptySet_1), (void*)value);
	}
};


// Google.ProtocolBuffers.Collections.PopsicleList`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer>
struct  PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Google.ProtocolBuffers.Collections.PopsicleList`1::items
	List_1_t0770552599C156AA2D564DF1DAC69D6C18BCDDC6 * ___items_2;
	// System.Boolean Google.ProtocolBuffers.Collections.PopsicleList`1::readOnly
	bool ___readOnly_3;

public:
	inline static int32_t get_offset_of_items_2() { return static_cast<int32_t>(offsetof(PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB, ___items_2)); }
	inline List_1_t0770552599C156AA2D564DF1DAC69D6C18BCDDC6 * get_items_2() const { return ___items_2; }
	inline List_1_t0770552599C156AA2D564DF1DAC69D6C18BCDDC6 ** get_address_of_items_2() { return &___items_2; }
	inline void set_items_2(List_1_t0770552599C156AA2D564DF1DAC69D6C18BCDDC6 * value)
	{
		___items_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_2), (void*)value);
	}

	inline static int32_t get_offset_of_readOnly_3() { return static_cast<int32_t>(offsetof(PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB, ___readOnly_3)); }
	inline bool get_readOnly_3() const { return ___readOnly_3; }
	inline bool* get_address_of_readOnly_3() { return &___readOnly_3; }
	inline void set_readOnly_3(bool value)
	{
		___readOnly_3 = value;
	}
};

struct PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB_StaticFields
{
public:
	// System.Boolean Google.ProtocolBuffers.Collections.PopsicleList`1::CheckForNull
	bool ___CheckForNull_0;
	// T[] Google.ProtocolBuffers.Collections.PopsicleList`1::EmptySet
	PointerU5BU5D_tFDAE1A4F43CA284EEEB5F305482E8A969630CBE5* ___EmptySet_1;

public:
	inline static int32_t get_offset_of_CheckForNull_0() { return static_cast<int32_t>(offsetof(PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB_StaticFields, ___CheckForNull_0)); }
	inline bool get_CheckForNull_0() const { return ___CheckForNull_0; }
	inline bool* get_address_of_CheckForNull_0() { return &___CheckForNull_0; }
	inline void set_CheckForNull_0(bool value)
	{
		___CheckForNull_0 = value;
	}

	inline static int32_t get_offset_of_EmptySet_1() { return static_cast<int32_t>(offsetof(PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB_StaticFields, ___EmptySet_1)); }
	inline PointerU5BU5D_tFDAE1A4F43CA284EEEB5F305482E8A969630CBE5* get_EmptySet_1() const { return ___EmptySet_1; }
	inline PointerU5BU5D_tFDAE1A4F43CA284EEEB5F305482E8A969630CBE5** get_address_of_EmptySet_1() { return &___EmptySet_1; }
	inline void set_EmptySet_1(PointerU5BU5D_tFDAE1A4F43CA284EEEB5F305482E8A969630CBE5* value)
	{
		___EmptySet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptySet_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Google.ProtocolBuffers.ByteString
struct  ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586  : public RuntimeObject
{
public:
	// System.Byte[] Google.ProtocolBuffers.ByteString::bytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes_1;

public:
	inline static int32_t get_offset_of_bytes_1() { return static_cast<int32_t>(offsetof(ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586, ___bytes_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_bytes_1() const { return ___bytes_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_bytes_1() { return &___bytes_1; }
	inline void set_bytes_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___bytes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bytes_1), (void*)value);
	}
};

struct ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586_StaticFields
{
public:
	// Google.ProtocolBuffers.ByteString Google.ProtocolBuffers.ByteString::empty
	ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586_StaticFields, ___empty_0)); }
	inline ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * get_empty_0() const { return ___empty_0; }
	inline ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 ** get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___empty_0), (void*)value);
	}
};


// Google.ProtocolBuffers.ExtensionRegistry
struct  ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>> Google.ProtocolBuffers.ExtensionRegistry::extensionsByName
	Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7 * ___extensionsByName_1;
	// System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite> Google.ProtocolBuffers.ExtensionRegistry::extensionsByNumber
	Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256 * ___extensionsByNumber_2;
	// System.Boolean Google.ProtocolBuffers.ExtensionRegistry::readOnly
	bool ___readOnly_3;

public:
	inline static int32_t get_offset_of_extensionsByName_1() { return static_cast<int32_t>(offsetof(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5, ___extensionsByName_1)); }
	inline Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7 * get_extensionsByName_1() const { return ___extensionsByName_1; }
	inline Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7 ** get_address_of_extensionsByName_1() { return &___extensionsByName_1; }
	inline void set_extensionsByName_1(Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7 * value)
	{
		___extensionsByName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensionsByName_1), (void*)value);
	}

	inline static int32_t get_offset_of_extensionsByNumber_2() { return static_cast<int32_t>(offsetof(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5, ___extensionsByNumber_2)); }
	inline Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256 * get_extensionsByNumber_2() const { return ___extensionsByNumber_2; }
	inline Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256 ** get_address_of_extensionsByNumber_2() { return &___extensionsByNumber_2; }
	inline void set_extensionsByNumber_2(Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256 * value)
	{
		___extensionsByNumber_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensionsByNumber_2), (void*)value);
	}

	inline static int32_t get_offset_of_readOnly_3() { return static_cast<int32_t>(offsetof(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5, ___readOnly_3)); }
	inline bool get_readOnly_3() const { return ___readOnly_3; }
	inline bool* get_address_of_readOnly_3() { return &___readOnly_3; }
	inline void set_readOnly_3(bool value)
	{
		___readOnly_3 = value;
	}
};

struct ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_StaticFields
{
public:
	// Google.ProtocolBuffers.ExtensionRegistry Google.ProtocolBuffers.ExtensionRegistry::empty
	ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_StaticFields, ___empty_0)); }
	inline ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * get_empty_0() const { return ___empty_0; }
	inline ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 ** get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___empty_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// proto.Proto.PhoneEvent
struct  PhoneEvent_t8977146DDA5AF16F3661CAAFF1E4DA378BA2C70E  : public RuntimeObject
{
public:

public:
};

struct PhoneEvent_t8977146DDA5AF16F3661CAAFF1E4DA378BA2C70E_StaticFields
{
public:
	// System.Object proto.Proto.PhoneEvent::Descriptor
	RuntimeObject * ___Descriptor_0;

public:
	inline static int32_t get_offset_of_Descriptor_0() { return static_cast<int32_t>(offsetof(PhoneEvent_t8977146DDA5AF16F3661CAAFF1E4DA378BA2C70E_StaticFields, ___Descriptor_0)); }
	inline RuntimeObject * get_Descriptor_0() const { return ___Descriptor_0; }
	inline RuntimeObject ** get_address_of_Descriptor_0() { return &___Descriptor_0; }
	inline void set_Descriptor_0(RuntimeObject * value)
	{
		___Descriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Descriptor_0), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
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


// System.StringComparer
struct  StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields
{
public:
	// System.StringComparer System.StringComparer::_invariantCulture
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCulture_0;
	// System.StringComparer System.StringComparer::_invariantCultureIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCultureIgnoreCase_1;
	// System.StringComparer System.StringComparer::_ordinal
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinal_2;
	// System.StringComparer System.StringComparer::_ordinalIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinalIgnoreCase_3;

public:
	inline static int32_t get_offset_of__invariantCulture_0() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCulture_0)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCulture_0() const { return ____invariantCulture_0; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCulture_0() { return &____invariantCulture_0; }
	inline void set__invariantCulture_0(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCulture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCulture_0), (void*)value);
	}

	inline static int32_t get_offset_of__invariantCultureIgnoreCase_1() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCultureIgnoreCase_1)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCultureIgnoreCase_1() const { return ____invariantCultureIgnoreCase_1; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCultureIgnoreCase_1() { return &____invariantCultureIgnoreCase_1; }
	inline void set__invariantCultureIgnoreCase_1(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCultureIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCultureIgnoreCase_1), (void*)value);
	}

	inline static int32_t get_offset_of__ordinal_2() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinal_2)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinal_2() const { return ____ordinal_2; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinal_2() { return &____ordinal_2; }
	inline void set__ordinal_2(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinal_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinal_2), (void*)value);
	}

	inline static int32_t get_offset_of__ordinalIgnoreCase_3() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinalIgnoreCase_3)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinalIgnoreCase_3() const { return ____ordinalIgnoreCase_3; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinalIgnoreCase_3() { return &____ordinalIgnoreCase_3; }
	inline void set__ordinalIgnoreCase_3(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinalIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinalIgnoreCase_3), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// proto.PhoneEvent/Types/MotionEvent/Types
struct  Types_tF6D49B038E62E09EBFCA6371743E8B84063D166D  : public RuntimeObject
{
public:

public:
};


// Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/AccelerometerEvent,proto.PhoneEvent/Types/AccelerometerEvent/Builder>
struct  GeneratedBuilderLite_2_t864BA4B29C32529A83928995C9ADAD10B6FC33EA  : public AbstractBuilderLite_2_tBA36F86484F2E777A1407003D57D765197507C78
{
public:

public:
};


// Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/DepthMapEvent,proto.PhoneEvent/Types/DepthMapEvent/Builder>
struct  GeneratedBuilderLite_2_t47ABB9A2A99234420D194EB139F96C3DAD790B17  : public AbstractBuilderLite_2_tBD3B8E60B794A8CFFA16C1CED62DA849845E4637
{
public:

public:
};


// Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/GyroscopeEvent,proto.PhoneEvent/Types/GyroscopeEvent/Builder>
struct  GeneratedBuilderLite_2_t811FA5EA40172941BD33D03255BD0C4A1BF48EEA  : public AbstractBuilderLite_2_t280E3B510C6334CB73AC6EC44470D71BEEBE6D6C
{
public:

public:
};


// Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/KeyEvent,proto.PhoneEvent/Types/KeyEvent/Builder>
struct  GeneratedBuilderLite_2_tBB766E92AB4EE14DD2E6768ADADCF48B13DDE02D  : public AbstractBuilderLite_2_tFE9C2E43FB6DF4858C62D1FF7F3CE9F390F2C530
{
public:

public:
};


// Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent,proto.PhoneEvent/Types/MotionEvent/Builder>
struct  GeneratedBuilderLite_2_tAFD62F41883615C90F37345B46DE10B236102BC7  : public AbstractBuilderLite_2_tAE631D68188C56F5394839F3879174DB379BD106
{
public:

public:
};


// Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>
struct  GeneratedBuilderLite_2_tB12EF56175A53FFD1085AEB28087A72447BD4394  : public AbstractBuilderLite_2_t5DFF1C05F8B13ACB57B5729CA9F922BDFD0F7799
{
public:

public:
};


// Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>
struct  GeneratedBuilderLite_2_t4CCAA45209A9F62F93E7444CEE497A4FF30A8397  : public AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26
{
public:

public:
};


// Google.ProtocolBuffers.GeneratedMessageLite`2<proto.PhoneEvent/Types/AccelerometerEvent,proto.PhoneEvent/Types/AccelerometerEvent/Builder>
struct  GeneratedMessageLite_2_t9109AAD4D87EB0A9DF5C362B578B5B1E64691066  : public AbstractMessageLite_2_t50EE739C21FF83C6024E15E4973D750495207422
{
public:

public:
};


// Google.ProtocolBuffers.GeneratedMessageLite`2<proto.PhoneEvent/Types/DepthMapEvent,proto.PhoneEvent/Types/DepthMapEvent/Builder>
struct  GeneratedMessageLite_2_tE918DDF41682B18A958DAF824230BCBB4B7E1364  : public AbstractMessageLite_2_t4ADDE22B803DB51AB10D949586E4D5C9B2D58C0B
{
public:

public:
};


// Google.ProtocolBuffers.GeneratedMessageLite`2<proto.PhoneEvent/Types/GyroscopeEvent,proto.PhoneEvent/Types/GyroscopeEvent/Builder>
struct  GeneratedMessageLite_2_t104228B50E3F2E68AE35E8229B6CB2B6E1B68C89  : public AbstractMessageLite_2_t2D04CF0612F3B2516B7231A736DCB2C46F83DD6A
{
public:

public:
};


// Google.ProtocolBuffers.GeneratedMessageLite`2<proto.PhoneEvent/Types/KeyEvent,proto.PhoneEvent/Types/KeyEvent/Builder>
struct  GeneratedMessageLite_2_t7ADA63773D0EFFC93012FAEE83FD74425197FE1D  : public AbstractMessageLite_2_tA33D3E0252B1350E2925A5B74EBE67F4FEAC3EA9
{
public:

public:
};


// Google.ProtocolBuffers.GeneratedMessageLite`2<proto.PhoneEvent/Types/MotionEvent,proto.PhoneEvent/Types/MotionEvent/Builder>
struct  GeneratedMessageLite_2_tC034596A4D362725E8E2AFFA7BDC619931833852  : public AbstractMessageLite_2_t0CE25D86A50470E732DA48C87AE14BBDFF504F01
{
public:

public:
};


// Google.ProtocolBuffers.GeneratedMessageLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>
struct  GeneratedMessageLite_2_t1EE25A6F90F39E9880B157FF1C0EAA92485B2133  : public AbstractMessageLite_2_tA8140F4BD9BC5B81604AAE1625564BF59F9E53ED
{
public:

public:
};


// Google.ProtocolBuffers.GeneratedMessageLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>
struct  GeneratedMessageLite_2_t82DB2ACD6D40D03C3414CF8083201076C2B10FEB  : public AbstractMessageLite_2_tD7D5F2FBA66BA8E86E2629EBA238136FCE83B342
{
public:

public:
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
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


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
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
struct  IntPtr_t 
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
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// System.IO.Stream
struct  Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.IO.TextWriter
struct  TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct  __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794 
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
		uint8_t __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794__padding[12];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct  __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66 
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
		uint8_t __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66__padding[16];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct  __StaticArrayInitTypeSizeU3D20_tA7878E15E0E5AC780F6ED4F6E87AD8233A152598 
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
		uint8_t __StaticArrayInitTypeSizeU3D20_tA7878E15E0E5AC780F6ED4F6E87AD8233A152598__padding[20];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
struct  __StaticArrayInitTypeSizeU3D28_tB9DE54DF41ABC27805509271A10177513906BF30 
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
		uint8_t __StaticArrayInitTypeSizeU3D28_tB9DE54DF41ABC27805509271A10177513906BF30__padding[28];
	};

public:
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514
	__StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  ___525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::5AAE3A7C2567829A11E474206FB7571ED20369039EA839B4D91815350DA4AA7A
	__StaticArrayInitTypeSizeU3D20_tA7878E15E0E5AC780F6ED4F6E87AD8233A152598  ___5AAE3A7C2567829A11E474206FB7571ED20369039EA839B4D91815350DA4AA7A_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::80C0C57E5FFBE7946199F243DBB32F061E91E0EFFC37804AE32F87118CFC2D0E
	__StaticArrayInitTypeSizeU3D28_tB9DE54DF41ABC27805509271A10177513906BF30  ___80C0C57E5FFBE7946199F243DBB32F061E91E0EFFC37804AE32F87118CFC2D0E_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::85C4EAA6AE28221674FCA1526EABDD1E72BC08037C2A7DA82E628A540A8BBFA4
	__StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66  ___85C4EAA6AE28221674FCA1526EABDD1E72BC08037C2A7DA82E628A540A8BBFA4_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::9D2B6D3B030D389E9B504F0C40B877753EA469BBE7611A1A7A8B98FF67D8990C
	__StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  ___9D2B6D3B030D389E9B504F0C40B877753EA469BBE7611A1A7A8B98FF67D8990C_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::FA77092D9A827626EFC38F87902E4E13B82B9C71A09A938D03D68AF8B922BC50
	__StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66  ___FA77092D9A827626EFC38F87902E4E13B82B9C71A09A938D03D68AF8B922BC50_5;

public:
	inline static int32_t get_offset_of_U3525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514_0)); }
	inline __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  get_U3525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514_0() const { return ___525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514_0; }
	inline __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794 * get_address_of_U3525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514_0() { return &___525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514_0; }
	inline void set_U3525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514_0(__StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  value)
	{
		___525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514_0 = value;
	}

	inline static int32_t get_offset_of_U35AAE3A7C2567829A11E474206FB7571ED20369039EA839B4D91815350DA4AA7A_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___5AAE3A7C2567829A11E474206FB7571ED20369039EA839B4D91815350DA4AA7A_1)); }
	inline __StaticArrayInitTypeSizeU3D20_tA7878E15E0E5AC780F6ED4F6E87AD8233A152598  get_U35AAE3A7C2567829A11E474206FB7571ED20369039EA839B4D91815350DA4AA7A_1() const { return ___5AAE3A7C2567829A11E474206FB7571ED20369039EA839B4D91815350DA4AA7A_1; }
	inline __StaticArrayInitTypeSizeU3D20_tA7878E15E0E5AC780F6ED4F6E87AD8233A152598 * get_address_of_U35AAE3A7C2567829A11E474206FB7571ED20369039EA839B4D91815350DA4AA7A_1() { return &___5AAE3A7C2567829A11E474206FB7571ED20369039EA839B4D91815350DA4AA7A_1; }
	inline void set_U35AAE3A7C2567829A11E474206FB7571ED20369039EA839B4D91815350DA4AA7A_1(__StaticArrayInitTypeSizeU3D20_tA7878E15E0E5AC780F6ED4F6E87AD8233A152598  value)
	{
		___5AAE3A7C2567829A11E474206FB7571ED20369039EA839B4D91815350DA4AA7A_1 = value;
	}

	inline static int32_t get_offset_of_U380C0C57E5FFBE7946199F243DBB32F061E91E0EFFC37804AE32F87118CFC2D0E_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___80C0C57E5FFBE7946199F243DBB32F061E91E0EFFC37804AE32F87118CFC2D0E_2)); }
	inline __StaticArrayInitTypeSizeU3D28_tB9DE54DF41ABC27805509271A10177513906BF30  get_U380C0C57E5FFBE7946199F243DBB32F061E91E0EFFC37804AE32F87118CFC2D0E_2() const { return ___80C0C57E5FFBE7946199F243DBB32F061E91E0EFFC37804AE32F87118CFC2D0E_2; }
	inline __StaticArrayInitTypeSizeU3D28_tB9DE54DF41ABC27805509271A10177513906BF30 * get_address_of_U380C0C57E5FFBE7946199F243DBB32F061E91E0EFFC37804AE32F87118CFC2D0E_2() { return &___80C0C57E5FFBE7946199F243DBB32F061E91E0EFFC37804AE32F87118CFC2D0E_2; }
	inline void set_U380C0C57E5FFBE7946199F243DBB32F061E91E0EFFC37804AE32F87118CFC2D0E_2(__StaticArrayInitTypeSizeU3D28_tB9DE54DF41ABC27805509271A10177513906BF30  value)
	{
		___80C0C57E5FFBE7946199F243DBB32F061E91E0EFFC37804AE32F87118CFC2D0E_2 = value;
	}

	inline static int32_t get_offset_of_U385C4EAA6AE28221674FCA1526EABDD1E72BC08037C2A7DA82E628A540A8BBFA4_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___85C4EAA6AE28221674FCA1526EABDD1E72BC08037C2A7DA82E628A540A8BBFA4_3)); }
	inline __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66  get_U385C4EAA6AE28221674FCA1526EABDD1E72BC08037C2A7DA82E628A540A8BBFA4_3() const { return ___85C4EAA6AE28221674FCA1526EABDD1E72BC08037C2A7DA82E628A540A8BBFA4_3; }
	inline __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66 * get_address_of_U385C4EAA6AE28221674FCA1526EABDD1E72BC08037C2A7DA82E628A540A8BBFA4_3() { return &___85C4EAA6AE28221674FCA1526EABDD1E72BC08037C2A7DA82E628A540A8BBFA4_3; }
	inline void set_U385C4EAA6AE28221674FCA1526EABDD1E72BC08037C2A7DA82E628A540A8BBFA4_3(__StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66  value)
	{
		___85C4EAA6AE28221674FCA1526EABDD1E72BC08037C2A7DA82E628A540A8BBFA4_3 = value;
	}

	inline static int32_t get_offset_of_U39D2B6D3B030D389E9B504F0C40B877753EA469BBE7611A1A7A8B98FF67D8990C_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___9D2B6D3B030D389E9B504F0C40B877753EA469BBE7611A1A7A8B98FF67D8990C_4)); }
	inline __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  get_U39D2B6D3B030D389E9B504F0C40B877753EA469BBE7611A1A7A8B98FF67D8990C_4() const { return ___9D2B6D3B030D389E9B504F0C40B877753EA469BBE7611A1A7A8B98FF67D8990C_4; }
	inline __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794 * get_address_of_U39D2B6D3B030D389E9B504F0C40B877753EA469BBE7611A1A7A8B98FF67D8990C_4() { return &___9D2B6D3B030D389E9B504F0C40B877753EA469BBE7611A1A7A8B98FF67D8990C_4; }
	inline void set_U39D2B6D3B030D389E9B504F0C40B877753EA469BBE7611A1A7A8B98FF67D8990C_4(__StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  value)
	{
		___9D2B6D3B030D389E9B504F0C40B877753EA469BBE7611A1A7A8B98FF67D8990C_4 = value;
	}

	inline static int32_t get_offset_of_FA77092D9A827626EFC38F87902E4E13B82B9C71A09A938D03D68AF8B922BC50_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___FA77092D9A827626EFC38F87902E4E13B82B9C71A09A938D03D68AF8B922BC50_5)); }
	inline __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66  get_FA77092D9A827626EFC38F87902E4E13B82B9C71A09A938D03D68AF8B922BC50_5() const { return ___FA77092D9A827626EFC38F87902E4E13B82B9C71A09A938D03D68AF8B922BC50_5; }
	inline __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66 * get_address_of_FA77092D9A827626EFC38F87902E4E13B82B9C71A09A938D03D68AF8B922BC50_5() { return &___FA77092D9A827626EFC38F87902E4E13B82B9C71A09A938D03D68AF8B922BC50_5; }
	inline void set_FA77092D9A827626EFC38F87902E4E13B82B9C71A09A938D03D68AF8B922BC50_5(__StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66  value)
	{
		___FA77092D9A827626EFC38F87902E4E13B82B9C71A09A938D03D68AF8B922BC50_5 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
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


// System.Exception
struct  Exception_t  : public RuntimeObject
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

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
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


// proto.PhoneEvent/Types/AccelerometerEvent
struct  AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA  : public GeneratedMessageLite_2_t9109AAD4D87EB0A9DF5C362B578B5B1E64691066
{
public:
	// System.Boolean proto.PhoneEvent/Types/AccelerometerEvent::hasTimestamp
	bool ___hasTimestamp_4;
	// System.Int64 proto.PhoneEvent/Types/AccelerometerEvent::timestamp_
	int64_t ___timestamp__5;
	// System.Boolean proto.PhoneEvent/Types/AccelerometerEvent::hasX
	bool ___hasX_7;
	// System.Single proto.PhoneEvent/Types/AccelerometerEvent::x_
	float ___x__8;
	// System.Boolean proto.PhoneEvent/Types/AccelerometerEvent::hasY
	bool ___hasY_10;
	// System.Single proto.PhoneEvent/Types/AccelerometerEvent::y_
	float ___y__11;
	// System.Boolean proto.PhoneEvent/Types/AccelerometerEvent::hasZ
	bool ___hasZ_13;
	// System.Single proto.PhoneEvent/Types/AccelerometerEvent::z_
	float ___z__14;
	// System.Int32 proto.PhoneEvent/Types/AccelerometerEvent::memoizedSerializedSize
	int32_t ___memoizedSerializedSize_15;

public:
	inline static int32_t get_offset_of_hasTimestamp_4() { return static_cast<int32_t>(offsetof(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA, ___hasTimestamp_4)); }
	inline bool get_hasTimestamp_4() const { return ___hasTimestamp_4; }
	inline bool* get_address_of_hasTimestamp_4() { return &___hasTimestamp_4; }
	inline void set_hasTimestamp_4(bool value)
	{
		___hasTimestamp_4 = value;
	}

	inline static int32_t get_offset_of_timestamp__5() { return static_cast<int32_t>(offsetof(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA, ___timestamp__5)); }
	inline int64_t get_timestamp__5() const { return ___timestamp__5; }
	inline int64_t* get_address_of_timestamp__5() { return &___timestamp__5; }
	inline void set_timestamp__5(int64_t value)
	{
		___timestamp__5 = value;
	}

	inline static int32_t get_offset_of_hasX_7() { return static_cast<int32_t>(offsetof(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA, ___hasX_7)); }
	inline bool get_hasX_7() const { return ___hasX_7; }
	inline bool* get_address_of_hasX_7() { return &___hasX_7; }
	inline void set_hasX_7(bool value)
	{
		___hasX_7 = value;
	}

	inline static int32_t get_offset_of_x__8() { return static_cast<int32_t>(offsetof(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA, ___x__8)); }
	inline float get_x__8() const { return ___x__8; }
	inline float* get_address_of_x__8() { return &___x__8; }
	inline void set_x__8(float value)
	{
		___x__8 = value;
	}

	inline static int32_t get_offset_of_hasY_10() { return static_cast<int32_t>(offsetof(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA, ___hasY_10)); }
	inline bool get_hasY_10() const { return ___hasY_10; }
	inline bool* get_address_of_hasY_10() { return &___hasY_10; }
	inline void set_hasY_10(bool value)
	{
		___hasY_10 = value;
	}

	inline static int32_t get_offset_of_y__11() { return static_cast<int32_t>(offsetof(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA, ___y__11)); }
	inline float get_y__11() const { return ___y__11; }
	inline float* get_address_of_y__11() { return &___y__11; }
	inline void set_y__11(float value)
	{
		___y__11 = value;
	}

	inline static int32_t get_offset_of_hasZ_13() { return static_cast<int32_t>(offsetof(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA, ___hasZ_13)); }
	inline bool get_hasZ_13() const { return ___hasZ_13; }
	inline bool* get_address_of_hasZ_13() { return &___hasZ_13; }
	inline void set_hasZ_13(bool value)
	{
		___hasZ_13 = value;
	}

	inline static int32_t get_offset_of_z__14() { return static_cast<int32_t>(offsetof(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA, ___z__14)); }
	inline float get_z__14() const { return ___z__14; }
	inline float* get_address_of_z__14() { return &___z__14; }
	inline void set_z__14(float value)
	{
		___z__14 = value;
	}

	inline static int32_t get_offset_of_memoizedSerializedSize_15() { return static_cast<int32_t>(offsetof(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA, ___memoizedSerializedSize_15)); }
	inline int32_t get_memoizedSerializedSize_15() const { return ___memoizedSerializedSize_15; }
	inline int32_t* get_address_of_memoizedSerializedSize_15() { return &___memoizedSerializedSize_15; }
	inline void set_memoizedSerializedSize_15(int32_t value)
	{
		___memoizedSerializedSize_15 = value;
	}
};

struct AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_StaticFields
{
public:
	// proto.PhoneEvent/Types/AccelerometerEvent proto.PhoneEvent/Types/AccelerometerEvent::defaultInstance
	AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * ___defaultInstance_0;
	// System.String[] proto.PhoneEvent/Types/AccelerometerEvent::_accelerometerEventFieldNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____accelerometerEventFieldNames_1;
	// System.UInt32[] proto.PhoneEvent/Types/AccelerometerEvent::_accelerometerEventFieldTags
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____accelerometerEventFieldTags_2;

public:
	inline static int32_t get_offset_of_defaultInstance_0() { return static_cast<int32_t>(offsetof(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_StaticFields, ___defaultInstance_0)); }
	inline AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * get_defaultInstance_0() const { return ___defaultInstance_0; }
	inline AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA ** get_address_of_defaultInstance_0() { return &___defaultInstance_0; }
	inline void set_defaultInstance_0(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * value)
	{
		___defaultInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultInstance_0), (void*)value);
	}

	inline static int32_t get_offset_of__accelerometerEventFieldNames_1() { return static_cast<int32_t>(offsetof(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_StaticFields, ____accelerometerEventFieldNames_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__accelerometerEventFieldNames_1() const { return ____accelerometerEventFieldNames_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__accelerometerEventFieldNames_1() { return &____accelerometerEventFieldNames_1; }
	inline void set__accelerometerEventFieldNames_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____accelerometerEventFieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____accelerometerEventFieldNames_1), (void*)value);
	}

	inline static int32_t get_offset_of__accelerometerEventFieldTags_2() { return static_cast<int32_t>(offsetof(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_StaticFields, ____accelerometerEventFieldTags_2)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__accelerometerEventFieldTags_2() const { return ____accelerometerEventFieldTags_2; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__accelerometerEventFieldTags_2() { return &____accelerometerEventFieldTags_2; }
	inline void set__accelerometerEventFieldTags_2(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____accelerometerEventFieldTags_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____accelerometerEventFieldTags_2), (void*)value);
	}
};


// proto.PhoneEvent/Types/DepthMapEvent
struct  DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885  : public GeneratedMessageLite_2_tE918DDF41682B18A958DAF824230BCBB4B7E1364
{
public:
	// System.Boolean proto.PhoneEvent/Types/DepthMapEvent::hasTimestamp
	bool ___hasTimestamp_4;
	// System.Int64 proto.PhoneEvent/Types/DepthMapEvent::timestamp_
	int64_t ___timestamp__5;
	// System.Boolean proto.PhoneEvent/Types/DepthMapEvent::hasWidth
	bool ___hasWidth_7;
	// System.Int32 proto.PhoneEvent/Types/DepthMapEvent::width_
	int32_t ___width__8;
	// System.Boolean proto.PhoneEvent/Types/DepthMapEvent::hasHeight
	bool ___hasHeight_10;
	// System.Int32 proto.PhoneEvent/Types/DepthMapEvent::height_
	int32_t ___height__11;
	// System.Int32 proto.PhoneEvent/Types/DepthMapEvent::zDistancesMemoizedSerializedSize
	int32_t ___zDistancesMemoizedSerializedSize_13;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<System.Single> proto.PhoneEvent/Types/DepthMapEvent::zDistances_
	PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 * ___zDistances__14;
	// System.Int32 proto.PhoneEvent/Types/DepthMapEvent::memoizedSerializedSize
	int32_t ___memoizedSerializedSize_15;

public:
	inline static int32_t get_offset_of_hasTimestamp_4() { return static_cast<int32_t>(offsetof(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885, ___hasTimestamp_4)); }
	inline bool get_hasTimestamp_4() const { return ___hasTimestamp_4; }
	inline bool* get_address_of_hasTimestamp_4() { return &___hasTimestamp_4; }
	inline void set_hasTimestamp_4(bool value)
	{
		___hasTimestamp_4 = value;
	}

	inline static int32_t get_offset_of_timestamp__5() { return static_cast<int32_t>(offsetof(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885, ___timestamp__5)); }
	inline int64_t get_timestamp__5() const { return ___timestamp__5; }
	inline int64_t* get_address_of_timestamp__5() { return &___timestamp__5; }
	inline void set_timestamp__5(int64_t value)
	{
		___timestamp__5 = value;
	}

	inline static int32_t get_offset_of_hasWidth_7() { return static_cast<int32_t>(offsetof(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885, ___hasWidth_7)); }
	inline bool get_hasWidth_7() const { return ___hasWidth_7; }
	inline bool* get_address_of_hasWidth_7() { return &___hasWidth_7; }
	inline void set_hasWidth_7(bool value)
	{
		___hasWidth_7 = value;
	}

	inline static int32_t get_offset_of_width__8() { return static_cast<int32_t>(offsetof(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885, ___width__8)); }
	inline int32_t get_width__8() const { return ___width__8; }
	inline int32_t* get_address_of_width__8() { return &___width__8; }
	inline void set_width__8(int32_t value)
	{
		___width__8 = value;
	}

	inline static int32_t get_offset_of_hasHeight_10() { return static_cast<int32_t>(offsetof(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885, ___hasHeight_10)); }
	inline bool get_hasHeight_10() const { return ___hasHeight_10; }
	inline bool* get_address_of_hasHeight_10() { return &___hasHeight_10; }
	inline void set_hasHeight_10(bool value)
	{
		___hasHeight_10 = value;
	}

	inline static int32_t get_offset_of_height__11() { return static_cast<int32_t>(offsetof(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885, ___height__11)); }
	inline int32_t get_height__11() const { return ___height__11; }
	inline int32_t* get_address_of_height__11() { return &___height__11; }
	inline void set_height__11(int32_t value)
	{
		___height__11 = value;
	}

	inline static int32_t get_offset_of_zDistancesMemoizedSerializedSize_13() { return static_cast<int32_t>(offsetof(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885, ___zDistancesMemoizedSerializedSize_13)); }
	inline int32_t get_zDistancesMemoizedSerializedSize_13() const { return ___zDistancesMemoizedSerializedSize_13; }
	inline int32_t* get_address_of_zDistancesMemoizedSerializedSize_13() { return &___zDistancesMemoizedSerializedSize_13; }
	inline void set_zDistancesMemoizedSerializedSize_13(int32_t value)
	{
		___zDistancesMemoizedSerializedSize_13 = value;
	}

	inline static int32_t get_offset_of_zDistances__14() { return static_cast<int32_t>(offsetof(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885, ___zDistances__14)); }
	inline PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 * get_zDistances__14() const { return ___zDistances__14; }
	inline PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 ** get_address_of_zDistances__14() { return &___zDistances__14; }
	inline void set_zDistances__14(PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 * value)
	{
		___zDistances__14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___zDistances__14), (void*)value);
	}

	inline static int32_t get_offset_of_memoizedSerializedSize_15() { return static_cast<int32_t>(offsetof(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885, ___memoizedSerializedSize_15)); }
	inline int32_t get_memoizedSerializedSize_15() const { return ___memoizedSerializedSize_15; }
	inline int32_t* get_address_of_memoizedSerializedSize_15() { return &___memoizedSerializedSize_15; }
	inline void set_memoizedSerializedSize_15(int32_t value)
	{
		___memoizedSerializedSize_15 = value;
	}
};

struct DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_StaticFields
{
public:
	// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent::defaultInstance
	DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * ___defaultInstance_0;
	// System.String[] proto.PhoneEvent/Types/DepthMapEvent::_depthMapEventFieldNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____depthMapEventFieldNames_1;
	// System.UInt32[] proto.PhoneEvent/Types/DepthMapEvent::_depthMapEventFieldTags
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____depthMapEventFieldTags_2;

public:
	inline static int32_t get_offset_of_defaultInstance_0() { return static_cast<int32_t>(offsetof(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_StaticFields, ___defaultInstance_0)); }
	inline DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * get_defaultInstance_0() const { return ___defaultInstance_0; }
	inline DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 ** get_address_of_defaultInstance_0() { return &___defaultInstance_0; }
	inline void set_defaultInstance_0(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * value)
	{
		___defaultInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultInstance_0), (void*)value);
	}

	inline static int32_t get_offset_of__depthMapEventFieldNames_1() { return static_cast<int32_t>(offsetof(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_StaticFields, ____depthMapEventFieldNames_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__depthMapEventFieldNames_1() const { return ____depthMapEventFieldNames_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__depthMapEventFieldNames_1() { return &____depthMapEventFieldNames_1; }
	inline void set__depthMapEventFieldNames_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____depthMapEventFieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____depthMapEventFieldNames_1), (void*)value);
	}

	inline static int32_t get_offset_of__depthMapEventFieldTags_2() { return static_cast<int32_t>(offsetof(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_StaticFields, ____depthMapEventFieldTags_2)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__depthMapEventFieldTags_2() const { return ____depthMapEventFieldTags_2; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__depthMapEventFieldTags_2() { return &____depthMapEventFieldTags_2; }
	inline void set__depthMapEventFieldTags_2(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____depthMapEventFieldTags_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____depthMapEventFieldTags_2), (void*)value);
	}
};


// proto.PhoneEvent/Types/GyroscopeEvent
struct  GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19  : public GeneratedMessageLite_2_t104228B50E3F2E68AE35E8229B6CB2B6E1B68C89
{
public:
	// System.Boolean proto.PhoneEvent/Types/GyroscopeEvent::hasTimestamp
	bool ___hasTimestamp_4;
	// System.Int64 proto.PhoneEvent/Types/GyroscopeEvent::timestamp_
	int64_t ___timestamp__5;
	// System.Boolean proto.PhoneEvent/Types/GyroscopeEvent::hasX
	bool ___hasX_7;
	// System.Single proto.PhoneEvent/Types/GyroscopeEvent::x_
	float ___x__8;
	// System.Boolean proto.PhoneEvent/Types/GyroscopeEvent::hasY
	bool ___hasY_10;
	// System.Single proto.PhoneEvent/Types/GyroscopeEvent::y_
	float ___y__11;
	// System.Boolean proto.PhoneEvent/Types/GyroscopeEvent::hasZ
	bool ___hasZ_13;
	// System.Single proto.PhoneEvent/Types/GyroscopeEvent::z_
	float ___z__14;
	// System.Int32 proto.PhoneEvent/Types/GyroscopeEvent::memoizedSerializedSize
	int32_t ___memoizedSerializedSize_15;

public:
	inline static int32_t get_offset_of_hasTimestamp_4() { return static_cast<int32_t>(offsetof(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19, ___hasTimestamp_4)); }
	inline bool get_hasTimestamp_4() const { return ___hasTimestamp_4; }
	inline bool* get_address_of_hasTimestamp_4() { return &___hasTimestamp_4; }
	inline void set_hasTimestamp_4(bool value)
	{
		___hasTimestamp_4 = value;
	}

	inline static int32_t get_offset_of_timestamp__5() { return static_cast<int32_t>(offsetof(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19, ___timestamp__5)); }
	inline int64_t get_timestamp__5() const { return ___timestamp__5; }
	inline int64_t* get_address_of_timestamp__5() { return &___timestamp__5; }
	inline void set_timestamp__5(int64_t value)
	{
		___timestamp__5 = value;
	}

	inline static int32_t get_offset_of_hasX_7() { return static_cast<int32_t>(offsetof(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19, ___hasX_7)); }
	inline bool get_hasX_7() const { return ___hasX_7; }
	inline bool* get_address_of_hasX_7() { return &___hasX_7; }
	inline void set_hasX_7(bool value)
	{
		___hasX_7 = value;
	}

	inline static int32_t get_offset_of_x__8() { return static_cast<int32_t>(offsetof(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19, ___x__8)); }
	inline float get_x__8() const { return ___x__8; }
	inline float* get_address_of_x__8() { return &___x__8; }
	inline void set_x__8(float value)
	{
		___x__8 = value;
	}

	inline static int32_t get_offset_of_hasY_10() { return static_cast<int32_t>(offsetof(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19, ___hasY_10)); }
	inline bool get_hasY_10() const { return ___hasY_10; }
	inline bool* get_address_of_hasY_10() { return &___hasY_10; }
	inline void set_hasY_10(bool value)
	{
		___hasY_10 = value;
	}

	inline static int32_t get_offset_of_y__11() { return static_cast<int32_t>(offsetof(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19, ___y__11)); }
	inline float get_y__11() const { return ___y__11; }
	inline float* get_address_of_y__11() { return &___y__11; }
	inline void set_y__11(float value)
	{
		___y__11 = value;
	}

	inline static int32_t get_offset_of_hasZ_13() { return static_cast<int32_t>(offsetof(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19, ___hasZ_13)); }
	inline bool get_hasZ_13() const { return ___hasZ_13; }
	inline bool* get_address_of_hasZ_13() { return &___hasZ_13; }
	inline void set_hasZ_13(bool value)
	{
		___hasZ_13 = value;
	}

	inline static int32_t get_offset_of_z__14() { return static_cast<int32_t>(offsetof(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19, ___z__14)); }
	inline float get_z__14() const { return ___z__14; }
	inline float* get_address_of_z__14() { return &___z__14; }
	inline void set_z__14(float value)
	{
		___z__14 = value;
	}

	inline static int32_t get_offset_of_memoizedSerializedSize_15() { return static_cast<int32_t>(offsetof(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19, ___memoizedSerializedSize_15)); }
	inline int32_t get_memoizedSerializedSize_15() const { return ___memoizedSerializedSize_15; }
	inline int32_t* get_address_of_memoizedSerializedSize_15() { return &___memoizedSerializedSize_15; }
	inline void set_memoizedSerializedSize_15(int32_t value)
	{
		___memoizedSerializedSize_15 = value;
	}
};

struct GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_StaticFields
{
public:
	// proto.PhoneEvent/Types/GyroscopeEvent proto.PhoneEvent/Types/GyroscopeEvent::defaultInstance
	GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * ___defaultInstance_0;
	// System.String[] proto.PhoneEvent/Types/GyroscopeEvent::_gyroscopeEventFieldNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____gyroscopeEventFieldNames_1;
	// System.UInt32[] proto.PhoneEvent/Types/GyroscopeEvent::_gyroscopeEventFieldTags
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____gyroscopeEventFieldTags_2;

public:
	inline static int32_t get_offset_of_defaultInstance_0() { return static_cast<int32_t>(offsetof(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_StaticFields, ___defaultInstance_0)); }
	inline GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * get_defaultInstance_0() const { return ___defaultInstance_0; }
	inline GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 ** get_address_of_defaultInstance_0() { return &___defaultInstance_0; }
	inline void set_defaultInstance_0(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * value)
	{
		___defaultInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultInstance_0), (void*)value);
	}

	inline static int32_t get_offset_of__gyroscopeEventFieldNames_1() { return static_cast<int32_t>(offsetof(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_StaticFields, ____gyroscopeEventFieldNames_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__gyroscopeEventFieldNames_1() const { return ____gyroscopeEventFieldNames_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__gyroscopeEventFieldNames_1() { return &____gyroscopeEventFieldNames_1; }
	inline void set__gyroscopeEventFieldNames_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____gyroscopeEventFieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gyroscopeEventFieldNames_1), (void*)value);
	}

	inline static int32_t get_offset_of__gyroscopeEventFieldTags_2() { return static_cast<int32_t>(offsetof(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_StaticFields, ____gyroscopeEventFieldTags_2)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__gyroscopeEventFieldTags_2() const { return ____gyroscopeEventFieldTags_2; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__gyroscopeEventFieldTags_2() { return &____gyroscopeEventFieldTags_2; }
	inline void set__gyroscopeEventFieldTags_2(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____gyroscopeEventFieldTags_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gyroscopeEventFieldTags_2), (void*)value);
	}
};


// proto.PhoneEvent/Types/KeyEvent
struct  KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD  : public GeneratedMessageLite_2_t7ADA63773D0EFFC93012FAEE83FD74425197FE1D
{
public:
	// System.Boolean proto.PhoneEvent/Types/KeyEvent::hasAction
	bool ___hasAction_4;
	// System.Int32 proto.PhoneEvent/Types/KeyEvent::action_
	int32_t ___action__5;
	// System.Boolean proto.PhoneEvent/Types/KeyEvent::hasCode
	bool ___hasCode_7;
	// System.Int32 proto.PhoneEvent/Types/KeyEvent::code_
	int32_t ___code__8;
	// System.Int32 proto.PhoneEvent/Types/KeyEvent::memoizedSerializedSize
	int32_t ___memoizedSerializedSize_9;

public:
	inline static int32_t get_offset_of_hasAction_4() { return static_cast<int32_t>(offsetof(KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD, ___hasAction_4)); }
	inline bool get_hasAction_4() const { return ___hasAction_4; }
	inline bool* get_address_of_hasAction_4() { return &___hasAction_4; }
	inline void set_hasAction_4(bool value)
	{
		___hasAction_4 = value;
	}

	inline static int32_t get_offset_of_action__5() { return static_cast<int32_t>(offsetof(KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD, ___action__5)); }
	inline int32_t get_action__5() const { return ___action__5; }
	inline int32_t* get_address_of_action__5() { return &___action__5; }
	inline void set_action__5(int32_t value)
	{
		___action__5 = value;
	}

	inline static int32_t get_offset_of_hasCode_7() { return static_cast<int32_t>(offsetof(KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD, ___hasCode_7)); }
	inline bool get_hasCode_7() const { return ___hasCode_7; }
	inline bool* get_address_of_hasCode_7() { return &___hasCode_7; }
	inline void set_hasCode_7(bool value)
	{
		___hasCode_7 = value;
	}

	inline static int32_t get_offset_of_code__8() { return static_cast<int32_t>(offsetof(KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD, ___code__8)); }
	inline int32_t get_code__8() const { return ___code__8; }
	inline int32_t* get_address_of_code__8() { return &___code__8; }
	inline void set_code__8(int32_t value)
	{
		___code__8 = value;
	}

	inline static int32_t get_offset_of_memoizedSerializedSize_9() { return static_cast<int32_t>(offsetof(KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD, ___memoizedSerializedSize_9)); }
	inline int32_t get_memoizedSerializedSize_9() const { return ___memoizedSerializedSize_9; }
	inline int32_t* get_address_of_memoizedSerializedSize_9() { return &___memoizedSerializedSize_9; }
	inline void set_memoizedSerializedSize_9(int32_t value)
	{
		___memoizedSerializedSize_9 = value;
	}
};

struct KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_StaticFields
{
public:
	// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::defaultInstance
	KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * ___defaultInstance_0;
	// System.String[] proto.PhoneEvent/Types/KeyEvent::_keyEventFieldNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____keyEventFieldNames_1;
	// System.UInt32[] proto.PhoneEvent/Types/KeyEvent::_keyEventFieldTags
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____keyEventFieldTags_2;

public:
	inline static int32_t get_offset_of_defaultInstance_0() { return static_cast<int32_t>(offsetof(KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_StaticFields, ___defaultInstance_0)); }
	inline KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * get_defaultInstance_0() const { return ___defaultInstance_0; }
	inline KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD ** get_address_of_defaultInstance_0() { return &___defaultInstance_0; }
	inline void set_defaultInstance_0(KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * value)
	{
		___defaultInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultInstance_0), (void*)value);
	}

	inline static int32_t get_offset_of__keyEventFieldNames_1() { return static_cast<int32_t>(offsetof(KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_StaticFields, ____keyEventFieldNames_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__keyEventFieldNames_1() const { return ____keyEventFieldNames_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__keyEventFieldNames_1() { return &____keyEventFieldNames_1; }
	inline void set__keyEventFieldNames_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____keyEventFieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyEventFieldNames_1), (void*)value);
	}

	inline static int32_t get_offset_of__keyEventFieldTags_2() { return static_cast<int32_t>(offsetof(KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_StaticFields, ____keyEventFieldTags_2)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__keyEventFieldTags_2() const { return ____keyEventFieldTags_2; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__keyEventFieldTags_2() { return &____keyEventFieldTags_2; }
	inline void set__keyEventFieldTags_2(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____keyEventFieldTags_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyEventFieldTags_2), (void*)value);
	}
};


// proto.PhoneEvent/Types/MotionEvent
struct  MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6  : public GeneratedMessageLite_2_tC034596A4D362725E8E2AFFA7BDC619931833852
{
public:
	// System.Boolean proto.PhoneEvent/Types/MotionEvent::hasTimestamp
	bool ___hasTimestamp_4;
	// System.Int64 proto.PhoneEvent/Types/MotionEvent::timestamp_
	int64_t ___timestamp__5;
	// System.Boolean proto.PhoneEvent/Types/MotionEvent::hasAction
	bool ___hasAction_7;
	// System.Int32 proto.PhoneEvent/Types/MotionEvent::action_
	int32_t ___action__8;
	// Google.ProtocolBuffers.Collections.PopsicleList`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer> proto.PhoneEvent/Types/MotionEvent::pointers_
	PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB * ___pointers__10;
	// System.Int32 proto.PhoneEvent/Types/MotionEvent::memoizedSerializedSize
	int32_t ___memoizedSerializedSize_11;

public:
	inline static int32_t get_offset_of_hasTimestamp_4() { return static_cast<int32_t>(offsetof(MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6, ___hasTimestamp_4)); }
	inline bool get_hasTimestamp_4() const { return ___hasTimestamp_4; }
	inline bool* get_address_of_hasTimestamp_4() { return &___hasTimestamp_4; }
	inline void set_hasTimestamp_4(bool value)
	{
		___hasTimestamp_4 = value;
	}

	inline static int32_t get_offset_of_timestamp__5() { return static_cast<int32_t>(offsetof(MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6, ___timestamp__5)); }
	inline int64_t get_timestamp__5() const { return ___timestamp__5; }
	inline int64_t* get_address_of_timestamp__5() { return &___timestamp__5; }
	inline void set_timestamp__5(int64_t value)
	{
		___timestamp__5 = value;
	}

	inline static int32_t get_offset_of_hasAction_7() { return static_cast<int32_t>(offsetof(MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6, ___hasAction_7)); }
	inline bool get_hasAction_7() const { return ___hasAction_7; }
	inline bool* get_address_of_hasAction_7() { return &___hasAction_7; }
	inline void set_hasAction_7(bool value)
	{
		___hasAction_7 = value;
	}

	inline static int32_t get_offset_of_action__8() { return static_cast<int32_t>(offsetof(MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6, ___action__8)); }
	inline int32_t get_action__8() const { return ___action__8; }
	inline int32_t* get_address_of_action__8() { return &___action__8; }
	inline void set_action__8(int32_t value)
	{
		___action__8 = value;
	}

	inline static int32_t get_offset_of_pointers__10() { return static_cast<int32_t>(offsetof(MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6, ___pointers__10)); }
	inline PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB * get_pointers__10() const { return ___pointers__10; }
	inline PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB ** get_address_of_pointers__10() { return &___pointers__10; }
	inline void set_pointers__10(PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB * value)
	{
		___pointers__10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointers__10), (void*)value);
	}

	inline static int32_t get_offset_of_memoizedSerializedSize_11() { return static_cast<int32_t>(offsetof(MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6, ___memoizedSerializedSize_11)); }
	inline int32_t get_memoizedSerializedSize_11() const { return ___memoizedSerializedSize_11; }
	inline int32_t* get_address_of_memoizedSerializedSize_11() { return &___memoizedSerializedSize_11; }
	inline void set_memoizedSerializedSize_11(int32_t value)
	{
		___memoizedSerializedSize_11 = value;
	}
};

struct MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_StaticFields
{
public:
	// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::defaultInstance
	MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * ___defaultInstance_0;
	// System.String[] proto.PhoneEvent/Types/MotionEvent::_motionEventFieldNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____motionEventFieldNames_1;
	// System.UInt32[] proto.PhoneEvent/Types/MotionEvent::_motionEventFieldTags
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____motionEventFieldTags_2;

public:
	inline static int32_t get_offset_of_defaultInstance_0() { return static_cast<int32_t>(offsetof(MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_StaticFields, ___defaultInstance_0)); }
	inline MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * get_defaultInstance_0() const { return ___defaultInstance_0; }
	inline MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 ** get_address_of_defaultInstance_0() { return &___defaultInstance_0; }
	inline void set_defaultInstance_0(MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * value)
	{
		___defaultInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultInstance_0), (void*)value);
	}

	inline static int32_t get_offset_of__motionEventFieldNames_1() { return static_cast<int32_t>(offsetof(MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_StaticFields, ____motionEventFieldNames_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__motionEventFieldNames_1() const { return ____motionEventFieldNames_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__motionEventFieldNames_1() { return &____motionEventFieldNames_1; }
	inline void set__motionEventFieldNames_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____motionEventFieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____motionEventFieldNames_1), (void*)value);
	}

	inline static int32_t get_offset_of__motionEventFieldTags_2() { return static_cast<int32_t>(offsetof(MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_StaticFields, ____motionEventFieldTags_2)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__motionEventFieldTags_2() const { return ____motionEventFieldTags_2; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__motionEventFieldTags_2() { return &____motionEventFieldTags_2; }
	inline void set__motionEventFieldTags_2(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____motionEventFieldTags_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____motionEventFieldTags_2), (void*)value);
	}
};


// proto.PhoneEvent/Types/OrientationEvent
struct  OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153  : public GeneratedMessageLite_2_t1EE25A6F90F39E9880B157FF1C0EAA92485B2133
{
public:
	// System.Boolean proto.PhoneEvent/Types/OrientationEvent::hasTimestamp
	bool ___hasTimestamp_4;
	// System.Int64 proto.PhoneEvent/Types/OrientationEvent::timestamp_
	int64_t ___timestamp__5;
	// System.Boolean proto.PhoneEvent/Types/OrientationEvent::hasX
	bool ___hasX_7;
	// System.Single proto.PhoneEvent/Types/OrientationEvent::x_
	float ___x__8;
	// System.Boolean proto.PhoneEvent/Types/OrientationEvent::hasY
	bool ___hasY_10;
	// System.Single proto.PhoneEvent/Types/OrientationEvent::y_
	float ___y__11;
	// System.Boolean proto.PhoneEvent/Types/OrientationEvent::hasZ
	bool ___hasZ_13;
	// System.Single proto.PhoneEvent/Types/OrientationEvent::z_
	float ___z__14;
	// System.Boolean proto.PhoneEvent/Types/OrientationEvent::hasW
	bool ___hasW_16;
	// System.Single proto.PhoneEvent/Types/OrientationEvent::w_
	float ___w__17;
	// System.Int32 proto.PhoneEvent/Types/OrientationEvent::memoizedSerializedSize
	int32_t ___memoizedSerializedSize_18;

public:
	inline static int32_t get_offset_of_hasTimestamp_4() { return static_cast<int32_t>(offsetof(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153, ___hasTimestamp_4)); }
	inline bool get_hasTimestamp_4() const { return ___hasTimestamp_4; }
	inline bool* get_address_of_hasTimestamp_4() { return &___hasTimestamp_4; }
	inline void set_hasTimestamp_4(bool value)
	{
		___hasTimestamp_4 = value;
	}

	inline static int32_t get_offset_of_timestamp__5() { return static_cast<int32_t>(offsetof(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153, ___timestamp__5)); }
	inline int64_t get_timestamp__5() const { return ___timestamp__5; }
	inline int64_t* get_address_of_timestamp__5() { return &___timestamp__5; }
	inline void set_timestamp__5(int64_t value)
	{
		___timestamp__5 = value;
	}

	inline static int32_t get_offset_of_hasX_7() { return static_cast<int32_t>(offsetof(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153, ___hasX_7)); }
	inline bool get_hasX_7() const { return ___hasX_7; }
	inline bool* get_address_of_hasX_7() { return &___hasX_7; }
	inline void set_hasX_7(bool value)
	{
		___hasX_7 = value;
	}

	inline static int32_t get_offset_of_x__8() { return static_cast<int32_t>(offsetof(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153, ___x__8)); }
	inline float get_x__8() const { return ___x__8; }
	inline float* get_address_of_x__8() { return &___x__8; }
	inline void set_x__8(float value)
	{
		___x__8 = value;
	}

	inline static int32_t get_offset_of_hasY_10() { return static_cast<int32_t>(offsetof(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153, ___hasY_10)); }
	inline bool get_hasY_10() const { return ___hasY_10; }
	inline bool* get_address_of_hasY_10() { return &___hasY_10; }
	inline void set_hasY_10(bool value)
	{
		___hasY_10 = value;
	}

	inline static int32_t get_offset_of_y__11() { return static_cast<int32_t>(offsetof(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153, ___y__11)); }
	inline float get_y__11() const { return ___y__11; }
	inline float* get_address_of_y__11() { return &___y__11; }
	inline void set_y__11(float value)
	{
		___y__11 = value;
	}

	inline static int32_t get_offset_of_hasZ_13() { return static_cast<int32_t>(offsetof(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153, ___hasZ_13)); }
	inline bool get_hasZ_13() const { return ___hasZ_13; }
	inline bool* get_address_of_hasZ_13() { return &___hasZ_13; }
	inline void set_hasZ_13(bool value)
	{
		___hasZ_13 = value;
	}

	inline static int32_t get_offset_of_z__14() { return static_cast<int32_t>(offsetof(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153, ___z__14)); }
	inline float get_z__14() const { return ___z__14; }
	inline float* get_address_of_z__14() { return &___z__14; }
	inline void set_z__14(float value)
	{
		___z__14 = value;
	}

	inline static int32_t get_offset_of_hasW_16() { return static_cast<int32_t>(offsetof(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153, ___hasW_16)); }
	inline bool get_hasW_16() const { return ___hasW_16; }
	inline bool* get_address_of_hasW_16() { return &___hasW_16; }
	inline void set_hasW_16(bool value)
	{
		___hasW_16 = value;
	}

	inline static int32_t get_offset_of_w__17() { return static_cast<int32_t>(offsetof(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153, ___w__17)); }
	inline float get_w__17() const { return ___w__17; }
	inline float* get_address_of_w__17() { return &___w__17; }
	inline void set_w__17(float value)
	{
		___w__17 = value;
	}

	inline static int32_t get_offset_of_memoizedSerializedSize_18() { return static_cast<int32_t>(offsetof(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153, ___memoizedSerializedSize_18)); }
	inline int32_t get_memoizedSerializedSize_18() const { return ___memoizedSerializedSize_18; }
	inline int32_t* get_address_of_memoizedSerializedSize_18() { return &___memoizedSerializedSize_18; }
	inline void set_memoizedSerializedSize_18(int32_t value)
	{
		___memoizedSerializedSize_18 = value;
	}
};

struct OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_StaticFields
{
public:
	// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent::defaultInstance
	OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * ___defaultInstance_0;
	// System.String[] proto.PhoneEvent/Types/OrientationEvent::_orientationEventFieldNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____orientationEventFieldNames_1;
	// System.UInt32[] proto.PhoneEvent/Types/OrientationEvent::_orientationEventFieldTags
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____orientationEventFieldTags_2;

public:
	inline static int32_t get_offset_of_defaultInstance_0() { return static_cast<int32_t>(offsetof(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_StaticFields, ___defaultInstance_0)); }
	inline OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * get_defaultInstance_0() const { return ___defaultInstance_0; }
	inline OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 ** get_address_of_defaultInstance_0() { return &___defaultInstance_0; }
	inline void set_defaultInstance_0(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * value)
	{
		___defaultInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultInstance_0), (void*)value);
	}

	inline static int32_t get_offset_of__orientationEventFieldNames_1() { return static_cast<int32_t>(offsetof(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_StaticFields, ____orientationEventFieldNames_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__orientationEventFieldNames_1() const { return ____orientationEventFieldNames_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__orientationEventFieldNames_1() { return &____orientationEventFieldNames_1; }
	inline void set__orientationEventFieldNames_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____orientationEventFieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____orientationEventFieldNames_1), (void*)value);
	}

	inline static int32_t get_offset_of__orientationEventFieldTags_2() { return static_cast<int32_t>(offsetof(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_StaticFields, ____orientationEventFieldTags_2)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__orientationEventFieldTags_2() const { return ____orientationEventFieldTags_2; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__orientationEventFieldTags_2() { return &____orientationEventFieldTags_2; }
	inline void set__orientationEventFieldTags_2(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____orientationEventFieldTags_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____orientationEventFieldTags_2), (void*)value);
	}
};


// proto.PhoneEvent/Types/Type
struct  Type_t7C12052B9B055545D945272055E254EADE47914C 
{
public:
	// System.Int32 proto.PhoneEvent/Types/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t7C12052B9B055545D945272055E254EADE47914C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// proto.PhoneEvent/Types/AccelerometerEvent/Builder
struct  Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1  : public GeneratedBuilderLite_2_t864BA4B29C32529A83928995C9ADAD10B6FC33EA
{
public:
	// System.Boolean proto.PhoneEvent/Types/AccelerometerEvent/Builder::resultIsReadOnly
	bool ___resultIsReadOnly_0;
	// proto.PhoneEvent/Types/AccelerometerEvent proto.PhoneEvent/Types/AccelerometerEvent/Builder::result
	AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * ___result_1;

public:
	inline static int32_t get_offset_of_resultIsReadOnly_0() { return static_cast<int32_t>(offsetof(Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1, ___resultIsReadOnly_0)); }
	inline bool get_resultIsReadOnly_0() const { return ___resultIsReadOnly_0; }
	inline bool* get_address_of_resultIsReadOnly_0() { return &___resultIsReadOnly_0; }
	inline void set_resultIsReadOnly_0(bool value)
	{
		___resultIsReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1, ___result_1)); }
	inline AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * get_result_1() const { return ___result_1; }
	inline AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA ** get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * value)
	{
		___result_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_1), (void*)value);
	}
};


// proto.PhoneEvent/Types/DepthMapEvent/Builder
struct  Builder_tEBEB64D39617078197E85E05786FC36089B301C5  : public GeneratedBuilderLite_2_t47ABB9A2A99234420D194EB139F96C3DAD790B17
{
public:
	// System.Boolean proto.PhoneEvent/Types/DepthMapEvent/Builder::resultIsReadOnly
	bool ___resultIsReadOnly_0;
	// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent/Builder::result
	DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * ___result_1;

public:
	inline static int32_t get_offset_of_resultIsReadOnly_0() { return static_cast<int32_t>(offsetof(Builder_tEBEB64D39617078197E85E05786FC36089B301C5, ___resultIsReadOnly_0)); }
	inline bool get_resultIsReadOnly_0() const { return ___resultIsReadOnly_0; }
	inline bool* get_address_of_resultIsReadOnly_0() { return &___resultIsReadOnly_0; }
	inline void set_resultIsReadOnly_0(bool value)
	{
		___resultIsReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(Builder_tEBEB64D39617078197E85E05786FC36089B301C5, ___result_1)); }
	inline DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * get_result_1() const { return ___result_1; }
	inline DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 ** get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * value)
	{
		___result_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_1), (void*)value);
	}
};


// proto.PhoneEvent/Types/GyroscopeEvent/Builder
struct  Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70  : public GeneratedBuilderLite_2_t811FA5EA40172941BD33D03255BD0C4A1BF48EEA
{
public:
	// System.Boolean proto.PhoneEvent/Types/GyroscopeEvent/Builder::resultIsReadOnly
	bool ___resultIsReadOnly_0;
	// proto.PhoneEvent/Types/GyroscopeEvent proto.PhoneEvent/Types/GyroscopeEvent/Builder::result
	GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * ___result_1;

public:
	inline static int32_t get_offset_of_resultIsReadOnly_0() { return static_cast<int32_t>(offsetof(Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70, ___resultIsReadOnly_0)); }
	inline bool get_resultIsReadOnly_0() const { return ___resultIsReadOnly_0; }
	inline bool* get_address_of_resultIsReadOnly_0() { return &___resultIsReadOnly_0; }
	inline void set_resultIsReadOnly_0(bool value)
	{
		___resultIsReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70, ___result_1)); }
	inline GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * get_result_1() const { return ___result_1; }
	inline GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 ** get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * value)
	{
		___result_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_1), (void*)value);
	}
};


// proto.PhoneEvent/Types/KeyEvent/Builder
struct  Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC  : public GeneratedBuilderLite_2_tBB766E92AB4EE14DD2E6768ADADCF48B13DDE02D
{
public:
	// System.Boolean proto.PhoneEvent/Types/KeyEvent/Builder::resultIsReadOnly
	bool ___resultIsReadOnly_0;
	// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent/Builder::result
	KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * ___result_1;

public:
	inline static int32_t get_offset_of_resultIsReadOnly_0() { return static_cast<int32_t>(offsetof(Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC, ___resultIsReadOnly_0)); }
	inline bool get_resultIsReadOnly_0() const { return ___resultIsReadOnly_0; }
	inline bool* get_address_of_resultIsReadOnly_0() { return &___resultIsReadOnly_0; }
	inline void set_resultIsReadOnly_0(bool value)
	{
		___resultIsReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC, ___result_1)); }
	inline KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * get_result_1() const { return ___result_1; }
	inline KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD ** get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * value)
	{
		___result_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_1), (void*)value);
	}
};


// proto.PhoneEvent/Types/MotionEvent/Builder
struct  Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D  : public GeneratedBuilderLite_2_tAFD62F41883615C90F37345B46DE10B236102BC7
{
public:
	// System.Boolean proto.PhoneEvent/Types/MotionEvent/Builder::resultIsReadOnly
	bool ___resultIsReadOnly_0;
	// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent/Builder::result
	MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * ___result_1;

public:
	inline static int32_t get_offset_of_resultIsReadOnly_0() { return static_cast<int32_t>(offsetof(Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D, ___resultIsReadOnly_0)); }
	inline bool get_resultIsReadOnly_0() const { return ___resultIsReadOnly_0; }
	inline bool* get_address_of_resultIsReadOnly_0() { return &___resultIsReadOnly_0; }
	inline void set_resultIsReadOnly_0(bool value)
	{
		___resultIsReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D, ___result_1)); }
	inline MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * get_result_1() const { return ___result_1; }
	inline MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 ** get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * value)
	{
		___result_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_1), (void*)value);
	}
};


// proto.PhoneEvent/Types/OrientationEvent/Builder
struct  Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA  : public GeneratedBuilderLite_2_tB12EF56175A53FFD1085AEB28087A72447BD4394
{
public:
	// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::resultIsReadOnly
	bool ___resultIsReadOnly_0;
	// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent/Builder::result
	OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * ___result_1;

public:
	inline static int32_t get_offset_of_resultIsReadOnly_0() { return static_cast<int32_t>(offsetof(Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA, ___resultIsReadOnly_0)); }
	inline bool get_resultIsReadOnly_0() const { return ___resultIsReadOnly_0; }
	inline bool* get_address_of_resultIsReadOnly_0() { return &___resultIsReadOnly_0; }
	inline void set_resultIsReadOnly_0(bool value)
	{
		___resultIsReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA, ___result_1)); }
	inline OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * get_result_1() const { return ___result_1; }
	inline OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 ** get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * value)
	{
		___result_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_1), (void*)value);
	}
};


// proto.PhoneEvent/Types/MotionEvent/Types/Pointer
struct  Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2  : public GeneratedMessageLite_2_t82DB2ACD6D40D03C3414CF8083201076C2B10FEB
{
public:
	// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::hasId
	bool ___hasId_4;
	// System.Int32 proto.PhoneEvent/Types/MotionEvent/Types/Pointer::id_
	int32_t ___id__5;
	// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::hasNormalizedX
	bool ___hasNormalizedX_7;
	// System.Single proto.PhoneEvent/Types/MotionEvent/Types/Pointer::normalizedX_
	float ___normalizedX__8;
	// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::hasNormalizedY
	bool ___hasNormalizedY_10;
	// System.Single proto.PhoneEvent/Types/MotionEvent/Types/Pointer::normalizedY_
	float ___normalizedY__11;
	// System.Int32 proto.PhoneEvent/Types/MotionEvent/Types/Pointer::memoizedSerializedSize
	int32_t ___memoizedSerializedSize_12;

public:
	inline static int32_t get_offset_of_hasId_4() { return static_cast<int32_t>(offsetof(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2, ___hasId_4)); }
	inline bool get_hasId_4() const { return ___hasId_4; }
	inline bool* get_address_of_hasId_4() { return &___hasId_4; }
	inline void set_hasId_4(bool value)
	{
		___hasId_4 = value;
	}

	inline static int32_t get_offset_of_id__5() { return static_cast<int32_t>(offsetof(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2, ___id__5)); }
	inline int32_t get_id__5() const { return ___id__5; }
	inline int32_t* get_address_of_id__5() { return &___id__5; }
	inline void set_id__5(int32_t value)
	{
		___id__5 = value;
	}

	inline static int32_t get_offset_of_hasNormalizedX_7() { return static_cast<int32_t>(offsetof(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2, ___hasNormalizedX_7)); }
	inline bool get_hasNormalizedX_7() const { return ___hasNormalizedX_7; }
	inline bool* get_address_of_hasNormalizedX_7() { return &___hasNormalizedX_7; }
	inline void set_hasNormalizedX_7(bool value)
	{
		___hasNormalizedX_7 = value;
	}

	inline static int32_t get_offset_of_normalizedX__8() { return static_cast<int32_t>(offsetof(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2, ___normalizedX__8)); }
	inline float get_normalizedX__8() const { return ___normalizedX__8; }
	inline float* get_address_of_normalizedX__8() { return &___normalizedX__8; }
	inline void set_normalizedX__8(float value)
	{
		___normalizedX__8 = value;
	}

	inline static int32_t get_offset_of_hasNormalizedY_10() { return static_cast<int32_t>(offsetof(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2, ___hasNormalizedY_10)); }
	inline bool get_hasNormalizedY_10() const { return ___hasNormalizedY_10; }
	inline bool* get_address_of_hasNormalizedY_10() { return &___hasNormalizedY_10; }
	inline void set_hasNormalizedY_10(bool value)
	{
		___hasNormalizedY_10 = value;
	}

	inline static int32_t get_offset_of_normalizedY__11() { return static_cast<int32_t>(offsetof(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2, ___normalizedY__11)); }
	inline float get_normalizedY__11() const { return ___normalizedY__11; }
	inline float* get_address_of_normalizedY__11() { return &___normalizedY__11; }
	inline void set_normalizedY__11(float value)
	{
		___normalizedY__11 = value;
	}

	inline static int32_t get_offset_of_memoizedSerializedSize_12() { return static_cast<int32_t>(offsetof(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2, ___memoizedSerializedSize_12)); }
	inline int32_t get_memoizedSerializedSize_12() const { return ___memoizedSerializedSize_12; }
	inline int32_t* get_address_of_memoizedSerializedSize_12() { return &___memoizedSerializedSize_12; }
	inline void set_memoizedSerializedSize_12(int32_t value)
	{
		___memoizedSerializedSize_12 = value;
	}
};

struct Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_StaticFields
{
public:
	// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::defaultInstance
	Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * ___defaultInstance_0;
	// System.String[] proto.PhoneEvent/Types/MotionEvent/Types/Pointer::_pointerFieldNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____pointerFieldNames_1;
	// System.UInt32[] proto.PhoneEvent/Types/MotionEvent/Types/Pointer::_pointerFieldTags
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____pointerFieldTags_2;

public:
	inline static int32_t get_offset_of_defaultInstance_0() { return static_cast<int32_t>(offsetof(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_StaticFields, ___defaultInstance_0)); }
	inline Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * get_defaultInstance_0() const { return ___defaultInstance_0; }
	inline Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 ** get_address_of_defaultInstance_0() { return &___defaultInstance_0; }
	inline void set_defaultInstance_0(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * value)
	{
		___defaultInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultInstance_0), (void*)value);
	}

	inline static int32_t get_offset_of__pointerFieldNames_1() { return static_cast<int32_t>(offsetof(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_StaticFields, ____pointerFieldNames_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__pointerFieldNames_1() const { return ____pointerFieldNames_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__pointerFieldNames_1() { return &____pointerFieldNames_1; }
	inline void set__pointerFieldNames_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____pointerFieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pointerFieldNames_1), (void*)value);
	}

	inline static int32_t get_offset_of__pointerFieldTags_2() { return static_cast<int32_t>(offsetof(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_StaticFields, ____pointerFieldTags_2)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__pointerFieldTags_2() const { return ____pointerFieldTags_2; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__pointerFieldTags_2() { return &____pointerFieldTags_2; }
	inline void set__pointerFieldTags_2(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____pointerFieldTags_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pointerFieldTags_2), (void*)value);
	}
};


// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder
struct  Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302  : public GeneratedBuilderLite_2_t4CCAA45209A9F62F93E7444CEE497A4FF30A8397
{
public:
	// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::resultIsReadOnly
	bool ___resultIsReadOnly_0;
	// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::result
	Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * ___result_1;

public:
	inline static int32_t get_offset_of_resultIsReadOnly_0() { return static_cast<int32_t>(offsetof(Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302, ___resultIsReadOnly_0)); }
	inline bool get_resultIsReadOnly_0() const { return ___resultIsReadOnly_0; }
	inline bool* get_address_of_resultIsReadOnly_0() { return &___resultIsReadOnly_0; }
	inline void set_resultIsReadOnly_0(bool value)
	{
		___resultIsReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302, ___result_1)); }
	inline Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * get_result_1() const { return ___result_1; }
	inline Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 ** get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * value)
	{
		___result_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_1), (void*)value);
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
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


// System.IO.IOException
struct  IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// Google.ProtocolBuffers.InvalidProtocolBufferException
struct  InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60  : public IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA
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
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
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


// System.Void Google.ProtocolBuffers.GeneratedBuilderLite`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedBuilderLite_2__ctor_m266FD052E0FAEA48FFE6BB592FC9038ACD969EB1_gshared (GeneratedBuilderLite_2_tFE76F6CF01CB14F6E94310424938B05647711B6B * __this, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<System.Object,System.Object>::MergeFrom(Google.ProtocolBuffers.IMessageLite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GeneratedBuilderLite_2_MergeFrom_m5CC013F304C8902E9761D27E07045648B3A1C2CD_gshared (GeneratedBuilderLite_2_tFE76F6CF01CB14F6E94310424938B05647711B6B * __this, RuntimeObject* ___other0, const RuntimeMethod* method);
// System.Int32 System.Array::BinarySearch<System.Object>(!!0[],!!0,System.Collections.Generic.IComparer`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisRuntimeObject_m9FE3DB1E9AFF3661EB4480AA77B7479F53E7581F_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, RuntimeObject * ___value1, RuntimeObject* ___comparer2, const RuntimeMethod* method);
// System.Int32 Google.ProtocolBuffers.Collections.PopsicleList`1<System.Single>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PopsicleList_1_get_Count_mE3C43D8A8F72DE905F65EC5581F5E40E50D1B63C_gshared (PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 * __this, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.Collections.PopsicleList`1<System.Single>::Add(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopsicleList_1_Add_m3520CDCD790B303679967E7B4FD10724E7D59E14_gshared (PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.Collections.PopsicleList`1<System.Single>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopsicleList_1_set_Item_mB1BEF45A67FD508B139537A1F492ABE3A9D1E769_gshared (PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.Collections.PopsicleList`1<System.Single>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopsicleList_1_Add_m02EB2B8F8118B6BFDA6308B3078D852A163F53E8_gshared (PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 * __this, float ___item0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.Collections.PopsicleList`1<System.Single>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopsicleList_1_Clear_m29BCCE5060DC16C5CF51BF5227C8BC6101047A33_gshared (PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 * __this, const RuntimeMethod* method);
// System.Int32 Google.ProtocolBuffers.Collections.PopsicleList`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PopsicleList_1_get_Count_m1D58B39964C437B69DB4C0983F6CF36CF3AD4485_gshared (PopsicleList_1_t9C08B2276117871A6598106BB61F90D90197985C * __this, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.Collections.PopsicleList`1<System.Object>::Add(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopsicleList_1_Add_m1CD7512D5A2FFF575E89952DCEC0422C8049F343_gshared (PopsicleList_1_t9C08B2276117871A6598106BB61F90D90197985C * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.Collections.PopsicleList`1<System.Object>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopsicleList_1_set_Item_m75697BACCE30504CEA968BADA2C16D6D73E8084E_gshared (PopsicleList_1_t9C08B2276117871A6598106BB61F90D90197985C * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.Collections.PopsicleList`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopsicleList_1_Add_m0C8C42256F0546C79822872C690BE46D55CA84F7_gshared (PopsicleList_1_t9C08B2276117871A6598106BB61F90D90197985C * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.Collections.PopsicleList`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopsicleList_1_Clear_m4781AB441594A2D0EF005F3E94F31A8DF17093E1_gshared (PopsicleList_1_t9C08B2276117871A6598106BB61F90D90197985C * __this, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.GeneratedMessageLite`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedMessageLite_2__ctor_mE5B581A70266A72E74F977007197FE5C905D2C8A_gshared (GeneratedMessageLite_2_tE8C6F7808298EF1BE3D921F73060152DDB9F80F1 * __this, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.GeneratedMessageLite`2<System.Object,System.Object>::PrintField(System.String,System.Boolean,System.Object,System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedMessageLite_2_PrintField_m7BA730CA3507981347F811E40239ED25469B03EA_gshared (String_t* ___name0, bool ___hasValue1, RuntimeObject * ___value2, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___writer3, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::MergeFrom(Google.ProtocolBuffers.ByteString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AbstractBuilderLite_2_MergeFrom_m848932FDF05B22660AC4A0B75F76E7E21F2DEBA5_gshared (AbstractBuilderLite_2_t60C513A8D55878C329D569792411DEF020D52088 * __this, ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * ___data0, const RuntimeMethod* method);
// !0 Google.ProtocolBuffers.GeneratedBuilderLite`2<System.Object,System.Object>::BuildParsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GeneratedBuilderLite_2_BuildParsed_m19741B951A04F2AB187F1B591BEB8016710CE512_gshared (GeneratedBuilderLite_2_tFE76F6CF01CB14F6E94310424938B05647711B6B * __this, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::MergeFrom(Google.ProtocolBuffers.ByteString,Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AbstractBuilderLite_2_MergeFrom_mD4BD3E78EB6B9100B6A89BB1C2C100F41683662A_gshared (AbstractBuilderLite_2_t60C513A8D55878C329D569792411DEF020D52088 * __this, ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * ___data0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::MergeFrom(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AbstractBuilderLite_2_MergeFrom_mF29F5E9CAD54CF80D81CC9B39FA5CA7C9A7FD833_gshared (AbstractBuilderLite_2_t60C513A8D55878C329D569792411DEF020D52088 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::MergeFrom(System.Byte[],Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AbstractBuilderLite_2_MergeFrom_m155751DE6A8DFC5EA4AE26ED07717B578C1F9ADD_gshared (AbstractBuilderLite_2_t60C513A8D55878C329D569792411DEF020D52088 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::MergeFrom(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AbstractBuilderLite_2_MergeFrom_m60F21E4382A29C32A7524BC37C304A61192D30B9_gshared (AbstractBuilderLite_2_t60C513A8D55878C329D569792411DEF020D52088 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::MergeFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AbstractBuilderLite_2_MergeFrom_m5A1CEB9EF2C6BB405AEA1D2C32EC250FEDDE16A9_gshared (AbstractBuilderLite_2_t60C513A8D55878C329D569792411DEF020D52088 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::MergeDelimitedFrom(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AbstractBuilderLite_2_MergeDelimitedFrom_m2CA5822E4FFA2F314454B2F84AEB525060BB5438_gshared (AbstractBuilderLite_2_t60C513A8D55878C329D569792411DEF020D52088 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::MergeDelimitedFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AbstractBuilderLite_2_MergeDelimitedFrom_m0F0CC577C1D8C8D811FE68EF6772C21FB997D893_gshared (AbstractBuilderLite_2_t60C513A8D55878C329D569792411DEF020D52088 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method);

// System.Void Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/AccelerometerEvent,proto.PhoneEvent/Types/AccelerometerEvent/Builder>::.ctor()
inline void GeneratedBuilderLite_2__ctor_m74D649FCF418A76D77A171C1E9BACA82B773EBD5 (GeneratedBuilderLite_2_t864BA4B29C32529A83928995C9ADAD10B6FC33EA * __this, const RuntimeMethod* method)
{
	((  void (*) (GeneratedBuilderLite_2_t864BA4B29C32529A83928995C9ADAD10B6FC33EA *, const RuntimeMethod*))GeneratedBuilderLite_2__ctor_m266FD052E0FAEA48FFE6BB592FC9038ACD969EB1_gshared)(__this, method);
}
// proto.PhoneEvent/Types/AccelerometerEvent proto.PhoneEvent/Types/AccelerometerEvent::get_DefaultInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * AccelerometerEvent_get_DefaultInstance_m6971C75D8BBDDD9BA5872D8742E9F25197263661_inline (const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/AccelerometerEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccelerometerEvent__ctor_mCE2AF92260CB6460D3EA568EB7099941CB74EAE3 (AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * __this, const RuntimeMethod* method);
// proto.PhoneEvent/Types/AccelerometerEvent proto.PhoneEvent/Types/AccelerometerEvent/Builder::PrepareBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * Builder_PrepareBuilder_mB2E64B032190F0128D5579316847BC8A3A48DB19 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/AccelerometerEvent/Builder::.ctor(proto.PhoneEvent/Types/AccelerometerEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_mB79E573B8F489D84D007C9B29CA39C031217D8C1 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * ___cloneFrom0, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/AccelerometerEvent/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m7FC63D2D73E39D4CCFD43FDE402624036EC3979C (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, const RuntimeMethod* method);
// proto.PhoneEvent/Types/AccelerometerEvent proto.PhoneEvent/Types/AccelerometerEvent::MakeReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * AccelerometerEvent_MakeReadOnly_m374134393A8A8A81861F06BAC6D4805EAA421E3E (AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * __this, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/AccelerometerEvent,proto.PhoneEvent/Types/AccelerometerEvent/Builder>::MergeFrom(Google.ProtocolBuffers.IMessageLite)
inline Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * GeneratedBuilderLite_2_MergeFrom_mA237D82615DE1B46C35392FAFBE3754B13024867 (GeneratedBuilderLite_2_t864BA4B29C32529A83928995C9ADAD10B6FC33EA * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	return ((  Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * (*) (GeneratedBuilderLite_2_t864BA4B29C32529A83928995C9ADAD10B6FC33EA *, RuntimeObject*, const RuntimeMethod*))GeneratedBuilderLite_2_MergeFrom_m5CC013F304C8902E9761D27E07045648B3A1C2CD_gshared)(__this, ___other0, method);
}
// System.Boolean proto.PhoneEvent/Types/AccelerometerEvent::get_HasTimestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AccelerometerEvent_get_HasTimestamp_m1A2FD1A59501CFF9D672F81693CE4A6B38371F72_inline (AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * __this, const RuntimeMethod* method);
// System.Int64 proto.PhoneEvent/Types/AccelerometerEvent::get_Timestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t AccelerometerEvent_get_Timestamp_m34C037F8E45E33E6529632BD72029DEE677CFFBA_inline (AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/AccelerometerEvent/Builder::set_Timestamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Timestamp_m869BB2D0DFF8D3E42A73E26BCD3EDE47237C2B8D (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Boolean proto.PhoneEvent/Types/AccelerometerEvent::get_HasX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AccelerometerEvent_get_HasX_mB86F6DCB228C6C9C6F6E4DEF6D34BF831F155F86_inline (AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * __this, const RuntimeMethod* method);
// System.Single proto.PhoneEvent/Types/AccelerometerEvent::get_X()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AccelerometerEvent_get_X_m1135BF88034276286CECDCFF203AFD647773DF59_inline (AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/AccelerometerEvent/Builder::set_X(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_X_m1AB7F2C53028312B24925CD0CCDB46C6FB35AD63 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean proto.PhoneEvent/Types/AccelerometerEvent::get_HasY()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AccelerometerEvent_get_HasY_m6E67B35C0E6A0149AE67513B750FB54B048CDBE6_inline (AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * __this, const RuntimeMethod* method);
// System.Single proto.PhoneEvent/Types/AccelerometerEvent::get_Y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AccelerometerEvent_get_Y_m27AC19083EBF55AF9B7D13811DEB89A91BF24A0B_inline (AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/AccelerometerEvent/Builder::set_Y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Y_m912332D31497BCA8827C978AA8111914D7F99442 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean proto.PhoneEvent/Types/AccelerometerEvent::get_HasZ()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AccelerometerEvent_get_HasZ_m68A704A55BA221B436A922D9E1E1501249AEA7F3_inline (AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * __this, const RuntimeMethod* method);
// System.Single proto.PhoneEvent/Types/AccelerometerEvent::get_Z()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AccelerometerEvent_get_Z_mC8C037719C5E02E507A114C54E6A74C983627D0E_inline (AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/AccelerometerEvent/Builder::set_Z(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Z_mF6ED1538B9E60FA27B6100E8503C68846EC23D48 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, float ___value0, const RuntimeMethod* method);
// Google.ProtocolBuffers.ExtensionRegistry Google.ProtocolBuffers.ExtensionRegistry::get_Empty()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ExtensionRegistry_get_Empty_mC0CEC24AC7345586186C0641D64BAAC63413DAA9_inline (const RuntimeMethod* method);
// System.StringComparer System.StringComparer::get_Ordinal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_Ordinal_mF3B6370BEBD77351DB5218C867DCD669C47B8812_inline (const RuntimeMethod* method);
// System.Int32 System.Array::BinarySearch<System.String>(!!0[],!!0,System.Collections.Generic.IComparer`1<!!0>)
inline int32_t Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___array0, String_t* ___value1, RuntimeObject* ___comparer2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, String_t*, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisRuntimeObject_m9FE3DB1E9AFF3661EB4480AA77B7479F53E7581F_gshared)(___array0, ___value1, ___comparer2, method);
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::InvalidTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * InvalidProtocolBufferException_InvalidTag_m2B39E4AEE6E6B4DE200ED9B10F0128F140ADAF88 (const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.WireFormat::IsEndGroupTag(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WireFormat_IsEndGroupTag_mB577CA68ED4BEFC51C8E72F58E018D921140D929 (uint32_t ___tag0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::SetTimestamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * Builder_SetTimestamp_m90A517613D2E4FD5F7948F9222DD3FE1D56F35E0 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, int64_t ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::SetX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * Builder_SetX_m81AB6C320D654C766C8CDCFD9D9D0BC1FBBFB7C2 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, float ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::SetY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * Builder_SetY_m00E03467DC5263B10C73336C76BFD9F1B9F13F4D (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, float ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::SetZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * Builder_SetZ_m6E0B9B80C42A40AF54F81DCDCE7683B6E2746D5E (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/DepthMapEvent,proto.PhoneEvent/Types/DepthMapEvent/Builder>::.ctor()
inline void GeneratedBuilderLite_2__ctor_m9E75F0D534EC9FE62FE8E73B5E4F25A01136B67B (GeneratedBuilderLite_2_t47ABB9A2A99234420D194EB139F96C3DAD790B17 * __this, const RuntimeMethod* method)
{
	((  void (*) (GeneratedBuilderLite_2_t47ABB9A2A99234420D194EB139F96C3DAD790B17 *, const RuntimeMethod*))GeneratedBuilderLite_2__ctor_m266FD052E0FAEA48FFE6BB592FC9038ACD969EB1_gshared)(__this, method);
}
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent::get_DefaultInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * DepthMapEvent_get_DefaultInstance_m468BACF0728BE350286EEE6541A5FC48BEE4D1D2_inline (const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/DepthMapEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthMapEvent__ctor_m87C480081AAE442E33C30BF63FC71F72A47EB78A (DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * __this, const RuntimeMethod* method);
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent/Builder::PrepareBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * Builder_PrepareBuilder_m7BAE917FEB78823CC4C7FD5834247F1F32537777 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/DepthMapEvent/Builder::.ctor(proto.PhoneEvent/Types/DepthMapEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m22F95BD87777E0F555A500B9B5E389793D4BF21A (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * ___cloneFrom0, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/DepthMapEvent/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m317E739975BFAC080E721821A4671F0C253F8B56 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, const RuntimeMethod* method);
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent::MakeReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * DepthMapEvent_MakeReadOnly_mEACA3F5DC7E31451D1CB610D19E710713B9CE2D1 (DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * __this, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/DepthMapEvent,proto.PhoneEvent/Types/DepthMapEvent/Builder>::MergeFrom(Google.ProtocolBuffers.IMessageLite)
inline Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * GeneratedBuilderLite_2_MergeFrom_m01DA9562C507B081A600AA8A24362A78F6331C0A (GeneratedBuilderLite_2_t47ABB9A2A99234420D194EB139F96C3DAD790B17 * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	return ((  Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * (*) (GeneratedBuilderLite_2_t47ABB9A2A99234420D194EB139F96C3DAD790B17 *, RuntimeObject*, const RuntimeMethod*))GeneratedBuilderLite_2_MergeFrom_m5CC013F304C8902E9761D27E07045648B3A1C2CD_gshared)(__this, ___other0, method);
}
// System.Boolean proto.PhoneEvent/Types/DepthMapEvent::get_HasTimestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DepthMapEvent_get_HasTimestamp_m0D9A6D1649B89941C31CF1E8BC85FE62E12662BB_inline (DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * __this, const RuntimeMethod* method);
// System.Int64 proto.PhoneEvent/Types/DepthMapEvent::get_Timestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t DepthMapEvent_get_Timestamp_m9F2295F37F13231AE793C81F275C857A17719B74_inline (DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/DepthMapEvent/Builder::set_Timestamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Timestamp_m07CC62ACEE8BE1DCDEDE34DFDF851673A0BF95F2 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Boolean proto.PhoneEvent/Types/DepthMapEvent::get_HasWidth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DepthMapEvent_get_HasWidth_m31A6C65468A11635C166DF5A73B3A6B0E4573FF1_inline (DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * __this, const RuntimeMethod* method);
// System.Int32 proto.PhoneEvent/Types/DepthMapEvent::get_Width()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DepthMapEvent_get_Width_m6522A5C33EFFBDF83573A5EAA5606E9596E34AFF_inline (DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/DepthMapEvent/Builder::set_Width(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Width_mD218805840F38B5925BFE50A9E9541BD13DE431E (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean proto.PhoneEvent/Types/DepthMapEvent::get_HasHeight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DepthMapEvent_get_HasHeight_m88EAFAFD1EA28E27A1330E1FFDD0AD256B24E2F3_inline (DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * __this, const RuntimeMethod* method);
// System.Int32 proto.PhoneEvent/Types/DepthMapEvent::get_Height()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DepthMapEvent_get_Height_mB2A0B6D30EC2A0E2818F0E408198F579C043D0D8_inline (DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/DepthMapEvent/Builder::set_Height(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Height_m1AB3DBEA0791BD339419F0B5EB5F109D14F8EBCA (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 Google.ProtocolBuffers.Collections.PopsicleList`1<System.Single>::get_Count()
inline int32_t PopsicleList_1_get_Count_mE3C43D8A8F72DE905F65EC5581F5E40E50D1B63C (PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 *, const RuntimeMethod*))PopsicleList_1_get_Count_mE3C43D8A8F72DE905F65EC5581F5E40E50D1B63C_gshared)(__this, method);
}
// System.Void Google.ProtocolBuffers.Collections.PopsicleList`1<System.Single>::Add(System.Collections.Generic.IEnumerable`1<!0>)
inline void PopsicleList_1_Add_m3520CDCD790B303679967E7B4FD10724E7D59E14 (PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 *, RuntimeObject*, const RuntimeMethod*))PopsicleList_1_Add_m3520CDCD790B303679967E7B4FD10724E7D59E14_gshared)(__this, ___collection0, method);
}
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::SetTimestamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * Builder_SetTimestamp_m9C0721E035B940B08E1E375A5106A65384F12D95 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, int64_t ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::SetWidth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * Builder_SetWidth_m4E9FA6040B8B0F3C5FA120EDA6BF0B6418794465 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, int32_t ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::SetHeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * Builder_SetHeight_m691254A192E1F45FABF3EE51C4825AC145064283 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 proto.PhoneEvent/Types/DepthMapEvent::get_ZDistancesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DepthMapEvent_get_ZDistancesCount_m26C54143C760A4B422D3277C8242001BC97BA48A (DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * __this, const RuntimeMethod* method);
// System.Single proto.PhoneEvent/Types/DepthMapEvent::GetZDistances(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DepthMapEvent_GetZDistances_m6EB961C96DA158CDCC3F4A2D34583B1A26FD6A01 (DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.Collections.PopsicleList`1<System.Single>::set_Item(System.Int32,!0)
inline void PopsicleList_1_set_Item_mB1BEF45A67FD508B139537A1F492ABE3A9D1E769 (PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	((  void (*) (PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 *, int32_t, float, const RuntimeMethod*))PopsicleList_1_set_Item_mB1BEF45A67FD508B139537A1F492ABE3A9D1E769_gshared)(__this, ___index0, ___value1, method);
}
// System.Void Google.ProtocolBuffers.Collections.PopsicleList`1<System.Single>::Add(!0)
inline void PopsicleList_1_Add_m02EB2B8F8118B6BFDA6308B3078D852A163F53E8 (PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 * __this, float ___item0, const RuntimeMethod* method)
{
	((  void (*) (PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 *, float, const RuntimeMethod*))PopsicleList_1_Add_m02EB2B8F8118B6BFDA6308B3078D852A163F53E8_gshared)(__this, ___item0, method);
}
// System.Void Google.ProtocolBuffers.Collections.PopsicleList`1<System.Single>::Clear()
inline void PopsicleList_1_Clear_m29BCCE5060DC16C5CF51BF5227C8BC6101047A33 (PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 * __this, const RuntimeMethod* method)
{
	((  void (*) (PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 *, const RuntimeMethod*))PopsicleList_1_Clear_m29BCCE5060DC16C5CF51BF5227C8BC6101047A33_gshared)(__this, method);
}
// System.Void Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/GyroscopeEvent,proto.PhoneEvent/Types/GyroscopeEvent/Builder>::.ctor()
inline void GeneratedBuilderLite_2__ctor_m509C28EFE7B402DEAAB6E501F86507BDE40D42DF (GeneratedBuilderLite_2_t811FA5EA40172941BD33D03255BD0C4A1BF48EEA * __this, const RuntimeMethod* method)
{
	((  void (*) (GeneratedBuilderLite_2_t811FA5EA40172941BD33D03255BD0C4A1BF48EEA *, const RuntimeMethod*))GeneratedBuilderLite_2__ctor_m266FD052E0FAEA48FFE6BB592FC9038ACD969EB1_gshared)(__this, method);
}
// proto.PhoneEvent/Types/GyroscopeEvent proto.PhoneEvent/Types/GyroscopeEvent::get_DefaultInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * GyroscopeEvent_get_DefaultInstance_m0F1F859BF40AB538AEA9DC974D471F88DAA3AA02_inline (const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/GyroscopeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroscopeEvent__ctor_m93A5D4796C7DCD1E1525A009A23CC99A97871FE0 (GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * __this, const RuntimeMethod* method);
// proto.PhoneEvent/Types/GyroscopeEvent proto.PhoneEvent/Types/GyroscopeEvent/Builder::PrepareBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * Builder_PrepareBuilder_m9EEB831C2D95D85F3118CFE3575AF01A75EA1DF4 (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/GyroscopeEvent/Builder::.ctor(proto.PhoneEvent/Types/GyroscopeEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m603F0897BEA008ECE02AE2C9E0FFBAD5C55AF290 (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * ___cloneFrom0, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/GyroscopeEvent/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_mB3AB7CE4BDBC86C71FE03F63F606A3907B7A380D (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, const RuntimeMethod* method);
// proto.PhoneEvent/Types/GyroscopeEvent proto.PhoneEvent/Types/GyroscopeEvent::MakeReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * GyroscopeEvent_MakeReadOnly_m892403307C473AF3CBD6E1423C2B18E5BA52F124 (GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * __this, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/GyroscopeEvent,proto.PhoneEvent/Types/GyroscopeEvent/Builder>::MergeFrom(Google.ProtocolBuffers.IMessageLite)
inline Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * GeneratedBuilderLite_2_MergeFrom_m032E96A57ECDFC51F9550E5F5680E93771DB2AB3 (GeneratedBuilderLite_2_t811FA5EA40172941BD33D03255BD0C4A1BF48EEA * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	return ((  Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * (*) (GeneratedBuilderLite_2_t811FA5EA40172941BD33D03255BD0C4A1BF48EEA *, RuntimeObject*, const RuntimeMethod*))GeneratedBuilderLite_2_MergeFrom_m5CC013F304C8902E9761D27E07045648B3A1C2CD_gshared)(__this, ___other0, method);
}
// System.Boolean proto.PhoneEvent/Types/GyroscopeEvent::get_HasTimestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GyroscopeEvent_get_HasTimestamp_m5947FBB22BB057F1D3D3AE28F7587CD836416621_inline (GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * __this, const RuntimeMethod* method);
// System.Int64 proto.PhoneEvent/Types/GyroscopeEvent::get_Timestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t GyroscopeEvent_get_Timestamp_mDAB25E2A5E76FDC59EA0FD52702B79832EBBEA76_inline (GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/GyroscopeEvent/Builder::set_Timestamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Timestamp_m839BD838E91E5BA6F5075309D6837DC67136BB41 (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Boolean proto.PhoneEvent/Types/GyroscopeEvent::get_HasX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GyroscopeEvent_get_HasX_m0D1D5B3C45FD5B63CD4102002CEF6DFF5DC9429F_inline (GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * __this, const RuntimeMethod* method);
// System.Single proto.PhoneEvent/Types/GyroscopeEvent::get_X()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GyroscopeEvent_get_X_mEE8C2D464F76A7BC1B6B1F18EB700E2D2AFB3889_inline (GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/GyroscopeEvent/Builder::set_X(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_X_m1351968A475CFCDF9E14A881E71A1D593E8618AA (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean proto.PhoneEvent/Types/GyroscopeEvent::get_HasY()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GyroscopeEvent_get_HasY_m7AFE8FAA372B82E367C7CD9A1C733665B4E4A096_inline (GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * __this, const RuntimeMethod* method);
// System.Single proto.PhoneEvent/Types/GyroscopeEvent::get_Y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GyroscopeEvent_get_Y_m403E83657F6F879629C375BFB85493CBC38AAAB1_inline (GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/GyroscopeEvent/Builder::set_Y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Y_mCC48430DF59FDD34A168D995B77702DCA1BD7325 (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean proto.PhoneEvent/Types/GyroscopeEvent::get_HasZ()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GyroscopeEvent_get_HasZ_mE0AE126D0B8079FF19FDA3B333E6574A79E31882_inline (GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * __this, const RuntimeMethod* method);
// System.Single proto.PhoneEvent/Types/GyroscopeEvent::get_Z()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GyroscopeEvent_get_Z_mCAB7F3326072E58DCB44F823428D590339D0EFC1_inline (GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/GyroscopeEvent/Builder::set_Z(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Z_m807E7F65FF7B6BD818775FD4B12D025234C1DCB6 (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, float ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::SetTimestamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * Builder_SetTimestamp_mD502BDAD5AF1DBA0AEFEE19C61C8EE5FFB58FB4F (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, int64_t ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::SetX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * Builder_SetX_mD12E10FD4B7A9C1BD1D37F7315B0A2A68072784F (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, float ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::SetY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * Builder_SetY_m1BF7123A9F517E4C06A3E89766EDDC42F00C4FDA (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, float ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::SetZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * Builder_SetZ_m1F85D4961517A7E69A254CEA4B2225D48A21F1EE (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/KeyEvent,proto.PhoneEvent/Types/KeyEvent/Builder>::.ctor()
inline void GeneratedBuilderLite_2__ctor_m61E4509BE2C8EDCEEE4713C2126DB468BF310088 (GeneratedBuilderLite_2_tBB766E92AB4EE14DD2E6768ADADCF48B13DDE02D * __this, const RuntimeMethod* method)
{
	((  void (*) (GeneratedBuilderLite_2_tBB766E92AB4EE14DD2E6768ADADCF48B13DDE02D *, const RuntimeMethod*))GeneratedBuilderLite_2__ctor_m266FD052E0FAEA48FFE6BB592FC9038ACD969EB1_gshared)(__this, method);
}
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::get_DefaultInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * KeyEvent_get_DefaultInstance_m5AC75ECE199AB1662690508B673CF317C7542DDA_inline (const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/KeyEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyEvent__ctor_m3DE2296E5AD3027687D5F1379C2BE813D18D6B66 (KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * __this, const RuntimeMethod* method);
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent/Builder::PrepareBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * Builder_PrepareBuilder_m9072ED8DB4742C981A591AC872838ECD820CB614 (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/KeyEvent/Builder::.ctor(proto.PhoneEvent/Types/KeyEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m3632CCF043CD4CAA8788A31E2AFFC01841FAD6DE (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * ___cloneFrom0, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/KeyEvent/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m3E23B9CB193933E02DB29CF7B16D24893276F02F (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, const RuntimeMethod* method);
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::MakeReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * KeyEvent_MakeReadOnly_m42C228320F567FC84E30D28521B2FD9554C9491B (KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * __this, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/KeyEvent,proto.PhoneEvent/Types/KeyEvent/Builder>::MergeFrom(Google.ProtocolBuffers.IMessageLite)
inline Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * GeneratedBuilderLite_2_MergeFrom_mAE26DA88C1759DA85732893EDCB9A7C46703E50F (GeneratedBuilderLite_2_tBB766E92AB4EE14DD2E6768ADADCF48B13DDE02D * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	return ((  Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * (*) (GeneratedBuilderLite_2_tBB766E92AB4EE14DD2E6768ADADCF48B13DDE02D *, RuntimeObject*, const RuntimeMethod*))GeneratedBuilderLite_2_MergeFrom_m5CC013F304C8902E9761D27E07045648B3A1C2CD_gshared)(__this, ___other0, method);
}
// System.Boolean proto.PhoneEvent/Types/KeyEvent::get_HasAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyEvent_get_HasAction_mAFB7CD8850A0ED2370DDD8671BF3F8EFE3174604_inline (KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * __this, const RuntimeMethod* method);
// System.Int32 proto.PhoneEvent/Types/KeyEvent::get_Action()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyEvent_get_Action_mE0817B592E84C416B271F9B4F2B415453068D24E_inline (KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/KeyEvent/Builder::set_Action(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Action_m4BC426C1D0EE793743A6E219E376DA5FD2FC655B (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean proto.PhoneEvent/Types/KeyEvent::get_HasCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyEvent_get_HasCode_m643FDB361D2519A3E1ADF282184ACE970F405403_inline (KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * __this, const RuntimeMethod* method);
// System.Int32 proto.PhoneEvent/Types/KeyEvent::get_Code()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyEvent_get_Code_m2D69BFE38B5929EAB024E35E90DD626A2A01D5A3_inline (KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/KeyEvent/Builder::set_Code(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Code_mFF1C42647EB46DF4FE30FF6350E2D32A642D067F (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, int32_t ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/KeyEvent/Builder proto.PhoneEvent/Types/KeyEvent/Builder::SetAction(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * Builder_SetAction_mDF1A021E6F88ABF3A3ED23AECCDD888BB0BAD615 (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, int32_t ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/KeyEvent/Builder proto.PhoneEvent/Types/KeyEvent/Builder::SetCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * Builder_SetCode_m882DB4B361FF1F781CA50168E97E373E094F0867 (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent,proto.PhoneEvent/Types/MotionEvent/Builder>::.ctor()
inline void GeneratedBuilderLite_2__ctor_mDDA4587CC7CC1FD23D6A9C169CCFAF348A20672C (GeneratedBuilderLite_2_tAFD62F41883615C90F37345B46DE10B236102BC7 * __this, const RuntimeMethod* method)
{
	((  void (*) (GeneratedBuilderLite_2_tAFD62F41883615C90F37345B46DE10B236102BC7 *, const RuntimeMethod*))GeneratedBuilderLite_2__ctor_m266FD052E0FAEA48FFE6BB592FC9038ACD969EB1_gshared)(__this, method);
}
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::get_DefaultInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * MotionEvent_get_DefaultInstance_mF373AC002EDBB3A90A103DC28039BB2ED4291E44_inline (const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/MotionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionEvent__ctor_m1008B1EC3CB874B458A27C37B1096BD6E04C08BB (MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * __this, const RuntimeMethod* method);
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent/Builder::PrepareBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * Builder_PrepareBuilder_m9B221144D5B54CE617D38A05CA2CCBD8D8374A41 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/MotionEvent/Builder::.ctor(proto.PhoneEvent/Types/MotionEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m0D15C015E2D676B4259FF6298DB142F39C0A1778 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * ___cloneFrom0, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/MotionEvent/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m807A9CD5CBDB4DEA9932C8888CF854B7D915E944 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, const RuntimeMethod* method);
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::MakeReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * MotionEvent_MakeReadOnly_m3E383C57908D879982D00CFA939B703A637F163B (MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * __this, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent,proto.PhoneEvent/Types/MotionEvent/Builder>::MergeFrom(Google.ProtocolBuffers.IMessageLite)
inline Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * GeneratedBuilderLite_2_MergeFrom_mD54454BB926B06D6F7BED729A65E3077DC0C1271 (GeneratedBuilderLite_2_tAFD62F41883615C90F37345B46DE10B236102BC7 * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	return ((  Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * (*) (GeneratedBuilderLite_2_tAFD62F41883615C90F37345B46DE10B236102BC7 *, RuntimeObject*, const RuntimeMethod*))GeneratedBuilderLite_2_MergeFrom_m5CC013F304C8902E9761D27E07045648B3A1C2CD_gshared)(__this, ___other0, method);
}
// System.Boolean proto.PhoneEvent/Types/MotionEvent::get_HasTimestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MotionEvent_get_HasTimestamp_mEF14C6A962AD02AFFBC4477FEC77C4CC709EB7C6_inline (MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * __this, const RuntimeMethod* method);
// System.Int64 proto.PhoneEvent/Types/MotionEvent::get_Timestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t MotionEvent_get_Timestamp_m7B094DC0B3BE702FFDFB21F7E7B03BB45D24C220_inline (MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/MotionEvent/Builder::set_Timestamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Timestamp_m7E430FEC5821E4789B8A01907A02CF6257370A81 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Boolean proto.PhoneEvent/Types/MotionEvent::get_HasAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MotionEvent_get_HasAction_m1C19F376EED271CBBA01698349475528845EAFD0_inline (MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * __this, const RuntimeMethod* method);
// System.Int32 proto.PhoneEvent/Types/MotionEvent::get_Action()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MotionEvent_get_Action_mAE5AB179BB654FC8DA1161BBEA4913C22E8599FD_inline (MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/MotionEvent/Builder::set_Action(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Action_mEB5E09073027B483C078F37328312A7201900760 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 Google.ProtocolBuffers.Collections.PopsicleList`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer>::get_Count()
inline int32_t PopsicleList_1_get_Count_mF2360C487F3B806D6B8D5863B19C3D746E9874A1 (PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB *, const RuntimeMethod*))PopsicleList_1_get_Count_m1D58B39964C437B69DB4C0983F6CF36CF3AD4485_gshared)(__this, method);
}
// System.Void Google.ProtocolBuffers.Collections.PopsicleList`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer>::Add(System.Collections.Generic.IEnumerable`1<!0>)
inline void PopsicleList_1_Add_mFC00286C6B3AB9097A56085772F9A5C62513C9B6 (PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB *, RuntimeObject*, const RuntimeMethod*))PopsicleList_1_Add_m1CD7512D5A2FFF575E89952DCEC0422C8049F343_gshared)(__this, ___collection0, method);
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_DefaultInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_get_DefaultInstance_m62857201F32F992458F0D816DF7B91DEB32AD858_inline (const RuntimeMethod* method);
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::SetTimestamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * Builder_SetTimestamp_m7142D8D87953552549E38114F3AF6FA637949E15 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, int64_t ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::SetAction(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * Builder_SetAction_mF54D7F6E04A5F6E5249B83AF74D623B2B07BDAC3 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 proto.PhoneEvent/Types/MotionEvent::get_PointersCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MotionEvent_get_PointersCount_m549608E861C6481ED192FE8A474180A0CB53561C (MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * __this, const RuntimeMethod* method);
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent::GetPointers(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * MotionEvent_GetPointers_m21408174F32F231B3A9294FA9A6A531405E351D5 (MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.ThrowHelper::ThrowIfNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIfNull_mB38F1A7437B7520460411B3DCA9A068E6BCE62CC (RuntimeObject * ___value0, String_t* ___name1, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.Collections.PopsicleList`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer>::set_Item(System.Int32,!0)
inline void PopsicleList_1_set_Item_m4DD2312A90005595B7AD483EE03762A2E1A5E809 (PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB * __this, int32_t ___index0, Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB *, int32_t, Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 *, const RuntimeMethod*))PopsicleList_1_set_Item_m75697BACCE30504CEA968BADA2C16D6D73E8084E_gshared)(__this, ___index0, ___value1, method);
}
// System.Void Google.ProtocolBuffers.Collections.PopsicleList`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer>::Add(!0)
inline void PopsicleList_1_Add_mBF830C6032B6BBF797AFC55C674F6CDA5C241011 (PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB * __this, Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB *, Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 *, const RuntimeMethod*))PopsicleList_1_Add_m0C8C42256F0546C79822872C690BE46D55CA84F7_gshared)(__this, ___item0, method);
}
// System.Void Google.ProtocolBuffers.Collections.PopsicleList`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer>::Clear()
inline void PopsicleList_1_Clear_mD8CA13514562BEB119AC8409BD1D1B5E08E0A781 (PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB * __this, const RuntimeMethod* method)
{
	((  void (*) (PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB *, const RuntimeMethod*))PopsicleList_1_Clear_m4781AB441594A2D0EF005F3E94F31A8DF17093E1_gshared)(__this, method);
}
// System.Void Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>::.ctor()
inline void GeneratedBuilderLite_2__ctor_mD7325A4241D20915B0AF5874B5C6A4E78E1702E2 (GeneratedBuilderLite_2_tB12EF56175A53FFD1085AEB28087A72447BD4394 * __this, const RuntimeMethod* method)
{
	((  void (*) (GeneratedBuilderLite_2_tB12EF56175A53FFD1085AEB28087A72447BD4394 *, const RuntimeMethod*))GeneratedBuilderLite_2__ctor_m266FD052E0FAEA48FFE6BB592FC9038ACD969EB1_gshared)(__this, method);
}
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent::get_DefaultInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * OrientationEvent_get_DefaultInstance_m7F7CA2111C4A2656195A3465D8D437D1BDD13DAF_inline (const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/OrientationEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrientationEvent__ctor_m858D21EAD1BE4746E2782CE110F79B6FEA0AB232 (OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * __this, const RuntimeMethod* method);
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent/Builder::PrepareBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * Builder_PrepareBuilder_mA352FC4E338560E09465443326518BD7DBF74791 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::.ctor(proto.PhoneEvent/Types/OrientationEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_mA7C4031831251B96E805F3A055FD152C316225FF (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * ___cloneFrom0, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_mD8D39ADD33273A273218742A9468CF0BAC92DE22 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method);
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent::MakeReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * OrientationEvent_MakeReadOnly_m22BF77346F0DE7FC76940BD5B50675542E78A1EC (OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * __this, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>::MergeFrom(Google.ProtocolBuffers.IMessageLite)
inline Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * GeneratedBuilderLite_2_MergeFrom_m97D6A578CACE3131A64EC3A2DBFE7839655EF0B1 (GeneratedBuilderLite_2_tB12EF56175A53FFD1085AEB28087A72447BD4394 * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	return ((  Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * (*) (GeneratedBuilderLite_2_tB12EF56175A53FFD1085AEB28087A72447BD4394 *, RuntimeObject*, const RuntimeMethod*))GeneratedBuilderLite_2_MergeFrom_m5CC013F304C8902E9761D27E07045648B3A1C2CD_gshared)(__this, ___other0, method);
}
// System.Boolean proto.PhoneEvent/Types/OrientationEvent::get_HasTimestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OrientationEvent_get_HasTimestamp_m670BCC950048EAC6D2A0E8E7D8A9F750255D7256_inline (OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * __this, const RuntimeMethod* method);
// System.Int64 proto.PhoneEvent/Types/OrientationEvent::get_Timestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t OrientationEvent_get_Timestamp_m1A50AD89E5A365F7D8C6D892814043ABAA79437A_inline (OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_Timestamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Timestamp_mD23AD3789B4A8785296691413CC9AFCD5BFC189C (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Boolean proto.PhoneEvent/Types/OrientationEvent::get_HasX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OrientationEvent_get_HasX_m9F2E62F7D48D89695C0BBC323096CF9C77E0EDEA_inline (OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * __this, const RuntimeMethod* method);
// System.Single proto.PhoneEvent/Types/OrientationEvent::get_X()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float OrientationEvent_get_X_m25A06C66CFED0D61CCAB87CCA73D5F292596486D_inline (OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_X(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_X_mB108A19EAE9E9C45634775B3522724193455C19D (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean proto.PhoneEvent/Types/OrientationEvent::get_HasY()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OrientationEvent_get_HasY_m03F79AB04C52BA358A202470F7D7FD0E083BEE5A_inline (OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * __this, const RuntimeMethod* method);
// System.Single proto.PhoneEvent/Types/OrientationEvent::get_Y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float OrientationEvent_get_Y_mA374E18FAAE6B43C0CDC6344D1329F8188370851_inline (OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_Y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Y_mC49132252BAFD408B0C607D9F4BE84565284FCBD (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean proto.PhoneEvent/Types/OrientationEvent::get_HasZ()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OrientationEvent_get_HasZ_m7D3F9E83BF8B5C1556FF972DBFBACE03808FA69D_inline (OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * __this, const RuntimeMethod* method);
// System.Single proto.PhoneEvent/Types/OrientationEvent::get_Z()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float OrientationEvent_get_Z_mAA6B77185DADDE06F680E8CD0BE5603C9D0248DB_inline (OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_Z(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Z_m12084CF715A90BF11825FC5FB50CE66202B27234 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean proto.PhoneEvent/Types/OrientationEvent::get_HasW()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OrientationEvent_get_HasW_mAEB432A9932CB21C56EEE329515EA8ECED4B0DE8_inline (OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * __this, const RuntimeMethod* method);
// System.Single proto.PhoneEvent/Types/OrientationEvent::get_W()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float OrientationEvent_get_W_m92B97B423C7EB15D87A0468F561134BB8AEC1F83_inline (OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_W(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_W_m912416D81C43FAC3AA985BA0CE01C8DB6BD4CB2A (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, float ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetTimestamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * Builder_SetTimestamp_m7B214E6A61E60FB6CF23CEB0DA19DB2F2D0BA9D3 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, int64_t ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * Builder_SetX_m7073CC92FDF2FDA20A93F51C8F6F979BEFD66597 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, float ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * Builder_SetY_m0ADBF3FF4C951314B46EDA27B1CB040482DCE474 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, float ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * Builder_SetZ_mA1C11DCA98B3DFF73D6D86C27900AAF688CB8527 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, float ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetW(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * Builder_SetW_m4299A8DF8239177D6648DD50490BC44D09BF3C42 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, float ___value0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.GeneratedMessageLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::.ctor()
inline void GeneratedMessageLite_2__ctor_mB94010B443D2F8CACD70FB9DE924F5CBC6FD8E7B (GeneratedMessageLite_2_t82DB2ACD6D40D03C3414CF8083201076C2B10FEB * __this, const RuntimeMethod* method)
{
	((  void (*) (GeneratedMessageLite_2_t82DB2ACD6D40D03C3414CF8083201076C2B10FEB *, const RuntimeMethod*))GeneratedMessageLite_2__ctor_mE5B581A70266A72E74F977007197FE5C905D2C8A_gshared)(__this, method);
}
// System.Int32 proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pointer_get_Id_m0653E09B9E6A7D4F25CE204832027A4A3521BC27_inline (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method);
// System.Single proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_NormalizedX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Pointer_get_NormalizedX_m2E5C629CC71F370D7A8A97B4761AB801FFA3AFA6_inline (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method);
// System.Single proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_NormalizedY()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Pointer_get_NormalizedY_m319304960B30857DB5AA2332C86737F91368B776_inline (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method);
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeInt32Size(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeInt32Size_mAD9DFDB7A7F0A5C37E8B3807D781C34813AC0A42 (int32_t ___fieldNumber0, int32_t ___value1, const RuntimeMethod* method);
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeFloatSize(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeFloatSize_mBAE0E51F69F52D5A816258D7069EBFC08FA48E81 (int32_t ___fieldNumber0, float ___value1, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9 (float* __this, const RuntimeMethod* method);
// System.Boolean System.Int32::Equals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4 (int32_t* __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914 (float* __this, float ___obj0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.GeneratedMessageLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::PrintField(System.String,System.Boolean,System.Object,System.IO.TextWriter)
inline void GeneratedMessageLite_2_PrintField_m638873B95E598C7021E09266718B2CF1107340CC (String_t* ___name0, bool ___hasValue1, RuntimeObject * ___value2, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___writer3, const RuntimeMethod* method)
{
	((  void (*) (String_t*, bool, RuntimeObject *, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 *, const RuntimeMethod*))GeneratedMessageLite_2_PrintField_m7BA730CA3507981347F811E40239ED25469B03EA_gshared)(___name0, ___hasValue1, ___value2, ___writer3, method);
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer::CreateBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Pointer_CreateBuilder_mC834A6424E0597A5CF4FD5C6A15101F0A4586AA4 (const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(Google.ProtocolBuffers.ByteString)
inline Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * AbstractBuilderLite_2_MergeFrom_m077F8BDC9A40BD2744DA305716D47D7FD4C02BE5 (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 * __this, ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * ___data0, const RuntimeMethod* method)
{
	return ((  Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * (*) (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 *, ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 *, const RuntimeMethod*))AbstractBuilderLite_2_MergeFrom_m848932FDF05B22660AC4A0B75F76E7E21F2DEBA5_gshared)(__this, ___data0, method);
}
// !0 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::BuildParsed()
inline Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC (GeneratedBuilderLite_2_t4CCAA45209A9F62F93E7444CEE497A4FF30A8397 * __this, const RuntimeMethod* method)
{
	return ((  Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * (*) (GeneratedBuilderLite_2_t4CCAA45209A9F62F93E7444CEE497A4FF30A8397 *, const RuntimeMethod*))GeneratedBuilderLite_2_BuildParsed_m19741B951A04F2AB187F1B591BEB8016710CE512_gshared)(__this, method);
}
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(Google.ProtocolBuffers.ByteString,Google.ProtocolBuffers.ExtensionRegistry)
inline Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * AbstractBuilderLite_2_MergeFrom_mBFA22BE8CEA616188C6E7F55E6174E39563EC193 (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 * __this, ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * ___data0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	return ((  Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * (*) (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 *, ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 *, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *, const RuntimeMethod*))AbstractBuilderLite_2_MergeFrom_mD4BD3E78EB6B9100B6A89BB1C2C100F41683662A_gshared)(__this, ___data0, ___extensionRegistry1, method);
}
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(System.Byte[])
inline Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * AbstractBuilderLite_2_MergeFrom_mA162BF3102EA42D62F2EA3BC70A44C54C341464B (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	return ((  Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * (*) (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))AbstractBuilderLite_2_MergeFrom_mF29F5E9CAD54CF80D81CC9B39FA5CA7C9A7FD833_gshared)(__this, ___data0, method);
}
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(System.Byte[],Google.ProtocolBuffers.ExtensionRegistry)
inline Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * AbstractBuilderLite_2_MergeFrom_mF36F3941940332A01B21431C4BC0783BC925C1DC (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	return ((  Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * (*) (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *, const RuntimeMethod*))AbstractBuilderLite_2_MergeFrom_m155751DE6A8DFC5EA4AE26ED07717B578C1F9ADD_gshared)(__this, ___data0, ___extensionRegistry1, method);
}
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(System.IO.Stream)
inline Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * AbstractBuilderLite_2_MergeFrom_m9E6216E1C08706C3E61356A7FB9A3FB0E52E2666 (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, const RuntimeMethod* method)
{
	return ((  Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * (*) (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 *, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, const RuntimeMethod*))AbstractBuilderLite_2_MergeFrom_m60F21E4382A29C32A7524BC37C304A61192D30B9_gshared)(__this, ___input0, method);
}
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
inline Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * AbstractBuilderLite_2_MergeFrom_mF34461DF32719A18A93F56C01A45DB0C65FB1645 (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	return ((  Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * (*) (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 *, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *, const RuntimeMethod*))AbstractBuilderLite_2_MergeFrom_m5A1CEB9EF2C6BB405AEA1D2C32EC250FEDDE16A9_gshared)(__this, ___input0, ___extensionRegistry1, method);
}
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeDelimitedFrom(System.IO.Stream)
inline Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * AbstractBuilderLite_2_MergeDelimitedFrom_m8C049EEE34F924B068109BA2019AC2F28D765D2D (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, const RuntimeMethod* method)
{
	return ((  Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * (*) (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 *, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, const RuntimeMethod*))AbstractBuilderLite_2_MergeDelimitedFrom_m2CA5822E4FFA2F314454B2F84AEB525060BB5438_gshared)(__this, ___input0, method);
}
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeDelimitedFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
inline Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * AbstractBuilderLite_2_MergeDelimitedFrom_mDBA09B0371D1C1CBA64A902149E769C909F0757D (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	return ((  Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * (*) (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 *, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *, const RuntimeMethod*))AbstractBuilderLite_2_MergeDelimitedFrom_m0F0CC577C1D8C8D811FE68EF6772C21FB997D893_gshared)(__this, ___input0, ___extensionRegistry1, method);
}
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m0F5662CB752C8E24CA5919B00DD8448BB5F3178D (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method);
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer::CreateBuilder(proto.PhoneEvent/Types/MotionEvent/Types/Pointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Pointer_CreateBuilder_m0C934B225543E91863BFE8AFEBD8B212895987C3 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * ___prototype0, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::.ctor(proto.PhoneEvent/Types/MotionEvent/Types/Pointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m62919A1AA6A43B109F8D54FA56AAE25655CB7DC9 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * ___cloneFrom0, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer__ctor_mF32878B422D6F99E201063667223F5AC7DF91587 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method);
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::MakeReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_MakeReadOnly_m23A966E507120B3C30E8EC13AFE836C7C1DEDE5C (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::.ctor()
inline void GeneratedBuilderLite_2__ctor_m4D600BF5EDC880CCB2785A4CCCC95932A065C7D7 (GeneratedBuilderLite_2_t4CCAA45209A9F62F93E7444CEE497A4FF30A8397 * __this, const RuntimeMethod* method)
{
	((  void (*) (GeneratedBuilderLite_2_t4CCAA45209A9F62F93E7444CEE497A4FF30A8397 *, const RuntimeMethod*))GeneratedBuilderLite_2__ctor_m266FD052E0FAEA48FFE6BB592FC9038ACD969EB1_gshared)(__this, method);
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::PrepareBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Builder_PrepareBuilder_mD44AF9B90DA9836BEB57B0D32686E438F0FF51DD (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(Google.ProtocolBuffers.IMessageLite)
inline Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * GeneratedBuilderLite_2_MergeFrom_mFE12F3933FE4756BAEAA2465FA6F5E9C5DE72A77 (GeneratedBuilderLite_2_t4CCAA45209A9F62F93E7444CEE497A4FF30A8397 * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	return ((  Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * (*) (GeneratedBuilderLite_2_t4CCAA45209A9F62F93E7444CEE497A4FF30A8397 *, RuntimeObject*, const RuntimeMethod*))GeneratedBuilderLite_2_MergeFrom_m5CC013F304C8902E9761D27E07045648B3A1C2CD_gshared)(__this, ___other0, method);
}
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_HasId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Pointer_get_HasId_mFDC4D68483FBC3715FB3E435E7878AC5736F9BB9_inline (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::set_Id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Id_m60C9EB5A23AE4D14FC9A8CF7674AA9A311293151 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_HasNormalizedX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Pointer_get_HasNormalizedX_mF40107BFF8BC8A039179BE59D6F492078864DEE8_inline (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::set_NormalizedX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_NormalizedX_mC9705363CB6D83EC4895422AF010D922F0AD8D75 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_HasNormalizedY()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Pointer_get_HasNormalizedY_mAAF0E62830392472F09B8A85CD52337CD5FDC696_inline (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::set_NormalizedY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_NormalizedY_mB758ED8B16591A5215801E63E21FADDA17916C21 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, float ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::SetId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_SetId_m2BBB18A8949AE3D29C3FEB40F8C9E7BECC9F8840 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, int32_t ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::SetNormalizedX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_SetNormalizedX_mABF34CEC072FA7F565FDB22FDB5B2A61ED612218 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, float ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::SetNormalizedY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_SetNormalizedY_m58BDA533CBAD2377DE98C21A7AD316308C50D721 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, float ___value0, const RuntimeMethod* method);
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
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_ThisBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * Builder_get_ThisBuilder_mC3B18CFF4EAECD8C51966CC411C5547B143332D5 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, const RuntimeMethod* method)
{
	{
		// get { return this; }
		return __this;
	}
}
// System.Void proto.PhoneEvent/Types/AccelerometerEvent/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m7FC63D2D73E39D4CCFD43FDE402624036EC3979C (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2__ctor_m74D649FCF418A76D77A171C1E9BACA82B773EBD5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Builder() {
		GeneratedBuilderLite_2__ctor_m74D649FCF418A76D77A171C1E9BACA82B773EBD5(__this, /*hidden argument*/GeneratedBuilderLite_2__ctor_m74D649FCF418A76D77A171C1E9BACA82B773EBD5_RuntimeMethod_var);
		// result = DefaultInstance;
		IL2CPP_RUNTIME_CLASS_INIT(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_il2cpp_TypeInfo_var);
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_0;
		L_0 = AccelerometerEvent_get_DefaultInstance_m6971C75D8BBDDD9BA5872D8742E9F25197263661_inline(/*hidden argument*/NULL);
		__this->set_result_1(L_0);
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// }
		return;
	}
}
// System.Void proto.PhoneEvent/Types/AccelerometerEvent/Builder::.ctor(proto.PhoneEvent/Types/AccelerometerEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_mB79E573B8F489D84D007C9B29CA39C031217D8C1 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * ___cloneFrom0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2__ctor_m74D649FCF418A76D77A171C1E9BACA82B773EBD5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal Builder(AccelerometerEvent cloneFrom) {
		GeneratedBuilderLite_2__ctor_m74D649FCF418A76D77A171C1E9BACA82B773EBD5(__this, /*hidden argument*/GeneratedBuilderLite_2__ctor_m74D649FCF418A76D77A171C1E9BACA82B773EBD5_RuntimeMethod_var);
		// result = cloneFrom;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_0 = ___cloneFrom0;
		__this->set_result_1(L_0);
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// }
		return;
	}
}
// proto.PhoneEvent/Types/AccelerometerEvent proto.PhoneEvent/Types/AccelerometerEvent/Builder::PrepareBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * Builder_PrepareBuilder_mB2E64B032190F0128D5579316847BC8A3A48DB19 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * V_0 = NULL;
	{
		// if (resultIsReadOnly) {
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// AccelerometerEvent original = result;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_1 = __this->get_result_1();
		V_0 = L_1;
		// result = new AccelerometerEvent();
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_2 = (AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA *)il2cpp_codegen_object_new(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_il2cpp_TypeInfo_var);
		AccelerometerEvent__ctor_mCE2AF92260CB6460D3EA568EB7099941CB74EAE3(L_2, /*hidden argument*/NULL);
		__this->set_result_1(L_2);
		// resultIsReadOnly = false;
		__this->set_resultIsReadOnly_0((bool)0);
		// MergeFrom(original);
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_3 = V_0;
		Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * L_4;
		L_4 = VirtFuncInvoker1< Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 *, AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/AccelerometerEvent,proto.PhoneEvent/Types/AccelerometerEvent/Builder>::MergeFrom(!0) */, __this, L_3);
	}

IL_0029:
	{
		// return result;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_5 = __this->get_result_1();
		return L_5;
	}
}
// System.Boolean proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_IsInitialized_m9B8E5487B114DA63BFC9E1800342A4173BA5B7AD (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.IsInitialized; }
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean Google.ProtocolBuffers.AbstractMessageLite`2<proto.PhoneEvent/Types/AccelerometerEvent,proto.PhoneEvent/Types/AccelerometerEvent/Builder>::get_IsInitialized() */, L_0);
		return L_1;
	}
}
// proto.PhoneEvent/Types/AccelerometerEvent proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_MessageBeingBuilt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * Builder_get_MessageBeingBuilt_mB5B327997961217B8F47C0C0D687B1D7CF953F11 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, const RuntimeMethod* method)
{
	{
		// get { return PrepareBuilder(); }
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_0;
		L_0 = Builder_PrepareBuilder_mB2E64B032190F0128D5579316847BC8A3A48DB19(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * Builder_Clear_m53BB502F8FE424461FC2CE3D0D5597C2980E8956 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// result = DefaultInstance;
		IL2CPP_RUNTIME_CLASS_INIT(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_il2cpp_TypeInfo_var);
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_0;
		L_0 = AccelerometerEvent_get_DefaultInstance_m6971C75D8BBDDD9BA5872D8742E9F25197263661_inline(/*hidden argument*/NULL);
		__this->set_result_1(L_0);
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * Builder_Clone_mDAA63355D6E17BD870233424D9D9131A82ACDDC3 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (resultIsReadOnly) {
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Builder(result);
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_1 = __this->get_result_1();
		Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * L_2 = (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 *)il2cpp_codegen_object_new(Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1_il2cpp_TypeInfo_var);
		Builder__ctor_mB79E573B8F489D84D007C9B29CA39C031217D8C1(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		// return new Builder().MergeFrom(result);
		Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * L_3 = (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 *)il2cpp_codegen_object_new(Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1_il2cpp_TypeInfo_var);
		Builder__ctor_m7FC63D2D73E39D4CCFD43FDE402624036EC3979C(L_3, /*hidden argument*/NULL);
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_4 = __this->get_result_1();
		NullCheck(L_3);
		Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * L_5;
		L_5 = VirtFuncInvoker1< Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 *, AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/AccelerometerEvent,proto.PhoneEvent/Types/AccelerometerEvent/Builder>::MergeFrom(!0) */, L_3, L_4);
		return L_5;
	}
}
// proto.PhoneEvent/Types/AccelerometerEvent proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_DefaultInstanceForType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * Builder_get_DefaultInstanceForType_m44912E02B51FF1BD5F395E8F7E8DB50BE5997656 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return global::proto.PhoneEvent.Types.AccelerometerEvent.DefaultInstance; }
		IL2CPP_RUNTIME_CLASS_INIT(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_il2cpp_TypeInfo_var);
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_0;
		L_0 = AccelerometerEvent_get_DefaultInstance_m6971C75D8BBDDD9BA5872D8742E9F25197263661_inline(/*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/AccelerometerEvent proto.PhoneEvent/Types/AccelerometerEvent/Builder::BuildPartial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * Builder_BuildPartial_mF1B803DCD14C3AAB486298080DC2C26CBE8AB093 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, const RuntimeMethod* method)
{
	{
		// if (resultIsReadOnly) {
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return result;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_1 = __this->get_result_1();
		return L_1;
	}

IL_000f:
	{
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// return result.MakeReadOnly();
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_2 = __this->get_result_1();
		NullCheck(L_2);
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_3;
		L_3 = AccelerometerEvent_MakeReadOnly_m374134393A8A8A81861F06BAC6D4805EAA421E3E(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::MergeFrom(Google.ProtocolBuffers.IMessageLite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * Builder_MergeFrom_mD69FF4AB78F69D5A4AFB6024F680F97957FE80FF (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_MergeFrom_mA237D82615DE1B46C35392FAFBE3754B13024867_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other is AccelerometerEvent) {
		RuntimeObject* L_0 = ___other0;
		if (!((AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA *)IsInstSealed((RuntimeObject*)L_0, AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		// return MergeFrom((AccelerometerEvent) other);
		RuntimeObject* L_1 = ___other0;
		Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * L_2;
		L_2 = VirtFuncInvoker1< Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 *, AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/AccelerometerEvent,proto.PhoneEvent/Types/AccelerometerEvent/Builder>::MergeFrom(!0) */, __this, ((AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA *)CastclassSealed((RuntimeObject*)L_1, AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0015:
	{
		// base.MergeFrom(other);
		RuntimeObject* L_3 = ___other0;
		Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * L_4;
		L_4 = GeneratedBuilderLite_2_MergeFrom_mA237D82615DE1B46C35392FAFBE3754B13024867(__this, L_3, /*hidden argument*/GeneratedBuilderLite_2_MergeFrom_mA237D82615DE1B46C35392FAFBE3754B13024867_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::MergeFrom(proto.PhoneEvent/Types/AccelerometerEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * Builder_MergeFrom_m5EEAB5C8C4639886AA28835FD057DB52E712CC80 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other == global::proto.PhoneEvent.Types.AccelerometerEvent.DefaultInstance) return this;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_0 = ___other0;
		IL2CPP_RUNTIME_CLASS_INIT(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_il2cpp_TypeInfo_var);
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_1;
		L_1 = AccelerometerEvent_get_DefaultInstance_m6971C75D8BBDDD9BA5872D8742E9F25197263661_inline(/*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA *)L_0) == ((RuntimeObject*)(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA *)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// if (other == global::proto.PhoneEvent.Types.AccelerometerEvent.DefaultInstance) return this;
		return __this;
	}

IL_000a:
	{
		// PrepareBuilder();
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_2;
		L_2 = Builder_PrepareBuilder_mB2E64B032190F0128D5579316847BC8A3A48DB19(__this, /*hidden argument*/NULL);
		// if (other.HasTimestamp) {
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_3 = ___other0;
		NullCheck(L_3);
		bool L_4;
		L_4 = AccelerometerEvent_get_HasTimestamp_m1A2FD1A59501CFF9D672F81693CE4A6B38371F72_inline(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// Timestamp = other.Timestamp;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_5 = ___other0;
		NullCheck(L_5);
		int64_t L_6;
		L_6 = AccelerometerEvent_get_Timestamp_m34C037F8E45E33E6529632BD72029DEE677CFFBA_inline(L_5, /*hidden argument*/NULL);
		Builder_set_Timestamp_m869BB2D0DFF8D3E42A73E26BCD3EDE47237C2B8D(__this, L_6, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// if (other.HasX) {
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_7 = ___other0;
		NullCheck(L_7);
		bool L_8;
		L_8 = AccelerometerEvent_get_HasX_mB86F6DCB228C6C9C6F6E4DEF6D34BF831F155F86_inline(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		// X = other.X;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_9 = ___other0;
		NullCheck(L_9);
		float L_10;
		L_10 = AccelerometerEvent_get_X_m1135BF88034276286CECDCFF203AFD647773DF59_inline(L_9, /*hidden argument*/NULL);
		Builder_set_X_m1AB7F2C53028312B24925CD0CCDB46C6FB35AD63(__this, L_10, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// if (other.HasY) {
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_11 = ___other0;
		NullCheck(L_11);
		bool L_12;
		L_12 = AccelerometerEvent_get_HasY_m6E67B35C0E6A0149AE67513B750FB54B048CDBE6_inline(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		// Y = other.Y;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_13 = ___other0;
		NullCheck(L_13);
		float L_14;
		L_14 = AccelerometerEvent_get_Y_m27AC19083EBF55AF9B7D13811DEB89A91BF24A0B_inline(L_13, /*hidden argument*/NULL);
		Builder_set_Y_m912332D31497BCA8827C978AA8111914D7F99442(__this, L_14, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// if (other.HasZ) {
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_15 = ___other0;
		NullCheck(L_15);
		bool L_16;
		L_16 = AccelerometerEvent_get_HasZ_m68A704A55BA221B436A922D9E1E1501249AEA7F3_inline(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0061;
		}
	}
	{
		// Z = other.Z;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_17 = ___other0;
		NullCheck(L_17);
		float L_18;
		L_18 = AccelerometerEvent_get_Z_mC8C037719C5E02E507A114C54E6A74C983627D0E_inline(L_17, /*hidden argument*/NULL);
		Builder_set_Z_mF6ED1538B9E60FA27B6100E8503C68846EC23D48(__this, L_18, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * Builder_MergeFrom_mE15E40AD43380234A5ADCE6AB58C7921411EB4D8 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, RuntimeObject* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return MergeFrom(input, pb::ExtensionRegistry.Empty);
		RuntimeObject* L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_1;
		L_1 = ExtensionRegistry_get_Empty_mC0CEC24AC7345586186C0641D64BAAC63413DAA9_inline(/*hidden argument*/NULL);
		Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * L_2;
		L_2 = VirtFuncInvoker2< Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 *, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * >::Invoke(15 /* !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/AccelerometerEvent,proto.PhoneEvent/Types/AccelerometerEvent/Builder>::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry) */, __this, L_0, L_1);
		return L_2;
	}
}
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * Builder_MergeFrom_mEF631AE74750AAD3265232D34A958CD55CA88013 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, RuntimeObject* ___input0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// PrepareBuilder();
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_0;
		L_0 = Builder_PrepareBuilder_mB2E64B032190F0128D5579316847BC8A3A48DB19(__this, /*hidden argument*/NULL);
		goto IL_00f2;
	}

IL_000c:
	{
		// if(tag == 0 && field_name != null) {
		uint32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		// int field_ordinal = global::System.Array.BinarySearch(_accelerometerEventFieldNames, field_name, global::System.StringComparer.Ordinal);
		IL2CPP_RUNTIME_CLASS_INIT(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ((AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_StaticFields*)il2cpp_codegen_static_fields_for(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_il2cpp_TypeInfo_var))->get__accelerometerEventFieldNames_1();
		String_t* L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_5;
		L_5 = StringComparer_get_Ordinal_mF3B6370BEBD77351DB5218C867DCD669C47B8812_inline(/*hidden argument*/NULL);
		int32_t L_6;
		L_6 = Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD(L_3, L_4, L_5, /*hidden argument*/Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD_RuntimeMethod_var);
		V_2 = L_6;
		// if(field_ordinal >= 0)
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		// tag = _accelerometerEventFieldTags[field_ordinal];
		IL2CPP_RUNTIME_CLASS_INIT(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_8 = ((AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_StaticFields*)il2cpp_codegen_static_fields_for(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_il2cpp_TypeInfo_var))->get__accelerometerEventFieldTags_2();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = L_11;
		goto IL_0041;
	}

IL_0031:
	{
		// ParseUnknownField(input, extensionRegistry, tag, field_name);
		RuntimeObject* L_12 = ___input0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_13 = ___extensionRegistry1;
		uint32_t L_14 = V_0;
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = VirtFuncInvoker4< bool, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *, uint32_t, String_t* >::Invoke(27 /* System.Boolean Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/AccelerometerEvent,proto.PhoneEvent/Types/AccelerometerEvent/Builder>::ParseUnknownField(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry,System.UInt32,System.String) */, __this, L_12, L_13, L_14, L_15);
		// continue;
		goto IL_00f2;
	}

IL_0041:
	{
		uint32_t L_17 = V_0;
		if ((!(((uint32_t)L_17) <= ((uint32_t)8))))
		{
			goto IL_004e;
		}
	}
	{
		uint32_t L_18 = V_0;
		if (!L_18)
		{
			goto IL_005f;
		}
	}
	{
		uint32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)8)))
		{
			goto IL_007c;
		}
	}
	{
		goto IL_0065;
	}

IL_004e:
	{
		uint32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)21))))
		{
			goto IL_009a;
		}
	}
	{
		uint32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)29))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)37))))
		{
			goto IL_00d6;
		}
	}
	{
		goto IL_0065;
	}

IL_005f:
	{
		// throw pb::InvalidProtocolBufferException.InvalidTag();
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_23;
		L_23 = InvalidProtocolBufferException_InvalidTag_m2B39E4AEE6E6B4DE200ED9B10F0128F140ADAF88(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Builder_MergeFrom_mEF631AE74750AAD3265232D34A958CD55CA88013_RuntimeMethod_var)));
	}

IL_0065:
	{
		// if (pb::WireFormat.IsEndGroupTag(tag)) {
		uint32_t L_24 = V_0;
		bool L_25;
		L_25 = WireFormat_IsEndGroupTag_mB577CA68ED4BEFC51C8E72F58E018D921140D929(L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_006f;
		}
	}
	{
		// return this;
		return __this;
	}

IL_006f:
	{
		// ParseUnknownField(input, extensionRegistry, tag, field_name);
		RuntimeObject* L_26 = ___input0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_27 = ___extensionRegistry1;
		uint32_t L_28 = V_0;
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = VirtFuncInvoker4< bool, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *, uint32_t, String_t* >::Invoke(27 /* System.Boolean Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/AccelerometerEvent,proto.PhoneEvent/Types/AccelerometerEvent/Builder>::ParseUnknownField(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry,System.UInt32,System.String) */, __this, L_26, L_27, L_28, L_29);
		// break;
		goto IL_00f2;
	}

IL_007c:
	{
		// result.hasTimestamp = input.ReadInt64(ref result.timestamp_);
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_31 = __this->get_result_1();
		RuntimeObject* L_32 = ___input0;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_33 = __this->get_result_1();
		NullCheck(L_33);
		int64_t* L_34 = L_33->get_address_of_timestamp__5();
		NullCheck(L_32);
		bool L_35;
		L_35 = InterfaceFuncInvoker1< bool, int64_t* >::Invoke(2 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadInt64(System.Int64&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_32, (int64_t*)L_34);
		NullCheck(L_31);
		L_31->set_hasTimestamp_4(L_35);
		// break;
		goto IL_00f2;
	}

IL_009a:
	{
		// result.hasX = input.ReadFloat(ref result.x_);
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_36 = __this->get_result_1();
		RuntimeObject* L_37 = ___input0;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_38 = __this->get_result_1();
		NullCheck(L_38);
		float* L_39 = L_38->get_address_of_x__8();
		NullCheck(L_37);
		bool L_40;
		L_40 = InterfaceFuncInvoker1< bool, float* >::Invoke(1 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadFloat(System.Single&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_37, (float*)L_39);
		NullCheck(L_36);
		L_36->set_hasX_7(L_40);
		// break;
		goto IL_00f2;
	}

IL_00b8:
	{
		// result.hasY = input.ReadFloat(ref result.y_);
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_41 = __this->get_result_1();
		RuntimeObject* L_42 = ___input0;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_43 = __this->get_result_1();
		NullCheck(L_43);
		float* L_44 = L_43->get_address_of_y__11();
		NullCheck(L_42);
		bool L_45;
		L_45 = InterfaceFuncInvoker1< bool, float* >::Invoke(1 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadFloat(System.Single&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_42, (float*)L_44);
		NullCheck(L_41);
		L_41->set_hasY_10(L_45);
		// break;
		goto IL_00f2;
	}

IL_00d6:
	{
		// result.hasZ = input.ReadFloat(ref result.z_);
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_46 = __this->get_result_1();
		RuntimeObject* L_47 = ___input0;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_48 = __this->get_result_1();
		NullCheck(L_48);
		float* L_49 = L_48->get_address_of_z__14();
		NullCheck(L_47);
		bool L_50;
		L_50 = InterfaceFuncInvoker1< bool, float* >::Invoke(1 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadFloat(System.Single&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_47, (float*)L_49);
		NullCheck(L_46);
		L_46->set_hasZ_13(L_50);
	}

IL_00f2:
	{
		// while (input.ReadTag(out tag, out field_name)) {
		RuntimeObject* L_51 = ___input0;
		NullCheck(L_51);
		bool L_52;
		L_52 = InterfaceFuncInvoker2< bool, uint32_t*, String_t** >::Invoke(0 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadTag(System.UInt32&,System.String&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_51, (uint32_t*)(&V_0), (String_t**)(&V_1));
		if (L_52)
		{
			goto IL_000c;
		}
	}
	{
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_HasTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasTimestamp_m8E2085412BCEAA091BD4805C43E44F78F1734EAB (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasTimestamp; }
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasTimestamp_4();
		return L_1;
	}
}
// System.Int64 proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_Timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Builder_get_Timestamp_mDB9A87FD176AB6099486AFBE64E05096CE6F3207 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.Timestamp; }
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_0 = __this->get_result_1();
		NullCheck(L_0);
		int64_t L_1;
		L_1 = AccelerometerEvent_get_Timestamp_m34C037F8E45E33E6529632BD72029DEE677CFFBA_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/AccelerometerEvent/Builder::set_Timestamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Timestamp_m869BB2D0DFF8D3E42A73E26BCD3EDE47237C2B8D (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// set { SetTimestamp(value); }
		int64_t L_0 = ___value0;
		Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * L_1;
		L_1 = Builder_SetTimestamp_m90A517613D2E4FD5F7948F9222DD3FE1D56F35E0(__this, L_0, /*hidden argument*/NULL);
		// set { SetTimestamp(value); }
		return;
	}
}
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::SetTimestamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * Builder_SetTimestamp_m90A517613D2E4FD5F7948F9222DD3FE1D56F35E0 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_0;
		L_0 = Builder_PrepareBuilder_mB2E64B032190F0128D5579316847BC8A3A48DB19(__this, /*hidden argument*/NULL);
		// result.hasTimestamp = true;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasTimestamp_4((bool)1);
		// result.timestamp_ = value;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_2 = __this->get_result_1();
		int64_t L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_timestamp__5(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::ClearTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * Builder_ClearTimestamp_m7B3503784366B37E3D165A017E88B94F312992DB (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_0;
		L_0 = Builder_PrepareBuilder_mB2E64B032190F0128D5579316847BC8A3A48DB19(__this, /*hidden argument*/NULL);
		// result.hasTimestamp = false;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasTimestamp_4((bool)0);
		// result.timestamp_ = 0L;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_timestamp__5(((int64_t)((int64_t)0)));
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_HasX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasX_m69F8D89EEB5182D8C06BB13965D7EED6F777D2BB (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasX; }
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasX_7();
		return L_1;
	}
}
// System.Single proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Builder_get_X_mD0414CF269D705520E4AE952A0E181A31A84FD83 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.X; }
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_0 = __this->get_result_1();
		NullCheck(L_0);
		float L_1;
		L_1 = AccelerometerEvent_get_X_m1135BF88034276286CECDCFF203AFD647773DF59_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/AccelerometerEvent/Builder::set_X(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_X_m1AB7F2C53028312B24925CD0CCDB46C6FB35AD63 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { SetX(value); }
		float L_0 = ___value0;
		Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * L_1;
		L_1 = Builder_SetX_m81AB6C320D654C766C8CDCFD9D9D0BC1FBBFB7C2(__this, L_0, /*hidden argument*/NULL);
		// set { SetX(value); }
		return;
	}
}
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::SetX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * Builder_SetX_m81AB6C320D654C766C8CDCFD9D9D0BC1FBBFB7C2 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_0;
		L_0 = Builder_PrepareBuilder_mB2E64B032190F0128D5579316847BC8A3A48DB19(__this, /*hidden argument*/NULL);
		// result.hasX = true;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasX_7((bool)1);
		// result.x_ = value;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_2 = __this->get_result_1();
		float L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_x__8(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::ClearX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * Builder_ClearX_mE9DE8C39B2AF39C293A9968AC42269FDC65BFEDD (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_0;
		L_0 = Builder_PrepareBuilder_mB2E64B032190F0128D5579316847BC8A3A48DB19(__this, /*hidden argument*/NULL);
		// result.hasX = false;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasX_7((bool)0);
		// result.x_ = 0F;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_x__8((0.0f));
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_HasY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasY_mD8E2A94ACF8901FFCD82D77FDEDAB5859CCC2F51 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasY; }
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasY_10();
		return L_1;
	}
}
// System.Single proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Builder_get_Y_mF5A09435CF297DE0D75B616C8803A5F51F6FE4A1 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.Y; }
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_0 = __this->get_result_1();
		NullCheck(L_0);
		float L_1;
		L_1 = AccelerometerEvent_get_Y_m27AC19083EBF55AF9B7D13811DEB89A91BF24A0B_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/AccelerometerEvent/Builder::set_Y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Y_m912332D31497BCA8827C978AA8111914D7F99442 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { SetY(value); }
		float L_0 = ___value0;
		Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * L_1;
		L_1 = Builder_SetY_m00E03467DC5263B10C73336C76BFD9F1B9F13F4D(__this, L_0, /*hidden argument*/NULL);
		// set { SetY(value); }
		return;
	}
}
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::SetY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * Builder_SetY_m00E03467DC5263B10C73336C76BFD9F1B9F13F4D (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_0;
		L_0 = Builder_PrepareBuilder_mB2E64B032190F0128D5579316847BC8A3A48DB19(__this, /*hidden argument*/NULL);
		// result.hasY = true;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasY_10((bool)1);
		// result.y_ = value;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_2 = __this->get_result_1();
		float L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_y__11(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::ClearY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * Builder_ClearY_m1A3B49F1DD068A9FB53B71364B46A686A3CDC833 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_0;
		L_0 = Builder_PrepareBuilder_mB2E64B032190F0128D5579316847BC8A3A48DB19(__this, /*hidden argument*/NULL);
		// result.hasY = false;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasY_10((bool)0);
		// result.y_ = 0F;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_y__11((0.0f));
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_HasZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasZ_m752C184DF17425A3D13263E7E30E4064622B2328 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasZ; }
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasZ_13();
		return L_1;
	}
}
// System.Single proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_Z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Builder_get_Z_mDE699E552C50B5A82176BE1F000FAF356532947B (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.Z; }
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_0 = __this->get_result_1();
		NullCheck(L_0);
		float L_1;
		L_1 = AccelerometerEvent_get_Z_mC8C037719C5E02E507A114C54E6A74C983627D0E_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/AccelerometerEvent/Builder::set_Z(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Z_mF6ED1538B9E60FA27B6100E8503C68846EC23D48 (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { SetZ(value); }
		float L_0 = ___value0;
		Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * L_1;
		L_1 = Builder_SetZ_m6E0B9B80C42A40AF54F81DCDCE7683B6E2746D5E(__this, L_0, /*hidden argument*/NULL);
		// set { SetZ(value); }
		return;
	}
}
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::SetZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * Builder_SetZ_m6E0B9B80C42A40AF54F81DCDCE7683B6E2746D5E (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_0;
		L_0 = Builder_PrepareBuilder_mB2E64B032190F0128D5579316847BC8A3A48DB19(__this, /*hidden argument*/NULL);
		// result.hasZ = true;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasZ_13((bool)1);
		// result.z_ = value;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_2 = __this->get_result_1();
		float L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_z__14(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::ClearZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * Builder_ClearZ_m1A59687C3CF6D2335A8213E92DCDB48293C16DEC (Builder_t5940204ACE27C82B68F8EE2BA8EF2E1EBC2D60A1 * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_0;
		L_0 = Builder_PrepareBuilder_mB2E64B032190F0128D5579316847BC8A3A48DB19(__this, /*hidden argument*/NULL);
		// result.hasZ = false;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasZ_13((bool)0);
		// result.z_ = 0F;
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_z__14((0.0f));
		// return this;
		return __this;
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
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::get_ThisBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * Builder_get_ThisBuilder_mAC63010A178AE5531797D51CCF052F7BE8C26E6E (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, const RuntimeMethod* method)
{
	{
		// get { return this; }
		return __this;
	}
}
// System.Void proto.PhoneEvent/Types/DepthMapEvent/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m317E739975BFAC080E721821A4671F0C253F8B56 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2__ctor_m9E75F0D534EC9FE62FE8E73B5E4F25A01136B67B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Builder() {
		GeneratedBuilderLite_2__ctor_m9E75F0D534EC9FE62FE8E73B5E4F25A01136B67B(__this, /*hidden argument*/GeneratedBuilderLite_2__ctor_m9E75F0D534EC9FE62FE8E73B5E4F25A01136B67B_RuntimeMethod_var);
		// result = DefaultInstance;
		IL2CPP_RUNTIME_CLASS_INIT(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_il2cpp_TypeInfo_var);
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0;
		L_0 = DepthMapEvent_get_DefaultInstance_m468BACF0728BE350286EEE6541A5FC48BEE4D1D2_inline(/*hidden argument*/NULL);
		__this->set_result_1(L_0);
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// }
		return;
	}
}
// System.Void proto.PhoneEvent/Types/DepthMapEvent/Builder::.ctor(proto.PhoneEvent/Types/DepthMapEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m22F95BD87777E0F555A500B9B5E389793D4BF21A (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * ___cloneFrom0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2__ctor_m9E75F0D534EC9FE62FE8E73B5E4F25A01136B67B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal Builder(DepthMapEvent cloneFrom) {
		GeneratedBuilderLite_2__ctor_m9E75F0D534EC9FE62FE8E73B5E4F25A01136B67B(__this, /*hidden argument*/GeneratedBuilderLite_2__ctor_m9E75F0D534EC9FE62FE8E73B5E4F25A01136B67B_RuntimeMethod_var);
		// result = cloneFrom;
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0 = ___cloneFrom0;
		__this->set_result_1(L_0);
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// }
		return;
	}
}
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent/Builder::PrepareBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * Builder_PrepareBuilder_m7BAE917FEB78823CC4C7FD5834247F1F32537777 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * V_0 = NULL;
	{
		// if (resultIsReadOnly) {
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// DepthMapEvent original = result;
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_1 = __this->get_result_1();
		V_0 = L_1;
		// result = new DepthMapEvent();
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_2 = (DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 *)il2cpp_codegen_object_new(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_il2cpp_TypeInfo_var);
		DepthMapEvent__ctor_m87C480081AAE442E33C30BF63FC71F72A47EB78A(L_2, /*hidden argument*/NULL);
		__this->set_result_1(L_2);
		// resultIsReadOnly = false;
		__this->set_resultIsReadOnly_0((bool)0);
		// MergeFrom(original);
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_3 = V_0;
		Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * L_4;
		L_4 = VirtFuncInvoker1< Builder_tEBEB64D39617078197E85E05786FC36089B301C5 *, DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/DepthMapEvent,proto.PhoneEvent/Types/DepthMapEvent/Builder>::MergeFrom(!0) */, __this, L_3);
	}

IL_0029:
	{
		// return result;
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_5 = __this->get_result_1();
		return L_5;
	}
}
// System.Boolean proto.PhoneEvent/Types/DepthMapEvent/Builder::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_IsInitialized_m502D3D396BF17D8F9D40DF4EB1F1C91C4AE11CCB (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.IsInitialized; }
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean Google.ProtocolBuffers.AbstractMessageLite`2<proto.PhoneEvent/Types/DepthMapEvent,proto.PhoneEvent/Types/DepthMapEvent/Builder>::get_IsInitialized() */, L_0);
		return L_1;
	}
}
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent/Builder::get_MessageBeingBuilt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * Builder_get_MessageBeingBuilt_m68CF0998A808ACE77424C60876772313847ECA9C (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, const RuntimeMethod* method)
{
	{
		// get { return PrepareBuilder(); }
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0;
		L_0 = Builder_PrepareBuilder_m7BAE917FEB78823CC4C7FD5834247F1F32537777(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * Builder_Clear_mAD4F04FC4F3B4024E17C7614C2974A75416E1CDD (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// result = DefaultInstance;
		IL2CPP_RUNTIME_CLASS_INIT(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_il2cpp_TypeInfo_var);
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0;
		L_0 = DepthMapEvent_get_DefaultInstance_m468BACF0728BE350286EEE6541A5FC48BEE4D1D2_inline(/*hidden argument*/NULL);
		__this->set_result_1(L_0);
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * Builder_Clone_m3028A7345014F5D7C0B64CF6842EF49697C3D801 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_tEBEB64D39617078197E85E05786FC36089B301C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (resultIsReadOnly) {
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Builder(result);
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_1 = __this->get_result_1();
		Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * L_2 = (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 *)il2cpp_codegen_object_new(Builder_tEBEB64D39617078197E85E05786FC36089B301C5_il2cpp_TypeInfo_var);
		Builder__ctor_m22F95BD87777E0F555A500B9B5E389793D4BF21A(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		// return new Builder().MergeFrom(result);
		Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * L_3 = (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 *)il2cpp_codegen_object_new(Builder_tEBEB64D39617078197E85E05786FC36089B301C5_il2cpp_TypeInfo_var);
		Builder__ctor_m317E739975BFAC080E721821A4671F0C253F8B56(L_3, /*hidden argument*/NULL);
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_4 = __this->get_result_1();
		NullCheck(L_3);
		Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * L_5;
		L_5 = VirtFuncInvoker1< Builder_tEBEB64D39617078197E85E05786FC36089B301C5 *, DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/DepthMapEvent,proto.PhoneEvent/Types/DepthMapEvent/Builder>::MergeFrom(!0) */, L_3, L_4);
		return L_5;
	}
}
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent/Builder::get_DefaultInstanceForType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * Builder_get_DefaultInstanceForType_m49B9F718466AA7484BD4C8060BD362800FCF902D (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return global::proto.PhoneEvent.Types.DepthMapEvent.DefaultInstance; }
		IL2CPP_RUNTIME_CLASS_INIT(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_il2cpp_TypeInfo_var);
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0;
		L_0 = DepthMapEvent_get_DefaultInstance_m468BACF0728BE350286EEE6541A5FC48BEE4D1D2_inline(/*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent/Builder::BuildPartial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * Builder_BuildPartial_m3E663A4EDFEE06464B9C29BB51EE7B8217605508 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, const RuntimeMethod* method)
{
	{
		// if (resultIsReadOnly) {
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return result;
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_1 = __this->get_result_1();
		return L_1;
	}

IL_000f:
	{
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// return result.MakeReadOnly();
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_3;
		L_3 = DepthMapEvent_MakeReadOnly_mEACA3F5DC7E31451D1CB610D19E710713B9CE2D1(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::MergeFrom(Google.ProtocolBuffers.IMessageLite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * Builder_MergeFrom_mDDEA146DD44BCAF21526846BA7FE1A8DC3F4E896 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_MergeFrom_m01DA9562C507B081A600AA8A24362A78F6331C0A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other is DepthMapEvent) {
		RuntimeObject* L_0 = ___other0;
		if (!((DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 *)IsInstSealed((RuntimeObject*)L_0, DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		// return MergeFrom((DepthMapEvent) other);
		RuntimeObject* L_1 = ___other0;
		Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * L_2;
		L_2 = VirtFuncInvoker1< Builder_tEBEB64D39617078197E85E05786FC36089B301C5 *, DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/DepthMapEvent,proto.PhoneEvent/Types/DepthMapEvent/Builder>::MergeFrom(!0) */, __this, ((DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 *)CastclassSealed((RuntimeObject*)L_1, DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0015:
	{
		// base.MergeFrom(other);
		RuntimeObject* L_3 = ___other0;
		Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * L_4;
		L_4 = GeneratedBuilderLite_2_MergeFrom_m01DA9562C507B081A600AA8A24362A78F6331C0A(__this, L_3, /*hidden argument*/GeneratedBuilderLite_2_MergeFrom_m01DA9562C507B081A600AA8A24362A78F6331C0A_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::MergeFrom(proto.PhoneEvent/Types/DepthMapEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * Builder_MergeFrom_m0F731BCA9935BD7EF17B6BBA45768D5059623FCD (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PopsicleList_1_Add_m3520CDCD790B303679967E7B4FD10724E7D59E14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PopsicleList_1_get_Count_mE3C43D8A8F72DE905F65EC5581F5E40E50D1B63C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other == global::proto.PhoneEvent.Types.DepthMapEvent.DefaultInstance) return this;
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0 = ___other0;
		IL2CPP_RUNTIME_CLASS_INIT(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_il2cpp_TypeInfo_var);
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_1;
		L_1 = DepthMapEvent_get_DefaultInstance_m468BACF0728BE350286EEE6541A5FC48BEE4D1D2_inline(/*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 *)L_0) == ((RuntimeObject*)(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 *)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// if (other == global::proto.PhoneEvent.Types.DepthMapEvent.DefaultInstance) return this;
		return __this;
	}

IL_000a:
	{
		// PrepareBuilder();
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_2;
		L_2 = Builder_PrepareBuilder_m7BAE917FEB78823CC4C7FD5834247F1F32537777(__this, /*hidden argument*/NULL);
		// if (other.HasTimestamp) {
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_3 = ___other0;
		NullCheck(L_3);
		bool L_4;
		L_4 = DepthMapEvent_get_HasTimestamp_m0D9A6D1649B89941C31CF1E8BC85FE62E12662BB_inline(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// Timestamp = other.Timestamp;
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_5 = ___other0;
		NullCheck(L_5);
		int64_t L_6;
		L_6 = DepthMapEvent_get_Timestamp_m9F2295F37F13231AE793C81F275C857A17719B74_inline(L_5, /*hidden argument*/NULL);
		Builder_set_Timestamp_m07CC62ACEE8BE1DCDEDE34DFDF851673A0BF95F2(__this, L_6, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// if (other.HasWidth) {
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_7 = ___other0;
		NullCheck(L_7);
		bool L_8;
		L_8 = DepthMapEvent_get_HasWidth_m31A6C65468A11635C166DF5A73B3A6B0E4573FF1_inline(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		// Width = other.Width;
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_9 = ___other0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = DepthMapEvent_get_Width_m6522A5C33EFFBDF83573A5EAA5606E9596E34AFF_inline(L_9, /*hidden argument*/NULL);
		Builder_set_Width_mD218805840F38B5925BFE50A9E9541BD13DE431E(__this, L_10, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// if (other.HasHeight) {
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_11 = ___other0;
		NullCheck(L_11);
		bool L_12;
		L_12 = DepthMapEvent_get_HasHeight_m88EAFAFD1EA28E27A1330E1FFDD0AD256B24E2F3_inline(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		// Height = other.Height;
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_13 = ___other0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = DepthMapEvent_get_Height_mB2A0B6D30EC2A0E2818F0E408198F579C043D0D8_inline(L_13, /*hidden argument*/NULL);
		Builder_set_Height_m1AB3DBEA0791BD339419F0B5EB5F109D14F8EBCA(__this, L_14, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// if (other.zDistances_.Count != 0) {
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_15 = ___other0;
		NullCheck(L_15);
		PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 * L_16 = L_15->get_zDistances__14();
		NullCheck(L_16);
		int32_t L_17;
		L_17 = PopsicleList_1_get_Count_mE3C43D8A8F72DE905F65EC5581F5E40E50D1B63C(L_16, /*hidden argument*/PopsicleList_1_get_Count_mE3C43D8A8F72DE905F65EC5581F5E40E50D1B63C_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		// result.zDistances_.Add(other.zDistances_);
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_18 = __this->get_result_1();
		NullCheck(L_18);
		PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 * L_19 = L_18->get_zDistances__14();
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_20 = ___other0;
		NullCheck(L_20);
		PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 * L_21 = L_20->get_zDistances__14();
		NullCheck(L_19);
		PopsicleList_1_Add_m3520CDCD790B303679967E7B4FD10724E7D59E14(L_19, L_21, /*hidden argument*/PopsicleList_1_Add_m3520CDCD790B303679967E7B4FD10724E7D59E14_RuntimeMethod_var);
	}

IL_0070:
	{
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * Builder_MergeFrom_m94192354337D1FE6DF7825ADBDF22F49E59E64A6 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, RuntimeObject* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return MergeFrom(input, pb::ExtensionRegistry.Empty);
		RuntimeObject* L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_1;
		L_1 = ExtensionRegistry_get_Empty_mC0CEC24AC7345586186C0641D64BAAC63413DAA9_inline(/*hidden argument*/NULL);
		Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * L_2;
		L_2 = VirtFuncInvoker2< Builder_tEBEB64D39617078197E85E05786FC36089B301C5 *, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * >::Invoke(15 /* !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/DepthMapEvent,proto.PhoneEvent/Types/DepthMapEvent/Builder>::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry) */, __this, L_0, L_1);
		return L_2;
	}
}
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * Builder_MergeFrom_m5E5725DC32B12003C02A46D4DEAF803B0BF1CE95 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, RuntimeObject* ___input0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// PrepareBuilder();
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0;
		L_0 = Builder_PrepareBuilder_m7BAE917FEB78823CC4C7FD5834247F1F32537777(__this, /*hidden argument*/NULL);
		goto IL_00ef;
	}

IL_000c:
	{
		// if(tag == 0 && field_name != null) {
		uint32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		// int field_ordinal = global::System.Array.BinarySearch(_depthMapEventFieldNames, field_name, global::System.StringComparer.Ordinal);
		IL2CPP_RUNTIME_CLASS_INIT(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ((DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_StaticFields*)il2cpp_codegen_static_fields_for(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_il2cpp_TypeInfo_var))->get__depthMapEventFieldNames_1();
		String_t* L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_5;
		L_5 = StringComparer_get_Ordinal_mF3B6370BEBD77351DB5218C867DCD669C47B8812_inline(/*hidden argument*/NULL);
		int32_t L_6;
		L_6 = Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD(L_3, L_4, L_5, /*hidden argument*/Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD_RuntimeMethod_var);
		V_2 = L_6;
		// if(field_ordinal >= 0)
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		// tag = _depthMapEventFieldTags[field_ordinal];
		IL2CPP_RUNTIME_CLASS_INIT(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_8 = ((DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_StaticFields*)il2cpp_codegen_static_fields_for(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_il2cpp_TypeInfo_var))->get__depthMapEventFieldTags_2();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = L_11;
		goto IL_0041;
	}

IL_0031:
	{
		// ParseUnknownField(input, extensionRegistry, tag, field_name);
		RuntimeObject* L_12 = ___input0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_13 = ___extensionRegistry1;
		uint32_t L_14 = V_0;
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = VirtFuncInvoker4< bool, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *, uint32_t, String_t* >::Invoke(27 /* System.Boolean Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/DepthMapEvent,proto.PhoneEvent/Types/DepthMapEvent/Builder>::ParseUnknownField(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry,System.UInt32,System.String) */, __this, L_12, L_13, L_14, L_15);
		// continue;
		goto IL_00ef;
	}

IL_0041:
	{
		uint32_t L_17 = V_0;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)16)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_18 = V_0;
		if (!L_18)
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)8)))
		{
			goto IL_0082;
		}
	}
	{
		uint32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)16))))
		{
			goto IL_00a0;
		}
	}
	{
		goto IL_006b;
	}

IL_0054:
	{
		uint32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)24))))
		{
			goto IL_00be;
		}
	}
	{
		uint32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)34))))
		{
			goto IL_00dc;
		}
	}
	{
		uint32_t L_23 = V_0;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)37))))
		{
			goto IL_00dc;
		}
	}
	{
		goto IL_006b;
	}

IL_0065:
	{
		// throw pb::InvalidProtocolBufferException.InvalidTag();
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_24;
		L_24 = InvalidProtocolBufferException_InvalidTag_m2B39E4AEE6E6B4DE200ED9B10F0128F140ADAF88(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Builder_MergeFrom_m5E5725DC32B12003C02A46D4DEAF803B0BF1CE95_RuntimeMethod_var)));
	}

IL_006b:
	{
		// if (pb::WireFormat.IsEndGroupTag(tag)) {
		uint32_t L_25 = V_0;
		bool L_26;
		L_26 = WireFormat_IsEndGroupTag_mB577CA68ED4BEFC51C8E72F58E018D921140D929(L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0075;
		}
	}
	{
		// return this;
		return __this;
	}

IL_0075:
	{
		// ParseUnknownField(input, extensionRegistry, tag, field_name);
		RuntimeObject* L_27 = ___input0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_28 = ___extensionRegistry1;
		uint32_t L_29 = V_0;
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = VirtFuncInvoker4< bool, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *, uint32_t, String_t* >::Invoke(27 /* System.Boolean Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/DepthMapEvent,proto.PhoneEvent/Types/DepthMapEvent/Builder>::ParseUnknownField(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry,System.UInt32,System.String) */, __this, L_27, L_28, L_29, L_30);
		// break;
		goto IL_00ef;
	}

IL_0082:
	{
		// result.hasTimestamp = input.ReadInt64(ref result.timestamp_);
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_32 = __this->get_result_1();
		RuntimeObject* L_33 = ___input0;
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_34 = __this->get_result_1();
		NullCheck(L_34);
		int64_t* L_35 = L_34->get_address_of_timestamp__5();
		NullCheck(L_33);
		bool L_36;
		L_36 = InterfaceFuncInvoker1< bool, int64_t* >::Invoke(2 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadInt64(System.Int64&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_33, (int64_t*)L_35);
		NullCheck(L_32);
		L_32->set_hasTimestamp_4(L_36);
		// break;
		goto IL_00ef;
	}

IL_00a0:
	{
		// result.hasWidth = input.ReadInt32(ref result.width_);
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_37 = __this->get_result_1();
		RuntimeObject* L_38 = ___input0;
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_39 = __this->get_result_1();
		NullCheck(L_39);
		int32_t* L_40 = L_39->get_address_of_width__8();
		NullCheck(L_38);
		bool L_41;
		L_41 = InterfaceFuncInvoker1< bool, int32_t* >::Invoke(3 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadInt32(System.Int32&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_38, (int32_t*)L_40);
		NullCheck(L_37);
		L_37->set_hasWidth_7(L_41);
		// break;
		goto IL_00ef;
	}

IL_00be:
	{
		// result.hasHeight = input.ReadInt32(ref result.height_);
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_42 = __this->get_result_1();
		RuntimeObject* L_43 = ___input0;
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_44 = __this->get_result_1();
		NullCheck(L_44);
		int32_t* L_45 = L_44->get_address_of_height__11();
		NullCheck(L_43);
		bool L_46;
		L_46 = InterfaceFuncInvoker1< bool, int32_t* >::Invoke(3 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadInt32(System.Int32&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_43, (int32_t*)L_45);
		NullCheck(L_42);
		L_42->set_hasHeight_10(L_46);
		// break;
		goto IL_00ef;
	}

IL_00dc:
	{
		// input.ReadFloatArray(tag, field_name, result.zDistances_);
		RuntimeObject* L_47 = ___input0;
		uint32_t L_48 = V_0;
		String_t* L_49 = V_1;
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_50 = __this->get_result_1();
		NullCheck(L_50);
		PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 * L_51 = L_50->get_zDistances__14();
		NullCheck(L_47);
		InterfaceActionInvoker3< uint32_t, String_t*, RuntimeObject* >::Invoke(8 /* System.Void Google.ProtocolBuffers.ICodedInputStream::ReadFloatArray(System.UInt32,System.String,System.Collections.Generic.ICollection`1<System.Single>) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_47, L_48, L_49, L_51);
	}

IL_00ef:
	{
		// while (input.ReadTag(out tag, out field_name)) {
		RuntimeObject* L_52 = ___input0;
		NullCheck(L_52);
		bool L_53;
		L_53 = InterfaceFuncInvoker2< bool, uint32_t*, String_t** >::Invoke(0 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadTag(System.UInt32&,System.String&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_52, (uint32_t*)(&V_0), (String_t**)(&V_1));
		if (L_53)
		{
			goto IL_000c;
		}
	}
	{
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/DepthMapEvent/Builder::get_HasTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasTimestamp_m588D879CDFB0AB2E205B56BB87AB7A3B0688214F (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasTimestamp; }
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasTimestamp_4();
		return L_1;
	}
}
// System.Int64 proto.PhoneEvent/Types/DepthMapEvent/Builder::get_Timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Builder_get_Timestamp_m05FB4FFABBF7D7BEB92F43E5C2BFCB4920165D23 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.Timestamp; }
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		int64_t L_1;
		L_1 = DepthMapEvent_get_Timestamp_m9F2295F37F13231AE793C81F275C857A17719B74_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/DepthMapEvent/Builder::set_Timestamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Timestamp_m07CC62ACEE8BE1DCDEDE34DFDF851673A0BF95F2 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// set { SetTimestamp(value); }
		int64_t L_0 = ___value0;
		Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * L_1;
		L_1 = Builder_SetTimestamp_m9C0721E035B940B08E1E375A5106A65384F12D95(__this, L_0, /*hidden argument*/NULL);
		// set { SetTimestamp(value); }
		return;
	}
}
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::SetTimestamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * Builder_SetTimestamp_m9C0721E035B940B08E1E375A5106A65384F12D95 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0;
		L_0 = Builder_PrepareBuilder_m7BAE917FEB78823CC4C7FD5834247F1F32537777(__this, /*hidden argument*/NULL);
		// result.hasTimestamp = true;
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasTimestamp_4((bool)1);
		// result.timestamp_ = value;
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_2 = __this->get_result_1();
		int64_t L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_timestamp__5(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::ClearTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * Builder_ClearTimestamp_m885057593F7DFC32C6729C5DBA75F808F2FB769F (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0;
		L_0 = Builder_PrepareBuilder_m7BAE917FEB78823CC4C7FD5834247F1F32537777(__this, /*hidden argument*/NULL);
		// result.hasTimestamp = false;
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasTimestamp_4((bool)0);
		// result.timestamp_ = 0L;
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_timestamp__5(((int64_t)((int64_t)0)));
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/DepthMapEvent/Builder::get_HasWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasWidth_m013FB5998A03AB3FF4FD9FB29403132F6FEC7251 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasWidth; }
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasWidth_7();
		return L_1;
	}
}
// System.Int32 proto.PhoneEvent/Types/DepthMapEvent/Builder::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Builder_get_Width_m63599AA043041DAC449EF399453BF984D8CC1692 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.Width; }
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DepthMapEvent_get_Width_m6522A5C33EFFBDF83573A5EAA5606E9596E34AFF_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/DepthMapEvent/Builder::set_Width(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Width_mD218805840F38B5925BFE50A9E9541BD13DE431E (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { SetWidth(value); }
		int32_t L_0 = ___value0;
		Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * L_1;
		L_1 = Builder_SetWidth_m4E9FA6040B8B0F3C5FA120EDA6BF0B6418794465(__this, L_0, /*hidden argument*/NULL);
		// set { SetWidth(value); }
		return;
	}
}
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::SetWidth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * Builder_SetWidth_m4E9FA6040B8B0F3C5FA120EDA6BF0B6418794465 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0;
		L_0 = Builder_PrepareBuilder_m7BAE917FEB78823CC4C7FD5834247F1F32537777(__this, /*hidden argument*/NULL);
		// result.hasWidth = true;
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasWidth_7((bool)1);
		// result.width_ = value;
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_2 = __this->get_result_1();
		int32_t L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_width__8(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::ClearWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * Builder_ClearWidth_m9DFFF7BAA0EBC5DEE06B4A5802DBDC7510AFA86F (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0;
		L_0 = Builder_PrepareBuilder_m7BAE917FEB78823CC4C7FD5834247F1F32537777(__this, /*hidden argument*/NULL);
		// result.hasWidth = false;
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasWidth_7((bool)0);
		// result.width_ = 0;
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_width__8(0);
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/DepthMapEvent/Builder::get_HasHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasHeight_m9DE70CD99606AE7C51469A4140D26C1A4761A68E (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasHeight; }
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasHeight_10();
		return L_1;
	}
}
// System.Int32 proto.PhoneEvent/Types/DepthMapEvent/Builder::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Builder_get_Height_m8569DC830F73527BE65DBD468A7BB1542B9889B0 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.Height; }
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DepthMapEvent_get_Height_mB2A0B6D30EC2A0E2818F0E408198F579C043D0D8_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/DepthMapEvent/Builder::set_Height(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Height_m1AB3DBEA0791BD339419F0B5EB5F109D14F8EBCA (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { SetHeight(value); }
		int32_t L_0 = ___value0;
		Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * L_1;
		L_1 = Builder_SetHeight_m691254A192E1F45FABF3EE51C4825AC145064283(__this, L_0, /*hidden argument*/NULL);
		// set { SetHeight(value); }
		return;
	}
}
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::SetHeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * Builder_SetHeight_m691254A192E1F45FABF3EE51C4825AC145064283 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0;
		L_0 = Builder_PrepareBuilder_m7BAE917FEB78823CC4C7FD5834247F1F32537777(__this, /*hidden argument*/NULL);
		// result.hasHeight = true;
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasHeight_10((bool)1);
		// result.height_ = value;
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_2 = __this->get_result_1();
		int32_t L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_height__11(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::ClearHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * Builder_ClearHeight_mFFD44A67F7392C2CFB0E8A3BB60C95C6284A0D68 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0;
		L_0 = Builder_PrepareBuilder_m7BAE917FEB78823CC4C7FD5834247F1F32537777(__this, /*hidden argument*/NULL);
		// result.hasHeight = false;
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasHeight_10((bool)0);
		// result.height_ = 0;
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_height__11(0);
		// return this;
		return __this;
	}
}
// Google.ProtocolBuffers.Collections.IPopsicleList`1<System.Single> proto.PhoneEvent/Types/DepthMapEvent/Builder::get_ZDistancesList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Builder_get_ZDistancesList_mB09FF160964F3BD26CD6B6DC1756FD5A3668B929 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, const RuntimeMethod* method)
{
	{
		// get { return PrepareBuilder().zDistances_; }
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0;
		L_0 = Builder_PrepareBuilder_m7BAE917FEB78823CC4C7FD5834247F1F32537777(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 * L_1 = L_0->get_zDistances__14();
		return L_1;
	}
}
// System.Int32 proto.PhoneEvent/Types/DepthMapEvent/Builder::get_ZDistancesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Builder_get_ZDistancesCount_m57721DAF8C2AAF4F8DD38054C019254C5DB83F74 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.ZDistancesCount; }
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DepthMapEvent_get_ZDistancesCount_m26C54143C760A4B422D3277C8242001BC97BA48A(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single proto.PhoneEvent/Types/DepthMapEvent/Builder::GetZDistances(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Builder_GetZDistances_mFF1071897FBEE63CAC1ECE74707B88667CEC20ED (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// return result.GetZDistances(index);
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0 = __this->get_result_1();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		float L_2;
		L_2 = DepthMapEvent_GetZDistances_m6EB961C96DA158CDCC3F4A2D34583B1A26FD6A01(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::SetZDistances(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * Builder_SetZDistances_m756438BF6C9F9092CE4C3000FA439DA43EA8C42D (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PopsicleList_1_set_Item_mB1BEF45A67FD508B139537A1F492ABE3A9D1E769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PrepareBuilder();
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0;
		L_0 = Builder_PrepareBuilder_m7BAE917FEB78823CC4C7FD5834247F1F32537777(__this, /*hidden argument*/NULL);
		// result.zDistances_[index] = value;
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 * L_2 = L_1->get_zDistances__14();
		int32_t L_3 = ___index0;
		float L_4 = ___value1;
		NullCheck(L_2);
		PopsicleList_1_set_Item_mB1BEF45A67FD508B139537A1F492ABE3A9D1E769(L_2, L_3, L_4, /*hidden argument*/PopsicleList_1_set_Item_mB1BEF45A67FD508B139537A1F492ABE3A9D1E769_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::AddZDistances(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * Builder_AddZDistances_m6671E2EB6855D3CDFC82380DFDCE91638EAE20E7 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PopsicleList_1_Add_m02EB2B8F8118B6BFDA6308B3078D852A163F53E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PrepareBuilder();
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0;
		L_0 = Builder_PrepareBuilder_m7BAE917FEB78823CC4C7FD5834247F1F32537777(__this, /*hidden argument*/NULL);
		// result.zDistances_.Add(value);
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 * L_2 = L_1->get_zDistances__14();
		float L_3 = ___value0;
		NullCheck(L_2);
		PopsicleList_1_Add_m02EB2B8F8118B6BFDA6308B3078D852A163F53E8(L_2, L_3, /*hidden argument*/PopsicleList_1_Add_m02EB2B8F8118B6BFDA6308B3078D852A163F53E8_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::AddRangeZDistances(System.Collections.Generic.IEnumerable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * Builder_AddRangeZDistances_mEFD058251D16441C7B01A93DA8F3968133B02593 (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, RuntimeObject* ___values0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PopsicleList_1_Add_m3520CDCD790B303679967E7B4FD10724E7D59E14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PrepareBuilder();
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0;
		L_0 = Builder_PrepareBuilder_m7BAE917FEB78823CC4C7FD5834247F1F32537777(__this, /*hidden argument*/NULL);
		// result.zDistances_.Add(values);
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 * L_2 = L_1->get_zDistances__14();
		RuntimeObject* L_3 = ___values0;
		NullCheck(L_2);
		PopsicleList_1_Add_m3520CDCD790B303679967E7B4FD10724E7D59E14(L_2, L_3, /*hidden argument*/PopsicleList_1_Add_m3520CDCD790B303679967E7B4FD10724E7D59E14_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::ClearZDistances()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * Builder_ClearZDistances_mEB0E1A46A3066B529B936D6C7392FAB9A518D45D (Builder_tEBEB64D39617078197E85E05786FC36089B301C5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PopsicleList_1_Clear_m29BCCE5060DC16C5CF51BF5227C8BC6101047A33_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PrepareBuilder();
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0;
		L_0 = Builder_PrepareBuilder_m7BAE917FEB78823CC4C7FD5834247F1F32537777(__this, /*hidden argument*/NULL);
		// result.zDistances_.Clear();
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		PopsicleList_1_t46DD5078966E5B4AA4C24FD771D6791A143CB827 * L_2 = L_1->get_zDistances__14();
		NullCheck(L_2);
		PopsicleList_1_Clear_m29BCCE5060DC16C5CF51BF5227C8BC6101047A33(L_2, /*hidden argument*/PopsicleList_1_Clear_m29BCCE5060DC16C5CF51BF5227C8BC6101047A33_RuntimeMethod_var);
		// return this;
		return __this;
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
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::get_ThisBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * Builder_get_ThisBuilder_m889A5B8CFD8B2A4DF7E8937AAE084C9CEEB60ACA (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, const RuntimeMethod* method)
{
	{
		// get { return this; }
		return __this;
	}
}
// System.Void proto.PhoneEvent/Types/GyroscopeEvent/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_mB3AB7CE4BDBC86C71FE03F63F606A3907B7A380D (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2__ctor_m509C28EFE7B402DEAAB6E501F86507BDE40D42DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Builder() {
		GeneratedBuilderLite_2__ctor_m509C28EFE7B402DEAAB6E501F86507BDE40D42DF(__this, /*hidden argument*/GeneratedBuilderLite_2__ctor_m509C28EFE7B402DEAAB6E501F86507BDE40D42DF_RuntimeMethod_var);
		// result = DefaultInstance;
		IL2CPP_RUNTIME_CLASS_INIT(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_il2cpp_TypeInfo_var);
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_0;
		L_0 = GyroscopeEvent_get_DefaultInstance_m0F1F859BF40AB538AEA9DC974D471F88DAA3AA02_inline(/*hidden argument*/NULL);
		__this->set_result_1(L_0);
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// }
		return;
	}
}
// System.Void proto.PhoneEvent/Types/GyroscopeEvent/Builder::.ctor(proto.PhoneEvent/Types/GyroscopeEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m603F0897BEA008ECE02AE2C9E0FFBAD5C55AF290 (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * ___cloneFrom0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2__ctor_m509C28EFE7B402DEAAB6E501F86507BDE40D42DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal Builder(GyroscopeEvent cloneFrom) {
		GeneratedBuilderLite_2__ctor_m509C28EFE7B402DEAAB6E501F86507BDE40D42DF(__this, /*hidden argument*/GeneratedBuilderLite_2__ctor_m509C28EFE7B402DEAAB6E501F86507BDE40D42DF_RuntimeMethod_var);
		// result = cloneFrom;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_0 = ___cloneFrom0;
		__this->set_result_1(L_0);
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// }
		return;
	}
}
// proto.PhoneEvent/Types/GyroscopeEvent proto.PhoneEvent/Types/GyroscopeEvent/Builder::PrepareBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * Builder_PrepareBuilder_m9EEB831C2D95D85F3118CFE3575AF01A75EA1DF4 (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * V_0 = NULL;
	{
		// if (resultIsReadOnly) {
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// GyroscopeEvent original = result;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_1 = __this->get_result_1();
		V_0 = L_1;
		// result = new GyroscopeEvent();
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_2 = (GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 *)il2cpp_codegen_object_new(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_il2cpp_TypeInfo_var);
		GyroscopeEvent__ctor_m93A5D4796C7DCD1E1525A009A23CC99A97871FE0(L_2, /*hidden argument*/NULL);
		__this->set_result_1(L_2);
		// resultIsReadOnly = false;
		__this->set_resultIsReadOnly_0((bool)0);
		// MergeFrom(original);
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_3 = V_0;
		Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * L_4;
		L_4 = VirtFuncInvoker1< Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 *, GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/GyroscopeEvent,proto.PhoneEvent/Types/GyroscopeEvent/Builder>::MergeFrom(!0) */, __this, L_3);
	}

IL_0029:
	{
		// return result;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_5 = __this->get_result_1();
		return L_5;
	}
}
// System.Boolean proto.PhoneEvent/Types/GyroscopeEvent/Builder::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_IsInitialized_m3F52E7913297E25F5D781A8B921097B8C2181729 (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.IsInitialized; }
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean Google.ProtocolBuffers.AbstractMessageLite`2<proto.PhoneEvent/Types/GyroscopeEvent,proto.PhoneEvent/Types/GyroscopeEvent/Builder>::get_IsInitialized() */, L_0);
		return L_1;
	}
}
// proto.PhoneEvent/Types/GyroscopeEvent proto.PhoneEvent/Types/GyroscopeEvent/Builder::get_MessageBeingBuilt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * Builder_get_MessageBeingBuilt_m4F7A1805ABFCDA444F6DB6B1F135CAFAC179720B (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, const RuntimeMethod* method)
{
	{
		// get { return PrepareBuilder(); }
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_0;
		L_0 = Builder_PrepareBuilder_m9EEB831C2D95D85F3118CFE3575AF01A75EA1DF4(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * Builder_Clear_mA2C9D38B2F619304865B3990E027034848BCE817 (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// result = DefaultInstance;
		IL2CPP_RUNTIME_CLASS_INIT(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_il2cpp_TypeInfo_var);
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_0;
		L_0 = GyroscopeEvent_get_DefaultInstance_m0F1F859BF40AB538AEA9DC974D471F88DAA3AA02_inline(/*hidden argument*/NULL);
		__this->set_result_1(L_0);
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * Builder_Clone_m66A08715A1A9AA64045E4758FB3C9A867B0E06F8 (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (resultIsReadOnly) {
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Builder(result);
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_1 = __this->get_result_1();
		Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * L_2 = (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 *)il2cpp_codegen_object_new(Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70_il2cpp_TypeInfo_var);
		Builder__ctor_m603F0897BEA008ECE02AE2C9E0FFBAD5C55AF290(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		// return new Builder().MergeFrom(result);
		Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * L_3 = (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 *)il2cpp_codegen_object_new(Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70_il2cpp_TypeInfo_var);
		Builder__ctor_mB3AB7CE4BDBC86C71FE03F63F606A3907B7A380D(L_3, /*hidden argument*/NULL);
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_4 = __this->get_result_1();
		NullCheck(L_3);
		Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * L_5;
		L_5 = VirtFuncInvoker1< Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 *, GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/GyroscopeEvent,proto.PhoneEvent/Types/GyroscopeEvent/Builder>::MergeFrom(!0) */, L_3, L_4);
		return L_5;
	}
}
// proto.PhoneEvent/Types/GyroscopeEvent proto.PhoneEvent/Types/GyroscopeEvent/Builder::get_DefaultInstanceForType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * Builder_get_DefaultInstanceForType_m9E2080B13F119D3DAB9EF0CE1A486B8C06BFD9DB (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return global::proto.PhoneEvent.Types.GyroscopeEvent.DefaultInstance; }
		IL2CPP_RUNTIME_CLASS_INIT(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_il2cpp_TypeInfo_var);
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_0;
		L_0 = GyroscopeEvent_get_DefaultInstance_m0F1F859BF40AB538AEA9DC974D471F88DAA3AA02_inline(/*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/GyroscopeEvent proto.PhoneEvent/Types/GyroscopeEvent/Builder::BuildPartial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * Builder_BuildPartial_m305D587CB7EDAE985E0FFC8DD66EAB3A9308F284 (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, const RuntimeMethod* method)
{
	{
		// if (resultIsReadOnly) {
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return result;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_1 = __this->get_result_1();
		return L_1;
	}

IL_000f:
	{
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// return result.MakeReadOnly();
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_3;
		L_3 = GyroscopeEvent_MakeReadOnly_m892403307C473AF3CBD6E1423C2B18E5BA52F124(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::MergeFrom(Google.ProtocolBuffers.IMessageLite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * Builder_MergeFrom_m2F08156ABA4EE61DA999256D9DAFCCD8AD598AFD (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_MergeFrom_m032E96A57ECDFC51F9550E5F5680E93771DB2AB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other is GyroscopeEvent) {
		RuntimeObject* L_0 = ___other0;
		if (!((GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 *)IsInstSealed((RuntimeObject*)L_0, GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		// return MergeFrom((GyroscopeEvent) other);
		RuntimeObject* L_1 = ___other0;
		Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * L_2;
		L_2 = VirtFuncInvoker1< Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 *, GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/GyroscopeEvent,proto.PhoneEvent/Types/GyroscopeEvent/Builder>::MergeFrom(!0) */, __this, ((GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 *)CastclassSealed((RuntimeObject*)L_1, GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0015:
	{
		// base.MergeFrom(other);
		RuntimeObject* L_3 = ___other0;
		Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * L_4;
		L_4 = GeneratedBuilderLite_2_MergeFrom_m032E96A57ECDFC51F9550E5F5680E93771DB2AB3(__this, L_3, /*hidden argument*/GeneratedBuilderLite_2_MergeFrom_m032E96A57ECDFC51F9550E5F5680E93771DB2AB3_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::MergeFrom(proto.PhoneEvent/Types/GyroscopeEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * Builder_MergeFrom_mAA7304B5A37CC930FAA3A6E7E77A5CD4B2B6CC3D (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other == global::proto.PhoneEvent.Types.GyroscopeEvent.DefaultInstance) return this;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_0 = ___other0;
		IL2CPP_RUNTIME_CLASS_INIT(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_il2cpp_TypeInfo_var);
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_1;
		L_1 = GyroscopeEvent_get_DefaultInstance_m0F1F859BF40AB538AEA9DC974D471F88DAA3AA02_inline(/*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 *)L_0) == ((RuntimeObject*)(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 *)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// if (other == global::proto.PhoneEvent.Types.GyroscopeEvent.DefaultInstance) return this;
		return __this;
	}

IL_000a:
	{
		// PrepareBuilder();
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_2;
		L_2 = Builder_PrepareBuilder_m9EEB831C2D95D85F3118CFE3575AF01A75EA1DF4(__this, /*hidden argument*/NULL);
		// if (other.HasTimestamp) {
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_3 = ___other0;
		NullCheck(L_3);
		bool L_4;
		L_4 = GyroscopeEvent_get_HasTimestamp_m5947FBB22BB057F1D3D3AE28F7587CD836416621_inline(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// Timestamp = other.Timestamp;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_5 = ___other0;
		NullCheck(L_5);
		int64_t L_6;
		L_6 = GyroscopeEvent_get_Timestamp_mDAB25E2A5E76FDC59EA0FD52702B79832EBBEA76_inline(L_5, /*hidden argument*/NULL);
		Builder_set_Timestamp_m839BD838E91E5BA6F5075309D6837DC67136BB41(__this, L_6, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// if (other.HasX) {
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_7 = ___other0;
		NullCheck(L_7);
		bool L_8;
		L_8 = GyroscopeEvent_get_HasX_m0D1D5B3C45FD5B63CD4102002CEF6DFF5DC9429F_inline(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		// X = other.X;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_9 = ___other0;
		NullCheck(L_9);
		float L_10;
		L_10 = GyroscopeEvent_get_X_mEE8C2D464F76A7BC1B6B1F18EB700E2D2AFB3889_inline(L_9, /*hidden argument*/NULL);
		Builder_set_X_m1351968A475CFCDF9E14A881E71A1D593E8618AA(__this, L_10, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// if (other.HasY) {
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_11 = ___other0;
		NullCheck(L_11);
		bool L_12;
		L_12 = GyroscopeEvent_get_HasY_m7AFE8FAA372B82E367C7CD9A1C733665B4E4A096_inline(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		// Y = other.Y;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_13 = ___other0;
		NullCheck(L_13);
		float L_14;
		L_14 = GyroscopeEvent_get_Y_m403E83657F6F879629C375BFB85493CBC38AAAB1_inline(L_13, /*hidden argument*/NULL);
		Builder_set_Y_mCC48430DF59FDD34A168D995B77702DCA1BD7325(__this, L_14, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// if (other.HasZ) {
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_15 = ___other0;
		NullCheck(L_15);
		bool L_16;
		L_16 = GyroscopeEvent_get_HasZ_mE0AE126D0B8079FF19FDA3B333E6574A79E31882_inline(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0061;
		}
	}
	{
		// Z = other.Z;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_17 = ___other0;
		NullCheck(L_17);
		float L_18;
		L_18 = GyroscopeEvent_get_Z_mCAB7F3326072E58DCB44F823428D590339D0EFC1_inline(L_17, /*hidden argument*/NULL);
		Builder_set_Z_m807E7F65FF7B6BD818775FD4B12D025234C1DCB6(__this, L_18, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * Builder_MergeFrom_m78DF978D1B1579ECC9107E554577F4DC79C304C7 (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, RuntimeObject* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return MergeFrom(input, pb::ExtensionRegistry.Empty);
		RuntimeObject* L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_1;
		L_1 = ExtensionRegistry_get_Empty_mC0CEC24AC7345586186C0641D64BAAC63413DAA9_inline(/*hidden argument*/NULL);
		Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * L_2;
		L_2 = VirtFuncInvoker2< Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 *, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * >::Invoke(15 /* !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/GyroscopeEvent,proto.PhoneEvent/Types/GyroscopeEvent/Builder>::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry) */, __this, L_0, L_1);
		return L_2;
	}
}
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * Builder_MergeFrom_mB6B7BA290DB1D631B578D87FF1B3C78EE1BA0A64 (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, RuntimeObject* ___input0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// PrepareBuilder();
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_0;
		L_0 = Builder_PrepareBuilder_m9EEB831C2D95D85F3118CFE3575AF01A75EA1DF4(__this, /*hidden argument*/NULL);
		goto IL_00f2;
	}

IL_000c:
	{
		// if(tag == 0 && field_name != null) {
		uint32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		// int field_ordinal = global::System.Array.BinarySearch(_gyroscopeEventFieldNames, field_name, global::System.StringComparer.Ordinal);
		IL2CPP_RUNTIME_CLASS_INIT(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ((GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_StaticFields*)il2cpp_codegen_static_fields_for(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_il2cpp_TypeInfo_var))->get__gyroscopeEventFieldNames_1();
		String_t* L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_5;
		L_5 = StringComparer_get_Ordinal_mF3B6370BEBD77351DB5218C867DCD669C47B8812_inline(/*hidden argument*/NULL);
		int32_t L_6;
		L_6 = Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD(L_3, L_4, L_5, /*hidden argument*/Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD_RuntimeMethod_var);
		V_2 = L_6;
		// if(field_ordinal >= 0)
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		// tag = _gyroscopeEventFieldTags[field_ordinal];
		IL2CPP_RUNTIME_CLASS_INIT(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_8 = ((GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_StaticFields*)il2cpp_codegen_static_fields_for(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_il2cpp_TypeInfo_var))->get__gyroscopeEventFieldTags_2();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = L_11;
		goto IL_0041;
	}

IL_0031:
	{
		// ParseUnknownField(input, extensionRegistry, tag, field_name);
		RuntimeObject* L_12 = ___input0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_13 = ___extensionRegistry1;
		uint32_t L_14 = V_0;
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = VirtFuncInvoker4< bool, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *, uint32_t, String_t* >::Invoke(27 /* System.Boolean Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/GyroscopeEvent,proto.PhoneEvent/Types/GyroscopeEvent/Builder>::ParseUnknownField(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry,System.UInt32,System.String) */, __this, L_12, L_13, L_14, L_15);
		// continue;
		goto IL_00f2;
	}

IL_0041:
	{
		uint32_t L_17 = V_0;
		if ((!(((uint32_t)L_17) <= ((uint32_t)8))))
		{
			goto IL_004e;
		}
	}
	{
		uint32_t L_18 = V_0;
		if (!L_18)
		{
			goto IL_005f;
		}
	}
	{
		uint32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)8)))
		{
			goto IL_007c;
		}
	}
	{
		goto IL_0065;
	}

IL_004e:
	{
		uint32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)21))))
		{
			goto IL_009a;
		}
	}
	{
		uint32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)29))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)37))))
		{
			goto IL_00d6;
		}
	}
	{
		goto IL_0065;
	}

IL_005f:
	{
		// throw pb::InvalidProtocolBufferException.InvalidTag();
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_23;
		L_23 = InvalidProtocolBufferException_InvalidTag_m2B39E4AEE6E6B4DE200ED9B10F0128F140ADAF88(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Builder_MergeFrom_mB6B7BA290DB1D631B578D87FF1B3C78EE1BA0A64_RuntimeMethod_var)));
	}

IL_0065:
	{
		// if (pb::WireFormat.IsEndGroupTag(tag)) {
		uint32_t L_24 = V_0;
		bool L_25;
		L_25 = WireFormat_IsEndGroupTag_mB577CA68ED4BEFC51C8E72F58E018D921140D929(L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_006f;
		}
	}
	{
		// return this;
		return __this;
	}

IL_006f:
	{
		// ParseUnknownField(input, extensionRegistry, tag, field_name);
		RuntimeObject* L_26 = ___input0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_27 = ___extensionRegistry1;
		uint32_t L_28 = V_0;
		String_t* L_29 = V_1;
		bool L_30;
		L_30 = VirtFuncInvoker4< bool, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *, uint32_t, String_t* >::Invoke(27 /* System.Boolean Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/GyroscopeEvent,proto.PhoneEvent/Types/GyroscopeEvent/Builder>::ParseUnknownField(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry,System.UInt32,System.String) */, __this, L_26, L_27, L_28, L_29);
		// break;
		goto IL_00f2;
	}

IL_007c:
	{
		// result.hasTimestamp = input.ReadInt64(ref result.timestamp_);
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_31 = __this->get_result_1();
		RuntimeObject* L_32 = ___input0;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_33 = __this->get_result_1();
		NullCheck(L_33);
		int64_t* L_34 = L_33->get_address_of_timestamp__5();
		NullCheck(L_32);
		bool L_35;
		L_35 = InterfaceFuncInvoker1< bool, int64_t* >::Invoke(2 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadInt64(System.Int64&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_32, (int64_t*)L_34);
		NullCheck(L_31);
		L_31->set_hasTimestamp_4(L_35);
		// break;
		goto IL_00f2;
	}

IL_009a:
	{
		// result.hasX = input.ReadFloat(ref result.x_);
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_36 = __this->get_result_1();
		RuntimeObject* L_37 = ___input0;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_38 = __this->get_result_1();
		NullCheck(L_38);
		float* L_39 = L_38->get_address_of_x__8();
		NullCheck(L_37);
		bool L_40;
		L_40 = InterfaceFuncInvoker1< bool, float* >::Invoke(1 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadFloat(System.Single&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_37, (float*)L_39);
		NullCheck(L_36);
		L_36->set_hasX_7(L_40);
		// break;
		goto IL_00f2;
	}

IL_00b8:
	{
		// result.hasY = input.ReadFloat(ref result.y_);
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_41 = __this->get_result_1();
		RuntimeObject* L_42 = ___input0;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_43 = __this->get_result_1();
		NullCheck(L_43);
		float* L_44 = L_43->get_address_of_y__11();
		NullCheck(L_42);
		bool L_45;
		L_45 = InterfaceFuncInvoker1< bool, float* >::Invoke(1 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadFloat(System.Single&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_42, (float*)L_44);
		NullCheck(L_41);
		L_41->set_hasY_10(L_45);
		// break;
		goto IL_00f2;
	}

IL_00d6:
	{
		// result.hasZ = input.ReadFloat(ref result.z_);
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_46 = __this->get_result_1();
		RuntimeObject* L_47 = ___input0;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_48 = __this->get_result_1();
		NullCheck(L_48);
		float* L_49 = L_48->get_address_of_z__14();
		NullCheck(L_47);
		bool L_50;
		L_50 = InterfaceFuncInvoker1< bool, float* >::Invoke(1 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadFloat(System.Single&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_47, (float*)L_49);
		NullCheck(L_46);
		L_46->set_hasZ_13(L_50);
	}

IL_00f2:
	{
		// while (input.ReadTag(out tag, out field_name)) {
		RuntimeObject* L_51 = ___input0;
		NullCheck(L_51);
		bool L_52;
		L_52 = InterfaceFuncInvoker2< bool, uint32_t*, String_t** >::Invoke(0 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadTag(System.UInt32&,System.String&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_51, (uint32_t*)(&V_0), (String_t**)(&V_1));
		if (L_52)
		{
			goto IL_000c;
		}
	}
	{
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/GyroscopeEvent/Builder::get_HasTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasTimestamp_m520F847687E69570ED4DE848E053A26C014EBBD2 (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasTimestamp; }
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasTimestamp_4();
		return L_1;
	}
}
// System.Int64 proto.PhoneEvent/Types/GyroscopeEvent/Builder::get_Timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Builder_get_Timestamp_m82F5C14DA9B300211A2662F6212C73EAA8848988 (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.Timestamp; }
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		int64_t L_1;
		L_1 = GyroscopeEvent_get_Timestamp_mDAB25E2A5E76FDC59EA0FD52702B79832EBBEA76_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/GyroscopeEvent/Builder::set_Timestamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Timestamp_m839BD838E91E5BA6F5075309D6837DC67136BB41 (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// set { SetTimestamp(value); }
		int64_t L_0 = ___value0;
		Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * L_1;
		L_1 = Builder_SetTimestamp_mD502BDAD5AF1DBA0AEFEE19C61C8EE5FFB58FB4F(__this, L_0, /*hidden argument*/NULL);
		// set { SetTimestamp(value); }
		return;
	}
}
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::SetTimestamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * Builder_SetTimestamp_mD502BDAD5AF1DBA0AEFEE19C61C8EE5FFB58FB4F (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_0;
		L_0 = Builder_PrepareBuilder_m9EEB831C2D95D85F3118CFE3575AF01A75EA1DF4(__this, /*hidden argument*/NULL);
		// result.hasTimestamp = true;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasTimestamp_4((bool)1);
		// result.timestamp_ = value;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_2 = __this->get_result_1();
		int64_t L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_timestamp__5(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::ClearTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * Builder_ClearTimestamp_m069BA3F1635D1ED18E7CF1D701D0D03DDEF2755C (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_0;
		L_0 = Builder_PrepareBuilder_m9EEB831C2D95D85F3118CFE3575AF01A75EA1DF4(__this, /*hidden argument*/NULL);
		// result.hasTimestamp = false;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasTimestamp_4((bool)0);
		// result.timestamp_ = 0L;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_timestamp__5(((int64_t)((int64_t)0)));
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/GyroscopeEvent/Builder::get_HasX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasX_m8F2E1BFE0947C74B88160F5512DAFBC943F7E9D3 (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasX; }
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasX_7();
		return L_1;
	}
}
// System.Single proto.PhoneEvent/Types/GyroscopeEvent/Builder::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Builder_get_X_m9238F0ED2A9530F848113CC62CE01F1027D68EA9 (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.X; }
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		float L_1;
		L_1 = GyroscopeEvent_get_X_mEE8C2D464F76A7BC1B6B1F18EB700E2D2AFB3889_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/GyroscopeEvent/Builder::set_X(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_X_m1351968A475CFCDF9E14A881E71A1D593E8618AA (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { SetX(value); }
		float L_0 = ___value0;
		Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * L_1;
		L_1 = Builder_SetX_mD12E10FD4B7A9C1BD1D37F7315B0A2A68072784F(__this, L_0, /*hidden argument*/NULL);
		// set { SetX(value); }
		return;
	}
}
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::SetX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * Builder_SetX_mD12E10FD4B7A9C1BD1D37F7315B0A2A68072784F (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_0;
		L_0 = Builder_PrepareBuilder_m9EEB831C2D95D85F3118CFE3575AF01A75EA1DF4(__this, /*hidden argument*/NULL);
		// result.hasX = true;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasX_7((bool)1);
		// result.x_ = value;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_2 = __this->get_result_1();
		float L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_x__8(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::ClearX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * Builder_ClearX_mD9F00FD1D4D3FC143684A6C48266D60ACA7EBC25 (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_0;
		L_0 = Builder_PrepareBuilder_m9EEB831C2D95D85F3118CFE3575AF01A75EA1DF4(__this, /*hidden argument*/NULL);
		// result.hasX = false;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasX_7((bool)0);
		// result.x_ = 0F;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_x__8((0.0f));
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/GyroscopeEvent/Builder::get_HasY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasY_m4205FA62641D9C56CE033FBD2552980903257BD8 (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasY; }
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasY_10();
		return L_1;
	}
}
// System.Single proto.PhoneEvent/Types/GyroscopeEvent/Builder::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Builder_get_Y_mA919FE9E23035259D98C854BF9A70B5F984047AC (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.Y; }
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		float L_1;
		L_1 = GyroscopeEvent_get_Y_m403E83657F6F879629C375BFB85493CBC38AAAB1_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/GyroscopeEvent/Builder::set_Y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Y_mCC48430DF59FDD34A168D995B77702DCA1BD7325 (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { SetY(value); }
		float L_0 = ___value0;
		Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * L_1;
		L_1 = Builder_SetY_m1BF7123A9F517E4C06A3E89766EDDC42F00C4FDA(__this, L_0, /*hidden argument*/NULL);
		// set { SetY(value); }
		return;
	}
}
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::SetY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * Builder_SetY_m1BF7123A9F517E4C06A3E89766EDDC42F00C4FDA (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_0;
		L_0 = Builder_PrepareBuilder_m9EEB831C2D95D85F3118CFE3575AF01A75EA1DF4(__this, /*hidden argument*/NULL);
		// result.hasY = true;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasY_10((bool)1);
		// result.y_ = value;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_2 = __this->get_result_1();
		float L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_y__11(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::ClearY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * Builder_ClearY_m6F303E9CECFC80C7B35E451D470EB5F2B819084F (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_0;
		L_0 = Builder_PrepareBuilder_m9EEB831C2D95D85F3118CFE3575AF01A75EA1DF4(__this, /*hidden argument*/NULL);
		// result.hasY = false;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasY_10((bool)0);
		// result.y_ = 0F;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_y__11((0.0f));
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/GyroscopeEvent/Builder::get_HasZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasZ_mCB05083F65D295A1562D652A891F426DD1613EDD (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasZ; }
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasZ_13();
		return L_1;
	}
}
// System.Single proto.PhoneEvent/Types/GyroscopeEvent/Builder::get_Z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Builder_get_Z_mB033C453976445E15FC61239B25BC4B8D2CA8055 (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.Z; }
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		float L_1;
		L_1 = GyroscopeEvent_get_Z_mCAB7F3326072E58DCB44F823428D590339D0EFC1_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/GyroscopeEvent/Builder::set_Z(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Z_m807E7F65FF7B6BD818775FD4B12D025234C1DCB6 (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { SetZ(value); }
		float L_0 = ___value0;
		Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * L_1;
		L_1 = Builder_SetZ_m1F85D4961517A7E69A254CEA4B2225D48A21F1EE(__this, L_0, /*hidden argument*/NULL);
		// set { SetZ(value); }
		return;
	}
}
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::SetZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * Builder_SetZ_m1F85D4961517A7E69A254CEA4B2225D48A21F1EE (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_0;
		L_0 = Builder_PrepareBuilder_m9EEB831C2D95D85F3118CFE3575AF01A75EA1DF4(__this, /*hidden argument*/NULL);
		// result.hasZ = true;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasZ_13((bool)1);
		// result.z_ = value;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_2 = __this->get_result_1();
		float L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_z__14(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::ClearZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * Builder_ClearZ_mE67F0CBB1377980D27C7BB716AAD154AAFE4FCA4 (Builder_t5B1018BCC2063C6781EE8C1DD7ABBD65F479FC70 * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_0;
		L_0 = Builder_PrepareBuilder_m9EEB831C2D95D85F3118CFE3575AF01A75EA1DF4(__this, /*hidden argument*/NULL);
		// result.hasZ = false;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasZ_13((bool)0);
		// result.z_ = 0F;
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_z__14((0.0f));
		// return this;
		return __this;
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
// proto.PhoneEvent/Types/KeyEvent/Builder proto.PhoneEvent/Types/KeyEvent/Builder::get_ThisBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * Builder_get_ThisBuilder_m6ACF89802991BD2C25D73F45DB26E32A0EC044B7 (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, const RuntimeMethod* method)
{
	{
		// get { return this; }
		return __this;
	}
}
// System.Void proto.PhoneEvent/Types/KeyEvent/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m3E23B9CB193933E02DB29CF7B16D24893276F02F (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2__ctor_m61E4509BE2C8EDCEEE4713C2126DB468BF310088_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Builder() {
		GeneratedBuilderLite_2__ctor_m61E4509BE2C8EDCEEE4713C2126DB468BF310088(__this, /*hidden argument*/GeneratedBuilderLite_2__ctor_m61E4509BE2C8EDCEEE4713C2126DB468BF310088_RuntimeMethod_var);
		// result = DefaultInstance;
		IL2CPP_RUNTIME_CLASS_INIT(KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_il2cpp_TypeInfo_var);
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_0;
		L_0 = KeyEvent_get_DefaultInstance_m5AC75ECE199AB1662690508B673CF317C7542DDA_inline(/*hidden argument*/NULL);
		__this->set_result_1(L_0);
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// }
		return;
	}
}
// System.Void proto.PhoneEvent/Types/KeyEvent/Builder::.ctor(proto.PhoneEvent/Types/KeyEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m3632CCF043CD4CAA8788A31E2AFFC01841FAD6DE (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * ___cloneFrom0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2__ctor_m61E4509BE2C8EDCEEE4713C2126DB468BF310088_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal Builder(KeyEvent cloneFrom) {
		GeneratedBuilderLite_2__ctor_m61E4509BE2C8EDCEEE4713C2126DB468BF310088(__this, /*hidden argument*/GeneratedBuilderLite_2__ctor_m61E4509BE2C8EDCEEE4713C2126DB468BF310088_RuntimeMethod_var);
		// result = cloneFrom;
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_0 = ___cloneFrom0;
		__this->set_result_1(L_0);
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// }
		return;
	}
}
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent/Builder::PrepareBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * Builder_PrepareBuilder_m9072ED8DB4742C981A591AC872838ECD820CB614 (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * V_0 = NULL;
	{
		// if (resultIsReadOnly) {
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// KeyEvent original = result;
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_1 = __this->get_result_1();
		V_0 = L_1;
		// result = new KeyEvent();
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_2 = (KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD *)il2cpp_codegen_object_new(KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_il2cpp_TypeInfo_var);
		KeyEvent__ctor_m3DE2296E5AD3027687D5F1379C2BE813D18D6B66(L_2, /*hidden argument*/NULL);
		__this->set_result_1(L_2);
		// resultIsReadOnly = false;
		__this->set_resultIsReadOnly_0((bool)0);
		// MergeFrom(original);
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_3 = V_0;
		Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * L_4;
		L_4 = VirtFuncInvoker1< Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC *, KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/KeyEvent,proto.PhoneEvent/Types/KeyEvent/Builder>::MergeFrom(!0) */, __this, L_3);
	}

IL_0029:
	{
		// return result;
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_5 = __this->get_result_1();
		return L_5;
	}
}
// System.Boolean proto.PhoneEvent/Types/KeyEvent/Builder::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_IsInitialized_m0F5F82C0CE9351377DC891CC74E08317217285BD (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, const RuntimeMethod* method)
{
	{
		// get { return result.IsInitialized; }
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean Google.ProtocolBuffers.AbstractMessageLite`2<proto.PhoneEvent/Types/KeyEvent,proto.PhoneEvent/Types/KeyEvent/Builder>::get_IsInitialized() */, L_0);
		return L_1;
	}
}
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent/Builder::get_MessageBeingBuilt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * Builder_get_MessageBeingBuilt_m59B7ED77F9F39734B7B38C1DC0752F042DA32A5C (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, const RuntimeMethod* method)
{
	{
		// get { return PrepareBuilder(); }
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_0;
		L_0 = Builder_PrepareBuilder_m9072ED8DB4742C981A591AC872838ECD820CB614(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/KeyEvent/Builder proto.PhoneEvent/Types/KeyEvent/Builder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * Builder_Clear_m36769161FF7C0B731690A166D92551B2F9D9F418 (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// result = DefaultInstance;
		IL2CPP_RUNTIME_CLASS_INIT(KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_il2cpp_TypeInfo_var);
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_0;
		L_0 = KeyEvent_get_DefaultInstance_m5AC75ECE199AB1662690508B673CF317C7542DDA_inline(/*hidden argument*/NULL);
		__this->set_result_1(L_0);
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/KeyEvent/Builder proto.PhoneEvent/Types/KeyEvent/Builder::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * Builder_Clone_mC46FB2010998EBDE912622709B5E9FB29EF75F64 (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (resultIsReadOnly) {
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Builder(result);
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_1 = __this->get_result_1();
		Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * L_2 = (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC *)il2cpp_codegen_object_new(Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC_il2cpp_TypeInfo_var);
		Builder__ctor_m3632CCF043CD4CAA8788A31E2AFFC01841FAD6DE(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		// return new Builder().MergeFrom(result);
		Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * L_3 = (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC *)il2cpp_codegen_object_new(Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC_il2cpp_TypeInfo_var);
		Builder__ctor_m3E23B9CB193933E02DB29CF7B16D24893276F02F(L_3, /*hidden argument*/NULL);
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_4 = __this->get_result_1();
		NullCheck(L_3);
		Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * L_5;
		L_5 = VirtFuncInvoker1< Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC *, KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/KeyEvent,proto.PhoneEvent/Types/KeyEvent/Builder>::MergeFrom(!0) */, L_3, L_4);
		return L_5;
	}
}
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent/Builder::get_DefaultInstanceForType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * Builder_get_DefaultInstanceForType_m418064B66800C08D705CE1A943DEBC5A2A586CCA (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return global::proto.PhoneEvent.Types.KeyEvent.DefaultInstance; }
		IL2CPP_RUNTIME_CLASS_INIT(KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_il2cpp_TypeInfo_var);
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_0;
		L_0 = KeyEvent_get_DefaultInstance_m5AC75ECE199AB1662690508B673CF317C7542DDA_inline(/*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent/Builder::BuildPartial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * Builder_BuildPartial_m0934A8A51970C3F654A12267D3EF72E7A07D68BB (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, const RuntimeMethod* method)
{
	{
		// if (resultIsReadOnly) {
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return result;
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_1 = __this->get_result_1();
		return L_1;
	}

IL_000f:
	{
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// return result.MakeReadOnly();
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_2 = __this->get_result_1();
		NullCheck(L_2);
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_3;
		L_3 = KeyEvent_MakeReadOnly_m42C228320F567FC84E30D28521B2FD9554C9491B(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// proto.PhoneEvent/Types/KeyEvent/Builder proto.PhoneEvent/Types/KeyEvent/Builder::MergeFrom(Google.ProtocolBuffers.IMessageLite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * Builder_MergeFrom_m37146908EB49BFA456FB4608832C1FF20ED04881 (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_MergeFrom_mAE26DA88C1759DA85732893EDCB9A7C46703E50F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other is KeyEvent) {
		RuntimeObject* L_0 = ___other0;
		if (!((KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD *)IsInstSealed((RuntimeObject*)L_0, KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		// return MergeFrom((KeyEvent) other);
		RuntimeObject* L_1 = ___other0;
		Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * L_2;
		L_2 = VirtFuncInvoker1< Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC *, KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/KeyEvent,proto.PhoneEvent/Types/KeyEvent/Builder>::MergeFrom(!0) */, __this, ((KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD *)CastclassSealed((RuntimeObject*)L_1, KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0015:
	{
		// base.MergeFrom(other);
		RuntimeObject* L_3 = ___other0;
		Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * L_4;
		L_4 = GeneratedBuilderLite_2_MergeFrom_mAE26DA88C1759DA85732893EDCB9A7C46703E50F(__this, L_3, /*hidden argument*/GeneratedBuilderLite_2_MergeFrom_mAE26DA88C1759DA85732893EDCB9A7C46703E50F_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/KeyEvent/Builder proto.PhoneEvent/Types/KeyEvent/Builder::MergeFrom(proto.PhoneEvent/Types/KeyEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * Builder_MergeFrom_mBF6CFDC4CC856EB0659515BFF4CA89D3481E34FA (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other == global::proto.PhoneEvent.Types.KeyEvent.DefaultInstance) return this;
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_0 = ___other0;
		IL2CPP_RUNTIME_CLASS_INIT(KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_il2cpp_TypeInfo_var);
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_1;
		L_1 = KeyEvent_get_DefaultInstance_m5AC75ECE199AB1662690508B673CF317C7542DDA_inline(/*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD *)L_0) == ((RuntimeObject*)(KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD *)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// if (other == global::proto.PhoneEvent.Types.KeyEvent.DefaultInstance) return this;
		return __this;
	}

IL_000a:
	{
		// PrepareBuilder();
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_2;
		L_2 = Builder_PrepareBuilder_m9072ED8DB4742C981A591AC872838ECD820CB614(__this, /*hidden argument*/NULL);
		// if (other.HasAction) {
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_3 = ___other0;
		NullCheck(L_3);
		bool L_4;
		L_4 = KeyEvent_get_HasAction_mAFB7CD8850A0ED2370DDD8671BF3F8EFE3174604_inline(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// Action = other.Action;
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_5 = ___other0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = KeyEvent_get_Action_mE0817B592E84C416B271F9B4F2B415453068D24E_inline(L_5, /*hidden argument*/NULL);
		Builder_set_Action_m4BC426C1D0EE793743A6E219E376DA5FD2FC655B(__this, L_6, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// if (other.HasCode) {
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_7 = ___other0;
		NullCheck(L_7);
		bool L_8;
		L_8 = KeyEvent_get_HasCode_m643FDB361D2519A3E1ADF282184ACE970F405403_inline(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		// Code = other.Code;
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_9 = ___other0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = KeyEvent_get_Code_m2D69BFE38B5929EAB024E35E90DD626A2A01D5A3_inline(L_9, /*hidden argument*/NULL);
		Builder_set_Code_mFF1C42647EB46DF4FE30FF6350E2D32A642D067F(__this, L_10, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/KeyEvent/Builder proto.PhoneEvent/Types/KeyEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * Builder_MergeFrom_mBBCC43DE4B347AF0DCC519B2F21929463FDCAE65 (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, RuntimeObject* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return MergeFrom(input, pb::ExtensionRegistry.Empty);
		RuntimeObject* L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_1;
		L_1 = ExtensionRegistry_get_Empty_mC0CEC24AC7345586186C0641D64BAAC63413DAA9_inline(/*hidden argument*/NULL);
		Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * L_2;
		L_2 = VirtFuncInvoker2< Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC *, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * >::Invoke(15 /* !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/KeyEvent,proto.PhoneEvent/Types/KeyEvent/Builder>::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry) */, __this, L_0, L_1);
		return L_2;
	}
}
// proto.PhoneEvent/Types/KeyEvent/Builder proto.PhoneEvent/Types/KeyEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * Builder_MergeFrom_m905A61E66BF7F4A56A2C9435E7B1E958EA96EDEF (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, RuntimeObject* ___input0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// PrepareBuilder();
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_0;
		L_0 = Builder_PrepareBuilder_m9072ED8DB4742C981A591AC872838ECD820CB614(__this, /*hidden argument*/NULL);
		goto IL_00a3;
	}

IL_000c:
	{
		// if(tag == 0 && field_name != null) {
		uint32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_003e;
		}
	}
	{
		String_t* L_2 = V_1;
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		// int field_ordinal = global::System.Array.BinarySearch(_keyEventFieldNames, field_name, global::System.StringComparer.Ordinal);
		IL2CPP_RUNTIME_CLASS_INIT(KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ((KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_StaticFields*)il2cpp_codegen_static_fields_for(KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_il2cpp_TypeInfo_var))->get__keyEventFieldNames_1();
		String_t* L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_5;
		L_5 = StringComparer_get_Ordinal_mF3B6370BEBD77351DB5218C867DCD669C47B8812_inline(/*hidden argument*/NULL);
		int32_t L_6;
		L_6 = Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD(L_3, L_4, L_5, /*hidden argument*/Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD_RuntimeMethod_var);
		V_2 = L_6;
		// if(field_ordinal >= 0)
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		// tag = _keyEventFieldTags[field_ordinal];
		IL2CPP_RUNTIME_CLASS_INIT(KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_8 = ((KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_StaticFields*)il2cpp_codegen_static_fields_for(KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_il2cpp_TypeInfo_var))->get__keyEventFieldTags_2();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = L_11;
		goto IL_003e;
	}

IL_0031:
	{
		// ParseUnknownField(input, extensionRegistry, tag, field_name);
		RuntimeObject* L_12 = ___input0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_13 = ___extensionRegistry1;
		uint32_t L_14 = V_0;
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = VirtFuncInvoker4< bool, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *, uint32_t, String_t* >::Invoke(27 /* System.Boolean Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/KeyEvent,proto.PhoneEvent/Types/KeyEvent/Builder>::ParseUnknownField(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry,System.UInt32,System.String) */, __this, L_12, L_13, L_14, L_15);
		// continue;
		goto IL_00a3;
	}

IL_003e:
	{
		uint32_t L_17 = V_0;
		if (!L_17)
		{
			goto IL_004c;
		}
	}
	{
		uint32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)8)))
		{
			goto IL_0069;
		}
	}
	{
		uint32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)16))))
		{
			goto IL_0087;
		}
	}
	{
		goto IL_0052;
	}

IL_004c:
	{
		// throw pb::InvalidProtocolBufferException.InvalidTag();
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_20;
		L_20 = InvalidProtocolBufferException_InvalidTag_m2B39E4AEE6E6B4DE200ED9B10F0128F140ADAF88(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Builder_MergeFrom_m905A61E66BF7F4A56A2C9435E7B1E958EA96EDEF_RuntimeMethod_var)));
	}

IL_0052:
	{
		// if (pb::WireFormat.IsEndGroupTag(tag)) {
		uint32_t L_21 = V_0;
		bool L_22;
		L_22 = WireFormat_IsEndGroupTag_mB577CA68ED4BEFC51C8E72F58E018D921140D929(L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_005c;
		}
	}
	{
		// return this;
		return __this;
	}

IL_005c:
	{
		// ParseUnknownField(input, extensionRegistry, tag, field_name);
		RuntimeObject* L_23 = ___input0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_24 = ___extensionRegistry1;
		uint32_t L_25 = V_0;
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = VirtFuncInvoker4< bool, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *, uint32_t, String_t* >::Invoke(27 /* System.Boolean Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/KeyEvent,proto.PhoneEvent/Types/KeyEvent/Builder>::ParseUnknownField(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry,System.UInt32,System.String) */, __this, L_23, L_24, L_25, L_26);
		// break;
		goto IL_00a3;
	}

IL_0069:
	{
		// result.hasAction = input.ReadInt32(ref result.action_);
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_28 = __this->get_result_1();
		RuntimeObject* L_29 = ___input0;
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_30 = __this->get_result_1();
		NullCheck(L_30);
		int32_t* L_31 = L_30->get_address_of_action__5();
		NullCheck(L_29);
		bool L_32;
		L_32 = InterfaceFuncInvoker1< bool, int32_t* >::Invoke(3 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadInt32(System.Int32&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_29, (int32_t*)L_31);
		NullCheck(L_28);
		L_28->set_hasAction_4(L_32);
		// break;
		goto IL_00a3;
	}

IL_0087:
	{
		// result.hasCode = input.ReadInt32(ref result.code_);
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_33 = __this->get_result_1();
		RuntimeObject* L_34 = ___input0;
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_35 = __this->get_result_1();
		NullCheck(L_35);
		int32_t* L_36 = L_35->get_address_of_code__8();
		NullCheck(L_34);
		bool L_37;
		L_37 = InterfaceFuncInvoker1< bool, int32_t* >::Invoke(3 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadInt32(System.Int32&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_34, (int32_t*)L_36);
		NullCheck(L_33);
		L_33->set_hasCode_7(L_37);
	}

IL_00a3:
	{
		// while (input.ReadTag(out tag, out field_name)) {
		RuntimeObject* L_38 = ___input0;
		NullCheck(L_38);
		bool L_39;
		L_39 = InterfaceFuncInvoker2< bool, uint32_t*, String_t** >::Invoke(0 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadTag(System.UInt32&,System.String&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_38, (uint32_t*)(&V_0), (String_t**)(&V_1));
		if (L_39)
		{
			goto IL_000c;
		}
	}
	{
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/KeyEvent/Builder::get_HasAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasAction_m0E9FE18C692D0ECEFE991A732549F95D3D4447B2 (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasAction; }
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasAction_4();
		return L_1;
	}
}
// System.Int32 proto.PhoneEvent/Types/KeyEvent/Builder::get_Action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Builder_get_Action_m1EC25220738001A6884B2ECD1C3C0AF2F5CA1138 (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, const RuntimeMethod* method)
{
	{
		// get { return result.Action; }
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_0 = __this->get_result_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = KeyEvent_get_Action_mE0817B592E84C416B271F9B4F2B415453068D24E_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/KeyEvent/Builder::set_Action(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Action_m4BC426C1D0EE793743A6E219E376DA5FD2FC655B (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { SetAction(value); }
		int32_t L_0 = ___value0;
		Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * L_1;
		L_1 = Builder_SetAction_mDF1A021E6F88ABF3A3ED23AECCDD888BB0BAD615(__this, L_0, /*hidden argument*/NULL);
		// set { SetAction(value); }
		return;
	}
}
// proto.PhoneEvent/Types/KeyEvent/Builder proto.PhoneEvent/Types/KeyEvent/Builder::SetAction(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * Builder_SetAction_mDF1A021E6F88ABF3A3ED23AECCDD888BB0BAD615 (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_0;
		L_0 = Builder_PrepareBuilder_m9072ED8DB4742C981A591AC872838ECD820CB614(__this, /*hidden argument*/NULL);
		// result.hasAction = true;
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasAction_4((bool)1);
		// result.action_ = value;
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_2 = __this->get_result_1();
		int32_t L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_action__5(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/KeyEvent/Builder proto.PhoneEvent/Types/KeyEvent/Builder::ClearAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * Builder_ClearAction_m85A9599B3AEF6EE73796EEA1C2400AE514AF7B78 (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_0;
		L_0 = Builder_PrepareBuilder_m9072ED8DB4742C981A591AC872838ECD820CB614(__this, /*hidden argument*/NULL);
		// result.hasAction = false;
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasAction_4((bool)0);
		// result.action_ = 0;
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_action__5(0);
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/KeyEvent/Builder::get_HasCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasCode_m4D5A471D8056E573F47559E0E33CA37B0930B8EB (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasCode; }
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasCode_7();
		return L_1;
	}
}
// System.Int32 proto.PhoneEvent/Types/KeyEvent/Builder::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Builder_get_Code_mE08EEEED2A3A7A6CF0670B1B411C3321B80D792E (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, const RuntimeMethod* method)
{
	{
		// get { return result.Code; }
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_0 = __this->get_result_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = KeyEvent_get_Code_m2D69BFE38B5929EAB024E35E90DD626A2A01D5A3_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/KeyEvent/Builder::set_Code(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Code_mFF1C42647EB46DF4FE30FF6350E2D32A642D067F (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { SetCode(value); }
		int32_t L_0 = ___value0;
		Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * L_1;
		L_1 = Builder_SetCode_m882DB4B361FF1F781CA50168E97E373E094F0867(__this, L_0, /*hidden argument*/NULL);
		// set { SetCode(value); }
		return;
	}
}
// proto.PhoneEvent/Types/KeyEvent/Builder proto.PhoneEvent/Types/KeyEvent/Builder::SetCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * Builder_SetCode_m882DB4B361FF1F781CA50168E97E373E094F0867 (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_0;
		L_0 = Builder_PrepareBuilder_m9072ED8DB4742C981A591AC872838ECD820CB614(__this, /*hidden argument*/NULL);
		// result.hasCode = true;
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasCode_7((bool)1);
		// result.code_ = value;
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_2 = __this->get_result_1();
		int32_t L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_code__8(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/KeyEvent/Builder proto.PhoneEvent/Types/KeyEvent/Builder::ClearCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * Builder_ClearCode_m153C11281091A79DA63428D1866171EAE7F367C2 (Builder_t1844897C1BEBBEA53EF8951B09A8962BA9A534AC * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_0;
		L_0 = Builder_PrepareBuilder_m9072ED8DB4742C981A591AC872838ECD820CB614(__this, /*hidden argument*/NULL);
		// result.hasCode = false;
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasCode_7((bool)0);
		// result.code_ = 0;
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_code__8(0);
		// return this;
		return __this;
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
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::get_ThisBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * Builder_get_ThisBuilder_m5EA09A588427184A3460FE756D55E5FB77910526 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, const RuntimeMethod* method)
{
	{
		// get { return this; }
		return __this;
	}
}
// System.Void proto.PhoneEvent/Types/MotionEvent/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m807A9CD5CBDB4DEA9932C8888CF854B7D915E944 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2__ctor_mDDA4587CC7CC1FD23D6A9C169CCFAF348A20672C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Builder() {
		GeneratedBuilderLite_2__ctor_mDDA4587CC7CC1FD23D6A9C169CCFAF348A20672C(__this, /*hidden argument*/GeneratedBuilderLite_2__ctor_mDDA4587CC7CC1FD23D6A9C169CCFAF348A20672C_RuntimeMethod_var);
		// result = DefaultInstance;
		IL2CPP_RUNTIME_CLASS_INIT(MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_il2cpp_TypeInfo_var);
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_0;
		L_0 = MotionEvent_get_DefaultInstance_mF373AC002EDBB3A90A103DC28039BB2ED4291E44_inline(/*hidden argument*/NULL);
		__this->set_result_1(L_0);
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// }
		return;
	}
}
// System.Void proto.PhoneEvent/Types/MotionEvent/Builder::.ctor(proto.PhoneEvent/Types/MotionEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m0D15C015E2D676B4259FF6298DB142F39C0A1778 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * ___cloneFrom0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2__ctor_mDDA4587CC7CC1FD23D6A9C169CCFAF348A20672C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal Builder(MotionEvent cloneFrom) {
		GeneratedBuilderLite_2__ctor_mDDA4587CC7CC1FD23D6A9C169CCFAF348A20672C(__this, /*hidden argument*/GeneratedBuilderLite_2__ctor_mDDA4587CC7CC1FD23D6A9C169CCFAF348A20672C_RuntimeMethod_var);
		// result = cloneFrom;
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_0 = ___cloneFrom0;
		__this->set_result_1(L_0);
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// }
		return;
	}
}
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent/Builder::PrepareBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * Builder_PrepareBuilder_m9B221144D5B54CE617D38A05CA2CCBD8D8374A41 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * V_0 = NULL;
	{
		// if (resultIsReadOnly) {
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// MotionEvent original = result;
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_1 = __this->get_result_1();
		V_0 = L_1;
		// result = new MotionEvent();
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_2 = (MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 *)il2cpp_codegen_object_new(MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_il2cpp_TypeInfo_var);
		MotionEvent__ctor_m1008B1EC3CB874B458A27C37B1096BD6E04C08BB(L_2, /*hidden argument*/NULL);
		__this->set_result_1(L_2);
		// resultIsReadOnly = false;
		__this->set_resultIsReadOnly_0((bool)0);
		// MergeFrom(original);
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_3 = V_0;
		Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * L_4;
		L_4 = VirtFuncInvoker1< Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D *, MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent,proto.PhoneEvent/Types/MotionEvent/Builder>::MergeFrom(!0) */, __this, L_3);
	}

IL_0029:
	{
		// return result;
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_5 = __this->get_result_1();
		return L_5;
	}
}
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Builder::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_IsInitialized_mC8D253722BB73AC1674B9CCAE0C75D61F8C304F9 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, const RuntimeMethod* method)
{
	{
		// get { return result.IsInitialized; }
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean Google.ProtocolBuffers.AbstractMessageLite`2<proto.PhoneEvent/Types/MotionEvent,proto.PhoneEvent/Types/MotionEvent/Builder>::get_IsInitialized() */, L_0);
		return L_1;
	}
}
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent/Builder::get_MessageBeingBuilt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * Builder_get_MessageBeingBuilt_m2E05281394A60B6A90306D4F8DF252E148464625 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, const RuntimeMethod* method)
{
	{
		// get { return PrepareBuilder(); }
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_0;
		L_0 = Builder_PrepareBuilder_m9B221144D5B54CE617D38A05CA2CCBD8D8374A41(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * Builder_Clear_mC9BB3881B5FBA5765F5DB373CC9537C253B4EB69 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// result = DefaultInstance;
		IL2CPP_RUNTIME_CLASS_INIT(MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_il2cpp_TypeInfo_var);
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_0;
		L_0 = MotionEvent_get_DefaultInstance_mF373AC002EDBB3A90A103DC28039BB2ED4291E44_inline(/*hidden argument*/NULL);
		__this->set_result_1(L_0);
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * Builder_Clone_m35A0D469B8DB470DE552C4E0A472A37A8E3CD99B (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (resultIsReadOnly) {
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Builder(result);
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_1 = __this->get_result_1();
		Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * L_2 = (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D *)il2cpp_codegen_object_new(Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D_il2cpp_TypeInfo_var);
		Builder__ctor_m0D15C015E2D676B4259FF6298DB142F39C0A1778(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		// return new Builder().MergeFrom(result);
		Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * L_3 = (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D *)il2cpp_codegen_object_new(Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D_il2cpp_TypeInfo_var);
		Builder__ctor_m807A9CD5CBDB4DEA9932C8888CF854B7D915E944(L_3, /*hidden argument*/NULL);
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_4 = __this->get_result_1();
		NullCheck(L_3);
		Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * L_5;
		L_5 = VirtFuncInvoker1< Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D *, MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent,proto.PhoneEvent/Types/MotionEvent/Builder>::MergeFrom(!0) */, L_3, L_4);
		return L_5;
	}
}
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent/Builder::get_DefaultInstanceForType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * Builder_get_DefaultInstanceForType_m3991E60EC4F499EFFD65D8DB2CF8E8DA19EB1D70 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return global::proto.PhoneEvent.Types.MotionEvent.DefaultInstance; }
		IL2CPP_RUNTIME_CLASS_INIT(MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_il2cpp_TypeInfo_var);
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_0;
		L_0 = MotionEvent_get_DefaultInstance_mF373AC002EDBB3A90A103DC28039BB2ED4291E44_inline(/*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent/Builder::BuildPartial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * Builder_BuildPartial_m21C32366CAC1155DF099D46AEBA66F73CB3A4742 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, const RuntimeMethod* method)
{
	{
		// if (resultIsReadOnly) {
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return result;
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_1 = __this->get_result_1();
		return L_1;
	}

IL_000f:
	{
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// return result.MakeReadOnly();
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_3;
		L_3 = MotionEvent_MakeReadOnly_m3E383C57908D879982D00CFA939B703A637F163B(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::MergeFrom(Google.ProtocolBuffers.IMessageLite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * Builder_MergeFrom_m0F2D260E6720D37C37D25601626285462BF91A64 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_MergeFrom_mD54454BB926B06D6F7BED729A65E3077DC0C1271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other is MotionEvent) {
		RuntimeObject* L_0 = ___other0;
		if (!((MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 *)IsInstSealed((RuntimeObject*)L_0, MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		// return MergeFrom((MotionEvent) other);
		RuntimeObject* L_1 = ___other0;
		Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * L_2;
		L_2 = VirtFuncInvoker1< Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D *, MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent,proto.PhoneEvent/Types/MotionEvent/Builder>::MergeFrom(!0) */, __this, ((MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 *)CastclassSealed((RuntimeObject*)L_1, MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0015:
	{
		// base.MergeFrom(other);
		RuntimeObject* L_3 = ___other0;
		Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * L_4;
		L_4 = GeneratedBuilderLite_2_MergeFrom_mD54454BB926B06D6F7BED729A65E3077DC0C1271(__this, L_3, /*hidden argument*/GeneratedBuilderLite_2_MergeFrom_mD54454BB926B06D6F7BED729A65E3077DC0C1271_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::MergeFrom(proto.PhoneEvent/Types/MotionEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * Builder_MergeFrom_m4C17D13F2F98D8DE4BCA8799ADDA09AB9154A473 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PopsicleList_1_Add_mFC00286C6B3AB9097A56085772F9A5C62513C9B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PopsicleList_1_get_Count_mF2360C487F3B806D6B8D5863B19C3D746E9874A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other == global::proto.PhoneEvent.Types.MotionEvent.DefaultInstance) return this;
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_0 = ___other0;
		IL2CPP_RUNTIME_CLASS_INIT(MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_il2cpp_TypeInfo_var);
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_1;
		L_1 = MotionEvent_get_DefaultInstance_mF373AC002EDBB3A90A103DC28039BB2ED4291E44_inline(/*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 *)L_0) == ((RuntimeObject*)(MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 *)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// if (other == global::proto.PhoneEvent.Types.MotionEvent.DefaultInstance) return this;
		return __this;
	}

IL_000a:
	{
		// PrepareBuilder();
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_2;
		L_2 = Builder_PrepareBuilder_m9B221144D5B54CE617D38A05CA2CCBD8D8374A41(__this, /*hidden argument*/NULL);
		// if (other.HasTimestamp) {
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_3 = ___other0;
		NullCheck(L_3);
		bool L_4;
		L_4 = MotionEvent_get_HasTimestamp_mEF14C6A962AD02AFFBC4477FEC77C4CC709EB7C6_inline(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// Timestamp = other.Timestamp;
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_5 = ___other0;
		NullCheck(L_5);
		int64_t L_6;
		L_6 = MotionEvent_get_Timestamp_m7B094DC0B3BE702FFDFB21F7E7B03BB45D24C220_inline(L_5, /*hidden argument*/NULL);
		Builder_set_Timestamp_m7E430FEC5821E4789B8A01907A02CF6257370A81(__this, L_6, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// if (other.HasAction) {
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_7 = ___other0;
		NullCheck(L_7);
		bool L_8;
		L_8 = MotionEvent_get_HasAction_m1C19F376EED271CBBA01698349475528845EAFD0_inline(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		// Action = other.Action;
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_9 = ___other0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = MotionEvent_get_Action_mAE5AB179BB654FC8DA1161BBEA4913C22E8599FD_inline(L_9, /*hidden argument*/NULL);
		Builder_set_Action_mEB5E09073027B483C078F37328312A7201900760(__this, L_10, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// if (other.pointers_.Count != 0) {
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_11 = ___other0;
		NullCheck(L_11);
		PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB * L_12 = L_11->get_pointers__10();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = PopsicleList_1_get_Count_mF2360C487F3B806D6B8D5863B19C3D746E9874A1(L_12, /*hidden argument*/PopsicleList_1_get_Count_mF2360C487F3B806D6B8D5863B19C3D746E9874A1_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		// result.pointers_.Add(other.pointers_);
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_14 = __this->get_result_1();
		NullCheck(L_14);
		PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB * L_15 = L_14->get_pointers__10();
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_16 = ___other0;
		NullCheck(L_16);
		PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB * L_17 = L_16->get_pointers__10();
		NullCheck(L_15);
		PopsicleList_1_Add_mFC00286C6B3AB9097A56085772F9A5C62513C9B6(L_15, L_17, /*hidden argument*/PopsicleList_1_Add_mFC00286C6B3AB9097A56085772F9A5C62513C9B6_RuntimeMethod_var);
	}

IL_005c:
	{
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * Builder_MergeFrom_m37B9AF62921F3381464719E965D77CB62C848325 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, RuntimeObject* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return MergeFrom(input, pb::ExtensionRegistry.Empty);
		RuntimeObject* L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_1;
		L_1 = ExtensionRegistry_get_Empty_mC0CEC24AC7345586186C0641D64BAAC63413DAA9_inline(/*hidden argument*/NULL);
		Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * L_2;
		L_2 = VirtFuncInvoker2< Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D *, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * >::Invoke(15 /* !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent,proto.PhoneEvent/Types/MotionEvent/Builder>::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry) */, __this, L_0, L_1);
		return L_2;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * Builder_MergeFrom_m7F1DB8FB5995652428C4B3EBBAA0851C2D9514CE (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, RuntimeObject* ___input0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICodedInputStream_ReadMessageArray_TisPointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_mB1BDBAEDFAEE5035123A071FCA1AC7381285AF65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// PrepareBuilder();
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_0;
		L_0 = Builder_PrepareBuilder_m9B221144D5B54CE617D38A05CA2CCBD8D8374A41(__this, /*hidden argument*/NULL);
		goto IL_00cc;
	}

IL_000c:
	{
		// if(tag == 0 && field_name != null) {
		uint32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		// int field_ordinal = global::System.Array.BinarySearch(_motionEventFieldNames, field_name, global::System.StringComparer.Ordinal);
		IL2CPP_RUNTIME_CLASS_INIT(MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ((MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_StaticFields*)il2cpp_codegen_static_fields_for(MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_il2cpp_TypeInfo_var))->get__motionEventFieldNames_1();
		String_t* L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_5;
		L_5 = StringComparer_get_Ordinal_mF3B6370BEBD77351DB5218C867DCD669C47B8812_inline(/*hidden argument*/NULL);
		int32_t L_6;
		L_6 = Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD(L_3, L_4, L_5, /*hidden argument*/Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD_RuntimeMethod_var);
		V_2 = L_6;
		// if(field_ordinal >= 0)
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		// tag = _motionEventFieldTags[field_ordinal];
		IL2CPP_RUNTIME_CLASS_INIT(MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_8 = ((MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_StaticFields*)il2cpp_codegen_static_fields_for(MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_il2cpp_TypeInfo_var))->get__motionEventFieldTags_2();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = L_11;
		goto IL_0041;
	}

IL_0031:
	{
		// ParseUnknownField(input, extensionRegistry, tag, field_name);
		RuntimeObject* L_12 = ___input0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_13 = ___extensionRegistry1;
		uint32_t L_14 = V_0;
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = VirtFuncInvoker4< bool, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *, uint32_t, String_t* >::Invoke(27 /* System.Boolean Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent,proto.PhoneEvent/Types/MotionEvent/Builder>::ParseUnknownField(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry,System.UInt32,System.String) */, __this, L_12, L_13, L_14, L_15);
		// continue;
		goto IL_00cc;
	}

IL_0041:
	{
		uint32_t L_17 = V_0;
		if ((!(((uint32_t)L_17) <= ((uint32_t)8))))
		{
			goto IL_004e;
		}
	}
	{
		uint32_t L_18 = V_0;
		if (!L_18)
		{
			goto IL_005a;
		}
	}
	{
		uint32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)8)))
		{
			goto IL_0077;
		}
	}
	{
		goto IL_0060;
	}

IL_004e:
	{
		uint32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)16))))
		{
			goto IL_0095;
		}
	}
	{
		uint32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)26))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_0060;
	}

IL_005a:
	{
		// throw pb::InvalidProtocolBufferException.InvalidTag();
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_22;
		L_22 = InvalidProtocolBufferException_InvalidTag_m2B39E4AEE6E6B4DE200ED9B10F0128F140ADAF88(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Builder_MergeFrom_m7F1DB8FB5995652428C4B3EBBAA0851C2D9514CE_RuntimeMethod_var)));
	}

IL_0060:
	{
		// if (pb::WireFormat.IsEndGroupTag(tag)) {
		uint32_t L_23 = V_0;
		bool L_24;
		L_24 = WireFormat_IsEndGroupTag_mB577CA68ED4BEFC51C8E72F58E018D921140D929(L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_006a;
		}
	}
	{
		// return this;
		return __this;
	}

IL_006a:
	{
		// ParseUnknownField(input, extensionRegistry, tag, field_name);
		RuntimeObject* L_25 = ___input0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_26 = ___extensionRegistry1;
		uint32_t L_27 = V_0;
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = VirtFuncInvoker4< bool, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *, uint32_t, String_t* >::Invoke(27 /* System.Boolean Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent,proto.PhoneEvent/Types/MotionEvent/Builder>::ParseUnknownField(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry,System.UInt32,System.String) */, __this, L_25, L_26, L_27, L_28);
		// break;
		goto IL_00cc;
	}

IL_0077:
	{
		// result.hasTimestamp = input.ReadInt64(ref result.timestamp_);
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_30 = __this->get_result_1();
		RuntimeObject* L_31 = ___input0;
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_32 = __this->get_result_1();
		NullCheck(L_32);
		int64_t* L_33 = L_32->get_address_of_timestamp__5();
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker1< bool, int64_t* >::Invoke(2 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadInt64(System.Int64&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_31, (int64_t*)L_33);
		NullCheck(L_30);
		L_30->set_hasTimestamp_4(L_34);
		// break;
		goto IL_00cc;
	}

IL_0095:
	{
		// result.hasAction = input.ReadInt32(ref result.action_);
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_35 = __this->get_result_1();
		RuntimeObject* L_36 = ___input0;
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_37 = __this->get_result_1();
		NullCheck(L_37);
		int32_t* L_38 = L_37->get_address_of_action__8();
		NullCheck(L_36);
		bool L_39;
		L_39 = InterfaceFuncInvoker1< bool, int32_t* >::Invoke(3 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadInt32(System.Int32&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_36, (int32_t*)L_38);
		NullCheck(L_35);
		L_35->set_hasAction_7(L_39);
		// break;
		goto IL_00cc;
	}

IL_00b3:
	{
		// input.ReadMessageArray(tag, field_name, result.pointers_, global::proto.PhoneEvent.Types.MotionEvent.Types.Pointer.DefaultInstance, extensionRegistry);
		RuntimeObject* L_40 = ___input0;
		uint32_t L_41 = V_0;
		String_t* L_42 = V_1;
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_43 = __this->get_result_1();
		NullCheck(L_43);
		PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB * L_44 = L_43->get_pointers__10();
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_45;
		L_45 = Pointer_get_DefaultInstance_m62857201F32F992458F0D816DF7B91DEB32AD858_inline(/*hidden argument*/NULL);
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_46 = ___extensionRegistry1;
		NullCheck(L_40);
		GenericInterfaceActionInvoker5< uint32_t, String_t*, RuntimeObject*, Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 *, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * >::Invoke(ICodedInputStream_ReadMessageArray_TisPointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_mB1BDBAEDFAEE5035123A071FCA1AC7381285AF65_RuntimeMethod_var, L_40, L_41, L_42, L_44, L_45, L_46);
	}

IL_00cc:
	{
		// while (input.ReadTag(out tag, out field_name)) {
		RuntimeObject* L_47 = ___input0;
		NullCheck(L_47);
		bool L_48;
		L_48 = InterfaceFuncInvoker2< bool, uint32_t*, String_t** >::Invoke(0 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadTag(System.UInt32&,System.String&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_47, (uint32_t*)(&V_0), (String_t**)(&V_1));
		if (L_48)
		{
			goto IL_000c;
		}
	}
	{
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Builder::get_HasTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasTimestamp_mBA42971DCDB056A17C15D8442C0A2C9A6221649D (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasTimestamp; }
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasTimestamp_4();
		return L_1;
	}
}
// System.Int64 proto.PhoneEvent/Types/MotionEvent/Builder::get_Timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Builder_get_Timestamp_m88D7D5AFCEF3A78EA028DCA1C5AE152FDCDB34CA (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, const RuntimeMethod* method)
{
	{
		// get { return result.Timestamp; }
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		int64_t L_1;
		L_1 = MotionEvent_get_Timestamp_m7B094DC0B3BE702FFDFB21F7E7B03BB45D24C220_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/MotionEvent/Builder::set_Timestamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Timestamp_m7E430FEC5821E4789B8A01907A02CF6257370A81 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// set { SetTimestamp(value); }
		int64_t L_0 = ___value0;
		Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * L_1;
		L_1 = Builder_SetTimestamp_m7142D8D87953552549E38114F3AF6FA637949E15(__this, L_0, /*hidden argument*/NULL);
		// set { SetTimestamp(value); }
		return;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::SetTimestamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * Builder_SetTimestamp_m7142D8D87953552549E38114F3AF6FA637949E15 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_0;
		L_0 = Builder_PrepareBuilder_m9B221144D5B54CE617D38A05CA2CCBD8D8374A41(__this, /*hidden argument*/NULL);
		// result.hasTimestamp = true;
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasTimestamp_4((bool)1);
		// result.timestamp_ = value;
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_2 = __this->get_result_1();
		int64_t L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_timestamp__5(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::ClearTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * Builder_ClearTimestamp_mFD839C7F6E74C2CD6854B11E8F08AEFDAF5C8524 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_0;
		L_0 = Builder_PrepareBuilder_m9B221144D5B54CE617D38A05CA2CCBD8D8374A41(__this, /*hidden argument*/NULL);
		// result.hasTimestamp = false;
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasTimestamp_4((bool)0);
		// result.timestamp_ = 0L;
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_timestamp__5(((int64_t)((int64_t)0)));
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Builder::get_HasAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasAction_m3E3FFECAFFA652509CAAAEA5C84DB9E34690A832 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasAction; }
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasAction_7();
		return L_1;
	}
}
// System.Int32 proto.PhoneEvent/Types/MotionEvent/Builder::get_Action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Builder_get_Action_mB5D750B472322D7443BB6378C547E561EE28FDB5 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, const RuntimeMethod* method)
{
	{
		// get { return result.Action; }
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = MotionEvent_get_Action_mAE5AB179BB654FC8DA1161BBEA4913C22E8599FD_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/MotionEvent/Builder::set_Action(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Action_mEB5E09073027B483C078F37328312A7201900760 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { SetAction(value); }
		int32_t L_0 = ___value0;
		Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * L_1;
		L_1 = Builder_SetAction_mF54D7F6E04A5F6E5249B83AF74D623B2B07BDAC3(__this, L_0, /*hidden argument*/NULL);
		// set { SetAction(value); }
		return;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::SetAction(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * Builder_SetAction_mF54D7F6E04A5F6E5249B83AF74D623B2B07BDAC3 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_0;
		L_0 = Builder_PrepareBuilder_m9B221144D5B54CE617D38A05CA2CCBD8D8374A41(__this, /*hidden argument*/NULL);
		// result.hasAction = true;
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasAction_7((bool)1);
		// result.action_ = value;
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_2 = __this->get_result_1();
		int32_t L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_action__8(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::ClearAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * Builder_ClearAction_m3C59FF2232EAB791CC5810782DB06F298E63A6E3 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_0;
		L_0 = Builder_PrepareBuilder_m9B221144D5B54CE617D38A05CA2CCBD8D8374A41(__this, /*hidden argument*/NULL);
		// result.hasAction = false;
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasAction_7((bool)0);
		// result.action_ = 0;
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_action__8(0);
		// return this;
		return __this;
	}
}
// Google.ProtocolBuffers.Collections.IPopsicleList`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer> proto.PhoneEvent/Types/MotionEvent/Builder::get_PointersList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Builder_get_PointersList_mEA444E366A827656026C81EA850B921A021519A0 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, const RuntimeMethod* method)
{
	{
		// get { return PrepareBuilder().pointers_; }
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_0;
		L_0 = Builder_PrepareBuilder_m9B221144D5B54CE617D38A05CA2CCBD8D8374A41(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB * L_1 = L_0->get_pointers__10();
		return L_1;
	}
}
// System.Int32 proto.PhoneEvent/Types/MotionEvent/Builder::get_PointersCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Builder_get_PointersCount_m5B63CB5E37EDAC49FB4D8B6C24CFBD5E90A8F1CF (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, const RuntimeMethod* method)
{
	{
		// get { return result.PointersCount; }
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = MotionEvent_get_PointersCount_m549608E861C6481ED192FE8A474180A0CB53561C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Builder::GetPointers(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Builder_GetPointers_mB918281207DEBEB304602D1DA308D110DFACF080 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// return result.GetPointers(index);
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_0 = __this->get_result_1();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_2;
		L_2 = MotionEvent_GetPointers_m21408174F32F231B3A9294FA9A6A531405E351D5(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::SetPointers(System.Int32,proto.PhoneEvent/Types/MotionEvent/Types/Pointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * Builder_SetPointers_mF6881FEBFD1E2E3711827BE26CD34793249B195A (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, int32_t ___index0, Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PopsicleList_1_set_Item_m4DD2312A90005595B7AD483EE03762A2E1A5E809_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pb::ThrowHelper.ThrowIfNull(value, "value");
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = ___value1;
		ThrowHelper_ThrowIfNull_mB38F1A7437B7520460411B3DCA9A068E6BCE62CC(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, /*hidden argument*/NULL);
		// PrepareBuilder();
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_1;
		L_1 = Builder_PrepareBuilder_m9B221144D5B54CE617D38A05CA2CCBD8D8374A41(__this, /*hidden argument*/NULL);
		// result.pointers_[index] = value;
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB * L_3 = L_2->get_pointers__10();
		int32_t L_4 = ___index0;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_5 = ___value1;
		NullCheck(L_3);
		PopsicleList_1_set_Item_m4DD2312A90005595B7AD483EE03762A2E1A5E809(L_3, L_4, L_5, /*hidden argument*/PopsicleList_1_set_Item_m4DD2312A90005595B7AD483EE03762A2E1A5E809_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::SetPointers(System.Int32,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * Builder_SetPointers_mCA9969F9D33FEF0336CE3DF669676A7757ECECAE (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, int32_t ___index0, Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * ___builderForValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PopsicleList_1_set_Item_m4DD2312A90005595B7AD483EE03762A2E1A5E809_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB05F3F32A7D87C546E7C6C02EB005F2AD312A554);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pb::ThrowHelper.ThrowIfNull(builderForValue, "builderForValue");
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0 = ___builderForValue1;
		ThrowHelper_ThrowIfNull_mB38F1A7437B7520460411B3DCA9A068E6BCE62CC(L_0, _stringLiteralB05F3F32A7D87C546E7C6C02EB005F2AD312A554, /*hidden argument*/NULL);
		// PrepareBuilder();
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_1;
		L_1 = Builder_PrepareBuilder_m9B221144D5B54CE617D38A05CA2CCBD8D8374A41(__this, /*hidden argument*/NULL);
		// result.pointers_[index] = builderForValue.Build();
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB * L_3 = L_2->get_pointers__10();
		int32_t L_4 = ___index0;
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_5 = ___builderForValue1;
		NullCheck(L_5);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_6;
		L_6 = VirtFuncInvoker0< Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * >::Invoke(12 /* !0 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::Build() */, L_5);
		NullCheck(L_3);
		PopsicleList_1_set_Item_m4DD2312A90005595B7AD483EE03762A2E1A5E809(L_3, L_4, L_6, /*hidden argument*/PopsicleList_1_set_Item_m4DD2312A90005595B7AD483EE03762A2E1A5E809_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::AddPointers(proto.PhoneEvent/Types/MotionEvent/Types/Pointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * Builder_AddPointers_m3C60F9708410B9D1A910C4861432041D7C9BE173 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PopsicleList_1_Add_mBF830C6032B6BBF797AFC55C674F6CDA5C241011_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pb::ThrowHelper.ThrowIfNull(value, "value");
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = ___value0;
		ThrowHelper_ThrowIfNull_mB38F1A7437B7520460411B3DCA9A068E6BCE62CC(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, /*hidden argument*/NULL);
		// PrepareBuilder();
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_1;
		L_1 = Builder_PrepareBuilder_m9B221144D5B54CE617D38A05CA2CCBD8D8374A41(__this, /*hidden argument*/NULL);
		// result.pointers_.Add(value);
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB * L_3 = L_2->get_pointers__10();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_4 = ___value0;
		NullCheck(L_3);
		PopsicleList_1_Add_mBF830C6032B6BBF797AFC55C674F6CDA5C241011(L_3, L_4, /*hidden argument*/PopsicleList_1_Add_mBF830C6032B6BBF797AFC55C674F6CDA5C241011_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::AddPointers(proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * Builder_AddPointers_m6298964D062E708A8ED6FD80E56DC5A6A304C992 (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * ___builderForValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PopsicleList_1_Add_mBF830C6032B6BBF797AFC55C674F6CDA5C241011_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB05F3F32A7D87C546E7C6C02EB005F2AD312A554);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pb::ThrowHelper.ThrowIfNull(builderForValue, "builderForValue");
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0 = ___builderForValue0;
		ThrowHelper_ThrowIfNull_mB38F1A7437B7520460411B3DCA9A068E6BCE62CC(L_0, _stringLiteralB05F3F32A7D87C546E7C6C02EB005F2AD312A554, /*hidden argument*/NULL);
		// PrepareBuilder();
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_1;
		L_1 = Builder_PrepareBuilder_m9B221144D5B54CE617D38A05CA2CCBD8D8374A41(__this, /*hidden argument*/NULL);
		// result.pointers_.Add(builderForValue.Build());
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB * L_3 = L_2->get_pointers__10();
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_4 = ___builderForValue0;
		NullCheck(L_4);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_5;
		L_5 = VirtFuncInvoker0< Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * >::Invoke(12 /* !0 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::Build() */, L_4);
		NullCheck(L_3);
		PopsicleList_1_Add_mBF830C6032B6BBF797AFC55C674F6CDA5C241011(L_3, L_5, /*hidden argument*/PopsicleList_1_Add_mBF830C6032B6BBF797AFC55C674F6CDA5C241011_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::AddRangePointers(System.Collections.Generic.IEnumerable`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * Builder_AddRangePointers_mD3D7B42787949A325677B4778FF1AC574F3ACB2D (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, RuntimeObject* ___values0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PopsicleList_1_Add_mFC00286C6B3AB9097A56085772F9A5C62513C9B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PrepareBuilder();
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_0;
		L_0 = Builder_PrepareBuilder_m9B221144D5B54CE617D38A05CA2CCBD8D8374A41(__this, /*hidden argument*/NULL);
		// result.pointers_.Add(values);
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB * L_2 = L_1->get_pointers__10();
		RuntimeObject* L_3 = ___values0;
		NullCheck(L_2);
		PopsicleList_1_Add_mFC00286C6B3AB9097A56085772F9A5C62513C9B6(L_2, L_3, /*hidden argument*/PopsicleList_1_Add_mFC00286C6B3AB9097A56085772F9A5C62513C9B6_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::ClearPointers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * Builder_ClearPointers_mBCD69962FBB55B49D8BED2DBE88787EDF64BAD1D (Builder_tEE32D9BA5682423DAD3BBE855AFEE6B20F45172D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PopsicleList_1_Clear_mD8CA13514562BEB119AC8409BD1D1B5E08E0A781_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PrepareBuilder();
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_0;
		L_0 = Builder_PrepareBuilder_m9B221144D5B54CE617D38A05CA2CCBD8D8374A41(__this, /*hidden argument*/NULL);
		// result.pointers_.Clear();
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		PopsicleList_1_t527FF6175734609DB1B61130EE15B25E93E51AAB * L_2 = L_1->get_pointers__10();
		NullCheck(L_2);
		PopsicleList_1_Clear_mD8CA13514562BEB119AC8409BD1D1B5E08E0A781(L_2, /*hidden argument*/PopsicleList_1_Clear_mD8CA13514562BEB119AC8409BD1D1B5E08E0A781_RuntimeMethod_var);
		// return this;
		return __this;
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
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::get_ThisBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * Builder_get_ThisBuilder_mE049CAA5BB89E6383BBB16084117D00C10C63A38 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method)
{
	{
		// get { return this; }
		return __this;
	}
}
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_mD8D39ADD33273A273218742A9468CF0BAC92DE22 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2__ctor_mD7325A4241D20915B0AF5874B5C6A4E78E1702E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Builder() {
		GeneratedBuilderLite_2__ctor_mD7325A4241D20915B0AF5874B5C6A4E78E1702E2(__this, /*hidden argument*/GeneratedBuilderLite_2__ctor_mD7325A4241D20915B0AF5874B5C6A4E78E1702E2_RuntimeMethod_var);
		// result = DefaultInstance;
		IL2CPP_RUNTIME_CLASS_INIT(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_il2cpp_TypeInfo_var);
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0;
		L_0 = OrientationEvent_get_DefaultInstance_m7F7CA2111C4A2656195A3465D8D437D1BDD13DAF_inline(/*hidden argument*/NULL);
		__this->set_result_1(L_0);
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// }
		return;
	}
}
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::.ctor(proto.PhoneEvent/Types/OrientationEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_mA7C4031831251B96E805F3A055FD152C316225FF (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * ___cloneFrom0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2__ctor_mD7325A4241D20915B0AF5874B5C6A4E78E1702E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal Builder(OrientationEvent cloneFrom) {
		GeneratedBuilderLite_2__ctor_mD7325A4241D20915B0AF5874B5C6A4E78E1702E2(__this, /*hidden argument*/GeneratedBuilderLite_2__ctor_mD7325A4241D20915B0AF5874B5C6A4E78E1702E2_RuntimeMethod_var);
		// result = cloneFrom;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0 = ___cloneFrom0;
		__this->set_result_1(L_0);
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// }
		return;
	}
}
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent/Builder::PrepareBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * Builder_PrepareBuilder_mA352FC4E338560E09465443326518BD7DBF74791 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * V_0 = NULL;
	{
		// if (resultIsReadOnly) {
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// OrientationEvent original = result;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_1 = __this->get_result_1();
		V_0 = L_1;
		// result = new OrientationEvent();
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_2 = (OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 *)il2cpp_codegen_object_new(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_il2cpp_TypeInfo_var);
		OrientationEvent__ctor_m858D21EAD1BE4746E2782CE110F79B6FEA0AB232(L_2, /*hidden argument*/NULL);
		__this->set_result_1(L_2);
		// resultIsReadOnly = false;
		__this->set_resultIsReadOnly_0((bool)0);
		// MergeFrom(original);
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_3 = V_0;
		Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * L_4;
		L_4 = VirtFuncInvoker1< Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA *, OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>::MergeFrom(!0) */, __this, L_3);
	}

IL_0029:
	{
		// return result;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_5 = __this->get_result_1();
		return L_5;
	}
}
// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_IsInitialized_mD0946C534A94F0CED370B683AE28B5A0DCDCC19F (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method)
{
	{
		// get { return result.IsInitialized; }
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean Google.ProtocolBuffers.AbstractMessageLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>::get_IsInitialized() */, L_0);
		return L_1;
	}
}
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent/Builder::get_MessageBeingBuilt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * Builder_get_MessageBeingBuilt_m94331DAEC584FF361495B86D372ABA7625518B87 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method)
{
	{
		// get { return PrepareBuilder(); }
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0;
		L_0 = Builder_PrepareBuilder_mA352FC4E338560E09465443326518BD7DBF74791(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * Builder_Clear_m87067F780D0ACE82A41DF467711220AB476FDA05 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// result = DefaultInstance;
		IL2CPP_RUNTIME_CLASS_INIT(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_il2cpp_TypeInfo_var);
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0;
		L_0 = OrientationEvent_get_DefaultInstance_m7F7CA2111C4A2656195A3465D8D437D1BDD13DAF_inline(/*hidden argument*/NULL);
		__this->set_result_1(L_0);
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * Builder_Clone_m00097294A2BCB78BCE10416BB40BB9E4BA050AF1 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (resultIsReadOnly) {
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Builder(result);
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_1 = __this->get_result_1();
		Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * L_2 = (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA *)il2cpp_codegen_object_new(Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA_il2cpp_TypeInfo_var);
		Builder__ctor_mA7C4031831251B96E805F3A055FD152C316225FF(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		// return new Builder().MergeFrom(result);
		Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * L_3 = (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA *)il2cpp_codegen_object_new(Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA_il2cpp_TypeInfo_var);
		Builder__ctor_mD8D39ADD33273A273218742A9468CF0BAC92DE22(L_3, /*hidden argument*/NULL);
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_4 = __this->get_result_1();
		NullCheck(L_3);
		Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * L_5;
		L_5 = VirtFuncInvoker1< Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA *, OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>::MergeFrom(!0) */, L_3, L_4);
		return L_5;
	}
}
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent/Builder::get_DefaultInstanceForType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * Builder_get_DefaultInstanceForType_m86ED5811532AA2331ED046663FB5ECC9ABB32064 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return global::proto.PhoneEvent.Types.OrientationEvent.DefaultInstance; }
		IL2CPP_RUNTIME_CLASS_INIT(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_il2cpp_TypeInfo_var);
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0;
		L_0 = OrientationEvent_get_DefaultInstance_m7F7CA2111C4A2656195A3465D8D437D1BDD13DAF_inline(/*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent/Builder::BuildPartial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * Builder_BuildPartial_m4F03836D7A3E1D1190DCB7823427CB6584EF9597 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method)
{
	{
		// if (resultIsReadOnly) {
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return result;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_1 = __this->get_result_1();
		return L_1;
	}

IL_000f:
	{
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// return result.MakeReadOnly();
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_3;
		L_3 = OrientationEvent_MakeReadOnly_m22BF77346F0DE7FC76940BD5B50675542E78A1EC(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::MergeFrom(Google.ProtocolBuffers.IMessageLite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * Builder_MergeFrom_mDCC0BEA8E5B246953E48C3795EE3213B4925618B (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_MergeFrom_m97D6A578CACE3131A64EC3A2DBFE7839655EF0B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other is OrientationEvent) {
		RuntimeObject* L_0 = ___other0;
		if (!((OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 *)IsInstSealed((RuntimeObject*)L_0, OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		// return MergeFrom((OrientationEvent) other);
		RuntimeObject* L_1 = ___other0;
		Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * L_2;
		L_2 = VirtFuncInvoker1< Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA *, OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>::MergeFrom(!0) */, __this, ((OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 *)CastclassSealed((RuntimeObject*)L_1, OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0015:
	{
		// base.MergeFrom(other);
		RuntimeObject* L_3 = ___other0;
		Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * L_4;
		L_4 = GeneratedBuilderLite_2_MergeFrom_m97D6A578CACE3131A64EC3A2DBFE7839655EF0B1(__this, L_3, /*hidden argument*/GeneratedBuilderLite_2_MergeFrom_m97D6A578CACE3131A64EC3A2DBFE7839655EF0B1_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::MergeFrom(proto.PhoneEvent/Types/OrientationEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * Builder_MergeFrom_m250DAF5345C83B94578429F3FDD9A942D58C9CC2 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other == global::proto.PhoneEvent.Types.OrientationEvent.DefaultInstance) return this;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0 = ___other0;
		IL2CPP_RUNTIME_CLASS_INIT(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_il2cpp_TypeInfo_var);
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_1;
		L_1 = OrientationEvent_get_DefaultInstance_m7F7CA2111C4A2656195A3465D8D437D1BDD13DAF_inline(/*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 *)L_0) == ((RuntimeObject*)(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 *)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// if (other == global::proto.PhoneEvent.Types.OrientationEvent.DefaultInstance) return this;
		return __this;
	}

IL_000a:
	{
		// PrepareBuilder();
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_2;
		L_2 = Builder_PrepareBuilder_mA352FC4E338560E09465443326518BD7DBF74791(__this, /*hidden argument*/NULL);
		// if (other.HasTimestamp) {
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_3 = ___other0;
		NullCheck(L_3);
		bool L_4;
		L_4 = OrientationEvent_get_HasTimestamp_m670BCC950048EAC6D2A0E8E7D8A9F750255D7256_inline(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// Timestamp = other.Timestamp;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_5 = ___other0;
		NullCheck(L_5);
		int64_t L_6;
		L_6 = OrientationEvent_get_Timestamp_m1A50AD89E5A365F7D8C6D892814043ABAA79437A_inline(L_5, /*hidden argument*/NULL);
		Builder_set_Timestamp_mD23AD3789B4A8785296691413CC9AFCD5BFC189C(__this, L_6, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// if (other.HasX) {
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_7 = ___other0;
		NullCheck(L_7);
		bool L_8;
		L_8 = OrientationEvent_get_HasX_m9F2E62F7D48D89695C0BBC323096CF9C77E0EDEA_inline(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		// X = other.X;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_9 = ___other0;
		NullCheck(L_9);
		float L_10;
		L_10 = OrientationEvent_get_X_m25A06C66CFED0D61CCAB87CCA73D5F292596486D_inline(L_9, /*hidden argument*/NULL);
		Builder_set_X_mB108A19EAE9E9C45634775B3522724193455C19D(__this, L_10, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// if (other.HasY) {
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_11 = ___other0;
		NullCheck(L_11);
		bool L_12;
		L_12 = OrientationEvent_get_HasY_m03F79AB04C52BA358A202470F7D7FD0E083BEE5A_inline(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		// Y = other.Y;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_13 = ___other0;
		NullCheck(L_13);
		float L_14;
		L_14 = OrientationEvent_get_Y_mA374E18FAAE6B43C0CDC6344D1329F8188370851_inline(L_13, /*hidden argument*/NULL);
		Builder_set_Y_mC49132252BAFD408B0C607D9F4BE84565284FCBD(__this, L_14, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// if (other.HasZ) {
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_15 = ___other0;
		NullCheck(L_15);
		bool L_16;
		L_16 = OrientationEvent_get_HasZ_m7D3F9E83BF8B5C1556FF972DBFBACE03808FA69D_inline(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0061;
		}
	}
	{
		// Z = other.Z;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_17 = ___other0;
		NullCheck(L_17);
		float L_18;
		L_18 = OrientationEvent_get_Z_mAA6B77185DADDE06F680E8CD0BE5603C9D0248DB_inline(L_17, /*hidden argument*/NULL);
		Builder_set_Z_m12084CF715A90BF11825FC5FB50CE66202B27234(__this, L_18, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// if (other.HasW) {
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_19 = ___other0;
		NullCheck(L_19);
		bool L_20;
		L_20 = OrientationEvent_get_HasW_mAEB432A9932CB21C56EEE329515EA8ECED4B0DE8_inline(L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0075;
		}
	}
	{
		// W = other.W;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_21 = ___other0;
		NullCheck(L_21);
		float L_22;
		L_22 = OrientationEvent_get_W_m92B97B423C7EB15D87A0468F561134BB8AEC1F83_inline(L_21, /*hidden argument*/NULL);
		Builder_set_W_m912416D81C43FAC3AA985BA0CE01C8DB6BD4CB2A(__this, L_22, /*hidden argument*/NULL);
	}

IL_0075:
	{
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * Builder_MergeFrom_mAE325E2FF115FC27A2D45FF197E7E0CC82B00563 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, RuntimeObject* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return MergeFrom(input, pb::ExtensionRegistry.Empty);
		RuntimeObject* L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_1;
		L_1 = ExtensionRegistry_get_Empty_mC0CEC24AC7345586186C0641D64BAAC63413DAA9_inline(/*hidden argument*/NULL);
		Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * L_2;
		L_2 = VirtFuncInvoker2< Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA *, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * >::Invoke(15 /* !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry) */, __this, L_0, L_1);
		return L_2;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * Builder_MergeFrom_m693E28037F615F8C6C975FED34B1038CCE7E4190 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, RuntimeObject* ___input0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// PrepareBuilder();
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0;
		L_0 = Builder_PrepareBuilder_mA352FC4E338560E09465443326518BD7DBF74791(__this, /*hidden argument*/NULL);
		goto IL_011f;
	}

IL_000c:
	{
		// if(tag == 0 && field_name != null) {
		uint32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		// int field_ordinal = global::System.Array.BinarySearch(_orientationEventFieldNames, field_name, global::System.StringComparer.Ordinal);
		IL2CPP_RUNTIME_CLASS_INIT(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ((OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_StaticFields*)il2cpp_codegen_static_fields_for(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_il2cpp_TypeInfo_var))->get__orientationEventFieldNames_1();
		String_t* L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_5;
		L_5 = StringComparer_get_Ordinal_mF3B6370BEBD77351DB5218C867DCD669C47B8812_inline(/*hidden argument*/NULL);
		int32_t L_6;
		L_6 = Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD(L_3, L_4, L_5, /*hidden argument*/Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD_RuntimeMethod_var);
		V_2 = L_6;
		// if(field_ordinal >= 0)
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		// tag = _orientationEventFieldTags[field_ordinal];
		IL2CPP_RUNTIME_CLASS_INIT(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_8 = ((OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_StaticFields*)il2cpp_codegen_static_fields_for(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_il2cpp_TypeInfo_var))->get__orientationEventFieldTags_2();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = L_11;
		goto IL_0041;
	}

IL_0031:
	{
		// ParseUnknownField(input, extensionRegistry, tag, field_name);
		RuntimeObject* L_12 = ___input0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_13 = ___extensionRegistry1;
		uint32_t L_14 = V_0;
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = VirtFuncInvoker4< bool, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *, uint32_t, String_t* >::Invoke(27 /* System.Boolean Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>::ParseUnknownField(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry,System.UInt32,System.String) */, __this, L_12, L_13, L_14, L_15);
		// continue;
		goto IL_011f;
	}

IL_0041:
	{
		uint32_t L_17 = V_0;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)21)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_18 = V_0;
		if (!L_18)
		{
			goto IL_006b;
		}
	}
	{
		uint32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)8)))
		{
			goto IL_008b;
		}
	}
	{
		uint32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)21))))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_0071;
	}

IL_0054:
	{
		uint32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)29))))
		{
			goto IL_00c7;
		}
	}
	{
		uint32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)37))))
		{
			goto IL_00e5;
		}
	}
	{
		uint32_t L_23 = V_0;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)45))))
		{
			goto IL_0103;
		}
	}
	{
		goto IL_0071;
	}

IL_006b:
	{
		// throw pb::InvalidProtocolBufferException.InvalidTag();
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_24;
		L_24 = InvalidProtocolBufferException_InvalidTag_m2B39E4AEE6E6B4DE200ED9B10F0128F140ADAF88(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Builder_MergeFrom_m693E28037F615F8C6C975FED34B1038CCE7E4190_RuntimeMethod_var)));
	}

IL_0071:
	{
		// if (pb::WireFormat.IsEndGroupTag(tag)) {
		uint32_t L_25 = V_0;
		bool L_26;
		L_26 = WireFormat_IsEndGroupTag_mB577CA68ED4BEFC51C8E72F58E018D921140D929(L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_007b;
		}
	}
	{
		// return this;
		return __this;
	}

IL_007b:
	{
		// ParseUnknownField(input, extensionRegistry, tag, field_name);
		RuntimeObject* L_27 = ___input0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_28 = ___extensionRegistry1;
		uint32_t L_29 = V_0;
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = VirtFuncInvoker4< bool, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *, uint32_t, String_t* >::Invoke(27 /* System.Boolean Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>::ParseUnknownField(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry,System.UInt32,System.String) */, __this, L_27, L_28, L_29, L_30);
		// break;
		goto IL_011f;
	}

IL_008b:
	{
		// result.hasTimestamp = input.ReadInt64(ref result.timestamp_);
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_32 = __this->get_result_1();
		RuntimeObject* L_33 = ___input0;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_34 = __this->get_result_1();
		NullCheck(L_34);
		int64_t* L_35 = L_34->get_address_of_timestamp__5();
		NullCheck(L_33);
		bool L_36;
		L_36 = InterfaceFuncInvoker1< bool, int64_t* >::Invoke(2 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadInt64(System.Int64&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_33, (int64_t*)L_35);
		NullCheck(L_32);
		L_32->set_hasTimestamp_4(L_36);
		// break;
		goto IL_011f;
	}

IL_00a9:
	{
		// result.hasX = input.ReadFloat(ref result.x_);
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_37 = __this->get_result_1();
		RuntimeObject* L_38 = ___input0;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_39 = __this->get_result_1();
		NullCheck(L_39);
		float* L_40 = L_39->get_address_of_x__8();
		NullCheck(L_38);
		bool L_41;
		L_41 = InterfaceFuncInvoker1< bool, float* >::Invoke(1 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadFloat(System.Single&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_38, (float*)L_40);
		NullCheck(L_37);
		L_37->set_hasX_7(L_41);
		// break;
		goto IL_011f;
	}

IL_00c7:
	{
		// result.hasY = input.ReadFloat(ref result.y_);
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_42 = __this->get_result_1();
		RuntimeObject* L_43 = ___input0;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_44 = __this->get_result_1();
		NullCheck(L_44);
		float* L_45 = L_44->get_address_of_y__11();
		NullCheck(L_43);
		bool L_46;
		L_46 = InterfaceFuncInvoker1< bool, float* >::Invoke(1 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadFloat(System.Single&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_43, (float*)L_45);
		NullCheck(L_42);
		L_42->set_hasY_10(L_46);
		// break;
		goto IL_011f;
	}

IL_00e5:
	{
		// result.hasZ = input.ReadFloat(ref result.z_);
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_47 = __this->get_result_1();
		RuntimeObject* L_48 = ___input0;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_49 = __this->get_result_1();
		NullCheck(L_49);
		float* L_50 = L_49->get_address_of_z__14();
		NullCheck(L_48);
		bool L_51;
		L_51 = InterfaceFuncInvoker1< bool, float* >::Invoke(1 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadFloat(System.Single&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_48, (float*)L_50);
		NullCheck(L_47);
		L_47->set_hasZ_13(L_51);
		// break;
		goto IL_011f;
	}

IL_0103:
	{
		// result.hasW = input.ReadFloat(ref result.w_);
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_52 = __this->get_result_1();
		RuntimeObject* L_53 = ___input0;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_54 = __this->get_result_1();
		NullCheck(L_54);
		float* L_55 = L_54->get_address_of_w__17();
		NullCheck(L_53);
		bool L_56;
		L_56 = InterfaceFuncInvoker1< bool, float* >::Invoke(1 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadFloat(System.Single&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_53, (float*)L_55);
		NullCheck(L_52);
		L_52->set_hasW_16(L_56);
	}

IL_011f:
	{
		// while (input.ReadTag(out tag, out field_name)) {
		RuntimeObject* L_57 = ___input0;
		NullCheck(L_57);
		bool L_58;
		L_58 = InterfaceFuncInvoker2< bool, uint32_t*, String_t** >::Invoke(0 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadTag(System.UInt32&,System.String&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_57, (uint32_t*)(&V_0), (String_t**)(&V_1));
		if (L_58)
		{
			goto IL_000c;
		}
	}
	{
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::get_HasTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasTimestamp_m342D741571F6F977242455CA6DA8172B1A119131 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasTimestamp; }
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasTimestamp_4();
		return L_1;
	}
}
// System.Int64 proto.PhoneEvent/Types/OrientationEvent/Builder::get_Timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Builder_get_Timestamp_mC65F13A0E473337B7B91E45BD9B5A6B9A041427D (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method)
{
	{
		// get { return result.Timestamp; }
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		int64_t L_1;
		L_1 = OrientationEvent_get_Timestamp_m1A50AD89E5A365F7D8C6D892814043ABAA79437A_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_Timestamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Timestamp_mD23AD3789B4A8785296691413CC9AFCD5BFC189C (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// set { SetTimestamp(value); }
		int64_t L_0 = ___value0;
		Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * L_1;
		L_1 = Builder_SetTimestamp_m7B214E6A61E60FB6CF23CEB0DA19DB2F2D0BA9D3(__this, L_0, /*hidden argument*/NULL);
		// set { SetTimestamp(value); }
		return;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetTimestamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * Builder_SetTimestamp_m7B214E6A61E60FB6CF23CEB0DA19DB2F2D0BA9D3 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0;
		L_0 = Builder_PrepareBuilder_mA352FC4E338560E09465443326518BD7DBF74791(__this, /*hidden argument*/NULL);
		// result.hasTimestamp = true;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasTimestamp_4((bool)1);
		// result.timestamp_ = value;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_2 = __this->get_result_1();
		int64_t L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_timestamp__5(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::ClearTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * Builder_ClearTimestamp_mD92B7F9F61A4CAC1607C401C55D667CCE620B970 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0;
		L_0 = Builder_PrepareBuilder_mA352FC4E338560E09465443326518BD7DBF74791(__this, /*hidden argument*/NULL);
		// result.hasTimestamp = false;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasTimestamp_4((bool)0);
		// result.timestamp_ = 0L;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_timestamp__5(((int64_t)((int64_t)0)));
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::get_HasX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasX_m55AE1253C3A91B60A8D1DCF0BD516A15C4D40A5C (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasX; }
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasX_7();
		return L_1;
	}
}
// System.Single proto.PhoneEvent/Types/OrientationEvent/Builder::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Builder_get_X_m6AC863DCEEC9885A7CD43E991E8628C1083BE2D5 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method)
{
	{
		// get { return result.X; }
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		float L_1;
		L_1 = OrientationEvent_get_X_m25A06C66CFED0D61CCAB87CCA73D5F292596486D_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_X(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_X_mB108A19EAE9E9C45634775B3522724193455C19D (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { SetX(value); }
		float L_0 = ___value0;
		Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * L_1;
		L_1 = Builder_SetX_m7073CC92FDF2FDA20A93F51C8F6F979BEFD66597(__this, L_0, /*hidden argument*/NULL);
		// set { SetX(value); }
		return;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * Builder_SetX_m7073CC92FDF2FDA20A93F51C8F6F979BEFD66597 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0;
		L_0 = Builder_PrepareBuilder_mA352FC4E338560E09465443326518BD7DBF74791(__this, /*hidden argument*/NULL);
		// result.hasX = true;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasX_7((bool)1);
		// result.x_ = value;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_2 = __this->get_result_1();
		float L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_x__8(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::ClearX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * Builder_ClearX_mEBA498907C16A6B5F7935259E0FC5D56941DC6AC (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0;
		L_0 = Builder_PrepareBuilder_mA352FC4E338560E09465443326518BD7DBF74791(__this, /*hidden argument*/NULL);
		// result.hasX = false;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasX_7((bool)0);
		// result.x_ = 0F;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_x__8((0.0f));
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::get_HasY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasY_m17590E12A23B397804C4DBBB54EFE88164987A16 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasY; }
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasY_10();
		return L_1;
	}
}
// System.Single proto.PhoneEvent/Types/OrientationEvent/Builder::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Builder_get_Y_m500EB8694226776567C7F04DE467A85D08755981 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method)
{
	{
		// get { return result.Y; }
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		float L_1;
		L_1 = OrientationEvent_get_Y_mA374E18FAAE6B43C0CDC6344D1329F8188370851_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_Y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Y_mC49132252BAFD408B0C607D9F4BE84565284FCBD (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { SetY(value); }
		float L_0 = ___value0;
		Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * L_1;
		L_1 = Builder_SetY_m0ADBF3FF4C951314B46EDA27B1CB040482DCE474(__this, L_0, /*hidden argument*/NULL);
		// set { SetY(value); }
		return;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * Builder_SetY_m0ADBF3FF4C951314B46EDA27B1CB040482DCE474 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0;
		L_0 = Builder_PrepareBuilder_mA352FC4E338560E09465443326518BD7DBF74791(__this, /*hidden argument*/NULL);
		// result.hasY = true;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasY_10((bool)1);
		// result.y_ = value;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_2 = __this->get_result_1();
		float L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_y__11(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::ClearY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * Builder_ClearY_m9649D63E1F4E2EFC96B011B84942B74246C8EE2C (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0;
		L_0 = Builder_PrepareBuilder_mA352FC4E338560E09465443326518BD7DBF74791(__this, /*hidden argument*/NULL);
		// result.hasY = false;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasY_10((bool)0);
		// result.y_ = 0F;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_y__11((0.0f));
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::get_HasZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasZ_m623DA7EA0F420A5658B9BBBFDF9B342CBF3E1820 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasZ; }
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasZ_13();
		return L_1;
	}
}
// System.Single proto.PhoneEvent/Types/OrientationEvent/Builder::get_Z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Builder_get_Z_mA60606B9AC85E5DAC98D2A438DACDAECD9902791 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method)
{
	{
		// get { return result.Z; }
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		float L_1;
		L_1 = OrientationEvent_get_Z_mAA6B77185DADDE06F680E8CD0BE5603C9D0248DB_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_Z(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Z_m12084CF715A90BF11825FC5FB50CE66202B27234 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { SetZ(value); }
		float L_0 = ___value0;
		Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * L_1;
		L_1 = Builder_SetZ_mA1C11DCA98B3DFF73D6D86C27900AAF688CB8527(__this, L_0, /*hidden argument*/NULL);
		// set { SetZ(value); }
		return;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * Builder_SetZ_mA1C11DCA98B3DFF73D6D86C27900AAF688CB8527 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0;
		L_0 = Builder_PrepareBuilder_mA352FC4E338560E09465443326518BD7DBF74791(__this, /*hidden argument*/NULL);
		// result.hasZ = true;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasZ_13((bool)1);
		// result.z_ = value;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_2 = __this->get_result_1();
		float L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_z__14(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::ClearZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * Builder_ClearZ_m06823AB4FA3947F4E5D2FED5B8C8A86A031995BF (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0;
		L_0 = Builder_PrepareBuilder_mA352FC4E338560E09465443326518BD7DBF74791(__this, /*hidden argument*/NULL);
		// result.hasZ = false;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasZ_13((bool)0);
		// result.z_ = 0F;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_z__14((0.0f));
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::get_HasW()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasW_m6142DCE396236DF7B7B81D2AFF5F004FF5EC8C8E (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasW; }
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasW_16();
		return L_1;
	}
}
// System.Single proto.PhoneEvent/Types/OrientationEvent/Builder::get_W()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Builder_get_W_m4C1EAC52148CD3E6D4FD112AD67987206B92CE08 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method)
{
	{
		// get { return result.W; }
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		float L_1;
		L_1 = OrientationEvent_get_W_m92B97B423C7EB15D87A0468F561134BB8AEC1F83_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_W(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_W_m912416D81C43FAC3AA985BA0CE01C8DB6BD4CB2A (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { SetW(value); }
		float L_0 = ___value0;
		Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * L_1;
		L_1 = Builder_SetW_m4299A8DF8239177D6648DD50490BC44D09BF3C42(__this, L_0, /*hidden argument*/NULL);
		// set { SetW(value); }
		return;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetW(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * Builder_SetW_m4299A8DF8239177D6648DD50490BC44D09BF3C42 (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0;
		L_0 = Builder_PrepareBuilder_mA352FC4E338560E09465443326518BD7DBF74791(__this, /*hidden argument*/NULL);
		// result.hasW = true;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasW_16((bool)1);
		// result.w_ = value;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_2 = __this->get_result_1();
		float L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_w__17(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::ClearW()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * Builder_ClearW_m4A2AEF74A9DDD38CBAD02B1418B19B30A10F6A2B (Builder_t8BC08D5F3F586E79AC8685947389C28190247BBA * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0;
		L_0 = Builder_PrepareBuilder_mA352FC4E338560E09465443326518BD7DBF74791(__this, /*hidden argument*/NULL);
		// result.hasW = false;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasW_16((bool)0);
		// result.w_ = 0F;
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_w__17((0.0f));
		// return this;
		return __this;
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
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer__ctor_mF32878B422D6F99E201063667223F5AC7DF91587 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedMessageLite_2__ctor_mB94010B443D2F8CACD70FB9DE924F5CBC6FD8E7B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int memoizedSerializedSize = -1;
		__this->set_memoizedSerializedSize_12((-1));
		// private Pointer() { }
		GeneratedMessageLite_2__ctor_mB94010B443D2F8CACD70FB9DE924F5CBC6FD8E7B(__this, /*hidden argument*/GeneratedMessageLite_2__ctor_mB94010B443D2F8CACD70FB9DE924F5CBC6FD8E7B_RuntimeMethod_var);
		// private Pointer() { }
		return;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_get_DefaultInstance_m62857201F32F992458F0D816DF7B91DEB32AD858 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return defaultInstance; }
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = ((Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_StaticFields*)il2cpp_codegen_static_fields_for(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var))->get_defaultInstance_0();
		return L_0;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_DefaultInstanceForType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_get_DefaultInstanceForType_m147F09D3D3089D73D1ADD129B99E05436BB7AC4F (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return DefaultInstance; }
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0;
		L_0 = Pointer_get_DefaultInstance_m62857201F32F992458F0D816DF7B91DEB32AD858_inline(/*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_ThisMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_get_ThisMessage_m580A48AFB2B77A65B21D6778BBBB3212A0E5719E (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return this; }
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_HasId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pointer_get_HasId_mFDC4D68483FBC3715FB3E435E7878AC5736F9BB9 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasId; }
		bool L_0 = __this->get_hasId_4();
		return L_0;
	}
}
// System.Int32 proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pointer_get_Id_m0653E09B9E6A7D4F25CE204832027A4A3521BC27 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return id_; }
		int32_t L_0 = __this->get_id__5();
		return L_0;
	}
}
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_HasNormalizedX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pointer_get_HasNormalizedX_mF40107BFF8BC8A039179BE59D6F492078864DEE8 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasNormalizedX; }
		bool L_0 = __this->get_hasNormalizedX_7();
		return L_0;
	}
}
// System.Single proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_NormalizedX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Pointer_get_NormalizedX_m2E5C629CC71F370D7A8A97B4761AB801FFA3AFA6 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return normalizedX_; }
		float L_0 = __this->get_normalizedX__8();
		return L_0;
	}
}
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_HasNormalizedY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pointer_get_HasNormalizedY_mAAF0E62830392472F09B8A85CD52337CD5FDC696 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasNormalizedY; }
		bool L_0 = __this->get_hasNormalizedY_10();
		return L_0;
	}
}
// System.Single proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_NormalizedY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Pointer_get_NormalizedY_m319304960B30857DB5AA2332C86737F91368B776 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return normalizedY_; }
		float L_0 = __this->get_normalizedY__11();
		return L_0;
	}
}
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pointer_get_IsInitialized_mAC5F6C09795F65D66F2E28A30270F7821963CF49 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer::WriteTo(Google.ProtocolBuffers.ICodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer_WriteTo_m0AEF91A9475636CDF5A07A6D89EFCEE9A10756F9 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, RuntimeObject* ___output0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICodedOutputStream_t92C3F4E7AA3A87700C4151FEF30B0AF5BD0A4F9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	{
		// string[] field_names = _pointerFieldNames;
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ((Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_StaticFields*)il2cpp_codegen_static_fields_for(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var))->get__pointerFieldNames_1();
		V_0 = L_0;
		// if (hasId) {
		bool L_1 = __this->get_hasId_4();
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// output.WriteInt32(1, field_names[0], Id);
		RuntimeObject* L_2 = ___output0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6;
		L_6 = Pointer_get_Id_m0653E09B9E6A7D4F25CE204832027A4A3521BC27_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		InterfaceActionInvoker3< int32_t, String_t*, int32_t >::Invoke(2 /* System.Void Google.ProtocolBuffers.ICodedOutputStream::WriteInt32(System.Int32,System.String,System.Int32) */, ICodedOutputStream_t92C3F4E7AA3A87700C4151FEF30B0AF5BD0A4F9D_il2cpp_TypeInfo_var, L_2, 1, L_5, L_6);
	}

IL_001e:
	{
		// if (hasNormalizedX) {
		bool L_7 = __this->get_hasNormalizedX_7();
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		// output.WriteFloat(2, field_names[1], NormalizedX);
		RuntimeObject* L_8 = ___output0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 1;
		String_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		float L_12;
		L_12 = Pointer_get_NormalizedX_m2E5C629CC71F370D7A8A97B4761AB801FFA3AFA6_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		InterfaceActionInvoker3< int32_t, String_t*, float >::Invoke(0 /* System.Void Google.ProtocolBuffers.ICodedOutputStream::WriteFloat(System.Int32,System.String,System.Single) */, ICodedOutputStream_t92C3F4E7AA3A87700C4151FEF30B0AF5BD0A4F9D_il2cpp_TypeInfo_var, L_8, 2, L_11, L_12);
	}

IL_0036:
	{
		// if (hasNormalizedY) {
		bool L_13 = __this->get_hasNormalizedY_10();
		if (!L_13)
		{
			goto IL_004e;
		}
	}
	{
		// output.WriteFloat(3, field_names[2], NormalizedY);
		RuntimeObject* L_14 = ___output0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = 2;
		String_t* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		float L_18;
		L_18 = Pointer_get_NormalizedY_m319304960B30857DB5AA2332C86737F91368B776_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		InterfaceActionInvoker3< int32_t, String_t*, float >::Invoke(0 /* System.Void Google.ProtocolBuffers.ICodedOutputStream::WriteFloat(System.Int32,System.String,System.Single) */, ICodedOutputStream_t92C3F4E7AA3A87700C4151FEF30B0AF5BD0A4F9D_il2cpp_TypeInfo_var, L_14, 3, L_17, L_18);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Int32 proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_SerializedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pointer_get_SerializedSize_m3D553EAE77C18436EE13FDC798A1684BA968EAF7 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int size = memoizedSerializedSize;
		int32_t L_0 = __this->get_memoizedSerializedSize_12();
		V_0 = L_0;
		// if (size != -1) return size;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_000d;
		}
	}
	{
		// if (size != -1) return size;
		int32_t L_2 = V_0;
		return L_2;
	}

IL_000d:
	{
		// size = 0;
		V_0 = 0;
		// if (hasId) {
		bool L_3 = __this->get_hasId_4();
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// size += pb::CodedOutputStream.ComputeInt32Size(1, Id);
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = Pointer_get_Id_m0653E09B9E6A7D4F25CE204832027A4A3521BC27_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = CodedOutputStream_ComputeInt32Size_mAD9DFDB7A7F0A5C37E8B3807D781C34813AC0A42(1, L_5, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_6));
	}

IL_0026:
	{
		// if (hasNormalizedX) {
		bool L_7 = __this->get_hasNormalizedX_7();
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		// size += pb::CodedOutputStream.ComputeFloatSize(2, NormalizedX);
		int32_t L_8 = V_0;
		float L_9;
		L_9 = Pointer_get_NormalizedX_m2E5C629CC71F370D7A8A97B4761AB801FFA3AFA6_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = CodedOutputStream_ComputeFloatSize_mBAE0E51F69F52D5A816258D7069EBFC08FA48E81(2, L_9, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_10));
	}

IL_003d:
	{
		// if (hasNormalizedY) {
		bool L_11 = __this->get_hasNormalizedY_10();
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		// size += pb::CodedOutputStream.ComputeFloatSize(3, NormalizedY);
		int32_t L_12 = V_0;
		float L_13;
		L_13 = Pointer_get_NormalizedY_m319304960B30857DB5AA2332C86737F91368B776_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = CodedOutputStream_ComputeFloatSize_mBAE0E51F69F52D5A816258D7069EBFC08FA48E81(3, L_13, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_14));
	}

IL_0054:
	{
		// memoizedSerializedSize = size;
		int32_t L_15 = V_0;
		__this->set_memoizedSerializedSize_12(L_15);
		// return size;
		int32_t L_16 = V_0;
		return L_16;
	}
}
// System.Int32 proto.PhoneEvent/Types/MotionEvent/Types/Pointer::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pointer_GetHashCode_mE36158971C015E66F25F35F9098CD03CFE214349 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int hash = GetType().GetHashCode();
		Type_t * L_0;
		L_0 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		// if (hasId) hash ^= id_.GetHashCode();
		bool L_2 = __this->get_hasId_4();
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// if (hasId) hash ^= id_.GetHashCode();
		int32_t L_3 = V_0;
		int32_t* L_4 = __this->get_address_of_id__5();
		int32_t L_5;
		L_5 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_3^(int32_t)L_5));
	}

IL_0022:
	{
		// if (hasNormalizedX) hash ^= normalizedX_.GetHashCode();
		bool L_6 = __this->get_hasNormalizedX_7();
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (hasNormalizedX) hash ^= normalizedX_.GetHashCode();
		int32_t L_7 = V_0;
		float* L_8 = __this->get_address_of_normalizedX__8();
		int32_t L_9;
		L_9 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_8, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_7^(int32_t)L_9));
	}

IL_0038:
	{
		// if (hasNormalizedY) hash ^= normalizedY_.GetHashCode();
		bool L_10 = __this->get_hasNormalizedY_10();
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		// if (hasNormalizedY) hash ^= normalizedY_.GetHashCode();
		int32_t L_11 = V_0;
		float* L_12 = __this->get_address_of_normalizedY__11();
		int32_t L_13;
		L_13 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_12, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_11^(int32_t)L_13));
	}

IL_004e:
	{
		// return hash;
		int32_t L_14 = V_0;
		return L_14;
	}
}
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pointer_Equals_m59A643A5BCE7F169709DE39A55529C14B855473A (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * V_0 = NULL;
	{
		// Pointer other = obj as Pointer;
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 *)IsInstSealed((RuntimeObject*)L_0, Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var));
		// if (other == null) return false;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// if (other == null) return false;
		return (bool)0;
	}

IL_000c:
	{
		// if (hasId != other.hasId || (hasId && !id_.Equals(other.id_))) return false;
		bool L_2 = __this->get_hasId_4();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = L_3->get_hasId_4();
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0035;
		}
	}
	{
		bool L_5 = __this->get_hasId_4();
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		int32_t* L_6 = __this->get_address_of_id__5();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_id__5();
		bool L_9;
		L_9 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)L_6, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0037;
		}
	}

IL_0035:
	{
		// if (hasId != other.hasId || (hasId && !id_.Equals(other.id_))) return false;
		return (bool)0;
	}

IL_0037:
	{
		// if (hasNormalizedX != other.hasNormalizedX || (hasNormalizedX && !normalizedX_.Equals(other.normalizedX_))) return false;
		bool L_10 = __this->get_hasNormalizedX_7();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = L_11->get_hasNormalizedX_7();
		if ((!(((uint32_t)L_10) == ((uint32_t)L_12))))
		{
			goto IL_0060;
		}
	}
	{
		bool L_13 = __this->get_hasNormalizedX_7();
		if (!L_13)
		{
			goto IL_0062;
		}
	}
	{
		float* L_14 = __this->get_address_of_normalizedX__8();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_15 = V_0;
		NullCheck(L_15);
		float L_16 = L_15->get_normalizedX__8();
		bool L_17;
		L_17 = Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914((float*)L_14, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0062;
		}
	}

IL_0060:
	{
		// if (hasNormalizedX != other.hasNormalizedX || (hasNormalizedX && !normalizedX_.Equals(other.normalizedX_))) return false;
		return (bool)0;
	}

IL_0062:
	{
		// if (hasNormalizedY != other.hasNormalizedY || (hasNormalizedY && !normalizedY_.Equals(other.normalizedY_))) return false;
		bool L_18 = __this->get_hasNormalizedY_10();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_19 = V_0;
		NullCheck(L_19);
		bool L_20 = L_19->get_hasNormalizedY_10();
		if ((!(((uint32_t)L_18) == ((uint32_t)L_20))))
		{
			goto IL_008b;
		}
	}
	{
		bool L_21 = __this->get_hasNormalizedY_10();
		if (!L_21)
		{
			goto IL_008d;
		}
	}
	{
		float* L_22 = __this->get_address_of_normalizedY__11();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_23 = V_0;
		NullCheck(L_23);
		float L_24 = L_23->get_normalizedY__11();
		bool L_25;
		L_25 = Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914((float*)L_22, L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_008d;
		}
	}

IL_008b:
	{
		// if (hasNormalizedY != other.hasNormalizedY || (hasNormalizedY && !normalizedY_.Equals(other.normalizedY_))) return false;
		return (bool)0;
	}

IL_008d:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer::PrintTo(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer_PrintTo_m9A18A64ADB38319F3C8E66FCD5992CFF2914AA04 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedMessageLite_2_PrintField_m638873B95E598C7021E09266718B2CF1107340CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ADA0A4B45FFBFCF792C61B451AF43A6C341E292);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9167D3A5FE683F0DD7B16CE29BAFE3083934E11B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PrintField("id", hasId, id_, writer);
		bool L_0 = __this->get_hasId_4();
		int32_t L_1 = __this->get_id__5();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_4 = ___writer0;
		GeneratedMessageLite_2_PrintField_m638873B95E598C7021E09266718B2CF1107340CC(_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, L_0, L_3, L_4, /*hidden argument*/GeneratedMessageLite_2_PrintField_m638873B95E598C7021E09266718B2CF1107340CC_RuntimeMethod_var);
		// PrintField("normalized_x", hasNormalizedX, normalizedX_, writer);
		bool L_5 = __this->get_hasNormalizedX_7();
		float L_6 = __this->get_normalizedX__8();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_7);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_9 = ___writer0;
		GeneratedMessageLite_2_PrintField_m638873B95E598C7021E09266718B2CF1107340CC(_stringLiteral9167D3A5FE683F0DD7B16CE29BAFE3083934E11B, L_5, L_8, L_9, /*hidden argument*/GeneratedMessageLite_2_PrintField_m638873B95E598C7021E09266718B2CF1107340CC_RuntimeMethod_var);
		// PrintField("normalized_y", hasNormalizedY, normalizedY_, writer);
		bool L_10 = __this->get_hasNormalizedY_10();
		float L_11 = __this->get_normalizedY__11();
		float L_12 = L_11;
		RuntimeObject * L_13 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_12);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_14 = ___writer0;
		GeneratedMessageLite_2_PrintField_m638873B95E598C7021E09266718B2CF1107340CC(_stringLiteral1ADA0A4B45FFBFCF792C61B451AF43A6C341E292, L_10, L_13, L_14, /*hidden argument*/GeneratedMessageLite_2_PrintField_m638873B95E598C7021E09266718B2CF1107340CC_RuntimeMethod_var);
		// }
		return;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseFrom(Google.ProtocolBuffers.ByteString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_ParseFrom_m6F6413B7F1A03BF8643472FF0F9A79AD90682A62 (ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractBuilderLite_2_MergeFrom_m077F8BDC9A40BD2744DA305716D47D7FD4C02BE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((Builder) CreateBuilder().MergeFrom(data)).BuildParsed();
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0;
		L_0 = Pointer_CreateBuilder_mC834A6424E0597A5CF4FD5C6A15101F0A4586AA4(/*hidden argument*/NULL);
		ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * L_1 = ___data0;
		NullCheck(L_0);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_2;
		L_2 = AbstractBuilderLite_2_MergeFrom_m077F8BDC9A40BD2744DA305716D47D7FD4C02BE5(L_0, L_1, /*hidden argument*/AbstractBuilderLite_2_MergeFrom_m077F8BDC9A40BD2744DA305716D47D7FD4C02BE5_RuntimeMethod_var);
		NullCheck(L_2);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_3;
		L_3 = GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC(L_2, /*hidden argument*/GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		return L_3;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseFrom(Google.ProtocolBuffers.ByteString,Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_ParseFrom_m311F566A8FF8A1CB438F0D3F9010F8E060B9344F (ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * ___data0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractBuilderLite_2_MergeFrom_mBFA22BE8CEA616188C6E7F55E6174E39563EC193_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((Builder) CreateBuilder().MergeFrom(data, extensionRegistry)).BuildParsed();
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0;
		L_0 = Pointer_CreateBuilder_mC834A6424E0597A5CF4FD5C6A15101F0A4586AA4(/*hidden argument*/NULL);
		ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * L_1 = ___data0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_2 = ___extensionRegistry1;
		NullCheck(L_0);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_3;
		L_3 = AbstractBuilderLite_2_MergeFrom_mBFA22BE8CEA616188C6E7F55E6174E39563EC193(L_0, L_1, L_2, /*hidden argument*/AbstractBuilderLite_2_MergeFrom_mBFA22BE8CEA616188C6E7F55E6174E39563EC193_RuntimeMethod_var);
		NullCheck(L_3);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_4;
		L_4 = GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC(L_3, /*hidden argument*/GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		return L_4;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseFrom(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_ParseFrom_m4D4305E8718862C444BFDB3E9DC28C7CF8535245 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractBuilderLite_2_MergeFrom_mA162BF3102EA42D62F2EA3BC70A44C54C341464B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((Builder) CreateBuilder().MergeFrom(data)).BuildParsed();
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0;
		L_0 = Pointer_CreateBuilder_mC834A6424E0597A5CF4FD5C6A15101F0A4586AA4(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___data0;
		NullCheck(L_0);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_2;
		L_2 = AbstractBuilderLite_2_MergeFrom_mA162BF3102EA42D62F2EA3BC70A44C54C341464B(L_0, L_1, /*hidden argument*/AbstractBuilderLite_2_MergeFrom_mA162BF3102EA42D62F2EA3BC70A44C54C341464B_RuntimeMethod_var);
		NullCheck(L_2);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_3;
		L_3 = GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC(L_2, /*hidden argument*/GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		return L_3;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseFrom(System.Byte[],Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_ParseFrom_m301B899BA0763CAFCF5650B746A0B12A533AA407 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractBuilderLite_2_MergeFrom_mF36F3941940332A01B21431C4BC0783BC925C1DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((Builder) CreateBuilder().MergeFrom(data, extensionRegistry)).BuildParsed();
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0;
		L_0 = Pointer_CreateBuilder_mC834A6424E0597A5CF4FD5C6A15101F0A4586AA4(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___data0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_2 = ___extensionRegistry1;
		NullCheck(L_0);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_3;
		L_3 = AbstractBuilderLite_2_MergeFrom_mF36F3941940332A01B21431C4BC0783BC925C1DC(L_0, L_1, L_2, /*hidden argument*/AbstractBuilderLite_2_MergeFrom_mF36F3941940332A01B21431C4BC0783BC925C1DC_RuntimeMethod_var);
		NullCheck(L_3);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_4;
		L_4 = GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC(L_3, /*hidden argument*/GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		return L_4;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseFrom(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_ParseFrom_mF4C1CDC9A8A253793C6C60FC2A22B14E2BF920B3 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractBuilderLite_2_MergeFrom_m9E6216E1C08706C3E61356A7FB9A3FB0E52E2666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((Builder) CreateBuilder().MergeFrom(input)).BuildParsed();
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0;
		L_0 = Pointer_CreateBuilder_mC834A6424E0597A5CF4FD5C6A15101F0A4586AA4(/*hidden argument*/NULL);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = ___input0;
		NullCheck(L_0);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_2;
		L_2 = AbstractBuilderLite_2_MergeFrom_m9E6216E1C08706C3E61356A7FB9A3FB0E52E2666(L_0, L_1, /*hidden argument*/AbstractBuilderLite_2_MergeFrom_m9E6216E1C08706C3E61356A7FB9A3FB0E52E2666_RuntimeMethod_var);
		NullCheck(L_2);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_3;
		L_3 = GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC(L_2, /*hidden argument*/GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		return L_3;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_ParseFrom_m6493BE21AE470C16598C307A72763C395EDA534B (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractBuilderLite_2_MergeFrom_mF34461DF32719A18A93F56C01A45DB0C65FB1645_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((Builder) CreateBuilder().MergeFrom(input, extensionRegistry)).BuildParsed();
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0;
		L_0 = Pointer_CreateBuilder_mC834A6424E0597A5CF4FD5C6A15101F0A4586AA4(/*hidden argument*/NULL);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = ___input0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_2 = ___extensionRegistry1;
		NullCheck(L_0);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_3;
		L_3 = AbstractBuilderLite_2_MergeFrom_mF34461DF32719A18A93F56C01A45DB0C65FB1645(L_0, L_1, L_2, /*hidden argument*/AbstractBuilderLite_2_MergeFrom_mF34461DF32719A18A93F56C01A45DB0C65FB1645_RuntimeMethod_var);
		NullCheck(L_3);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_4;
		L_4 = GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC(L_3, /*hidden argument*/GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		return L_4;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseDelimitedFrom(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_ParseDelimitedFrom_mC9A893C18B970CDADA83C636B2E7494C187D3C24 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractBuilderLite_2_MergeDelimitedFrom_m8C049EEE34F924B068109BA2019AC2F28D765D2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CreateBuilder().MergeDelimitedFrom(input).BuildParsed();
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0;
		L_0 = Pointer_CreateBuilder_mC834A6424E0597A5CF4FD5C6A15101F0A4586AA4(/*hidden argument*/NULL);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = ___input0;
		NullCheck(L_0);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_2;
		L_2 = AbstractBuilderLite_2_MergeDelimitedFrom_m8C049EEE34F924B068109BA2019AC2F28D765D2D(L_0, L_1, /*hidden argument*/AbstractBuilderLite_2_MergeDelimitedFrom_m8C049EEE34F924B068109BA2019AC2F28D765D2D_RuntimeMethod_var);
		NullCheck(L_2);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_3;
		L_3 = GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC(L_2, /*hidden argument*/GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		return L_3;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseDelimitedFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_ParseDelimitedFrom_m8DA5AD208AA063332836C3FB84F358E8C5A1749F (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractBuilderLite_2_MergeDelimitedFrom_mDBA09B0371D1C1CBA64A902149E769C909F0757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CreateBuilder().MergeDelimitedFrom(input, extensionRegistry).BuildParsed();
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0;
		L_0 = Pointer_CreateBuilder_mC834A6424E0597A5CF4FD5C6A15101F0A4586AA4(/*hidden argument*/NULL);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = ___input0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_2 = ___extensionRegistry1;
		NullCheck(L_0);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_3;
		L_3 = AbstractBuilderLite_2_MergeDelimitedFrom_mDBA09B0371D1C1CBA64A902149E769C909F0757D(L_0, L_1, L_2, /*hidden argument*/AbstractBuilderLite_2_MergeDelimitedFrom_mDBA09B0371D1C1CBA64A902149E769C909F0757D_RuntimeMethod_var);
		NullCheck(L_3);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_4;
		L_4 = GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC(L_3, /*hidden argument*/GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		return L_4;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseFrom(Google.ProtocolBuffers.ICodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_ParseFrom_m7F06345AA829BFAB5829D43F3FEA31EA2F10B8F4 (RuntimeObject* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((Builder) CreateBuilder().MergeFrom(input)).BuildParsed();
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0;
		L_0 = Pointer_CreateBuilder_mC834A6424E0597A5CF4FD5C6A15101F0A4586AA4(/*hidden argument*/NULL);
		RuntimeObject* L_1 = ___input0;
		NullCheck(L_0);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_2;
		L_2 = VirtFuncInvoker1< Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 *, RuntimeObject* >::Invoke(16 /* !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(Google.ProtocolBuffers.ICodedInputStream) */, L_0, L_1);
		NullCheck(L_2);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_3;
		L_3 = GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC(L_2, /*hidden argument*/GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		return L_3;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_ParseFrom_mA83B1A00485B236FA63C25E1C7CB04AC391F5485 (RuntimeObject* ___input0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((Builder) CreateBuilder().MergeFrom(input, extensionRegistry)).BuildParsed();
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0;
		L_0 = Pointer_CreateBuilder_mC834A6424E0597A5CF4FD5C6A15101F0A4586AA4(/*hidden argument*/NULL);
		RuntimeObject* L_1 = ___input0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_2 = ___extensionRegistry1;
		NullCheck(L_0);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_3;
		L_3 = VirtFuncInvoker2< Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 *, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * >::Invoke(15 /* !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry) */, L_0, L_1, L_2);
		NullCheck(L_3);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_4;
		L_4 = GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC(L_3, /*hidden argument*/GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		return L_4;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::MakeReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_MakeReadOnly_m23A966E507120B3C30E8EC13AFE836C7C1DEDE5C (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer::CreateBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Pointer_CreateBuilder_mC834A6424E0597A5CF4FD5C6A15101F0A4586AA4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Builder CreateBuilder() { return new Builder(); }
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0 = (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 *)il2cpp_codegen_object_new(Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302_il2cpp_TypeInfo_var);
		Builder__ctor_m0F5662CB752C8E24CA5919B00DD8448BB5F3178D(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ToBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Pointer_ToBuilder_m8922446B5245CF75B5CBF7C4A67FC83BE225E09B (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Builder ToBuilder() { return CreateBuilder(this); }
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0;
		L_0 = Pointer_CreateBuilder_m0C934B225543E91863BFE8AFEBD8B212895987C3(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer::CreateBuilderForType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Pointer_CreateBuilderForType_m967101928333FAFA0BE0C85ECF2EF04CF3887ABA (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Builder CreateBuilderForType() { return new Builder(); }
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0 = (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 *)il2cpp_codegen_object_new(Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302_il2cpp_TypeInfo_var);
		Builder__ctor_m0F5662CB752C8E24CA5919B00DD8448BB5F3178D(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer::CreateBuilder(proto.PhoneEvent/Types/MotionEvent/Types/Pointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Pointer_CreateBuilder_m0C934B225543E91863BFE8AFEBD8B212895987C3 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * ___prototype0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Builder(prototype);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = ___prototype0;
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_1 = (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 *)il2cpp_codegen_object_new(Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302_il2cpp_TypeInfo_var);
		Builder__ctor_m62919A1AA6A43B109F8D54FA56AAE25655CB7DC9(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer__cctor_mD2BB44B588C441305487BE503DD44C9066FEC24E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhoneEvent_t8977146DDA5AF16F3661CAAFF1E4DA378BA2C70E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ADA0A4B45FFBFCF792C61B451AF43A6C341E292);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9167D3A5FE683F0DD7B16CE29BAFE3083934E11B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Pointer defaultInstance = new Pointer().MakeReadOnly();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 *)il2cpp_codegen_object_new(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Pointer__ctor_mF32878B422D6F99E201063667223F5AC7DF91587(L_0, /*hidden argument*/NULL);
		NullCheck(L_0);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_1;
		L_1 = Pointer_MakeReadOnly_m23A966E507120B3C30E8EC13AFE836C7C1DEDE5C(L_0, /*hidden argument*/NULL);
		((Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_StaticFields*)il2cpp_codegen_static_fields_for(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var))->set_defaultInstance_0(L_1);
		// private static readonly string[] _pointerFieldNames = new string[] { "id", "normalized_x", "normalized_y" };
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral9167D3A5FE683F0DD7B16CE29BAFE3083934E11B);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral9167D3A5FE683F0DD7B16CE29BAFE3083934E11B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral1ADA0A4B45FFBFCF792C61B451AF43A6C341E292);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1ADA0A4B45FFBFCF792C61B451AF43A6C341E292);
		((Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_StaticFields*)il2cpp_codegen_static_fields_for(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var))->set__pointerFieldNames_1(L_5);
		// private static readonly uint[] _pointerFieldTags = new uint[] { 8, 21, 29 };
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_6 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)3);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_7 = L_6;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		((Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_StaticFields*)il2cpp_codegen_static_fields_for(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var))->set__pointerFieldTags_2(L_7);
		// object.ReferenceEquals(global::proto.Proto.PhoneEvent.Descriptor, null);
		IL2CPP_RUNTIME_CLASS_INIT(PhoneEvent_t8977146DDA5AF16F3661CAAFF1E4DA378BA2C70E_il2cpp_TypeInfo_var);
		RuntimeObject * L_9 = ((PhoneEvent_t8977146DDA5AF16F3661CAAFF1E4DA378BA2C70E_StaticFields*)il2cpp_codegen_static_fields_for(PhoneEvent_t8977146DDA5AF16F3661CAAFF1E4DA378BA2C70E_il2cpp_TypeInfo_var))->get_Descriptor_0();
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
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::get_ThisBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_get_ThisBuilder_m2278BDF1965CAD020EA8D8232F7FA0634C2BB46E (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// get { return this; }
		return __this;
	}
}
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m0F5662CB752C8E24CA5919B00DD8448BB5F3178D (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2__ctor_m4D600BF5EDC880CCB2785A4CCCC95932A065C7D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Builder() {
		GeneratedBuilderLite_2__ctor_m4D600BF5EDC880CCB2785A4CCCC95932A065C7D7(__this, /*hidden argument*/GeneratedBuilderLite_2__ctor_m4D600BF5EDC880CCB2785A4CCCC95932A065C7D7_RuntimeMethod_var);
		// result = DefaultInstance;
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0;
		L_0 = Pointer_get_DefaultInstance_m62857201F32F992458F0D816DF7B91DEB32AD858_inline(/*hidden argument*/NULL);
		__this->set_result_1(L_0);
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// }
		return;
	}
}
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::.ctor(proto.PhoneEvent/Types/MotionEvent/Types/Pointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m62919A1AA6A43B109F8D54FA56AAE25655CB7DC9 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * ___cloneFrom0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2__ctor_m4D600BF5EDC880CCB2785A4CCCC95932A065C7D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal Builder(Pointer cloneFrom) {
		GeneratedBuilderLite_2__ctor_m4D600BF5EDC880CCB2785A4CCCC95932A065C7D7(__this, /*hidden argument*/GeneratedBuilderLite_2__ctor_m4D600BF5EDC880CCB2785A4CCCC95932A065C7D7_RuntimeMethod_var);
		// result = cloneFrom;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = ___cloneFrom0;
		__this->set_result_1(L_0);
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// }
		return;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::PrepareBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Builder_PrepareBuilder_mD44AF9B90DA9836BEB57B0D32686E438F0FF51DD (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * V_0 = NULL;
	{
		// if (resultIsReadOnly) {
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// Pointer original = result;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_1 = __this->get_result_1();
		V_0 = L_1;
		// result = new Pointer();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_2 = (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 *)il2cpp_codegen_object_new(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Pointer__ctor_mF32878B422D6F99E201063667223F5AC7DF91587(L_2, /*hidden argument*/NULL);
		__this->set_result_1(L_2);
		// resultIsReadOnly = false;
		__this->set_resultIsReadOnly_0((bool)0);
		// MergeFrom(original);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_3 = V_0;
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_4;
		L_4 = VirtFuncInvoker1< Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 *, Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(!0) */, __this, L_3);
	}

IL_0029:
	{
		// return result;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_5 = __this->get_result_1();
		return L_5;
	}
}
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_IsInitialized_m212BA594719A427BFCF2496C3ED0ED7F010FF70C (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.IsInitialized; }
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean Google.ProtocolBuffers.AbstractMessageLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::get_IsInitialized() */, L_0);
		return L_1;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::get_MessageBeingBuilt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Builder_get_MessageBeingBuilt_m5B3B93AED1B027D44F5D2AA73F112A17EEB1F3D9 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// get { return PrepareBuilder(); }
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0;
		L_0 = Builder_PrepareBuilder_mD44AF9B90DA9836BEB57B0D32686E438F0FF51DD(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_Clear_mC3F19FD7B65A3651EF5DEA5841B98608049A0BEA (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// result = DefaultInstance;
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0;
		L_0 = Pointer_get_DefaultInstance_m62857201F32F992458F0D816DF7B91DEB32AD858_inline(/*hidden argument*/NULL);
		__this->set_result_1(L_0);
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_Clone_m67246EF311B3B99AA2CDCA5460856A379E76A506 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (resultIsReadOnly) {
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Builder(result);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_1 = __this->get_result_1();
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_2 = (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 *)il2cpp_codegen_object_new(Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302_il2cpp_TypeInfo_var);
		Builder__ctor_m62919A1AA6A43B109F8D54FA56AAE25655CB7DC9(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		// return new Builder().MergeFrom(result);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_3 = (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 *)il2cpp_codegen_object_new(Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302_il2cpp_TypeInfo_var);
		Builder__ctor_m0F5662CB752C8E24CA5919B00DD8448BB5F3178D(L_3, /*hidden argument*/NULL);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_4 = __this->get_result_1();
		NullCheck(L_3);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_5;
		L_5 = VirtFuncInvoker1< Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 *, Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(!0) */, L_3, L_4);
		return L_5;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::get_DefaultInstanceForType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Builder_get_DefaultInstanceForType_m3195B6663C3153978898274A6202AB335DEB255A (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return global::proto.PhoneEvent.Types.MotionEvent.Types.Pointer.DefaultInstance; }
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0;
		L_0 = Pointer_get_DefaultInstance_m62857201F32F992458F0D816DF7B91DEB32AD858_inline(/*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::BuildPartial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Builder_BuildPartial_m75F65777E64D9FF8A732EC8B83C61051D7A0C25E (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// if (resultIsReadOnly) {
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return result;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_1 = __this->get_result_1();
		return L_1;
	}

IL_000f:
	{
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// return result.MakeReadOnly();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_3;
		L_3 = Pointer_MakeReadOnly_m23A966E507120B3C30E8EC13AFE836C7C1DEDE5C(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::MergeFrom(Google.ProtocolBuffers.IMessageLite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_MergeFrom_m6495906E302B0360E5BEA17CBC5162911B65DB65 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_MergeFrom_mFE12F3933FE4756BAEAA2465FA6F5E9C5DE72A77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other is Pointer) {
		RuntimeObject* L_0 = ___other0;
		if (!((Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 *)IsInstSealed((RuntimeObject*)L_0, Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		// return MergeFrom((Pointer) other);
		RuntimeObject* L_1 = ___other0;
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_2;
		L_2 = VirtFuncInvoker1< Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 *, Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(!0) */, __this, ((Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 *)CastclassSealed((RuntimeObject*)L_1, Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0015:
	{
		// base.MergeFrom(other);
		RuntimeObject* L_3 = ___other0;
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_4;
		L_4 = GeneratedBuilderLite_2_MergeFrom_mFE12F3933FE4756BAEAA2465FA6F5E9C5DE72A77(__this, L_3, /*hidden argument*/GeneratedBuilderLite_2_MergeFrom_mFE12F3933FE4756BAEAA2465FA6F5E9C5DE72A77_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::MergeFrom(proto.PhoneEvent/Types/MotionEvent/Types/Pointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_MergeFrom_mC0A99F6FBB4CB67CE99D9CE47A8A740538DDF5F4 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other == global::proto.PhoneEvent.Types.MotionEvent.Types.Pointer.DefaultInstance) return this;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = ___other0;
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_1;
		L_1 = Pointer_get_DefaultInstance_m62857201F32F992458F0D816DF7B91DEB32AD858_inline(/*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 *)L_0) == ((RuntimeObject*)(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 *)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// if (other == global::proto.PhoneEvent.Types.MotionEvent.Types.Pointer.DefaultInstance) return this;
		return __this;
	}

IL_000a:
	{
		// PrepareBuilder();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_2;
		L_2 = Builder_PrepareBuilder_mD44AF9B90DA9836BEB57B0D32686E438F0FF51DD(__this, /*hidden argument*/NULL);
		// if (other.HasId) {
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_3 = ___other0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Pointer_get_HasId_mFDC4D68483FBC3715FB3E435E7878AC5736F9BB9_inline(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// Id = other.Id;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_5 = ___other0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Pointer_get_Id_m0653E09B9E6A7D4F25CE204832027A4A3521BC27_inline(L_5, /*hidden argument*/NULL);
		Builder_set_Id_m60C9EB5A23AE4D14FC9A8CF7674AA9A311293151(__this, L_6, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// if (other.HasNormalizedX) {
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_7 = ___other0;
		NullCheck(L_7);
		bool L_8;
		L_8 = Pointer_get_HasNormalizedX_mF40107BFF8BC8A039179BE59D6F492078864DEE8_inline(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		// NormalizedX = other.NormalizedX;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_9 = ___other0;
		NullCheck(L_9);
		float L_10;
		L_10 = Pointer_get_NormalizedX_m2E5C629CC71F370D7A8A97B4761AB801FFA3AFA6_inline(L_9, /*hidden argument*/NULL);
		Builder_set_NormalizedX_mC9705363CB6D83EC4895422AF010D922F0AD8D75(__this, L_10, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// if (other.HasNormalizedY) {
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_11 = ___other0;
		NullCheck(L_11);
		bool L_12;
		L_12 = Pointer_get_HasNormalizedY_mAAF0E62830392472F09B8A85CD52337CD5FDC696_inline(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		// NormalizedY = other.NormalizedY;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_13 = ___other0;
		NullCheck(L_13);
		float L_14;
		L_14 = Pointer_get_NormalizedY_m319304960B30857DB5AA2332C86737F91368B776_inline(L_13, /*hidden argument*/NULL);
		Builder_set_NormalizedY_mB758ED8B16591A5215801E63E21FADDA17916C21(__this, L_14, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_MergeFrom_m7FA7168E7BF09135FB16F0204621C33D01C4C2F8 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, RuntimeObject* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return MergeFrom(input, pb::ExtensionRegistry.Empty);
		RuntimeObject* L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_1;
		L_1 = ExtensionRegistry_get_Empty_mC0CEC24AC7345586186C0641D64BAAC63413DAA9_inline(/*hidden argument*/NULL);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_2;
		L_2 = VirtFuncInvoker2< Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 *, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * >::Invoke(15 /* !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry) */, __this, L_0, L_1);
		return L_2;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_MergeFrom_mAE0A78C84760ED6705E35C312E4AB0D2E684C036 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, RuntimeObject* ___input0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// PrepareBuilder();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0;
		L_0 = Builder_PrepareBuilder_mD44AF9B90DA9836BEB57B0D32686E438F0FF51DD(__this, /*hidden argument*/NULL);
		goto IL_00cf;
	}

IL_000c:
	{
		// if(tag == 0 && field_name != null) {
		uint32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		// int field_ordinal = global::System.Array.BinarySearch(_pointerFieldNames, field_name, global::System.StringComparer.Ordinal);
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ((Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_StaticFields*)il2cpp_codegen_static_fields_for(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var))->get__pointerFieldNames_1();
		String_t* L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_5;
		L_5 = StringComparer_get_Ordinal_mF3B6370BEBD77351DB5218C867DCD669C47B8812_inline(/*hidden argument*/NULL);
		int32_t L_6;
		L_6 = Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD(L_3, L_4, L_5, /*hidden argument*/Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD_RuntimeMethod_var);
		V_2 = L_6;
		// if(field_ordinal >= 0)
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		// tag = _pointerFieldTags[field_ordinal];
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_8 = ((Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_StaticFields*)il2cpp_codegen_static_fields_for(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var))->get__pointerFieldTags_2();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = L_11;
		goto IL_0041;
	}

IL_0031:
	{
		// ParseUnknownField(input, extensionRegistry, tag, field_name);
		RuntimeObject* L_12 = ___input0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_13 = ___extensionRegistry1;
		uint32_t L_14 = V_0;
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = VirtFuncInvoker4< bool, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *, uint32_t, String_t* >::Invoke(27 /* System.Boolean Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::ParseUnknownField(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry,System.UInt32,System.String) */, __this, L_12, L_13, L_14, L_15);
		// continue;
		goto IL_00cf;
	}

IL_0041:
	{
		uint32_t L_17 = V_0;
		if ((!(((uint32_t)L_17) <= ((uint32_t)8))))
		{
			goto IL_004e;
		}
	}
	{
		uint32_t L_18 = V_0;
		if (!L_18)
		{
			goto IL_005a;
		}
	}
	{
		uint32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)8)))
		{
			goto IL_0077;
		}
	}
	{
		goto IL_0060;
	}

IL_004e:
	{
		uint32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)21))))
		{
			goto IL_0095;
		}
	}
	{
		uint32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)29))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_0060;
	}

IL_005a:
	{
		// throw pb::InvalidProtocolBufferException.InvalidTag();
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_22;
		L_22 = InvalidProtocolBufferException_InvalidTag_m2B39E4AEE6E6B4DE200ED9B10F0128F140ADAF88(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Builder_MergeFrom_mAE0A78C84760ED6705E35C312E4AB0D2E684C036_RuntimeMethod_var)));
	}

IL_0060:
	{
		// if (pb::WireFormat.IsEndGroupTag(tag)) {
		uint32_t L_23 = V_0;
		bool L_24;
		L_24 = WireFormat_IsEndGroupTag_mB577CA68ED4BEFC51C8E72F58E018D921140D929(L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_006a;
		}
	}
	{
		// return this;
		return __this;
	}

IL_006a:
	{
		// ParseUnknownField(input, extensionRegistry, tag, field_name);
		RuntimeObject* L_25 = ___input0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_26 = ___extensionRegistry1;
		uint32_t L_27 = V_0;
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = VirtFuncInvoker4< bool, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *, uint32_t, String_t* >::Invoke(27 /* System.Boolean Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::ParseUnknownField(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry,System.UInt32,System.String) */, __this, L_25, L_26, L_27, L_28);
		// break;
		goto IL_00cf;
	}

IL_0077:
	{
		// result.hasId = input.ReadInt32(ref result.id_);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_30 = __this->get_result_1();
		RuntimeObject* L_31 = ___input0;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_32 = __this->get_result_1();
		NullCheck(L_32);
		int32_t* L_33 = L_32->get_address_of_id__5();
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker1< bool, int32_t* >::Invoke(3 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadInt32(System.Int32&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_31, (int32_t*)L_33);
		NullCheck(L_30);
		L_30->set_hasId_4(L_34);
		// break;
		goto IL_00cf;
	}

IL_0095:
	{
		// result.hasNormalizedX = input.ReadFloat(ref result.normalizedX_);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_35 = __this->get_result_1();
		RuntimeObject* L_36 = ___input0;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_37 = __this->get_result_1();
		NullCheck(L_37);
		float* L_38 = L_37->get_address_of_normalizedX__8();
		NullCheck(L_36);
		bool L_39;
		L_39 = InterfaceFuncInvoker1< bool, float* >::Invoke(1 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadFloat(System.Single&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_36, (float*)L_38);
		NullCheck(L_35);
		L_35->set_hasNormalizedX_7(L_39);
		// break;
		goto IL_00cf;
	}

IL_00b3:
	{
		// result.hasNormalizedY = input.ReadFloat(ref result.normalizedY_);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_40 = __this->get_result_1();
		RuntimeObject* L_41 = ___input0;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_42 = __this->get_result_1();
		NullCheck(L_42);
		float* L_43 = L_42->get_address_of_normalizedY__11();
		NullCheck(L_41);
		bool L_44;
		L_44 = InterfaceFuncInvoker1< bool, float* >::Invoke(1 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadFloat(System.Single&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_41, (float*)L_43);
		NullCheck(L_40);
		L_40->set_hasNormalizedY_10(L_44);
	}

IL_00cf:
	{
		// while (input.ReadTag(out tag, out field_name)) {
		RuntimeObject* L_45 = ___input0;
		NullCheck(L_45);
		bool L_46;
		L_46 = InterfaceFuncInvoker2< bool, uint32_t*, String_t** >::Invoke(0 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadTag(System.UInt32&,System.String&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_45, (uint32_t*)(&V_0), (String_t**)(&V_1));
		if (L_46)
		{
			goto IL_000c;
		}
	}
	{
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::get_HasId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasId_mC474782EB98A2A7E9CE59F184615166F173CC1EC (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasId; }
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasId_4();
		return L_1;
	}
}
// System.Int32 proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Builder_get_Id_m0E1FC23AEFF3E01523953CE9D5B9F025626F9A7E (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.Id; }
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Pointer_get_Id_m0653E09B9E6A7D4F25CE204832027A4A3521BC27_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::set_Id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Id_m60C9EB5A23AE4D14FC9A8CF7674AA9A311293151 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { SetId(value); }
		int32_t L_0 = ___value0;
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_1;
		L_1 = Builder_SetId_m2BBB18A8949AE3D29C3FEB40F8C9E7BECC9F8840(__this, L_0, /*hidden argument*/NULL);
		// set { SetId(value); }
		return;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::SetId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_SetId_m2BBB18A8949AE3D29C3FEB40F8C9E7BECC9F8840 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0;
		L_0 = Builder_PrepareBuilder_mD44AF9B90DA9836BEB57B0D32686E438F0FF51DD(__this, /*hidden argument*/NULL);
		// result.hasId = true;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasId_4((bool)1);
		// result.id_ = value;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_2 = __this->get_result_1();
		int32_t L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_id__5(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::ClearId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_ClearId_m506F13A54373154562BB04A941A53D244355F738 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0;
		L_0 = Builder_PrepareBuilder_mD44AF9B90DA9836BEB57B0D32686E438F0FF51DD(__this, /*hidden argument*/NULL);
		// result.hasId = false;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasId_4((bool)0);
		// result.id_ = 0;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_id__5(0);
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::get_HasNormalizedX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasNormalizedX_m4BADBCA6430D4AD567D6BB2163FA04AC458ACE26 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasNormalizedX; }
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasNormalizedX_7();
		return L_1;
	}
}
// System.Single proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::get_NormalizedX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Builder_get_NormalizedX_m20B166F6637B349F74EBC66F8D5AC9A264EEE831 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.NormalizedX; }
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		float L_1;
		L_1 = Pointer_get_NormalizedX_m2E5C629CC71F370D7A8A97B4761AB801FFA3AFA6_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::set_NormalizedX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_NormalizedX_mC9705363CB6D83EC4895422AF010D922F0AD8D75 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { SetNormalizedX(value); }
		float L_0 = ___value0;
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_1;
		L_1 = Builder_SetNormalizedX_mABF34CEC072FA7F565FDB22FDB5B2A61ED612218(__this, L_0, /*hidden argument*/NULL);
		// set { SetNormalizedX(value); }
		return;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::SetNormalizedX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_SetNormalizedX_mABF34CEC072FA7F565FDB22FDB5B2A61ED612218 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0;
		L_0 = Builder_PrepareBuilder_mD44AF9B90DA9836BEB57B0D32686E438F0FF51DD(__this, /*hidden argument*/NULL);
		// result.hasNormalizedX = true;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasNormalizedX_7((bool)1);
		// result.normalizedX_ = value;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_2 = __this->get_result_1();
		float L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_normalizedX__8(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::ClearNormalizedX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_ClearNormalizedX_m1F366F25677C98EC314699FE8183FAB014F8A07E (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0;
		L_0 = Builder_PrepareBuilder_mD44AF9B90DA9836BEB57B0D32686E438F0FF51DD(__this, /*hidden argument*/NULL);
		// result.hasNormalizedX = false;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasNormalizedX_7((bool)0);
		// result.normalizedX_ = 0F;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_normalizedX__8((0.0f));
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::get_HasNormalizedY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasNormalizedY_m3060C7DE07D534087F3AF3D2454A04154DA9E4DD (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasNormalizedY; }
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasNormalizedY_10();
		return L_1;
	}
}
// System.Single proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::get_NormalizedY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Builder_get_NormalizedY_mB030307C745D402FB5766B4686C3A5F75F49486C (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.NormalizedY; }
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		float L_1;
		L_1 = Pointer_get_NormalizedY_m319304960B30857DB5AA2332C86737F91368B776_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::set_NormalizedY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_NormalizedY_mB758ED8B16591A5215801E63E21FADDA17916C21 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { SetNormalizedY(value); }
		float L_0 = ___value0;
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_1;
		L_1 = Builder_SetNormalizedY_m58BDA533CBAD2377DE98C21A7AD316308C50D721(__this, L_0, /*hidden argument*/NULL);
		// set { SetNormalizedY(value); }
		return;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::SetNormalizedY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_SetNormalizedY_m58BDA533CBAD2377DE98C21A7AD316308C50D721 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0;
		L_0 = Builder_PrepareBuilder_mD44AF9B90DA9836BEB57B0D32686E438F0FF51DD(__this, /*hidden argument*/NULL);
		// result.hasNormalizedY = true;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasNormalizedY_10((bool)1);
		// result.normalizedY_ = value;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_2 = __this->get_result_1();
		float L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_normalizedY__11(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::ClearNormalizedY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_ClearNormalizedY_m7E7272CDC5ABAE36114EDBDD6AE890E20DC22908 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0;
		L_0 = Builder_PrepareBuilder_mD44AF9B90DA9836BEB57B0D32686E438F0FF51DD(__this, /*hidden argument*/NULL);
		// result.hasNormalizedY = false;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasNormalizedY_10((bool)0);
		// result.normalizedY_ = 0F;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_normalizedY__11((0.0f));
		// return this;
		return __this;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * AccelerometerEvent_get_DefaultInstance_m6971C75D8BBDDD9BA5872D8742E9F25197263661_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return defaultInstance; }
		IL2CPP_RUNTIME_CLASS_INIT(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_il2cpp_TypeInfo_var);
		AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * L_0 = ((AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_StaticFields*)il2cpp_codegen_static_fields_for(AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA_il2cpp_TypeInfo_var))->get_defaultInstance_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AccelerometerEvent_get_HasTimestamp_m1A2FD1A59501CFF9D672F81693CE4A6B38371F72_inline (AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * __this, const RuntimeMethod* method)
{
	{
		// get { return hasTimestamp; }
		bool L_0 = __this->get_hasTimestamp_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t AccelerometerEvent_get_Timestamp_m34C037F8E45E33E6529632BD72029DEE677CFFBA_inline (AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * __this, const RuntimeMethod* method)
{
	{
		// get { return timestamp_; }
		int64_t L_0 = __this->get_timestamp__5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AccelerometerEvent_get_HasX_mB86F6DCB228C6C9C6F6E4DEF6D34BF831F155F86_inline (AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * __this, const RuntimeMethod* method)
{
	{
		// get { return hasX; }
		bool L_0 = __this->get_hasX_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AccelerometerEvent_get_X_m1135BF88034276286CECDCFF203AFD647773DF59_inline (AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * __this, const RuntimeMethod* method)
{
	{
		// get { return x_; }
		float L_0 = __this->get_x__8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AccelerometerEvent_get_HasY_m6E67B35C0E6A0149AE67513B750FB54B048CDBE6_inline (AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * __this, const RuntimeMethod* method)
{
	{
		// get { return hasY; }
		bool L_0 = __this->get_hasY_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AccelerometerEvent_get_Y_m27AC19083EBF55AF9B7D13811DEB89A91BF24A0B_inline (AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * __this, const RuntimeMethod* method)
{
	{
		// get { return y_; }
		float L_0 = __this->get_y__11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AccelerometerEvent_get_HasZ_m68A704A55BA221B436A922D9E1E1501249AEA7F3_inline (AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * __this, const RuntimeMethod* method)
{
	{
		// get { return hasZ; }
		bool L_0 = __this->get_hasZ_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float AccelerometerEvent_get_Z_mC8C037719C5E02E507A114C54E6A74C983627D0E_inline (AccelerometerEvent_tC05C97C9B325E3904DF5CDCACF3BC915AEFA1AFA * __this, const RuntimeMethod* method)
{
	{
		// get { return z_; }
		float L_0 = __this->get_z__14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ExtensionRegistry_get_Empty_mC0CEC24AC7345586186C0641D64BAAC63413DAA9_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_0 = ((ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_StaticFields*)il2cpp_codegen_static_fields_for(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var))->get_empty_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_Ordinal_mF3B6370BEBD77351DB5218C867DCD669C47B8812_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_0 = ((StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var))->get__ordinal_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * DepthMapEvent_get_DefaultInstance_m468BACF0728BE350286EEE6541A5FC48BEE4D1D2_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return defaultInstance; }
		IL2CPP_RUNTIME_CLASS_INIT(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_il2cpp_TypeInfo_var);
		DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * L_0 = ((DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_StaticFields*)il2cpp_codegen_static_fields_for(DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885_il2cpp_TypeInfo_var))->get_defaultInstance_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DepthMapEvent_get_HasTimestamp_m0D9A6D1649B89941C31CF1E8BC85FE62E12662BB_inline (DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasTimestamp; }
		bool L_0 = __this->get_hasTimestamp_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t DepthMapEvent_get_Timestamp_m9F2295F37F13231AE793C81F275C857A17719B74_inline (DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * __this, const RuntimeMethod* method)
{
	{
		// get { return timestamp_; }
		int64_t L_0 = __this->get_timestamp__5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DepthMapEvent_get_HasWidth_m31A6C65468A11635C166DF5A73B3A6B0E4573FF1_inline (DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasWidth; }
		bool L_0 = __this->get_hasWidth_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DepthMapEvent_get_Width_m6522A5C33EFFBDF83573A5EAA5606E9596E34AFF_inline (DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * __this, const RuntimeMethod* method)
{
	{
		// get { return width_; }
		int32_t L_0 = __this->get_width__8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DepthMapEvent_get_HasHeight_m88EAFAFD1EA28E27A1330E1FFDD0AD256B24E2F3_inline (DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasHeight; }
		bool L_0 = __this->get_hasHeight_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DepthMapEvent_get_Height_mB2A0B6D30EC2A0E2818F0E408198F579C043D0D8_inline (DepthMapEvent_t7691FF51B1BA87B6C1956FA5B068B353AFAE4885 * __this, const RuntimeMethod* method)
{
	{
		// get { return height_; }
		int32_t L_0 = __this->get_height__11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * GyroscopeEvent_get_DefaultInstance_m0F1F859BF40AB538AEA9DC974D471F88DAA3AA02_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return defaultInstance; }
		IL2CPP_RUNTIME_CLASS_INIT(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_il2cpp_TypeInfo_var);
		GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * L_0 = ((GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_StaticFields*)il2cpp_codegen_static_fields_for(GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19_il2cpp_TypeInfo_var))->get_defaultInstance_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GyroscopeEvent_get_HasTimestamp_m5947FBB22BB057F1D3D3AE28F7587CD836416621_inline (GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasTimestamp; }
		bool L_0 = __this->get_hasTimestamp_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t GyroscopeEvent_get_Timestamp_mDAB25E2A5E76FDC59EA0FD52702B79832EBBEA76_inline (GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * __this, const RuntimeMethod* method)
{
	{
		// get { return timestamp_; }
		int64_t L_0 = __this->get_timestamp__5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GyroscopeEvent_get_HasX_m0D1D5B3C45FD5B63CD4102002CEF6DFF5DC9429F_inline (GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasX; }
		bool L_0 = __this->get_hasX_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GyroscopeEvent_get_X_mEE8C2D464F76A7BC1B6B1F18EB700E2D2AFB3889_inline (GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * __this, const RuntimeMethod* method)
{
	{
		// get { return x_; }
		float L_0 = __this->get_x__8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GyroscopeEvent_get_HasY_m7AFE8FAA372B82E367C7CD9A1C733665B4E4A096_inline (GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasY; }
		bool L_0 = __this->get_hasY_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GyroscopeEvent_get_Y_m403E83657F6F879629C375BFB85493CBC38AAAB1_inline (GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * __this, const RuntimeMethod* method)
{
	{
		// get { return y_; }
		float L_0 = __this->get_y__11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GyroscopeEvent_get_HasZ_mE0AE126D0B8079FF19FDA3B333E6574A79E31882_inline (GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasZ; }
		bool L_0 = __this->get_hasZ_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float GyroscopeEvent_get_Z_mCAB7F3326072E58DCB44F823428D590339D0EFC1_inline (GyroscopeEvent_tF2BAAD2CD7ADDA6E60818AC49693E7B1DF087F19 * __this, const RuntimeMethod* method)
{
	{
		// get { return z_; }
		float L_0 = __this->get_z__14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * KeyEvent_get_DefaultInstance_m5AC75ECE199AB1662690508B673CF317C7542DDA_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return defaultInstance; }
		IL2CPP_RUNTIME_CLASS_INIT(KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_il2cpp_TypeInfo_var);
		KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * L_0 = ((KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_StaticFields*)il2cpp_codegen_static_fields_for(KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD_il2cpp_TypeInfo_var))->get_defaultInstance_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyEvent_get_HasAction_mAFB7CD8850A0ED2370DDD8671BF3F8EFE3174604_inline (KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * __this, const RuntimeMethod* method)
{
	{
		// get { return hasAction; }
		bool L_0 = __this->get_hasAction_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyEvent_get_Action_mE0817B592E84C416B271F9B4F2B415453068D24E_inline (KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * __this, const RuntimeMethod* method)
{
	{
		// get { return action_; }
		int32_t L_0 = __this->get_action__5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyEvent_get_HasCode_m643FDB361D2519A3E1ADF282184ACE970F405403_inline (KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * __this, const RuntimeMethod* method)
{
	{
		// get { return hasCode; }
		bool L_0 = __this->get_hasCode_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyEvent_get_Code_m2D69BFE38B5929EAB024E35E90DD626A2A01D5A3_inline (KeyEvent_t2EB5B47E6BEB4783C5BA9582F93D0545083103DD * __this, const RuntimeMethod* method)
{
	{
		// get { return code_; }
		int32_t L_0 = __this->get_code__8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * MotionEvent_get_DefaultInstance_mF373AC002EDBB3A90A103DC28039BB2ED4291E44_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return defaultInstance; }
		IL2CPP_RUNTIME_CLASS_INIT(MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_il2cpp_TypeInfo_var);
		MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * L_0 = ((MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_StaticFields*)il2cpp_codegen_static_fields_for(MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6_il2cpp_TypeInfo_var))->get_defaultInstance_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MotionEvent_get_HasTimestamp_mEF14C6A962AD02AFFBC4477FEC77C4CC709EB7C6_inline (MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasTimestamp; }
		bool L_0 = __this->get_hasTimestamp_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t MotionEvent_get_Timestamp_m7B094DC0B3BE702FFDFB21F7E7B03BB45D24C220_inline (MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * __this, const RuntimeMethod* method)
{
	{
		// get { return timestamp_; }
		int64_t L_0 = __this->get_timestamp__5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MotionEvent_get_HasAction_m1C19F376EED271CBBA01698349475528845EAFD0_inline (MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasAction; }
		bool L_0 = __this->get_hasAction_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MotionEvent_get_Action_mAE5AB179BB654FC8DA1161BBEA4913C22E8599FD_inline (MotionEvent_t51DED8ABB8A600F7527E015346F416294509EAD6 * __this, const RuntimeMethod* method)
{
	{
		// get { return action_; }
		int32_t L_0 = __this->get_action__8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_get_DefaultInstance_m62857201F32F992458F0D816DF7B91DEB32AD858_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return defaultInstance; }
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = ((Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_StaticFields*)il2cpp_codegen_static_fields_for(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var))->get_defaultInstance_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * OrientationEvent_get_DefaultInstance_m7F7CA2111C4A2656195A3465D8D437D1BDD13DAF_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return defaultInstance; }
		IL2CPP_RUNTIME_CLASS_INIT(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_il2cpp_TypeInfo_var);
		OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * L_0 = ((OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_StaticFields*)il2cpp_codegen_static_fields_for(OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153_il2cpp_TypeInfo_var))->get_defaultInstance_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OrientationEvent_get_HasTimestamp_m670BCC950048EAC6D2A0E8E7D8A9F750255D7256_inline (OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasTimestamp; }
		bool L_0 = __this->get_hasTimestamp_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t OrientationEvent_get_Timestamp_m1A50AD89E5A365F7D8C6D892814043ABAA79437A_inline (OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * __this, const RuntimeMethod* method)
{
	{
		// get { return timestamp_; }
		int64_t L_0 = __this->get_timestamp__5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OrientationEvent_get_HasX_m9F2E62F7D48D89695C0BBC323096CF9C77E0EDEA_inline (OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasX; }
		bool L_0 = __this->get_hasX_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float OrientationEvent_get_X_m25A06C66CFED0D61CCAB87CCA73D5F292596486D_inline (OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * __this, const RuntimeMethod* method)
{
	{
		// get { return x_; }
		float L_0 = __this->get_x__8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OrientationEvent_get_HasY_m03F79AB04C52BA358A202470F7D7FD0E083BEE5A_inline (OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasY; }
		bool L_0 = __this->get_hasY_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float OrientationEvent_get_Y_mA374E18FAAE6B43C0CDC6344D1329F8188370851_inline (OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * __this, const RuntimeMethod* method)
{
	{
		// get { return y_; }
		float L_0 = __this->get_y__11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OrientationEvent_get_HasZ_m7D3F9E83BF8B5C1556FF972DBFBACE03808FA69D_inline (OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasZ; }
		bool L_0 = __this->get_hasZ_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float OrientationEvent_get_Z_mAA6B77185DADDE06F680E8CD0BE5603C9D0248DB_inline (OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * __this, const RuntimeMethod* method)
{
	{
		// get { return z_; }
		float L_0 = __this->get_z__14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OrientationEvent_get_HasW_mAEB432A9932CB21C56EEE329515EA8ECED4B0DE8_inline (OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasW; }
		bool L_0 = __this->get_hasW_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float OrientationEvent_get_W_m92B97B423C7EB15D87A0468F561134BB8AEC1F83_inline (OrientationEvent_t285E5CFDEF3654457180419DD11F40F4DD79B153 * __this, const RuntimeMethod* method)
{
	{
		// get { return w_; }
		float L_0 = __this->get_w__17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pointer_get_Id_m0653E09B9E6A7D4F25CE204832027A4A3521BC27_inline (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return id_; }
		int32_t L_0 = __this->get_id__5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Pointer_get_NormalizedX_m2E5C629CC71F370D7A8A97B4761AB801FFA3AFA6_inline (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return normalizedX_; }
		float L_0 = __this->get_normalizedX__8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Pointer_get_NormalizedY_m319304960B30857DB5AA2332C86737F91368B776_inline (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return normalizedY_; }
		float L_0 = __this->get_normalizedY__11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Pointer_get_HasId_mFDC4D68483FBC3715FB3E435E7878AC5736F9BB9_inline (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasId; }
		bool L_0 = __this->get_hasId_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Pointer_get_HasNormalizedX_mF40107BFF8BC8A039179BE59D6F492078864DEE8_inline (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasNormalizedX; }
		bool L_0 = __this->get_hasNormalizedX_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Pointer_get_HasNormalizedY_mAAF0E62830392472F09B8A85CD52337CD5FDC696_inline (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasNormalizedY; }
		bool L_0 = __this->get_hasNormalizedY_10();
		return L_0;
	}
}
