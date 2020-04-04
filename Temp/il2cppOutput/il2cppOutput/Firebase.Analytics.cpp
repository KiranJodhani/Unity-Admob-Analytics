#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63;
// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D;
// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595;
// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t8C7BAE7830BEB23DBDBA5ED152D1C91C31E09AA4;
// Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_tE9EE1F5383BC9F044CB3D284F60BDECE5B75A5DF;
// Firebase.Analytics.Parameter
struct Parameter_tED166B3BB2203CCDC4DF5F9F2714037F7ADB591E;
// Firebase.Analytics.Parameter[]
struct ParameterU5BU5D_t054FF7CCF1E8FB451523FEF2673FE821C17ADBAB;
// Firebase.FirebaseApp
struct FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986;
// Firebase.FirebaseApp/CreateDelegate
struct CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F;
// Firebase.FutureString
struct FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C;
// Firebase.FutureString/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.ApplicationException
struct ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.ArithmeticException
struct ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureString/Action>
struct Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.DivideByZeroException
struct DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC;
// System.EventHandler
struct EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C;
// System.Exception
struct Exception_t;
// System.Func`1<Firebase.DependencyStatus>
struct Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572;
// System.Func`1<System.Boolean>
struct Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F;
// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_t1C8755364A4E277E5036A8167830AA7A8544A2C9;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.IOException
struct IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidCastException
struct InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.NullReferenceException
struct NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC;
// System.OutOfMemoryException
struct OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7;
// System.OverflowException
struct OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.SystemException
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_tCE3276D3F820150AD890B4700B08839B1F60B2EB;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAnalytics_t63A5B26395B376BF8A1460F2B89E4AE34B8CA3F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_tE9EE1F5383BC9F044CB3D284F60BDECE5B75A5DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_t8C7BAE7830BEB23DBDBA5ED152D1C91C31E09AA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral519E5A114736C3C9A5709C059C9D5F69D5683AB2;
IL2CPP_EXTERN_C String_t* _stringLiteralA804D931F27BE6EF35191274DAF148C0B4FCEEF6;
IL2CPP_EXTERN_C String_t* _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_GetAnalyticsInstanceIdAsync_mBE7135CAD82D933015948A2A79029A776D89667E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_LogEvent_m0673E57AC8BD06DD2DD64C7771CDC0EE2DC2B2FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_LogEvent_m3AC2DF66FB21089B3466A0AE276C3310D6299674_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_LogEvent_m72DC3A97544C5D9906ECEF4755E57A1A4456D2BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_LogEvent_m7899E0CD5FFBDDBE5B575C4BA44D4184710E818C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_LogEvent_mD6FD74FADCCFF73E90711DF8948968A0BF4D24D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_ResetAnalyticsData_m4D30FCFB911528C57F298304D7EC4BE708DA0FD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_SetAnalyticsCollectionEnabled_m92023E5F24DF4E69011B4B891F14BBF08853568B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_SetMinimumSessionDurationInternal_m8411DE1028C8A19D81838CC3288DCCA9AA6641F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_SetSessionTimeoutDurationInternal_m7E946A01E194FF9C0C84ABF3CFE932F929821F1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_SetUserId_mF708074D5EA6AACDFE44AD662DD36126FD71AE13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_SetUserProperty_m080447BA55B65CFB612FB0F239C95134F9DD3057_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_EventJoinGroup_mAB018BBB6AC8AE2B6217B41798042E81260B7C4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_EventLevelUp_m866676E6D2A5DB3EABC37688A4FF16606CD7D146_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_EventLogin_m1FE50C90B919C950420332FE8966927A564BFA32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_EventPostScore_m7CFF761F1C91F240F96E27A0150421C37551FE92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_ParameterCharacter_m377A215E4C09B945CBAB8889190B660C987CDB33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_ParameterGroupId_m63B5864F1C8E11D8ED37A2EC5B082A93BF828CA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_ParameterLevel_m54FD724A9520E3A739AC47A972F34167E3D66B1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_ParameterScore_m2BADC3CB5322F259A2BD3D2E86112A28B7C0FA41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseAnalytics_get_UserPropertySignUpMethod_mD5423852DCF18F25CFCD1A5642E49910CEE24682_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parameter__ctor_m3F98F329CAB6029C98CFC9DF8872C719DDD67DEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parameter__ctor_m7A98DF030BD1B79FD0B5139AB2307A8A7DA0482D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parameter__ctor_mA19B0CAEDE4B5BBC444222B8C910027F87A291BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_m3DFDA6CC38F2E6F2C2EB78BCF25D07006DF163AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_mCB23E369505D9F5FEA485E070C110C8565112826_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_m9E9CD543C7CAF7388C202B32437529C3D52007E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m6BDF9FCFEA50A4BBA4C1914E91108429E9F3EAA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_m8FD03FA73FC3880BF7793BED56883DBB8B862503_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_m7994B3AEA8CF54DE19D8B4903B5C18EED3A2B84E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_mB7DB43B07E224A98078E300843FB0A67ACCB5375_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m501E320459CE747ED557D793C7CF2E402503C1F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_mF79B082F3494D4FEC8620F65D1200C2EE223A2F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_mD1129C1ED7B78A2F1F831F175D2F7C40E4B00747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_mDE1A001EEAF8CE7513FADD0EF8F443825E6A3E04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_m52E8C8517F5498443F1F622C202FDECDCD681334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_mA580DD5141BD18F93B0DA7F6CA0C0B5223E9C55E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_m6BC1580F9B1E894F5549E7CCE9755F9FECDECF7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_mE0EF019C76BCFC25F88F9C02501F216E2AF90726_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_m30D5020E1A1B88FD77565E0676EF8CC7ECCA07DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t FirebaseAnalyticsPINVOKE__cctor_m8FE26E48776FDFD033552C7EB98056BB7F5BFADC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAnalytics_GetAnalyticsInstanceIdAsync_mBE7135CAD82D933015948A2A79029A776D89667E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAnalytics_LogEvent_m0673E57AC8BD06DD2DD64C7771CDC0EE2DC2B2FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAnalytics_LogEvent_m3AC2DF66FB21089B3466A0AE276C3310D6299674_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAnalytics_LogEvent_m72DC3A97544C5D9906ECEF4755E57A1A4456D2BD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAnalytics_LogEvent_m7899E0CD5FFBDDBE5B575C4BA44D4184710E818C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAnalytics_LogEvent_mD6FD74FADCCFF73E90711DF8948968A0BF4D24D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAnalytics_ResetAnalyticsData_m4D30FCFB911528C57F298304D7EC4BE708DA0FD1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAnalytics_SetAnalyticsCollectionEnabled_m92023E5F24DF4E69011B4B891F14BBF08853568B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAnalytics_SetMinimumSessionDurationInternal_m8411DE1028C8A19D81838CC3288DCCA9AA6641F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAnalytics_SetMinimumSessionDuration_m6F4D52617897305EF663BEDE688B6F4843B6A504_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAnalytics_SetSessionTimeoutDurationInternal_m7E946A01E194FF9C0C84ABF3CFE932F929821F1A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAnalytics_SetSessionTimeoutDuration_mB15DB943547DAF4B248F15CF42D6A43A38315105_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAnalytics_SetUserId_mF708074D5EA6AACDFE44AD662DD36126FD71AE13_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAnalytics_SetUserProperty_m080447BA55B65CFB612FB0F239C95134F9DD3057_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAnalytics__cctor_m389E231BBDEC0DB21A2AD186DCF0DA29C5539EF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAnalytics_get_EventJoinGroup_mAB018BBB6AC8AE2B6217B41798042E81260B7C4D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAnalytics_get_EventLevelUp_m866676E6D2A5DB3EABC37688A4FF16606CD7D146_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAnalytics_get_EventLogin_m1FE50C90B919C950420332FE8966927A564BFA32_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAnalytics_get_EventPostScore_m7CFF761F1C91F240F96E27A0150421C37551FE92_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAnalytics_get_ParameterCharacter_m377A215E4C09B945CBAB8889190B660C987CDB33_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAnalytics_get_ParameterGroupId_m63B5864F1C8E11D8ED37A2EC5B082A93BF828CA7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAnalytics_get_ParameterLevel_m54FD724A9520E3A739AC47A972F34167E3D66B1F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAnalytics_get_ParameterScore_m2BADC3CB5322F259A2BD3D2E86112A28B7C0FA41_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseAnalytics_get_UserPropertySignUpMethod_mD5423852DCF18F25CFCD1A5642E49910CEE24682_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parameter_Dispose_m80F77D7A0A5D294A93BEB03D993B79C86021E06C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parameter__ctor_m3F98F329CAB6029C98CFC9DF8872C719DDD67DEE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parameter__ctor_m7A98DF030BD1B79FD0B5139AB2307A8A7DA0482D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parameter__ctor_mA19B0CAEDE4B5BBC444222B8C910027F87A291BD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parameter_getCPtr_m40A1C59BD22BE8159E80BF2F4E50B6EB6EF65C98_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingApplicationException_m3DFDA6CC38F2E6F2C2EB78BCF25D07006DF163AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentException_mCB23E369505D9F5FEA485E070C110C8565112826_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentNullException_m9E9CD543C7CAF7388C202B32437529C3D52007E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m6BDF9FCFEA50A4BBA4C1914E91108429E9F3EAA4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArithmeticException_m8FD03FA73FC3880BF7793BED56883DBB8B862503_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingDivideByZeroException_m7994B3AEA8CF54DE19D8B4903B5C18EED3A2B84E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingIOException_mB7DB43B07E224A98078E300843FB0A67ACCB5375_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m501E320459CE747ED557D793C7CF2E402503C1F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingInvalidCastException_mF79B082F3494D4FEC8620F65D1200C2EE223A2F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingInvalidOperationException_mD1129C1ED7B78A2F1F831F175D2F7C40E4B00747_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingNullReferenceException_mDE1A001EEAF8CE7513FADD0EF8F443825E6A3E04_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingOutOfMemoryException_m52E8C8517F5498443F1F622C202FDECDCD681334_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingOverflowException_mA580DD5141BD18F93B0DA7F6CA0C0B5223E9C55E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingSystemException_m6BC1580F9B1E894F5549E7CCE9755F9FECDECF7F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper__cctor_mEB41947A4E89F8722BF97D7BC50220B1CA2B8958_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGPendingException_Retrieve_m01F26782EB4EDDA84CD4BAA4B4EC3B744C12DCD9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGPendingException_Set_mE0EF019C76BCFC25F88F9C02501F216E2AF90726_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGStringHelper__cctor_m3F760E0CF5B5727345AA7EEB9E321E9F15E0E71A_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ParameterU5BU5D_t054FF7CCF1E8FB451523FEF2673FE821C17ADBAB;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tBC2863143BFFC5600EC74201BE0E44335D2BB446 
{
public:

public:
};


// System.Object


// Firebase.Analytics.FirebaseAnalytics
struct  FirebaseAnalytics_t63A5B26395B376BF8A1460F2B89E4AE34B8CA3F7  : public RuntimeObject
{
public:

public:
};

struct FirebaseAnalytics_t63A5B26395B376BF8A1460F2B89E4AE34B8CA3F7_StaticFields
{
public:
	// Firebase.FirebaseApp Firebase.Analytics.FirebaseAnalytics::app
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app_0;

public:
	inline static int32_t get_offset_of_app_0() { return static_cast<int32_t>(offsetof(FirebaseAnalytics_t63A5B26395B376BF8A1460F2B89E4AE34B8CA3F7_StaticFields, ___app_0)); }
	inline FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * get_app_0() const { return ___app_0; }
	inline FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 ** get_address_of_app_0() { return &___app_0; }
	inline void set_app_0(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * value)
	{
		___app_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___app_0), (void*)value);
	}
};


// Firebase.Analytics.FirebaseAnalyticsPINVOKE
struct  FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA  : public RuntimeObject
{
public:

public:
};

struct FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_StaticFields
{
public:
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper Firebase.Analytics.FirebaseAnalyticsPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63 * ___swigExceptionHelper_0;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGStringHelper Firebase.Analytics.FirebaseAnalyticsPINVOKE::swigStringHelper
	SWIGStringHelper_t8C7BAE7830BEB23DBDBA5ED152D1C91C31E09AA4 * ___swigStringHelper_1;

public:
	inline static int32_t get_offset_of_swigExceptionHelper_0() { return static_cast<int32_t>(offsetof(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_StaticFields, ___swigExceptionHelper_0)); }
	inline SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63 * get_swigExceptionHelper_0() const { return ___swigExceptionHelper_0; }
	inline SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63 ** get_address_of_swigExceptionHelper_0() { return &___swigExceptionHelper_0; }
	inline void set_swigExceptionHelper_0(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63 * value)
	{
		___swigExceptionHelper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigExceptionHelper_0), (void*)value);
	}

	inline static int32_t get_offset_of_swigStringHelper_1() { return static_cast<int32_t>(offsetof(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_StaticFields, ___swigStringHelper_1)); }
	inline SWIGStringHelper_t8C7BAE7830BEB23DBDBA5ED152D1C91C31E09AA4 * get_swigStringHelper_1() const { return ___swigStringHelper_1; }
	inline SWIGStringHelper_t8C7BAE7830BEB23DBDBA5ED152D1C91C31E09AA4 ** get_address_of_swigStringHelper_1() { return &___swigStringHelper_1; }
	inline void set_swigStringHelper_1(SWIGStringHelper_t8C7BAE7830BEB23DBDBA5ED152D1C91C31E09AA4 * value)
	{
		___swigStringHelper_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigStringHelper_1), (void*)value);
	}
};


// Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper
struct  SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63  : public RuntimeObject
{
public:

public:
};

struct SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields
{
public:
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___applicationDelegate_0;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___arithmeticDelegate_1;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___divideByZeroDelegate_2;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___indexOutOfRangeDelegate_3;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___invalidCastDelegate_4;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___invalidOperationDelegate_5;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___ioDelegate_6;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___nullReferenceDelegate_7;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___outOfMemoryDelegate_8;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___overflowDelegate_9;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___systemDelegate_10;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * ___argumentDelegate_11;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * ___argumentNullDelegate_12;
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * ___argumentOutOfRangeDelegate_13;

public:
	inline static int32_t get_offset_of_applicationDelegate_0() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields, ___applicationDelegate_0)); }
	inline ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * get_applicationDelegate_0() const { return ___applicationDelegate_0; }
	inline ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 ** get_address_of_applicationDelegate_0() { return &___applicationDelegate_0; }
	inline void set_applicationDelegate_0(ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * value)
	{
		___applicationDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___applicationDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_arithmeticDelegate_1() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields, ___arithmeticDelegate_1)); }
	inline ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * get_arithmeticDelegate_1() const { return ___arithmeticDelegate_1; }
	inline ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 ** get_address_of_arithmeticDelegate_1() { return &___arithmeticDelegate_1; }
	inline void set_arithmeticDelegate_1(ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * value)
	{
		___arithmeticDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arithmeticDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_divideByZeroDelegate_2() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields, ___divideByZeroDelegate_2)); }
	inline ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * get_divideByZeroDelegate_2() const { return ___divideByZeroDelegate_2; }
	inline ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 ** get_address_of_divideByZeroDelegate_2() { return &___divideByZeroDelegate_2; }
	inline void set_divideByZeroDelegate_2(ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * value)
	{
		___divideByZeroDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___divideByZeroDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_indexOutOfRangeDelegate_3() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields, ___indexOutOfRangeDelegate_3)); }
	inline ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * get_indexOutOfRangeDelegate_3() const { return ___indexOutOfRangeDelegate_3; }
	inline ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 ** get_address_of_indexOutOfRangeDelegate_3() { return &___indexOutOfRangeDelegate_3; }
	inline void set_indexOutOfRangeDelegate_3(ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * value)
	{
		___indexOutOfRangeDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexOutOfRangeDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of_invalidCastDelegate_4() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields, ___invalidCastDelegate_4)); }
	inline ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * get_invalidCastDelegate_4() const { return ___invalidCastDelegate_4; }
	inline ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 ** get_address_of_invalidCastDelegate_4() { return &___invalidCastDelegate_4; }
	inline void set_invalidCastDelegate_4(ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * value)
	{
		___invalidCastDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidCastDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of_invalidOperationDelegate_5() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields, ___invalidOperationDelegate_5)); }
	inline ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * get_invalidOperationDelegate_5() const { return ___invalidOperationDelegate_5; }
	inline ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 ** get_address_of_invalidOperationDelegate_5() { return &___invalidOperationDelegate_5; }
	inline void set_invalidOperationDelegate_5(ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * value)
	{
		___invalidOperationDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidOperationDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of_ioDelegate_6() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields, ___ioDelegate_6)); }
	inline ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * get_ioDelegate_6() const { return ___ioDelegate_6; }
	inline ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 ** get_address_of_ioDelegate_6() { return &___ioDelegate_6; }
	inline void set_ioDelegate_6(ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * value)
	{
		___ioDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ioDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of_nullReferenceDelegate_7() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields, ___nullReferenceDelegate_7)); }
	inline ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * get_nullReferenceDelegate_7() const { return ___nullReferenceDelegate_7; }
	inline ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 ** get_address_of_nullReferenceDelegate_7() { return &___nullReferenceDelegate_7; }
	inline void set_nullReferenceDelegate_7(ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * value)
	{
		___nullReferenceDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nullReferenceDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of_outOfMemoryDelegate_8() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields, ___outOfMemoryDelegate_8)); }
	inline ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * get_outOfMemoryDelegate_8() const { return ___outOfMemoryDelegate_8; }
	inline ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 ** get_address_of_outOfMemoryDelegate_8() { return &___outOfMemoryDelegate_8; }
	inline void set_outOfMemoryDelegate_8(ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * value)
	{
		___outOfMemoryDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outOfMemoryDelegate_8), (void*)value);
	}

	inline static int32_t get_offset_of_overflowDelegate_9() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields, ___overflowDelegate_9)); }
	inline ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * get_overflowDelegate_9() const { return ___overflowDelegate_9; }
	inline ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 ** get_address_of_overflowDelegate_9() { return &___overflowDelegate_9; }
	inline void set_overflowDelegate_9(ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * value)
	{
		___overflowDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overflowDelegate_9), (void*)value);
	}

	inline static int32_t get_offset_of_systemDelegate_10() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields, ___systemDelegate_10)); }
	inline ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * get_systemDelegate_10() const { return ___systemDelegate_10; }
	inline ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 ** get_address_of_systemDelegate_10() { return &___systemDelegate_10; }
	inline void set_systemDelegate_10(ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * value)
	{
		___systemDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___systemDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of_argumentDelegate_11() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields, ___argumentDelegate_11)); }
	inline ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * get_argumentDelegate_11() const { return ___argumentDelegate_11; }
	inline ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D ** get_address_of_argumentDelegate_11() { return &___argumentDelegate_11; }
	inline void set_argumentDelegate_11(ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * value)
	{
		___argumentDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_argumentNullDelegate_12() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields, ___argumentNullDelegate_12)); }
	inline ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * get_argumentNullDelegate_12() const { return ___argumentNullDelegate_12; }
	inline ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D ** get_address_of_argumentNullDelegate_12() { return &___argumentNullDelegate_12; }
	inline void set_argumentNullDelegate_12(ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * value)
	{
		___argumentNullDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentNullDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_argumentOutOfRangeDelegate_13() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields, ___argumentOutOfRangeDelegate_13)); }
	inline ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * get_argumentOutOfRangeDelegate_13() const { return ___argumentOutOfRangeDelegate_13; }
	inline ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D ** get_address_of_argumentOutOfRangeDelegate_13() { return &___argumentOutOfRangeDelegate_13; }
	inline void set_argumentOutOfRangeDelegate_13(ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * value)
	{
		___argumentOutOfRangeDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentOutOfRangeDelegate_13), (void*)value);
	}
};


// Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGPendingException
struct  SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503  : public RuntimeObject
{
public:

public:
};

struct SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_StaticFields
{
public:
	// System.Int32 Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;

public:
	inline static int32_t get_offset_of_numExceptionsPending_1() { return static_cast<int32_t>(offsetof(SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_StaticFields, ___numExceptionsPending_1)); }
	inline int32_t get_numExceptionsPending_1() const { return ___numExceptionsPending_1; }
	inline int32_t* get_address_of_numExceptionsPending_1() { return &___numExceptionsPending_1; }
	inline void set_numExceptionsPending_1(int32_t value)
	{
		___numExceptionsPending_1 = value;
	}
};

struct SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_ThreadStaticFields
{
public:
	// System.Exception Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGPendingException::pendingException
	Exception_t * ___pendingException_0;

public:
	inline static int32_t get_offset_of_pendingException_0() { return static_cast<int32_t>(offsetof(SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_ThreadStaticFields, ___pendingException_0)); }
	inline Exception_t * get_pendingException_0() const { return ___pendingException_0; }
	inline Exception_t ** get_address_of_pendingException_0() { return &___pendingException_0; }
	inline void set_pendingException_0(Exception_t * value)
	{
		___pendingException_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingException_0), (void*)value);
	}
};


// Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGStringHelper
struct  SWIGStringHelper_t8C7BAE7830BEB23DBDBA5ED152D1C91C31E09AA4  : public RuntimeObject
{
public:

public:
};

struct SWIGStringHelper_t8C7BAE7830BEB23DBDBA5ED152D1C91C31E09AA4_StaticFields
{
public:
	// Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGStringHelper_SWIGStringDelegate Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGStringHelper::stringDelegate
	SWIGStringDelegate_tE9EE1F5383BC9F044CB3D284F60BDECE5B75A5DF * ___stringDelegate_0;

public:
	inline static int32_t get_offset_of_stringDelegate_0() { return static_cast<int32_t>(offsetof(SWIGStringHelper_t8C7BAE7830BEB23DBDBA5ED152D1C91C31E09AA4_StaticFields, ___stringDelegate_0)); }
	inline SWIGStringDelegate_tE9EE1F5383BC9F044CB3D284F60BDECE5B75A5DF * get_stringDelegate_0() const { return ___stringDelegate_0; }
	inline SWIGStringDelegate_tE9EE1F5383BC9F044CB3D284F60BDECE5B75A5DF ** get_address_of_stringDelegate_0() { return &___stringDelegate_0; }
	inline void set_stringDelegate_0(SWIGStringDelegate_tE9EE1F5383BC9F044CB3D284F60BDECE5B75A5DF * value)
	{
		___stringDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringDelegate_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
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


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
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


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.HandleRef
struct  HandleRef_t876E76124F400D12395BF61D562162AB6822204A 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::m_wrapper
	RuntimeObject * ___m_wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::m_handle
	intptr_t ___m_handle_1;

public:
	inline static int32_t get_offset_of_m_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t876E76124F400D12395BF61D562162AB6822204A, ___m_wrapper_0)); }
	inline RuntimeObject * get_m_wrapper_0() const { return ___m_wrapper_0; }
	inline RuntimeObject ** get_address_of_m_wrapper_0() { return &___m_wrapper_0; }
	inline void set_m_wrapper_0(RuntimeObject * value)
	{
		___m_wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wrapper_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t876E76124F400D12395BF61D562162AB6822204A, ___m_handle_1)); }
	inline intptr_t get_m_handle_1() const { return ___m_handle_1; }
	inline intptr_t* get_address_of_m_handle_1() { return &___m_handle_1; }
	inline void set_m_handle_1(intptr_t value)
	{
		___m_handle_1 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Threading.Tasks.Task
struct  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskScheduler_7)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_parent_8)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_contingentProperties_15)); }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_factory_3)); }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_completedTask_18)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// Firebase.Analytics.Parameter
struct  Parameter_tED166B3BB2203CCDC4DF5F9F2714037F7ADB591E  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Analytics.Parameter::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.Analytics.Parameter::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(Parameter_tED166B3BB2203CCDC4DF5F9F2714037F7ADB591E, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(Parameter_tED166B3BB2203CCDC4DF5F9F2714037F7ADB591E, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.FirebaseApp
struct  FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.String Firebase.FirebaseApp::name
	String_t* ___name_3;
	// System.EventHandler Firebase.FirebaseApp::AppDisposed
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___AppDisposed_4;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_AppDisposed_4() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___AppDisposed_4)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_AppDisposed_4() const { return ___AppDisposed_4; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_AppDisposed_4() { return &___AppDisposed_4; }
	inline void set_AppDisposed_4(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___AppDisposed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppDisposed_4), (void*)value);
	}
};

struct FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields
{
public:
	// System.Object Firebase.FirebaseApp::disposeLock
	RuntimeObject * ___disposeLock_2;
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * ___nameToProxy_5;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 * ___cPtrToProxy_6;
	// System.Boolean Firebase.FirebaseApp::AppUtilCallbacksInitialized
	bool ___AppUtilCallbacksInitialized_7;
	// System.Object Firebase.FirebaseApp::AppUtilCallbacksLock
	RuntimeObject * ___AppUtilCallbacksLock_8;
	// System.Boolean Firebase.FirebaseApp::PreventOnAllAppsDestroyed
	bool ___PreventOnAllAppsDestroyed_9;
	// System.Boolean Firebase.FirebaseApp::crashlyticsInitializationAttempted
	bool ___crashlyticsInitializationAttempted_10;
	// System.Int32 Firebase.FirebaseApp::CheckDependenciesThread
	int32_t ___CheckDependenciesThread_11;
	// System.Object Firebase.FirebaseApp::CheckDependenciesThreadLock
	RuntimeObject * ___CheckDependenciesThreadLock_12;
	// Firebase.FirebaseApp_CreateDelegate Firebase.FirebaseApp::<>f__amU24cache0
	CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * ___U3CU3Ef__amU24cache0_13;
	// System.Func`1<System.Boolean> Firebase.FirebaseApp::<>f__amU24cache1
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___U3CU3Ef__amU24cache1_14;
	// System.Func`1<Firebase.DependencyStatus> Firebase.FirebaseApp::<>f__amU24cache2
	Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572 * ___U3CU3Ef__amU24cache2_15;
	// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__amU24cache3
	Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D * ___U3CU3Ef__amU24cache3_16;
	// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__amU24cache4
	Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F * ___U3CU3Ef__amU24cache4_17;

public:
	inline static int32_t get_offset_of_disposeLock_2() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___disposeLock_2)); }
	inline RuntimeObject * get_disposeLock_2() const { return ___disposeLock_2; }
	inline RuntimeObject ** get_address_of_disposeLock_2() { return &___disposeLock_2; }
	inline void set_disposeLock_2(RuntimeObject * value)
	{
		___disposeLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposeLock_2), (void*)value);
	}

	inline static int32_t get_offset_of_nameToProxy_5() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___nameToProxy_5)); }
	inline Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * get_nameToProxy_5() const { return ___nameToProxy_5; }
	inline Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE ** get_address_of_nameToProxy_5() { return &___nameToProxy_5; }
	inline void set_nameToProxy_5(Dictionary_2_t2E1F4545167E342F82AFA012A31DD7DD8752B6FE * value)
	{
		___nameToProxy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameToProxy_5), (void*)value);
	}

	inline static int32_t get_offset_of_cPtrToProxy_6() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___cPtrToProxy_6)); }
	inline Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 * get_cPtrToProxy_6() const { return ___cPtrToProxy_6; }
	inline Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 ** get_address_of_cPtrToProxy_6() { return &___cPtrToProxy_6; }
	inline void set_cPtrToProxy_6(Dictionary_2_t16FA637EF27DE97C11197B9DE231BEA419C59A62 * value)
	{
		___cPtrToProxy_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cPtrToProxy_6), (void*)value);
	}

	inline static int32_t get_offset_of_AppUtilCallbacksInitialized_7() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___AppUtilCallbacksInitialized_7)); }
	inline bool get_AppUtilCallbacksInitialized_7() const { return ___AppUtilCallbacksInitialized_7; }
	inline bool* get_address_of_AppUtilCallbacksInitialized_7() { return &___AppUtilCallbacksInitialized_7; }
	inline void set_AppUtilCallbacksInitialized_7(bool value)
	{
		___AppUtilCallbacksInitialized_7 = value;
	}

	inline static int32_t get_offset_of_AppUtilCallbacksLock_8() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___AppUtilCallbacksLock_8)); }
	inline RuntimeObject * get_AppUtilCallbacksLock_8() const { return ___AppUtilCallbacksLock_8; }
	inline RuntimeObject ** get_address_of_AppUtilCallbacksLock_8() { return &___AppUtilCallbacksLock_8; }
	inline void set_AppUtilCallbacksLock_8(RuntimeObject * value)
	{
		___AppUtilCallbacksLock_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppUtilCallbacksLock_8), (void*)value);
	}

	inline static int32_t get_offset_of_PreventOnAllAppsDestroyed_9() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___PreventOnAllAppsDestroyed_9)); }
	inline bool get_PreventOnAllAppsDestroyed_9() const { return ___PreventOnAllAppsDestroyed_9; }
	inline bool* get_address_of_PreventOnAllAppsDestroyed_9() { return &___PreventOnAllAppsDestroyed_9; }
	inline void set_PreventOnAllAppsDestroyed_9(bool value)
	{
		___PreventOnAllAppsDestroyed_9 = value;
	}

	inline static int32_t get_offset_of_crashlyticsInitializationAttempted_10() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___crashlyticsInitializationAttempted_10)); }
	inline bool get_crashlyticsInitializationAttempted_10() const { return ___crashlyticsInitializationAttempted_10; }
	inline bool* get_address_of_crashlyticsInitializationAttempted_10() { return &___crashlyticsInitializationAttempted_10; }
	inline void set_crashlyticsInitializationAttempted_10(bool value)
	{
		___crashlyticsInitializationAttempted_10 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThread_11() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___CheckDependenciesThread_11)); }
	inline int32_t get_CheckDependenciesThread_11() const { return ___CheckDependenciesThread_11; }
	inline int32_t* get_address_of_CheckDependenciesThread_11() { return &___CheckDependenciesThread_11; }
	inline void set_CheckDependenciesThread_11(int32_t value)
	{
		___CheckDependenciesThread_11 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThreadLock_12() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___CheckDependenciesThreadLock_12)); }
	inline RuntimeObject * get_CheckDependenciesThreadLock_12() const { return ___CheckDependenciesThreadLock_12; }
	inline RuntimeObject ** get_address_of_CheckDependenciesThreadLock_12() { return &___CheckDependenciesThreadLock_12; }
	inline void set_CheckDependenciesThreadLock_12(RuntimeObject * value)
	{
		___CheckDependenciesThreadLock_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckDependenciesThreadLock_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_13() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___U3CU3Ef__amU24cache0_13)); }
	inline CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * get_U3CU3Ef__amU24cache0_13() const { return ___U3CU3Ef__amU24cache0_13; }
	inline CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F ** get_address_of_U3CU3Ef__amU24cache0_13() { return &___U3CU3Ef__amU24cache0_13; }
	inline void set_U3CU3Ef__amU24cache0_13(CreateDelegate_tB541C97ADD76ABCD3C3171FCBA745A1F791D006F * value)
	{
		___U3CU3Ef__amU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache0_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_14() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___U3CU3Ef__amU24cache1_14)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_U3CU3Ef__amU24cache1_14() const { return ___U3CU3Ef__amU24cache1_14; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_U3CU3Ef__amU24cache1_14() { return &___U3CU3Ef__amU24cache1_14; }
	inline void set_U3CU3Ef__amU24cache1_14(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___U3CU3Ef__amU24cache1_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache1_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_15() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___U3CU3Ef__amU24cache2_15)); }
	inline Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572 * get_U3CU3Ef__amU24cache2_15() const { return ___U3CU3Ef__amU24cache2_15; }
	inline Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572 ** get_address_of_U3CU3Ef__amU24cache2_15() { return &___U3CU3Ef__amU24cache2_15; }
	inline void set_U3CU3Ef__amU24cache2_15(Func_1_tD700E5A1C9C9B1B0725496F49AFA6C94182F4572 * value)
	{
		___U3CU3Ef__amU24cache2_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache2_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_16() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___U3CU3Ef__amU24cache3_16)); }
	inline Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D * get_U3CU3Ef__amU24cache3_16() const { return ___U3CU3Ef__amU24cache3_16; }
	inline Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D ** get_address_of_U3CU3Ef__amU24cache3_16() { return &___U3CU3Ef__amU24cache3_16; }
	inline void set_U3CU3Ef__amU24cache3_16(Func_2_t9D8A260165ECD27F853FCF9051852B355BF46A9D * value)
	{
		___U3CU3Ef__amU24cache3_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache3_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_17() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___U3CU3Ef__amU24cache4_17)); }
	inline Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F * get_U3CU3Ef__amU24cache4_17() const { return ___U3CU3Ef__amU24cache4_17; }
	inline Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F ** get_address_of_U3CU3Ef__amU24cache4_17() { return &___U3CU3Ef__amU24cache4_17; }
	inline void set_U3CU3Ef__amU24cache4_17(Func_2_tAE6605F3F5BF6971C564A9B1033E2DB30C7A867F * value)
	{
		___U3CU3Ef__amU24cache4_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache4_17), (void*)value);
	}
};


// Firebase.FutureBase
struct  FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FutureBase::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.FutureBase::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// System.ApplicationException
struct  ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74  : public Exception_t
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Threading.Tasks.Task`1<System.String>
struct  Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C, ___m_result_22)); }
	inline String_t* get_m_result_22() const { return ___m_result_22; }
	inline String_t** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(String_t* value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tCE3276D3F820150AD890B4700B08839B1F60B2EB * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t1C8755364A4E277E5036A8167830AA7A8544A2C9 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tCE3276D3F820150AD890B4700B08839B1F60B2EB * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tCE3276D3F820150AD890B4700B08839B1F60B2EB ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tCE3276D3F820150AD890B4700B08839B1F60B2EB * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t1C8755364A4E277E5036A8167830AA7A8544A2C9 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t1C8755364A4E277E5036A8167830AA7A8544A2C9 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t1C8755364A4E277E5036A8167830AA7A8544A2C9 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
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
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate
struct  ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate
struct  ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGStringHelper_SWIGStringDelegate
struct  SWIGStringDelegate_tE9EE1F5383BC9F044CB3D284F60BDECE5B75A5DF  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.FutureString
struct  FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C  : public FutureBase_t75BACF0EF2911C731F998E85086202A1A2F55397
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FutureString::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_2;
	// System.IntPtr Firebase.FutureString::callbackData
	intptr_t ___callbackData_6;
	// Firebase.FutureString_SWIG_CompletionDelegate Firebase.FutureString::SWIG_CompletionCB
	SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064 * ___SWIG_CompletionCB_7;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C, ___swigCPtr_2)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_2))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_callbackData_6() { return static_cast<int32_t>(offsetof(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C, ___callbackData_6)); }
	inline intptr_t get_callbackData_6() const { return ___callbackData_6; }
	inline intptr_t* get_address_of_callbackData_6() { return &___callbackData_6; }
	inline void set_callbackData_6(intptr_t value)
	{
		___callbackData_6 = value;
	}

	inline static int32_t get_offset_of_SWIG_CompletionCB_7() { return static_cast<int32_t>(offsetof(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C, ___SWIG_CompletionCB_7)); }
	inline SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064 * get_SWIG_CompletionCB_7() const { return ___SWIG_CompletionCB_7; }
	inline SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064 ** get_address_of_SWIG_CompletionCB_7() { return &___SWIG_CompletionCB_7; }
	inline void set_SWIG_CompletionCB_7(SWIG_CompletionDelegate_t272C1BC5FA8F2729656DC57D27193F425851C064 * value)
	{
		___SWIG_CompletionCB_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SWIG_CompletionCB_7), (void*)value);
	}
};

struct FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureString_Action> Firebase.FutureString::Callbacks
	Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E * ___Callbacks_3;
	// System.Int32 Firebase.FutureString::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.FutureString::CallbackLock
	RuntimeObject * ___CallbackLock_5;

public:
	inline static int32_t get_offset_of_Callbacks_3() { return static_cast<int32_t>(offsetof(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_StaticFields, ___Callbacks_3)); }
	inline Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E * get_Callbacks_3() const { return ___Callbacks_3; }
	inline Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E ** get_address_of_Callbacks_3() { return &___Callbacks_3; }
	inline void set_Callbacks_3(Dictionary_2_tF19B633F27ED909FFD2574E2405028B00279647E * value)
	{
		___Callbacks_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callbacks_3), (void*)value);
	}

	inline static int32_t get_offset_of_CallbackIndex_4() { return static_cast<int32_t>(offsetof(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_StaticFields, ___CallbackIndex_4)); }
	inline int32_t get_CallbackIndex_4() const { return ___CallbackIndex_4; }
	inline int32_t* get_address_of_CallbackIndex_4() { return &___CallbackIndex_4; }
	inline void set_CallbackIndex_4(int32_t value)
	{
		___CallbackIndex_4 = value;
	}

	inline static int32_t get_offset_of_CallbackLock_5() { return static_cast<int32_t>(offsetof(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_StaticFields, ___CallbackLock_5)); }
	inline RuntimeObject * get_CallbackLock_5() const { return ___CallbackLock_5; }
	inline RuntimeObject ** get_address_of_CallbackLock_5() { return &___CallbackLock_5; }
	inline void set_CallbackLock_5(RuntimeObject * value)
	{
		___CallbackLock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CallbackLock_5), (void*)value);
	}
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArithmeticException
struct  ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.IOException
struct  IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.InvalidCastException
struct  InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NullReferenceException
struct  NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.OutOfMemoryException
struct  OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.DivideByZeroException
struct  DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC  : public ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269
{
public:

public:
};


// System.OverflowException
struct  OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D  : public ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Firebase.Analytics.Parameter[]
struct ParameterU5BU5D_t054FF7CCF1E8FB451523FEF2673FE821C17ADBAB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Parameter_tED166B3BB2203CCDC4DF5F9F2714037F7ADB591E * m_Items[1];

public:
	inline Parameter_tED166B3BB2203CCDC4DF5F9F2714037F7ADB591E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Parameter_tED166B3BB2203CCDC4DF5F9F2714037F7ADB591E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Parameter_tED166B3BB2203CCDC4DF5F9F2714037F7ADB591E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Parameter_tED166B3BB2203CCDC4DF5F9F2714037F7ADB591E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Parameter_tED166B3BB2203CCDC4DF5F9F2714037F7ADB591E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Parameter_tED166B3BB2203CCDC4DF5F9F2714037F7ADB591E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) intptr_t m_Items[1];

public:
	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
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



// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseApp_get_DefaultInstance_m46ACEAEC916D0AC3014302498F51607462EE5C63 (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_kEventJoinGroup_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_Firebase_Analytics_kEventJoinGroup_get_m0EC68ACE95637A306B7FF2A4D86585C530E3CA65 (const RuntimeMethod* method);
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC (const RuntimeMethod* method);
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1 (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_kEventLevelUp_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_Firebase_Analytics_kEventLevelUp_get_m9A1ECFA0D760A7BA81A100BB5159638E1E961B74 (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_kEventLogin_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_Firebase_Analytics_kEventLogin_get_m616669AC54250817C39B3CB4BB55AC7A8C6F81F3 (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_kEventPostScore_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_Firebase_Analytics_kEventPostScore_get_mDF66311C30E48412DDCFE9B7F94AC382670CF498 (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_kParameterCharacter_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_Firebase_Analytics_kParameterCharacter_get_mE98B21FF07F6CDEC26789D9A7CE946E27A8F376B (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_kParameterGroupId_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_Firebase_Analytics_kParameterGroupId_get_mD431E83E040AC33DA6519D6EE97DDFEBE9282509 (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_kParameterLevel_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_Firebase_Analytics_kParameterLevel_get_m009A228CDC3450DCF710EAAB1F96ECE6B1EB0DB4 (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_kParameterScore_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_Firebase_Analytics_kParameterScore_get_m6C93F71CC85B915923D04BE59F87E05B320B763C (const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_kUserPropertySignUpMethod_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_Firebase_Analytics_kUserPropertySignUpMethod_get_mB394F0A1C228360259BF68CAB8DF29A18B50D97E (const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m48B00B27D485CC556C10A5119BC11E1A1E0FE363 (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalytics::SetMinimumSessionDurationInternal(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalytics_SetMinimumSessionDurationInternal_m8411DE1028C8A19D81838CC3288DCCA9AA6641F1 (int64_t ___milliseconds0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalytics::SetSessionTimeoutDurationInternal(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalytics_SetSessionTimeoutDurationInternal_m7E946A01E194FF9C0C84ABF3CFE932F929821F1A (int64_t ___milliseconds0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_SetAnalyticsCollectionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_Firebase_Analytics_SetAnalyticsCollectionEnabled_m07B74F69B6299BB0718258898F81F13522C1AD94 (bool ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_LogEvent__SWIG_0(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_Firebase_Analytics_LogEvent__SWIG_0_mA3B062BFB605F5AC7DA06797E9FAF1C8B0D0014C (String_t* ___jarg10, String_t* ___jarg21, String_t* ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_LogEvent__SWIG_1(System.String,System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_Firebase_Analytics_LogEvent__SWIG_1_m7E2D7189DEC00E2879E609DEF2C2EE16A3BC94B0 (String_t* ___jarg10, String_t* ___jarg21, double ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_LogEvent__SWIG_3(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_Firebase_Analytics_LogEvent__SWIG_3_mE74EEABE7791DA7D84A322074B8AF147E0B176C5 (String_t* ___jarg10, String_t* ___jarg21, int32_t ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_LogEvent__SWIG_4(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_Firebase_Analytics_LogEvent__SWIG_4_m9695E0919B9431135433FC3C4B1633FFB88FDFFC (String_t* ___jarg10, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.Analytics.Parameter::getCPtr(Firebase.Analytics.Parameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  Parameter_getCPtr_m40A1C59BD22BE8159E80BF2F4E50B6EB6EF65C98 (Parameter_tED166B3BB2203CCDC4DF5F9F2714037F7ADB591E * ___obj0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.HandleRef::op_Explicit(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR intptr_t HandleRef_op_Explicit_m8F2C972BA00081BDFE05EBE710DFF38D9856F4BD_inline (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___value0, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m7F0C4B884FFB05BD231154CBDAEBCF1917019C21 (void* ___value0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_LogEvent__SWIG_5(System.String,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_Firebase_Analytics_LogEvent__SWIG_5_mDCF21333FDD7D5AE8F3B8410FF6FF2B67179434E (String_t* ___jarg10, intptr_t ___arg1, int32_t ___jarg22, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_SetUserProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_Firebase_Analytics_SetUserProperty_mE2AFBC65F4A27BD740C63009DFCEEAC009293DB9 (String_t* ___jarg10, String_t* ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_SetUserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_Firebase_Analytics_SetUserId_mAD6BF26AE51027FF5A004657F9C6F816049EFBFF (String_t* ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_SetMinimumSessionDurationInternal(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_Firebase_Analytics_SetMinimumSessionDurationInternal_m988F963BCCD24240A39FFC52E9E5EB928281F46E (int64_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_SetSessionTimeoutDurationInternal(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_Firebase_Analytics_SetSessionTimeoutDurationInternal_m23803D20AF14268E38437A235F8142C9A72ECC05 (int64_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_ResetAnalyticsData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_Firebase_Analytics_ResetAnalyticsData_m5C869BE41CAC5B084F7D651E3C4E1EF1E44160C0 (const RuntimeMethod* method);
// System.IntPtr Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_GetAnalyticsInstanceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseAnalyticsPINVOKE_Firebase_Analytics_GetAnalyticsInstanceId_m29326B5940FC129C1BC656E61F1F9AE95F095D93 (const RuntimeMethod* method);
// System.Void Firebase.FutureString::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString__ctor_m061489D0A1588D9DB38616FAB55A0BAD34485991 (FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.String> Firebase.FutureString::GetTask(Firebase.FutureString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * FutureString_GetTask_mE15192AC5EC101E6836F1F806E3CD9B91950B647 (FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * ___fu0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m341335B3603783BEFD8EEE91C7D0A0432DACDBD0 (SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63 * __this, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m6D9D5B8FEAAE0F3DF7ED9CFC495BCC1E59C765F0 (SWIGStringHelper_t8C7BAE7830BEB23DBDBA5ED152D1C91C31E09AA4 * __this, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m3DFDA6CC38F2E6F2C2EB78BCF25D07006DF163AA (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m8FD03FA73FC3880BF7793BED56883DBB8B862503 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m7994B3AEA8CF54DE19D8B4903B5C18EED3A2B84E (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m501E320459CE747ED557D793C7CF2E402503C1F3 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_mF79B082F3494D4FEC8620F65D1200C2EE223A2F5 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_mD1129C1ED7B78A2F1F831F175D2F7C40E4B00747 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mB7DB43B07E224A98078E300843FB0A67ACCB5375 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_mDE1A001EEAF8CE7513FADD0EF8F443825E6A3E04 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m52E8C8517F5498443F1F622C202FDECDCD681334 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_mA580DD5141BD18F93B0DA7F6CA0C0B5223E9C55E (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m6BC1580F9B1E894F5549E7CCE9755F9FECDECF7F (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_mCB23E369505D9F5FEA485E070C110C8565112826 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m9E9CD543C7CAF7388C202B32437529C3D52007E3 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m6BDF9FCFEA50A4BBA4C1914E91108429E9F3EAA4 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m399B9D07A0426B1521EBB46138B4DA1D12B0C771 (ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mEAB9BA77077549431C64C31E862EC329C3EE6A2A (ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_FirebaseAnalytics(Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseAnalytics_m408B2A9B7159166F597433F5D92AF6A9697B19EF (ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___applicationDelegate0, ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___arithmeticDelegate1, ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___divideByZeroDelegate2, ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___indexOutOfRangeDelegate3, ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___invalidCastDelegate4, ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___invalidOperationDelegate5, ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___ioDelegate6, ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___nullReferenceDelegate7, ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___outOfMemoryDelegate8, ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___overflowDelegate9, ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___systemExceptionDelegate10, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_FirebaseAnalytics(Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseAnalytics_mBC73F41B6B9B90EEFA6680D9510FF7945C89D3C0 (ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * ___argumentDelegate0, ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * ___argumentNullDelegate1, ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Exception Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m01F26782EB4EDDA84CD4BAA4B4EC3B744C12DCD9 (const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_mE0EF019C76BCFC25F88F9C02501F216E2AF90726 (Exception_t * ___e0, const RuntimeMethod* method);
// System.Void System.ArithmeticException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m1412E36F7AF7D25CF6A00670AE2296E88DA85F5F (ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.DivideByZeroException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_m12EDCCC81402AA666F9C3CF1CB8A8A7AA8D61169 (DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m6CE231E888365F20BD05664560F7AF3830E9D21A (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m54AEC55A8A1F1EAD6485B691BB597C7EB284B2A5 (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC40AA9579B996C6FBAE023590139C16304D81DC6 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_m37262C706BEB979358ABEFEA9F9F253E8773D2B7 (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mCD292E9CAC2B24447B04F5404C318B1B2AF4023D (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OutOfMemoryException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_m155C798916559886F6DD9C93B414E5764C55FD52 (OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m15CD001EEB2E79D7497E101546B04D9A5520357E (OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_mA18D2EA5642C066F35CB8C965398F9A542C33B0A (SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8E5D9390593273B9774DBD2E967805E8EDE668E3 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, String_t* ___paramName1, Exception_t * ___innerException2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m9EA692D49986AEBAC433CE3381331146109AE20F (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m30D5020E1A1B88FD77565E0676EF8CC7ECCA07DE (String_t* ___cString0, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m04916EA1244770C563BDE9C322CB4F120BED718E (SWIGStringDelegate_tE9EE1F5383BC9F044CB3D284F60BDECE5B75A5DF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_FirebaseAnalytics(Firebase.Analytics.FirebaseAnalyticsPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_FirebaseAnalytics_m8964850A69E74C747E9D1E0211017E8A4A31D4CF (SWIGStringDelegate_tE9EE1F5383BC9F044CB3D284F60BDECE5B75A5DF * ___stringDelegate0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, RuntimeObject * ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method);
// System.IntPtr Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_new_Parameter__SWIG_0(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseAnalyticsPINVOKE_Firebase_Analytics_new_Parameter__SWIG_0_m813B4A4D457787D48A7B5DFC8C5192C99AB554E5 (String_t* ___jarg10, String_t* ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Analytics.Parameter::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter__ctor_m392E12622ECE7AF0DFB8F351B5A52CF812EAF7F4 (Parameter_tED166B3BB2203CCDC4DF5F9F2714037F7ADB591E * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.IntPtr Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_new_Parameter__SWIG_1(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseAnalyticsPINVOKE_Firebase_Analytics_new_Parameter__SWIG_1_m35F4166076F98236A85B969E905F2EB68B6C94FF (String_t* ___jarg10, int64_t ___jarg21, const RuntimeMethod* method);
// System.IntPtr Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_new_Parameter__SWIG_2(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseAnalyticsPINVOKE_Firebase_Analytics_new_Parameter__SWIG_2_m5DCBD82F4B2242D9E3F0A2E4F996753932B60C49 (String_t* ___jarg10, double ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Analytics.Parameter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter_Dispose_m80F77D7A0A5D294A93BEB03D993B79C86021E06C (Parameter_tED166B3BB2203CCDC4DF5F9F2714037F7ADB591E * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_delete_Parameter(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_Firebase_Analytics_delete_Parameter_m036A853A85FC8B07AEBA79BB76529F4CA16AB4EB (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425 (RuntimeObject * ___obj0, const RuntimeMethod* method);
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
// System.Void Firebase.Analytics.FirebaseAnalytics::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalytics__cctor_m389E231BBDEC0DB21A2AD186DCF0DA29C5539EF7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAnalytics__cctor_m389E231BBDEC0DB21A2AD186DCF0DA29C5539EF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = FirebaseApp_get_DefaultInstance_m46ACEAEC916D0AC3014302498F51607462EE5C63(/*hidden argument*/NULL);
		((FirebaseAnalytics_t63A5B26395B376BF8A1460F2B89E4AE34B8CA3F7_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAnalytics_t63A5B26395B376BF8A1460F2B89E4AE34B8CA3F7_il2cpp_TypeInfo_var))->set_app_0(L_0);
		return;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_EventJoinGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_EventJoinGroup_mAB018BBB6AC8AE2B6217B41798042E81260B7C4D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAnalytics_get_EventJoinGroup_mAB018BBB6AC8AE2B6217B41798042E81260B7C4D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var);
		String_t* L_0 = FirebaseAnalyticsPINVOKE_Firebase_Analytics_kEventJoinGroup_get_m0EC68ACE95637A306B7FF2A4D86585C530E3CA65(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, FirebaseAnalytics_get_EventJoinGroup_mAB018BBB6AC8AE2B6217B41798042E81260B7C4D_RuntimeMethod_var);
	}

IL_0016:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_EventLevelUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_EventLevelUp_m866676E6D2A5DB3EABC37688A4FF16606CD7D146 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAnalytics_get_EventLevelUp_m866676E6D2A5DB3EABC37688A4FF16606CD7D146_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var);
		String_t* L_0 = FirebaseAnalyticsPINVOKE_Firebase_Analytics_kEventLevelUp_get_m9A1ECFA0D760A7BA81A100BB5159638E1E961B74(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, FirebaseAnalytics_get_EventLevelUp_m866676E6D2A5DB3EABC37688A4FF16606CD7D146_RuntimeMethod_var);
	}

IL_0016:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_EventLogin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_EventLogin_m1FE50C90B919C950420332FE8966927A564BFA32 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAnalytics_get_EventLogin_m1FE50C90B919C950420332FE8966927A564BFA32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var);
		String_t* L_0 = FirebaseAnalyticsPINVOKE_Firebase_Analytics_kEventLogin_get_m616669AC54250817C39B3CB4BB55AC7A8C6F81F3(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, FirebaseAnalytics_get_EventLogin_m1FE50C90B919C950420332FE8966927A564BFA32_RuntimeMethod_var);
	}

IL_0016:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_EventPostScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_EventPostScore_m7CFF761F1C91F240F96E27A0150421C37551FE92 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAnalytics_get_EventPostScore_m7CFF761F1C91F240F96E27A0150421C37551FE92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var);
		String_t* L_0 = FirebaseAnalyticsPINVOKE_Firebase_Analytics_kEventPostScore_get_mDF66311C30E48412DDCFE9B7F94AC382670CF498(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, FirebaseAnalytics_get_EventPostScore_m7CFF761F1C91F240F96E27A0150421C37551FE92_RuntimeMethod_var);
	}

IL_0016:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_ParameterCharacter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_ParameterCharacter_m377A215E4C09B945CBAB8889190B660C987CDB33 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAnalytics_get_ParameterCharacter_m377A215E4C09B945CBAB8889190B660C987CDB33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var);
		String_t* L_0 = FirebaseAnalyticsPINVOKE_Firebase_Analytics_kParameterCharacter_get_mE98B21FF07F6CDEC26789D9A7CE946E27A8F376B(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, FirebaseAnalytics_get_ParameterCharacter_m377A215E4C09B945CBAB8889190B660C987CDB33_RuntimeMethod_var);
	}

IL_0016:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_ParameterGroupId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_ParameterGroupId_m63B5864F1C8E11D8ED37A2EC5B082A93BF828CA7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAnalytics_get_ParameterGroupId_m63B5864F1C8E11D8ED37A2EC5B082A93BF828CA7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var);
		String_t* L_0 = FirebaseAnalyticsPINVOKE_Firebase_Analytics_kParameterGroupId_get_mD431E83E040AC33DA6519D6EE97DDFEBE9282509(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, FirebaseAnalytics_get_ParameterGroupId_m63B5864F1C8E11D8ED37A2EC5B082A93BF828CA7_RuntimeMethod_var);
	}

IL_0016:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_ParameterLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_ParameterLevel_m54FD724A9520E3A739AC47A972F34167E3D66B1F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAnalytics_get_ParameterLevel_m54FD724A9520E3A739AC47A972F34167E3D66B1F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var);
		String_t* L_0 = FirebaseAnalyticsPINVOKE_Firebase_Analytics_kParameterLevel_get_m009A228CDC3450DCF710EAAB1F96ECE6B1EB0DB4(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, FirebaseAnalytics_get_ParameterLevel_m54FD724A9520E3A739AC47A972F34167E3D66B1F_RuntimeMethod_var);
	}

IL_0016:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_ParameterScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_ParameterScore_m2BADC3CB5322F259A2BD3D2E86112A28B7C0FA41 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAnalytics_get_ParameterScore_m2BADC3CB5322F259A2BD3D2E86112A28B7C0FA41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var);
		String_t* L_0 = FirebaseAnalyticsPINVOKE_Firebase_Analytics_kParameterScore_get_m6C93F71CC85B915923D04BE59F87E05B320B763C(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, FirebaseAnalytics_get_ParameterScore_m2BADC3CB5322F259A2BD3D2E86112A28B7C0FA41_RuntimeMethod_var);
	}

IL_0016:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String Firebase.Analytics.FirebaseAnalytics::get_UserPropertySignUpMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalytics_get_UserPropertySignUpMethod_mD5423852DCF18F25CFCD1A5642E49910CEE24682 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAnalytics_get_UserPropertySignUpMethod_mD5423852DCF18F25CFCD1A5642E49910CEE24682_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var);
		String_t* L_0 = FirebaseAnalyticsPINVOKE_Firebase_Analytics_kUserPropertySignUpMethod_get_mB394F0A1C228360259BF68CAB8DF29A18B50D97E(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, FirebaseAnalytics_get_UserPropertySignUpMethod_mD5423852DCF18F25CFCD1A5642E49910CEE24682_RuntimeMethod_var);
	}

IL_0016:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalytics::SetMinimumSessionDuration(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalytics_SetMinimumSessionDuration_m6F4D52617897305EF663BEDE688B6F4843B6A504 (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___timeSpan0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAnalytics_SetMinimumSessionDuration_m6F4D52617897305EF663BEDE688B6F4843B6A504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = TimeSpan_get_TotalMilliseconds_m48B00B27D485CC556C10A5119BC11E1A1E0FE363((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&___timeSpan0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalytics_t63A5B26395B376BF8A1460F2B89E4AE34B8CA3F7_il2cpp_TypeInfo_var);
		FirebaseAnalytics_SetMinimumSessionDurationInternal_m8411DE1028C8A19D81838CC3288DCCA9AA6641F1((((int64_t)((int64_t)L_0))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalytics::SetSessionTimeoutDuration(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalytics_SetSessionTimeoutDuration_mB15DB943547DAF4B248F15CF42D6A43A38315105 (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___timeSpan0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAnalytics_SetSessionTimeoutDuration_mB15DB943547DAF4B248F15CF42D6A43A38315105_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = TimeSpan_get_TotalMilliseconds_m48B00B27D485CC556C10A5119BC11E1A1E0FE363((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&___timeSpan0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalytics_t63A5B26395B376BF8A1460F2B89E4AE34B8CA3F7_il2cpp_TypeInfo_var);
		FirebaseAnalytics_SetSessionTimeoutDurationInternal_m7E946A01E194FF9C0C84ABF3CFE932F929821F1A((((int64_t)((int64_t)L_0))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalytics::SetAnalyticsCollectionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalytics_SetAnalyticsCollectionEnabled_m92023E5F24DF4E69011B4B891F14BBF08853568B (bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAnalytics_SetAnalyticsCollectionEnabled_m92023E5F24DF4E69011B4B891F14BBF08853568B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___enabled0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var);
		FirebaseAnalyticsPINVOKE_Firebase_Analytics_SetAnalyticsCollectionEnabled_m07B74F69B6299BB0718258898F81F13522C1AD94(L_0, /*hidden argument*/NULL);
		bool L_1 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, FirebaseAnalytics_SetAnalyticsCollectionEnabled_m92023E5F24DF4E69011B4B891F14BBF08853568B_RuntimeMethod_var);
	}

IL_0016:
	{
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalytics::LogEvent(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalytics_LogEvent_mD6FD74FADCCFF73E90711DF8948968A0BF4D24D3 (String_t* ___name0, String_t* ___parameterName1, String_t* ___parameterValue2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAnalytics_LogEvent_mD6FD74FADCCFF73E90711DF8948968A0BF4D24D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		String_t* L_1 = ___parameterName1;
		String_t* L_2 = ___parameterValue2;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var);
		FirebaseAnalyticsPINVOKE_Firebase_Analytics_LogEvent__SWIG_0_mA3B062BFB605F5AC7DA06797E9FAF1C8B0D0014C(L_0, L_1, L_2, /*hidden argument*/NULL);
		bool L_3 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, FirebaseAnalytics_LogEvent_mD6FD74FADCCFF73E90711DF8948968A0BF4D24D3_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalytics::LogEvent(System.String,System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalytics_LogEvent_m0673E57AC8BD06DD2DD64C7771CDC0EE2DC2B2FB (String_t* ___name0, String_t* ___parameterName1, double ___parameterValue2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAnalytics_LogEvent_m0673E57AC8BD06DD2DD64C7771CDC0EE2DC2B2FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		String_t* L_1 = ___parameterName1;
		double L_2 = ___parameterValue2;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var);
		FirebaseAnalyticsPINVOKE_Firebase_Analytics_LogEvent__SWIG_1_m7E2D7189DEC00E2879E609DEF2C2EE16A3BC94B0(L_0, L_1, L_2, /*hidden argument*/NULL);
		bool L_3 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, FirebaseAnalytics_LogEvent_m0673E57AC8BD06DD2DD64C7771CDC0EE2DC2B2FB_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalytics::LogEvent(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalytics_LogEvent_m72DC3A97544C5D9906ECEF4755E57A1A4456D2BD (String_t* ___name0, String_t* ___parameterName1, int32_t ___parameterValue2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAnalytics_LogEvent_m72DC3A97544C5D9906ECEF4755E57A1A4456D2BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		String_t* L_1 = ___parameterName1;
		int32_t L_2 = ___parameterValue2;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var);
		FirebaseAnalyticsPINVOKE_Firebase_Analytics_LogEvent__SWIG_3_mE74EEABE7791DA7D84A322074B8AF147E0B176C5(L_0, L_1, L_2, /*hidden argument*/NULL);
		bool L_3 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, FirebaseAnalytics_LogEvent_m72DC3A97544C5D9906ECEF4755E57A1A4456D2BD_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalytics::LogEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalytics_LogEvent_m7899E0CD5FFBDDBE5B575C4BA44D4184710E818C (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAnalytics_LogEvent_m7899E0CD5FFBDDBE5B575C4BA44D4184710E818C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var);
		FirebaseAnalyticsPINVOKE_Firebase_Analytics_LogEvent__SWIG_4_m9695E0919B9431135433FC3C4B1633FFB88FDFFC(L_0, /*hidden argument*/NULL);
		bool L_1 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, FirebaseAnalytics_LogEvent_m7899E0CD5FFBDDBE5B575C4BA44D4184710E818C_RuntimeMethod_var);
	}

IL_0016:
	{
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalytics::LogEvent(System.String,Firebase.Analytics.Parameter[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalytics_LogEvent_m3AC2DF66FB21089B3466A0AE276C3310D6299674 (String_t* ___name0, ParameterU5BU5D_t054FF7CCF1E8FB451523FEF2673FE821C17ADBAB* ___parameters1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAnalytics_LogEvent_m3AC2DF66FB21089B3466A0AE276C3310D6299674_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* V_0 = NULL;
	int32_t V_1 = 0;
	intptr_t* V_2 = NULL;
	uintptr_t G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	{
		ParameterU5BU5D_t054FF7CCF1E8FB451523FEF2673FE821C17ADBAB* L_0 = ___parameters1;
		NullCheck(L_0);
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_1 = (IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD*)(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD*)SZArrayNew(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0029;
	}

IL_0010:
	{
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		ParameterU5BU5D_t054FF7CCF1E8FB451523FEF2673FE821C17ADBAB* L_4 = ___parameters1;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Parameter_tED166B3BB2203CCDC4DF5F9F2714037F7ADB591E * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_8 = Parameter_getCPtr_m40A1C59BD22BE8159E80BF2F4E50B6EB6EF65C98(L_7, /*hidden argument*/NULL);
		intptr_t L_9 = HandleRef_op_Explicit_m8F2C972BA00081BDFE05EBE710DFF38D9856F4BD_inline(L_8, /*hidden argument*/NULL);
		*((intptr_t*)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))) = (intptr_t)L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_11 = V_1;
		ParameterU5BU5D_t054FF7CCF1E8FB451523FEF2673FE821C17ADBAB* L_12 = ___parameters1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_13 = V_0;
		if (!L_13)
		{
			goto IL_0040;
		}
	}
	{
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0047;
		}
	}

IL_0040:
	{
		G_B7_0 = (((uintptr_t)0));
		goto IL_004e;
	}

IL_0047:
	{
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_15 = V_0;
		NullCheck(L_15);
		G_B7_0 = ((uintptr_t)(((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
	}

IL_004e:
	{
		V_2 = (intptr_t*)G_B7_0;
		String_t* L_16 = ___name0;
		intptr_t* L_17 = V_2;
		intptr_t L_18 = IntPtr_op_Explicit_m7F0C4B884FFB05BD231154CBDAEBCF1917019C21((void*)(void*)L_17, /*hidden argument*/NULL);
		ParameterU5BU5D_t054FF7CCF1E8FB451523FEF2673FE821C17ADBAB* L_19 = ___parameters1;
		NullCheck(L_19);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var);
		FirebaseAnalyticsPINVOKE_Firebase_Analytics_LogEvent__SWIG_5_mDCF21333FDD7D5AE8F3B8410FF6FF2B67179434E(L_16, (intptr_t)L_18, (((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))), /*hidden argument*/NULL);
		bool L_20 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_006e;
		}
	}
	{
		Exception_t * L_21 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, NULL, FirebaseAnalytics_LogEvent_m3AC2DF66FB21089B3466A0AE276C3310D6299674_RuntimeMethod_var);
	}

IL_006e:
	{
		V_2 = (intptr_t*)(((uintptr_t)0));
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalytics::SetUserProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalytics_SetUserProperty_m080447BA55B65CFB612FB0F239C95134F9DD3057 (String_t* ___name0, String_t* ___property1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAnalytics_SetUserProperty_m080447BA55B65CFB612FB0F239C95134F9DD3057_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		String_t* L_1 = ___property1;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var);
		FirebaseAnalyticsPINVOKE_Firebase_Analytics_SetUserProperty_mE2AFBC65F4A27BD740C63009DFCEEAC009293DB9(L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, FirebaseAnalytics_SetUserProperty_m080447BA55B65CFB612FB0F239C95134F9DD3057_RuntimeMethod_var);
	}

IL_0017:
	{
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalytics::SetUserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalytics_SetUserId_mF708074D5EA6AACDFE44AD662DD36126FD71AE13 (String_t* ___userId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAnalytics_SetUserId_mF708074D5EA6AACDFE44AD662DD36126FD71AE13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___userId0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var);
		FirebaseAnalyticsPINVOKE_Firebase_Analytics_SetUserId_mAD6BF26AE51027FF5A004657F9C6F816049EFBFF(L_0, /*hidden argument*/NULL);
		bool L_1 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, FirebaseAnalytics_SetUserId_mF708074D5EA6AACDFE44AD662DD36126FD71AE13_RuntimeMethod_var);
	}

IL_0016:
	{
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalytics::SetMinimumSessionDurationInternal(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalytics_SetMinimumSessionDurationInternal_m8411DE1028C8A19D81838CC3288DCCA9AA6641F1 (int64_t ___milliseconds0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAnalytics_SetMinimumSessionDurationInternal_m8411DE1028C8A19D81838CC3288DCCA9AA6641F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___milliseconds0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var);
		FirebaseAnalyticsPINVOKE_Firebase_Analytics_SetMinimumSessionDurationInternal_m988F963BCCD24240A39FFC52E9E5EB928281F46E(L_0, /*hidden argument*/NULL);
		bool L_1 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, FirebaseAnalytics_SetMinimumSessionDurationInternal_m8411DE1028C8A19D81838CC3288DCCA9AA6641F1_RuntimeMethod_var);
	}

IL_0016:
	{
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalytics::SetSessionTimeoutDurationInternal(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalytics_SetSessionTimeoutDurationInternal_m7E946A01E194FF9C0C84ABF3CFE932F929821F1A (int64_t ___milliseconds0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAnalytics_SetSessionTimeoutDurationInternal_m7E946A01E194FF9C0C84ABF3CFE932F929821F1A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___milliseconds0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var);
		FirebaseAnalyticsPINVOKE_Firebase_Analytics_SetSessionTimeoutDurationInternal_m23803D20AF14268E38437A235F8142C9A72ECC05(L_0, /*hidden argument*/NULL);
		bool L_1 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, FirebaseAnalytics_SetSessionTimeoutDurationInternal_m7E946A01E194FF9C0C84ABF3CFE932F929821F1A_RuntimeMethod_var);
	}

IL_0016:
	{
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalytics::ResetAnalyticsData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalytics_ResetAnalyticsData_m4D30FCFB911528C57F298304D7EC4BE708DA0FD1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAnalytics_ResetAnalyticsData_m4D30FCFB911528C57F298304D7EC4BE708DA0FD1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var);
		FirebaseAnalyticsPINVOKE_Firebase_Analytics_ResetAnalyticsData_m5C869BE41CAC5B084F7D651E3C4E1EF1E44160C0(/*hidden argument*/NULL);
		bool L_0 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Exception_t * L_1 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, FirebaseAnalytics_ResetAnalyticsData_m4D30FCFB911528C57F298304D7EC4BE708DA0FD1_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> Firebase.Analytics.FirebaseAnalytics::GetAnalyticsInstanceIdAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * FirebaseAnalytics_GetAnalyticsInstanceIdAsync_mBE7135CAD82D933015948A2A79029A776D89667E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAnalytics_GetAnalyticsInstanceIdAsync_mBE7135CAD82D933015948A2A79029A776D89667E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var);
		intptr_t L_0 = FirebaseAnalyticsPINVOKE_Firebase_Analytics_GetAnalyticsInstanceId_m29326B5940FC129C1BC656E61F1F9AE95F095D93(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		bool L_1 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t * L_2 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, FirebaseAnalytics_GetAnalyticsInstanceIdAsync_mBE7135CAD82D933015948A2A79029A776D89667E_RuntimeMethod_var);
	}

IL_0016:
	{
		intptr_t L_3 = V_0;
		FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C * L_4 = (FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C *)il2cpp_codegen_object_new(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var);
		FutureString__ctor_m061489D0A1588D9DB38616FAB55A0BAD34485991(L_4, (intptr_t)L_3, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FutureString_t1011546D2B232ED3B3B948424DFDC3F7A813F27C_il2cpp_TypeInfo_var);
		Task_1_t4F15FD7B542891CB5F8DB48BF64305D5D1C4701C * L_5 = FutureString_GetTask_mE15192AC5EC101E6836F1F806E3CD9B91950B647(L_4, /*hidden argument*/NULL);
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
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE__cctor_m8FE26E48776FDFD033552C7EB98056BB7F5BFADC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAnalyticsPINVOKE__cctor_m8FE26E48776FDFD033552C7EB98056BB7F5BFADC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63 * L_0 = (SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63 *)il2cpp_codegen_object_new(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var);
		SWIGExceptionHelper__ctor_m341335B3603783BEFD8EEE91C7D0A0432DACDBD0(L_0, /*hidden argument*/NULL);
		((FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var))->set_swigExceptionHelper_0(L_0);
		SWIGStringHelper_t8C7BAE7830BEB23DBDBA5ED152D1C91C31E09AA4 * L_1 = (SWIGStringHelper_t8C7BAE7830BEB23DBDBA5ED152D1C91C31E09AA4 *)il2cpp_codegen_object_new(SWIGStringHelper_t8C7BAE7830BEB23DBDBA5ED152D1C91C31E09AA4_il2cpp_TypeInfo_var);
		SWIGStringHelper__ctor_m6D9D5B8FEAAE0F3DF7ED9CFC495BCC1E59C765F0(L_1, /*hidden argument*/NULL);
		((FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var))->set_swigStringHelper_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_kEventJoinGroup_get();
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_kEventJoinGroup_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_Firebase_Analytics_kEventJoinGroup_get_m0EC68ACE95637A306B7FF2A4D86585C530E3CA65 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_kEventJoinGroup_get)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_kEventLevelUp_get();
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_kEventLevelUp_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_Firebase_Analytics_kEventLevelUp_get_m9A1ECFA0D760A7BA81A100BB5159638E1E961B74 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_kEventLevelUp_get)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_kEventLogin_get();
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_kEventLogin_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_Firebase_Analytics_kEventLogin_get_m616669AC54250817C39B3CB4BB55AC7A8C6F81F3 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_kEventLogin_get)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_kEventPostScore_get();
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_kEventPostScore_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_Firebase_Analytics_kEventPostScore_get_mDF66311C30E48412DDCFE9B7F94AC382670CF498 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_kEventPostScore_get)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_kParameterCharacter_get();
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_kParameterCharacter_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_Firebase_Analytics_kParameterCharacter_get_mE98B21FF07F6CDEC26789D9A7CE946E27A8F376B (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_kParameterCharacter_get)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_kParameterGroupId_get();
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_kParameterGroupId_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_Firebase_Analytics_kParameterGroupId_get_mD431E83E040AC33DA6519D6EE97DDFEBE9282509 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_kParameterGroupId_get)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_kParameterLevel_get();
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_kParameterLevel_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_Firebase_Analytics_kParameterLevel_get_m009A228CDC3450DCF710EAAB1F96ECE6B1EB0DB4 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_kParameterLevel_get)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_kParameterScore_get();
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_kParameterScore_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_Firebase_Analytics_kParameterScore_get_m6C93F71CC85B915923D04BE59F87E05B320B763C (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_kParameterScore_get)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Analytics_kUserPropertySignUpMethod_get();
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_kUserPropertySignUpMethod_get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAnalyticsPINVOKE_Firebase_Analytics_kUserPropertySignUpMethod_get_mB394F0A1C228360259BF68CAB8DF29A18B50D97E (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_kUserPropertySignUpMethod_get)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Analytics_new_Parameter__SWIG_0(char*, char*);
// System.IntPtr Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_new_Parameter__SWIG_0(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseAnalyticsPINVOKE_Firebase_Analytics_new_Parameter__SWIG_0_m813B4A4D457787D48A7B5DFC8C5192C99AB554E5 (String_t* ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_new_Parameter__SWIG_0)(____jarg10_marshaled, ____jarg21_marshaled);

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Analytics_new_Parameter__SWIG_1(char*, int64_t);
// System.IntPtr Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_new_Parameter__SWIG_1(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseAnalyticsPINVOKE_Firebase_Analytics_new_Parameter__SWIG_1_m35F4166076F98236A85B969E905F2EB68B6C94FF (String_t* ___jarg10, int64_t ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, int64_t);

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_new_Parameter__SWIG_1)(____jarg10_marshaled, ___jarg21);

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Analytics_new_Parameter__SWIG_2(char*, double);
// System.IntPtr Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_new_Parameter__SWIG_2(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseAnalyticsPINVOKE_Firebase_Analytics_new_Parameter__SWIG_2_m5DCBD82F4B2242D9E3F0A2E4F996753932B60C49 (String_t* ___jarg10, double ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, double);

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_new_Parameter__SWIG_2)(____jarg10_marshaled, ___jarg21);

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Analytics_delete_Parameter(void*);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_delete_Parameter(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_Firebase_Analytics_delete_Parameter_m036A853A85FC8B07AEBA79BB76529F4CA16AB4EB (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Analytics_delete_Parameter)(____jarg10_marshaled);

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Analytics_SetAnalyticsCollectionEnabled(int32_t);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_SetAnalyticsCollectionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_Firebase_Analytics_SetAnalyticsCollectionEnabled_m07B74F69B6299BB0718258898F81F13522C1AD94 (bool ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Analytics_SetAnalyticsCollectionEnabled)(static_cast<int32_t>(___jarg10));

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Analytics_LogEvent__SWIG_0(char*, char*, char*);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_LogEvent__SWIG_0(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_Firebase_Analytics_LogEvent__SWIG_0_mA3B062BFB605F5AC7DA06797E9FAF1C8B0D0014C (String_t* ___jarg10, String_t* ___jarg21, String_t* ___jarg32, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Marshaling of parameter '___jarg32' to native representation
	char* ____jarg32_marshaled = NULL;
	____jarg32_marshaled = il2cpp_codegen_marshal_string(___jarg32);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Analytics_LogEvent__SWIG_0)(____jarg10_marshaled, ____jarg21_marshaled, ____jarg32_marshaled);

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	// Marshaling cleanup of parameter '___jarg32' native representation
	il2cpp_codegen_marshal_free(____jarg32_marshaled);
	____jarg32_marshaled = NULL;

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Analytics_LogEvent__SWIG_1(char*, char*, double);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_LogEvent__SWIG_1(System.String,System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_Firebase_Analytics_LogEvent__SWIG_1_m7E2D7189DEC00E2879E609DEF2C2EE16A3BC94B0 (String_t* ___jarg10, String_t* ___jarg21, double ___jarg32, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, double);

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Analytics_LogEvent__SWIG_1)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Analytics_LogEvent__SWIG_3(char*, char*, int32_t);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_LogEvent__SWIG_3(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_Firebase_Analytics_LogEvent__SWIG_3_mE74EEABE7791DA7D84A322074B8AF147E0B176C5 (String_t* ___jarg10, String_t* ___jarg21, int32_t ___jarg32, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Analytics_LogEvent__SWIG_3)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Analytics_LogEvent__SWIG_4(char*);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_LogEvent__SWIG_4(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_Firebase_Analytics_LogEvent__SWIG_4_m9695E0919B9431135433FC3C4B1633FFB88FDFFC (String_t* ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Analytics_LogEvent__SWIG_4)(____jarg10_marshaled);

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Analytics_LogEvent__SWIG_5(char*, intptr_t, int32_t);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_LogEvent__SWIG_5(System.String,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_Firebase_Analytics_LogEvent__SWIG_5_mDCF21333FDD7D5AE8F3B8410FF6FF2B67179434E (String_t* ___jarg10, intptr_t ___arg1, int32_t ___jarg22, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, intptr_t, int32_t);

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Analytics_LogEvent__SWIG_5)(____jarg10_marshaled, ___arg1, ___jarg22);

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Analytics_SetUserProperty(char*, char*);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_SetUserProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_Firebase_Analytics_SetUserProperty_mE2AFBC65F4A27BD740C63009DFCEEAC009293DB9 (String_t* ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Analytics_SetUserProperty)(____jarg10_marshaled, ____jarg21_marshaled);

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Analytics_SetUserId(char*);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_SetUserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_Firebase_Analytics_SetUserId_mAD6BF26AE51027FF5A004657F9C6F816049EFBFF (String_t* ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___jarg10' to native representation
	char* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_string(___jarg10);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Analytics_SetUserId)(____jarg10_marshaled);

	// Marshaling cleanup of parameter '___jarg10' native representation
	il2cpp_codegen_marshal_free(____jarg10_marshaled);
	____jarg10_marshaled = NULL;

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Analytics_SetMinimumSessionDurationInternal(int64_t);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_SetMinimumSessionDurationInternal(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_Firebase_Analytics_SetMinimumSessionDurationInternal_m988F963BCCD24240A39FFC52E9E5EB928281F46E (int64_t ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int64_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Analytics_SetMinimumSessionDurationInternal)(___jarg10);

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Analytics_SetSessionTimeoutDurationInternal(int64_t);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_SetSessionTimeoutDurationInternal(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_Firebase_Analytics_SetSessionTimeoutDurationInternal_m23803D20AF14268E38437A235F8142C9A72ECC05 (int64_t ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int64_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Analytics_SetSessionTimeoutDurationInternal)(___jarg10);

}
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Analytics_ResetAnalyticsData();
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_ResetAnalyticsData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalyticsPINVOKE_Firebase_Analytics_ResetAnalyticsData_m5C869BE41CAC5B084F7D651E3C4E1EF1E44160C0 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Analytics_ResetAnalyticsData)();

}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Analytics_GetAnalyticsInstanceId();
// System.IntPtr Firebase.Analytics.FirebaseAnalyticsPINVOKE::Firebase_Analytics_GetAnalyticsInstanceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t FirebaseAnalyticsPINVOKE_Firebase_Analytics_GetAnalyticsInstanceId_m29326B5940FC129C1BC656E61F1F9AE95F095D93 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Analytics_GetAnalyticsInstanceId)();

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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m3DFDA6CC38F2E6F2C2EB78BCF25D07006DF163AA(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_m3DFDA6CC38F2E6F2C2EB78BCF25D07006DF163AA(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m8FD03FA73FC3880BF7793BED56883DBB8B862503(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_m8FD03FA73FC3880BF7793BED56883DBB8B862503(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m7994B3AEA8CF54DE19D8B4903B5C18EED3A2B84E(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_m7994B3AEA8CF54DE19D8B4903B5C18EED3A2B84E(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m501E320459CE747ED557D793C7CF2E402503C1F3(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m501E320459CE747ED557D793C7CF2E402503C1F3(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_mF79B082F3494D4FEC8620F65D1200C2EE223A2F5(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_mF79B082F3494D4FEC8620F65D1200C2EE223A2F5(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_mD1129C1ED7B78A2F1F831F175D2F7C40E4B00747(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_mD1129C1ED7B78A2F1F831F175D2F7C40E4B00747(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_mB7DB43B07E224A98078E300843FB0A67ACCB5375(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_mB7DB43B07E224A98078E300843FB0A67ACCB5375(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_mDE1A001EEAF8CE7513FADD0EF8F443825E6A3E04(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_mDE1A001EEAF8CE7513FADD0EF8F443825E6A3E04(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_m52E8C8517F5498443F1F622C202FDECDCD681334(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_m52E8C8517F5498443F1F622C202FDECDCD681334(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_mA580DD5141BD18F93B0DA7F6CA0C0B5223E9C55E(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_mA580DD5141BD18F93B0DA7F6CA0C0B5223E9C55E(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m6BC1580F9B1E894F5549E7CCE9755F9FECDECF7F(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_m6BC1580F9B1E894F5549E7CCE9755F9FECDECF7F(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_mCB23E369505D9F5FEA485E070C110C8565112826(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_mCB23E369505D9F5FEA485E070C110C8565112826(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_m9E9CD543C7CAF7388C202B32437529C3D52007E3(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_m9E9CD543C7CAF7388C202B32437529C3D52007E3(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m6BDF9FCFEA50A4BBA4C1914E91108429E9F3EAA4(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m6BDF9FCFEA50A4BBA4C1914E91108429E9F3EAA4(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_mEB41947A4E89F8722BF97D7BC50220B1CA2B8958 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper__cctor_mEB41947A4E89F8722BF97D7BC50220B1CA2B8958_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * L_0 = (ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 *)il2cpp_codegen_object_new(ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m399B9D07A0426B1521EBB46138B4DA1D12B0C771(L_0, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingApplicationException_m3DFDA6CC38F2E6F2C2EB78BCF25D07006DF163AA_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->set_applicationDelegate_0(L_0);
		ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * L_1 = (ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 *)il2cpp_codegen_object_new(ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m399B9D07A0426B1521EBB46138B4DA1D12B0C771(L_1, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArithmeticException_m8FD03FA73FC3880BF7793BED56883DBB8B862503_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->set_arithmeticDelegate_1(L_1);
		ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * L_2 = (ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 *)il2cpp_codegen_object_new(ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m399B9D07A0426B1521EBB46138B4DA1D12B0C771(L_2, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingDivideByZeroException_m7994B3AEA8CF54DE19D8B4903B5C18EED3A2B84E_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->set_divideByZeroDelegate_2(L_2);
		ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * L_3 = (ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 *)il2cpp_codegen_object_new(ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m399B9D07A0426B1521EBB46138B4DA1D12B0C771(L_3, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m501E320459CE747ED557D793C7CF2E402503C1F3_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->set_indexOutOfRangeDelegate_3(L_3);
		ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * L_4 = (ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 *)il2cpp_codegen_object_new(ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m399B9D07A0426B1521EBB46138B4DA1D12B0C771(L_4, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidCastException_mF79B082F3494D4FEC8620F65D1200C2EE223A2F5_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->set_invalidCastDelegate_4(L_4);
		ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * L_5 = (ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 *)il2cpp_codegen_object_new(ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m399B9D07A0426B1521EBB46138B4DA1D12B0C771(L_5, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidOperationException_mD1129C1ED7B78A2F1F831F175D2F7C40E4B00747_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->set_invalidOperationDelegate_5(L_5);
		ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * L_6 = (ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 *)il2cpp_codegen_object_new(ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m399B9D07A0426B1521EBB46138B4DA1D12B0C771(L_6, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIOException_mB7DB43B07E224A98078E300843FB0A67ACCB5375_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->set_ioDelegate_6(L_6);
		ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * L_7 = (ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 *)il2cpp_codegen_object_new(ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m399B9D07A0426B1521EBB46138B4DA1D12B0C771(L_7, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingNullReferenceException_mDE1A001EEAF8CE7513FADD0EF8F443825E6A3E04_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->set_nullReferenceDelegate_7(L_7);
		ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * L_8 = (ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 *)il2cpp_codegen_object_new(ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m399B9D07A0426B1521EBB46138B4DA1D12B0C771(L_8, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOutOfMemoryException_m52E8C8517F5498443F1F622C202FDECDCD681334_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->set_outOfMemoryDelegate_8(L_8);
		ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * L_9 = (ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 *)il2cpp_codegen_object_new(ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m399B9D07A0426B1521EBB46138B4DA1D12B0C771(L_9, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOverflowException_mA580DD5141BD18F93B0DA7F6CA0C0B5223E9C55E_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->set_overflowDelegate_9(L_9);
		ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * L_10 = (ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 *)il2cpp_codegen_object_new(ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m399B9D07A0426B1521EBB46138B4DA1D12B0C771(L_10, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingSystemException_m6BC1580F9B1E894F5549E7CCE9755F9FECDECF7F_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->set_systemDelegate_10(L_10);
		ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * L_11 = (ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_mEAB9BA77077549431C64C31E862EC329C3EE6A2A(L_11, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentException_mCB23E369505D9F5FEA485E070C110C8565112826_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->set_argumentDelegate_11(L_11);
		ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * L_12 = (ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_mEAB9BA77077549431C64C31E862EC329C3EE6A2A(L_12, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentNullException_m9E9CD543C7CAF7388C202B32437529C3D52007E3_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->set_argumentNullDelegate_12(L_12);
		ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * L_13 = (ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_mEAB9BA77077549431C64C31E862EC329C3EE6A2A(L_13, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m6BDF9FCFEA50A4BBA4C1914E91108429E9F3EAA4_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->set_argumentOutOfRangeDelegate_13(L_13);
		ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * L_14 = ((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->get_applicationDelegate_0();
		ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * L_15 = ((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->get_arithmeticDelegate_1();
		ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * L_16 = ((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->get_divideByZeroDelegate_2();
		ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * L_17 = ((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->get_indexOutOfRangeDelegate_3();
		ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * L_18 = ((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->get_invalidCastDelegate_4();
		ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * L_19 = ((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->get_invalidOperationDelegate_5();
		ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * L_20 = ((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->get_ioDelegate_6();
		ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * L_21 = ((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->get_nullReferenceDelegate_7();
		ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * L_22 = ((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->get_outOfMemoryDelegate_8();
		ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * L_23 = ((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->get_overflowDelegate_9();
		ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * L_24 = ((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->get_systemDelegate_10();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseAnalytics_m408B2A9B7159166F597433F5D92AF6A9697B19EF(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * L_25 = ((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->get_argumentDelegate_11();
		ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * L_26 = ((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->get_argumentNullDelegate_12();
		ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * L_27 = ((SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63_il2cpp_TypeInfo_var))->get_argumentOutOfRangeDelegate_13();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseAnalytics_mBC73F41B6B9B90EEFA6680D9510FF7945C89D3C0(L_25, L_26, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m341335B3603783BEFD8EEE91C7D0A0432DACDBD0 (SWIGExceptionHelper_tC0198F805D3004BE49990A6062D26BE475A66D63 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_FirebaseAnalytics(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_FirebaseAnalytics(Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseAnalytics_m408B2A9B7159166F597433F5D92AF6A9697B19EF (ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___applicationDelegate0, ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___arithmeticDelegate1, ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___divideByZeroDelegate2, ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___indexOutOfRangeDelegate3, ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___invalidCastDelegate4, ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___invalidOperationDelegate5, ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___ioDelegate6, ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___nullReferenceDelegate7, ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___outOfMemoryDelegate8, ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___overflowDelegate9, ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * ___systemExceptionDelegate10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___applicationDelegate0' to native representation
	Il2CppMethodPointer ____applicationDelegate0_marshaled = NULL;
	____applicationDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___applicationDelegate0));

	// Marshaling of parameter '___arithmeticDelegate1' to native representation
	Il2CppMethodPointer ____arithmeticDelegate1_marshaled = NULL;
	____arithmeticDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___arithmeticDelegate1));

	// Marshaling of parameter '___divideByZeroDelegate2' to native representation
	Il2CppMethodPointer ____divideByZeroDelegate2_marshaled = NULL;
	____divideByZeroDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___divideByZeroDelegate2));

	// Marshaling of parameter '___indexOutOfRangeDelegate3' to native representation
	Il2CppMethodPointer ____indexOutOfRangeDelegate3_marshaled = NULL;
	____indexOutOfRangeDelegate3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___indexOutOfRangeDelegate3));

	// Marshaling of parameter '___invalidCastDelegate4' to native representation
	Il2CppMethodPointer ____invalidCastDelegate4_marshaled = NULL;
	____invalidCastDelegate4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidCastDelegate4));

	// Marshaling of parameter '___invalidOperationDelegate5' to native representation
	Il2CppMethodPointer ____invalidOperationDelegate5_marshaled = NULL;
	____invalidOperationDelegate5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidOperationDelegate5));

	// Marshaling of parameter '___ioDelegate6' to native representation
	Il2CppMethodPointer ____ioDelegate6_marshaled = NULL;
	____ioDelegate6_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___ioDelegate6));

	// Marshaling of parameter '___nullReferenceDelegate7' to native representation
	Il2CppMethodPointer ____nullReferenceDelegate7_marshaled = NULL;
	____nullReferenceDelegate7_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___nullReferenceDelegate7));

	// Marshaling of parameter '___outOfMemoryDelegate8' to native representation
	Il2CppMethodPointer ____outOfMemoryDelegate8_marshaled = NULL;
	____outOfMemoryDelegate8_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___outOfMemoryDelegate8));

	// Marshaling of parameter '___overflowDelegate9' to native representation
	Il2CppMethodPointer ____overflowDelegate9_marshaled = NULL;
	____overflowDelegate9_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___overflowDelegate9));

	// Marshaling of parameter '___systemExceptionDelegate10' to native representation
	Il2CppMethodPointer ____systemExceptionDelegate10_marshaled = NULL;
	____systemExceptionDelegate10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___systemExceptionDelegate10));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_FirebaseAnalytics)(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);

}
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacksArgument_FirebaseAnalytics(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_FirebaseAnalytics(Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate,Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseAnalytics_mBC73F41B6B9B90EEFA6680D9510FF7945C89D3C0 (ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * ___argumentDelegate0, ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * ___argumentNullDelegate1, ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___argumentDelegate0' to native representation
	Il2CppMethodPointer ____argumentDelegate0_marshaled = NULL;
	____argumentDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentDelegate0));

	// Marshaling of parameter '___argumentNullDelegate1' to native representation
	Il2CppMethodPointer ____argumentNullDelegate1_marshaled = NULL;
	____argumentNullDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentNullDelegate1));

	// Marshaling of parameter '___argumentOutOfRangeDelegate2' to native representation
	Il2CppMethodPointer ____argumentOutOfRangeDelegate2_marshaled = NULL;
	____argumentOutOfRangeDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentOutOfRangeDelegate2));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacksArgument_FirebaseAnalytics)(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);

}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m3DFDA6CC38F2E6F2C2EB78BCF25D07006DF163AA (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingApplicationException_m3DFDA6CC38F2E6F2C2EB78BCF25D07006DF163AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m01F26782EB4EDDA84CD4BAA4B4EC3B744C12DCD9(/*hidden argument*/NULL);
		ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * L_2 = (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 *)il2cpp_codegen_object_new(ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE0EF019C76BCFC25F88F9C02501F216E2AF90726(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m8FD03FA73FC3880BF7793BED56883DBB8B862503 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArithmeticException_m8FD03FA73FC3880BF7793BED56883DBB8B862503_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m01F26782EB4EDDA84CD4BAA4B4EC3B744C12DCD9(/*hidden argument*/NULL);
		ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269 * L_2 = (ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269 *)il2cpp_codegen_object_new(ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m1412E36F7AF7D25CF6A00670AE2296E88DA85F5F(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE0EF019C76BCFC25F88F9C02501F216E2AF90726(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m7994B3AEA8CF54DE19D8B4903B5C18EED3A2B84E (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingDivideByZeroException_m7994B3AEA8CF54DE19D8B4903B5C18EED3A2B84E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m01F26782EB4EDDA84CD4BAA4B4EC3B744C12DCD9(/*hidden argument*/NULL);
		DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC * L_2 = (DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC *)il2cpp_codegen_object_new(DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC_il2cpp_TypeInfo_var);
		DivideByZeroException__ctor_m12EDCCC81402AA666F9C3CF1CB8A8A7AA8D61169(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE0EF019C76BCFC25F88F9C02501F216E2AF90726(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m501E320459CE747ED557D793C7CF2E402503C1F3 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m501E320459CE747ED557D793C7CF2E402503C1F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m01F26782EB4EDDA84CD4BAA4B4EC3B744C12DCD9(/*hidden argument*/NULL);
		IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * L_2 = (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF *)il2cpp_codegen_object_new(IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m6CE231E888365F20BD05664560F7AF3830E9D21A(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE0EF019C76BCFC25F88F9C02501F216E2AF90726(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_mF79B082F3494D4FEC8620F65D1200C2EE223A2F5 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingInvalidCastException_mF79B082F3494D4FEC8620F65D1200C2EE223A2F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m01F26782EB4EDDA84CD4BAA4B4EC3B744C12DCD9(/*hidden argument*/NULL);
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_2 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m54AEC55A8A1F1EAD6485B691BB597C7EB284B2A5(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE0EF019C76BCFC25F88F9C02501F216E2AF90726(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_mD1129C1ED7B78A2F1F831F175D2F7C40E4B00747 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingInvalidOperationException_mD1129C1ED7B78A2F1F831F175D2F7C40E4B00747_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m01F26782EB4EDDA84CD4BAA4B4EC3B744C12DCD9(/*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_2 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC40AA9579B996C6FBAE023590139C16304D81DC6(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE0EF019C76BCFC25F88F9C02501F216E2AF90726(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mB7DB43B07E224A98078E300843FB0A67ACCB5375 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingIOException_mB7DB43B07E224A98078E300843FB0A67ACCB5375_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m01F26782EB4EDDA84CD4BAA4B4EC3B744C12DCD9(/*hidden argument*/NULL);
		IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * L_2 = (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)il2cpp_codegen_object_new(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var);
		IOException__ctor_m37262C706BEB979358ABEFEA9F9F253E8773D2B7(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE0EF019C76BCFC25F88F9C02501F216E2AF90726(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_mDE1A001EEAF8CE7513FADD0EF8F443825E6A3E04 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingNullReferenceException_mDE1A001EEAF8CE7513FADD0EF8F443825E6A3E04_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m01F26782EB4EDDA84CD4BAA4B4EC3B744C12DCD9(/*hidden argument*/NULL);
		NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_2 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mCD292E9CAC2B24447B04F5404C318B1B2AF4023D(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE0EF019C76BCFC25F88F9C02501F216E2AF90726(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m52E8C8517F5498443F1F622C202FDECDCD681334 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingOutOfMemoryException_m52E8C8517F5498443F1F622C202FDECDCD681334_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m01F26782EB4EDDA84CD4BAA4B4EC3B744C12DCD9(/*hidden argument*/NULL);
		OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7 * L_2 = (OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7 *)il2cpp_codegen_object_new(OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7_il2cpp_TypeInfo_var);
		OutOfMemoryException__ctor_m155C798916559886F6DD9C93B414E5764C55FD52(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE0EF019C76BCFC25F88F9C02501F216E2AF90726(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_mA580DD5141BD18F93B0DA7F6CA0C0B5223E9C55E (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingOverflowException_mA580DD5141BD18F93B0DA7F6CA0C0B5223E9C55E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m01F26782EB4EDDA84CD4BAA4B4EC3B744C12DCD9(/*hidden argument*/NULL);
		OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D * L_2 = (OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D *)il2cpp_codegen_object_new(OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D_il2cpp_TypeInfo_var);
		OverflowException__ctor_m15CD001EEB2E79D7497E101546B04D9A5520357E(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE0EF019C76BCFC25F88F9C02501F216E2AF90726(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m6BC1580F9B1E894F5549E7CCE9755F9FECDECF7F (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingSystemException_m6BC1580F9B1E894F5549E7CCE9755F9FECDECF7F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_m01F26782EB4EDDA84CD4BAA4B4EC3B744C12DCD9(/*hidden argument*/NULL);
		SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782 * L_2 = (SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782 *)il2cpp_codegen_object_new(SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782_il2cpp_TypeInfo_var);
		SystemException__ctor_mA18D2EA5642C066F35CB8C965398F9A542C33B0A(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE0EF019C76BCFC25F88F9C02501F216E2AF90726(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_mCB23E369505D9F5FEA485E070C110C8565112826 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentException_mCB23E369505D9F5FEA485E070C110C8565112826_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___paramName1;
		Exception_t * L_2 = SWIGPendingException_Retrieve_m01F26782EB4EDDA84CD4BAA4B4EC3B744C12DCD9(/*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_3 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8E5D9390593273B9774DBD2E967805E8EDE668E3(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE0EF019C76BCFC25F88F9C02501F216E2AF90726(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m9E9CD543C7CAF7388C202B32437529C3D52007E3 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentNullException_m9E9CD543C7CAF7388C202B32437529C3D52007E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0 = SWIGPendingException_Retrieve_m01F26782EB4EDDA84CD4BAA4B4EC3B744C12DCD9(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_2, _stringLiteralA804D931F27BE6EF35191274DAF148C0B4FCEEF6, L_4, /*hidden argument*/NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_8 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m9EA692D49986AEBAC433CE3381331146109AE20F(L_8, L_6, L_7, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE0EF019C76BCFC25F88F9C02501F216E2AF90726(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m6BDF9FCFEA50A4BBA4C1914E91108429E9F3EAA4 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m6BDF9FCFEA50A4BBA4C1914E91108429E9F3EAA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0 = SWIGPendingException_Retrieve_m01F26782EB4EDDA84CD4BAA4B4EC3B744C12DCD9(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_2, _stringLiteralA804D931F27BE6EF35191274DAF148C0B4FCEEF6, L_4, /*hidden argument*/NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_8 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_8, L_6, L_7, /*hidden argument*/NULL);
		SWIGPendingException_Set_mE0EF019C76BCFC25F88F9C02501F216E2AF90726(L_8, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D (ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Marshaling of parameter '___paramName1' to native representation
	char* ____paramName1_marshaled = NULL;
	____paramName1_marshaled = il2cpp_codegen_marshal_string(___paramName1);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled, ____paramName1_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	// Marshaling cleanup of parameter '___paramName1' native representation
	il2cpp_codegen_marshal_free(____paramName1_marshaled);
	____paramName1_marshaled = NULL;

}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mEAB9BA77077549431C64C31E862EC329C3EE6A2A (ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_m60025FCBB23A87E9C664B0A0F37B979EC88FCD1B (ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0, ___paramName1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0, ___paramName1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0, ___paramName1);
					else
						VirtActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0, ___paramName1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionArgumentDelegate_BeginInvoke_m9F666649CD6E52B64D617B0E2AB7A8B89BE98EC1 (ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * __this, String_t* ___message0, String_t* ___paramName1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___message0;
	__d_args[1] = ___paramName1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_EndInvoke_m5312B8CBE47ADD9DBD46A116C99FF8378326FD36 (ExceptionArgumentDelegate_t8934A8F883601EC2E814C7F31E333BCB9AB81E2D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 (ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m399B9D07A0426B1521EBB46138B4DA1D12B0C771 (ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_m3B7B6F41FD9F133832353EFCEEB1428ACC4D1297 (ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionDelegate_BeginInvoke_mF173721A5E37CB37677713411ABF5D61891D50AC (ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * __this, String_t* ___message0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGExceptionHelper_ExceptionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_EndInvoke_mD44453F126FD68721987897A70ADFEF7189D0C59 (ExceptionDelegate_t21CB2E9F33554810D190F1DC8E3E2F1C8D6D6595 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_mE0EF019C76BCFC25F88F9C02501F216E2AF90726 (Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_Set_mE0EF019C76BCFC25F88F9C02501F216E2AF90726_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Exception_t * L_0 = ((SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_il2cpp_TypeInfo_var))->get_pendingException_0();
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral519E5A114736C3C9A5709C059C9D5F69D5683AB2, L_2, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A, /*hidden argument*/NULL);
		Exception_t * L_4 = ___e0;
		ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * L_5 = (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 *)il2cpp_codegen_object_new(ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F(L_5, L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, SWIGPendingException_Set_mE0EF019C76BCFC25F88F9C02501F216E2AF90726_RuntimeMethod_var);
	}

IL_002a:
	{
		Exception_t * L_6 = ___e0;
		((SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_il2cpp_TypeInfo_var))->set_pendingException_0(L_6);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		RuntimeObject * L_9 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_9, /*hidden argument*/NULL);
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		int32_t L_10 = ((SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		IL2CPP_LEAVE(0x59, FINALLY_0052);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0059:
	{
		return;
	}
}
// System.Exception Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m01F26782EB4EDDA84CD4BAA4B4EC3B744C12DCD9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_Retrieve_m01F26782EB4EDDA84CD4BAA4B4EC3B744C12DCD9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (Exception_t *)NULL;
		int32_t L_0 = ((SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_2 = ((SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = L_2;
		((SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		RuntimeObject * L_5 = V_1;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_5, /*hidden argument*/NULL);
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		int32_t L_6 = ((SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tC5D08EBE2E86D0EF60112634D9E7FEB10D602503_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
		IL2CPP_LEAVE(0x4C, FINALLY_0045);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_1;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004c:
	{
		Exception_t * L_8 = V_0;
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_m30D5020E1A1B88FD77565E0676EF8CC7ECCA07DE(char* ___cString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___cString0' to managed representation
	String_t* ____cString0_unmarshaled = NULL;
	____cString0_unmarshaled = il2cpp_codegen_marshal_string_result(___cString0);

	// Managed method invocation
	String_t* returnValue = SWIGStringHelper_CreateString_m30D5020E1A1B88FD77565E0676EF8CC7ECCA07DE(____cString0_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_m3F760E0CF5B5727345AA7EEB9E321E9F15E0E71A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGStringHelper__cctor_m3F760E0CF5B5727345AA7EEB9E321E9F15E0E71A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_tE9EE1F5383BC9F044CB3D284F60BDECE5B75A5DF * L_0 = (SWIGStringDelegate_tE9EE1F5383BC9F044CB3D284F60BDECE5B75A5DF *)il2cpp_codegen_object_new(SWIGStringDelegate_tE9EE1F5383BC9F044CB3D284F60BDECE5B75A5DF_il2cpp_TypeInfo_var);
		SWIGStringDelegate__ctor_m04916EA1244770C563BDE9C322CB4F120BED718E(L_0, NULL, (intptr_t)((intptr_t)SWIGStringHelper_CreateString_m30D5020E1A1B88FD77565E0676EF8CC7ECCA07DE_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGStringHelper_t8C7BAE7830BEB23DBDBA5ED152D1C91C31E09AA4_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t8C7BAE7830BEB23DBDBA5ED152D1C91C31E09AA4_il2cpp_TypeInfo_var))->set_stringDelegate_0(L_0);
		SWIGStringDelegate_tE9EE1F5383BC9F044CB3D284F60BDECE5B75A5DF * L_1 = ((SWIGStringHelper_t8C7BAE7830BEB23DBDBA5ED152D1C91C31E09AA4_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t8C7BAE7830BEB23DBDBA5ED152D1C91C31E09AA4_il2cpp_TypeInfo_var))->get_stringDelegate_0();
		SWIGStringHelper_SWIGRegisterStringCallback_FirebaseAnalytics_m8964850A69E74C747E9D1E0211017E8A4A31D4CF(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m6D9D5B8FEAAE0F3DF7ED9CFC495BCC1E59C765F0 (SWIGStringHelper_t8C7BAE7830BEB23DBDBA5ED152D1C91C31E09AA4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_FirebaseAnalytics(Il2CppMethodPointer);
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGStringHelper::SWIGRegisterStringCallback_FirebaseAnalytics(Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGStringHelper_SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_FirebaseAnalytics_m8964850A69E74C747E9D1E0211017E8A4A31D4CF (SWIGStringDelegate_tE9EE1F5383BC9F044CB3D284F60BDECE5B75A5DF * ___stringDelegate0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___stringDelegate0' to native representation
	Il2CppMethodPointer ____stringDelegate0_marshaled = NULL;
	____stringDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stringDelegate0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_FirebaseAnalytics)(____stringDelegate0_marshaled);

}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m30D5020E1A1B88FD77565E0676EF8CC7ECCA07DE (String_t* ___cString0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___cString0;
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
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_tE9EE1F5383BC9F044CB3D284F60BDECE5B75A5DF (SWIGStringDelegate_tE9EE1F5383BC9F044CB3D284F60BDECE5B75A5DF * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGStringHelper_SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m04916EA1244770C563BDE9C322CB4F120BED718E (SWIGStringDelegate_tE9EE1F5383BC9F044CB3D284F60BDECE5B75A5DF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGStringHelper_SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m3341A931101D76C4496E68C07EEF7D51B1C1C9F0 (SWIGStringDelegate_tE9EE1F5383BC9F044CB3D284F60BDECE5B75A5DF * __this, String_t* ___message0, const RuntimeMethod* method)
{
	String_t* result = NULL;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
					else
						result = GenericVirtFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						result = VirtFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						result = GenericVirtFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						result = VirtFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGStringHelper_SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIGStringDelegate_BeginInvoke_mB78E101C319C85C35C0E5B236FBAF188B434200B (SWIGStringDelegate_tE9EE1F5383BC9F044CB3D284F60BDECE5B75A5DF * __this, String_t* ___message0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.String Firebase.Analytics.FirebaseAnalyticsPINVOKE_SWIGStringHelper_SWIGStringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_EndInvoke_mDEC02275641FDE252376234001898260D6A50825 (SWIGStringDelegate_tE9EE1F5383BC9F044CB3D284F60BDECE5B75A5DF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (String_t*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Analytics.Parameter::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter__ctor_m392E12622ECE7AF0DFB8F351B5A52CF812EAF7F4 (Parameter_tED166B3BB2203CCDC4DF5F9F2714037F7ADB591E * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.Analytics.Parameter::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter__ctor_m7A98DF030BD1B79FD0B5139AB2307A8A7DA0482D (Parameter_tED166B3BB2203CCDC4DF5F9F2714037F7ADB591E * __this, String_t* ___parameterName0, String_t* ___parameterValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parameter__ctor_m7A98DF030BD1B79FD0B5139AB2307A8A7DA0482D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___parameterName0;
		String_t* L_1 = ___parameterValue1;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var);
		intptr_t L_2 = FirebaseAnalyticsPINVOKE_Firebase_Analytics_new_Parameter__SWIG_0_m813B4A4D457787D48A7B5DFC8C5192C99AB554E5(L_0, L_1, /*hidden argument*/NULL);
		Parameter__ctor_m392E12622ECE7AF0DFB8F351B5A52CF812EAF7F4(__this, (intptr_t)L_2, (bool)1, /*hidden argument*/NULL);
		bool L_3 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, Parameter__ctor_m7A98DF030BD1B79FD0B5139AB2307A8A7DA0482D_RuntimeMethod_var);
	}

IL_001e:
	{
		return;
	}
}
// System.Void Firebase.Analytics.Parameter::.ctor(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter__ctor_m3F98F329CAB6029C98CFC9DF8872C719DDD67DEE (Parameter_tED166B3BB2203CCDC4DF5F9F2714037F7ADB591E * __this, String_t* ___parameterName0, int64_t ___parameterValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parameter__ctor_m3F98F329CAB6029C98CFC9DF8872C719DDD67DEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___parameterName0;
		int64_t L_1 = ___parameterValue1;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var);
		intptr_t L_2 = FirebaseAnalyticsPINVOKE_Firebase_Analytics_new_Parameter__SWIG_1_m35F4166076F98236A85B969E905F2EB68B6C94FF(L_0, L_1, /*hidden argument*/NULL);
		Parameter__ctor_m392E12622ECE7AF0DFB8F351B5A52CF812EAF7F4(__this, (intptr_t)L_2, (bool)1, /*hidden argument*/NULL);
		bool L_3 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, Parameter__ctor_m3F98F329CAB6029C98CFC9DF8872C719DDD67DEE_RuntimeMethod_var);
	}

IL_001e:
	{
		return;
	}
}
// System.Void Firebase.Analytics.Parameter::.ctor(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter__ctor_mA19B0CAEDE4B5BBC444222B8C910027F87A291BD (Parameter_tED166B3BB2203CCDC4DF5F9F2714037F7ADB591E * __this, String_t* ___parameterName0, double ___parameterValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parameter__ctor_mA19B0CAEDE4B5BBC444222B8C910027F87A291BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___parameterName0;
		double L_1 = ___parameterValue1;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var);
		intptr_t L_2 = FirebaseAnalyticsPINVOKE_Firebase_Analytics_new_Parameter__SWIG_2_m5DCBD82F4B2242D9E3F0A2E4F996753932B60C49(L_0, L_1, /*hidden argument*/NULL);
		Parameter__ctor_m392E12622ECE7AF0DFB8F351B5A52CF812EAF7F4(__this, (intptr_t)L_2, (bool)1, /*hidden argument*/NULL);
		bool L_3 = SWIGPendingException_get_Pending_m368C58F7DD3C0618543462CD68806FE1EF98FCDC(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m56CE138BBD1EB5BCCF31BD13DFB22AB78FBA8DB1(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, Parameter__ctor_mA19B0CAEDE4B5BBC444222B8C910027F87A291BD_RuntimeMethod_var);
	}

IL_001e:
	{
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Analytics.Parameter::getCPtr(Firebase.Analytics.Parameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  Parameter_getCPtr_m40A1C59BD22BE8159E80BF2F4E50B6EB6EF65C98 (Parameter_tED166B3BB2203CCDC4DF5F9F2714037F7ADB591E * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parameter_getCPtr_m40A1C59BD22BE8159E80BF2F4E50B6EB6EF65C98_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		Parameter_tED166B3BB2203CCDC4DF5F9F2714037F7ADB591E * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_1;
		memset((&L_1), 0, sizeof(L_1));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_1), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Parameter_tED166B3BB2203CCDC4DF5F9F2714037F7ADB591E * L_2 = ___obj0;
		NullCheck(L_2);
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_3 = L_2->get_swigCPtr_0();
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Analytics.Parameter::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter_Finalize_m21DADC1679770241D687B330EDEA12A7548E2BF6 (Parameter_tED166B3BB2203CCDC4DF5F9F2714037F7ADB591E * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		Parameter_Dispose_m80F77D7A0A5D294A93BEB03D993B79C86021E06C(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Analytics.Parameter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter_Dispose_m80F77D7A0A5D294A93BEB03D993B79C86021E06C (Parameter_tED166B3BB2203CCDC4DF5F9F2714037F7ADB591E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parameter_Dispose_m80F77D7A0A5D294A93BEB03D993B79C86021E06C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m903755FCC479745619842CCDBF5E6355319FA102(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)L_2, /*hidden argument*/NULL);
			bool L_4 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0054;
			}
		}

IL_0026:
		{
			bool L_5 = __this->get_swigCMemOwn_1();
			if (!L_5)
			{
				goto IL_0043;
			}
		}

IL_0031:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_6 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalyticsPINVOKE_tBAD98935B231D49ACA7D365E43CE2E0EA55193DA_il2cpp_TypeInfo_var);
			FirebaseAnalyticsPINVOKE_Firebase_Analytics_delete_Parameter_m036A853A85FC8B07AEBA79BB76529F4CA16AB4EB(L_6, /*hidden argument*/NULL);
		}

IL_0043:
		{
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_7;
			memset((&L_7), 0, sizeof(L_7));
			HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_7), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_7);
		}

IL_0054:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x66, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0066:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR intptr_t HandleRef_op_Explicit_m8F2C972BA00081BDFE05EBE710DFF38D9856F4BD_inline (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___value0, const RuntimeMethod* method)
{
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = ___value0;
		intptr_t L_1 = L_0.get_m_handle_1();
		return (intptr_t)L_1;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_handle_1();
		return (intptr_t)L_0;
	}
}
