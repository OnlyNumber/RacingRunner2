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

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int32Enum>>
struct Action_1_tC3BD22662CBF7BCA7CF101E25DD9C3BC0C8058B4;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>
struct Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot>
struct IEnumerable_1_tBC9C31DD44D05A2C774F76CC1C6C912FB9541D70;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<Firebase.Database.DataSnapshot>
struct List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886;
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>
struct Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50;
// System.Threading.Tasks.Task`1<Firebase.DependencyStatus>
struct Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF;
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B;
// System.Threading.Tasks.Task`1<System.Int32Enum>
struct Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// Firebase.Database.DataSnapshot[]
struct DataSnapshotU5BU5D_tE185BDFC49DD4A57C58ED28C79FEA5A512F916CF;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Firebase.Database.DataSnapshot
struct DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A;
// Firebase.Database.DatabaseReference
struct DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25;
// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF;
// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960;
// FirebaseDatabaseController
struct FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641;
// Firebase.FirebaseException
struct FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED;
// Firebase.Auth.FirebaseUser
struct FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// Firebase.Database.Internal.InternalChildListener
struct InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569;
// Firebase.Database.InternalDataSnapshot
struct InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D;
// Firebase.Database.InternalDatabaseReference
struct InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1;
// Firebase.Database.InternalFirebaseDatabase
struct InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F;
// Firebase.Database.InternalQuery
struct InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056;
// Firebase.Database.Internal.InternalValueListener
struct InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// LogInScript
struct LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// Firebase.Database.Query
struct Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// RegistrationScript
struct RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// StaticFields
struct StaticFields_t0BD0398E8BED5361BE9022B256717F9EEA744DE5;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UserData
struct UserData_tDFEC70DF1A749DA400CDBE27B7E6DD2E480376AA;
// Firebase.Auth.UserProfile
struct UserProfile_t6D157B509640316F20D5DDD5A2BEA9FB952A269B;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD;
// Firebase.Database.DataSnapshot/DataSnapshotList
struct DataSnapshotList_t507B53E9191BB3AF6C5884F76D37DDE0FA99B5C7;
// FirebaseDatabaseController/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t33474489BD4664254EEBAE372243ADB8FD062C5B;
// FirebaseDatabaseController/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t33FA1AB0DAB3F4A722A0B180553027172963CB44;
// FirebaseDatabaseController/<LoadAllUserByScore>d__15
struct U3CLoadAllUserByScoreU3Ed__15_tB9686D517FDF8C10D14EF4E31744F842BC5B8B93;
// FirebaseDatabaseController/<LoadData>d__16
struct U3CLoadDataU3Ed__16_t57FBF8327E5B175B0B92B54D8BDC2360765B4F52;
// LogInScript/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t1BC85D1DA471051C1D408BCD9BEF8036C206A408;
// LogInScript/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t05D729EA93F5BDDB0ED11D765FB9C05FA7B2018E;
// LogInScript/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t8DB7FF6F60F9CD9286B6E4AC23836F61EB37B3BE;
// LogInScript/<CheckAndFixDependenciesAsync>d__9
struct U3CCheckAndFixDependenciesAsyncU3Ed__9_t374CE83A40405CFAF81FBC16D9DBDA1358021471;
// LogInScript/<CheckForAutoLogin>d__10
struct U3CCheckForAutoLoginU3Ed__10_t2CB0A40CA04F3AEDB0D8B0DFD8636545E1D216F5;
// LogInScript/<Login>d__15
struct U3CLoginU3Ed__15_t7F0654C5FD47F9E0DC07696406C2AAB5156961ED;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// RegistrationScript/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t1A1AB8B17F5DE1FCDC09C7919D8A30CE29072813;
// RegistrationScript/<>c__DisplayClass14_1
struct U3CU3Ec__DisplayClass14_1_t6698BF633C9C845416E0878DA65F27200F3F4B5F;
// RegistrationScript/<Register>d__14
struct U3CRegisterU3Ed__14_t0423E2CEB98AF02C4B09054906652E84A2EB4C31;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataHolder_tB9ABE74E9D88472F78B64CD0CFF9083CE2820DFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tBC9C31DD44D05A2C774F76CC1C6C912FB9541D70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t89D6D9FAD8F93015339F011596FA51B8F53D3248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCheckAndFixDependenciesAsyncU3Ed__9_t374CE83A40405CFAF81FBC16D9DBDA1358021471_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCheckForAutoLoginU3Ed__10_t2CB0A40CA04F3AEDB0D8B0DFD8636545E1D216F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadAllUserByScoreU3Ed__15_tB9686D517FDF8C10D14EF4E31744F842BC5B8B93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadDataU3Ed__16_t57FBF8327E5B175B0B92B54D8BDC2360765B4F52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoginU3Ed__15_t7F0654C5FD47F9E0DC07696406C2AAB5156961ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRegisterU3Ed__14_t0423E2CEB98AF02C4B09054906652E84A2EB4C31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_t1BC85D1DA471051C1D408BCD9BEF8036C206A408_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_t1A1AB8B17F5DE1FCDC09C7919D8A30CE29072813_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_1_t6698BF633C9C845416E0878DA65F27200F3F4B5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass15_0_t05D729EA93F5BDDB0ED11D765FB9C05FA7B2018E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass15_0_t33474489BD4664254EEBAE372243ADB8FD062C5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass16_0_t33FA1AB0DAB3F4A722A0B180553027172963CB44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t8DB7FF6F60F9CD9286B6E4AC23836F61EB37B3BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserData_tDFEC70DF1A749DA400CDBE27B7E6DD2E480376AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserProfile_t6D157B509640316F20D5DDD5A2BEA9FB952A269B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral066390CE51A5A8AA7B4F56BBDB2CF41EAFF6415B;
IL2CPP_EXTERN_C String_t* _stringLiteral082576EB9F2E2B76D67FA35A3C7E0396F0AD9AAD;
IL2CPP_EXTERN_C String_t* _stringLiteral19DAC2BBD0713CAA8195656E2C9A7DFECCC2F9DC;
IL2CPP_EXTERN_C String_t* _stringLiteral1BD7B954BE5888E20F6B6F03B21FD68AB490D456;
IL2CPP_EXTERN_C String_t* _stringLiteral2180EB6DF1971EA26C571DC7E32E574C970B2E92;
IL2CPP_EXTERN_C String_t* _stringLiteral27F8746362C24CE15D0F5F0972CA224EA8E5153D;
IL2CPP_EXTERN_C String_t* _stringLiteral349F52249E4C8D8AB5D64F7A048F8E19AF6B3180;
IL2CPP_EXTERN_C String_t* _stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79;
IL2CPP_EXTERN_C String_t* _stringLiteral4036CB682368F57A752F1AE948975DAB7499EACE;
IL2CPP_EXTERN_C String_t* _stringLiteral4842CEA7BCF3161C7F9A6B2BD4C2DA22ABA9846F;
IL2CPP_EXTERN_C String_t* _stringLiteral5722E4A135CA536017A9944F51F1E8C26CCAE9B9;
IL2CPP_EXTERN_C String_t* _stringLiteral5C592054C6C435A35F51D996805CA03942ABA180;
IL2CPP_EXTERN_C String_t* _stringLiteral60294D60F29816DC7466D4B0F8C0E7D6D96CAC42;
IL2CPP_EXTERN_C String_t* _stringLiteral649598B307445E90C6B685E1F1CC6F5B25EF58A0;
IL2CPP_EXTERN_C String_t* _stringLiteral698B48DBAE676A78B713CAB03E07077507048E31;
IL2CPP_EXTERN_C String_t* _stringLiteral77B74617F18565C5FFD6A03E2FD341AB6136F5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral78622C01FE15EA71654ECF91AA6E911E2B4BECA1;
IL2CPP_EXTERN_C String_t* _stringLiteral8188AE73D71676AD86B779E278457AF04FF7C498;
IL2CPP_EXTERN_C String_t* _stringLiteral880EDA2B562FE40271A2CCA403F78ADC207404B7;
IL2CPP_EXTERN_C String_t* _stringLiteral95FA4E8C36D021EF760807304F1292B41AC2F220;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteralA541B51720F94BBFE0FD8A517872F5C6E73706D9;
IL2CPP_EXTERN_C String_t* _stringLiteralBDCE1B19873BCE9B690148B4CFAAC8AE4030348B;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9;
IL2CPP_EXTERN_C String_t* _stringLiteralDDB48194C129977EFF1A1B05291484C11D5D1F33;
IL2CPP_EXTERN_C String_t* _stringLiteralE2001D9786B126025B68827DDFDC0823C6A5AA6A;
IL2CPP_EXTERN_C String_t* _stringLiteralE7308DA6A9AD1E8B5F5BD38AF235BEC86C7D663E;
IL2CPP_EXTERN_C String_t* _stringLiteralE796D8428A31C89F4F32CCE284FFAFEF0A50CAED;
IL2CPP_EXTERN_C String_t* _stringLiteralECF72959A3A0E2E2A03DC770A2DD8A0B4C3B1CFF;
IL2CPP_EXTERN_C String_t* _stringLiteralF31B94B5DA465CBFAD84F59BFEF43769EABD7471;
IL2CPP_EXTERN_C String_t* _stringLiteralF95A94BAF1FA3381B5F09B00655DE88AC8FBB24E;
IL2CPP_EXTERN_C String_t* _stringLiteralFED6610311FE85DAA2ACC94C88787B8F372192E5;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEB985D26AF75351E822117FB3B8F2C531BF53EAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Reverse_m2965DA079F8E0D4ACD89655BDD7104E8A2DF1C2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB6067CADF91161BECA8597A16AE8DD4C94068C98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LogInScript_AuthStateChanged_m39FB6557431FDD74BB037893B02725C31B624CD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegistrationScript_U3CAwakeU3Eb__11_0_m267F65901416FE2ED700D49190C295EFDAD09EDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_mAB52D6D57000543C9DD78F0D45BD7B66F819A0DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckAndFixDependenciesAsyncU3Ed__9_System_Collections_IEnumerator_Reset_m64EC2CC3B2B503970AC09FEDA4B3AF957C71C313_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckForAutoLoginU3Ed__10_System_Collections_IEnumerator_Reset_mB7134C59BAAB7FC961088D588B1A066D0D30AAB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAllUserByScoreU3Ed__15_System_Collections_IEnumerator_Reset_mBEAABBEE8C273D4C97E8B2FE330CFFAB853E2F83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadDataU3Ed__16_System_Collections_IEnumerator_Reset_m5501E3A4E390E57E344AE529754FD497FDFA2FB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoginU3Ed__15_System_Collections_IEnumerator_Reset_m1B5C7DF239C8A061A7C4FA086C17B8DA8DF5DE80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRegisterU3Ed__14_System_Collections_IEnumerator_Reset_mF99F08B6398E0E462E3661D9F3B8FFD669046B06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CCheckForAutoLoginU3Eb__0_m0B24389DF92CB97F46675D51EF5BA16766111CF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CRegisterU3Eb__0_m1738480D7812BE66A41D5CD323D88B413F15FD00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_1_U3CRegisterU3Eb__1_mB2474572DE8AF1A83E523938622083D2796E844C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass15_0_U3CLoadAllUserByScoreU3Eb__0_m4E34DB919ACDFB63C56208916591081A8C457DF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass15_0_U3CLoginU3Eb__0_m7E7259905478D9DBDBEB7949BDB1F8AE88B67FB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0_U3CLoadDataU3Eb__0_m1BCF753AB92AEFB1761480A4C2C8FBD41D14DC7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CCheckAndFixDependenciesAsyncU3Eb__0_m40D5D72A3BBAFCC6DECF27D3B5CEC54FA753F71C_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

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

// System.Collections.Generic.List`1<Firebase.Database.DataSnapshot>
struct List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DataSnapshotU5BU5D_tE185BDFC49DD4A57C58ED28C79FEA5A512F916CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DataSnapshotU5BU5D_tE185BDFC49DD4A57C58ED28C79FEA5A512F916CF* ___s_emptyArray_5;
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
struct Il2CppArrayBounds;

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// DataHolder
struct DataHolder_tB9ABE74E9D88472F78B64CD0CFF9083CE2820DFA  : public RuntimeObject
{
};

struct DataHolder_tB9ABE74E9D88472F78B64CD0CFF9083CE2820DFA_StaticFields
{
	// Firebase.Auth.FirebaseUser DataHolder::firebaseUser
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* ___firebaseUser_0;
	// System.Int32 DataHolder::car
	int32_t ___car_1;
};

// Firebase.Database.DataSnapshot
struct DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A  : public RuntimeObject
{
	// Firebase.Database.InternalDataSnapshot Firebase.Database.DataSnapshot::internalSnapshot
	InternalDataSnapshot_t4B57B69537B5BFEC424D4207195BA40F6AE2A79D* ___internalSnapshot_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DataSnapshot::database
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database_1;
	// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::parentSnapshot
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___parentSnapshot_2;
	// Firebase.Database.DataSnapshot/DataSnapshotList Firebase.Database.DataSnapshot::parentList
	DataSnapshotList_t507B53E9191BB3AF6C5884F76D37DDE0FA99B5C7* ___parentList_3;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960  : public RuntimeObject
{
	// Firebase.Database.InternalFirebaseDatabase Firebase.Database.FirebaseDatabase::internalDatabase
	InternalFirebaseDatabase_t375ADD0CA0D457E7F6858480AA98A4FA4A7F106F* ___internalDatabase_2;
	// System.String Firebase.Database.FirebaseDatabase::name
	String_t* ___name_3;
	// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::<App>k__BackingField
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___U3CAppU3Ek__BackingField_4;
};

struct FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase> Firebase.Database.FirebaseDatabase::databases
	Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* ___databases_5;
};

// Firebase.Database.Query
struct Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED  : public RuntimeObject
{
	// Firebase.Database.InternalQuery Firebase.Database.Query::internalQuery
	InternalQuery_t6B3F50FC807DA356BFE336164947861537E38056* ___internalQuery_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Query::database
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database_1;
	// Firebase.Database.Internal.InternalValueListener Firebase.Database.Query::valueListener
	InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* ___valueListener_2;
	// Firebase.Database.Internal.InternalChildListener Firebase.Database.Query::childListener
	InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* ___childListener_3;
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

// UserData
struct UserData_tDFEC70DF1A749DA400CDBE27B7E6DD2E480376AA  : public RuntimeObject
{
	// System.String UserData::id
	String_t* ___id_0;
	// System.String UserData::nickName
	String_t* ___nickName_1;
	// System.Int32 UserData::goldCoins
	int32_t ___goldCoins_2;
	// System.Int32 UserData::avatarIcon
	int32_t ___avatarIcon_3;
	// System.Single UserData::bestTime
	float ___bestTime_4;
	// System.Int32 UserData::car
	int32_t ___car_5;
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

// FirebaseDatabaseController/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t33474489BD4664254EEBAE372243ADB8FD062C5B  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot> FirebaseDatabaseController/<>c__DisplayClass15_0::user
	Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* ___user_0;
};

// FirebaseDatabaseController/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t33FA1AB0DAB3F4A722A0B180553027172963CB44  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot> FirebaseDatabaseController/<>c__DisplayClass16_0::user
	Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* ___user_0;
};

// FirebaseDatabaseController/<LoadAllUserByScore>d__15
struct U3CLoadAllUserByScoreU3Ed__15_tB9686D517FDF8C10D14EF4E31744F842BC5B8B93  : public RuntimeObject
{
	// System.Int32 FirebaseDatabaseController/<LoadAllUserByScore>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FirebaseDatabaseController/<LoadAllUserByScore>d__15::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// FirebaseDatabaseController FirebaseDatabaseController/<LoadAllUserByScore>d__15::<>4__this
	FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* ___U3CU3E4__this_2;
	// FirebaseDatabaseController/<>c__DisplayClass15_0 FirebaseDatabaseController/<LoadAllUserByScore>d__15::<>8__1
	U3CU3Ec__DisplayClass15_0_t33474489BD4664254EEBAE372243ADB8FD062C5B* ___U3CU3E8__1_3;
};

// FirebaseDatabaseController/<LoadData>d__16
struct U3CLoadDataU3Ed__16_t57FBF8327E5B175B0B92B54D8BDC2360765B4F52  : public RuntimeObject
{
	// System.Int32 FirebaseDatabaseController/<LoadData>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FirebaseDatabaseController/<LoadData>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// FirebaseDatabaseController FirebaseDatabaseController/<LoadData>d__16::<>4__this
	FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* ___U3CU3E4__this_2;
	// System.String FirebaseDatabaseController/<LoadData>d__16::userID
	String_t* ___userID_3;
	// FirebaseDatabaseController/<>c__DisplayClass16_0 FirebaseDatabaseController/<LoadData>d__16::<>8__1
	U3CU3Ec__DisplayClass16_0_t33FA1AB0DAB3F4A722A0B180553027172963CB44* ___U3CU3E8__1_4;
};

// LogInScript/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t1BC85D1DA471051C1D408BCD9BEF8036C206A408  : public RuntimeObject
{
	// System.Threading.Tasks.Task LogInScript/<>c__DisplayClass10_0::reloadUser
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___reloadUser_0;
};

// LogInScript/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t05D729EA93F5BDDB0ED11D765FB9C05FA7B2018E  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> LogInScript/<>c__DisplayClass15_0::LoginTask
	Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* ___LoginTask_0;
};

// LogInScript/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t8DB7FF6F60F9CD9286B6E4AC23836F61EB37B3BE  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<Firebase.DependencyStatus> LogInScript/<>c__DisplayClass9_0::dependencyTask
	Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* ___dependencyTask_0;
};

// LogInScript/<CheckAndFixDependenciesAsync>d__9
struct U3CCheckAndFixDependenciesAsyncU3Ed__9_t374CE83A40405CFAF81FBC16D9DBDA1358021471  : public RuntimeObject
{
	// System.Int32 LogInScript/<CheckAndFixDependenciesAsync>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LogInScript/<CheckAndFixDependenciesAsync>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// LogInScript LogInScript/<CheckAndFixDependenciesAsync>d__9::<>4__this
	LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* ___U3CU3E4__this_2;
	// LogInScript/<>c__DisplayClass9_0 LogInScript/<CheckAndFixDependenciesAsync>d__9::<>8__1
	U3CU3Ec__DisplayClass9_0_t8DB7FF6F60F9CD9286B6E4AC23836F61EB37B3BE* ___U3CU3E8__1_3;
};

// LogInScript/<CheckForAutoLogin>d__10
struct U3CCheckForAutoLoginU3Ed__10_t2CB0A40CA04F3AEDB0D8B0DFD8636545E1D216F5  : public RuntimeObject
{
	// System.Int32 LogInScript/<CheckForAutoLogin>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LogInScript/<CheckForAutoLogin>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// LogInScript LogInScript/<CheckForAutoLogin>d__10::<>4__this
	LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* ___U3CU3E4__this_2;
};

// LogInScript/<Login>d__15
struct U3CLoginU3Ed__15_t7F0654C5FD47F9E0DC07696406C2AAB5156961ED  : public RuntimeObject
{
	// System.Int32 LogInScript/<Login>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LogInScript/<Login>d__15::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String LogInScript/<Login>d__15::_email
	String_t* ____email_2;
	// System.String LogInScript/<Login>d__15::_password
	String_t* ____password_3;
	// LogInScript/<>c__DisplayClass15_0 LogInScript/<Login>d__15::<>8__1
	U3CU3Ec__DisplayClass15_0_t05D729EA93F5BDDB0ED11D765FB9C05FA7B2018E* ___U3CU3E8__1_4;
	// LogInScript LogInScript/<Login>d__15::<>4__this
	LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* ___U3CU3E4__this_5;
};

// RegistrationScript/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t1A1AB8B17F5DE1FCDC09C7919D8A30CE29072813  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> RegistrationScript/<>c__DisplayClass14_0::RegisterTask
	Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* ___RegisterTask_0;
};

// RegistrationScript/<>c__DisplayClass14_1
struct U3CU3Ec__DisplayClass14_1_t6698BF633C9C845416E0878DA65F27200F3F4B5F  : public RuntimeObject
{
	// System.Threading.Tasks.Task RegistrationScript/<>c__DisplayClass14_1::profileTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___profileTask_0;
};

// RegistrationScript/<Register>d__14
struct U3CRegisterU3Ed__14_t0423E2CEB98AF02C4B09054906652E84A2EB4C31  : public RuntimeObject
{
	// System.Int32 RegistrationScript/<Register>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RegistrationScript/<Register>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String RegistrationScript/<Register>d__14::_username
	String_t* ____username_2;
	// RegistrationScript RegistrationScript/<Register>d__14::<>4__this
	RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* ___U3CU3E4__this_3;
	// System.String RegistrationScript/<Register>d__14::_email
	String_t* ____email_4;
	// System.String RegistrationScript/<Register>d__14::_password
	String_t* ____password_5;
	// RegistrationScript/<>c__DisplayClass14_0 RegistrationScript/<Register>d__14::<>8__1
	U3CU3Ec__DisplayClass14_0_t1A1AB8B17F5DE1FCDC09C7919D8A30CE29072813* ___U3CU3E8__1_6;
	// RegistrationScript/<>c__DisplayClass14_1 RegistrationScript/<Register>d__14::<>8__2
	U3CU3Ec__DisplayClass14_1_t6698BF633C9C845416E0878DA65F27200F3F4B5F* ___U3CU3E8__2_7;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>
struct Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Firebase.DependencyStatus>
struct Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;
};

// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* ___m_result_22;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// Firebase.Database.DatabaseReference
struct DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D  : public Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED
{
	// Firebase.Database.InternalDatabaseReference Firebase.Database.DatabaseReference::internalReference
	InternalDatabaseReference_tB26A9A610462A419CD3C0B987C7CB11A8FB084B1* ___internalReference_4;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DatabaseReference::<Database>k__BackingField
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___U3CDatabaseU3Ek__BackingField_5;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F 
{
	// System.Object System.Runtime.InteropServices.HandleRef::_wrapper
	RuntimeObject* ____wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::_handle
	intptr_t ____handle_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F  : public Exception_t
{
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* ___m_innerExceptions_18;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// Firebase.FirebaseException
struct FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED  : public Exception_t
{
	// System.Int32 Firebase.FirebaseException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_18;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// Firebase.Auth.UserInfoInterface
struct UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.UserInfoInterface::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Auth.UserInfoInterface::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.Auth.UserProfile
struct UserProfile_t6D157B509640316F20D5DDD5A2BEA9FB952A269B  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.UserProfile::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Auth.UserProfile::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
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

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// FirebaseDatabaseController
struct FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Firebase.Database.DatabaseReference FirebaseDatabaseController::dbRef
	DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* ___dbRef_4;
	// System.Collections.Generic.List`1<Firebase.Database.DataSnapshot> FirebaseDatabaseController::<reverseList>k__BackingField
	List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A* ___U3CreverseListU3Ek__BackingField_5;
	// UserData FirebaseDatabaseController::_userData
	UserData_tDFEC70DF1A749DA400CDBE27B7E6DD2E480376AA* ____userData_6;
	// System.Action FirebaseDatabaseController::onDataLoadedPlayer
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onDataLoadedPlayer_7;
	// System.Action FirebaseDatabaseController::onDataLoadedScore
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onDataLoadedScore_8;
};

// LogInScript
struct LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_InputField LogInScript::emailField
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___emailField_6;
	// TMPro.TMP_InputField LogInScript::passwordField
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___passwordField_7;
	// TMPro.TMP_Text LogInScript::errorField
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___errorField_8;
	// Firebase.DependencyStatus LogInScript::dependencyStatus
	int32_t ___dependencyStatus_9;
	// Firebase.Auth.FirebaseUser LogInScript::user
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* ___user_11;
};

struct LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF_StaticFields
{
	// Firebase.Auth.FirebaseAuth LogInScript::auth
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___auth_10;
};

// RegistrationScript
struct RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Firebase.Database.DatabaseReference RegistrationScript::dbRef
	DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* ___dbRef_4;
	// Firebase.DependencyStatus RegistrationScript::dependencyStatus
	int32_t ___dependencyStatus_5;
	// Firebase.Auth.FirebaseAuth RegistrationScript::auth
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___auth_6;
	// Firebase.Auth.FirebaseUser RegistrationScript::user
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* ___user_7;
	// TMPro.TMP_InputField RegistrationScript::emailField
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___emailField_10;
	// TMPro.TMP_InputField RegistrationScript::nicknameField
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___nicknameField_11;
	// TMPro.TMP_InputField RegistrationScript::passwordField
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___passwordField_12;
	// TMPro.TMP_InputField RegistrationScript::repeatPasswordField
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___repeatPasswordField_13;
	// TMPro.TMP_Text RegistrationScript::errorField
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___errorField_14;
};

// StaticFields
struct StaticFields_t0BD0398E8BED5361BE9022B256717F9EEA744DE5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_22;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextViewport_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextComponentRectMask_24;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextViewportRectMask_25;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_CachedViewportRect_26;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_27;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextComponentRectTransform_28;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_29;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_30;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D* ___m_VerticalScrollbarEventHandler_31;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_32;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* ___m_LayoutGroup_33;
	// UnityEngine.EventSystems.IScrollHandler TMPro.TMP_InputField::m_IScrollHandlerParent
	RuntimeObject* ___m_IScrollHandlerParent_34;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_35;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_36;
	// TMPro.TMP_InputField/ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_37;
	// TMPro.TMP_InputField/InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_38;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_39;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_40;
	// TMPro.TMP_InputField/LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_41;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_42;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_43;
	// TMPro.TMP_InputField/CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_44;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_45;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_46;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_47;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnEndEdit_48;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnSubmit_49;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnSelect_50;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnDeselect_51;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnTextSelection_52;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnEndTextSelection_53;
	// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* ___m_OnValueChanged_54;
	// TMPro.TMP_InputField/TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1* ___m_OnTouchScreenKeyboardStatusChanged_55;
	// TMPro.TMP_InputField/OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530* ___m_OnValidateInput_56;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_57;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_58;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_59;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_60;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_61;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_62;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_63;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_64;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_66;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_67;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_68;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_69;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_70;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_71;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastPosition_72;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_73;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_74;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_75;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_76;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_77;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_80;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_81;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_82;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_83;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_84;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_85;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_86;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_87;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_88;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_89;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_90;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_91;
	// System.Single TMPro.TMP_InputField::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_92;
	// System.Single TMPro.TMP_InputField::m_KeyDownStartTime
	float ___m_KeyDownStartTime_93;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_94;
	// System.Boolean TMPro.TMP_InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_96;
	// System.Boolean TMPro.TMP_InputField::m_ShouldUpdateIMEWindowPosition
	bool ___m_ShouldUpdateIMEWindowPosition_97;
	// System.Int32 TMPro.TMP_InputField::m_PreviousIMEInsertionLine
	int32_t ___m_PreviousIMEInsertionLine_98;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_GlobalFontAsset_99;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_100;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_101;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_102;
	// System.Boolean TMPro.TMP_InputField::m_SelectionStillActive
	bool ___m_SelectionStillActive_103;
	// System.Boolean TMPro.TMP_InputField::m_ReleaseSelection
	bool ___m_ReleaseSelection_104;
	// UnityEngine.GameObject TMPro.TMP_InputField::m_PreviouslySelectedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PreviouslySelectedObject_105;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_106;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_107;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_108;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98* ___m_InputValidator_109;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_110;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_111;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_113;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_114;
};

struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_StaticFields
{
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Int32Enum>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Task_1_get_Result_mF8B724FC6FD57DF2078A1F8927214003AAAC6286_gshared (Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int32Enum>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_m80CB64874F84DB8EBDB9F3F28F5B6710670B1571_gshared (Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB* __this, Action_1_tC3BD22662CBF7BCA7CF101E25DD9C3BC0C8058B4* ___continuationAction0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m3A8BEF4194B03E75859F94B4EE2F54045AF98708_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Collections.IEnumerator LogInScript::CheckAndFixDependenciesAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogInScript_CheckAndFixDependenciesAsync_m5D60E6654D5D7716373E1ED60C22BA87DF473066 (LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void LogInScript/<CheckAndFixDependenciesAsync>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckAndFixDependenciesAsyncU3Ed__9__ctor_mBE80FE766756209B3B6CA513DC1629C6AC58FC32 (U3CCheckAndFixDependenciesAsyncU3Ed__9_t374CE83A40405CFAF81FBC16D9DBDA1358021471* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void LogInScript/<CheckForAutoLogin>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckForAutoLoginU3Ed__10__ctor_m80F44425C679686A765B0049773916F007E74C29 (U3CCheckForAutoLoginU3Ed__10_t2CB0A40CA04F3AEDB0D8B0DFD8636545E1D216F5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String Firebase.Auth.FirebaseUser::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0 (FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* FirebaseAuth_get_DefaultInstance_m86A4E32D8DCDB80079317B58210090F3D3B1711F (const RuntimeMethod* method) ;
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FirebaseAuth::add_StateChanged(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_add_StateChanged_mE4C60B716655FED5F73CED836CBCD6A10578F680 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) ;
// System.Void LogInScript::AuthStateChanged(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogInScript_AuthStateChanged_m39FB6557431FDD74BB037893B02725C31B624CD4 (LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___eventArgs1, const RuntimeMethod* method) ;
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::get_CurrentUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* FirebaseAuth_get_CurrentUser_m99426341853624A9A11F81CFE5BEBCC293501ABF (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String TMPro.TMP_InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator LogInScript::Login(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogInScript_Login_mD3D38B8E52DAD1D80A2C9F1136CA9F6B150F0205 (LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* __this, String_t* ____email0, String_t* ____password1, const RuntimeMethod* method) ;
// System.Void LogInScript/<Login>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoginU3Ed__15__ctor_m8DC187AFD430FB69C7B7DE552006FEA8EE31FB45 (U3CLoginU3Ed__15_t7F0654C5FD47F9E0DC07696406C2AAB5156961ED* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.FirebaseAuth::SignOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAuth_SignOut_m6334FED9987E29CCB5AAAF8AC50A894BFF8AF5C8 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Void LogInScript/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mB0F2EB817EF0E1E1C52CDB82EAD15E3A1D52207C (U3CU3Ec__DisplayClass9_0_t8DB7FF6F60F9CD9286B6E4AC23836F61EB37B3BE* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.DependencyStatus> Firebase.FirebaseApp::CheckAndFixDependenciesAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* FirebaseApp_CheckAndFixDependenciesAsync_mB21D0BA4D3C2F6C975D72DB0F2CEFF46A4361557 (const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___predicate0, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<Firebase.DependencyStatus>::get_Result()
inline int32_t Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA (Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF*, const RuntimeMethod*))Task_1_get_Result_mF8B724FC6FD57DF2078A1F8927214003AAAC6286_gshared)(__this, method);
}
// System.Void LogInScript::InitializeFirebase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogInScript_InitializeFirebase_m8322D2E77D19D6C23A3A34317F9C08A6F7D15150 (LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator LogInScript::CheckForAutoLogin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogInScript_CheckForAutoLogin_mBF30F223D5F0E259336DFC9661DBFDE6A03A1100 (LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void LogInScript/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mDC8B7F7DDE2EDC72F34B10B362A07CD360EA7B91 (U3CU3Ec__DisplayClass10_0_t1BC85D1DA471051C1D408BCD9BEF8036C206A408* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.Auth.FirebaseUser::ReloadAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FirebaseUser_ReloadAsync_m264E6C626F479F1149E37F3A2C109E74AA71F6D3 (FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* __this, const RuntimeMethod* method) ;
// System.Void LogInScript::AutoLogin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogInScript_AutoLogin_m0C242BFCDEF9EC3524CC9C0FA8C0764F5E351FA0 (LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* __this, const RuntimeMethod* method) ;
// System.Void LogInScript/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_mEBB2AA027A19B134C09317ACB257EE3A87C8AEAE (U3CU3Ec__DisplayClass15_0_t05D729EA93F5BDDB0ED11D765FB9C05FA7B2018E* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::SignInWithEmailAndPasswordAsync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* FirebaseAuth_SignInWithEmailAndPasswordAsync_mAA4074C7F5BC11678AF9FCAFB7BE86F751072E5E (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, String_t* ___email0, String_t* ___password1, const RuntimeMethod* method) ;
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t51B6205846DFB356B94452702201DD239D44422F* Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Int32 Firebase.FirebaseException::get_ErrorCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FirebaseException_get_ErrorCode_mE665B1ADB8DD846C3C604DD72F25C1B476EB3A66_inline (FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>::get_Result()
inline FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F (Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* __this, const RuntimeMethod* method)
{
	return ((  FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* (*) (Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* FirebaseDatabase_get_DefaultInstance_m5D2694D707EAE163776CC0FF92B92537BDD59118 (const RuntimeMethod* method) ;
// Firebase.Database.DatabaseReference Firebase.Database.FirebaseDatabase::get_RootReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* FirebaseDatabase_get_RootReference_m169B2E998E82228A8CD898E5CBDB20524281B434 (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4F6B8318AD92B94ABD9C753FFD7CEE0687417DAC (Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.DependencyStatus>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_mAB52D6D57000543C9DD78F0D45BD7B66F819A0DD (Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* __this, Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC* ___continuationAction0, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF*, Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC*, const RuntimeMethod*))Task_1_ContinueWith_m80CB64874F84DB8EBDB9F3F28F5B6710670B1571_gshared)(__this, ___continuationAction0, method);
}
// System.Collections.IEnumerator RegistrationScript::Register(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RegistrationScript_Register_m498D53B18701B368A3B0D8C60A29BA7988884612 (RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* __this, String_t* ____email0, String_t* ____password1, String_t* ____username2, const RuntimeMethod* method) ;
// System.Void RegistrationScript/<Register>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterU3Ed__14__ctor_m735365862DA372FA70FABA404E4E2FB6DDB90693 (U3CRegisterU3Ed__14_t0423E2CEB98AF02C4B09054906652E84A2EB4C31* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UserData::.ctor(System.String,System.String,System.Int32,System.Int32,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserData__ctor_mC8B47A729B5D361026170E0623CF7AAC45628043 (UserData_tDFEC70DF1A749DA400CDBE27B7E6DD2E480376AA* __this, String_t* ___id0, String_t* ___nickName1, int32_t ___goldCoins2, int32_t ___avatarIcon3, float ___bestTime4, int32_t ___car5, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// Firebase.Database.DatabaseReference Firebase.Database.DatabaseReference::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, String_t* ___pathString0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.Database.DatabaseReference::SetRawJsonValueAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* DatabaseReference_SetRawJsonValueAsync_m9490E9CAA051A1E371954DF33B34505FC09AA080 (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, String_t* ___jsonValue0, const RuntimeMethod* method) ;
// System.Void RegistrationScript::InitializeFirebase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegistrationScript_InitializeFirebase_mF2B10AFDF3F75D39CAF3134FBF203F425C2D9D70 (RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void RegistrationScript/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m5E7AD9B586D012DF5CC1705E2D36BCA906041558 (U3CU3Ec__DisplayClass14_0_t1A1AB8B17F5DE1FCDC09C7919D8A30CE29072813* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::CreateUserWithEmailAndPasswordAsync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* FirebaseAuth_CreateUserWithEmailAndPasswordAsync_m90F9E8CBBDBFC03A6B7AF634A61DF47B1618658B (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, String_t* ___email0, String_t* ___password1, const RuntimeMethod* method) ;
// System.String Firebase.Auth.FirebaseUser::get_Email()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseUser_get_Email_mA5E5359FFA20465E1D5570BC3FCC645648BAAAF0 (FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* __this, const RuntimeMethod* method) ;
// System.Void RegistrationScript/<>c__DisplayClass14_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_1__ctor_m03AB5BF398D8CD35B26D229A2A6C1A28F876CA04 (U3CU3Ec__DisplayClass14_1_t6698BF633C9C845416E0878DA65F27200F3F4B5F* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.UserProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_m8DCD7AE22CB46C7DD542A76F42D9D310919B868A (UserProfile_t6D157B509640316F20D5DDD5A2BEA9FB952A269B* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Auth.UserProfile::set_DisplayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_set_DisplayName_m0761D316D0CF8072A09D5ECFFFDE8EEC2B19902E (UserProfile_t6D157B509640316F20D5DDD5A2BEA9FB952A269B* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Firebase.Auth.FirebaseUser::UpdateUserProfileAsync(Firebase.Auth.UserProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* FirebaseUser_UpdateUserProfileAsync_m5B9264DA1787BE70D6E9149B13C60F1A62524C2A (FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* __this, UserProfile_t6D157B509640316F20D5DDD5A2BEA9FB952A269B* ___profile0, const RuntimeMethod* method) ;
// System.Void RegistrationScript::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegistrationScript_SaveData_mBD72ED5213D52B591BE4C1FCB19241C068909AE0 (RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator FirebaseDatabaseController::LoadData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseDatabaseController_LoadData_m277B51B32F39D2F4F9688712429EF1C6BFACD6CF (FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* __this, String_t* ___userID0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator FirebaseDatabaseController::LoadAllUserByScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseDatabaseController_LoadAllUserByScore_m3990348D3225724851492439DEE97E385AC744C0 (FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* __this, const RuntimeMethod* method) ;
// System.Void FirebaseDatabaseController/<LoadAllUserByScore>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAllUserByScoreU3Ed__15__ctor_m4D5F96B166C439CF70973F1BCF96295FCA4660EE (U3CLoadAllUserByScoreU3Ed__15_tB9686D517FDF8C10D14EF4E31744F842BC5B8B93* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void FirebaseDatabaseController/<LoadData>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadDataU3Ed__16__ctor_m051959CDB914AF089995592034EC8FFC3ADA6E86 (U3CLoadDataU3Ed__16_t57FBF8327E5B175B0B92B54D8BDC2360765B4F52* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void FirebaseDatabaseController::SaveData(System.String,System.String,System.Int32,System.Int32,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabaseController_SaveData_mCD7398B8F21F0DC3638D6FF44BE439F36011F48E (FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* __this, String_t* ___id0, String_t* ___nickName1, int32_t ___goldCoins2, int32_t ___avatarIcon3, float ___bestTime4, int32_t ___car5, const RuntimeMethod* method) ;
// System.Void FirebaseDatabaseController/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_mFF1079D128FC26870B22F8C2F7CD3ABF5A7D24BB (U3CU3Ec__DisplayClass15_0_t33474489BD4664254EEBAE372243ADB8FD062C5B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Firebase.Database.DataSnapshot>::.ctor()
inline void List_1__ctor_mB6067CADF91161BECA8597A16AE8DD4C94068C98 (List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void FirebaseDatabaseController::set_reverseList(System.Collections.Generic.List`1<Firebase.Database.DataSnapshot>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseDatabaseController_set_reverseList_m95532DDE76B7D19F8CB022E9FD93E5582A550CA9_inline (FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* __this, List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A* ___value0, const RuntimeMethod* method) ;
// Firebase.Database.Query Firebase.Database.Query::OrderByChild(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* Query_OrderByChild_mB7B1B0159F1C01D44ADB7D838A9DC3EE9C36A897 (Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot> Firebase.Database.Query::GetValueAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* Query_GetValueAsync_mFEB57CCE078D10FC3A6DA6DA2A7DCD16CC4673F5 (Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>::get_Result()
inline DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C (Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* __this, const RuntimeMethod* method)
{
	return ((  DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* (*) (Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// System.Object Firebase.Database.DataSnapshot::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSnapshot_get_Value_mF787DB763C81F79ED7CC2621AC49708EB8A6DBA2 (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot> Firebase.Database.DataSnapshot::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSnapshot_get_Children_m5A77ABE26BB1750F85677DF6E03D02560F6F6632 (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Firebase.Database.DataSnapshot> FirebaseDatabaseController::get_reverseList()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A* FirebaseDatabaseController_get_reverseList_m50F38D5AFA9AD40779E1ECB4E47E4A02D3827EC1_inline (FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Firebase.Database.DataSnapshot>::Add(T)
inline void List_1_Add_mEB985D26AF75351E822117FB3B8F2C531BF53EAF_inline (List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A* __this, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A*, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Firebase.Database.DataSnapshot>::Reverse()
inline void List_1_Reverse_m2965DA079F8E0D4ACD89655BDD7104E8A2DF1C2D (List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A*, const RuntimeMethod*))List_1_Reverse_m3A8BEF4194B03E75859F94B4EE2F54045AF98708_gshared)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void FirebaseDatabaseController/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_mE96C239E92C087BB1F0708A3598B250FE0CEBAB7 (U3CU3Ec__DisplayClass16_0_t33FA1AB0DAB3F4A722A0B180553027172963CB44* __this, const RuntimeMethod* method) ;
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* DataSnapshot_Child_m308ABEC425ADE01909B1A318D61DC965802EF64C (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8 (String_t* ___s0, const RuntimeMethod* method) ;
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
// System.Void LogInScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogInScript_Start_m839C51D6974BF161718C7A0C2148935164B6E659 (LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(CheckAndFixDependenciesAsync());
		RuntimeObject* L_0;
		L_0 = LogInScript_CheckAndFixDependenciesAsync_m5D60E6654D5D7716373E1ED60C22BA87DF473066(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator LogInScript::CheckAndFixDependenciesAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogInScript_CheckAndFixDependenciesAsync_m5D60E6654D5D7716373E1ED60C22BA87DF473066 (LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckAndFixDependenciesAsyncU3Ed__9_t374CE83A40405CFAF81FBC16D9DBDA1358021471_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCheckAndFixDependenciesAsyncU3Ed__9_t374CE83A40405CFAF81FBC16D9DBDA1358021471* L_0 = (U3CCheckAndFixDependenciesAsyncU3Ed__9_t374CE83A40405CFAF81FBC16D9DBDA1358021471*)il2cpp_codegen_object_new(U3CCheckAndFixDependenciesAsyncU3Ed__9_t374CE83A40405CFAF81FBC16D9DBDA1358021471_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCheckAndFixDependenciesAsyncU3Ed__9__ctor_mBE80FE766756209B3B6CA513DC1629C6AC58FC32(L_0, 0, NULL);
		U3CCheckAndFixDependenciesAsyncU3Ed__9_t374CE83A40405CFAF81FBC16D9DBDA1358021471* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator LogInScript::CheckForAutoLogin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogInScript_CheckForAutoLogin_mBF30F223D5F0E259336DFC9661DBFDE6A03A1100 (LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckForAutoLoginU3Ed__10_t2CB0A40CA04F3AEDB0D8B0DFD8636545E1D216F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCheckForAutoLoginU3Ed__10_t2CB0A40CA04F3AEDB0D8B0DFD8636545E1D216F5* L_0 = (U3CCheckForAutoLoginU3Ed__10_t2CB0A40CA04F3AEDB0D8B0DFD8636545E1D216F5*)il2cpp_codegen_object_new(U3CCheckForAutoLoginU3Ed__10_t2CB0A40CA04F3AEDB0D8B0DFD8636545E1D216F5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCheckForAutoLoginU3Ed__10__ctor_m80F44425C679686A765B0049773916F007E74C29(L_0, 0, NULL);
		U3CCheckForAutoLoginU3Ed__10_t2CB0A40CA04F3AEDB0D8B0DFD8636545E1D216F5* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void LogInScript::AutoLogin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogInScript_AutoLogin_m0C242BFCDEF9EC3524CC9C0FA8C0764F5E351FA0 (LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataHolder_tB9ABE74E9D88472F78B64CD0CFF9083CE2820DFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5722E4A135CA536017A9944F51F1E8C26CCAE9B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE796D8428A31C89F4F32CCE284FFAFEF0A50CAED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(user != null)
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_0 = __this->___user_11;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		// DataHolder.firebaseUser = user;
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_1 = __this->___user_11;
		((DataHolder_tB9ABE74E9D88472F78B64CD0CFF9083CE2820DFA_StaticFields*)il2cpp_codegen_static_fields_for(DataHolder_tB9ABE74E9D88472F78B64CD0CFF9083CE2820DFA_il2cpp_TypeInfo_var))->___firebaseUser_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DataHolder_tB9ABE74E9D88472F78B64CD0CFF9083CE2820DFA_StaticFields*)il2cpp_codegen_static_fields_for(DataHolder_tB9ABE74E9D88472F78B64CD0CFF9083CE2820DFA_il2cpp_TypeInfo_var))->___firebaseUser_0), (void*)L_1);
		// if(DataHolder.firebaseUser == null)
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_2 = ((DataHolder_tB9ABE74E9D88472F78B64CD0CFF9083CE2820DFA_StaticFields*)il2cpp_codegen_static_fields_for(DataHolder_tB9ABE74E9D88472F78B64CD0CFF9083CE2820DFA_il2cpp_TypeInfo_var))->___firebaseUser_0;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		// Debug.Log("DataHolder.firebaseUser == null");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5722E4A135CA536017A9944F51F1E8C26CCAE9B9, NULL);
	}

IL_0024:
	{
		// Debug.Log(user.UserId);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_3 = __this->___user_11;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// SceneManager.LoadScene(MENU_SCENE);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralE796D8428A31C89F4F32CCE284FFAFEF0A50CAED, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void LogInScript::InitializeFirebase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogInScript_InitializeFirebase_m8322D2E77D19D6C23A3A34317F9C08A6F7D15150 (LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogInScript_AuthStateChanged_m39FB6557431FDD74BB037893B02725C31B624CD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDCE1B19873BCE9B690148B4CFAAC8AE4030348B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Setting up");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralBDCE1B19873BCE9B690148B4CFAAC8AE4030348B, NULL);
		// auth = FirebaseAuth.DefaultInstance;
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0;
		L_0 = FirebaseAuth_get_DefaultInstance_m86A4E32D8DCDB80079317B58210090F3D3B1711F(NULL);
		((LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF_StaticFields*)il2cpp_codegen_static_fields_for(LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF_il2cpp_TypeInfo_var))->___auth_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF_StaticFields*)il2cpp_codegen_static_fields_for(LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF_il2cpp_TypeInfo_var))->___auth_10), (void*)L_0);
		// auth.StateChanged += AuthStateChanged;
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_1 = ((LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF_StaticFields*)il2cpp_codegen_static_fields_for(LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF_il2cpp_TypeInfo_var))->___auth_10;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_2, __this, (intptr_t)((void*)LogInScript_AuthStateChanged_m39FB6557431FDD74BB037893B02725C31B624CD4_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		FirebaseAuth_add_StateChanged_mE4C60B716655FED5F73CED836CBCD6A10578F680(L_1, L_2, NULL);
		// AuthStateChanged(this, null);
		LogInScript_AuthStateChanged_m39FB6557431FDD74BB037893B02725C31B624CD4(__this, __this, (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*)NULL, NULL);
		// }
		return;
	}
}
// System.Void LogInScript::AuthStateChanged(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogInScript_AuthStateChanged_m39FB6557431FDD74BB037893B02725C31B624CD4 (LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___eventArgs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral349F52249E4C8D8AB5D64F7A048F8E19AF6B3180);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7308DA6A9AD1E8B5F5BD38AF235BEC86C7D663E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// if (auth.CurrentUser != user)
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = ((LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF_StaticFields*)il2cpp_codegen_static_fields_for(LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF_il2cpp_TypeInfo_var))->___auth_10;
		NullCheck(L_0);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_1;
		L_1 = FirebaseAuth_get_CurrentUser_m99426341853624A9A11F81CFE5BEBCC293501ABF(L_0, NULL);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_2 = __this->___user_11;
		if ((((RuntimeObject*)(FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A*)L_1) == ((RuntimeObject*)(FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A*)L_2)))
		{
			goto IL_0085;
		}
	}
	{
		// bool signedIn = user != auth.CurrentUser && auth.CurrentUser != null;
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_3 = __this->___user_11;
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_4 = ((LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF_StaticFields*)il2cpp_codegen_static_fields_for(LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF_il2cpp_TypeInfo_var))->___auth_10;
		NullCheck(L_4);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_5;
		L_5 = FirebaseAuth_get_CurrentUser_m99426341853624A9A11F81CFE5BEBCC293501ABF(L_4, NULL);
		if ((((RuntimeObject*)(FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A*)L_3) == ((RuntimeObject*)(FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A*)L_5)))
		{
			goto IL_0033;
		}
	}
	{
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_6 = ((LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF_StaticFields*)il2cpp_codegen_static_fields_for(LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF_il2cpp_TypeInfo_var))->___auth_10;
		NullCheck(L_6);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_7;
		L_7 = FirebaseAuth_get_CurrentUser_m99426341853624A9A11F81CFE5BEBCC293501ABF(L_6, NULL);
		G_B4_0 = ((!(((RuntimeObject*)(FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B4_0 = 0;
	}

IL_0034:
	{
		// if (!signedIn && user != null)
		int32_t L_8 = G_B4_0;
		G_B5_0 = L_8;
		if (L_8)
		{
			G_B7_0 = L_8;
			goto IL_0059;
		}
	}
	{
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_9 = __this->___user_11;
		G_B6_0 = G_B5_0;
		if (!L_9)
		{
			G_B7_0 = G_B5_0;
			goto IL_0059;
		}
	}
	{
		// Debug.Log("Signed out " + user.UserId);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_10 = __this->___user_11;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0(L_10, NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral349F52249E4C8D8AB5D64F7A048F8E19AF6B3180, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_12, NULL);
		G_B7_0 = G_B6_0;
	}

IL_0059:
	{
		// user = auth.CurrentUser;
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_13 = ((LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF_StaticFields*)il2cpp_codegen_static_fields_for(LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF_il2cpp_TypeInfo_var))->___auth_10;
		NullCheck(L_13);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_14;
		L_14 = FirebaseAuth_get_CurrentUser_m99426341853624A9A11F81CFE5BEBCC293501ABF(L_13, NULL);
		__this->___user_11 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___user_11), (void*)L_14);
		// if (signedIn)
		if (!G_B7_0)
		{
			goto IL_0085;
		}
	}
	{
		// Debug.Log("Signed in " + user.UserId);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_15 = __this->___user_11;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0(L_15, NULL);
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE7308DA6A9AD1E8B5F5BD38AF235BEC86C7D663E, L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_17, NULL);
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void LogInScript::LogInButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogInScript_LogInButton_mB174546562C2DAD42ABC42F901DDD09C8620673A (LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Login(emailField.text, passwordField.text));
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___emailField_6;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_0, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = __this->___passwordField_7;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_2, NULL);
		RuntimeObject* L_4;
		L_4 = LogInScript_Login_mD3D38B8E52DAD1D80A2C9F1136CA9F6B150F0205(__this, L_1, L_3, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator LogInScript::Login(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogInScript_Login_mD3D38B8E52DAD1D80A2C9F1136CA9F6B150F0205 (LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* __this, String_t* ____email0, String_t* ____password1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoginU3Ed__15_t7F0654C5FD47F9E0DC07696406C2AAB5156961ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoginU3Ed__15_t7F0654C5FD47F9E0DC07696406C2AAB5156961ED* L_0 = (U3CLoginU3Ed__15_t7F0654C5FD47F9E0DC07696406C2AAB5156961ED*)il2cpp_codegen_object_new(U3CLoginU3Ed__15_t7F0654C5FD47F9E0DC07696406C2AAB5156961ED_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoginU3Ed__15__ctor_m8DC187AFD430FB69C7B7DE552006FEA8EE31FB45(L_0, 0, NULL);
		U3CLoginU3Ed__15_t7F0654C5FD47F9E0DC07696406C2AAB5156961ED* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_5), (void*)__this);
		U3CLoginU3Ed__15_t7F0654C5FD47F9E0DC07696406C2AAB5156961ED* L_2 = L_1;
		String_t* L_3 = ____email0;
		NullCheck(L_2);
		L_2->____email_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____email_2), (void*)L_3);
		U3CLoginU3Ed__15_t7F0654C5FD47F9E0DC07696406C2AAB5156961ED* L_4 = L_2;
		String_t* L_5 = ____password1;
		NullCheck(L_4);
		L_4->____password_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____password_3), (void*)L_5);
		return L_4;
	}
}
// System.Void LogInScript::SignOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogInScript_SignOut_m16F8601A59A028FE17DB549A8667FAE5973E1544 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// auth.SignOut();
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0 = ((LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF_StaticFields*)il2cpp_codegen_static_fields_for(LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF_il2cpp_TypeInfo_var))->___auth_10;
		NullCheck(L_0);
		FirebaseAuth_SignOut_m6334FED9987E29CCB5AAAF8AC50A894BFF8AF5C8(L_0, NULL);
		// }
		return;
	}
}
// System.Void LogInScript::GoToRegistration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogInScript_GoToRegistration_mF8375B58BB8DB2C6B7C2A60491F9CFCBD99DDF40 (LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2001D9786B126025B68827DDFDC0823C6A5AA6A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(REGISTRATION_MENU_SCENE);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralE2001D9786B126025B68827DDFDC0823C6A5AA6A, NULL);
		// }
		return;
	}
}
// System.Void LogInScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogInScript__ctor_m63C57EDE45AC15D91D4B80A7F25038C6C25D444D (LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LogInScript/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mB0F2EB817EF0E1E1C52CDB82EAD15E3A1D52207C (U3CU3Ec__DisplayClass9_0_t8DB7FF6F60F9CD9286B6E4AC23836F61EB37B3BE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean LogInScript/<>c__DisplayClass9_0::<CheckAndFixDependenciesAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass9_0_U3CCheckAndFixDependenciesAsyncU3Eb__0_m40D5D72A3BBAFCC6DECF27D3B5CEC54FA753F71C (U3CU3Ec__DisplayClass9_0_t8DB7FF6F60F9CD9286B6E4AC23836F61EB37B3BE* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(() => dependencyTask.IsCompleted);
		Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* L_0 = __this->___dependencyTask_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_0, NULL);
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
// System.Void LogInScript/<CheckAndFixDependenciesAsync>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckAndFixDependenciesAsyncU3Ed__9__ctor_mBE80FE766756209B3B6CA513DC1629C6AC58FC32 (U3CCheckAndFixDependenciesAsyncU3Ed__9_t374CE83A40405CFAF81FBC16D9DBDA1358021471* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LogInScript/<CheckAndFixDependenciesAsync>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckAndFixDependenciesAsyncU3Ed__9_System_IDisposable_Dispose_mF6408402DB0EA0CC631FC334DCBB107FAC5A50A8 (U3CCheckAndFixDependenciesAsyncU3Ed__9_t374CE83A40405CFAF81FBC16D9DBDA1358021471* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LogInScript/<CheckAndFixDependenciesAsync>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckAndFixDependenciesAsyncU3Ed__9_MoveNext_m229AB7366A9609AD58BB571B55BD974E40F1EC86 (U3CCheckAndFixDependenciesAsyncU3Ed__9_t374CE83A40405CFAF81FBC16D9DBDA1358021471* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CCheckAndFixDependenciesAsyncU3Eb__0_m40D5D72A3BBAFCC6DECF27D3B5CEC54FA753F71C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_t8DB7FF6F60F9CD9286B6E4AC23836F61EB37B3BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77B74617F18565C5FFD6A03E2FD341AB6136F5E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF95A94BAF1FA3381B5F09B00655DE88AC8FBB24E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0069;
			}
			case 2:
			{
				goto IL_00a8;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		U3CU3Ec__DisplayClass9_0_t8DB7FF6F60F9CD9286B6E4AC23836F61EB37B3BE* L_3 = (U3CU3Ec__DisplayClass9_0_t8DB7FF6F60F9CD9286B6E4AC23836F61EB37B3BE*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t8DB7FF6F60F9CD9286B6E4AC23836F61EB37B3BE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CU3Ec__DisplayClass9_0__ctor_mB0F2EB817EF0E1E1C52CDB82EAD15E3A1D52207C(L_3, NULL);
		__this->___U3CU3E8__1_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_3), (void*)L_3);
		// var dependencyTask = FirebaseApp.CheckAndFixDependenciesAsync();
		U3CU3Ec__DisplayClass9_0_t8DB7FF6F60F9CD9286B6E4AC23836F61EB37B3BE* L_4 = __this->___U3CU3E8__1_3;
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* L_5;
		L_5 = FirebaseApp_CheckAndFixDependenciesAsync_mB21D0BA4D3C2F6C975D72DB0F2CEFF46A4361557(NULL);
		NullCheck(L_4);
		L_4->___dependencyTask_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___dependencyTask_0), (void*)L_5);
		// yield return new WaitUntil(() => dependencyTask.IsCompleted);
		U3CU3Ec__DisplayClass9_0_t8DB7FF6F60F9CD9286B6E4AC23836F61EB37B3BE* L_6 = __this->___U3CU3E8__1_3;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_7 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CCheckAndFixDependenciesAsyncU3Eb__0_m40D5D72A3BBAFCC6DECF27D3B5CEC54FA753F71C_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_8 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_8, L_7, NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0069:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// dependencyStatus = dependencyTask.Result;
		LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* L_9 = V_1;
		U3CU3Ec__DisplayClass9_0_t8DB7FF6F60F9CD9286B6E4AC23836F61EB37B3BE* L_10 = __this->___U3CU3E8__1_3;
		NullCheck(L_10);
		Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* L_11 = L_10->___dependencyTask_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA(L_11, Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA_RuntimeMethod_var);
		NullCheck(L_9);
		L_9->___dependencyStatus_9 = L_12;
		// if (dependencyStatus == DependencyStatus.Available)
		LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14 = L_13->___dependencyStatus_9;
		if (L_14)
		{
			goto IL_00c8;
		}
	}
	{
		// InitializeFirebase();
		LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* L_15 = V_1;
		NullCheck(L_15);
		LogInScript_InitializeFirebase_m8322D2E77D19D6C23A3A34317F9C08A6F7D15150(L_15, NULL);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_16 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_16, NULL);
		__this->___U3CU3E2__current_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_16);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00a8:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log("Try in");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF95A94BAF1FA3381B5F09B00655DE88AC8FBB24E, NULL);
		// StartCoroutine(CheckForAutoLogin());
		LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* L_17 = V_1;
		LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* L_18 = V_1;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = LogInScript_CheckForAutoLogin_mBF30F223D5F0E259336DFC9661DBFDE6A03A1100(L_18, NULL);
		NullCheck(L_17);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_20;
		L_20 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_17, L_19, NULL);
		goto IL_00e8;
	}

IL_00c8:
	{
		// Debug.LogError("Error:" + dependencyStatus);
		LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* L_21 = V_1;
		NullCheck(L_21);
		int32_t* L_22 = (&L_21->___dependencyStatus_9);
		Il2CppFakeBox<int32_t> L_23(DependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_il2cpp_TypeInfo_var, L_22);
		String_t* L_24;
		L_24 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_23), NULL);
		String_t* L_25;
		L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral77B74617F18565C5FFD6A03E2FD341AB6136F5E8, L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_25, NULL);
	}

IL_00e8:
	{
		// }
		return (bool)0;
	}
}
// System.Object LogInScript/<CheckAndFixDependenciesAsync>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckAndFixDependenciesAsyncU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2ACFD418CEE9010618A1B3CFEF552BF3C31F19B9 (U3CCheckAndFixDependenciesAsyncU3Ed__9_t374CE83A40405CFAF81FBC16D9DBDA1358021471* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LogInScript/<CheckAndFixDependenciesAsync>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckAndFixDependenciesAsyncU3Ed__9_System_Collections_IEnumerator_Reset_m64EC2CC3B2B503970AC09FEDA4B3AF957C71C313 (U3CCheckAndFixDependenciesAsyncU3Ed__9_t374CE83A40405CFAF81FBC16D9DBDA1358021471* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckAndFixDependenciesAsyncU3Ed__9_System_Collections_IEnumerator_Reset_m64EC2CC3B2B503970AC09FEDA4B3AF957C71C313_RuntimeMethod_var)));
	}
}
// System.Object LogInScript/<CheckAndFixDependenciesAsync>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckAndFixDependenciesAsyncU3Ed__9_System_Collections_IEnumerator_get_Current_m500361CF9B5BF4AD2BAD73C739EE0E887FE4CF02 (U3CCheckAndFixDependenciesAsyncU3Ed__9_t374CE83A40405CFAF81FBC16D9DBDA1358021471* __this, const RuntimeMethod* method) 
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
// System.Void LogInScript/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mDC8B7F7DDE2EDC72F34B10B362A07CD360EA7B91 (U3CU3Ec__DisplayClass10_0_t1BC85D1DA471051C1D408BCD9BEF8036C206A408* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean LogInScript/<>c__DisplayClass10_0::<CheckForAutoLogin>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass10_0_U3CCheckForAutoLoginU3Eb__0_m0B24389DF92CB97F46675D51EF5BA16766111CF3 (U3CU3Ec__DisplayClass10_0_t1BC85D1DA471051C1D408BCD9BEF8036C206A408* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(() => reloadUser.IsCompleted);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = __this->___reloadUser_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_0, NULL);
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
// System.Void LogInScript/<CheckForAutoLogin>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckForAutoLoginU3Ed__10__ctor_m80F44425C679686A765B0049773916F007E74C29 (U3CCheckForAutoLoginU3Ed__10_t2CB0A40CA04F3AEDB0D8B0DFD8636545E1D216F5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LogInScript/<CheckForAutoLogin>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckForAutoLoginU3Ed__10_System_IDisposable_Dispose_m905BB7FDA18721D84EA8756DFB40F09056E33CFF (U3CCheckForAutoLoginU3Ed__10_t2CB0A40CA04F3AEDB0D8B0DFD8636545E1D216F5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LogInScript/<CheckForAutoLogin>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckForAutoLoginU3Ed__10_MoveNext_m7E03B620E2C11A8645F7EFB99E8F21688FD2E6C0 (U3CCheckForAutoLoginU3Ed__10_t2CB0A40CA04F3AEDB0D8B0DFD8636545E1D216F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CCheckForAutoLoginU3Eb__0_m0B24389DF92CB97F46675D51EF5BA16766111CF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_t1BC85D1DA471051C1D408BCD9BEF8036C206A408_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral066390CE51A5A8AA7B4F56BBDB2CF41EAFF6415B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* V_1 = NULL;
	U3CU3Ec__DisplayClass10_0_t1BC85D1DA471051C1D408BCD9BEF8036C206A408* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(user != null)
		LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* L_4 = V_1;
		NullCheck(L_4);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_5 = L_4->___user_11;
		if (!L_5)
		{
			goto IL_006c;
		}
	}
	{
		U3CU3Ec__DisplayClass10_0_t1BC85D1DA471051C1D408BCD9BEF8036C206A408* L_6 = (U3CU3Ec__DisplayClass10_0_t1BC85D1DA471051C1D408BCD9BEF8036C206A408*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_t1BC85D1DA471051C1D408BCD9BEF8036C206A408_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		U3CU3Ec__DisplayClass10_0__ctor_mDC8B7F7DDE2EDC72F34B10B362A07CD360EA7B91(L_6, NULL);
		V_2 = L_6;
		// var reloadUser = user.ReloadAsync();
		U3CU3Ec__DisplayClass10_0_t1BC85D1DA471051C1D408BCD9BEF8036C206A408* L_7 = V_2;
		LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* L_8 = V_1;
		NullCheck(L_8);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_9 = L_8->___user_11;
		NullCheck(L_9);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_10;
		L_10 = FirebaseUser_ReloadAsync_m264E6C626F479F1149E37F3A2C109E74AA71F6D3(L_9, NULL);
		NullCheck(L_7);
		L_7->___reloadUser_0 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___reloadUser_0), (void*)L_10);
		// yield return new WaitUntil(() => reloadUser.IsCompleted);
		U3CU3Ec__DisplayClass10_0_t1BC85D1DA471051C1D408BCD9BEF8036C206A408* L_11 = V_2;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_12 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass10_0_U3CCheckForAutoLoginU3Eb__0_m0B24389DF92CB97F46675D51EF5BA16766111CF3_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_13 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_13, L_12, NULL);
		__this->___U3CU3E2__current_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// AutoLogin();
		LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* L_14 = V_1;
		NullCheck(L_14);
		LogInScript_AutoLogin_m0C242BFCDEF9EC3524CC9C0FA8C0764F5E351FA0(L_14, NULL);
		goto IL_0076;
	}

IL_006c:
	{
		// Debug.Log("No User");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral066390CE51A5A8AA7B4F56BBDB2CF41EAFF6415B, NULL);
	}

IL_0076:
	{
		// }
		return (bool)0;
	}
}
// System.Object LogInScript/<CheckForAutoLogin>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckForAutoLoginU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m528A1537E1B8DE11B771C4013ABC49D780766E70 (U3CCheckForAutoLoginU3Ed__10_t2CB0A40CA04F3AEDB0D8B0DFD8636545E1D216F5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LogInScript/<CheckForAutoLogin>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckForAutoLoginU3Ed__10_System_Collections_IEnumerator_Reset_mB7134C59BAAB7FC961088D588B1A066D0D30AAB9 (U3CCheckForAutoLoginU3Ed__10_t2CB0A40CA04F3AEDB0D8B0DFD8636545E1D216F5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckForAutoLoginU3Ed__10_System_Collections_IEnumerator_Reset_mB7134C59BAAB7FC961088D588B1A066D0D30AAB9_RuntimeMethod_var)));
	}
}
// System.Object LogInScript/<CheckForAutoLogin>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckForAutoLoginU3Ed__10_System_Collections_IEnumerator_get_Current_m52077DD1AF9E15B173F0E0423A98B76A86389235 (U3CCheckForAutoLoginU3Ed__10_t2CB0A40CA04F3AEDB0D8B0DFD8636545E1D216F5* __this, const RuntimeMethod* method) 
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
// System.Void LogInScript/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_mEBB2AA027A19B134C09317ACB257EE3A87C8AEAE (U3CU3Ec__DisplayClass15_0_t05D729EA93F5BDDB0ED11D765FB9C05FA7B2018E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean LogInScript/<>c__DisplayClass15_0::<Login>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass15_0_U3CLoginU3Eb__0_m7E7259905478D9DBDBEB7949BDB1F8AE88B67FB8 (U3CU3Ec__DisplayClass15_0_t05D729EA93F5BDDB0ED11D765FB9C05FA7B2018E* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(predicate: () => LoginTask.IsCompleted);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_0 = __this->___LoginTask_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_0, NULL);
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
// System.Void LogInScript/<Login>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoginU3Ed__15__ctor_m8DC187AFD430FB69C7B7DE552006FEA8EE31FB45 (U3CLoginU3Ed__15_t7F0654C5FD47F9E0DC07696406C2AAB5156961ED* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LogInScript/<Login>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoginU3Ed__15_System_IDisposable_Dispose_mD45BD0F29F3C6A21D2FBC98F94CEFCD3EA5A5616 (U3CLoginU3Ed__15_t7F0654C5FD47F9E0DC07696406C2AAB5156961ED* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LogInScript/<Login>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoginU3Ed__15_MoveNext_m56D7F542A70234262447F6C193CB7D254F2A7270 (U3CLoginU3Ed__15_t7F0654C5FD47F9E0DC07696406C2AAB5156961ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataHolder_tB9ABE74E9D88472F78B64CD0CFF9083CE2820DFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_U3CLoginU3Eb__0_m7E7259905478D9DBDBEB7949BDB1F8AE88B67FB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_t05D729EA93F5BDDB0ED11D765FB9C05FA7B2018E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral082576EB9F2E2B76D67FA35A3C7E0396F0AD9AAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27F8746362C24CE15D0F5F0972CA224EA8E5153D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4036CB682368F57A752F1AE948975DAB7499EACE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C592054C6C435A35F51D996805CA03942ABA180);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral649598B307445E90C6B685E1F1CC6F5B25EF58A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDB48194C129977EFF1A1B05291484C11D5D1F33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE796D8428A31C89F4F32CCE284FFAFEF0A50CAED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF31B94B5DA465CBFAD84F59BFEF43769EABD7471);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* L_1 = __this->___U3CU3E4__this_5;
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
			goto IL_006f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		U3CU3Ec__DisplayClass15_0_t05D729EA93F5BDDB0ED11D765FB9C05FA7B2018E* L_4 = (U3CU3Ec__DisplayClass15_0_t05D729EA93F5BDDB0ED11D765FB9C05FA7B2018E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass15_0_t05D729EA93F5BDDB0ED11D765FB9C05FA7B2018E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		U3CU3Ec__DisplayClass15_0__ctor_mEBB2AA027A19B134C09317ACB257EE3A87C8AEAE(L_4, NULL);
		__this->___U3CU3E8__1_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)L_4);
		// var LoginTask = auth.SignInWithEmailAndPasswordAsync(_email, _password);
		U3CU3Ec__DisplayClass15_0_t05D729EA93F5BDDB0ED11D765FB9C05FA7B2018E* L_5 = __this->___U3CU3E8__1_4;
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_6 = ((LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF_StaticFields*)il2cpp_codegen_static_fields_for(LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF_il2cpp_TypeInfo_var))->___auth_10;
		String_t* L_7 = __this->____email_2;
		String_t* L_8 = __this->____password_3;
		NullCheck(L_6);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_9;
		L_9 = FirebaseAuth_SignInWithEmailAndPasswordAsync_mAA4074C7F5BC11678AF9FCAFB7BE86F751072E5E(L_6, L_7, L_8, NULL);
		NullCheck(L_5);
		L_5->___LoginTask_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___LoginTask_0), (void*)L_9);
		// yield return new WaitUntil(predicate: () => LoginTask.IsCompleted);
		U3CU3Ec__DisplayClass15_0_t05D729EA93F5BDDB0ED11D765FB9C05FA7B2018E* L_10 = __this->___U3CU3E8__1_4;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_11 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_11, L_10, (intptr_t)((void*)U3CU3Ec__DisplayClass15_0_U3CLoginU3Eb__0_m7E7259905478D9DBDBEB7949BDB1F8AE88B67FB8_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_12 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_12, L_11, NULL);
		__this->___U3CU3E2__current_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_12);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_006f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (LoginTask.Exception != null)
		U3CU3Ec__DisplayClass15_0_t05D729EA93F5BDDB0ED11D765FB9C05FA7B2018E* L_13 = __this->___U3CU3E8__1_4;
		NullCheck(L_13);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_14 = L_13->___LoginTask_0;
		NullCheck(L_14);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_15;
		L_15 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_14, NULL);
		if (!L_15)
		{
			goto IL_0129;
		}
	}
	{
		// Debug.LogWarning(message: $"Failed to register task with {LoginTask.Exception}");
		U3CU3Ec__DisplayClass15_0_t05D729EA93F5BDDB0ED11D765FB9C05FA7B2018E* L_16 = __this->___U3CU3E8__1_4;
		NullCheck(L_16);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_17 = L_16->___LoginTask_0;
		NullCheck(L_17);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_18;
		L_18 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_17, NULL);
		String_t* L_19;
		L_19 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral649598B307445E90C6B685E1F1CC6F5B25EF58A0, L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_19, NULL);
		// FirebaseException firebaseEx = LoginTask.Exception.GetBaseException() as FirebaseException;
		U3CU3Ec__DisplayClass15_0_t05D729EA93F5BDDB0ED11D765FB9C05FA7B2018E* L_20 = __this->___U3CU3E8__1_4;
		NullCheck(L_20);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_21 = L_20->___LoginTask_0;
		NullCheck(L_21);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_22;
		L_22 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_21, NULL);
		NullCheck(L_22);
		Exception_t* L_23;
		L_23 = VirtualFuncInvoker0< Exception_t* >::Invoke(7 /* System.Exception System.Exception::GetBaseException() */, L_22);
		// AuthError errorCode = (AuthError)firebaseEx.ErrorCode;
		NullCheck(((FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED*)IsInstSealed((RuntimeObject*)L_23, FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var)));
		int32_t L_24;
		L_24 = FirebaseException_get_ErrorCode_mE665B1ADB8DD846C3C604DD72F25C1B476EB3A66_inline(((FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED*)IsInstSealed((RuntimeObject*)L_23, FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var)), NULL);
		V_2 = L_24;
		// string message = "Login Failed!";
		V_3 = _stringLiteral082576EB9F2E2B76D67FA35A3C7E0396F0AD9AAD;
		int32_t L_25 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_25, ((int32_t)11))))
		{
			case 0:
			{
				goto IL_010d;
			}
			case 1:
			{
				goto IL_0105;
			}
			case 2:
			{
				goto IL_011b;
			}
			case 3:
			{
				goto IL_0115;
			}
		}
	}
	{
		int32_t L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)37))))
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)38))))
		{
			goto IL_00fd;
		}
	}
	{
		goto IL_011b;
	}

IL_00f5:
	{
		// message = "Missing Email";
		V_3 = _stringLiteralDDB48194C129977EFF1A1B05291484C11D5D1F33;
		// break;
		goto IL_011b;
	}

IL_00fd:
	{
		// message = "Missing Password";
		V_3 = _stringLiteral5C592054C6C435A35F51D996805CA03942ABA180;
		// break;
		goto IL_011b;
	}

IL_0105:
	{
		// message = "Wrong Password";
		V_3 = _stringLiteral4036CB682368F57A752F1AE948975DAB7499EACE;
		// break;
		goto IL_011b;
	}

IL_010d:
	{
		// message = "Invalid Email";
		V_3 = _stringLiteralF31B94B5DA465CBFAD84F59BFEF43769EABD7471;
		// break;
		goto IL_011b;
	}

IL_0115:
	{
		// message = "Account does not exist";
		V_3 = _stringLiteral27F8746362C24CE15D0F5F0972CA224EA8E5153D;
	}

IL_011b:
	{
		// errorField.text = message;
		LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* L_28 = V_1;
		NullCheck(L_28);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_29 = L_28->___errorField_8;
		String_t* L_30 = V_3;
		NullCheck(L_29);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_29, L_30);
		goto IL_0164;
	}

IL_0129:
	{
		// user = LoginTask.Result;
		LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* L_31 = V_1;
		U3CU3Ec__DisplayClass15_0_t05D729EA93F5BDDB0ED11D765FB9C05FA7B2018E* L_32 = __this->___U3CU3E8__1_4;
		NullCheck(L_32);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_33 = L_32->___LoginTask_0;
		NullCheck(L_33);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_34;
		L_34 = Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F(L_33, Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var);
		NullCheck(L_31);
		L_31->___user_11 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_31->___user_11), (void*)L_34);
		// DataHolder.firebaseUser = user;
		LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* L_35 = V_1;
		NullCheck(L_35);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_36 = L_35->___user_11;
		((DataHolder_tB9ABE74E9D88472F78B64CD0CFF9083CE2820DFA_StaticFields*)il2cpp_codegen_static_fields_for(DataHolder_tB9ABE74E9D88472F78B64CD0CFF9083CE2820DFA_il2cpp_TypeInfo_var))->___firebaseUser_0 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&((DataHolder_tB9ABE74E9D88472F78B64CD0CFF9083CE2820DFA_StaticFields*)il2cpp_codegen_static_fields_for(DataHolder_tB9ABE74E9D88472F78B64CD0CFF9083CE2820DFA_il2cpp_TypeInfo_var))->___firebaseUser_0), (void*)L_36);
		// Debug.Log(user.UserId);
		LogInScript_t4C7640C3BDEDBF1F42356C815768A612B00590BF* L_37 = V_1;
		NullCheck(L_37);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_38 = L_37->___user_11;
		NullCheck(L_38);
		String_t* L_39;
		L_39 = FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0(L_38, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_39, NULL);
		// SceneManager.LoadScene(MENU_SCENE);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralE796D8428A31C89F4F32CCE284FFAFEF0A50CAED, NULL);
	}

IL_0164:
	{
		// }
		return (bool)0;
	}
}
// System.Object LogInScript/<Login>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoginU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAD8937587C4E4BDA7B442F92AFD2EA894B5FA2D0 (U3CLoginU3Ed__15_t7F0654C5FD47F9E0DC07696406C2AAB5156961ED* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LogInScript/<Login>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoginU3Ed__15_System_Collections_IEnumerator_Reset_m1B5C7DF239C8A061A7C4FA086C17B8DA8DF5DE80 (U3CLoginU3Ed__15_t7F0654C5FD47F9E0DC07696406C2AAB5156961ED* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoginU3Ed__15_System_Collections_IEnumerator_Reset_m1B5C7DF239C8A061A7C4FA086C17B8DA8DF5DE80_RuntimeMethod_var)));
	}
}
// System.Object LogInScript/<Login>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoginU3Ed__15_System_Collections_IEnumerator_get_Current_m93462F5230F51426B819546841381A94CA3763DE (U3CLoginU3Ed__15_t7F0654C5FD47F9E0DC07696406C2AAB5156961ED* __this, const RuntimeMethod* method) 
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
// System.Void RegistrationScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegistrationScript_Awake_m16D3056CB0937D500ABCAE73B1944237BE16E352 (RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegistrationScript_U3CAwakeU3Eb__11_0_m267F65901416FE2ED700D49190C295EFDAD09EDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_mAB52D6D57000543C9DD78F0D45BD7B66F819A0DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dbRef = FirebaseDatabase.DefaultInstance.RootReference;
		il2cpp_codegen_runtime_class_init_inline(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_0;
		L_0 = FirebaseDatabase_get_DefaultInstance_m5D2694D707EAE163776CC0FF92B92537BDD59118(NULL);
		NullCheck(L_0);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_1;
		L_1 = FirebaseDatabase_get_RootReference_m169B2E998E82228A8CD898E5CBDB20524281B434(L_0, NULL);
		__this->___dbRef_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dbRef_4), (void*)L_1);
		// FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task =>
		// {
		//     dependencyStatus = task.Result;
		// 
		//     if (dependencyStatus == DependencyStatus.Available)
		//     {
		//         InitializeFirebase();
		//     }
		//     else
		//     {
		//         Debug.LogError("Error:" + dependencyStatus);
		//     }
		// 
		// });
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* L_2;
		L_2 = FirebaseApp_CheckAndFixDependenciesAsync_mB21D0BA4D3C2F6C975D72DB0F2CEFF46A4361557(NULL);
		Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC* L_3 = (Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC*)il2cpp_codegen_object_new(Action_1_t72552EB3CFD9D41493135164276F7EE71F1132FC_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m4F6B8318AD92B94ABD9C753FFD7CEE0687417DAC(L_3, __this, (intptr_t)((void*)RegistrationScript_U3CAwakeU3Eb__11_0_m267F65901416FE2ED700D49190C295EFDAD09EDD_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = Task_1_ContinueWith_mAB52D6D57000543C9DD78F0D45BD7B66F819A0DD(L_2, L_3, Task_1_ContinueWith_mAB52D6D57000543C9DD78F0D45BD7B66F819A0DD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void RegistrationScript::InitializeFirebase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegistrationScript_InitializeFirebase_mF2B10AFDF3F75D39CAF3134FBF203F425C2D9D70 (RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// auth = FirebaseAuth.DefaultInstance;
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_0;
		L_0 = FirebaseAuth_get_DefaultInstance_m86A4E32D8DCDB80079317B58210090F3D3B1711F(NULL);
		__this->___auth_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___auth_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void RegistrationScript::RegisterButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegistrationScript_RegisterButton_m128BDB0032A257C807957B1474F2CB51AE327400 (RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Register(emailField.text, passwordField.text, nicknameField.text));
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___emailField_10;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_0, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = __this->___passwordField_12;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_2, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_4 = __this->___nicknameField_11;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_4, NULL);
		RuntimeObject* L_6;
		L_6 = RegistrationScript_Register_m498D53B18701B368A3B0D8C60A29BA7988884612(__this, L_1, L_3, L_5, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator RegistrationScript::Register(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RegistrationScript_Register_m498D53B18701B368A3B0D8C60A29BA7988884612 (RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* __this, String_t* ____email0, String_t* ____password1, String_t* ____username2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRegisterU3Ed__14_t0423E2CEB98AF02C4B09054906652E84A2EB4C31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRegisterU3Ed__14_t0423E2CEB98AF02C4B09054906652E84A2EB4C31* L_0 = (U3CRegisterU3Ed__14_t0423E2CEB98AF02C4B09054906652E84A2EB4C31*)il2cpp_codegen_object_new(U3CRegisterU3Ed__14_t0423E2CEB98AF02C4B09054906652E84A2EB4C31_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRegisterU3Ed__14__ctor_m735365862DA372FA70FABA404E4E2FB6DDB90693(L_0, 0, NULL);
		U3CRegisterU3Ed__14_t0423E2CEB98AF02C4B09054906652E84A2EB4C31* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CRegisterU3Ed__14_t0423E2CEB98AF02C4B09054906652E84A2EB4C31* L_2 = L_1;
		String_t* L_3 = ____email0;
		NullCheck(L_2);
		L_2->____email_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____email_4), (void*)L_3);
		U3CRegisterU3Ed__14_t0423E2CEB98AF02C4B09054906652E84A2EB4C31* L_4 = L_2;
		String_t* L_5 = ____password1;
		NullCheck(L_4);
		L_4->____password_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____password_5), (void*)L_5);
		U3CRegisterU3Ed__14_t0423E2CEB98AF02C4B09054906652E84A2EB4C31* L_6 = L_4;
		String_t* L_7 = ____username2;
		NullCheck(L_6);
		L_6->____username_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____username_2), (void*)L_7);
		return L_6;
	}
}
// System.Void RegistrationScript::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegistrationScript_SaveData_mBD72ED5213D52B591BE4C1FCB19241C068909AE0 (RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserData_tDFEC70DF1A749DA400CDBE27B7E6DD2E480376AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19DAC2BBD0713CAA8195656E2C9A7DFECCC2F9DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// UserData userData = new UserData(user.UserId, nicknameField.text, 0, 0,-1, 0);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_0 = __this->___user_7;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0(L_0, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = __this->___nicknameField_11;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_2, NULL);
		UserData_tDFEC70DF1A749DA400CDBE27B7E6DD2E480376AA* L_4 = (UserData_tDFEC70DF1A749DA400CDBE27B7E6DD2E480376AA*)il2cpp_codegen_object_new(UserData_tDFEC70DF1A749DA400CDBE27B7E6DD2E480376AA_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UserData__ctor_mC8B47A729B5D361026170E0623CF7AAC45628043(L_4, L_1, L_3, 0, 0, (-1.0f), 0, NULL);
		// string json = JsonUtility.ToJson(userData);
		String_t* L_5;
		L_5 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_4, NULL);
		V_0 = L_5;
		// Debug.Log("work");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral19DAC2BBD0713CAA8195656E2C9A7DFECCC2F9DC, NULL);
		// dbRef.Child("users").Child(user.UserId).SetRawJsonValueAsync(json);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_6 = __this->___dbRef_4;
		NullCheck(L_6);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_7;
		L_7 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_6, _stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79, NULL);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_8 = __this->___user_7;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0(L_8, NULL);
		NullCheck(L_7);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_10;
		L_10 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_7, L_9, NULL);
		String_t* L_11 = V_0;
		NullCheck(L_10);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_12;
		L_12 = DatabaseReference_SetRawJsonValueAsync_m9490E9CAA051A1E371954DF33B34505FC09AA080(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void RegistrationScript::GoToLogInMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegistrationScript_GoToLogInMenu_mB21E92A439B19AC13E6D760AEAA04E2AF222C12D (RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFED6610311FE85DAA2ACC94C88787B8F372192E5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(LOG_IN_MENU_SCENE);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralFED6610311FE85DAA2ACC94C88787B8F372192E5, NULL);
		// }
		return;
	}
}
// System.Void RegistrationScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegistrationScript__ctor_m29D253F55E53FE8839D7E6F5070A6CAA3DF3EDFF (RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void RegistrationScript::<Awake>b__11_0(System.Threading.Tasks.Task`1<Firebase.DependencyStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegistrationScript_U3CAwakeU3Eb__11_0_m267F65901416FE2ED700D49190C295EFDAD09EDD (RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* __this, Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77B74617F18565C5FFD6A03E2FD341AB6136F5E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dependencyStatus = task.Result;
		Task_1_tCDCA9B2073B1AC4ED4537A6D74742D20B122E1EF* L_0 = ___task0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA(L_0, Task_1_get_Result_m543F02EC56EEA4AAED7101434F488D890414A3DA_RuntimeMethod_var);
		__this->___dependencyStatus_5 = L_1;
		// if (dependencyStatus == DependencyStatus.Available)
		int32_t L_2 = __this->___dependencyStatus_5;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// InitializeFirebase();
		RegistrationScript_InitializeFirebase_mF2B10AFDF3F75D39CAF3134FBF203F425C2D9D70(__this, NULL);
		return;
	}

IL_001b:
	{
		// Debug.LogError("Error:" + dependencyStatus);
		int32_t* L_3 = (&__this->___dependencyStatus_5);
		Il2CppFakeBox<int32_t> L_4(DependencyStatus_t9DA2DB2B2AC17E9DA549331B93778091496D8195_il2cpp_TypeInfo_var, L_3);
		String_t* L_5;
		L_5 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_4), NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral77B74617F18565C5FFD6A03E2FD341AB6136F5E8, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_6, NULL);
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
// System.Void RegistrationScript/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m5E7AD9B586D012DF5CC1705E2D36BCA906041558 (U3CU3Ec__DisplayClass14_0_t1A1AB8B17F5DE1FCDC09C7919D8A30CE29072813* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean RegistrationScript/<>c__DisplayClass14_0::<Register>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass14_0_U3CRegisterU3Eb__0_m1738480D7812BE66A41D5CD323D88B413F15FD00 (U3CU3Ec__DisplayClass14_0_t1A1AB8B17F5DE1FCDC09C7919D8A30CE29072813* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(predicate: () => RegisterTask.IsCompleted);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_0 = __this->___RegisterTask_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_0, NULL);
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
// System.Void RegistrationScript/<>c__DisplayClass14_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_1__ctor_m03AB5BF398D8CD35B26D229A2A6C1A28F876CA04 (U3CU3Ec__DisplayClass14_1_t6698BF633C9C845416E0878DA65F27200F3F4B5F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean RegistrationScript/<>c__DisplayClass14_1::<Register>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass14_1_U3CRegisterU3Eb__1_mB2474572DE8AF1A83E523938622083D2796E844C (U3CU3Ec__DisplayClass14_1_t6698BF633C9C845416E0878DA65F27200F3F4B5F* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(predicate: () => profileTask.IsCompleted);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = __this->___profileTask_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_0, NULL);
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
// System.Void RegistrationScript/<Register>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterU3Ed__14__ctor_m735365862DA372FA70FABA404E4E2FB6DDB90693 (U3CRegisterU3Ed__14_t0423E2CEB98AF02C4B09054906652E84A2EB4C31* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void RegistrationScript/<Register>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterU3Ed__14_System_IDisposable_Dispose_m8329D3A6F34E1F26C6ABF4BBCA7E2D00832A84E3 (U3CRegisterU3Ed__14_t0423E2CEB98AF02C4B09054906652E84A2EB4C31* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean RegistrationScript/<Register>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRegisterU3Ed__14_MoveNext_m5E57FEADAF11E873BBEBEFF4977A46A292DD9E61 (U3CRegisterU3Ed__14_t0423E2CEB98AF02C4B09054906652E84A2EB4C31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataHolder_tB9ABE74E9D88472F78B64CD0CFF9083CE2820DFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CRegisterU3Eb__0_m1738480D7812BE66A41D5CD323D88B413F15FD00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_t1A1AB8B17F5DE1FCDC09C7919D8A30CE29072813_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_1_U3CRegisterU3Eb__1_mB2474572DE8AF1A83E523938622083D2796E844C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_1_t6698BF633C9C845416E0878DA65F27200F3F4B5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserProfile_t6D157B509640316F20D5DDD5A2BEA9FB952A269B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2180EB6DF1971EA26C571DC7E32E574C970B2E92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral698B48DBAE676A78B713CAB03E07077507048E31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8188AE73D71676AD86B779E278457AF04FF7C498);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95FA4E8C36D021EF760807304F1292B41AC2F220);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE796D8428A31C89F4F32CCE284FFAFEF0A50CAED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECF72959A3A0E2E2A03DC770A2DD8A0B4C3B1CFF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* V_1 = NULL;
	String_t* V_2 = NULL;
	UserProfile_t6D157B509640316F20D5DDD5A2BEA9FB952A269B* V_3 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00d4;
			}
			case 2:
			{
				goto IL_01d7;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(_username == "")
		String_t* L_3 = __this->____username_2;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		// errorField.text = "Missing name";
		RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* L_5 = V_1;
		NullCheck(L_5);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_6 = L_5->___errorField_14;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, _stringLiteral95FA4E8C36D021EF760807304F1292B41AC2F220);
		goto IL_026a;
	}

IL_0050:
	{
		// else if(passwordField.text != repeatPasswordField.text)
		RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* L_7 = V_1;
		NullCheck(L_7);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_8 = L_7->___passwordField_12;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_8, NULL);
		RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* L_10 = V_1;
		NullCheck(L_10);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_11 = L_10->___repeatPasswordField_13;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_11, NULL);
		bool L_13;
		L_13 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_9, L_12, NULL);
		if (!L_13)
		{
			goto IL_0082;
		}
	}
	{
		// errorField.text = "Passwords does not match";
		RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* L_14 = V_1;
		NullCheck(L_14);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_15 = L_14->___errorField_14;
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_15, _stringLiteral698B48DBAE676A78B713CAB03E07077507048E31);
		goto IL_026a;
	}

IL_0082:
	{
		U3CU3Ec__DisplayClass14_0_t1A1AB8B17F5DE1FCDC09C7919D8A30CE29072813* L_16 = (U3CU3Ec__DisplayClass14_0_t1A1AB8B17F5DE1FCDC09C7919D8A30CE29072813*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_t1A1AB8B17F5DE1FCDC09C7919D8A30CE29072813_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		U3CU3Ec__DisplayClass14_0__ctor_m5E7AD9B586D012DF5CC1705E2D36BCA906041558(L_16, NULL);
		__this->___U3CU3E8__1_6 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_6), (void*)L_16);
		// var RegisterTask = auth.CreateUserWithEmailAndPasswordAsync(_email, _password);
		U3CU3Ec__DisplayClass14_0_t1A1AB8B17F5DE1FCDC09C7919D8A30CE29072813* L_17 = __this->___U3CU3E8__1_6;
		RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* L_18 = V_1;
		NullCheck(L_18);
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_19 = L_18->___auth_6;
		String_t* L_20 = __this->____email_4;
		String_t* L_21 = __this->____password_5;
		NullCheck(L_19);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_22;
		L_22 = FirebaseAuth_CreateUserWithEmailAndPasswordAsync_m90F9E8CBBDBFC03A6B7AF634A61DF47B1618658B(L_19, L_20, L_21, NULL);
		NullCheck(L_17);
		L_17->___RegisterTask_0 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___RegisterTask_0), (void*)L_22);
		// yield return new WaitUntil(predicate: () => RegisterTask.IsCompleted);
		U3CU3Ec__DisplayClass14_0_t1A1AB8B17F5DE1FCDC09C7919D8A30CE29072813* L_23 = __this->___U3CU3E8__1_6;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_24 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_24, L_23, (intptr_t)((void*)U3CU3Ec__DisplayClass14_0_U3CRegisterU3Eb__0_m1738480D7812BE66A41D5CD323D88B413F15FD00_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_25 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_25, L_24, NULL);
		__this->___U3CU3E2__current_1 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_25);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00d4:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log(RegisterTask.Result.Email);
		U3CU3Ec__DisplayClass14_0_t1A1AB8B17F5DE1FCDC09C7919D8A30CE29072813* L_26 = __this->___U3CU3E8__1_6;
		NullCheck(L_26);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_27 = L_26->___RegisterTask_0;
		NullCheck(L_27);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_28;
		L_28 = Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F(L_27, Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var);
		NullCheck(L_28);
		String_t* L_29;
		L_29 = FirebaseUser_get_Email_mA5E5359FFA20465E1D5570BC3FCC645648BAAAF0(L_28, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_29, NULL);
		// if (RegisterTask.Exception != null)
		U3CU3Ec__DisplayClass14_0_t1A1AB8B17F5DE1FCDC09C7919D8A30CE29072813* L_30 = __this->___U3CU3E8__1_6;
		NullCheck(L_30);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_31 = L_30->___RegisterTask_0;
		NullCheck(L_31);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_32;
		L_32 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_31, NULL);
		if (!L_32)
		{
			goto IL_015d;
		}
	}
	{
		// Debug.LogWarning(message: $"Failed to register task with{RegisterTask.Exception}");
		U3CU3Ec__DisplayClass14_0_t1A1AB8B17F5DE1FCDC09C7919D8A30CE29072813* L_33 = __this->___U3CU3E8__1_6;
		NullCheck(L_33);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_34 = L_33->___RegisterTask_0;
		NullCheck(L_34);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_35;
		L_35 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_34, NULL);
		String_t* L_36;
		L_36 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralECF72959A3A0E2E2A03DC770A2DD8A0B4C3B1CFF, L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_36, NULL);
		// FirebaseException firebaseEx = RegisterTask.Exception.GetBaseException() as FirebaseException;
		U3CU3Ec__DisplayClass14_0_t1A1AB8B17F5DE1FCDC09C7919D8A30CE29072813* L_37 = __this->___U3CU3E8__1_6;
		NullCheck(L_37);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_38 = L_37->___RegisterTask_0;
		NullCheck(L_38);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_39;
		L_39 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_38, NULL);
		NullCheck(L_39);
		Exception_t* L_40;
		L_40 = VirtualFuncInvoker0< Exception_t* >::Invoke(7 /* System.Exception System.Exception::GetBaseException() */, L_39);
		// AuthError errorCode = (AuthError)firebaseEx.ErrorCode;
		NullCheck(((FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED*)IsInstSealed((RuntimeObject*)L_40, FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var)));
		int32_t L_41;
		L_41 = FirebaseException_get_ErrorCode_mE665B1ADB8DD846C3C604DD72F25C1B476EB3A66_inline(((FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED*)IsInstSealed((RuntimeObject*)L_40, FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var)), NULL);
		// string message = "Register failed";
		V_2 = _stringLiteral2180EB6DF1971EA26C571DC7E32E574C970B2E92;
		// errorField.text = message;
		RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* L_42 = V_1;
		NullCheck(L_42);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_43 = L_42->___errorField_14;
		String_t* L_44 = V_2;
		NullCheck(L_43);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_43, L_44);
		goto IL_0263;
	}

IL_015d:
	{
		// user = RegisterTask.Result;
		RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* L_45 = V_1;
		U3CU3Ec__DisplayClass14_0_t1A1AB8B17F5DE1FCDC09C7919D8A30CE29072813* L_46 = __this->___U3CU3E8__1_6;
		NullCheck(L_46);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_47 = L_46->___RegisterTask_0;
		NullCheck(L_47);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_48;
		L_48 = Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F(L_47, Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var);
		NullCheck(L_45);
		L_45->___user_7 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&L_45->___user_7), (void*)L_48);
		// if(user !=null)
		RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* L_49 = V_1;
		NullCheck(L_49);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_50 = L_49->___user_7;
		if (!L_50)
		{
			goto IL_0263;
		}
	}
	{
		U3CU3Ec__DisplayClass14_1_t6698BF633C9C845416E0878DA65F27200F3F4B5F* L_51 = (U3CU3Ec__DisplayClass14_1_t6698BF633C9C845416E0878DA65F27200F3F4B5F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_1_t6698BF633C9C845416E0878DA65F27200F3F4B5F_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		U3CU3Ec__DisplayClass14_1__ctor_m03AB5BF398D8CD35B26D229A2A6C1A28F876CA04(L_51, NULL);
		__this->___U3CU3E8__2_7 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__2_7), (void*)L_51);
		// UserProfile profile = new UserProfile { DisplayName = _username};
		UserProfile_t6D157B509640316F20D5DDD5A2BEA9FB952A269B* L_52 = (UserProfile_t6D157B509640316F20D5DDD5A2BEA9FB952A269B*)il2cpp_codegen_object_new(UserProfile_t6D157B509640316F20D5DDD5A2BEA9FB952A269B_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		UserProfile__ctor_m8DCD7AE22CB46C7DD542A76F42D9D310919B868A(L_52, NULL);
		UserProfile_t6D157B509640316F20D5DDD5A2BEA9FB952A269B* L_53 = L_52;
		String_t* L_54 = __this->____username_2;
		NullCheck(L_53);
		UserProfile_set_DisplayName_m0761D316D0CF8072A09D5ECFFFDE8EEC2B19902E(L_53, L_54, NULL);
		V_3 = L_53;
		// var profileTask = user.UpdateUserProfileAsync(profile);
		U3CU3Ec__DisplayClass14_1_t6698BF633C9C845416E0878DA65F27200F3F4B5F* L_55 = __this->___U3CU3E8__2_7;
		RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* L_56 = V_1;
		NullCheck(L_56);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_57 = L_56->___user_7;
		UserProfile_t6D157B509640316F20D5DDD5A2BEA9FB952A269B* L_58 = V_3;
		NullCheck(L_57);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_59;
		L_59 = FirebaseUser_UpdateUserProfileAsync_m5B9264DA1787BE70D6E9149B13C60F1A62524C2A(L_57, L_58, NULL);
		NullCheck(L_55);
		L_55->___profileTask_0 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&L_55->___profileTask_0), (void*)L_59);
		// yield return new WaitUntil(predicate: () => profileTask.IsCompleted);
		U3CU3Ec__DisplayClass14_1_t6698BF633C9C845416E0878DA65F27200F3F4B5F* L_60 = __this->___U3CU3E8__2_7;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_61 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_61);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_61, L_60, (intptr_t)((void*)U3CU3Ec__DisplayClass14_1_U3CRegisterU3Eb__1_mB2474572DE8AF1A83E523938622083D2796E844C_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_62 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_62);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_62, L_61, NULL);
		__this->___U3CU3E2__current_1 = L_62;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_62);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_01d7:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (profileTask.Exception != null)
		U3CU3Ec__DisplayClass14_1_t6698BF633C9C845416E0878DA65F27200F3F4B5F* L_63 = __this->___U3CU3E8__2_7;
		NullCheck(L_63);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_64 = L_63->___profileTask_0;
		NullCheck(L_64);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_65;
		L_65 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_64, NULL);
		if (!L_65)
		{
			goto IL_0241;
		}
	}
	{
		// Debug.LogWarning(message: $"Failed to register task with{profileTask.Exception}");
		U3CU3Ec__DisplayClass14_1_t6698BF633C9C845416E0878DA65F27200F3F4B5F* L_66 = __this->___U3CU3E8__2_7;
		NullCheck(L_66);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_67 = L_66->___profileTask_0;
		NullCheck(L_67);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_68;
		L_68 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_67, NULL);
		String_t* L_69;
		L_69 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralECF72959A3A0E2E2A03DC770A2DD8A0B4C3B1CFF, L_68, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_69, NULL);
		// FirebaseException firebaseEx = RegisterTask.Exception.GetBaseException() as FirebaseException;
		U3CU3Ec__DisplayClass14_0_t1A1AB8B17F5DE1FCDC09C7919D8A30CE29072813* L_70 = __this->___U3CU3E8__1_6;
		NullCheck(L_70);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_71 = L_70->___RegisterTask_0;
		NullCheck(L_71);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_72;
		L_72 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_71, NULL);
		NullCheck(L_72);
		Exception_t* L_73;
		L_73 = VirtualFuncInvoker0< Exception_t* >::Invoke(7 /* System.Exception System.Exception::GetBaseException() */, L_72);
		// AuthError errorCode = (AuthError)firebaseEx.ErrorCode;
		NullCheck(((FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED*)IsInstSealed((RuntimeObject*)L_73, FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var)));
		int32_t L_74;
		L_74 = FirebaseException_get_ErrorCode_mE665B1ADB8DD846C3C604DD72F25C1B476EB3A66_inline(((FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED*)IsInstSealed((RuntimeObject*)L_73, FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var)), NULL);
		// errorField.text = "_username set failed";
		RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* L_75 = V_1;
		NullCheck(L_75);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_76 = L_75->___errorField_14;
		NullCheck(L_76);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_76, _stringLiteral8188AE73D71676AD86B779E278457AF04FF7C498);
		goto IL_025c;
	}

IL_0241:
	{
		// DataHolder.firebaseUser = user;
		RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* L_77 = V_1;
		NullCheck(L_77);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_78 = L_77->___user_7;
		((DataHolder_tB9ABE74E9D88472F78B64CD0CFF9083CE2820DFA_StaticFields*)il2cpp_codegen_static_fields_for(DataHolder_tB9ABE74E9D88472F78B64CD0CFF9083CE2820DFA_il2cpp_TypeInfo_var))->___firebaseUser_0 = L_78;
		Il2CppCodeGenWriteBarrier((void**)(&((DataHolder_tB9ABE74E9D88472F78B64CD0CFF9083CE2820DFA_StaticFields*)il2cpp_codegen_static_fields_for(DataHolder_tB9ABE74E9D88472F78B64CD0CFF9083CE2820DFA_il2cpp_TypeInfo_var))->___firebaseUser_0), (void*)L_78);
		// SaveData();
		RegistrationScript_tC7D9377D35F34678A46F0D6994F7A811BEBBBEF5* L_79 = V_1;
		NullCheck(L_79);
		RegistrationScript_SaveData_mBD72ED5213D52B591BE4C1FCB19241C068909AE0(L_79, NULL);
		// SceneManager.LoadScene(MAIN_SCENE);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralE796D8428A31C89F4F32CCE284FFAFEF0A50CAED, NULL);
	}

IL_025c:
	{
		// }
		__this->___U3CU3E8__2_7 = (U3CU3Ec__DisplayClass14_1_t6698BF633C9C845416E0878DA65F27200F3F4B5F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__2_7), (void*)(U3CU3Ec__DisplayClass14_1_t6698BF633C9C845416E0878DA65F27200F3F4B5F*)NULL);
	}

IL_0263:
	{
		// }
		__this->___U3CU3E8__1_6 = (U3CU3Ec__DisplayClass14_0_t1A1AB8B17F5DE1FCDC09C7919D8A30CE29072813*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_6), (void*)(U3CU3Ec__DisplayClass14_0_t1A1AB8B17F5DE1FCDC09C7919D8A30CE29072813*)NULL);
	}

IL_026a:
	{
		// }
		return (bool)0;
	}
}
// System.Object RegistrationScript/<Register>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRegisterU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE897A7DC88487A1CEC7A175D3E0045E5D3BB0E16 (U3CRegisterU3Ed__14_t0423E2CEB98AF02C4B09054906652E84A2EB4C31* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void RegistrationScript/<Register>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterU3Ed__14_System_Collections_IEnumerator_Reset_mF99F08B6398E0E462E3661D9F3B8FFD669046B06 (U3CRegisterU3Ed__14_t0423E2CEB98AF02C4B09054906652E84A2EB4C31* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRegisterU3Ed__14_System_Collections_IEnumerator_Reset_mF99F08B6398E0E462E3661D9F3B8FFD669046B06_RuntimeMethod_var)));
	}
}
// System.Object RegistrationScript/<Register>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRegisterU3Ed__14_System_Collections_IEnumerator_get_Current_mCF1F9B318FC06CF4F50FC5DBF350A42A67EC349D (U3CRegisterU3Ed__14_t0423E2CEB98AF02C4B09054906652E84A2EB4C31* __this, const RuntimeMethod* method) 
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
// System.Void FirebaseDatabaseController::set_reverseList(System.Collections.Generic.List`1<Firebase.Database.DataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabaseController_set_reverseList_m95532DDE76B7D19F8CB022E9FD93E5582A550CA9 (FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* __this, List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<DataSnapshot> reverseList { private set; get; }
		List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A* L_0 = ___value0;
		__this->___U3CreverseListU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreverseListU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Firebase.Database.DataSnapshot> FirebaseDatabaseController::get_reverseList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A* FirebaseDatabaseController_get_reverseList_m50F38D5AFA9AD40779E1ECB4E47E4A02D3827EC1 (FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* __this, const RuntimeMethod* method) 
{
	{
		// public List<DataSnapshot> reverseList { private set; get; }
		List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A* L_0 = __this->___U3CreverseListU3Ek__BackingField_5;
		return L_0;
	}
}
// UserData FirebaseDatabaseController::get_UserDataTransfer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserData_tDFEC70DF1A749DA400CDBE27B7E6DD2E480376AA* FirebaseDatabaseController_get_UserDataTransfer_mC195636266570B66F16348DB46259EA224400AD4 (FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* __this, const RuntimeMethod* method) 
{
	{
		// public UserData UserDataTransfer => _userData;
		UserData_tDFEC70DF1A749DA400CDBE27B7E6DD2E480376AA* L_0 = __this->____userData_6;
		return L_0;
	}
}
// System.Void FirebaseDatabaseController::add_onDataLoadedPlayer(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabaseController_add_onDataLoadedPlayer_mDA5428931910A30647046B74CD481881E270493A (FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___onDataLoadedPlayer_7;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___onDataLoadedPlayer_7);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FirebaseDatabaseController::remove_onDataLoadedPlayer(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabaseController_remove_onDataLoadedPlayer_m90AB29BAAA4AC0343B173581DBB392E0CDF2EC37 (FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___onDataLoadedPlayer_7;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___onDataLoadedPlayer_7);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FirebaseDatabaseController::add_onDataLoadedScore(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabaseController_add_onDataLoadedScore_m643C96B13310123DDAB6547FE2045078B11B5F14 (FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___onDataLoadedScore_8;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___onDataLoadedScore_8);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FirebaseDatabaseController::remove_onDataLoadedScore(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabaseController_remove_onDataLoadedScore_mE23D0F8FDF24147B5E1651CEA5C558436D3F4C51 (FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___onDataLoadedScore_8;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___onDataLoadedScore_8);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FirebaseDatabaseController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabaseController_Start_m07C537B780B1103263150E424A03E63D6AD60F23 (FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataHolder_tB9ABE74E9D88472F78B64CD0CFF9083CE2820DFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dbRef = FirebaseDatabase.DefaultInstance.RootReference;
		il2cpp_codegen_runtime_class_init_inline(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_0;
		L_0 = FirebaseDatabase_get_DefaultInstance_m5D2694D707EAE163776CC0FF92B92537BDD59118(NULL);
		NullCheck(L_0);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_1;
		L_1 = FirebaseDatabase_get_RootReference_m169B2E998E82228A8CD898E5CBDB20524281B434(L_0, NULL);
		__this->___dbRef_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dbRef_4), (void*)L_1);
		// StartCoroutine(LoadData(DataHolder.firebaseUser.UserId.ToString()));
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_2 = ((DataHolder_tB9ABE74E9D88472F78B64CD0CFF9083CE2820DFA_StaticFields*)il2cpp_codegen_static_fields_for(DataHolder_tB9ABE74E9D88472F78B64CD0CFF9083CE2820DFA_il2cpp_TypeInfo_var))->___firebaseUser_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		RuntimeObject* L_5;
		L_5 = FirebaseDatabaseController_LoadData_m277B51B32F39D2F4F9688712429EF1C6BFACD6CF(__this, L_4, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// Debug.Log(DataHolder.firebaseUser.UserId.ToString());
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_7 = ((DataHolder_tB9ABE74E9D88472F78B64CD0CFF9083CE2820DFA_StaticFields*)il2cpp_codegen_static_fields_for(DataHolder_tB9ABE74E9D88472F78B64CD0CFF9083CE2820DFA_il2cpp_TypeInfo_var))->___firebaseUser_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0(L_7, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_9, NULL);
		// StartCoroutine(LoadAllUserByScore());
		RuntimeObject* L_10;
		L_10 = FirebaseDatabaseController_LoadAllUserByScore_m3990348D3225724851492439DEE97E385AC744C0(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator FirebaseDatabaseController::LoadAllUserByScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseDatabaseController_LoadAllUserByScore_m3990348D3225724851492439DEE97E385AC744C0 (FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadAllUserByScoreU3Ed__15_tB9686D517FDF8C10D14EF4E31744F842BC5B8B93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadAllUserByScoreU3Ed__15_tB9686D517FDF8C10D14EF4E31744F842BC5B8B93* L_0 = (U3CLoadAllUserByScoreU3Ed__15_tB9686D517FDF8C10D14EF4E31744F842BC5B8B93*)il2cpp_codegen_object_new(U3CLoadAllUserByScoreU3Ed__15_tB9686D517FDF8C10D14EF4E31744F842BC5B8B93_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadAllUserByScoreU3Ed__15__ctor_m4D5F96B166C439CF70973F1BCF96295FCA4660EE(L_0, 0, NULL);
		U3CLoadAllUserByScoreU3Ed__15_tB9686D517FDF8C10D14EF4E31744F842BC5B8B93* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator FirebaseDatabaseController::LoadData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseDatabaseController_LoadData_m277B51B32F39D2F4F9688712429EF1C6BFACD6CF (FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* __this, String_t* ___userID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadDataU3Ed__16_t57FBF8327E5B175B0B92B54D8BDC2360765B4F52_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadDataU3Ed__16_t57FBF8327E5B175B0B92B54D8BDC2360765B4F52* L_0 = (U3CLoadDataU3Ed__16_t57FBF8327E5B175B0B92B54D8BDC2360765B4F52*)il2cpp_codegen_object_new(U3CLoadDataU3Ed__16_t57FBF8327E5B175B0B92B54D8BDC2360765B4F52_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadDataU3Ed__16__ctor_m051959CDB914AF089995592034EC8FFC3ADA6E86(L_0, 0, NULL);
		U3CLoadDataU3Ed__16_t57FBF8327E5B175B0B92B54D8BDC2360765B4F52* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CLoadDataU3Ed__16_t57FBF8327E5B175B0B92B54D8BDC2360765B4F52* L_2 = L_1;
		String_t* L_3 = ___userID0;
		NullCheck(L_2);
		L_2->___userID_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___userID_3), (void*)L_3);
		return L_2;
	}
}
// System.Void FirebaseDatabaseController::ChangeCurrentUser(System.String,System.String,System.Int32,System.Int32,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabaseController_ChangeCurrentUser_m56C888F539BBE9C98365FB398EED858B89986097 (FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* __this, String_t* ___id0, String_t* ___nickName1, int32_t ___goldCoins2, int32_t ___avatarIcon3, float ___bestTime4, int32_t ___car5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserData_tDFEC70DF1A749DA400CDBE27B7E6DD2E480376AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _userData = new UserData(id, nickName, goldCoins, avatarIcon, bestTime, car);
		String_t* L_0 = ___id0;
		String_t* L_1 = ___nickName1;
		int32_t L_2 = ___goldCoins2;
		int32_t L_3 = ___avatarIcon3;
		float L_4 = ___bestTime4;
		int32_t L_5 = ___car5;
		UserData_tDFEC70DF1A749DA400CDBE27B7E6DD2E480376AA* L_6 = (UserData_tDFEC70DF1A749DA400CDBE27B7E6DD2E480376AA*)il2cpp_codegen_object_new(UserData_tDFEC70DF1A749DA400CDBE27B7E6DD2E480376AA_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UserData__ctor_mC8B47A729B5D361026170E0623CF7AAC45628043(L_6, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		__this->____userData_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____userData_6), (void*)L_6);
		// SaveData(id, nickName, goldCoins, avatarIcon, bestTime, car);
		String_t* L_7 = ___id0;
		String_t* L_8 = ___nickName1;
		int32_t L_9 = ___goldCoins2;
		int32_t L_10 = ___avatarIcon3;
		float L_11 = ___bestTime4;
		int32_t L_12 = ___car5;
		FirebaseDatabaseController_SaveData_mCD7398B8F21F0DC3638D6FF44BE439F36011F48E(__this, L_7, L_8, L_9, L_10, L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void FirebaseDatabaseController::SaveData(System.String,System.String,System.Int32,System.Int32,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabaseController_SaveData_mCD7398B8F21F0DC3638D6FF44BE439F36011F48E (FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* __this, String_t* ___id0, String_t* ___nickName1, int32_t ___goldCoins2, int32_t ___avatarIcon3, float ___bestTime4, int32_t ___car5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserData_tDFEC70DF1A749DA400CDBE27B7E6DD2E480376AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// UserData user2229 = new UserData( id,  nickName,  goldCoins,avatarIcon,  bestTime,  car);
		String_t* L_0 = ___id0;
		String_t* L_1 = ___nickName1;
		int32_t L_2 = ___goldCoins2;
		int32_t L_3 = ___avatarIcon3;
		float L_4 = ___bestTime4;
		int32_t L_5 = ___car5;
		UserData_tDFEC70DF1A749DA400CDBE27B7E6DD2E480376AA* L_6 = (UserData_tDFEC70DF1A749DA400CDBE27B7E6DD2E480376AA*)il2cpp_codegen_object_new(UserData_tDFEC70DF1A749DA400CDBE27B7E6DD2E480376AA_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UserData__ctor_mC8B47A729B5D361026170E0623CF7AAC45628043(L_6, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		// string json = JsonUtility.ToJson(user2229);
		String_t* L_7;
		L_7 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_6, NULL);
		V_0 = L_7;
		// dbRef.Child("users").Child(id).SetRawJsonValueAsync(json);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_8 = __this->___dbRef_4;
		NullCheck(L_8);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_9;
		L_9 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_8, _stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79, NULL);
		String_t* L_10 = ___id0;
		NullCheck(L_9);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_11;
		L_11 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_9, L_10, NULL);
		String_t* L_12 = V_0;
		NullCheck(L_11);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_13;
		L_13 = DatabaseReference_SetRawJsonValueAsync_m9490E9CAA051A1E371954DF33B34505FC09AA080(L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void FirebaseDatabaseController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabaseController__ctor_mDF8B1777D55D21072F3C819A49C1C482A1779E0E (FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FirebaseDatabaseController/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_mFF1079D128FC26870B22F8C2F7CD3ABF5A7D24BB (U3CU3Ec__DisplayClass15_0_t33474489BD4664254EEBAE372243ADB8FD062C5B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean FirebaseDatabaseController/<>c__DisplayClass15_0::<LoadAllUserByScore>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass15_0_U3CLoadAllUserByScoreU3Eb__0_m4E34DB919ACDFB63C56208916591081A8C457DF8 (U3CU3Ec__DisplayClass15_0_t33474489BD4664254EEBAE372243ADB8FD062C5B* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(predicate: () => user.IsCompleted);
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_0 = __this->___user_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_0, NULL);
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
// System.Void FirebaseDatabaseController/<LoadAllUserByScore>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAllUserByScoreU3Ed__15__ctor_m4D5F96B166C439CF70973F1BCF96295FCA4660EE (U3CLoadAllUserByScoreU3Ed__15_tB9686D517FDF8C10D14EF4E31744F842BC5B8B93* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FirebaseDatabaseController/<LoadAllUserByScore>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAllUserByScoreU3Ed__15_System_IDisposable_Dispose_m676035B1D6AC694F71B6DF65E67738C192722DC3 (U3CLoadAllUserByScoreU3Ed__15_tB9686D517FDF8C10D14EF4E31744F842BC5B8B93* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FirebaseDatabaseController/<LoadAllUserByScore>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadAllUserByScoreU3Ed__15_MoveNext_mB4A197E301E8654CE85410B794437ECAF508DA61 (U3CLoadAllUserByScoreU3Ed__15_tB9686D517FDF8C10D14EF4E31744F842BC5B8B93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tBC9C31DD44D05A2C774F76CC1C6C912FB9541D70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t89D6D9FAD8F93015339F011596FA51B8F53D3248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEB985D26AF75351E822117FB3B8F2C531BF53EAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Reverse_m2965DA079F8E0D4ACD89655BDD7104E8A2DF1C2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB6067CADF91161BECA8597A16AE8DD4C94068C98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_U3CLoadAllUserByScoreU3Eb__0_m4E34DB919ACDFB63C56208916591081A8C457DF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_t33474489BD4664254EEBAE372243ADB8FD062C5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60294D60F29816DC7466D4B0F8C0E7D6D96CAC42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* V_3 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B18_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B17_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0083;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		U3CU3Ec__DisplayClass15_0_t33474489BD4664254EEBAE372243ADB8FD062C5B* L_4 = (U3CU3Ec__DisplayClass15_0_t33474489BD4664254EEBAE372243ADB8FD062C5B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass15_0_t33474489BD4664254EEBAE372243ADB8FD062C5B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		U3CU3Ec__DisplayClass15_0__ctor_mFF1079D128FC26870B22F8C2F7CD3ABF5A7D24BB(L_4, NULL);
		__this->___U3CU3E8__1_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_3), (void*)L_4);
		// reverseList = new List<DataSnapshot>();
		FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* L_5 = V_1;
		List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A* L_6 = (List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A*)il2cpp_codegen_object_new(List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_mB6067CADF91161BECA8597A16AE8DD4C94068C98(L_6, List_1__ctor_mB6067CADF91161BECA8597A16AE8DD4C94068C98_RuntimeMethod_var);
		NullCheck(L_5);
		FirebaseDatabaseController_set_reverseList_m95532DDE76B7D19F8CB022E9FD93E5582A550CA9_inline(L_5, L_6, NULL);
		// var user = dbRef.Child("users").OrderByChild("bestTime").GetValueAsync();
		U3CU3Ec__DisplayClass15_0_t33474489BD4664254EEBAE372243ADB8FD062C5B* L_7 = __this->___U3CU3E8__1_3;
		FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* L_8 = V_1;
		NullCheck(L_8);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_9 = L_8->___dbRef_4;
		NullCheck(L_9);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_10;
		L_10 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_9, _stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79, NULL);
		NullCheck(L_10);
		Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* L_11;
		L_11 = Query_OrderByChild_mB7B1B0159F1C01D44ADB7D838A9DC3EE9C36A897(L_10, _stringLiteral60294D60F29816DC7466D4B0F8C0E7D6D96CAC42, NULL);
		NullCheck(L_11);
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_12;
		L_12 = Query_GetValueAsync_mFEB57CCE078D10FC3A6DA6DA2A7DCD16CC4673F5(L_11, NULL);
		NullCheck(L_7);
		L_7->___user_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___user_0), (void*)L_12);
		// yield return new WaitUntil(predicate: () => user.IsCompleted);
		U3CU3Ec__DisplayClass15_0_t33474489BD4664254EEBAE372243ADB8FD062C5B* L_13 = __this->___U3CU3E8__1_3;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_14 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_14, L_13, (intptr_t)((void*)U3CU3Ec__DisplayClass15_0_U3CLoadAllUserByScoreU3Eb__0_m4E34DB919ACDFB63C56208916591081A8C457DF8_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_15 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_15, L_14, NULL);
		__this->___U3CU3E2__current_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_15);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0083:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (user.Exception != null)
		U3CU3Ec__DisplayClass15_0_t33474489BD4664254EEBAE372243ADB8FD062C5B* L_16 = __this->___U3CU3E8__1_3;
		NullCheck(L_16);
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_17 = L_16->___user_0;
		NullCheck(L_17);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_18;
		L_18 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_17, NULL);
		if (!L_18)
		{
			goto IL_00b6;
		}
	}
	{
		// Debug.LogError(user.Exception);
		U3CU3Ec__DisplayClass15_0_t33474489BD4664254EEBAE372243ADB8FD062C5B* L_19 = __this->___U3CU3E8__1_3;
		NullCheck(L_19);
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_20 = L_19->___user_0;
		NullCheck(L_20);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_21;
		L_21 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_21, NULL);
		goto IL_0139;
	}

IL_00b6:
	{
		// else if (user.Result.Value == null)
		U3CU3Ec__DisplayClass15_0_t33474489BD4664254EEBAE372243ADB8FD062C5B* L_22 = __this->___U3CU3E8__1_3;
		NullCheck(L_22);
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_23 = L_22->___user_0;
		NullCheck(L_23);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_24;
		L_24 = Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C(L_23, Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C_RuntimeMethod_var);
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = DataSnapshot_get_Value_mF787DB763C81F79ED7CC2621AC49708EB8A6DBA2(L_24, NULL);
		if (L_25)
		{
			goto IL_00d9;
		}
	}
	{
		// Debug.Log("Null");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9, NULL);
		goto IL_0139;
	}

IL_00d9:
	{
		// DataSnapshot snapshot = user.Result;
		U3CU3Ec__DisplayClass15_0_t33474489BD4664254EEBAE372243ADB8FD062C5B* L_26 = __this->___U3CU3E8__1_3;
		NullCheck(L_26);
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_27 = L_26->___user_0;
		NullCheck(L_27);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_28;
		L_28 = Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C(L_27, Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C_RuntimeMethod_var);
		// foreach (DataSnapshot clidSnapshot in snapshot.Children)
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = DataSnapshot_get_Children_m5A77ABE26BB1750F85677DF6E03D02560F6F6632(L_28, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot>::GetEnumerator() */, IEnumerable_1_tBC9C31DD44D05A2C774F76CC1C6C912FB9541D70_il2cpp_TypeInfo_var, L_29);
		V_2 = L_30;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0113:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_31 = V_2;
					if (!L_31)
					{
						goto IL_011c;
					}
				}
				{
					RuntimeObject* L_32 = V_2;
					NullCheck(L_32);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_32);
				}

IL_011c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0109_1;
			}

IL_00f6_1:
			{
				// foreach (DataSnapshot clidSnapshot in snapshot.Children)
				RuntimeObject* L_33 = V_2;
				NullCheck(L_33);
				DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_34;
				L_34 = InterfaceFuncInvoker0< DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Firebase.Database.DataSnapshot>::get_Current() */, IEnumerator_1_t89D6D9FAD8F93015339F011596FA51B8F53D3248_il2cpp_TypeInfo_var, L_33);
				V_3 = L_34;
				// reverseList.Add(clidSnapshot);
				FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* L_35 = V_1;
				NullCheck(L_35);
				List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A* L_36;
				L_36 = FirebaseDatabaseController_get_reverseList_m50F38D5AFA9AD40779E1ECB4E47E4A02D3827EC1_inline(L_35, NULL);
				DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_37 = V_3;
				NullCheck(L_36);
				List_1_Add_mEB985D26AF75351E822117FB3B8F2C531BF53EAF_inline(L_36, L_37, List_1_Add_mEB985D26AF75351E822117FB3B8F2C531BF53EAF_RuntimeMethod_var);
			}

IL_0109_1:
			{
				// foreach (DataSnapshot clidSnapshot in snapshot.Children)
				RuntimeObject* L_38 = V_2;
				NullCheck(L_38);
				bool L_39;
				L_39 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_38);
				if (L_39)
				{
					goto IL_00f6_1;
				}
			}
			{
				goto IL_011d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011d:
	{
		// reverseList.Reverse();
		FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* L_40 = V_1;
		NullCheck(L_40);
		List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A* L_41;
		L_41 = FirebaseDatabaseController_get_reverseList_m50F38D5AFA9AD40779E1ECB4E47E4A02D3827EC1_inline(L_40, NULL);
		NullCheck(L_41);
		List_1_Reverse_m2965DA079F8E0D4ACD89655BDD7104E8A2DF1C2D(L_41, List_1_Reverse_m2965DA079F8E0D4ACD89655BDD7104E8A2DF1C2D_RuntimeMethod_var);
		// onDataLoadedScore?.Invoke();
		FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* L_42 = V_1;
		NullCheck(L_42);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_43 = L_42->___onDataLoadedScore_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_44 = L_43;
		G_B17_0 = L_44;
		if (L_44)
		{
			G_B18_0 = L_44;
			goto IL_0134;
		}
	}
	{
		goto IL_0139;
	}

IL_0134:
	{
		NullCheck(G_B18_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B18_0, NULL);
	}

IL_0139:
	{
		// }
		return (bool)0;
	}
}
// System.Object FirebaseDatabaseController/<LoadAllUserByScore>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadAllUserByScoreU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBCE673E02F1F82F7C9CBF2B52AD89B0AC2176012 (U3CLoadAllUserByScoreU3Ed__15_tB9686D517FDF8C10D14EF4E31744F842BC5B8B93* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FirebaseDatabaseController/<LoadAllUserByScore>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAllUserByScoreU3Ed__15_System_Collections_IEnumerator_Reset_mBEAABBEE8C273D4C97E8B2FE330CFFAB853E2F83 (U3CLoadAllUserByScoreU3Ed__15_tB9686D517FDF8C10D14EF4E31744F842BC5B8B93* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadAllUserByScoreU3Ed__15_System_Collections_IEnumerator_Reset_mBEAABBEE8C273D4C97E8B2FE330CFFAB853E2F83_RuntimeMethod_var)));
	}
}
// System.Object FirebaseDatabaseController/<LoadAllUserByScore>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadAllUserByScoreU3Ed__15_System_Collections_IEnumerator_get_Current_mF3642291F5D20334F20C3B11CF863036542753AC (U3CLoadAllUserByScoreU3Ed__15_tB9686D517FDF8C10D14EF4E31744F842BC5B8B93* __this, const RuntimeMethod* method) 
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
// System.Void FirebaseDatabaseController/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_mE96C239E92C087BB1F0708A3598B250FE0CEBAB7 (U3CU3Ec__DisplayClass16_0_t33FA1AB0DAB3F4A722A0B180553027172963CB44* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean FirebaseDatabaseController/<>c__DisplayClass16_0::<LoadData>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass16_0_U3CLoadDataU3Eb__0_m1BCF753AB92AEFB1761480A4C2C8FBD41D14DC7E (U3CU3Ec__DisplayClass16_0_t33FA1AB0DAB3F4A722A0B180553027172963CB44* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(predicate: () => user.IsCompleted);
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_0 = __this->___user_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_0, NULL);
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
// System.Void FirebaseDatabaseController/<LoadData>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadDataU3Ed__16__ctor_m051959CDB914AF089995592034EC8FFC3ADA6E86 (U3CLoadDataU3Ed__16_t57FBF8327E5B175B0B92B54D8BDC2360765B4F52* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FirebaseDatabaseController/<LoadData>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadDataU3Ed__16_System_IDisposable_Dispose_mD604B51EC5577B7E8C124D38E6DEF5C99191A77D (U3CLoadDataU3Ed__16_t57FBF8327E5B175B0B92B54D8BDC2360765B4F52* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FirebaseDatabaseController/<LoadData>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadDataU3Ed__16_MoveNext_mE066803E0ADDE8819CBE725106A29AA9159F1941 (U3CLoadDataU3Ed__16_t57FBF8327E5B175B0B92B54D8BDC2360765B4F52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_U3CLoadDataU3Eb__0_m1BCF753AB92AEFB1761480A4C2C8FBD41D14DC7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_t33FA1AB0DAB3F4A722A0B180553027172963CB44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserData_tDFEC70DF1A749DA400CDBE27B7E6DD2E480376AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BD7B954BE5888E20F6B6F03B21FD68AB490D456);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4842CEA7BCF3161C7F9A6B2BD4C2DA22ABA9846F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60294D60F29816DC7466D4B0F8C0E7D6D96CAC42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78622C01FE15EA71654ECF91AA6E911E2B4BECA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral880EDA2B562FE40271A2CCA403F78ADC207404B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA541B51720F94BBFE0FD8A517872F5C6E73706D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* V_1 = NULL;
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* V_2 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B10_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B9_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0079;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		U3CU3Ec__DisplayClass16_0_t33FA1AB0DAB3F4A722A0B180553027172963CB44* L_4 = (U3CU3Ec__DisplayClass16_0_t33FA1AB0DAB3F4A722A0B180553027172963CB44*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass16_0_t33FA1AB0DAB3F4A722A0B180553027172963CB44_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		U3CU3Ec__DisplayClass16_0__ctor_mE96C239E92C087BB1F0708A3598B250FE0CEBAB7(L_4, NULL);
		__this->___U3CU3E8__1_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)L_4);
		// var user = dbRef.Child("users").Child(userID).GetValueAsync();
		U3CU3Ec__DisplayClass16_0_t33FA1AB0DAB3F4A722A0B180553027172963CB44* L_5 = __this->___U3CU3E8__1_4;
		FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* L_6 = V_1;
		NullCheck(L_6);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_7 = L_6->___dbRef_4;
		NullCheck(L_7);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_8;
		L_8 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_7, _stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79, NULL);
		String_t* L_9 = __this->___userID_3;
		NullCheck(L_8);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_10;
		L_10 = DatabaseReference_Child_mC08F6692D99BAC7D3BCF83BDE3B8F9A947A0809E(L_8, L_9, NULL);
		NullCheck(L_10);
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_11;
		L_11 = Query_GetValueAsync_mFEB57CCE078D10FC3A6DA6DA2A7DCD16CC4673F5(L_10, NULL);
		NullCheck(L_5);
		L_5->___user_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___user_0), (void*)L_11);
		// yield return new WaitUntil(predicate: () => user.IsCompleted);
		U3CU3Ec__DisplayClass16_0_t33FA1AB0DAB3F4A722A0B180553027172963CB44* L_12 = __this->___U3CU3E8__1_4;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_13 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass16_0_U3CLoadDataU3Eb__0_m1BCF753AB92AEFB1761480A4C2C8FBD41D14DC7E_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_14 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_14, L_13, NULL);
		__this->___U3CU3E2__current_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_14);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0079:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (user.Exception != null)
		U3CU3Ec__DisplayClass16_0_t33FA1AB0DAB3F4A722A0B180553027172963CB44* L_15 = __this->___U3CU3E8__1_4;
		NullCheck(L_15);
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_16 = L_15->___user_0;
		NullCheck(L_16);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_17;
		L_17 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_16, NULL);
		if (!L_17)
		{
			goto IL_00b6;
		}
	}
	{
		// Debug.Log("you");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA541B51720F94BBFE0FD8A517872F5C6E73706D9, NULL);
		// Debug.Log(user.Exception);
		U3CU3Ec__DisplayClass16_0_t33FA1AB0DAB3F4A722A0B180553027172963CB44* L_18 = __this->___U3CU3E8__1_4;
		NullCheck(L_18);
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_19 = L_18->___user_0;
		NullCheck(L_19);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_20;
		L_20 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_19, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_20, NULL);
		goto IL_0196;
	}

IL_00b6:
	{
		// else if (user.Result == null)
		U3CU3Ec__DisplayClass16_0_t33FA1AB0DAB3F4A722A0B180553027172963CB44* L_21 = __this->___U3CU3E8__1_4;
		NullCheck(L_21);
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_22 = L_21->___user_0;
		NullCheck(L_22);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_23;
		L_23 = Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C(L_22, Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C_RuntimeMethod_var);
		if (L_23)
		{
			goto IL_00d7;
		}
	}
	{
		// Debug.Log("Null");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9, NULL);
		goto IL_0196;
	}

IL_00d7:
	{
		// DataSnapshot snapshot = user.Result;
		U3CU3Ec__DisplayClass16_0_t33FA1AB0DAB3F4A722A0B180553027172963CB44* L_24 = __this->___U3CU3E8__1_4;
		NullCheck(L_24);
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_25 = L_24->___user_0;
		NullCheck(L_25);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_26;
		L_26 = Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C(L_25, Task_1_get_Result_m36681BFC0C18C5D4B5E4AE484AFE932D7669887C_RuntimeMethod_var);
		V_2 = L_26;
		// _userData = new UserData(
		// 
		//     snapshot.Child("id").Value.ToString(),
		//     snapshot.Child("nickName").Value.ToString(),
		//     int.Parse(snapshot.Child("goldCoins").Value.ToString()),
		//     int.Parse(snapshot.Child("avatarIcon").Value.ToString()),
		//     float.Parse(snapshot.Child("bestTime").Value.ToString()),
		//     int.Parse(snapshot.Child("car").Value.ToString())
		// 
		//     );
		FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* L_27 = V_1;
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_28 = V_2;
		NullCheck(L_28);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_29;
		L_29 = DataSnapshot_Child_m308ABEC425ADE01909B1A318D61DC965802EF64C(L_28, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = DataSnapshot_get_Value_mF787DB763C81F79ED7CC2621AC49708EB8A6DBA2(L_29, NULL);
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_30);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_32 = V_2;
		NullCheck(L_32);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_33;
		L_33 = DataSnapshot_Child_m308ABEC425ADE01909B1A318D61DC965802EF64C(L_32, _stringLiteral4842CEA7BCF3161C7F9A6B2BD4C2DA22ABA9846F, NULL);
		NullCheck(L_33);
		RuntimeObject* L_34;
		L_34 = DataSnapshot_get_Value_mF787DB763C81F79ED7CC2621AC49708EB8A6DBA2(L_33, NULL);
		NullCheck(L_34);
		String_t* L_35;
		L_35 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_34);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_36 = V_2;
		NullCheck(L_36);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_37;
		L_37 = DataSnapshot_Child_m308ABEC425ADE01909B1A318D61DC965802EF64C(L_36, _stringLiteral1BD7B954BE5888E20F6B6F03B21FD68AB490D456, NULL);
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = DataSnapshot_get_Value_mF787DB763C81F79ED7CC2621AC49708EB8A6DBA2(L_37, NULL);
		NullCheck(L_38);
		String_t* L_39;
		L_39 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_38);
		int32_t L_40;
		L_40 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_39, NULL);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_41 = V_2;
		NullCheck(L_41);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_42;
		L_42 = DataSnapshot_Child_m308ABEC425ADE01909B1A318D61DC965802EF64C(L_41, _stringLiteral880EDA2B562FE40271A2CCA403F78ADC207404B7, NULL);
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = DataSnapshot_get_Value_mF787DB763C81F79ED7CC2621AC49708EB8A6DBA2(L_42, NULL);
		NullCheck(L_43);
		String_t* L_44;
		L_44 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_43);
		int32_t L_45;
		L_45 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_44, NULL);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_46 = V_2;
		NullCheck(L_46);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_47;
		L_47 = DataSnapshot_Child_m308ABEC425ADE01909B1A318D61DC965802EF64C(L_46, _stringLiteral60294D60F29816DC7466D4B0F8C0E7D6D96CAC42, NULL);
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = DataSnapshot_get_Value_mF787DB763C81F79ED7CC2621AC49708EB8A6DBA2(L_47, NULL);
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_48);
		float L_50;
		L_50 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_49, NULL);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_51 = V_2;
		NullCheck(L_51);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_52;
		L_52 = DataSnapshot_Child_m308ABEC425ADE01909B1A318D61DC965802EF64C(L_51, _stringLiteral78622C01FE15EA71654ECF91AA6E911E2B4BECA1, NULL);
		NullCheck(L_52);
		RuntimeObject* L_53;
		L_53 = DataSnapshot_get_Value_mF787DB763C81F79ED7CC2621AC49708EB8A6DBA2(L_52, NULL);
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_53);
		int32_t L_55;
		L_55 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_54, NULL);
		UserData_tDFEC70DF1A749DA400CDBE27B7E6DD2E480376AA* L_56 = (UserData_tDFEC70DF1A749DA400CDBE27B7E6DD2E480376AA*)il2cpp_codegen_object_new(UserData_tDFEC70DF1A749DA400CDBE27B7E6DD2E480376AA_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		UserData__ctor_mC8B47A729B5D361026170E0623CF7AAC45628043(L_56, L_31, L_35, L_40, L_45, L_50, L_55, NULL);
		NullCheck(L_27);
		L_27->____userData_6 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->____userData_6), (void*)L_56);
		// onDataLoadedPlayer?.Invoke();
		FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* L_57 = V_1;
		NullCheck(L_57);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_58 = L_57->___onDataLoadedPlayer_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_59 = L_58;
		G_B9_0 = L_59;
		if (L_59)
		{
			G_B10_0 = L_59;
			goto IL_0191;
		}
	}
	{
		goto IL_0196;
	}

IL_0191:
	{
		NullCheck(G_B10_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B10_0, NULL);
	}

IL_0196:
	{
		// }
		return (bool)0;
	}
}
// System.Object FirebaseDatabaseController/<LoadData>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadDataU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC833BBA67736B6A011875EABE9B99553C0FC55B7 (U3CLoadDataU3Ed__16_t57FBF8327E5B175B0B92B54D8BDC2360765B4F52* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FirebaseDatabaseController/<LoadData>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadDataU3Ed__16_System_Collections_IEnumerator_Reset_m5501E3A4E390E57E344AE529754FD497FDFA2FB3 (U3CLoadDataU3Ed__16_t57FBF8327E5B175B0B92B54D8BDC2360765B4F52* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadDataU3Ed__16_System_Collections_IEnumerator_Reset_m5501E3A4E390E57E344AE529754FD497FDFA2FB3_RuntimeMethod_var)));
	}
}
// System.Object FirebaseDatabaseController/<LoadData>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadDataU3Ed__16_System_Collections_IEnumerator_get_Current_m8059BBCEB456F8132C60E182963A5C08CD779DE5 (U3CLoadDataU3Ed__16_t57FBF8327E5B175B0B92B54D8BDC2360765B4F52* __this, const RuntimeMethod* method) 
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
// System.Void UserData::.ctor(System.String,System.String,System.Int32,System.Int32,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserData__ctor_mC8B47A729B5D361026170E0623CF7AAC45628043 (UserData_tDFEC70DF1A749DA400CDBE27B7E6DD2E480376AA* __this, String_t* ___id0, String_t* ___nickName1, int32_t ___goldCoins2, int32_t ___avatarIcon3, float ___bestTime4, int32_t ___car5, const RuntimeMethod* method) 
{
	{
		// public UserData( string id, string nickName, int goldCoins, int avatarIcon, float bestTime,int car)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.id = id;
		String_t* L_0 = ___id0;
		__this->___id_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id_0), (void*)L_0);
		// this.nickName = nickName;
		String_t* L_1 = ___nickName1;
		__this->___nickName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nickName_1), (void*)L_1);
		// this.goldCoins = goldCoins;
		int32_t L_2 = ___goldCoins2;
		__this->___goldCoins_2 = L_2;
		// this.avatarIcon = avatarIcon;
		int32_t L_3 = ___avatarIcon3;
		__this->___avatarIcon_3 = L_3;
		// this.bestTime = bestTime;
		float L_4 = ___bestTime4;
		__this->___bestTime_4 = L_4;
		// this.car = car;
		int32_t L_5 = ___car5;
		__this->___car_5 = L_5;
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
// System.Void StaticFields::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticFields_Start_m9E1811FC3B8A4E9AEBE742C4B2C0F9F4B2BBB095 (StaticFields_t0BD0398E8BED5361BE9022B256717F9EEA744DE5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void StaticFields::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticFields_Update_m91CF2ACABA8D6E39B353E21798827DCBC8670B83 (StaticFields_t0BD0398E8BED5361BE9022B256717F9EEA744DE5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void StaticFields::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticFields__ctor_mACCBD4888BF5107516A96B83D0B9EAA864BA1F30 (StaticFields_t0BD0398E8BED5361BE9022B256717F9EEA744DE5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_60;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FirebaseException_get_ErrorCode_mE665B1ADB8DD846C3C604DD72F25C1B476EB3A66_inline (FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CErrorCodeU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseDatabaseController_set_reverseList_m95532DDE76B7D19F8CB022E9FD93E5582A550CA9_inline (FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* __this, List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<DataSnapshot> reverseList { private set; get; }
		List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A* L_0 = ___value0;
		__this->___U3CreverseListU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreverseListU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A* FirebaseDatabaseController_get_reverseList_m50F38D5AFA9AD40779E1ECB4E47E4A02D3827EC1_inline (FirebaseDatabaseController_t6B8CEC1B864B06C80533A860FBF4340852C28641* __this, const RuntimeMethod* method) 
{
	{
		// public List<DataSnapshot> reverseList { private set; get; }
		List_1_t0D2BC5078CBE2E95AD144D9C76F503EF81C3208A* L_0 = __this->___U3CreverseListU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
