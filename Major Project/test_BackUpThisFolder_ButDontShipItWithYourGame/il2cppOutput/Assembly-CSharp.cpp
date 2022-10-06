#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9;
// System.Action`1<System.Threading.Tasks.Task`1<Google.GoogleSignInUser>>
struct Action_1_tF52889A7B072E11E8880182FD8F7D44219989077;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t0328A8A468C762DAECEC2BDBE23D4E47955D8678;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// Google.FutureAPIImpl`1<Google.GoogleSignInUser>
struct FutureAPIImpl_1_t1DBB9AEFB8C58CA4AD9AFE5C32CA4C9CF3E58E8B;
// Google.FutureAPIImpl`1<System.Object>
struct FutureAPIImpl_1_tB70B1803C3C8E7E6A30F4E5B318E1BCBA62575DA;
// Google.Future`1<Google.GoogleSignInUser>
struct Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B;
// Google.Future`1<System.Object>
struct Future_1_tA71DD05DCEB77C6104765DDB3DA5A4E3484933CF;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>
struct TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B;
// System.Threading.Tasks.Task`1<Google.GoogleSignInUser>
struct Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Google.Impl.BaseObject
struct BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Firebase.Auth.Credential
struct Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// FireBaseAuth
struct FireBaseAuth_tE3D608FC44485C1F88060CB462F742F73170CC98;
// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25;
// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF;
// Firebase.Auth.FirebaseUser
struct FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// Google.GoogleSignIn
struct GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA;
// Google.GoogleSignInConfiguration
struct GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8;
// Google.Impl.GoogleSignInImpl
struct GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349;
// Google.GoogleSignInUser
struct GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// Google.ISignInImpl
struct ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Google.Impl.NativeFuture
struct NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Google.Impl.SignInHelperObject
struct SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WWW
struct WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB;
// Google.Impl.BaseObject/OutStringMethod
struct OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5;
// FireBaseAuth/<LoadImageUrl>d__18
struct U3CLoadImageUrlU3Ed__18_tCDDD8AC70B6F31622347A09E19787DFB47FAAE03;
// Google.GoogleSignIn/SignInException
struct SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Google.Impl.NativeFuture/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tF52889A7B072E11E8880182FD8F7D44219989077_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleAuthProvider_t646272DD18929729FAEDA1A1F2CAD87CC5DB8D6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadImageUrlU3Ed__18_tCDDD8AC70B6F31622347A09E19787DFB47FAAE03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1AB052A934B11FC7EE23C7780D3952879E806D33;
IL2CPP_EXTERN_C String_t* _stringLiteral444220D4F8C65F6E7FC6D7BDCF5C0812FE59F567;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral79098B9D29578596CA3BA3FCEDAFB6AF622D9AFD;
IL2CPP_EXTERN_C String_t* _stringLiteral7B2F1C23E097A3DFA1B1731A52726584895BA3C6;
IL2CPP_EXTERN_C String_t* _stringLiteralA2DDC772C08BECB1048BDC3E59E5EE5135499489;
IL2CPP_EXTERN_C String_t* _stringLiteralD400EB487C20E145E8637C4026A2356D9E546258;
IL2CPP_EXTERN_C String_t* _stringLiteralD6AEB00E2908EDBFDB9EF7E0BC9A94A5D2742E6C;
IL2CPP_EXTERN_C String_t* _stringLiteralDAFAF1BA7E22CC639E69C44B0308455A786E3D91;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FireBaseAuth_OnGoogleAuthFinished_m8FA90621B95CB693AE4DCB49E72D086C5342FBE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FireBaseAuth_U3COnGoogleAuthFinishedU3Eb__16_0_mD422502C432EEE2E722E52AFEB41CEDE855D66D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_m8DAAB2B6376C79FA30A3F2BCF3DB4DB73BBA61BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoogleSignIn_set_Configuration_mF52DF04FFD80AA9BC83102B2F313D24C9D5FFA17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskExtension_ContinueWithOnMainThread_TisFirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_m079D6D0B7F57AD4432E5EE88230AC2C4E70D07CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_m0B40A8BB452D64D2539DE93F7B3E0096F7DB70B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadImageUrlU3Ed__18_System_Collections_IEnumerator_Reset_mFEDAD048CAFFC14CB71E5FBE02F099D0D56EDDC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__0_mAB7700145D3F1F675831CDCE9BEACC834D4BF96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__1_m370A13175EEDCF49601E661321C8DD88FF6A1946_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__2_m8D0E1DF9DE52B683EF57BD1A25567E701CD782B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__3_m49F63C5CB22AC3D69146172A0DF82EAAC45ACCD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__4_mFABC6CF05697AC3A309FDF438B8AF5D6CED62147_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__5_mC2AB488643100B8EF8939922F768AB85AD2D284C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__6_m9DDEF005B688BBCB60877AC369DD209AA023D5B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__7_mD0783088AA1B5B1F825807F640392ABFC3A3E5CA_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// Google.Future`1<Google.GoogleSignInUser>
struct Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B  : public RuntimeObject
{
	// Google.FutureAPIImpl`1<T> Google.Future`1::apiImpl
	RuntimeObject* ___apiImpl_0;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>
struct TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ____task_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// Google.GoogleSignIn
struct GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA  : public RuntimeObject
{
	// Google.ISignInImpl Google.GoogleSignIn::impl
	RuntimeObject* ___impl_2;
};

struct GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields
{
	// Google.GoogleSignIn Google.GoogleSignIn::theInstance
	GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* ___theInstance_0;
	// Google.GoogleSignInConfiguration Google.GoogleSignIn::theConfiguration
	GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___theConfiguration_1;
};

// Google.GoogleSignInConfiguration
struct GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8  : public RuntimeObject
{
	// System.Boolean Google.GoogleSignInConfiguration::UseGameSignIn
	bool ___UseGameSignIn_0;
	// System.String Google.GoogleSignInConfiguration::WebClientId
	String_t* ___WebClientId_1;
	// System.Boolean Google.GoogleSignInConfiguration::RequestAuthCode
	bool ___RequestAuthCode_2;
	// System.Boolean Google.GoogleSignInConfiguration::ForceTokenRefresh
	bool ___ForceTokenRefresh_3;
	// System.Boolean Google.GoogleSignInConfiguration::RequestEmail
	bool ___RequestEmail_4;
	// System.Boolean Google.GoogleSignInConfiguration::RequestIdToken
	bool ___RequestIdToken_5;
	// System.Boolean Google.GoogleSignInConfiguration::RequestProfile
	bool ___RequestProfile_6;
	// System.Boolean Google.GoogleSignInConfiguration::HidePopups
	bool ___HidePopups_7;
	// System.String Google.GoogleSignInConfiguration::AccountName
	String_t* ___AccountName_8;
	// System.Collections.Generic.IEnumerable`1<System.String> Google.GoogleSignInConfiguration::AdditionalScopes
	RuntimeObject* ___AdditionalScopes_9;
};

// Google.GoogleSignInUser
struct GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA  : public RuntimeObject
{
	// System.String Google.GoogleSignInUser::<AuthCode>k__BackingField
	String_t* ___U3CAuthCodeU3Ek__BackingField_0;
	// System.String Google.GoogleSignInUser::<Email>k__BackingField
	String_t* ___U3CEmailU3Ek__BackingField_1;
	// System.String Google.GoogleSignInUser::<IdToken>k__BackingField
	String_t* ___U3CIdTokenU3Ek__BackingField_2;
	// System.String Google.GoogleSignInUser::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_3;
	// System.String Google.GoogleSignInUser::<GivenName>k__BackingField
	String_t* ___U3CGivenNameU3Ek__BackingField_4;
	// System.String Google.GoogleSignInUser::<FamilyName>k__BackingField
	String_t* ___U3CFamilyNameU3Ek__BackingField_5;
	// System.Uri Google.GoogleSignInUser::<ImageUrl>k__BackingField
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___U3CImageUrlU3Ek__BackingField_6;
	// System.String Google.GoogleSignInUser::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_7;
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// FireBaseAuth/<LoadImageUrl>d__18
struct U3CLoadImageUrlU3Ed__18_tCDDD8AC70B6F31622347A09E19787DFB47FAAE03  : public RuntimeObject
{
	// System.Int32 FireBaseAuth/<LoadImageUrl>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FireBaseAuth/<LoadImageUrl>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String FireBaseAuth/<LoadImageUrl>d__18::imageUrl
	String_t* ___imageUrl_2;
	// FireBaseAuth FireBaseAuth/<LoadImageUrl>d__18::<>4__this
	FireBaseAuth_tE3D608FC44485C1F88060CB462F742F73170CC98* ___U3CU3E4__this_3;
	// UnityEngine.WWW FireBaseAuth/<LoadImageUrl>d__18::<www>5__2
	WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* ___U3CwwwU3E5__2_4;
};

// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Google.GoogleSignInUser>
struct Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
};

struct UIntPtr_t_StaticFields
{
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WWW
struct WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ____uwr_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F 
{
	// System.Object System.Runtime.InteropServices.HandleRef::_wrapper
	RuntimeObject* ____wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::_handle
	intptr_t ____handle_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Google.Impl.BaseObject
struct BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Google.Impl.BaseObject::selfHandleRef
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___selfHandleRef_0;
};

struct BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_StaticFields
{
	// System.Runtime.InteropServices.HandleRef Google.Impl.BaseObject::nullSelf
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___nullSelf_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Firebase.Auth.Credential
struct Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.Credential::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Auth.Credential::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseAuth::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Auth.FirebaseAuth::swigCMemOwn
	bool ___swigCMemOwn_1;
	// Firebase.FirebaseApp Firebase.Auth.FirebaseAuth::appProxy
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___appProxy_2;
	// System.IntPtr Firebase.Auth.FirebaseAuth::appCPtr
	intptr_t ___appCPtr_3;
	// System.IntPtr Firebase.Auth.FirebaseAuth::authStateListener
	intptr_t ___authStateListener_4;
	// System.IntPtr Firebase.Auth.FirebaseAuth::idTokenListener
	intptr_t ___idTokenListener_5;
	// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::currentUser
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* ___currentUser_6;
	// System.EventHandler Firebase.Auth.FirebaseAuth::stateChangedImpl
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___stateChangedImpl_7;
	// System.EventHandler Firebase.Auth.FirebaseAuth::idTokenChangedImpl
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___idTokenChangedImpl_8;
	// System.Boolean Firebase.Auth.FirebaseAuth::persistentLoaded
	bool ___persistentLoaded_9;
};

struct FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth::appCPtrToAuth
	Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* ___appCPtrToAuth_10;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// Firebase.Auth.UserInfoInterface
struct UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.UserInfoInterface::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Auth.UserInfoInterface::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Google.GoogleSignIn/SignInException
struct SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A  : public Exception_t
{
	// Google.GoogleSignInStatusCode Google.GoogleSignIn/SignInException::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_18;
};

// Google.Impl.NativeFuture/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Google.Impl.NativeFuture/<>c__DisplayClass5_0::userPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___userPtr_0;
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9  : public MulticastDelegate_t
{
};

// System.Action`1<System.Threading.Tasks.Task`1<Google.GoogleSignInUser>>
struct Action_1_tF52889A7B072E11E8880182FD8F7D44219989077  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Firebase.Auth.FirebaseUser
struct FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A  : public UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseUser::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_2;
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseUser::authProxy
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___authProxy_3;
};

// Google.Impl.GoogleSignInImpl
struct GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349  : public BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Google.Impl.NativeFuture
struct NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F  : public BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// Google.Impl.BaseObject/OutStringMethod
struct OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// FireBaseAuth
struct FireBaseAuth_tE3D608FC44485C1F88060CB462F742F73170CC98  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String FireBaseAuth::GoogleWebAPI
	String_t* ___GoogleWebAPI_4;
	// Google.GoogleSignInConfiguration FireBaseAuth::configuration
	GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___configuration_5;
	// Firebase.DependencyStatus FireBaseAuth::dependencyStatus
	int32_t ___dependencyStatus_6;
	// Firebase.Auth.FirebaseAuth FireBaseAuth::auth
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___auth_7;
	// Firebase.Auth.FirebaseUser FireBaseAuth::user
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* ___user_8;
	// UnityEngine.UI.Text FireBaseAuth::UserNameTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___UserNameTxt_9;
	// UnityEngine.UI.Text FireBaseAuth::UserEmailTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___UserEmailTxt_10;
	// UnityEngine.UI.Image FireBaseAuth::UserProfilePic
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___UserProfilePic_11;
	// System.String FireBaseAuth::imageUrl
	String_t* ___imageUrl_12;
	// UnityEngine.GameObject FireBaseAuth::LoginScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LoginScreen_13;
	// UnityEngine.GameObject FireBaseAuth::ProfileScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ProfileScreen_14;
	// System.Boolean FireBaseAuth::openFireBase
	bool ___openFireBase_15;
};

// Google.Impl.SignInHelperObject
struct SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields
{
	// Google.Impl.SignInHelperObject Google.Impl.SignInHelperObject::instance
	SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* ___instance_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_mA0846133B2903064AAD1D23FE61AE736A033F866_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, Action_1_t0328A8A468C762DAECEC2BDBE23D4E47955D8678* ___continuationAction0, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.Extensions.TaskExtension::ContinueWithOnMainThread<System.Object>(System.Threading.Tasks.Task`1<T>,System.Action`1<System.Threading.Tasks.Task`1<T>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskExtension_ContinueWithOnMainThread_TisRuntimeObject_mCB2A132E3DA003180CD7E728FC1805D16FB6EFC2_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___task0, Action_1_t0328A8A468C762DAECEC2BDBE23D4E47955D8678* ___continuation1, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Google.Future`1<System.Object>::WaitForResult(System.Threading.Tasks.TaskCompletionSource`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Future_1_WaitForResult_m86C7BBC0D729D1190E2DE445649A1A7280004193_gshared (Future_1_tA71DD05DCEB77C6104765DDB3DA5A4E3484933CF* __this, TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___tcs0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void Google.Future`1<System.Object>::.ctor(Google.FutureAPIImpl`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_1__ctor_mFAB04EC0EED034736749BA83776F629ED33AA046_gshared (Future_1_tA71DD05DCEB77C6104765DDB3DA5A4E3484933CF* __this, RuntimeObject* ___impl0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void Google.GoogleSignInConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInConfiguration__ctor_m99891370EEB5D39D4F4492E576B1CB5665532589 (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* __this, const RuntimeMethod* method) ;
// System.Void FireBaseAuth::InitFireBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseAuth_InitFireBase_m779D0707786775FEB126ED367ADD362D0F32517B (FireBaseAuth_tE3D608FC44485C1F88060CB462F742F73170CC98* __this, const RuntimeMethod* method) ;
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* FirebaseAuth_get_DefaultInstance_m1DAD548CF76FE2B9B9DFB407D5B3058A932D1B9D (const RuntimeMethod* method) ;
// System.Void Google.GoogleSignIn::set_Configuration(Google.GoogleSignInConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_set_Configuration_mF52DF04FFD80AA9BC83102B2F313D24C9D5FFA17 (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___value0, const RuntimeMethod* method) ;
// Google.GoogleSignInConfiguration Google.GoogleSignIn::get_Configuration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* GoogleSignIn_get_Configuration_m4E2239E342D8DE7555911527A1919538C5EAE9A9_inline (const RuntimeMethod* method) ;
// Google.GoogleSignIn Google.GoogleSignIn::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* GoogleSignIn_get_DefaultInstance_m44367AA5151F8B71EA6BCBF805E59387F826C1AB (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Google.GoogleSignInUser> Google.GoogleSignIn::SignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* GoogleSignIn_SignIn_mAAA8FC28D91B6CBAB324F888FE951EB9EA64E64D (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Google.GoogleSignInUser>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m24ECDBDFF2296BB9E1A0A6682131E87BADE4EADE (Action_1_tF52889A7B072E11E8880182FD8F7D44219989077* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF52889A7B072E11E8880182FD8F7D44219989077*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Google.GoogleSignInUser>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_m0B40A8BB452D64D2539DE93F7B3E0096F7DB70B1 (Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* __this, Action_1_tF52889A7B072E11E8880182FD8F7D44219989077* ___continuationAction0, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926*, Action_1_tF52889A7B072E11E8880182FD8F7D44219989077*, const RuntimeMethod*))Task_1_ContinueWith_mA0846133B2903064AAD1D23FE61AE736A033F866_gshared)(__this, ___continuationAction0, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<Google.GoogleSignInUser>::get_Result()
inline GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B (Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* __this, const RuntimeMethod* method)
{
	return ((  GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* (*) (Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// System.String Google.GoogleSignInUser::get_IdToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_IdToken_m58382F225E3065502A66AFA23F70053153DEA62A_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) ;
// Firebase.Auth.Credential Firebase.Auth.GoogleAuthProvider::GetCredential(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* GoogleAuthProvider_GetCredential_m6246A8B861C270513177BE702FA0F70ADD5C84AD (String_t* ___idToken0, String_t* ___accessToken1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::SignInWithCredentialAsync(Firebase.Auth.Credential)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* FirebaseAuth_SignInWithCredentialAsync_m113AA2F02FEE5A28A9D49492AC5F33AA54A55D74 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* ___credential0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA1A3987C0999C379F2DE5C4FC11270A1C6B91007 (Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task Firebase.Extensions.TaskExtension::ContinueWithOnMainThread<Firebase.Auth.FirebaseUser>(System.Threading.Tasks.Task`1<T>,System.Action`1<System.Threading.Tasks.Task`1<T>>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskExtension_ContinueWithOnMainThread_TisFirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_m079D6D0B7F57AD4432E5EE88230AC2C4E70D07CB (Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* ___task0, Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* ___continuation1, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B*, Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9*, const RuntimeMethod*))TaskExtension_ContinueWithOnMainThread_TisRuntimeObject_mCB2A132E3DA003180CD7E728FC1805D16FB6EFC2_gshared)(___task0, ___continuation1, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void FireBaseAuth/<LoadImageUrl>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageUrlU3Ed__18__ctor_m1AE91CD3F173CBB719E84C7FCCF8870350B0F3F2 (U3CLoadImageUrlU3Ed__18_tCDDD8AC70B6F31622347A09E19787DFB47FAAE03* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignIn::SignOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_SignOut_m1666034382C085A0EE0227035E57E5AD61FE43B6 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::get_CurrentUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* FirebaseAuth_get_CurrentUser_m99426341853624A9A11F81CFE5BEBCC293501ABF (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, const RuntimeMethod* method) ;
// System.String Firebase.Auth.FirebaseUser::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseUser_get_DisplayName_m813DCB1BFDE089FBF49FF697E77A48C85183CC6C (FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* __this, const RuntimeMethod* method) ;
// System.String Firebase.Auth.FirebaseUser::get_Email()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseUser_get_Email_mA5E5359FFA20465E1D5570BC3FCC645648BAAAF0 (FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* __this, const RuntimeMethod* method) ;
// System.Uri Firebase.Auth.FirebaseUser::get_PhotoUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* FirebaseUser_get_PhotoUrl_m3622B893897FE5BD498CDB1A50FDEBF0E8729D3E (FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* __this, const RuntimeMethod* method) ;
// System.String FireBaseAuth::CheckImageUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FireBaseAuth_CheckImageUrl_m4FA66FF24E776BC9477CE1D8D5E9D8DA759E152E (FireBaseAuth_tE3D608FC44485C1F88060CB462F742F73170CC98* __this, String_t* ___url0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator FireBaseAuth::LoadImageUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FireBaseAuth_LoadImageUrl_mAC7D672ACEE1B43DA02E033914F5A33213520E76 (FireBaseAuth_tE3D608FC44485C1F88060CB462F742F73170CC98* __this, String_t* ___imageUrl0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWW::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_m5D29D83E9EE0925ED8252347CE24EC236401503D (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, String_t* ___url0, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.WWW::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* WWW_get_texture_mB38F7FC4220AC09935423B84FD4EB852CF172AAE (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Sprite_Create_m52CEA0C28557793072A08CF911ACE8C6C550BE79 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot2, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException__ctor_m5C137C75DDEBA99BA9B0AC253EB36C075B2E2D8B (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___status0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void Google.Impl.GoogleSignInImpl::.ctor(Google.GoogleSignInConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl__ctor_m28DE8315356ABCB9AB9B96F3D635BF83278D3A3A (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___configuration0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignIn::.ctor(Google.Impl.GoogleSignInImpl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn__ctor_m43C53EBCEC03FBAA1F634E76365E860595AC4D52 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* ___impl0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>::.ctor()
inline void TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84 (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared)(__this, method);
}
// Google.Impl.SignInHelperObject Google.Impl.SignInHelperObject::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* SignInHelperObject_get_Instance_m5DC1955B15AE32848E5EDC7F6DDE456DC3D0F3F1 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator Google.Future`1<Google.GoogleSignInUser>::WaitForResult(System.Threading.Tasks.TaskCompletionSource`1<T>)
inline RuntimeObject* Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* __this, TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* ___tcs0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B*, TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA*, const RuntimeMethod*))Future_1_WaitForResult_m86C7BBC0D729D1190E2DE445649A1A7280004193_gshared)(__this, ___tcs0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<Google.GoogleSignInUser>::get_Task()
inline Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_inline (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* (*) (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline)(__this, method);
}
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignIn/SignInException::set_Status(Google.GoogleSignInStatusCode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m412D5FC4D69035738F1DB88FD771ABD6B0E9E120 (Exception_t* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, RuntimeObject* ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method) ;
// System.Boolean System.ValueType::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.BaseObject/OutStringMethod::Invoke(System.Byte[],System.UIntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_inline (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method) ;
// System.Boolean System.UIntPtr::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIntPtr_Equals_m7A952F9624311E28A8F6B7D48A27E897F59E7021 (uintptr_t* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.UInt32 System.UIntPtr::ToUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965 (uintptr_t* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.IntPtr Google.Impl.GoogleSignInImpl::GetPlayerActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GetPlayerActivity_m169EC762F973B91F66994B8CAED13BE2C051DC88 (const RuntimeMethod* method) ;
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_Create(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_Create_m1070B04B22E22F00DC950000AC3A713D25F7E56D (intptr_t ___data0, const RuntimeMethod* method) ;
// System.Void Google.Impl.BaseObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject__ctor_mDB4E06DEC48DC3204680E87119B46480BCECCB7A (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, intptr_t ___intPtr0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Runtime.InteropServices.HandleRef Google.Impl.BaseObject::SelfPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9 (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean Google.Impl.GoogleSignInImpl::GoogleSignIn_Configure(System.Runtime.InteropServices.HandleRef,System.Boolean,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String[],System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GoogleSignInImpl_GoogleSignIn_Configure_mEFC2326B95CCED1ED88AADB020B7E16AF729097D (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, bool ___useGameSignIn1, String_t* ___webClientId2, bool ___requestAuthCode3, bool ___forceTokenRefresh4, bool ___requestEmail5, bool ___requestIdToken6, bool ___hidePopups7, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___additionalScopes8, int32_t ___scopeCount9, String_t* ___accountName10, const RuntimeMethod* method) ;
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_EnableDebugLogging(System.Runtime.InteropServices.HandleRef,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_EnableDebugLogging_mCAB955A0724DA3B4169F22269035F8364F969F54 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, bool ___flag1, const RuntimeMethod* method) ;
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_SignIn(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_SignIn_mBE0D3B456393739737AFF12EC2637E30C4CC2C93 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) ;
// System.Void Google.Impl.NativeFuture::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFuture__ctor_mBCE15D32B70A331E0A78785E89D695988FE027DC (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Void Google.Future`1<Google.GoogleSignInUser>::.ctor(Google.FutureAPIImpl`1<T>)
inline void Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6 (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* __this, RuntimeObject* ___impl0, const RuntimeMethod* method)
{
	((  void (*) (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B*, RuntimeObject*, const RuntimeMethod*))Future_1__ctor_mFAB04EC0EED034736749BA83776F629ED33AA046_gshared)(__this, ___impl0, method);
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_SignInSilently(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_SignInSilently_m3C681D67798FB33AE3CEB8698E38D19D31554257 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) ;
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_Signout(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_Signout_m4EEDBDF8AE74E08B8B4134A214B2DD095927123A (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) ;
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_Disconnect(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_Disconnect_m63E4851DAF91832244BA195AEA854E038824C6FA (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_DisposeFuture(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_DisposeFuture_m3199178F1C8C190E0296C35B1EE9C7553649E4B6 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) ;
// System.Void Google.Impl.BaseObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject_Dispose_m554F3F996634EC0E8C5C0D2212659D5FDECC582F (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, const RuntimeMethod* method) ;
// System.Boolean Google.Impl.GoogleSignInImpl::GoogleSignIn_Pending(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GoogleSignInImpl_GoogleSignIn_Pending_mC9C5B9201B8DFFF7228D660613FC52AE8E754D42 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) ;
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_Result(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_Result_m239A56BE0FBB24DB7EBBEC5F7F8FF3B895B3A3E1 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void Google.Impl.NativeFuture/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m7497FAB21C83A976EB1558C8B99D253FA6DDF86A (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser__ctor_m0271D1B065D5BF40672070447A0D61EEDB88FF91 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) ;
// System.Void Google.Impl.BaseObject/OutStringMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.String Google.Impl.BaseObject::OutParamsToString(Google.Impl.BaseObject/OutStringMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseObject_OutParamsToString_mE19711AC5572545ECA45524521CD9A404CF172CA (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* ___outStringMethod0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_DisplayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_DisplayName_m33092BFF9954A242BCE80DF4A243C20FD583315B_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_Email(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_Email_m2036BD483DA25F84B60FCCEF63BBC20A5F1D5F9C_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_FamilyName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_FamilyName_m23A309A857743C07F1CA856EA0ADCFB3B122A5A9_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_GivenName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_GivenName_m22A6A6824200A97844AF62E12A29D32EC8215E7D_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_IdToken(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_IdToken_m9F8F42353CFF4647151698F50CD241BF4E405EC3_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_AuthCode(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_AuthCode_mFD2ACD2178A1E33BA97EE4DA65503CAFFAF595F7_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___uriString0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_ImageUrl(System.Uri)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_ImageUrl_m757A1FC5F8E85B18081AD882F73F317DF6DEFE45_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) ;
// System.Void Google.GoogleSignInUser::set_UserId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_UserId_m6311A410F1636E122903BF4F8A50E0421DF20270_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 Google.Impl.GoogleSignInImpl::GoogleSignIn_Status(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GoogleSignInImpl_GoogleSignIn_Status_mC38EA2A49EF04B48137FBE4EE79BFB3C0A907C60 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetDisplayName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetDisplayName_m34F06EDAC247EFE16EE7D7003D60D269EDC7CD09 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetEmail(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetEmail_m1277C16AB66AC5DC74B30EC4F5AFA102E362C04A (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetFamilyName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetFamilyName_m02592F285D3EE7D29159E76131BF9F5DBDD89012 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetGivenName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetGivenName_mEB8F331BE98ECD83858295890C2949B65C366B61 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetIdToken(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetIdToken_mB26E5AC987D24266CB0C9BAFE9D595E1ACC2BA02 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetServerAuthCode(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetServerAuthCode_m00E7C3D9FDE9B16B3D6F71B59784EDE946CF35E1 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetImageUrl(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetImageUrl_mB63006D0ED8646930DC70C66AC3406785DC335D7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) ;
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetUserId(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetUserId_mC964CA22A27A88616641F81A58ADABF103D55C46 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Google.Impl.SignInHelperObject>()
inline SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* GameObject_AddComponent_TisSignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_m8DAAB2B6376C79FA30A3F2BCF3DB4DB73BBA61BF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Google.Impl.SignInHelperObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInHelperObject__ctor_m049CB998CA9E1DA5929BE9CFCEA8C33EE915CDA3 (SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* __this, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GoogleSignIn_Create(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GoogleSignIn_EnableDebugLogging(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GoogleSignIn_Configure(void*, int32_t, char*, int32_t, int32_t, int32_t, int32_t, int32_t, char**, int32_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GoogleSignIn_SignIn(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GoogleSignIn_SignInSilently(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GoogleSignIn_Signout(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GoogleSignIn_Disconnect(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GoogleSignIn_DisposeFuture(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GoogleSignIn_Pending(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GoogleSignIn_Result(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GoogleSignIn_Status(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetServerAuthCode(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetDisplayName(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetEmail(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetFamilyName(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetGivenName(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetIdToken(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetImageUrl(void*, uint8_t*, uintptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
IL2CPP_EXTERN_C uintptr_t DEFAULT_CALL GoogleSignIn_GetUserId(void*, uint8_t*, uintptr_t);
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
// System.Void FireBaseAuth::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseAuth_Awake_m608EB934EAFCA7ECFCBB361E7B4C1BCD0DA13CC1 (FireBaseAuth_tE3D608FC44485C1F88060CB462F742F73170CC98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// configuration = new GoogleSignInConfiguration
		// {
		//     WebClientId = GoogleWebAPI,
		//     RequestIdToken = true
		// 
		// };
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_0 = (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8*)il2cpp_codegen_object_new(GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GoogleSignInConfiguration__ctor_m99891370EEB5D39D4F4492E576B1CB5665532589(L_0, NULL);
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_1 = L_0;
		String_t* L_2 = __this->___GoogleWebAPI_4;
		NullCheck(L_1);
		L_1->___WebClientId_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___WebClientId_1), (void*)L_2);
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_3 = L_1;
		NullCheck(L_3);
		L_3->___RequestIdToken_5 = (bool)1;
		__this->___configuration_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___configuration_5), (void*)L_3);
		// }
		return;
	}
}
// System.Void FireBaseAuth::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseAuth_Start_mA28F1D7689162F25143494CF9758196B0FB4D832 (FireBaseAuth_tE3D608FC44485C1F88060CB462F742F73170CC98* __this, const RuntimeMethod* method) 
{
	{
		// InitFireBase();
		FireBaseAuth_InitFireBase_m779D0707786775FEB126ED367ADD362D0F32517B(__this, NULL);
		// }
		return;
	}
}
// System.Void FireBaseAuth::InitFireBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseAuth_InitFireBase_m779D0707786775FEB126ED367ADD362D0F32517B (FireBaseAuth_tE3D608FC44485C1F88060CB462F742F73170CC98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// auth = Firebase.Auth.FirebaseAuth.DefaultInstance;
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0;
		L_0 = FirebaseAuth_get_DefaultInstance_m1DAD548CF76FE2B9B9DFB407D5B3058A932D1B9D(NULL);
		__this->___auth_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___auth_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void FireBaseAuth::GoogleSignInClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseAuth_GoogleSignInClick_m0E8468479125C4065F6ED6BC79476CC791C0AF56 (FireBaseAuth_tE3D608FC44485C1F88060CB462F742F73170CC98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF52889A7B072E11E8880182FD8F7D44219989077_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FireBaseAuth_OnGoogleAuthFinished_m8FA90621B95CB693AE4DCB49E72D086C5342FBE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_m0B40A8BB452D64D2539DE93F7B3E0096F7DB70B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GoogleSignIn.Configuration = configuration;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_0 = __this->___configuration_5;
		GoogleSignIn_set_Configuration_mF52DF04FFD80AA9BC83102B2F313D24C9D5FFA17(L_0, NULL);
		// GoogleSignIn.Configuration.UseGameSignIn = false;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_1;
		L_1 = GoogleSignIn_get_Configuration_m4E2239E342D8DE7555911527A1919538C5EAE9A9_inline(NULL);
		NullCheck(L_1);
		L_1->___UseGameSignIn_0 = (bool)0;
		// GoogleSignIn.Configuration.RequestIdToken = true;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_2;
		L_2 = GoogleSignIn_get_Configuration_m4E2239E342D8DE7555911527A1919538C5EAE9A9_inline(NULL);
		NullCheck(L_2);
		L_2->___RequestIdToken_5 = (bool)1;
		// GoogleSignIn.Configuration.RequestEmail = true;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_3;
		L_3 = GoogleSignIn_get_Configuration_m4E2239E342D8DE7555911527A1919538C5EAE9A9_inline(NULL);
		NullCheck(L_3);
		L_3->___RequestEmail_4 = (bool)1;
		// GoogleSignIn.DefaultInstance.SignIn().ContinueWith(OnGoogleAuthFinished);
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_4;
		L_4 = GoogleSignIn_get_DefaultInstance_m44367AA5151F8B71EA6BCBF805E59387F826C1AB(NULL);
		NullCheck(L_4);
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_5;
		L_5 = GoogleSignIn_SignIn_mAAA8FC28D91B6CBAB324F888FE951EB9EA64E64D(L_4, NULL);
		Action_1_tF52889A7B072E11E8880182FD8F7D44219989077* L_6 = (Action_1_tF52889A7B072E11E8880182FD8F7D44219989077*)il2cpp_codegen_object_new(Action_1_tF52889A7B072E11E8880182FD8F7D44219989077_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_m24ECDBDFF2296BB9E1A0A6682131E87BADE4EADE(L_6, __this, (intptr_t)((void*)FireBaseAuth_OnGoogleAuthFinished_m8FA90621B95CB693AE4DCB49E72D086C5342FBE5_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7;
		L_7 = Task_1_ContinueWith_m0B40A8BB452D64D2539DE93F7B3E0096F7DB70B1(L_5, L_6, Task_1_ContinueWith_m0B40A8BB452D64D2539DE93F7B3E0096F7DB70B1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FireBaseAuth::OnGoogleAuthFinished(System.Threading.Tasks.Task`1<Google.GoogleSignInUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseAuth_OnGoogleAuthFinished_m8FA90621B95CB693AE4DCB49E72D086C5342FBE5 (FireBaseAuth_tE3D608FC44485C1F88060CB462F742F73170CC98* __this, Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FireBaseAuth_U3COnGoogleAuthFinishedU3Eb__16_0_mD422502C432EEE2E722E52AFEB41CEDE855D66D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleAuthProvider_t646272DD18929729FAEDA1A1F2CAD87CC5DB8D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskExtension_ContinueWithOnMainThread_TisFirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_m079D6D0B7F57AD4432E5EE88230AC2C4E70D07CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral444220D4F8C65F6E7FC6D7BDCF5C0812FE59F567);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DDC772C08BECB1048BDC3E59E5EE5135499489);
		s_Il2CppMethodInitialized = true;
	}
	Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* V_0 = NULL;
	{
		// if(task.IsFaulted)
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_0 = ___task0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.Log("Fault");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralA2DDC772C08BECB1048BDC3E59E5EE5135499489, NULL);
		return;
	}

IL_0013:
	{
		// else if(task.IsCanceled)
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_2 = ___task0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA(L_2, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// Debug.Log("Login Canceled");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral444220D4F8C65F6E7FC6D7BDCF5C0812FE59F567, NULL);
		return;
	}

IL_0026:
	{
		// Firebase.Auth.Credential credential = Firebase.Auth.GoogleAuthProvider.GetCredential(task.Result.IdToken, null);
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_4 = ___task0;
		NullCheck(L_4);
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_5;
		L_5 = Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B(L_4, Task_1_get_Result_m675AD0303A1F87A03A5AD976E7708A31F3707E0B_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = GoogleSignInUser_get_IdToken_m58382F225E3065502A66AFA23F70053153DEA62A_inline(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(GoogleAuthProvider_t646272DD18929729FAEDA1A1F2CAD87CC5DB8D6E_il2cpp_TypeInfo_var);
		Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* L_7;
		L_7 = GoogleAuthProvider_GetCredential_m6246A8B861C270513177BE702FA0F70ADD5C84AD(L_6, (String_t*)NULL, NULL);
		V_0 = L_7;
		// auth.SignInWithCredentialAsync(credential).ContinueWithOnMainThread(task =>
		// {
		//     if (task.IsCanceled)
		//     {
		//         Debug.Log("Async Login Canceled");
		//         return;
		//     }
		//     if (task.IsFaulted)
		//     {
		//         Debug.Log("Fault");
		//         return;
		//     }
		//     LoginScreen.SetActive(false);
		//     ProfileScreen.SetActive(true);
		//     user = auth.CurrentUser;
		//     UserNameTxt.text = user.DisplayName;
		//     UserEmailTxt.text = user.Email;
		//     StartCoroutine(LoadImageUrl(CheckImageUrl(   user.PhotoUrl.ToString())));
		//     //PlayerPrefs.SetInt("IsLogin", 1);
		// }
		// );
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_8 = __this->___auth_7;
		Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* L_9 = V_0;
		NullCheck(L_8);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_10;
		L_10 = FirebaseAuth_SignInWithCredentialAsync_m113AA2F02FEE5A28A9D49492AC5F33AA54A55D74(L_8, L_9, NULL);
		Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* L_11 = (Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9*)il2cpp_codegen_object_new(Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_mA1A3987C0999C379F2DE5C4FC11270A1C6B91007(L_11, __this, (intptr_t)((void*)FireBaseAuth_U3COnGoogleAuthFinishedU3Eb__16_0_mD422502C432EEE2E722E52AFEB41CEDE855D66D0_RuntimeMethod_var), NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_12;
		L_12 = TaskExtension_ContinueWithOnMainThread_TisFirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_m079D6D0B7F57AD4432E5EE88230AC2C4E70D07CB(L_10, L_11, TaskExtension_ContinueWithOnMainThread_TisFirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A_m079D6D0B7F57AD4432E5EE88230AC2C4E70D07CB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.String FireBaseAuth::CheckImageUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FireBaseAuth_CheckImageUrl_m4FA66FF24E776BC9477CE1D8D5E9D8DA759E152E (FireBaseAuth_tE3D608FC44485C1F88060CB462F742F73170CC98* __this, String_t* ___url0, const RuntimeMethod* method) 
{
	{
		// if (!string.IsNullOrEmpty(url))
		String_t* L_0 = ___url0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return url;
		String_t* L_2 = ___url0;
		return L_2;
	}

IL_000a:
	{
		// return imageUrl;
		String_t* L_3 = __this->___imageUrl_12;
		return L_3;
	}
}
// System.Collections.IEnumerator FireBaseAuth::LoadImageUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FireBaseAuth_LoadImageUrl_mAC7D672ACEE1B43DA02E033914F5A33213520E76 (FireBaseAuth_tE3D608FC44485C1F88060CB462F742F73170CC98* __this, String_t* ___imageUrl0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadImageUrlU3Ed__18_tCDDD8AC70B6F31622347A09E19787DFB47FAAE03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadImageUrlU3Ed__18_tCDDD8AC70B6F31622347A09E19787DFB47FAAE03* L_0 = (U3CLoadImageUrlU3Ed__18_tCDDD8AC70B6F31622347A09E19787DFB47FAAE03*)il2cpp_codegen_object_new(U3CLoadImageUrlU3Ed__18_tCDDD8AC70B6F31622347A09E19787DFB47FAAE03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadImageUrlU3Ed__18__ctor_m1AE91CD3F173CBB719E84C7FCCF8870350B0F3F2(L_0, 0, NULL);
		U3CLoadImageUrlU3Ed__18_tCDDD8AC70B6F31622347A09E19787DFB47FAAE03* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CLoadImageUrlU3Ed__18_tCDDD8AC70B6F31622347A09E19787DFB47FAAE03* L_2 = L_1;
		String_t* L_3 = ___imageUrl0;
		NullCheck(L_2);
		L_2->___imageUrl_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___imageUrl_2), (void*)L_3);
		return L_2;
	}
}
// System.Void FireBaseAuth::OnSignOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseAuth_OnSignOut_m456C5433FECEEDF7111B11604BD4AFCC8687A220 (FireBaseAuth_tE3D608FC44485C1F88060CB462F742F73170CC98* __this, const RuntimeMethod* method) 
{
	{
		// GoogleSignIn.DefaultInstance.SignOut();
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_0;
		L_0 = GoogleSignIn_get_DefaultInstance_m44367AA5151F8B71EA6BCBF805E59387F826C1AB(NULL);
		NullCheck(L_0);
		GoogleSignIn_SignOut_m1666034382C085A0EE0227035E57E5AD61FE43B6(L_0, NULL);
		// }
		return;
	}
}
// System.Void FireBaseAuth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseAuth__ctor_m245A44204B85336B0562F841DC54AE18B7AD7067 (FireBaseAuth_tE3D608FC44485C1F88060CB462F742F73170CC98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AB052A934B11FC7EE23C7780D3952879E806D33);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string GoogleWebAPI = "155170668706-ondids734tvr9g8pmpbeht4ct1mpfg35.apps.googleusercontent.com";
		__this->___GoogleWebAPI_4 = _stringLiteral1AB052A934B11FC7EE23C7780D3952879E806D33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GoogleWebAPI_4), (void*)_stringLiteral1AB052A934B11FC7EE23C7780D3952879E806D33);
		// Firebase.DependencyStatus dependencyStatus = Firebase.DependencyStatus.UnavailableOther;
		__this->___dependencyStatus_6 = 7;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void FireBaseAuth::<OnGoogleAuthFinished>b__16_0(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseAuth_U3COnGoogleAuthFinishedU3Eb__16_0_mD422502C432EEE2E722E52AFEB41CEDE855D66D0 (FireBaseAuth_tE3D608FC44485C1F88060CB462F742F73170CC98* __this, Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B2F1C23E097A3DFA1B1731A52726584895BA3C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DDC772C08BECB1048BDC3E59E5EE5135499489);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (task.IsCanceled)
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_0 = ___task0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.Log("Async Login Canceled");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral7B2F1C23E097A3DFA1B1731A52726584895BA3C6, NULL);
		// return;
		return;
	}

IL_0013:
	{
		// if (task.IsFaulted)
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_2 = ___task0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9(L_2, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// Debug.Log("Fault");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralA2DDC772C08BECB1048BDC3E59E5EE5135499489, NULL);
		// return;
		return;
	}

IL_0026:
	{
		// LoginScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___LoginScreen_13;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// ProfileScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___ProfileScreen_14;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// user = auth.CurrentUser;
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_6 = __this->___auth_7;
		NullCheck(L_6);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_7;
		L_7 = FirebaseAuth_get_CurrentUser_m99426341853624A9A11F81CFE5BEBCC293501ABF(L_6, NULL);
		__this->___user_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___user_8), (void*)L_7);
		// UserNameTxt.text = user.DisplayName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___UserNameTxt_9;
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_9 = __this->___user_8;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = FirebaseUser_get_DisplayName_m813DCB1BFDE089FBF49FF697E77A48C85183CC6C(L_9, NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_10);
		// UserEmailTxt.text = user.Email;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___UserEmailTxt_10;
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_12 = __this->___user_8;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = FirebaseUser_get_Email_mA5E5359FFA20465E1D5570BC3FCC645648BAAAF0(L_12, NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_13);
		// StartCoroutine(LoadImageUrl(CheckImageUrl(   user.PhotoUrl.ToString())));
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_14 = __this->___user_8;
		NullCheck(L_14);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_15;
		L_15 = FirebaseUser_get_PhotoUrl_m3622B893897FE5BD498CDB1A50FDEBF0E8729D3E(L_14, NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		String_t* L_17;
		L_17 = FireBaseAuth_CheckImageUrl_m4FA66FF24E776BC9477CE1D8D5E9D8DA759E152E(__this, L_16, NULL);
		RuntimeObject* L_18;
		L_18 = FireBaseAuth_LoadImageUrl_mAC7D672ACEE1B43DA02E033914F5A33213520E76(__this, L_17, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_19;
		L_19 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_18, NULL);
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
// System.Void FireBaseAuth/<LoadImageUrl>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageUrlU3Ed__18__ctor_m1AE91CD3F173CBB719E84C7FCCF8870350B0F3F2 (U3CLoadImageUrlU3Ed__18_tCDDD8AC70B6F31622347A09E19787DFB47FAAE03* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FireBaseAuth/<LoadImageUrl>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageUrlU3Ed__18_System_IDisposable_Dispose_m92C0B58CBE8CD8C3E805206D0F386CB783D2197F (U3CLoadImageUrlU3Ed__18_tCDDD8AC70B6F31622347A09E19787DFB47FAAE03* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FireBaseAuth/<LoadImageUrl>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadImageUrlU3Ed__18_MoveNext_m00A14F4DD3D1916EAC430BE844D364441E4A4414 (U3CLoadImageUrlU3Ed__18_tCDDD8AC70B6F31622347A09E19787DFB47FAAE03* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FireBaseAuth_tE3D608FC44485C1F88060CB462F742F73170CC98* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FireBaseAuth_tE3D608FC44485C1F88060CB462F742F73170CC98* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0044;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// WWW www = new WWW(imageUrl);
		String_t* L_4 = __this->___imageUrl_2;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_5 = (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB*)il2cpp_codegen_object_new(WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WWW__ctor_m5D29D83E9EE0925ED8252347CE24EC236401503D(L_5, L_4, NULL);
		__this->___U3CwwwU3E5__2_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__2_4), (void*)L_5);
		// yield return www;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_6 = __this->___U3CwwwU3E5__2_4;
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0044:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// UserProfilePic.sprite = Sprite.Create(www.texture, new Rect(0, 0, www.texture.width, www.texture.height), new Vector2(0, 0));
		FireBaseAuth_tE3D608FC44485C1F88060CB462F742F73170CC98* L_7 = V_1;
		NullCheck(L_7);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = L_7->___UserProfilePic_11;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_9 = __this->___U3CwwwU3E5__2_4;
		NullCheck(L_9);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10;
		L_10 = WWW_get_texture_mB38F7FC4220AC09935423B84FD4EB852CF172AAE(L_9, NULL);
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_11 = __this->___U3CwwwU3E5__2_4;
		NullCheck(L_11);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12;
		L_12 = WWW_get_texture_mB38F7FC4220AC09935423B84FD4EB852CF172AAE(L_11, NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_12);
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_14 = __this->___U3CwwwU3E5__2_4;
		NullCheck(L_14);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15;
		L_15 = WWW_get_texture_mB38F7FC4220AC09935423B84FD4EB852CF172AAE(L_14, NULL);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_15);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17;
		memset((&L_17), 0, sizeof(L_17));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_17), (0.0f), (0.0f), ((float)L_13), ((float)L_16), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_18), (0.0f), (0.0f), /*hidden argument*/NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_19;
		L_19 = Sprite_Create_m52CEA0C28557793072A08CF911ACE8C6C550BE79(L_10, L_17, L_18, NULL);
		NullCheck(L_8);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_8, L_19, NULL);
		// }
		return (bool)0;
	}
}
// System.Object FireBaseAuth/<LoadImageUrl>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadImageUrlU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD10180BCE1BC00DBCAF994FF42FD41A61EB200E0 (U3CLoadImageUrlU3Ed__18_tCDDD8AC70B6F31622347A09E19787DFB47FAAE03* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FireBaseAuth/<LoadImageUrl>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageUrlU3Ed__18_System_Collections_IEnumerator_Reset_mFEDAD048CAFFC14CB71E5FBE02F099D0D56EDDC9 (U3CLoadImageUrlU3Ed__18_tCDDD8AC70B6F31622347A09E19787DFB47FAAE03* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadImageUrlU3Ed__18_System_Collections_IEnumerator_Reset_mFEDAD048CAFFC14CB71E5FBE02F099D0D56EDDC9_RuntimeMethod_var)));
	}
}
// System.Object FireBaseAuth/<LoadImageUrl>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadImageUrlU3Ed__18_System_Collections_IEnumerator_get_Current_m3E94B7121E623D377259CCF60DC541368B760CA4 (U3CLoadImageUrlU3Ed__18_tCDDD8AC70B6F31622347A09E19787DFB47FAAE03* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Google.GoogleSignIn::set_Configuration(Google.GoogleSignInConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_set_Configuration_mF52DF04FFD80AA9BC83102B2F313D24C9D5FFA17 (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (theInstance == null || theConfiguration == value || theConfiguration == null) {
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_0 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theInstance_0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_1 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_2 = ___value0;
		if ((((RuntimeObject*)(GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8*)L_1) == ((RuntimeObject*)(GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8*)L_2)))
		{
			goto IL_0016;
		}
	}
	{
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_3 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1;
		if (L_3)
		{
			goto IL_001d;
		}
	}

IL_0016:
	{
		// theConfiguration = value;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_4 = ___value0;
		((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1), (void*)L_4);
		return;
	}

IL_001d:
	{
		// throw new SignInException(GoogleSignInStatusCode.DeveloperError,
		//     "DefaultInstance already created. " +
		//     " Cannot change configuration after creation.");
		SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* L_5 = (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		SignInException__ctor_m5C137C75DDEBA99BA9B0AC253EB36C075B2E2D8B(L_5, 6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD400EB487C20E145E8637C4026A2356D9E546258)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GoogleSignIn_set_Configuration_mF52DF04FFD80AA9BC83102B2F313D24C9D5FFA17_RuntimeMethod_var)));
	}
}
// Google.GoogleSignInConfiguration Google.GoogleSignIn::get_Configuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* GoogleSignIn_get_Configuration_m4E2239E342D8DE7555911527A1919538C5EAE9A9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return theConfiguration;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_0 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1;
		return L_0;
	}
}
// Google.GoogleSignIn Google.GoogleSignIn::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* GoogleSignIn_get_DefaultInstance_m44367AA5151F8B71EA6BCBF805E59387F826C1AB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (theInstance == null) {
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_0 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theInstance_0;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// theInstance = new GoogleSignIn(new GoogleSignInImpl(Configuration));
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_1;
		L_1 = GoogleSignIn_get_Configuration_m4E2239E342D8DE7555911527A1919538C5EAE9A9_inline(NULL);
		GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* L_2 = (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349*)il2cpp_codegen_object_new(GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GoogleSignInImpl__ctor_m28DE8315356ABCB9AB9B96F3D635BF83278D3A3A(L_2, L_1, NULL);
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_3 = (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA*)il2cpp_codegen_object_new(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GoogleSignIn__ctor_m43C53EBCEC03FBAA1F634E76365E860595AC4D52(L_3, L_2, NULL);
		((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theInstance_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theInstance_0), (void*)L_3);
	}

IL_001b:
	{
		// return theInstance;
		GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* L_4 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theInstance_0;
		return L_4;
	}
}
// System.Void Google.GoogleSignIn::.ctor(Google.Impl.GoogleSignInImpl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn__ctor_m43C53EBCEC03FBAA1F634E76365E860595AC4D52 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* ___impl0, const RuntimeMethod* method) 
{
	{
		// internal GoogleSignIn(GoogleSignInImpl impl) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.impl = impl;
		GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* L_0 = ___impl0;
		__this->___impl_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___impl_2), (void*)L_0);
		// }
		return;
	}
}
// System.Void Google.GoogleSignIn::EnableDebugLogging(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_EnableDebugLogging_m14A29DE697ECC64D8A0A5CBA47278ECAE9D26F29 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, bool ___flag0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// impl.EnableDebugLogging(flag);
		RuntimeObject* L_0 = __this->___impl_2;
		bool L_1 = ___flag0;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void Google.ISignInImpl::EnableDebugLogging(System.Boolean) */, ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<Google.GoogleSignInUser> Google.GoogleSignIn::SignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* GoogleSignIn_SignIn_mAAA8FC28D91B6CBAB324F888FE951EB9EA64E64D (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* V_0 = NULL;
	{
		// var tcs = new TaskCompletionSource<GoogleSignInUser>();
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_0 = (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA*)il2cpp_codegen_object_new(TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84(L_0, TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84_RuntimeMethod_var);
		V_0 = L_0;
		// SignInHelperObject.Instance.StartCoroutine(
		//   impl.SignIn().WaitForResult(tcs));
		SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* L_1;
		L_1 = SignInHelperObject_get_Instance_m5DC1955B15AE32848E5EDC7F6DDE456DC3D0F3F1(NULL);
		RuntimeObject* L_2 = __this->___impl_2;
		NullCheck(L_2);
		Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* L_3;
		L_3 = InterfaceFuncInvoker0< Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* >::Invoke(0 /* Google.Future`1<Google.GoogleSignInUser> Google.ISignInImpl::SignIn() */, ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var, L_2);
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C(L_3, L_4, Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C_RuntimeMethod_var);
		NullCheck(L_1);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_1, L_5, NULL);
		// return tcs.Task;
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_7 = V_0;
		NullCheck(L_7);
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_8;
		L_8 = TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_inline(L_7, TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_RuntimeMethod_var);
		return L_8;
	}
}
// System.Threading.Tasks.Task`1<Google.GoogleSignInUser> Google.GoogleSignIn::SignInSilently()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* GoogleSignIn_SignInSilently_mA667E9AAF7FA438217844D0BACC7DF68364DF7AD (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* V_0 = NULL;
	{
		// var tcs = new TaskCompletionSource<GoogleSignInUser>();
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_0 = (TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA*)il2cpp_codegen_object_new(TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84(L_0, TaskCompletionSource_1__ctor_m571CAE68DC5EF5D0C25DF9803C4837A27B2FEE84_RuntimeMethod_var);
		V_0 = L_0;
		// SignInHelperObject.Instance.StartCoroutine(
		//     impl.SignInSilently().WaitForResult(tcs));
		SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* L_1;
		L_1 = SignInHelperObject_get_Instance_m5DC1955B15AE32848E5EDC7F6DDE456DC3D0F3F1(NULL);
		RuntimeObject* L_2 = __this->___impl_2;
		NullCheck(L_2);
		Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* L_3;
		L_3 = InterfaceFuncInvoker0< Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* >::Invoke(1 /* Google.Future`1<Google.GoogleSignInUser> Google.ISignInImpl::SignInSilently() */, ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var, L_2);
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C(L_3, L_4, Future_1_WaitForResult_m6C7A41837E94F91FD3B4DDEDCAD8A27C1708490C_RuntimeMethod_var);
		NullCheck(L_1);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_1, L_5, NULL);
		// return tcs.Task;
		TaskCompletionSource_1_tBBA015D165B550DD0F588C3174B9834E376980CA* L_7 = V_0;
		NullCheck(L_7);
		Task_1_t038B407D42A0B18825FEA99E6A4D69C18C493926* L_8;
		L_8 = TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_inline(L_7, TaskCompletionSource_1_get_Task_m14829A7440CBAB4CC713F0DAB4A5C7AA3D5BE10F_RuntimeMethod_var);
		return L_8;
	}
}
// System.Void Google.GoogleSignIn::SignOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_SignOut_m1666034382C085A0EE0227035E57E5AD61FE43B6 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// theConfiguration = null;
		((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1 = (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1), (void*)(GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8*)NULL);
		// impl.SignOut();
		RuntimeObject* L_0 = __this->___impl_2;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Google.ISignInImpl::SignOut() */, ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Google.GoogleSignIn::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignIn_Disconnect_mD97724F96462EC3BB49B29CFDC92888EB5D11D00 (GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// impl.Disconnect();
		RuntimeObject* L_0 = __this->___impl_2;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void Google.ISignInImpl::Disconnect() */, ISignInImpl_t51649CFD0016E224C3292ED0F198AB05790FE63B_il2cpp_TypeInfo_var, L_0);
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
// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException__ctor_mF0A5634485EAF28ED443E3FB31248C2C1B1BE942 (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___status0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal SignInException(GoogleSignInStatusCode status) {
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// Status = status;
		int32_t L_0 = ___status0;
		SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException__ctor_m5C137C75DDEBA99BA9B0AC253EB36C075B2E2D8B (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___status0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base(message) {
		String_t* L_0 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// Status = status;
		int32_t L_1 = ___status0;
		SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException__ctor_m84BD804BE5ECAFDF85A48095572AA861C1E9D931 (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___status0, String_t* ___message1, Exception_t* ___innerException2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Exception innerException) : base(message, innerException) {
		String_t* L_0 = ___message1;
		Exception_t* L_1 = ___innerException2;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		// Status = status;
		int32_t L_2 = ___status0;
		SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Google.GoogleSignIn/SignInException::.ctor(Google.GoogleSignInStatusCode,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException__ctor_m97D47EE86A6870059BDA9F858818670FBAFA3812 (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___status0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info1, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base(info, context) {
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info1;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context2;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m412D5FC4D69035738F1DB88FD771ABD6B0E9E120(__this, L_0, L_1, NULL);
		// Status = status;
		int32_t L_2 = ___status0;
		SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// Google.GoogleSignInStatusCode Google.GoogleSignIn/SignInException::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SignInException_get_Status_m2FBF33632A23C771EE5CEB65120E3DFEC8FF5A74 (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CStatusU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void Google.GoogleSignIn/SignInException::set_Status(Google.GoogleSignInStatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		int32_t L_0 = ___value0;
		__this->___U3CStatusU3Ek__BackingField_18 = L_0;
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
// System.Void Google.GoogleSignInConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInConfiguration__ctor_m99891370EEB5D39D4F4492E576B1CB5665532589 (GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.String Google.GoogleSignInUser::get_AuthCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_AuthCode_m086556E7DADF3850F2A70EC022F5BF9870DAAE34 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CAuthCodeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_AuthCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_AuthCode_mFD2ACD2178A1E33BA97EE4DA65503CAFFAF595F7 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CAuthCodeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthCodeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_Email()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_Email_mA6E37F96BC90280CBA4D425743426CBE8D515551 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CEmailU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_Email(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_Email_m2036BD483DA25F84B60FCCEF63BBC20A5F1D5F9C (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CEmailU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEmailU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_IdToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_IdToken_m58382F225E3065502A66AFA23F70053153DEA62A (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CIdTokenU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_IdToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_IdToken_m9F8F42353CFF4647151698F50CD241BF4E405EC3 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CIdTokenU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdTokenU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_DisplayName_mC14CD83AFB1364C729D09692732781672D9CEA9C (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_DisplayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_DisplayName_m33092BFF9954A242BCE80DF4A243C20FD583315B (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CDisplayNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_GivenName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_GivenName_m1955EAFF719827C4118F9B7D2DF30E490F6A6797 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CGivenNameU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_GivenName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_GivenName_m22A6A6824200A97844AF62E12A29D32EC8215E7D (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CGivenNameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGivenNameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_FamilyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_FamilyName_mB8E944CF7D941E7F823C079410D45071ECE203A7 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CFamilyNameU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_FamilyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_FamilyName_m23A309A857743C07F1CA856EA0ADCFB3B122A5A9 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CFamilyNameU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFamilyNameU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Uri Google.GoogleSignInUser::get_ImageUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* GoogleSignInUser_get_ImageUrl_m81F36356F02F01B392A614BD17F639499FB5EDA4 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = __this->___U3CImageUrlU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_ImageUrl(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_ImageUrl_m757A1FC5F8E85B18081AD882F73F317DF6DEFE45 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___value0;
		__this->___U3CImageUrlU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CImageUrlU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.String Google.GoogleSignInUser::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_UserId_mCBF326EFC373DEF983AB1E87082AF49D81D1082E (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CUserIdU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Google.GoogleSignInUser::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser_set_UserId_m6311A410F1636E122903BF4F8A50E0421DF20270 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CUserIdU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserIdU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Void Google.GoogleSignInUser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInUser__ctor_m0271D1B065D5BF40672070447A0D61EEDB88FF91 (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Google.Impl.BaseObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject__ctor_mDB4E06DEC48DC3204680E87119B46480BCECCB7A (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, intptr_t ___intPtr0, const RuntimeMethod* method) 
{
	{
		// public BaseObject(IntPtr intPtr) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// selfHandleRef = new HandleRef(this, intPtr);
		intptr_t L_0 = ___intPtr0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		memset((&L_1), 0, sizeof(L_1));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_1), __this, L_0, /*hidden argument*/NULL);
		__this->___selfHandleRef_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___selfHandleRef_0))->____wrapper_0), (void*)NULL);
		// }
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Google.Impl.BaseObject::SelfPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9 (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (selfHandleRef.Equals(nullSelf)) {
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_0 = (&__this->___selfHandleRef_0);
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1 = ((BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_StaticFields*)il2cpp_codegen_static_fields_for(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var))->___nullSelf_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2 = L_1;
		RuntimeObject* L_3 = Box(HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F_il2cpp_TypeInfo_var, &L_2);
		Il2CppFakeBox<HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F> L_4(HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F_il2cpp_TypeInfo_var, L_0);
		bool L_5;
		L_5 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_4), L_3, NULL);
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// throw new InvalidOperationException(
		//   "Attempted to use object after it was cleaned up");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD6AEB00E2908EDBFDB9EF7E0BC9A94A5D2742E6C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9_RuntimeMethod_var)));
	}

IL_0028:
	{
		// return selfHandleRef;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_7 = __this->___selfHandleRef_0;
		return L_7;
	}
}
// System.Void Google.Impl.BaseObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject_Dispose_m554F3F996634EC0E8C5C0D2212659D5FDECC582F (BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selfHandleRef = nullSelf;
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = ((BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_StaticFields*)il2cpp_codegen_static_fields_for(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var))->___nullSelf_1;
		__this->___selfHandleRef_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___selfHandleRef_0))->____wrapper_0), (void*)NULL);
		// }
		return;
	}
}
// System.String Google.Impl.BaseObject::OutParamsToString(Google.Impl.BaseObject/OutStringMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseObject_OutParamsToString_mE19711AC5572545ECA45524521CD9A404CF172CA (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* ___outStringMethod0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uintptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Exception_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	Exception_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	{
		// UIntPtr requiredSize = outStringMethod(null, UIntPtr.Zero);
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_0 = ___outStringMethod0;
		il2cpp_codegen_runtime_class_init_inline(UIntPtr_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		uintptr_t L_1;
		L_1 = OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_inline(L_0, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, (0), NULL);
		V_0 = L_1;
		// if (requiredSize.Equals(UIntPtr.Zero)) {
		uintptr_t L_2 = (0);
		RuntimeObject* L_3 = Box(UIntPtr_t_il2cpp_TypeInfo_var, &L_2);
		bool L_4;
		L_4 = UIntPtr_Equals_m7A952F9624311E28A8F6B7D48A27E897F59E7021((&V_0), L_3, NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0022:
	{
		// string str = null;
		V_1 = (String_t*)NULL;
	}
	try
	{// begin try (depth: 1)
		// byte[] array = new byte[requiredSize.ToUInt32()];
		uint32_t L_5;
		L_5 = UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965((&V_0), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_2 = L_6;
		// outStringMethod(array, requiredSize);
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_7 = ___outStringMethod0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_2;
		uintptr_t L_9 = V_0;
		NullCheck(L_7);
		uintptr_t L_10;
		L_10 = OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_inline(L_7, L_8, L_9, NULL);
		// str = Encoding.UTF8.GetString(array, 0,
		//         (int)requiredSize.ToUInt32() - 1);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_11;
		L_11 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_2;
		uint32_t L_13;
		L_13 = UIntPtr_ToUInt32_mAD7A6CD8C254052CAC60B29546BE796360E0B965((&V_0), NULL);
		NullCheck(L_11);
		String_t* L_14;
		L_14 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_11, L_12, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, 1)));
		V_1 = L_14;
		// } catch (Exception e) {
		goto IL_0077;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0052;
		}
		throw e;
	}

CATCH_0052:
	{// begin catch(System.Exception)
		{
			// } catch (Exception e) {
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// Debug.LogError("Exception creating string from char array: " + e);
			Exception_t* L_15 = V_3;
			Exception_t* L_16 = L_15;
			G_B5_0 = L_16;
			G_B5_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral79098B9D29578596CA3BA3FCEDAFB6AF622D9AFD));
			if (L_16)
			{
				G_B6_0 = L_16;
				G_B6_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral79098B9D29578596CA3BA3FCEDAFB6AF622D9AFD));
				goto IL_0060;
			}
		}
		{
			G_B7_0 = ((String_t*)(NULL));
			G_B7_1 = G_B5_1;
			goto IL_0065;
		}

IL_0060:
		{
			NullCheck(G_B6_0);
			String_t* L_17;
			L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B6_0);
			G_B7_0 = L_17;
			G_B7_1 = G_B6_1;
		}

IL_0065:
		{
			String_t* L_18;
			L_18 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B7_1, G_B7_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_18, NULL);
			// str = string.Empty;
			String_t* L_19 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
			V_1 = L_19;
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0077;
		}
	}// end catch (depth: 1)

IL_0077:
	{
		// return str;
		String_t* L_20 = V_1;
		return L_20;
	}
}
// System.Void Google.Impl.BaseObject::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject__cctor_m5F932A577375E70C1A127B6FA5694F4B57989711 (const RuntimeMethod* method) 
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
uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_Multicast(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	uintptr_t retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* currentDelegate = reinterpret_cast<OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*>(delegatesToInvoke[i]);
		typedef uintptr_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___out_bytes0, ___out_size1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenInst(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	NullCheck(___out_bytes0);
	typedef uintptr_t (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___out_bytes0, ___out_size1, method);
}
uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenStatic(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	typedef uintptr_t (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___out_bytes0, ___out_size1, method);
}
uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenStaticInvoker(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< uintptr_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___out_bytes0, ___out_size1);
}
uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_ClosedStaticInvoker(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< uintptr_t, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___out_bytes0, ___out_size1);
}
IL2CPP_EXTERN_C  uintptr_t DelegatePInvokeWrapper_OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5 (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method)
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc)(uint8_t*, uintptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___out_bytes0' to native representation
	uint8_t* ____out_bytes0_marshaled = NULL;
	if (___out_bytes0 != NULL)
	{
		____out_bytes0_marshaled = reinterpret_cast<uint8_t*>((___out_bytes0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	uintptr_t returnValue = il2cppPInvokeFunc(____out_bytes0_marshaled, ___out_size1);

	return returnValue;
}
// System.Void Google.Impl.BaseObject/OutStringMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_Multicast;
}
// System.UIntPtr Google.Impl.BaseObject/OutStringMethod::Invoke(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	typedef uintptr_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___out_bytes0, ___out_size1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Google.Impl.BaseObject/OutStringMethod::BeginInvoke(System.Byte[],System.UIntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OutStringMethod_BeginInvoke_m608A23F502DE02D618CCA39D6D865C7D18CDFDF7 (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___out_bytes0;
	__d_args[1] = Box(UIntPtr_t_il2cpp_TypeInfo_var, &___out_size1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.UIntPtr Google.Impl.BaseObject/OutStringMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t OutStringMethod_EndInvoke_m1559888E67A55BCBDCFA90C6873D68C33E8AFE2A (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uintptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Impl.GoogleSignInImpl::.ctor(Google.GoogleSignInConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl__ctor_m28DE8315356ABCB9AB9B96F3D635BF83278D3A3A (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* ___configuration0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	{
		// : base(GoogleSignIn_Create(GetPlayerActivity())) {
		intptr_t L_0;
		L_0 = GoogleSignInImpl_GetPlayerActivity_m169EC762F973B91F66994B8CAED13BE2C051DC88(NULL);
		intptr_t L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_Create_m1070B04B22E22F00DC950000AC3A713D25F7E56D(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		BaseObject__ctor_mDB4E06DEC48DC3204680E87119B46480BCECCB7A(__this, L_1, NULL);
		// if (configuration != null) {
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_2 = ___configuration0;
		if (!L_2)
		{
			goto IL_0075;
		}
	}
	{
		// List<string> scopes = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_3, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_3;
		// if (configuration.AdditionalScopes != null) {
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_4 = ___configuration0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___AdditionalScopes_9;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// scopes.AddRange(configuration.AdditionalScopes);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = V_0;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_7 = ___configuration0;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->___AdditionalScopes_9;
		NullCheck(L_6);
		List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E(L_6, L_8, List_1_AddRange_m157DD7AD4D25423F82A21E533BC4686C83770D5E_RuntimeMethod_var);
	}

IL_002d:
	{
		// GoogleSignIn_Configure(SelfPtr(), configuration.UseGameSignIn,
		//              configuration.WebClientId,
		//              configuration.RequestAuthCode,
		//              configuration.ForceTokenRefresh,
		//              configuration.RequestEmail,
		//              configuration.RequestIdToken,
		//              configuration.HidePopups,
		//              scopes.ToArray(),
		//              scopes.Count,
		//              configuration.AccountName);
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_9;
		L_9 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_10 = ___configuration0;
		NullCheck(L_10);
		bool L_11 = L_10->___UseGameSignIn_0;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_12 = ___configuration0;
		NullCheck(L_12);
		String_t* L_13 = L_12->___WebClientId_1;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_14 = ___configuration0;
		NullCheck(L_14);
		bool L_15 = L_14->___RequestAuthCode_2;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_16 = ___configuration0;
		NullCheck(L_16);
		bool L_17 = L_16->___ForceTokenRefresh_3;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_18 = ___configuration0;
		NullCheck(L_18);
		bool L_19 = L_18->___RequestEmail_4;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_20 = ___configuration0;
		NullCheck(L_20);
		bool L_21 = L_20->___RequestIdToken_5;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_22 = ___configuration0;
		NullCheck(L_22);
		bool L_23 = L_22->___HidePopups_7;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_24 = V_0;
		NullCheck(L_24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25;
		L_25 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_24, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_26, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_28 = ___configuration0;
		NullCheck(L_28);
		String_t* L_29 = L_28->___AccountName_8;
		bool L_30;
		L_30 = GoogleSignInImpl_GoogleSignIn_Configure_mEFC2326B95CCED1ED88AADB020B7E16AF729097D(L_9, L_11, L_13, L_15, L_17, L_19, L_21, L_23, L_25, L_27, L_29, NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void Google.Impl.GoogleSignInImpl::EnableDebugLogging(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_EnableDebugLogging_m527A8F7AAE6B947A8EC6DC25E23E661D2B6E117F (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, bool ___flag0, const RuntimeMethod* method) 
{
	{
		// GoogleSignIn_EnableDebugLogging(SelfPtr(), flag);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		bool L_1 = ___flag0;
		GoogleSignInImpl_GoogleSignIn_EnableDebugLogging_mCAB955A0724DA3B4169F22269035F8364F969F54(L_0, L_1, NULL);
		// }
		return;
	}
}
// Google.Future`1<Google.GoogleSignInUser> Google.Impl.GoogleSignInImpl::SignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* GoogleSignInImpl_SignIn_m859A15256A86DF1873867F49B79B69163EAB9BE8 (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr nativeFuture = GoogleSignIn_SignIn(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		intptr_t L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_SignIn_mBE0D3B456393739737AFF12EC2637E30C4CC2C93(L_0, NULL);
		// return new Future<GoogleSignInUser>(new NativeFuture(nativeFuture));
		NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* L_2 = (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F*)il2cpp_codegen_object_new(NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NativeFuture__ctor_mBCE15D32B70A331E0A78785E89D695988FE027DC(L_2, L_1, NULL);
		Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* L_3 = (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B*)il2cpp_codegen_object_new(Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6(L_3, L_2, Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6_RuntimeMethod_var);
		return L_3;
	}
}
// Google.Future`1<Google.GoogleSignInUser> Google.Impl.GoogleSignInImpl::SignInSilently()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* GoogleSignInImpl_SignInSilently_mE92B6CCBDA838381A21703691FB9C5F461A477F8 (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr nativeFuture = GoogleSignIn_SignInSilently(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		intptr_t L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_SignInSilently_m3C681D67798FB33AE3CEB8698E38D19D31554257(L_0, NULL);
		// return new Future<GoogleSignInUser>(new NativeFuture(nativeFuture));
		NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* L_2 = (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F*)il2cpp_codegen_object_new(NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NativeFuture__ctor_mBCE15D32B70A331E0A78785E89D695988FE027DC(L_2, L_1, NULL);
		Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B* L_3 = (Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B*)il2cpp_codegen_object_new(Future_1_tFEEFD979DB77DC86FB4B0E5DB8777D7B1251603B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6(L_3, L_2, Future_1__ctor_m0C753DE706871E42916A5D1BF9AB1DF7A563DAE6_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Google.Impl.GoogleSignInImpl::SignOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_SignOut_m88FED0CCBAA20F403B838BAA20FBD5FC5CC2416B (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, const RuntimeMethod* method) 
{
	{
		// GoogleSignIn_Signout(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		GoogleSignInImpl_GoogleSignIn_Signout_m4EEDBDF8AE74E08B8B4134A214B2DD095927123A(L_0, NULL);
		// }
		return;
	}
}
// System.Void Google.Impl.GoogleSignInImpl::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_Disconnect_m136F2268A549DA9A13D7BBB198BE4B286380ECA1 (GoogleSignInImpl_t39FF1F7B86D03EA26FD263D550A7030703EFA349* __this, const RuntimeMethod* method) 
{
	{
		// GoogleSignIn_Disconnect(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		GoogleSignInImpl_GoogleSignIn_Disconnect_m63E4851DAF91832244BA195AEA854E038824C6FA(L_0, NULL);
		// }
		return;
	}
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_Create(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_Create_m1070B04B22E22F00DC950000AC3A713D25F7E56D (intptr_t ___data0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Create", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Create)(___data0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___data0);
	#endif

	return returnValue;
}
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_EnableDebugLogging(System.Runtime.InteropServices.HandleRef,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_EnableDebugLogging_mCAB955A0724DA3B4169F22269035F8364F969F54 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, bool ___flag1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_EnableDebugLogging", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	reinterpret_cast<PInvokeFunc>(GoogleSignIn_EnableDebugLogging)(____self0_marshaled, static_cast<int32_t>(___flag1));
	#else
	il2cppPInvokeFunc(____self0_marshaled, static_cast<int32_t>(___flag1));
	#endif

}
// System.Boolean Google.Impl.GoogleSignInImpl::GoogleSignIn_Configure(System.Runtime.InteropServices.HandleRef,System.Boolean,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String[],System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GoogleSignInImpl_GoogleSignIn_Configure_mEFC2326B95CCED1ED88AADB020B7E16AF729097D (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, bool ___useGameSignIn1, String_t* ___webClientId2, bool ___requestAuthCode3, bool ___forceTokenRefresh4, bool ___requestEmail5, bool ___requestIdToken6, bool ___hidePopups7, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___additionalScopes8, int32_t ___scopeCount9, String_t* ___accountName10, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t, char*, int32_t, int32_t, int32_t, int32_t, int32_t, char**, int32_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + 4 + sizeof(char*) + 4 + 4 + 4 + 4 + 4 + sizeof(void*) + sizeof(int32_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Configure", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___webClientId2' to native representation
	char* ____webClientId2_marshaled = NULL;
	____webClientId2_marshaled = il2cpp_codegen_marshal_string(___webClientId2);

	// Marshaling of parameter '___additionalScopes8' to native representation
	char** ____additionalScopes8_marshaled = NULL;
	if (___additionalScopes8 != NULL)
	{
		il2cpp_array_size_t ____additionalScopes8_Length = (___additionalScopes8)->max_length;
		____additionalScopes8_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____additionalScopes8_Length + 1);
		(____additionalScopes8_marshaled)[____additionalScopes8_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____additionalScopes8_Length); i++)
		{
			(____additionalScopes8_marshaled)[i] = il2cpp_codegen_marshal_string((___additionalScopes8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____additionalScopes8_marshaled = NULL;
	}

	// Marshaling of parameter '___accountName10' to native representation
	char* ____accountName10_marshaled = NULL;
	____accountName10_marshaled = il2cpp_codegen_marshal_string(___accountName10);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Configure)(____self0_marshaled, static_cast<int32_t>(___useGameSignIn1), ____webClientId2_marshaled, static_cast<int32_t>(___requestAuthCode3), static_cast<int32_t>(___forceTokenRefresh4), static_cast<int32_t>(___requestEmail5), static_cast<int32_t>(___requestIdToken6), static_cast<int32_t>(___hidePopups7), ____additionalScopes8_marshaled, ___scopeCount9, ____accountName10_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____self0_marshaled, static_cast<int32_t>(___useGameSignIn1), ____webClientId2_marshaled, static_cast<int32_t>(___requestAuthCode3), static_cast<int32_t>(___forceTokenRefresh4), static_cast<int32_t>(___requestEmail5), static_cast<int32_t>(___requestIdToken6), static_cast<int32_t>(___hidePopups7), ____additionalScopes8_marshaled, ___scopeCount9, ____accountName10_marshaled);
	#endif

	// Marshaling cleanup of parameter '___webClientId2' native representation
	il2cpp_codegen_marshal_free(____webClientId2_marshaled);
	____webClientId2_marshaled = NULL;

	// Marshaling cleanup of parameter '___additionalScopes8' native representation
	if (____additionalScopes8_marshaled != NULL)
	{
		const il2cpp_array_size_t ____additionalScopes8_marshaled_CleanupLoopCount = (___additionalScopes8 != NULL) ? (___additionalScopes8)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____additionalScopes8_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____additionalScopes8_marshaled)[i]);
			(____additionalScopes8_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____additionalScopes8_marshaled);
		____additionalScopes8_marshaled = NULL;
	}

	// Marshaling cleanup of parameter '___accountName10' native representation
	il2cpp_codegen_marshal_free(____accountName10_marshaled);
	____accountName10_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_SignIn(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_SignIn_mBE0D3B456393739737AFF12EC2637E30C4CC2C93 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_SignIn", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_SignIn)(____self0_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_SignInSilently(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_SignInSilently_m3C681D67798FB33AE3CEB8698E38D19D31554257 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_SignInSilently", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_SignInSilently)(____self0_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled);
	#endif

	return returnValue;
}
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_Signout(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_Signout_m4EEDBDF8AE74E08B8B4134A214B2DD095927123A (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Signout", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	reinterpret_cast<PInvokeFunc>(GoogleSignIn_Signout)(____self0_marshaled);
	#else
	il2cppPInvokeFunc(____self0_marshaled);
	#endif

}
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_Disconnect(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_Disconnect_m63E4851DAF91832244BA195AEA854E038824C6FA (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Disconnect", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	reinterpret_cast<PInvokeFunc>(GoogleSignIn_Disconnect)(____self0_marshaled);
	#else
	il2cppPInvokeFunc(____self0_marshaled);
	#endif

}
// System.Void Google.Impl.GoogleSignInImpl::GoogleSignIn_DisposeFuture(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleSignInImpl_GoogleSignIn_DisposeFuture_m3199178F1C8C190E0296C35B1EE9C7553649E4B6 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_DisposeFuture", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	reinterpret_cast<PInvokeFunc>(GoogleSignIn_DisposeFuture)(____self0_marshaled);
	#else
	il2cppPInvokeFunc(____self0_marshaled);
	#endif

}
// System.Boolean Google.Impl.GoogleSignInImpl::GoogleSignIn_Pending(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GoogleSignInImpl_GoogleSignIn_Pending_mC9C5B9201B8DFFF7228D660613FC52AE8E754D42 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Pending", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Pending)(____self0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____self0_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_Result(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GoogleSignIn_Result_m239A56BE0FBB24DB7EBBEC5F7F8FF3B895B3A3E1 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Result", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Result)(____self0_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled);
	#endif

	return returnValue;
}
// System.Int32 Google.Impl.GoogleSignInImpl::GoogleSignIn_Status(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GoogleSignInImpl_GoogleSignIn_Status_mC38EA2A49EF04B48137FBE4EE79BFB3C0A907C60 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_Status", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_Status)(____self0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____self0_marshaled);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetServerAuthCode(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetServerAuthCode_m00E7C3D9FDE9B16B3D6F71B59784EDE946CF35E1 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetServerAuthCode", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetServerAuthCode)(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetDisplayName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetDisplayName_m34F06EDAC247EFE16EE7D7003D60D269EDC7CD09 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetDisplayName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetDisplayName)(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetEmail(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetEmail_m1277C16AB66AC5DC74B30EC4F5AFA102E362C04A (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetEmail", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetEmail)(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetFamilyName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetFamilyName_m02592F285D3EE7D29159E76131BF9F5DBDD89012 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetFamilyName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetFamilyName)(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetGivenName(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetGivenName_mEB8F331BE98ECD83858295890C2949B65C366B61 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetGivenName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetGivenName)(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetIdToken(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetIdToken_mB26E5AC987D24266CB0C9BAFE9D595E1ACC2BA02 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetIdToken", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetIdToken)(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetImageUrl(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetImageUrl_mB63006D0ED8646930DC70C66AC3406785DC335D7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetImageUrl", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetImageUrl)(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#endif

	return returnValue;
}
// System.UIntPtr Google.Impl.GoogleSignInImpl::GoogleSignIn_GetUserId(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t GoogleSignInImpl_GoogleSignIn_GetUserId_mC964CA22A27A88616641F81A58ADABF103D55C46 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___self0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, uintptr_t ___len2, const RuntimeMethod* method) 
{
	typedef uintptr_t (DEFAULT_CALL *PInvokeFunc) (void*, uint8_t*, uintptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_native_googlesignin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(uintptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("native-googlesignin"), "GoogleSignIn_GetUserId", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___self0' to native representation
	void* ____self0_marshaled = NULL;
	____self0_marshaled = (void*)___self0.____handle_1;

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_native_googlesignin_INTERNAL
	uintptr_t returnValue = reinterpret_cast<PInvokeFunc>(GoogleSignIn_GetUserId)(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#else
	uintptr_t returnValue = il2cppPInvokeFunc(____self0_marshaled, ____bytes1_marshaled, ___len2);
	#endif

	return returnValue;
}
// System.IntPtr Google.Impl.GoogleSignInImpl::GetPlayerActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GoogleSignInImpl_GetPlayerActivity_m169EC762F973B91F66994B8CAED13BE2C051DC88 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.AndroidJavaClass jc = new UnityEngine.AndroidJavaClass(
		//   "com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		// return jc.GetStatic<UnityEngine.AndroidJavaObject>("currentActivity")
		//          .GetRawObject();
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_0, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		NullCheck(L_1);
		intptr_t L_2;
		L_2 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_1, NULL);
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
// System.Void Google.Impl.NativeFuture::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFuture__ctor_mBCE15D32B70A331E0A78785E89D695988FE027DC (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, intptr_t ___ptr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal NativeFuture(IntPtr ptr) : base(ptr) {
		intptr_t L_0 = ___ptr0;
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		BaseObject__ctor_mDB4E06DEC48DC3204680E87119B46480BCECCB7A(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Google.Impl.NativeFuture::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeFuture_Dispose_m86BBFC01575F8083B39FAEFDD779267FE212C669 (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_DisposeFuture(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		GoogleSignInImpl_GoogleSignIn_DisposeFuture_m3199178F1C8C190E0296C35B1EE9C7553649E4B6(L_0, NULL);
		// base.Dispose();
		BaseObject_Dispose_m554F3F996634EC0E8C5C0D2212659D5FDECC582F(__this, NULL);
		// }
		return;
	}
}
// System.Boolean Google.Impl.NativeFuture::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeFuture_get_Pending_mF70898B348D8019990176CA0B7D46936E7EDA741 (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, const RuntimeMethod* method) 
{
	{
		// return GoogleSignInImpl.GoogleSignIn_Pending(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		bool L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_Pending_mC9C5B9201B8DFFF7228D660613FC52AE8E754D42(L_0, NULL);
		return L_1;
	}
}
// Google.GoogleSignInUser Google.Impl.NativeFuture::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* NativeFuture_get_Result_m9A5DF2B826B14BC6D847C0CB12ACC2F5549B1A2A (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__0_mAB7700145D3F1F675831CDCE9BEACC834D4BF96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__1_m370A13175EEDCF49601E661321C8DD88FF6A1946_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__2_m8D0E1DF9DE52B683EF57BD1A25567E701CD782B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__3_m49F63C5CB22AC3D69146172A0DF82EAAC45ACCD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__4_mFABC6CF05697AC3A309FDF438B8AF5D6CED62147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__5_mC2AB488643100B8EF8939922F768AB85AD2D284C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__6_m9DDEF005B688BBCB60877AC369DD209AA023D5B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__7_mD0783088AA1B5B1F825807F640392ABFC3A3E5CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* V_1 = NULL;
	GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		// IntPtr ptr = GoogleSignInImpl.GoogleSignIn_Result(SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		intptr_t L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_Result_m239A56BE0FBB24DB7EBBEC5F7F8FF3B895B3A3E1(L_0, NULL);
		V_0 = L_1;
		// if (ptr != IntPtr.Zero) {
		intptr_t L_2 = V_0;
		bool L_3;
		L_3 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_2, (0), NULL);
		if (!L_3)
		{
			goto IL_00ff;
		}
	}
	{
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_4 = (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		U3CU3Ec__DisplayClass5_0__ctor_m7497FAB21C83A976EB1558C8B99D253FA6DDF86A(L_4, NULL);
		V_1 = L_4;
		// GoogleSignInUser user = new GoogleSignInUser();
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_5 = (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA*)il2cpp_codegen_object_new(GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		GoogleSignInUser__ctor_m0271D1B065D5BF40672070447A0D61EEDB88FF91(L_5, NULL);
		V_2 = L_5;
		// HandleRef userPtr = new HandleRef(user, ptr);
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_6 = V_1;
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_7 = V_2;
		intptr_t L_8 = V_0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_9;
		memset((&L_9), 0, sizeof(L_9));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_9), L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->___userPtr_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_6->___userPtr_0))->____wrapper_0), (void*)NULL);
		// user.DisplayName = OutParamsToString((out_string, out_size) =>
		//         GoogleSignInImpl.GoogleSignIn_GetDisplayName(userPtr,
		//                                                      out_string,
		//                                                      out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_10 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_11 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_12 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__0_mAB7700145D3F1F675831CDCE9BEACC834D4BF96E_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		String_t* L_13;
		L_13 = BaseObject_OutParamsToString_mE19711AC5572545ECA45524521CD9A404CF172CA(L_12, NULL);
		NullCheck(L_10);
		GoogleSignInUser_set_DisplayName_m33092BFF9954A242BCE80DF4A243C20FD583315B_inline(L_10, L_13, NULL);
		// user.Email = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetEmail(userPtr, out_string,
		//                                            out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_14 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_15 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_16 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__1_m370A13175EEDCF49601E661321C8DD88FF6A1946_RuntimeMethod_var), NULL);
		String_t* L_17;
		L_17 = BaseObject_OutParamsToString_mE19711AC5572545ECA45524521CD9A404CF172CA(L_16, NULL);
		NullCheck(L_14);
		GoogleSignInUser_set_Email_m2036BD483DA25F84B60FCCEF63BBC20A5F1D5F9C_inline(L_14, L_17, NULL);
		// user.FamilyName = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetFamilyName(userPtr, out_string,
		//                                                 out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_18 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_19 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_20 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_20, L_19, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__2_m8D0E1DF9DE52B683EF57BD1A25567E701CD782B5_RuntimeMethod_var), NULL);
		String_t* L_21;
		L_21 = BaseObject_OutParamsToString_mE19711AC5572545ECA45524521CD9A404CF172CA(L_20, NULL);
		NullCheck(L_18);
		GoogleSignInUser_set_FamilyName_m23A309A857743C07F1CA856EA0ADCFB3B122A5A9_inline(L_18, L_21, NULL);
		// user.GivenName = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetGivenName(userPtr, out_string,
		//                                                out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_22 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_23 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_24 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_24, L_23, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__3_m49F63C5CB22AC3D69146172A0DF82EAAC45ACCD7_RuntimeMethod_var), NULL);
		String_t* L_25;
		L_25 = BaseObject_OutParamsToString_mE19711AC5572545ECA45524521CD9A404CF172CA(L_24, NULL);
		NullCheck(L_22);
		GoogleSignInUser_set_GivenName_m22A6A6824200A97844AF62E12A29D32EC8215E7D_inline(L_22, L_25, NULL);
		// user.IdToken = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetIdToken(userPtr, out_string,
		//                                              out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_26 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_27 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_28 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_28, L_27, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__4_mFABC6CF05697AC3A309FDF438B8AF5D6CED62147_RuntimeMethod_var), NULL);
		String_t* L_29;
		L_29 = BaseObject_OutParamsToString_mE19711AC5572545ECA45524521CD9A404CF172CA(L_28, NULL);
		NullCheck(L_26);
		GoogleSignInUser_set_IdToken_m9F8F42353CFF4647151698F50CD241BF4E405EC3_inline(L_26, L_29, NULL);
		// user.AuthCode = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetServerAuthCode(userPtr, out_string,
		//                                                     out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_30 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_31 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_32 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_32, L_31, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__5_mC2AB488643100B8EF8939922F768AB85AD2D284C_RuntimeMethod_var), NULL);
		String_t* L_33;
		L_33 = BaseObject_OutParamsToString_mE19711AC5572545ECA45524521CD9A404CF172CA(L_32, NULL);
		NullCheck(L_30);
		GoogleSignInUser_set_AuthCode_mFD2ACD2178A1E33BA97EE4DA65503CAFFAF595F7_inline(L_30, L_33, NULL);
		// string url = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetImageUrl(userPtr, out_string,
		//                                               out_size));
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_34 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_35 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_35, L_34, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__6_m9DDEF005B688BBCB60877AC369DD209AA023D5B5_RuntimeMethod_var), NULL);
		String_t* L_36;
		L_36 = BaseObject_OutParamsToString_mE19711AC5572545ECA45524521CD9A404CF172CA(L_35, NULL);
		V_3 = L_36;
		// if (url.Length > 0) {
		String_t* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_37, NULL);
		if ((((int32_t)L_38) <= ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		// user.ImageUrl = new System.Uri(url);
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_39 = V_2;
		String_t* L_40 = V_3;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_41 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_41, L_40, NULL);
		NullCheck(L_39);
		GoogleSignInUser_set_ImageUrl_m757A1FC5F8E85B18081AD882F73F317DF6DEFE45_inline(L_39, L_41, NULL);
	}

IL_00e6:
	{
		// user.UserId = OutParamsToString((out_string, out_size) =>
		//     GoogleSignInImpl.GoogleSignIn_GetUserId(userPtr, out_string,
		//                                             out_size));
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_42 = V_2;
		U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* L_43 = V_1;
		OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* L_44 = (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5*)il2cpp_codegen_object_new(OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		OutStringMethod__ctor_m93CB7F9A3D356B00AE9305EF2660D1584D76725D(L_44, L_43, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__7_mD0783088AA1B5B1F825807F640392ABFC3A3E5CA_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(BaseObject_tAAD9B5F3B9535C3F400B35F8B9C1E15E67A67D6C_il2cpp_TypeInfo_var);
		String_t* L_45;
		L_45 = BaseObject_OutParamsToString_mE19711AC5572545ECA45524521CD9A404CF172CA(L_44, NULL);
		NullCheck(L_42);
		GoogleSignInUser_set_UserId_m6311A410F1636E122903BF4F8A50E0421DF20270_inline(L_42, L_45, NULL);
		// return user;
		GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* L_46 = V_2;
		return L_46;
	}

IL_00ff:
	{
		// return null;
		return (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA*)NULL;
	}
}
// Google.GoogleSignInStatusCode Google.Impl.NativeFuture::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeFuture_get_Status_mC727AD36BDCDD64E381FA4991E58694ABA9561F4 (NativeFuture_t1ED3CC41C0E80028A913E88E861BCF1CE062309F* __this, const RuntimeMethod* method) 
{
	{
		// return (GoogleSignInStatusCode)GoogleSignInImpl.GoogleSignIn_Status(
		//   SelfPtr());
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0;
		L_0 = BaseObject_SelfPtr_mDBED15363454DA2D988075EB23C4BD15B8ED49D9(__this, NULL);
		int32_t L_1;
		L_1 = GoogleSignInImpl_GoogleSignIn_Status_mC38EA2A49EF04B48137FBE4EE79BFB3C0A907C60(L_0, NULL);
		return (int32_t)(L_1);
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
// System.Void Google.Impl.NativeFuture/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m7497FAB21C83A976EB1558C8B99D253FA6DDF86A (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__0(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__0_mAB7700145D3F1F675831CDCE9BEACC834D4BF96E (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetDisplayName(userPtr,
		//                                              out_string,
		//                                              out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetDisplayName_m34F06EDAC247EFE16EE7D7003D60D269EDC7CD09(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__1(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__1_m370A13175EEDCF49601E661321C8DD88FF6A1946 (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetEmail(userPtr, out_string,
		//                                        out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetEmail_m1277C16AB66AC5DC74B30EC4F5AFA102E362C04A(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__2(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__2_m8D0E1DF9DE52B683EF57BD1A25567E701CD782B5 (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetFamilyName(userPtr, out_string,
		//                                             out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetFamilyName_m02592F285D3EE7D29159E76131BF9F5DBDD89012(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__3(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__3_m49F63C5CB22AC3D69146172A0DF82EAAC45ACCD7 (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetGivenName(userPtr, out_string,
		//                                            out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetGivenName_mEB8F331BE98ECD83858295890C2949B65C366B61(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__4(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__4_mFABC6CF05697AC3A309FDF438B8AF5D6CED62147 (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetIdToken(userPtr, out_string,
		//                                          out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetIdToken_mB26E5AC987D24266CB0C9BAFE9D595E1ACC2BA02(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__5(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__5_mC2AB488643100B8EF8939922F768AB85AD2D284C (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetServerAuthCode(userPtr, out_string,
		//                                                 out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetServerAuthCode_m00E7C3D9FDE9B16B3D6F71B59784EDE946CF35E1(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__6(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__6_m9DDEF005B688BBCB60877AC369DD209AA023D5B5 (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetImageUrl(userPtr, out_string,
		//                                           out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetImageUrl_mB63006D0ED8646930DC70C66AC3406785DC335D7(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.UIntPtr Google.Impl.NativeFuture/<>c__DisplayClass5_0::<get_Result>b__7(System.Byte[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t U3CU3Ec__DisplayClass5_0_U3Cget_ResultU3Eb__7_mD0783088AA1B5B1F825807F640392ABFC3A3E5CA (U3CU3Ec__DisplayClass5_0_tAC4E291D6286B6F85E225E29FB47C2A6E513BE08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_string0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	{
		// GoogleSignInImpl.GoogleSignIn_GetUserId(userPtr, out_string,
		//                                         out_size));
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___userPtr_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___out_string0;
		uintptr_t L_2 = ___out_size1;
		uintptr_t L_3;
		L_3 = GoogleSignInImpl_GoogleSignIn_GetUserId_mC964CA22A27A88616641F81A58ADABF103D55C46(L_0, L_1, L_2, NULL);
		return L_3;
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
// Google.Impl.SignInHelperObject Google.Impl.SignInHelperObject::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* SignInHelperObject_get_Instance_m5DC1955B15AE32848E5EDC7F6DDE456DC3D0F3F1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_m8DAAB2B6376C79FA30A3F2BCF3DB4DB73BBA61BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAFAF1BA7E22CC639E69C44B0308455A786E3D91);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isPlaying) {
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// GameObject obj = new GameObject("GoogleSignInHelperObject");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, _stringLiteralDAFAF1BA7E22CC639E69C44B0308455A786E3D91, NULL);
		// DontDestroyOnLoad(obj);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_2, NULL);
		// instance = obj.AddComponent<SignInHelperObject>();
		NullCheck(L_2);
		SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* L_3;
		L_3 = GameObject_AddComponent_TisSignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_m8DAAB2B6376C79FA30A3F2BCF3DB4DB73BBA61BF(L_2, GameObject_AddComponent_TisSignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_m8DAAB2B6376C79FA30A3F2BCF3DB4DB73BBA61BF_RuntimeMethod_var);
		((SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var))->___instance_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var))->___instance_4), (void*)L_3);
		goto IL_002d;
	}

IL_0023:
	{
		// instance = new SignInHelperObject();
		SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* L_4 = (SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B*)il2cpp_codegen_object_new(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SignInHelperObject__ctor_m049CB998CA9E1DA5929BE9CFCEA8C33EE915CDA3(L_4, NULL);
		((SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var))->___instance_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var))->___instance_4), (void*)L_4);
	}

IL_002d:
	{
		// return instance;
		SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* L_5 = ((SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B_il2cpp_TypeInfo_var))->___instance_4;
		return L_5;
	}
}
// System.Void Google.Impl.SignInHelperObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInHelperObject__ctor_m049CB998CA9E1DA5929BE9CFCEA8C33EE915CDA3 (SignInHelperObject_t52D2626E21DAFA422F9A13C90D29B5ECBC31A35B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* GoogleSignIn_get_Configuration_m4E2239E342D8DE7555911527A1919538C5EAE9A9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return theConfiguration;
		GoogleSignInConfiguration_t110B6AB193E13CD17D291DE9488F52C72B43D5C8* L_0 = ((GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_StaticFields*)il2cpp_codegen_static_fields_for(GoogleSignIn_t037713008A618281BF66E9FFA5445171A2653EDA_il2cpp_TypeInfo_var))->___theConfiguration_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GoogleSignInUser_get_IdToken_m58382F225E3065502A66AFA23F70053153DEA62A_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CIdTokenU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignInException_set_Status_mC05194B06E64770DBD32F23D17A74DF3BE17103A_inline (SignInException_tDFC805105F3CDF67D0A6CEB1AAC53D44B4BDF29A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		int32_t L_0 = ___value0;
		__this->___U3CStatusU3Ek__BackingField_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uintptr_t OutStringMethod_Invoke_m909527ED2EAEB8800EAC42F9C70EAD590C3F977C_inline (OutStringMethod_t0B97CBEE878FDF4DD25AA5AFA9478B378424ECC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___out_bytes0, uintptr_t ___out_size1, const RuntimeMethod* method) 
{
	typedef uintptr_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uintptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___out_bytes0, ___out_size1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_DisplayName_m33092BFF9954A242BCE80DF4A243C20FD583315B_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CDisplayNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_Email_m2036BD483DA25F84B60FCCEF63BBC20A5F1D5F9C_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CEmailU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEmailU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_FamilyName_m23A309A857743C07F1CA856EA0ADCFB3B122A5A9_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CFamilyNameU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFamilyNameU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_GivenName_m22A6A6824200A97844AF62E12A29D32EC8215E7D_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CGivenNameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGivenNameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_IdToken_m9F8F42353CFF4647151698F50CD241BF4E405EC3_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CIdTokenU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdTokenU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_AuthCode_mFD2ACD2178A1E33BA97EE4DA65503CAFFAF595F7_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CAuthCodeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthCodeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_ImageUrl_m757A1FC5F8E85B18081AD882F73F317DF6DEFE45_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___value0;
		__this->___U3CImageUrlU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CImageUrlU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GoogleSignInUser_set_UserId_m6311A410F1636E122903BF4F8A50E0421DF20270_inline (GoogleSignInUser_t8464B366331D4FFEBB10A3AF7E102CB0B4FE34EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set;
		String_t* L_0 = ___value0;
		__this->___U3CUserIdU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserIdU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_0 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)__this->____task_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
