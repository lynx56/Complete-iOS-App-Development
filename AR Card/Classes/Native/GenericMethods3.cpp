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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3903027533;
// System.ArgumentException
struct ArgumentException_t132251570;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522;
// Vuforia.CameraDevice
struct CameraDevice_t960297568;
// Vuforia.ITrackerManager
struct ITrackerManager_t607206903;
// Vuforia.TrackerManager
struct TrackerManager_t1703337244;
// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.Tracker>
struct Dictionary_2_t858966067;
// Vuforia.Tracker
struct Tracker_t2709586299;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<System.Type,System.Func`2<System.Type,Vuforia.Tracker>>
struct Dictionary_2_t1322931057;
// System.Func`2<System.Type,Vuforia.Tracker>
struct Func_2_t3173551289;
// System.Func`2<System.Object,System.Object>
struct Func_2_t2447130374;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Predicate`1<System.Object>
struct Predicate_1_t3905400288;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_t3710464795;
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t1465843424;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t934056436;
// System.Converter`2<System.Object,System.Object>
struct Converter_2_t2442480487;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t3759279471;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1930798642;
// Vuforia.VuforiaManager/TrackableIdPair[]
struct TrackableIdPairU5BU5D_t475764036;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManager/TrackableIdPair>
struct IEnumerable_1_t3207203346;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t1764640198;
// System.Collections.Generic.IList`1<UnityEngine.Transform>
struct IList_1_t1120718408;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t777473367;
// UnityEngine.Transform
struct Transform_t3600365921;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// UnityEngine.DisallowMultipleComponent[]
struct DisallowMultipleComponentU5BU5D_t3936143868;
// UnityEngine.ExecuteInEditMode[]
struct ExecuteInEditModeU5BU5D_t3239458680;
// UnityEngine.RequireComponent[]
struct RequireComponentU5BU5D_t2245623724;
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// Vuforia.Tracker[]
struct TrackerU5BU5D_t2993297978;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t296309482;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,Vuforia.Tracker,System.Collections.DictionaryEntry>
struct Transform_1_t3273792989;
// Vuforia.StateManager
struct StateManager_t1982749557;
// System.Collections.Generic.Dictionary`2<System.Type,System.Func`2<Vuforia.Tracker,System.Boolean>>
struct Dictionary_2_t2058017892;
// System.Func`2<System.Type,Vuforia.Tracker>[]
struct Func_2U5BU5D_t593982532;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Func`2<System.Type,Vuforia.Tracker>,System.Collections.DictionaryEntry>
struct Transform_1_t874477543;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t5769829;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t243502644;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t2103185493;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t3995630009;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_t2867327688;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t64614563;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_t3256600500;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t3111972472;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_t3587542510;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t1977848392;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t972960537;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t3277009892;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_t2311673543;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t2886331738;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_t2950825503;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
struct EventFunction_1_t955952873;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t3373214253;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_t3912835512;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_t1475332338;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_t2658898854;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t231414508;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// System.Void
struct Void_t1185182177;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// UnityEngine.Camera
struct Camera_t4157153871;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t2750080073;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t4150874583;
// UnityEngine.Collider2D
struct Collider2D_t2806799626;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t829358056;
// Vuforia.VuforiaARController
struct VuforiaARController_t1876945237;
// Vuforia.DigitalEyewearARController
struct DigitalEyewearARController_t1054226036;
// Vuforia.VideoBackgroundManager
struct VideoBackgroundManager_t2198727358;
// Vuforia.IViewerParameters
struct IViewerParameters_t2017581997;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct Dictionary_2_t3630620928;
// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT>
struct List_1_t386988881;
// Vuforia.IWebCam
struct IWebCam_t3734514901;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t1438173104;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t4040729994;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t2924027637;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t3520241082;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t3270282352;

extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral797640427;
extern const uint32_t Array_InternalArray__get_Item_TisUInt64_t4134040092_m129291315_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisUriScheme_t722425697_m2816273040_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisOrderBlock_t1585977831_m2406385050_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisStereoscopicEye_t2238664036_m3557206419_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisColor_t2555686324_m2985413820_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisColor32_t2600501292_m1325986122_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisContactPoint_t3758755253_m2489897608_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisRaycastResult_t3360306849_m1872700081_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisKeyframe_t4206410242_m27698365_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisMatrix4x4_t1817901843_m580640555_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisPlane_t1000493321_m2362885170_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisPlayableBinding_t354260709_m3837494573_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisRaycastHit_t1056001966_m3352067444_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisRaycastHit2D_t2279581989_m2440275162_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisHitInfo_t3229609740_m2260995172_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisGcAchievementData_t675222246_m2680268485_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisGcScoreData_t2125309831_m174676143_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisContentType_t1787303396_m421427711_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisUICharInfo_t75501106_m1797321427_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisUILineInfo_t4195266810_m1305614921_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisUIVertex_t4057497605_m289307453_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisWorkRequest_t1354518612_m2694410850_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisVector2_t2156229523_m2502961026_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisVector3_t3722313464_m2720091419_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisVector4_t3319028937_m1117939728_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisWebCamDevice_t1322781432_m2046557297_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisCameraField_t1483002240_m4229449498_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisEyewearCalibrationReading_t664929988_m608053677_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisEyewearCalibrationReadingData_t937256773_m2689214400_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisPoseAgeEntry_t2181165958_m1672129510_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisPoseInfo_t1612729179_m3253150969_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisPIXEL_FORMAT_t3209881435_m1056154199_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisRectangleData_t1039179782_m3235823909_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisTargetSearchResult_t3441982613_m1391463760_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisStatus_t1100905814_m1160951035_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisTrackableResultData_t452703160_m3404038084_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisVirtualButtonData_t1117953748_m2181106284_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisVuMarkTargetData_t3266143771_m1368043268_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisVuMarkTargetResultData_t2153299244_m4200557326_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisWordData_t2624767814_m2315278711_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisWordResultData_t1538379568_m1613121317_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisTrackableIdPair_t4227350457_m281251552_MetadataUsageId;
extern const uint32_t Array_InternalArray__get_Item_TisProfileData_t3519391925_m544952548_MetadataUsageId;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern const uint32_t AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m429013101_MetadataUsageId;
extern const uint32_t Component_GetComponent_TisRuntimeObject_m2906321015_MetadataUsageId;
extern const uint32_t Component_GetComponentInChildren_TisRuntimeObject_m136716041_MetadataUsageId;
extern const uint32_t Component_GetComponentInParent_TisRuntimeObject_m3491943679_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2964872255;
extern const uint32_t ExecuteEvents_ValidateEventData_TisRuntimeObject_m1594546529_MetadataUsageId;
extern const uint32_t GameObject_AddComponent_TisRuntimeObject_m3469369570_MetadataUsageId;
extern const uint32_t GameObject_GetComponent_TisRuntimeObject_m2049753423_MetadataUsageId;
extern const uint32_t GameObject_GetComponentInChildren_TisRuntimeObject_m1310240902_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const uint32_t Object_FindObjectOfType_TisRuntimeObject_m1542987838_MetadataUsageId;
extern String_t* _stringLiteral2475671027;
extern const uint32_t Object_Instantiate_TisRuntimeObject_m2446893047_MetadataUsageId;
extern const uint32_t Resources_GetBuiltinResource_TisRuntimeObject_m3352626831_MetadataUsageId;
extern const uint32_t Resources_Load_TisRuntimeObject_m1502289511_MetadataUsageId;
extern const uint32_t ScriptableObject_CreateInstance_TisRuntimeObject_m1552711675_MetadataUsageId;
extern const uint32_t Dropdown_GetOrAddComponent_TisRuntimeObject_m769901662_MetadataUsageId;
extern RuntimeClass* CameraDevice_t960297568_il2cpp_TypeInfo_var;
extern const uint32_t MixedRealityController_InitializeDeviceTracker_TisRuntimeObject_m3196132707_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m2802085635_RuntimeMethod_var;
extern String_t* _stringLiteral2521874635;
extern const uint32_t TrackerManager_GetTracker_TisRuntimeObject_m1491635230_MetadataUsageId;
extern RuntimeClass* VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m1661239861_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m2573772253_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m1893916440_RuntimeMethod_var;
extern const RuntimeMethod* Func_2_Invoke_m3689749930_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m3740867761_RuntimeMethod_var;
extern String_t* _stringLiteral3741637024;
extern String_t* _stringLiteral1345897578;
extern const uint32_t TrackerManager_InitTracker_TisRuntimeObject_m1487467454_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4007973390;
extern String_t* _stringLiteral461028519;
extern const uint32_t Array_FindAll_TisRuntimeObject_m3566631088_MetadataUsageId;
extern const uint32_t GameObject_GetComponents_TisRuntimeObject_m1550324888_MetadataUsageId;
extern const uint32_t GameObject_GetComponentsInChildren_TisRuntimeObject_m836045_MetadataUsageId;
extern const uint32_t UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m2620669067_MetadataUsageId;
extern String_t* _stringLiteral879148213;
extern const uint32_t Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m2417852296_MetadataUsageId;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t Enumerable_First_TisRuntimeObject_m3835263318_MetadataUsageId;
extern const uint32_t Enumerable_First_TisRuntimeObject_m2925268555_MetadataUsageId;
extern const uint32_t Enumerable_FirstOrDefault_TisRuntimeObject_m47611933_MetadataUsageId;
extern RuntimeClass* ExecuteEvents_t3484638744_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_get_Item_m2402360903_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3543896146_RuntimeMethod_var;
extern const uint32_t ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m3266560969_MetadataUsageId;
extern const uint32_t ExecuteEvents_GetEventHandler_TisRuntimeObject_m3687647312_MetadataUsageId;
struct Object_t631007953_marshaled_com;

struct ObjectU5BU5D_t2843939325;
struct CustomAttributeNamedArgumentU5BU5D_t3710464795;
struct CustomAttributeTypedArgumentU5BU5D_t1465843424;
struct Color32U5BU5D_t3850468773;
struct Vector2U5BU5D_t1457185986;
struct Vector3U5BU5D_t1718750761;
struct Vector4U5BU5D_t934056436;
struct Int32U5BU5D_t385246372;
struct TrackableIdPairU5BU5D_t475764036;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T128053199_H
#define LIST_1_T128053199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t128053199  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t385246372* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____items_1)); }
	inline Int32U5BU5D_t385246372* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t385246372** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t385246372* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t128053199, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t128053199_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Int32U5BU5D_t385246372* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t128053199_StaticFields, ___EmptyArray_4)); }
	inline Int32U5BU5D_t385246372* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Int32U5BU5D_t385246372** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Int32U5BU5D_t385246372* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T128053199_H
#ifndef LIST_1_T1404457903_H
#define LIST_1_T1404457903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Vuforia.VuforiaManager/TrackableIdPair>
struct  List_1_t1404457903  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TrackableIdPairU5BU5D_t475764036* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1404457903, ____items_1)); }
	inline TrackableIdPairU5BU5D_t475764036* get__items_1() const { return ____items_1; }
	inline TrackableIdPairU5BU5D_t475764036** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TrackableIdPairU5BU5D_t475764036* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1404457903, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1404457903, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1404457903_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	TrackableIdPairU5BU5D_t475764036* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1404457903_StaticFields, ___EmptyArray_4)); }
	inline TrackableIdPairU5BU5D_t475764036* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline TrackableIdPairU5BU5D_t475764036** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(TrackableIdPairU5BU5D_t475764036* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1404457903_H
#ifndef ATTRIBUTEHELPERENGINE_T2735742303_H
#define ATTRIBUTEHELPERENGINE_T2735742303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AttributeHelperEngine
struct  AttributeHelperEngine_t2735742303  : public RuntimeObject
{
public:

public:
};

struct AttributeHelperEngine_t2735742303_StaticFields
{
public:
	// UnityEngine.DisallowMultipleComponent[] UnityEngine.AttributeHelperEngine::_disallowMultipleComponentArray
	DisallowMultipleComponentU5BU5D_t3936143868* ____disallowMultipleComponentArray_0;
	// UnityEngine.ExecuteInEditMode[] UnityEngine.AttributeHelperEngine::_executeInEditModeArray
	ExecuteInEditModeU5BU5D_t3239458680* ____executeInEditModeArray_1;
	// UnityEngine.RequireComponent[] UnityEngine.AttributeHelperEngine::_requireComponentArray
	RequireComponentU5BU5D_t2245623724* ____requireComponentArray_2;

public:
	inline static int32_t get_offset_of__disallowMultipleComponentArray_0() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2735742303_StaticFields, ____disallowMultipleComponentArray_0)); }
	inline DisallowMultipleComponentU5BU5D_t3936143868* get__disallowMultipleComponentArray_0() const { return ____disallowMultipleComponentArray_0; }
	inline DisallowMultipleComponentU5BU5D_t3936143868** get_address_of__disallowMultipleComponentArray_0() { return &____disallowMultipleComponentArray_0; }
	inline void set__disallowMultipleComponentArray_0(DisallowMultipleComponentU5BU5D_t3936143868* value)
	{
		____disallowMultipleComponentArray_0 = value;
		Il2CppCodeGenWriteBarrier((&____disallowMultipleComponentArray_0), value);
	}

	inline static int32_t get_offset_of__executeInEditModeArray_1() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2735742303_StaticFields, ____executeInEditModeArray_1)); }
	inline ExecuteInEditModeU5BU5D_t3239458680* get__executeInEditModeArray_1() const { return ____executeInEditModeArray_1; }
	inline ExecuteInEditModeU5BU5D_t3239458680** get_address_of__executeInEditModeArray_1() { return &____executeInEditModeArray_1; }
	inline void set__executeInEditModeArray_1(ExecuteInEditModeU5BU5D_t3239458680* value)
	{
		____executeInEditModeArray_1 = value;
		Il2CppCodeGenWriteBarrier((&____executeInEditModeArray_1), value);
	}

	inline static int32_t get_offset_of__requireComponentArray_2() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2735742303_StaticFields, ____requireComponentArray_2)); }
	inline RequireComponentU5BU5D_t2245623724* get__requireComponentArray_2() const { return ____requireComponentArray_2; }
	inline RequireComponentU5BU5D_t2245623724** get_address_of__requireComponentArray_2() { return &____requireComponentArray_2; }
	inline void set__requireComponentArray_2(RequireComponentU5BU5D_t2245623724* value)
	{
		____requireComponentArray_2 = value;
		Il2CppCodeGenWriteBarrier((&____requireComponentArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEHELPERENGINE_T2735742303_H
#ifndef INTERLOCKED_T2273387594_H
#define INTERLOCKED_T2273387594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Interlocked
struct  Interlocked_t2273387594  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERLOCKED_T2273387594_H
#ifndef LIST_1_T777473367_H
#define LIST_1_T777473367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_t777473367  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t807237628* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____items_1)); }
	inline TransformU5BU5D_t807237628* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t807237628** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t807237628* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t777473367_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	TransformU5BU5D_t807237628* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t777473367_StaticFields, ___EmptyArray_4)); }
	inline TransformU5BU5D_t807237628* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline TransformU5BU5D_t807237628** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(TransformU5BU5D_t807237628* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T777473367_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef DICTIONARY_2_T858966067_H
#define DICTIONARY_2_T858966067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.Tracker>
struct  Dictionary_2_t858966067  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TypeU5BU5D_t3940880105* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	TrackerU5BU5D_t2993297978* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t858966067, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t858966067, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t858966067, ___keySlots_6)); }
	inline TypeU5BU5D_t3940880105* get_keySlots_6() const { return ___keySlots_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TypeU5BU5D_t3940880105* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t858966067, ___valueSlots_7)); }
	inline TrackerU5BU5D_t2993297978* get_valueSlots_7() const { return ___valueSlots_7; }
	inline TrackerU5BU5D_t2993297978** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(TrackerU5BU5D_t2993297978* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t858966067, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t858966067, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t858966067, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t858966067, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t858966067, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t858966067, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t858966067, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t858966067_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3273792989 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t858966067_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3273792989 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3273792989 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3273792989 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T858966067_H
#ifndef ABSTRACTEVENTDATA_T4171500731_H
#define ABSTRACTEVENTDATA_T4171500731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t4171500731  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t4171500731, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T4171500731_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef TRACKER_T2709586299_H
#define TRACKER_T2709586299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Tracker
struct  Tracker_t2709586299  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.Tracker::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Tracker_t2709586299, ___U3CIsActiveU3Ek__BackingField_0)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_0() const { return ___U3CIsActiveU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_0() { return &___U3CIsActiveU3Ek__BackingField_0; }
	inline void set_U3CIsActiveU3Ek__BackingField_0(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKER_T2709586299_H
#ifndef TRACKERMANAGER_T1703337244_H
#define TRACKERMANAGER_T1703337244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerManager
struct  TrackerManager_t1703337244  : public RuntimeObject
{
public:
	// Vuforia.StateManager Vuforia.TrackerManager::mStateManager
	StateManager_t1982749557 * ___mStateManager_1;
	// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.Tracker> Vuforia.TrackerManager::mTrackers
	Dictionary_2_t858966067 * ___mTrackers_2;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Func`2<System.Type,Vuforia.Tracker>> Vuforia.TrackerManager::mTrackerCreators
	Dictionary_2_t1322931057 * ___mTrackerCreators_3;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Func`2<Vuforia.Tracker,System.Boolean>> Vuforia.TrackerManager::mTrackerNativeDeinitializers
	Dictionary_2_t2058017892 * ___mTrackerNativeDeinitializers_4;

public:
	inline static int32_t get_offset_of_mStateManager_1() { return static_cast<int32_t>(offsetof(TrackerManager_t1703337244, ___mStateManager_1)); }
	inline StateManager_t1982749557 * get_mStateManager_1() const { return ___mStateManager_1; }
	inline StateManager_t1982749557 ** get_address_of_mStateManager_1() { return &___mStateManager_1; }
	inline void set_mStateManager_1(StateManager_t1982749557 * value)
	{
		___mStateManager_1 = value;
		Il2CppCodeGenWriteBarrier((&___mStateManager_1), value);
	}

	inline static int32_t get_offset_of_mTrackers_2() { return static_cast<int32_t>(offsetof(TrackerManager_t1703337244, ___mTrackers_2)); }
	inline Dictionary_2_t858966067 * get_mTrackers_2() const { return ___mTrackers_2; }
	inline Dictionary_2_t858966067 ** get_address_of_mTrackers_2() { return &___mTrackers_2; }
	inline void set_mTrackers_2(Dictionary_2_t858966067 * value)
	{
		___mTrackers_2 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackers_2), value);
	}

	inline static int32_t get_offset_of_mTrackerCreators_3() { return static_cast<int32_t>(offsetof(TrackerManager_t1703337244, ___mTrackerCreators_3)); }
	inline Dictionary_2_t1322931057 * get_mTrackerCreators_3() const { return ___mTrackerCreators_3; }
	inline Dictionary_2_t1322931057 ** get_address_of_mTrackerCreators_3() { return &___mTrackerCreators_3; }
	inline void set_mTrackerCreators_3(Dictionary_2_t1322931057 * value)
	{
		___mTrackerCreators_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackerCreators_3), value);
	}

	inline static int32_t get_offset_of_mTrackerNativeDeinitializers_4() { return static_cast<int32_t>(offsetof(TrackerManager_t1703337244, ___mTrackerNativeDeinitializers_4)); }
	inline Dictionary_2_t2058017892 * get_mTrackerNativeDeinitializers_4() const { return ___mTrackerNativeDeinitializers_4; }
	inline Dictionary_2_t2058017892 ** get_address_of_mTrackerNativeDeinitializers_4() { return &___mTrackerNativeDeinitializers_4; }
	inline void set_mTrackerNativeDeinitializers_4(Dictionary_2_t2058017892 * value)
	{
		___mTrackerNativeDeinitializers_4 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackerNativeDeinitializers_4), value);
	}
};

struct TrackerManager_t1703337244_StaticFields
{
public:
	// Vuforia.ITrackerManager Vuforia.TrackerManager::mInstance
	RuntimeObject* ___mInstance_0;

public:
	inline static int32_t get_offset_of_mInstance_0() { return static_cast<int32_t>(offsetof(TrackerManager_t1703337244_StaticFields, ___mInstance_0)); }
	inline RuntimeObject* get_mInstance_0() const { return ___mInstance_0; }
	inline RuntimeObject** get_address_of_mInstance_0() { return &___mInstance_0; }
	inline void set_mInstance_0(RuntimeObject* value)
	{
		___mInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKERMANAGER_T1703337244_H
#ifndef DICTIONARY_2_T1322931057_H
#define DICTIONARY_2_T1322931057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,System.Func`2<System.Type,Vuforia.Tracker>>
struct  Dictionary_2_t1322931057  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TypeU5BU5D_t3940880105* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Func_2U5BU5D_t593982532* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1322931057, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1322931057, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1322931057, ___keySlots_6)); }
	inline TypeU5BU5D_t3940880105* get_keySlots_6() const { return ___keySlots_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TypeU5BU5D_t3940880105* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1322931057, ___valueSlots_7)); }
	inline Func_2U5BU5D_t593982532* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Func_2U5BU5D_t593982532** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Func_2U5BU5D_t593982532* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1322931057, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1322931057, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1322931057, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1322931057, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1322931057, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1322931057, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1322931057, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1322931057_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t874477543 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1322931057_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t874477543 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t874477543 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t874477543 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1322931057_H
#ifndef CUSTOMATTRIBUTEDATA_T1084486650_H
#define CUSTOMATTRIBUTEDATA_T1084486650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t1084486650  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t5769829 * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1084486650, ___ctorInfo_0)); }
	inline ConstructorInfo_t5769829 * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t5769829 ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t5769829 * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctorInfo_0), value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1084486650, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((&___ctorArgs_1), value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1084486650, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((&___namedArgs_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEDATA_T1084486650_H
#ifndef RESOURCES_T2942265397_H
#define RESOURCES_T2942265397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Resources
struct  Resources_t2942265397  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCES_T2942265397_H
#ifndef UNITYCOMPONENTEXTENSIONS_T3737347336_H
#define UNITYCOMPONENTEXTENSIONS_T3737347336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.UnityComponentExtensions
struct  UnityComponentExtensions_t3737347336  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYCOMPONENTEXTENSIONS_T3737347336_H
#ifndef LIST_1_T257213610_H
#define LIST_1_T257213610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t257213610  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t2843939325* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____items_1)); }
	inline ObjectU5BU5D_t2843939325* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t2843939325* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t257213610_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t257213610_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T257213610_H
#ifndef ENUMERABLE_T538148348_H
#define ENUMERABLE_T538148348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable
struct  Enumerable_t538148348  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLE_T538148348_H
#ifndef EXECUTEEVENTS_T3484638744_H
#define EXECUTEEVENTS_T3484638744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents
struct  ExecuteEvents_t3484638744  : public RuntimeObject
{
public:

public:
};

struct ExecuteEvents_t3484638744_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerEnterHandler
	EventFunction_1_t3995630009 * ___s_PointerEnterHandler_0;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerExitHandler
	EventFunction_1_t2867327688 * ___s_PointerExitHandler_1;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerDownHandler
	EventFunction_1_t64614563 * ___s_PointerDownHandler_2;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerUpHandler
	EventFunction_1_t3256600500 * ___s_PointerUpHandler_3;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerClickHandler
	EventFunction_1_t3111972472 * ___s_PointerClickHandler_4;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_InitializePotentialDragHandler
	EventFunction_1_t3587542510 * ___s_InitializePotentialDragHandler_5;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_BeginDragHandler
	EventFunction_1_t1977848392 * ___s_BeginDragHandler_6;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_DragHandler
	EventFunction_1_t972960537 * ___s_DragHandler_7;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_EndDragHandler
	EventFunction_1_t3277009892 * ___s_EndDragHandler_8;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::s_DropHandler
	EventFunction_1_t2311673543 * ___s_DropHandler_9;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::s_ScrollHandler
	EventFunction_1_t2886331738 * ___s_ScrollHandler_10;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::s_UpdateSelectedHandler
	EventFunction_1_t2950825503 * ___s_UpdateSelectedHandler_11;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::s_SelectHandler
	EventFunction_1_t955952873 * ___s_SelectHandler_12;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::s_DeselectHandler
	EventFunction_1_t3373214253 * ___s_DeselectHandler_13;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::s_MoveHandler
	EventFunction_1_t3912835512 * ___s_MoveHandler_14;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::s_SubmitHandler
	EventFunction_1_t1475332338 * ___s_SubmitHandler_15;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::s_CancelHandler
	EventFunction_1_t2658898854 * ___s_CancelHandler_16;
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>> UnityEngine.EventSystems.ExecuteEvents::s_HandlerListPool
	ObjectPool_1_t231414508 * ___s_HandlerListPool_17;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.EventSystems.ExecuteEvents::s_InternalTransformList
	List_1_t777473367 * ___s_InternalTransformList_18;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache0
	EventFunction_1_t3995630009 * ___U3CU3Ef__mgU24cache0_19;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache1
	EventFunction_1_t2867327688 * ___U3CU3Ef__mgU24cache1_20;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache2
	EventFunction_1_t64614563 * ___U3CU3Ef__mgU24cache2_21;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache3
	EventFunction_1_t3256600500 * ___U3CU3Ef__mgU24cache3_22;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache4
	EventFunction_1_t3111972472 * ___U3CU3Ef__mgU24cache4_23;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache5
	EventFunction_1_t3587542510 * ___U3CU3Ef__mgU24cache5_24;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache6
	EventFunction_1_t1977848392 * ___U3CU3Ef__mgU24cache6_25;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache7
	EventFunction_1_t972960537 * ___U3CU3Ef__mgU24cache7_26;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache8
	EventFunction_1_t3277009892 * ___U3CU3Ef__mgU24cache8_27;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache9
	EventFunction_1_t2311673543 * ___U3CU3Ef__mgU24cache9_28;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheA
	EventFunction_1_t2886331738 * ___U3CU3Ef__mgU24cacheA_29;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheB
	EventFunction_1_t2950825503 * ___U3CU3Ef__mgU24cacheB_30;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheC
	EventFunction_1_t955952873 * ___U3CU3Ef__mgU24cacheC_31;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheD
	EventFunction_1_t3373214253 * ___U3CU3Ef__mgU24cacheD_32;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheE
	EventFunction_1_t3912835512 * ___U3CU3Ef__mgU24cacheE_33;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheF
	EventFunction_1_t1475332338 * ___U3CU3Ef__mgU24cacheF_34;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache10
	EventFunction_1_t2658898854 * ___U3CU3Ef__mgU24cache10_35;

public:
	inline static int32_t get_offset_of_s_PointerEnterHandler_0() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_PointerEnterHandler_0)); }
	inline EventFunction_1_t3995630009 * get_s_PointerEnterHandler_0() const { return ___s_PointerEnterHandler_0; }
	inline EventFunction_1_t3995630009 ** get_address_of_s_PointerEnterHandler_0() { return &___s_PointerEnterHandler_0; }
	inline void set_s_PointerEnterHandler_0(EventFunction_1_t3995630009 * value)
	{
		___s_PointerEnterHandler_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerEnterHandler_0), value);
	}

	inline static int32_t get_offset_of_s_PointerExitHandler_1() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_PointerExitHandler_1)); }
	inline EventFunction_1_t2867327688 * get_s_PointerExitHandler_1() const { return ___s_PointerExitHandler_1; }
	inline EventFunction_1_t2867327688 ** get_address_of_s_PointerExitHandler_1() { return &___s_PointerExitHandler_1; }
	inline void set_s_PointerExitHandler_1(EventFunction_1_t2867327688 * value)
	{
		___s_PointerExitHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerExitHandler_1), value);
	}

	inline static int32_t get_offset_of_s_PointerDownHandler_2() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_PointerDownHandler_2)); }
	inline EventFunction_1_t64614563 * get_s_PointerDownHandler_2() const { return ___s_PointerDownHandler_2; }
	inline EventFunction_1_t64614563 ** get_address_of_s_PointerDownHandler_2() { return &___s_PointerDownHandler_2; }
	inline void set_s_PointerDownHandler_2(EventFunction_1_t64614563 * value)
	{
		___s_PointerDownHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerDownHandler_2), value);
	}

	inline static int32_t get_offset_of_s_PointerUpHandler_3() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_PointerUpHandler_3)); }
	inline EventFunction_1_t3256600500 * get_s_PointerUpHandler_3() const { return ___s_PointerUpHandler_3; }
	inline EventFunction_1_t3256600500 ** get_address_of_s_PointerUpHandler_3() { return &___s_PointerUpHandler_3; }
	inline void set_s_PointerUpHandler_3(EventFunction_1_t3256600500 * value)
	{
		___s_PointerUpHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerUpHandler_3), value);
	}

	inline static int32_t get_offset_of_s_PointerClickHandler_4() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_PointerClickHandler_4)); }
	inline EventFunction_1_t3111972472 * get_s_PointerClickHandler_4() const { return ___s_PointerClickHandler_4; }
	inline EventFunction_1_t3111972472 ** get_address_of_s_PointerClickHandler_4() { return &___s_PointerClickHandler_4; }
	inline void set_s_PointerClickHandler_4(EventFunction_1_t3111972472 * value)
	{
		___s_PointerClickHandler_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerClickHandler_4), value);
	}

	inline static int32_t get_offset_of_s_InitializePotentialDragHandler_5() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_InitializePotentialDragHandler_5)); }
	inline EventFunction_1_t3587542510 * get_s_InitializePotentialDragHandler_5() const { return ___s_InitializePotentialDragHandler_5; }
	inline EventFunction_1_t3587542510 ** get_address_of_s_InitializePotentialDragHandler_5() { return &___s_InitializePotentialDragHandler_5; }
	inline void set_s_InitializePotentialDragHandler_5(EventFunction_1_t3587542510 * value)
	{
		___s_InitializePotentialDragHandler_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_InitializePotentialDragHandler_5), value);
	}

	inline static int32_t get_offset_of_s_BeginDragHandler_6() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_BeginDragHandler_6)); }
	inline EventFunction_1_t1977848392 * get_s_BeginDragHandler_6() const { return ___s_BeginDragHandler_6; }
	inline EventFunction_1_t1977848392 ** get_address_of_s_BeginDragHandler_6() { return &___s_BeginDragHandler_6; }
	inline void set_s_BeginDragHandler_6(EventFunction_1_t1977848392 * value)
	{
		___s_BeginDragHandler_6 = value;
		Il2CppCodeGenWriteBarrier((&___s_BeginDragHandler_6), value);
	}

	inline static int32_t get_offset_of_s_DragHandler_7() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_DragHandler_7)); }
	inline EventFunction_1_t972960537 * get_s_DragHandler_7() const { return ___s_DragHandler_7; }
	inline EventFunction_1_t972960537 ** get_address_of_s_DragHandler_7() { return &___s_DragHandler_7; }
	inline void set_s_DragHandler_7(EventFunction_1_t972960537 * value)
	{
		___s_DragHandler_7 = value;
		Il2CppCodeGenWriteBarrier((&___s_DragHandler_7), value);
	}

	inline static int32_t get_offset_of_s_EndDragHandler_8() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_EndDragHandler_8)); }
	inline EventFunction_1_t3277009892 * get_s_EndDragHandler_8() const { return ___s_EndDragHandler_8; }
	inline EventFunction_1_t3277009892 ** get_address_of_s_EndDragHandler_8() { return &___s_EndDragHandler_8; }
	inline void set_s_EndDragHandler_8(EventFunction_1_t3277009892 * value)
	{
		___s_EndDragHandler_8 = value;
		Il2CppCodeGenWriteBarrier((&___s_EndDragHandler_8), value);
	}

	inline static int32_t get_offset_of_s_DropHandler_9() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_DropHandler_9)); }
	inline EventFunction_1_t2311673543 * get_s_DropHandler_9() const { return ___s_DropHandler_9; }
	inline EventFunction_1_t2311673543 ** get_address_of_s_DropHandler_9() { return &___s_DropHandler_9; }
	inline void set_s_DropHandler_9(EventFunction_1_t2311673543 * value)
	{
		___s_DropHandler_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_DropHandler_9), value);
	}

	inline static int32_t get_offset_of_s_ScrollHandler_10() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_ScrollHandler_10)); }
	inline EventFunction_1_t2886331738 * get_s_ScrollHandler_10() const { return ___s_ScrollHandler_10; }
	inline EventFunction_1_t2886331738 ** get_address_of_s_ScrollHandler_10() { return &___s_ScrollHandler_10; }
	inline void set_s_ScrollHandler_10(EventFunction_1_t2886331738 * value)
	{
		___s_ScrollHandler_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_ScrollHandler_10), value);
	}

	inline static int32_t get_offset_of_s_UpdateSelectedHandler_11() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_UpdateSelectedHandler_11)); }
	inline EventFunction_1_t2950825503 * get_s_UpdateSelectedHandler_11() const { return ___s_UpdateSelectedHandler_11; }
	inline EventFunction_1_t2950825503 ** get_address_of_s_UpdateSelectedHandler_11() { return &___s_UpdateSelectedHandler_11; }
	inline void set_s_UpdateSelectedHandler_11(EventFunction_1_t2950825503 * value)
	{
		___s_UpdateSelectedHandler_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_UpdateSelectedHandler_11), value);
	}

	inline static int32_t get_offset_of_s_SelectHandler_12() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_SelectHandler_12)); }
	inline EventFunction_1_t955952873 * get_s_SelectHandler_12() const { return ___s_SelectHandler_12; }
	inline EventFunction_1_t955952873 ** get_address_of_s_SelectHandler_12() { return &___s_SelectHandler_12; }
	inline void set_s_SelectHandler_12(EventFunction_1_t955952873 * value)
	{
		___s_SelectHandler_12 = value;
		Il2CppCodeGenWriteBarrier((&___s_SelectHandler_12), value);
	}

	inline static int32_t get_offset_of_s_DeselectHandler_13() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_DeselectHandler_13)); }
	inline EventFunction_1_t3373214253 * get_s_DeselectHandler_13() const { return ___s_DeselectHandler_13; }
	inline EventFunction_1_t3373214253 ** get_address_of_s_DeselectHandler_13() { return &___s_DeselectHandler_13; }
	inline void set_s_DeselectHandler_13(EventFunction_1_t3373214253 * value)
	{
		___s_DeselectHandler_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_DeselectHandler_13), value);
	}

	inline static int32_t get_offset_of_s_MoveHandler_14() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_MoveHandler_14)); }
	inline EventFunction_1_t3912835512 * get_s_MoveHandler_14() const { return ___s_MoveHandler_14; }
	inline EventFunction_1_t3912835512 ** get_address_of_s_MoveHandler_14() { return &___s_MoveHandler_14; }
	inline void set_s_MoveHandler_14(EventFunction_1_t3912835512 * value)
	{
		___s_MoveHandler_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_MoveHandler_14), value);
	}

	inline static int32_t get_offset_of_s_SubmitHandler_15() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_SubmitHandler_15)); }
	inline EventFunction_1_t1475332338 * get_s_SubmitHandler_15() const { return ___s_SubmitHandler_15; }
	inline EventFunction_1_t1475332338 ** get_address_of_s_SubmitHandler_15() { return &___s_SubmitHandler_15; }
	inline void set_s_SubmitHandler_15(EventFunction_1_t1475332338 * value)
	{
		___s_SubmitHandler_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_SubmitHandler_15), value);
	}

	inline static int32_t get_offset_of_s_CancelHandler_16() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_CancelHandler_16)); }
	inline EventFunction_1_t2658898854 * get_s_CancelHandler_16() const { return ___s_CancelHandler_16; }
	inline EventFunction_1_t2658898854 ** get_address_of_s_CancelHandler_16() { return &___s_CancelHandler_16; }
	inline void set_s_CancelHandler_16(EventFunction_1_t2658898854 * value)
	{
		___s_CancelHandler_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_CancelHandler_16), value);
	}

	inline static int32_t get_offset_of_s_HandlerListPool_17() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_HandlerListPool_17)); }
	inline ObjectPool_1_t231414508 * get_s_HandlerListPool_17() const { return ___s_HandlerListPool_17; }
	inline ObjectPool_1_t231414508 ** get_address_of_s_HandlerListPool_17() { return &___s_HandlerListPool_17; }
	inline void set_s_HandlerListPool_17(ObjectPool_1_t231414508 * value)
	{
		___s_HandlerListPool_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_HandlerListPool_17), value);
	}

	inline static int32_t get_offset_of_s_InternalTransformList_18() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_InternalTransformList_18)); }
	inline List_1_t777473367 * get_s_InternalTransformList_18() const { return ___s_InternalTransformList_18; }
	inline List_1_t777473367 ** get_address_of_s_InternalTransformList_18() { return &___s_InternalTransformList_18; }
	inline void set_s_InternalTransformList_18(List_1_t777473367 * value)
	{
		___s_InternalTransformList_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalTransformList_18), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_19() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache0_19)); }
	inline EventFunction_1_t3995630009 * get_U3CU3Ef__mgU24cache0_19() const { return ___U3CU3Ef__mgU24cache0_19; }
	inline EventFunction_1_t3995630009 ** get_address_of_U3CU3Ef__mgU24cache0_19() { return &___U3CU3Ef__mgU24cache0_19; }
	inline void set_U3CU3Ef__mgU24cache0_19(EventFunction_1_t3995630009 * value)
	{
		___U3CU3Ef__mgU24cache0_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_20() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache1_20)); }
	inline EventFunction_1_t2867327688 * get_U3CU3Ef__mgU24cache1_20() const { return ___U3CU3Ef__mgU24cache1_20; }
	inline EventFunction_1_t2867327688 ** get_address_of_U3CU3Ef__mgU24cache1_20() { return &___U3CU3Ef__mgU24cache1_20; }
	inline void set_U3CU3Ef__mgU24cache1_20(EventFunction_1_t2867327688 * value)
	{
		___U3CU3Ef__mgU24cache1_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_21() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache2_21)); }
	inline EventFunction_1_t64614563 * get_U3CU3Ef__mgU24cache2_21() const { return ___U3CU3Ef__mgU24cache2_21; }
	inline EventFunction_1_t64614563 ** get_address_of_U3CU3Ef__mgU24cache2_21() { return &___U3CU3Ef__mgU24cache2_21; }
	inline void set_U3CU3Ef__mgU24cache2_21(EventFunction_1_t64614563 * value)
	{
		___U3CU3Ef__mgU24cache2_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_22() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache3_22)); }
	inline EventFunction_1_t3256600500 * get_U3CU3Ef__mgU24cache3_22() const { return ___U3CU3Ef__mgU24cache3_22; }
	inline EventFunction_1_t3256600500 ** get_address_of_U3CU3Ef__mgU24cache3_22() { return &___U3CU3Ef__mgU24cache3_22; }
	inline void set_U3CU3Ef__mgU24cache3_22(EventFunction_1_t3256600500 * value)
	{
		___U3CU3Ef__mgU24cache3_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_23() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache4_23)); }
	inline EventFunction_1_t3111972472 * get_U3CU3Ef__mgU24cache4_23() const { return ___U3CU3Ef__mgU24cache4_23; }
	inline EventFunction_1_t3111972472 ** get_address_of_U3CU3Ef__mgU24cache4_23() { return &___U3CU3Ef__mgU24cache4_23; }
	inline void set_U3CU3Ef__mgU24cache4_23(EventFunction_1_t3111972472 * value)
	{
		___U3CU3Ef__mgU24cache4_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_24() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache5_24)); }
	inline EventFunction_1_t3587542510 * get_U3CU3Ef__mgU24cache5_24() const { return ___U3CU3Ef__mgU24cache5_24; }
	inline EventFunction_1_t3587542510 ** get_address_of_U3CU3Ef__mgU24cache5_24() { return &___U3CU3Ef__mgU24cache5_24; }
	inline void set_U3CU3Ef__mgU24cache5_24(EventFunction_1_t3587542510 * value)
	{
		___U3CU3Ef__mgU24cache5_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_25() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache6_25)); }
	inline EventFunction_1_t1977848392 * get_U3CU3Ef__mgU24cache6_25() const { return ___U3CU3Ef__mgU24cache6_25; }
	inline EventFunction_1_t1977848392 ** get_address_of_U3CU3Ef__mgU24cache6_25() { return &___U3CU3Ef__mgU24cache6_25; }
	inline void set_U3CU3Ef__mgU24cache6_25(EventFunction_1_t1977848392 * value)
	{
		___U3CU3Ef__mgU24cache6_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_25), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_26() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache7_26)); }
	inline EventFunction_1_t972960537 * get_U3CU3Ef__mgU24cache7_26() const { return ___U3CU3Ef__mgU24cache7_26; }
	inline EventFunction_1_t972960537 ** get_address_of_U3CU3Ef__mgU24cache7_26() { return &___U3CU3Ef__mgU24cache7_26; }
	inline void set_U3CU3Ef__mgU24cache7_26(EventFunction_1_t972960537 * value)
	{
		___U3CU3Ef__mgU24cache7_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_26), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_27() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache8_27)); }
	inline EventFunction_1_t3277009892 * get_U3CU3Ef__mgU24cache8_27() const { return ___U3CU3Ef__mgU24cache8_27; }
	inline EventFunction_1_t3277009892 ** get_address_of_U3CU3Ef__mgU24cache8_27() { return &___U3CU3Ef__mgU24cache8_27; }
	inline void set_U3CU3Ef__mgU24cache8_27(EventFunction_1_t3277009892 * value)
	{
		___U3CU3Ef__mgU24cache8_27 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8_27), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_28() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache9_28)); }
	inline EventFunction_1_t2311673543 * get_U3CU3Ef__mgU24cache9_28() const { return ___U3CU3Ef__mgU24cache9_28; }
	inline EventFunction_1_t2311673543 ** get_address_of_U3CU3Ef__mgU24cache9_28() { return &___U3CU3Ef__mgU24cache9_28; }
	inline void set_U3CU3Ef__mgU24cache9_28(EventFunction_1_t2311673543 * value)
	{
		___U3CU3Ef__mgU24cache9_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_29() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheA_29)); }
	inline EventFunction_1_t2886331738 * get_U3CU3Ef__mgU24cacheA_29() const { return ___U3CU3Ef__mgU24cacheA_29; }
	inline EventFunction_1_t2886331738 ** get_address_of_U3CU3Ef__mgU24cacheA_29() { return &___U3CU3Ef__mgU24cacheA_29; }
	inline void set_U3CU3Ef__mgU24cacheA_29(EventFunction_1_t2886331738 * value)
	{
		___U3CU3Ef__mgU24cacheA_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB_30() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheB_30)); }
	inline EventFunction_1_t2950825503 * get_U3CU3Ef__mgU24cacheB_30() const { return ___U3CU3Ef__mgU24cacheB_30; }
	inline EventFunction_1_t2950825503 ** get_address_of_U3CU3Ef__mgU24cacheB_30() { return &___U3CU3Ef__mgU24cacheB_30; }
	inline void set_U3CU3Ef__mgU24cacheB_30(EventFunction_1_t2950825503 * value)
	{
		___U3CU3Ef__mgU24cacheB_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheC_31() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheC_31)); }
	inline EventFunction_1_t955952873 * get_U3CU3Ef__mgU24cacheC_31() const { return ___U3CU3Ef__mgU24cacheC_31; }
	inline EventFunction_1_t955952873 ** get_address_of_U3CU3Ef__mgU24cacheC_31() { return &___U3CU3Ef__mgU24cacheC_31; }
	inline void set_U3CU3Ef__mgU24cacheC_31(EventFunction_1_t955952873 * value)
	{
		___U3CU3Ef__mgU24cacheC_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheC_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheD_32() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheD_32)); }
	inline EventFunction_1_t3373214253 * get_U3CU3Ef__mgU24cacheD_32() const { return ___U3CU3Ef__mgU24cacheD_32; }
	inline EventFunction_1_t3373214253 ** get_address_of_U3CU3Ef__mgU24cacheD_32() { return &___U3CU3Ef__mgU24cacheD_32; }
	inline void set_U3CU3Ef__mgU24cacheD_32(EventFunction_1_t3373214253 * value)
	{
		___U3CU3Ef__mgU24cacheD_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheD_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheE_33() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheE_33)); }
	inline EventFunction_1_t3912835512 * get_U3CU3Ef__mgU24cacheE_33() const { return ___U3CU3Ef__mgU24cacheE_33; }
	inline EventFunction_1_t3912835512 ** get_address_of_U3CU3Ef__mgU24cacheE_33() { return &___U3CU3Ef__mgU24cacheE_33; }
	inline void set_U3CU3Ef__mgU24cacheE_33(EventFunction_1_t3912835512 * value)
	{
		___U3CU3Ef__mgU24cacheE_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheE_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheF_34() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheF_34)); }
	inline EventFunction_1_t1475332338 * get_U3CU3Ef__mgU24cacheF_34() const { return ___U3CU3Ef__mgU24cacheF_34; }
	inline EventFunction_1_t1475332338 ** get_address_of_U3CU3Ef__mgU24cacheF_34() { return &___U3CU3Ef__mgU24cacheF_34; }
	inline void set_U3CU3Ef__mgU24cacheF_34(EventFunction_1_t1475332338 * value)
	{
		___U3CU3Ef__mgU24cacheF_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheF_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache10_35() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache10_35)); }
	inline EventFunction_1_t2658898854 * get_U3CU3Ef__mgU24cache10_35() const { return ___U3CU3Ef__mgU24cache10_35; }
	inline EventFunction_1_t2658898854 ** get_address_of_U3CU3Ef__mgU24cache10_35() { return &___U3CU3Ef__mgU24cache10_35; }
	inline void set_U3CU3Ef__mgU24cache10_35(EventFunction_1_t2658898854 * value)
	{
		___U3CU3Ef__mgU24cache10_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache10_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTEEVENTS_T3484638744_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef GCACHIEVEMENTDATA_T675222246_H
#define GCACHIEVEMENTDATA_T675222246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct  GcAchievementData_t675222246 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Identifier
	String_t* ___m_Identifier_0;
	// System.Double UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_PercentCompleted
	double ___m_PercentCompleted_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Completed
	int32_t ___m_Completed_2;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Hidden
	int32_t ___m_Hidden_3;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_LastReportedDate
	int32_t ___m_LastReportedDate_4;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(GcAchievementData_t675222246, ___m_Identifier_0)); }
	inline String_t* get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline String_t** get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(String_t* value)
	{
		___m_Identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Identifier_0), value);
	}

	inline static int32_t get_offset_of_m_PercentCompleted_1() { return static_cast<int32_t>(offsetof(GcAchievementData_t675222246, ___m_PercentCompleted_1)); }
	inline double get_m_PercentCompleted_1() const { return ___m_PercentCompleted_1; }
	inline double* get_address_of_m_PercentCompleted_1() { return &___m_PercentCompleted_1; }
	inline void set_m_PercentCompleted_1(double value)
	{
		___m_PercentCompleted_1 = value;
	}

	inline static int32_t get_offset_of_m_Completed_2() { return static_cast<int32_t>(offsetof(GcAchievementData_t675222246, ___m_Completed_2)); }
	inline int32_t get_m_Completed_2() const { return ___m_Completed_2; }
	inline int32_t* get_address_of_m_Completed_2() { return &___m_Completed_2; }
	inline void set_m_Completed_2(int32_t value)
	{
		___m_Completed_2 = value;
	}

	inline static int32_t get_offset_of_m_Hidden_3() { return static_cast<int32_t>(offsetof(GcAchievementData_t675222246, ___m_Hidden_3)); }
	inline int32_t get_m_Hidden_3() const { return ___m_Hidden_3; }
	inline int32_t* get_address_of_m_Hidden_3() { return &___m_Hidden_3; }
	inline void set_m_Hidden_3(int32_t value)
	{
		___m_Hidden_3 = value;
	}

	inline static int32_t get_offset_of_m_LastReportedDate_4() { return static_cast<int32_t>(offsetof(GcAchievementData_t675222246, ___m_LastReportedDate_4)); }
	inline int32_t get_m_LastReportedDate_4() const { return ___m_LastReportedDate_4; }
	inline int32_t* get_address_of_m_LastReportedDate_4() { return &___m_LastReportedDate_4; }
	inline void set_m_LastReportedDate_4(int32_t value)
	{
		___m_LastReportedDate_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t675222246_marshaled_pinvoke
{
	char* ___m_Identifier_0;
	double ___m_PercentCompleted_1;
	int32_t ___m_Completed_2;
	int32_t ___m_Hidden_3;
	int32_t ___m_LastReportedDate_4;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t675222246_marshaled_com
{
	Il2CppChar* ___m_Identifier_0;
	double ___m_PercentCompleted_1;
	int32_t ___m_Completed_2;
	int32_t ___m_Hidden_3;
	int32_t ___m_LastReportedDate_4;
};
#endif // GCACHIEVEMENTDATA_T675222246_H
#ifndef COLOR32_T2600501292_H
#define COLOR32_T2600501292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t2600501292 
{
public:
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

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T2600501292_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef KEYFRAME_T4206410242_H
#define KEYFRAME_T4206410242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Keyframe
struct  Keyframe_t4206410242 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t4206410242, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYFRAME_T4206410242_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
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
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef TRACKABLEIDPAIR_T4227350457_H
#define TRACKABLEIDPAIR_T4227350457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManager/TrackableIdPair
struct  TrackableIdPair_t4227350457 
{
public:
	// System.Int32 Vuforia.VuforiaManager/TrackableIdPair::TrackableId
	int32_t ___TrackableId_0;
	// System.Int32 Vuforia.VuforiaManager/TrackableIdPair::ResultId
	int32_t ___ResultId_1;

public:
	inline static int32_t get_offset_of_TrackableId_0() { return static_cast<int32_t>(offsetof(TrackableIdPair_t4227350457, ___TrackableId_0)); }
	inline int32_t get_TrackableId_0() const { return ___TrackableId_0; }
	inline int32_t* get_address_of_TrackableId_0() { return &___TrackableId_0; }
	inline void set_TrackableId_0(int32_t value)
	{
		___TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_ResultId_1() { return static_cast<int32_t>(offsetof(TrackableIdPair_t4227350457, ___ResultId_1)); }
	inline int32_t get_ResultId_1() const { return ___ResultId_1; }
	inline int32_t* get_address_of_ResultId_1() { return &___ResultId_1; }
	inline void set_ResultId_1(int32_t value)
	{
		___ResultId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEIDPAIR_T4227350457_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef VIRTUALBUTTONDATA_T1117953748_H
#define VIRTUALBUTTONDATA_T1117953748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/VirtualButtonData
#pragma pack(push, tp, 1)
struct  VirtualButtonData_t1117953748 
{
public:
	// System.Int32 Vuforia.TrackerData/VirtualButtonData::id
	int32_t ___id_0;
	// System.Int32 Vuforia.TrackerData/VirtualButtonData::isPressed
	int32_t ___isPressed_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(VirtualButtonData_t1117953748, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_isPressed_1() { return static_cast<int32_t>(offsetof(VirtualButtonData_t1117953748, ___isPressed_1)); }
	inline int32_t get_isPressed_1() const { return ___isPressed_1; }
	inline int32_t* get_address_of_isPressed_1() { return &___isPressed_1; }
	inline void set_isPressed_1(int32_t value)
	{
		___isPressed_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALBUTTONDATA_T1117953748_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#define CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t2723150157 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t2723150157, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___argumentType_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t2723150157, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t2723150157_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t2723150157_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
#endif // CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef URISCHEME_T722425697_H
#define URISCHEME_T722425697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri/UriScheme
struct  UriScheme_t722425697 
{
public:
	// System.String System.Uri/UriScheme::scheme
	String_t* ___scheme_0;
	// System.String System.Uri/UriScheme::delimiter
	String_t* ___delimiter_1;
	// System.Int32 System.Uri/UriScheme::defaultPort
	int32_t ___defaultPort_2;

public:
	inline static int32_t get_offset_of_scheme_0() { return static_cast<int32_t>(offsetof(UriScheme_t722425697, ___scheme_0)); }
	inline String_t* get_scheme_0() const { return ___scheme_0; }
	inline String_t** get_address_of_scheme_0() { return &___scheme_0; }
	inline void set_scheme_0(String_t* value)
	{
		___scheme_0 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_0), value);
	}

	inline static int32_t get_offset_of_delimiter_1() { return static_cast<int32_t>(offsetof(UriScheme_t722425697, ___delimiter_1)); }
	inline String_t* get_delimiter_1() const { return ___delimiter_1; }
	inline String_t** get_address_of_delimiter_1() { return &___delimiter_1; }
	inline void set_delimiter_1(String_t* value)
	{
		___delimiter_1 = value;
		Il2CppCodeGenWriteBarrier((&___delimiter_1), value);
	}

	inline static int32_t get_offset_of_defaultPort_2() { return static_cast<int32_t>(offsetof(UriScheme_t722425697, ___defaultPort_2)); }
	inline int32_t get_defaultPort_2() const { return ___defaultPort_2; }
	inline int32_t* get_address_of_defaultPort_2() { return &___defaultPort_2; }
	inline void set_defaultPort_2(int32_t value)
	{
		___defaultPort_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Uri/UriScheme
struct UriScheme_t722425697_marshaled_pinvoke
{
	char* ___scheme_0;
	char* ___delimiter_1;
	int32_t ___defaultPort_2;
};
// Native definition for COM marshalling of System.Uri/UriScheme
struct UriScheme_t722425697_marshaled_com
{
	Il2CppChar* ___scheme_0;
	Il2CppChar* ___delimiter_1;
	int32_t ___defaultPort_2;
};
#endif // URISCHEME_T722425697_H
#ifndef ORDERBLOCK_T1585977831_H
#define ORDERBLOCK_T1585977831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BeforeRenderHelper/OrderBlock
struct  OrderBlock_t1585977831 
{
public:
	// System.Int32 UnityEngine.BeforeRenderHelper/OrderBlock::order
	int32_t ___order_0;
	// UnityEngine.Events.UnityAction UnityEngine.BeforeRenderHelper/OrderBlock::callback
	UnityAction_t3245792599 * ___callback_1;

public:
	inline static int32_t get_offset_of_order_0() { return static_cast<int32_t>(offsetof(OrderBlock_t1585977831, ___order_0)); }
	inline int32_t get_order_0() const { return ___order_0; }
	inline int32_t* get_address_of_order_0() { return &___order_0; }
	inline void set_order_0(int32_t value)
	{
		___order_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(OrderBlock_t1585977831, ___callback_1)); }
	inline UnityAction_t3245792599 * get_callback_1() const { return ___callback_1; }
	inline UnityAction_t3245792599 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(UnityAction_t3245792599 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((&___callback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t1585977831_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
// Native definition for COM marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t1585977831_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
#endif // ORDERBLOCK_T1585977831_H
#ifndef BASEEVENTDATA_T3903027533_H
#define BASEEVENTDATA_T3903027533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t3903027533  : public AbstractEventData_t4171500731
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t3903027533, ___m_EventSystem_1)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T3903027533_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef WEBCAMDEVICE_T1322781432_H
#define WEBCAMDEVICE_T1322781432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WebCamDevice
struct  WebCamDevice_t1322781432 
{
public:
	// System.String UnityEngine.WebCamDevice::m_Name
	String_t* ___m_Name_0;
	// System.Int32 UnityEngine.WebCamDevice::m_Flags
	int32_t ___m_Flags_1;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(WebCamDevice_t1322781432, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_0), value);
	}

	inline static int32_t get_offset_of_m_Flags_1() { return static_cast<int32_t>(offsetof(WebCamDevice_t1322781432, ___m_Flags_1)); }
	inline int32_t get_m_Flags_1() const { return ___m_Flags_1; }
	inline int32_t* get_address_of_m_Flags_1() { return &___m_Flags_1; }
	inline void set_m_Flags_1(int32_t value)
	{
		___m_Flags_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t1322781432_marshaled_pinvoke
{
	char* ___m_Name_0;
	int32_t ___m_Flags_1;
};
// Native definition for COM marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t1322781432_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	int32_t ___m_Flags_1;
};
#endif // WEBCAMDEVICE_T1322781432_H
#ifndef VEC2I_T3527036565_H
#define VEC2I_T3527036565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/Vec2I
#pragma pack(push, tp, 1)
struct  Vec2I_t3527036565 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::x
	int32_t ___x_0;
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vec2I_t3527036565, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vec2I_t3527036565, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VEC2I_T3527036565_H
#ifndef EYEWEARCALIBRATIONREADINGDATA_T937256773_H
#define EYEWEARCALIBRATIONREADINGDATA_T937256773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData
struct  EyewearCalibrationReadingData_t937256773 
{
public:
	// System.Single[] Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData::pose
	SingleU5BU5D_t1444911251* ___pose_0;
	// System.Single Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData::scale
	float ___scale_1;
	// System.Single Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData::centerX
	float ___centerX_2;
	// System.Single Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData::centerY
	float ___centerY_3;
	// System.Int32 Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData::type
	int32_t ___type_4;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(EyewearCalibrationReadingData_t937256773, ___pose_0)); }
	inline SingleU5BU5D_t1444911251* get_pose_0() const { return ___pose_0; }
	inline SingleU5BU5D_t1444911251** get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(SingleU5BU5D_t1444911251* value)
	{
		___pose_0 = value;
		Il2CppCodeGenWriteBarrier((&___pose_0), value);
	}

	inline static int32_t get_offset_of_scale_1() { return static_cast<int32_t>(offsetof(EyewearCalibrationReadingData_t937256773, ___scale_1)); }
	inline float get_scale_1() const { return ___scale_1; }
	inline float* get_address_of_scale_1() { return &___scale_1; }
	inline void set_scale_1(float value)
	{
		___scale_1 = value;
	}

	inline static int32_t get_offset_of_centerX_2() { return static_cast<int32_t>(offsetof(EyewearCalibrationReadingData_t937256773, ___centerX_2)); }
	inline float get_centerX_2() const { return ___centerX_2; }
	inline float* get_address_of_centerX_2() { return &___centerX_2; }
	inline void set_centerX_2(float value)
	{
		___centerX_2 = value;
	}

	inline static int32_t get_offset_of_centerY_3() { return static_cast<int32_t>(offsetof(EyewearCalibrationReadingData_t937256773, ___centerY_3)); }
	inline float get_centerY_3() const { return ___centerY_3; }
	inline float* get_address_of_centerY_3() { return &___centerY_3; }
	inline void set_centerY_3(float value)
	{
		___centerY_3 = value;
	}

	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(EyewearCalibrationReadingData_t937256773, ___type_4)); }
	inline int32_t get_type_4() const { return ___type_4; }
	inline int32_t* get_address_of_type_4() { return &___type_4; }
	inline void set_type_4(int32_t value)
	{
		___type_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData
#pragma pack(push, tp, 1)
struct EyewearCalibrationReadingData_t937256773_marshaled_pinvoke
{
	float* ___pose_0;
	float ___scale_1;
	float ___centerX_2;
	float ___centerY_3;
	int32_t ___type_4;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData
#pragma pack(push, tp, 1)
struct EyewearCalibrationReadingData_t937256773_marshaled_com
{
	float* ___pose_0;
	float ___scale_1;
	float ___centerX_2;
	float ___centerY_3;
	int32_t ___type_4;
};
#pragma pack(pop, tp)
#endif // EYEWEARCALIBRATIONREADINGDATA_T937256773_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef HITINFO_T3229609740_H
#define HITINFO_T3229609740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents/HitInfo
struct  HitInfo_t3229609740 
{
public:
	// UnityEngine.GameObject UnityEngine.SendMouseEvents/HitInfo::target
	GameObject_t1113636619 * ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents/HitInfo::camera
	Camera_t4157153871 * ___camera_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(HitInfo_t3229609740, ___target_0)); }
	inline GameObject_t1113636619 * get_target_0() const { return ___target_0; }
	inline GameObject_t1113636619 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t1113636619 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(HitInfo_t3229609740, ___camera_1)); }
	inline Camera_t4157153871 * get_camera_1() const { return ___camera_1; }
	inline Camera_t4157153871 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t4157153871 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((&___camera_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t3229609740_marshaled_pinvoke
{
	GameObject_t1113636619 * ___target_0;
	Camera_t4157153871 * ___camera_1;
};
// Native definition for COM marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t3229609740_marshaled_com
{
	GameObject_t1113636619 * ___target_0;
	Camera_t4157153871 * ___camera_1;
};
#endif // HITINFO_T3229609740_H
#ifndef WORKREQUEST_T1354518612_H
#define WORKREQUEST_T1354518612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct  WorkRequest_t1354518612 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t2750080073 * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t2750080073 * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t2750080073 ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t2750080073 * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateCallback_0), value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateState_1), value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_WaitHandle_2)); }
	inline ManualResetEvent_t451242010 * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_t451242010 ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_t451242010 * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_WaitHandle_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t1354518612_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t1354518612_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;
};
#endif // WORKREQUEST_T1354518612_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef GCSCOREDATA_T2125309831_H
#define GCSCOREDATA_T2125309831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct  GcScoreData_t2125309831 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Category
	String_t* ___m_Category_0;
	// System.UInt32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_ValueLow
	uint32_t ___m_ValueLow_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_ValueHigh
	int32_t ___m_ValueHigh_2;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Date
	int32_t ___m_Date_3;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_FormattedValue
	String_t* ___m_FormattedValue_4;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_PlayerID
	String_t* ___m_PlayerID_5;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Rank
	int32_t ___m_Rank_6;

public:
	inline static int32_t get_offset_of_m_Category_0() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_Category_0)); }
	inline String_t* get_m_Category_0() const { return ___m_Category_0; }
	inline String_t** get_address_of_m_Category_0() { return &___m_Category_0; }
	inline void set_m_Category_0(String_t* value)
	{
		___m_Category_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Category_0), value);
	}

	inline static int32_t get_offset_of_m_ValueLow_1() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_ValueLow_1)); }
	inline uint32_t get_m_ValueLow_1() const { return ___m_ValueLow_1; }
	inline uint32_t* get_address_of_m_ValueLow_1() { return &___m_ValueLow_1; }
	inline void set_m_ValueLow_1(uint32_t value)
	{
		___m_ValueLow_1 = value;
	}

	inline static int32_t get_offset_of_m_ValueHigh_2() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_ValueHigh_2)); }
	inline int32_t get_m_ValueHigh_2() const { return ___m_ValueHigh_2; }
	inline int32_t* get_address_of_m_ValueHigh_2() { return &___m_ValueHigh_2; }
	inline void set_m_ValueHigh_2(int32_t value)
	{
		___m_ValueHigh_2 = value;
	}

	inline static int32_t get_offset_of_m_Date_3() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_Date_3)); }
	inline int32_t get_m_Date_3() const { return ___m_Date_3; }
	inline int32_t* get_address_of_m_Date_3() { return &___m_Date_3; }
	inline void set_m_Date_3(int32_t value)
	{
		___m_Date_3 = value;
	}

	inline static int32_t get_offset_of_m_FormattedValue_4() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_FormattedValue_4)); }
	inline String_t* get_m_FormattedValue_4() const { return ___m_FormattedValue_4; }
	inline String_t** get_address_of_m_FormattedValue_4() { return &___m_FormattedValue_4; }
	inline void set_m_FormattedValue_4(String_t* value)
	{
		___m_FormattedValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_FormattedValue_4), value);
	}

	inline static int32_t get_offset_of_m_PlayerID_5() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_PlayerID_5)); }
	inline String_t* get_m_PlayerID_5() const { return ___m_PlayerID_5; }
	inline String_t** get_address_of_m_PlayerID_5() { return &___m_PlayerID_5; }
	inline void set_m_PlayerID_5(String_t* value)
	{
		___m_PlayerID_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlayerID_5), value);
	}

	inline static int32_t get_offset_of_m_Rank_6() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_Rank_6)); }
	inline int32_t get_m_Rank_6() const { return ___m_Rank_6; }
	inline int32_t* get_address_of_m_Rank_6() { return &___m_Rank_6; }
	inline void set_m_Rank_6(int32_t value)
	{
		___m_Rank_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t2125309831_marshaled_pinvoke
{
	char* ___m_Category_0;
	uint32_t ___m_ValueLow_1;
	int32_t ___m_ValueHigh_2;
	int32_t ___m_Date_3;
	char* ___m_FormattedValue_4;
	char* ___m_PlayerID_5;
	int32_t ___m_Rank_6;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t2125309831_marshaled_com
{
	Il2CppChar* ___m_Category_0;
	uint32_t ___m_ValueLow_1;
	int32_t ___m_ValueHigh_2;
	int32_t ___m_Date_3;
	Il2CppChar* ___m_FormattedValue_4;
	Il2CppChar* ___m_PlayerID_5;
	int32_t ___m_Rank_6;
};
#endif // GCSCOREDATA_T2125309831_H
#ifndef VIDEOMODEDATA_T2066817255_H
#define VIDEOMODEDATA_T2066817255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/VideoModeData
#pragma pack(push, tp, 1)
struct  VideoModeData_t2066817255 
{
public:
	// System.Int32 Vuforia.CameraDevice/VideoModeData::width
	int32_t ___width_0;
	// System.Int32 Vuforia.CameraDevice/VideoModeData::height
	int32_t ___height_1;
	// System.Single Vuforia.CameraDevice/VideoModeData::frameRate
	float ___frameRate_2;
	// System.Int32 Vuforia.CameraDevice/VideoModeData::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_frameRate_2() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___frameRate_2)); }
	inline float get_frameRate_2() const { return ___frameRate_2; }
	inline float* get_address_of_frameRate_2() { return &___frameRate_2; }
	inline void set_frameRate_2(float value)
	{
		___frameRate_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___unused_3)); }
	inline int32_t get_unused_3() const { return ___unused_3; }
	inline int32_t* get_address_of_unused_3() { return &___unused_3; }
	inline void set_unused_3(int32_t value)
	{
		___unused_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOMODEDATA_T2066817255_H
#ifndef RECTANGLEDATA_T1039179782_H
#define RECTANGLEDATA_T1039179782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.RectangleData
#pragma pack(push, tp, 1)
struct  RectangleData_t1039179782 
{
public:
	// System.Single Vuforia.RectangleData::leftTopX
	float ___leftTopX_0;
	// System.Single Vuforia.RectangleData::leftTopY
	float ___leftTopY_1;
	// System.Single Vuforia.RectangleData::rightBottomX
	float ___rightBottomX_2;
	// System.Single Vuforia.RectangleData::rightBottomY
	float ___rightBottomY_3;

public:
	inline static int32_t get_offset_of_leftTopX_0() { return static_cast<int32_t>(offsetof(RectangleData_t1039179782, ___leftTopX_0)); }
	inline float get_leftTopX_0() const { return ___leftTopX_0; }
	inline float* get_address_of_leftTopX_0() { return &___leftTopX_0; }
	inline void set_leftTopX_0(float value)
	{
		___leftTopX_0 = value;
	}

	inline static int32_t get_offset_of_leftTopY_1() { return static_cast<int32_t>(offsetof(RectangleData_t1039179782, ___leftTopY_1)); }
	inline float get_leftTopY_1() const { return ___leftTopY_1; }
	inline float* get_address_of_leftTopY_1() { return &___leftTopY_1; }
	inline void set_leftTopY_1(float value)
	{
		___leftTopY_1 = value;
	}

	inline static int32_t get_offset_of_rightBottomX_2() { return static_cast<int32_t>(offsetof(RectangleData_t1039179782, ___rightBottomX_2)); }
	inline float get_rightBottomX_2() const { return ___rightBottomX_2; }
	inline float* get_address_of_rightBottomX_2() { return &___rightBottomX_2; }
	inline void set_rightBottomX_2(float value)
	{
		___rightBottomX_2 = value;
	}

	inline static int32_t get_offset_of_rightBottomY_3() { return static_cast<int32_t>(offsetof(RectangleData_t1039179782, ___rightBottomY_3)); }
	inline float get_rightBottomY_3() const { return ___rightBottomY_3; }
	inline float* get_address_of_rightBottomY_3() { return &___rightBottomY_3; }
	inline void set_rightBottomY_3(float value)
	{
		___rightBottomY_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTANGLEDATA_T1039179782_H
#ifndef UILINEINFO_T4195266810_H
#define UILINEINFO_T4195266810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UILineInfo
struct  UILineInfo_t4195266810 
{
public:
	// System.Int32 UnityEngine.UILineInfo::startCharIdx
	int32_t ___startCharIdx_0;
	// System.Int32 UnityEngine.UILineInfo::height
	int32_t ___height_1;
	// System.Single UnityEngine.UILineInfo::topY
	float ___topY_2;
	// System.Single UnityEngine.UILineInfo::leading
	float ___leading_3;

public:
	inline static int32_t get_offset_of_startCharIdx_0() { return static_cast<int32_t>(offsetof(UILineInfo_t4195266810, ___startCharIdx_0)); }
	inline int32_t get_startCharIdx_0() const { return ___startCharIdx_0; }
	inline int32_t* get_address_of_startCharIdx_0() { return &___startCharIdx_0; }
	inline void set_startCharIdx_0(int32_t value)
	{
		___startCharIdx_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(UILineInfo_t4195266810, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_topY_2() { return static_cast<int32_t>(offsetof(UILineInfo_t4195266810, ___topY_2)); }
	inline float get_topY_2() const { return ___topY_2; }
	inline float* get_address_of_topY_2() { return &___topY_2; }
	inline void set_topY_2(float value)
	{
		___topY_2 = value;
	}

	inline static int32_t get_offset_of_leading_3() { return static_cast<int32_t>(offsetof(UILineInfo_t4195266810, ___leading_3)); }
	inline float get_leading_3() const { return ___leading_3; }
	inline float* get_address_of_leading_3() { return &___leading_3; }
	inline void set_leading_3(float value)
	{
		___leading_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UILINEINFO_T4195266810_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#define CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t287865710 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t2723150157  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t287865710, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t2723150157  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t2723150157 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t2723150157  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t287865710, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t287865710_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t2723150157_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t287865710_marshaled_com
{
	CustomAttributeTypedArgument_t2723150157_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
#endif // CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1066900953_H
#ifndef STEREOFRAMEWORK_T3144873991_H
#define STEREOFRAMEWORK_T3144873991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController/StereoFramework
struct  StereoFramework_t3144873991 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController/StereoFramework::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StereoFramework_t3144873991, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STEREOFRAMEWORK_T3144873991_H
#ifndef INTERNALVERTEXCHANNELTYPE_T299736786_H
#define INTERNALVERTEXCHANNELTYPE_T299736786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh/InternalVertexChannelType
struct  InternalVertexChannelType_t299736786 
{
public:
	// System.Int32 UnityEngine.Mesh/InternalVertexChannelType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InternalVertexChannelType_t299736786, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALVERTEXCHANNELTYPE_T299736786_H
#ifndef INTERNALSHADERCHANNEL_T300897861_H
#define INTERNALSHADERCHANNEL_T300897861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh/InternalShaderChannel
struct  InternalShaderChannel_t300897861 
{
public:
	// System.Int32 UnityEngine.Mesh/InternalShaderChannel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InternalShaderChannel_t300897861, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALSHADERCHANNEL_T300897861_H
#ifndef DATATYPE_T1354848506_H
#define DATATYPE_T1354848506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraField/DataType
struct  DataType_t1354848506 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraField/DataType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataType_t1354848506, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_T1354848506_H
#ifndef DATASTREAMTYPE_T4132467813_H
#define DATASTREAMTYPE_T4132467813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t4132467813 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataStreamType_t4132467813, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASTREAMTYPE_T4132467813_H
#ifndef POSEDATA_T3794839648_H
#define POSEDATA_T3794839648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/PoseData
#pragma pack(push, tp, 1)
struct  PoseData_t3794839648 
{
public:
	// UnityEngine.Vector3 Vuforia.TrackerData/PoseData::position
	Vector3_t3722313464  ___position_0;
	// UnityEngine.Quaternion Vuforia.TrackerData/PoseData::orientation
	Quaternion_t2301928331  ___orientation_1;
	// System.Int32 Vuforia.TrackerData/PoseData::csInteger
	int32_t ___csInteger_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(PoseData_t3794839648, ___position_0)); }
	inline Vector3_t3722313464  get_position_0() const { return ___position_0; }
	inline Vector3_t3722313464 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3722313464  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(PoseData_t3794839648, ___orientation_1)); }
	inline Quaternion_t2301928331  get_orientation_1() const { return ___orientation_1; }
	inline Quaternion_t2301928331 * get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(Quaternion_t2301928331  value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_csInteger_2() { return static_cast<int32_t>(offsetof(PoseData_t3794839648, ___csInteger_2)); }
	inline int32_t get_csInteger_2() const { return ___csInteger_2; }
	inline int32_t* get_address_of_csInteger_2() { return &___csInteger_2; }
	inline void set_csInteger_2(int32_t value)
	{
		___csInteger_2 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSEDATA_T3794839648_H
#ifndef INITIALIZABLEBOOL_T3274999204_H
#define INITIALIZABLEBOOL_T3274999204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRuntimeUtilities/InitializableBool
struct  InitializableBool_t3274999204 
{
public:
	// System.Int32 Vuforia.VuforiaRuntimeUtilities/InitializableBool::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InitializableBool_t3274999204, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITIALIZABLEBOOL_T3274999204_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1769908631_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef ALIGNMENTTYPE_T1920855420_H
#define ALIGNMENTTYPE_T1920855420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EyewearDevice/EyewearCalibrationReading/AlignmentType
struct  AlignmentType_t1920855420 
{
public:
	// System.Int32 Vuforia.EyewearDevice/EyewearCalibrationReading/AlignmentType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AlignmentType_t1920855420, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALIGNMENTTYPE_T1920855420_H
#ifndef FALLBACK_T3495999270_H
#define FALLBACK_T3495999270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/Fallback
struct  Fallback_t3495999270 
{
public:
	// System.Int32 System.Linq.Enumerable/Fallback::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Fallback_t3495999270, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FALLBACK_T3495999270_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_T2656606514_H
#ifndef OBB2D_T1491623550_H
#define OBB2D_T1491623550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/Obb2D
#pragma pack(push, tp, 1)
struct  Obb2D_t1491623550 
{
public:
	// UnityEngine.Vector2 Vuforia.TrackerData/Obb2D::center
	Vector2_t2156229523  ___center_0;
	// UnityEngine.Vector2 Vuforia.TrackerData/Obb2D::halfExtents
	Vector2_t2156229523  ___halfExtents_1;
	// System.Single Vuforia.TrackerData/Obb2D::rotation
	float ___rotation_2;
	// System.Int32 Vuforia.TrackerData/Obb2D::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_center_0() { return static_cast<int32_t>(offsetof(Obb2D_t1491623550, ___center_0)); }
	inline Vector2_t2156229523  get_center_0() const { return ___center_0; }
	inline Vector2_t2156229523 * get_address_of_center_0() { return &___center_0; }
	inline void set_center_0(Vector2_t2156229523  value)
	{
		___center_0 = value;
	}

	inline static int32_t get_offset_of_halfExtents_1() { return static_cast<int32_t>(offsetof(Obb2D_t1491623550, ___halfExtents_1)); }
	inline Vector2_t2156229523  get_halfExtents_1() const { return ___halfExtents_1; }
	inline Vector2_t2156229523 * get_address_of_halfExtents_1() { return &___halfExtents_1; }
	inline void set_halfExtents_1(Vector2_t2156229523  value)
	{
		___halfExtents_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(Obb2D_t1491623550, ___rotation_2)); }
	inline float get_rotation_2() const { return ___rotation_2; }
	inline float* get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(float value)
	{
		___rotation_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(Obb2D_t1491623550, ___unused_3)); }
	inline int32_t get_unused_3() const { return ___unused_3; }
	inline int32_t* get_address_of_unused_3() { return &___unused_3; }
	inline void set_unused_3(int32_t value)
	{
		___unused_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBB2D_T1491623550_H
#ifndef INSTANCEIDDATA_T3520832738_H
#define INSTANCEIDDATA_T3520832738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/InstanceIdData
#pragma pack(push, tp, 1)
struct  InstanceIdData_t3520832738 
{
public:
	// System.UInt64 Vuforia.TrackerData/InstanceIdData::numericValue
	uint64_t ___numericValue_0;
	// System.IntPtr Vuforia.TrackerData/InstanceIdData::buffer
	intptr_t ___buffer_1;
	// System.IntPtr Vuforia.TrackerData/InstanceIdData::reserved
	intptr_t ___reserved_2;
	// System.UInt32 Vuforia.TrackerData/InstanceIdData::dataLength
	uint32_t ___dataLength_3;
	// System.Int32 Vuforia.TrackerData/InstanceIdData::dataType
	int32_t ___dataType_4;

public:
	inline static int32_t get_offset_of_numericValue_0() { return static_cast<int32_t>(offsetof(InstanceIdData_t3520832738, ___numericValue_0)); }
	inline uint64_t get_numericValue_0() const { return ___numericValue_0; }
	inline uint64_t* get_address_of_numericValue_0() { return &___numericValue_0; }
	inline void set_numericValue_0(uint64_t value)
	{
		___numericValue_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(InstanceIdData_t3520832738, ___buffer_1)); }
	inline intptr_t get_buffer_1() const { return ___buffer_1; }
	inline intptr_t* get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(intptr_t value)
	{
		___buffer_1 = value;
	}

	inline static int32_t get_offset_of_reserved_2() { return static_cast<int32_t>(offsetof(InstanceIdData_t3520832738, ___reserved_2)); }
	inline intptr_t get_reserved_2() const { return ___reserved_2; }
	inline intptr_t* get_address_of_reserved_2() { return &___reserved_2; }
	inline void set_reserved_2(intptr_t value)
	{
		___reserved_2 = value;
	}

	inline static int32_t get_offset_of_dataLength_3() { return static_cast<int32_t>(offsetof(InstanceIdData_t3520832738, ___dataLength_3)); }
	inline uint32_t get_dataLength_3() const { return ___dataLength_3; }
	inline uint32_t* get_address_of_dataLength_3() { return &___dataLength_3; }
	inline void set_dataLength_3(uint32_t value)
	{
		___dataLength_3 = value;
	}

	inline static int32_t get_offset_of_dataType_4() { return static_cast<int32_t>(offsetof(InstanceIdData_t3520832738, ___dataType_4)); }
	inline int32_t get_dataType_4() const { return ___dataType_4; }
	inline int32_t* get_address_of_dataType_4() { return &___dataType_4; }
	inline void set_dataType_4(int32_t value)
	{
		___dataType_4 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEIDDATA_T3520832738_H
#ifndef CONTENTTYPE_T1787303396_H
#define CONTENTTYPE_T1787303396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/ContentType
struct  ContentType_t1787303396 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ContentType_t1787303396, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTTYPE_T1787303396_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef CASTHELPER_1_T2613165452_H
#define CASTHELPER_1_T2613165452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CastHelper`1<System.Object>
struct  CastHelper_1_t2613165452 
{
public:
	// T UnityEngine.CastHelper`1::t
	RuntimeObject * ___t_0;
	// System.IntPtr UnityEngine.CastHelper`1::onePointerFurtherThanT
	intptr_t ___onePointerFurtherThanT_1;

public:
	inline static int32_t get_offset_of_t_0() { return static_cast<int32_t>(offsetof(CastHelper_1_t2613165452, ___t_0)); }
	inline RuntimeObject * get_t_0() const { return ___t_0; }
	inline RuntimeObject ** get_address_of_t_0() { return &___t_0; }
	inline void set_t_0(RuntimeObject * value)
	{
		___t_0 = value;
		Il2CppCodeGenWriteBarrier((&___t_0), value);
	}

	inline static int32_t get_offset_of_onePointerFurtherThanT_1() { return static_cast<int32_t>(offsetof(CastHelper_1_t2613165452, ___onePointerFurtherThanT_1)); }
	inline intptr_t get_onePointerFurtherThanT_1() const { return ___onePointerFurtherThanT_1; }
	inline intptr_t* get_address_of_onePointerFurtherThanT_1() { return &___onePointerFurtherThanT_1; }
	inline void set_onePointerFurtherThanT_1(intptr_t value)
	{
		___onePointerFurtherThanT_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASTHELPER_1_T2613165452_H
#ifndef UICHARINFO_T75501106_H
#define UICHARINFO_T75501106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UICharInfo
struct  UICharInfo_t75501106 
{
public:
	// UnityEngine.Vector2 UnityEngine.UICharInfo::cursorPos
	Vector2_t2156229523  ___cursorPos_0;
	// System.Single UnityEngine.UICharInfo::charWidth
	float ___charWidth_1;

public:
	inline static int32_t get_offset_of_cursorPos_0() { return static_cast<int32_t>(offsetof(UICharInfo_t75501106, ___cursorPos_0)); }
	inline Vector2_t2156229523  get_cursorPos_0() const { return ___cursorPos_0; }
	inline Vector2_t2156229523 * get_address_of_cursorPos_0() { return &___cursorPos_0; }
	inline void set_cursorPos_0(Vector2_t2156229523  value)
	{
		___cursorPos_0 = value;
	}

	inline static int32_t get_offset_of_charWidth_1() { return static_cast<int32_t>(offsetof(UICharInfo_t75501106, ___charWidth_1)); }
	inline float get_charWidth_1() const { return ___charWidth_1; }
	inline float* get_address_of_charWidth_1() { return &___charWidth_1; }
	inline void set_charWidth_1(float value)
	{
		___charWidth_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UICHARINFO_T75501106_H
#ifndef UIVERTEX_T4057497605_H
#define UIVERTEX_T4057497605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UIVertex
struct  UIVertex_t4057497605 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t3722313464  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t3722313464  ___normal_1;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t2600501292  ___color_2;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv0
	Vector2_t2156229523  ___uv0_3;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv1
	Vector2_t2156229523  ___uv1_4;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv2
	Vector2_t2156229523  ___uv2_5;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv3
	Vector2_t2156229523  ___uv3_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_t3319028937  ___tangent_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___position_0)); }
	inline Vector3_t3722313464  get_position_0() const { return ___position_0; }
	inline Vector3_t3722313464 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3722313464  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___normal_1)); }
	inline Vector3_t3722313464  get_normal_1() const { return ___normal_1; }
	inline Vector3_t3722313464 * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t3722313464  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___color_2)); }
	inline Color32_t2600501292  get_color_2() const { return ___color_2; }
	inline Color32_t2600501292 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color32_t2600501292  value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_uv0_3() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___uv0_3)); }
	inline Vector2_t2156229523  get_uv0_3() const { return ___uv0_3; }
	inline Vector2_t2156229523 * get_address_of_uv0_3() { return &___uv0_3; }
	inline void set_uv0_3(Vector2_t2156229523  value)
	{
		___uv0_3 = value;
	}

	inline static int32_t get_offset_of_uv1_4() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___uv1_4)); }
	inline Vector2_t2156229523  get_uv1_4() const { return ___uv1_4; }
	inline Vector2_t2156229523 * get_address_of_uv1_4() { return &___uv1_4; }
	inline void set_uv1_4(Vector2_t2156229523  value)
	{
		___uv1_4 = value;
	}

	inline static int32_t get_offset_of_uv2_5() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___uv2_5)); }
	inline Vector2_t2156229523  get_uv2_5() const { return ___uv2_5; }
	inline Vector2_t2156229523 * get_address_of_uv2_5() { return &___uv2_5; }
	inline void set_uv2_5(Vector2_t2156229523  value)
	{
		___uv2_5 = value;
	}

	inline static int32_t get_offset_of_uv3_6() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___uv3_6)); }
	inline Vector2_t2156229523  get_uv3_6() const { return ___uv3_6; }
	inline Vector2_t2156229523 * get_address_of_uv3_6() { return &___uv3_6; }
	inline void set_uv3_6(Vector2_t2156229523  value)
	{
		___uv3_6 = value;
	}

	inline static int32_t get_offset_of_tangent_7() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605, ___tangent_7)); }
	inline Vector4_t3319028937  get_tangent_7() const { return ___tangent_7; }
	inline Vector4_t3319028937 * get_address_of_tangent_7() { return &___tangent_7; }
	inline void set_tangent_7(Vector4_t3319028937  value)
	{
		___tangent_7 = value;
	}
};

struct UIVertex_t4057497605_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t2600501292  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_t3319028937  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_t4057497605  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_t2600501292  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_t2600501292 * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_t2600501292  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_t3319028937  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_t3319028937 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_t3319028937  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_t4057497605_StaticFields, ___simpleVert_10)); }
	inline UIVertex_t4057497605  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_t4057497605 * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_t4057497605  value)
	{
		___simpleVert_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIVERTEX_T4057497605_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef PROFILEDATA_T3519391925_H
#define PROFILEDATA_T3519391925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamProfile/ProfileData
struct  ProfileData_t3519391925 
{
public:
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamProfile/ProfileData::RequestedTextureSize
	Vec2I_t3527036565  ___RequestedTextureSize_0;
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamProfile/ProfileData::ResampledTextureSize
	Vec2I_t3527036565  ___ResampledTextureSize_1;
	// System.Int32 Vuforia.WebCamProfile/ProfileData::RequestedFPS
	int32_t ___RequestedFPS_2;

public:
	inline static int32_t get_offset_of_RequestedTextureSize_0() { return static_cast<int32_t>(offsetof(ProfileData_t3519391925, ___RequestedTextureSize_0)); }
	inline Vec2I_t3527036565  get_RequestedTextureSize_0() const { return ___RequestedTextureSize_0; }
	inline Vec2I_t3527036565 * get_address_of_RequestedTextureSize_0() { return &___RequestedTextureSize_0; }
	inline void set_RequestedTextureSize_0(Vec2I_t3527036565  value)
	{
		___RequestedTextureSize_0 = value;
	}

	inline static int32_t get_offset_of_ResampledTextureSize_1() { return static_cast<int32_t>(offsetof(ProfileData_t3519391925, ___ResampledTextureSize_1)); }
	inline Vec2I_t3527036565  get_ResampledTextureSize_1() const { return ___ResampledTextureSize_1; }
	inline Vec2I_t3527036565 * get_address_of_ResampledTextureSize_1() { return &___ResampledTextureSize_1; }
	inline void set_ResampledTextureSize_1(Vec2I_t3527036565  value)
	{
		___ResampledTextureSize_1 = value;
	}

	inline static int32_t get_offset_of_RequestedFPS_2() { return static_cast<int32_t>(offsetof(ProfileData_t3519391925, ___RequestedFPS_2)); }
	inline int32_t get_RequestedFPS_2() const { return ___RequestedFPS_2; }
	inline int32_t* get_address_of_RequestedFPS_2() { return &___RequestedFPS_2; }
	inline void set_RequestedFPS_2(int32_t value)
	{
		___RequestedFPS_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROFILEDATA_T3519391925_H
#ifndef POSEINFO_T1612729179_H
#define POSEINFO_T1612729179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HoloLensExtendedTrackingManager/PoseInfo
struct  PoseInfo_t1612729179 
{
public:
	// UnityEngine.Vector3 Vuforia.HoloLensExtendedTrackingManager/PoseInfo::Position
	Vector3_t3722313464  ___Position_0;
	// UnityEngine.Quaternion Vuforia.HoloLensExtendedTrackingManager/PoseInfo::Rotation
	Quaternion_t2301928331  ___Rotation_1;
	// System.Int32 Vuforia.HoloLensExtendedTrackingManager/PoseInfo::NumFramesPoseWasOff
	int32_t ___NumFramesPoseWasOff_2;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(PoseInfo_t1612729179, ___Position_0)); }
	inline Vector3_t3722313464  get_Position_0() const { return ___Position_0; }
	inline Vector3_t3722313464 * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vector3_t3722313464  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Rotation_1() { return static_cast<int32_t>(offsetof(PoseInfo_t1612729179, ___Rotation_1)); }
	inline Quaternion_t2301928331  get_Rotation_1() const { return ___Rotation_1; }
	inline Quaternion_t2301928331 * get_address_of_Rotation_1() { return &___Rotation_1; }
	inline void set_Rotation_1(Quaternion_t2301928331  value)
	{
		___Rotation_1 = value;
	}

	inline static int32_t get_offset_of_NumFramesPoseWasOff_2() { return static_cast<int32_t>(offsetof(PoseInfo_t1612729179, ___NumFramesPoseWasOff_2)); }
	inline int32_t get_NumFramesPoseWasOff_2() const { return ___NumFramesPoseWasOff_2; }
	inline int32_t* get_address_of_NumFramesPoseWasOff_2() { return &___NumFramesPoseWasOff_2; }
	inline void set_NumFramesPoseWasOff_2(int32_t value)
	{
		___NumFramesPoseWasOff_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSEINFO_T1612729179_H
#ifndef WORDDATA_T2624767814_H
#define WORDDATA_T2624767814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/WordData
#pragma pack(push, tp, 1)
struct  WordData_t2624767814 
{
public:
	// System.IntPtr Vuforia.TrackerData/WordData::stringValue
	intptr_t ___stringValue_0;
	// System.Int32 Vuforia.TrackerData/WordData::id
	int32_t ___id_1;
	// UnityEngine.Vector2 Vuforia.TrackerData/WordData::size
	Vector2_t2156229523  ___size_2;
	// System.Int32 Vuforia.TrackerData/WordData::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_stringValue_0() { return static_cast<int32_t>(offsetof(WordData_t2624767814, ___stringValue_0)); }
	inline intptr_t get_stringValue_0() const { return ___stringValue_0; }
	inline intptr_t* get_address_of_stringValue_0() { return &___stringValue_0; }
	inline void set_stringValue_0(intptr_t value)
	{
		___stringValue_0 = value;
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(WordData_t2624767814, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(WordData_t2624767814, ___size_2)); }
	inline Vector2_t2156229523  get_size_2() const { return ___size_2; }
	inline Vector2_t2156229523 * get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(Vector2_t2156229523  value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(WordData_t2624767814, ___unused_3)); }
	inline int32_t get_unused_3() const { return ___unused_3; }
	inline int32_t* get_address_of_unused_3() { return &___unused_3; }
	inline void set_unused_3(int32_t value)
	{
		___unused_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDDATA_T2624767814_H
#ifndef PIXEL_FORMAT_T3209881435_H
#define PIXEL_FORMAT_T3209881435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Image/PIXEL_FORMAT
struct  PIXEL_FORMAT_t3209881435 
{
public:
	// System.Int32 Vuforia.Image/PIXEL_FORMAT::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PIXEL_FORMAT_t3209881435, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PIXEL_FORMAT_T3209881435_H
#ifndef TARGETSEARCHRESULT_T3441982613_H
#define TARGETSEARCHRESULT_T3441982613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetFinder/TargetSearchResult
struct  TargetSearchResult_t3441982613 
{
public:
	// System.String Vuforia.TargetFinder/TargetSearchResult::TargetName
	String_t* ___TargetName_0;
	// System.String Vuforia.TargetFinder/TargetSearchResult::UniqueTargetId
	String_t* ___UniqueTargetId_1;
	// System.Single Vuforia.TargetFinder/TargetSearchResult::TargetSize
	float ___TargetSize_2;
	// System.String Vuforia.TargetFinder/TargetSearchResult::MetaData
	String_t* ___MetaData_3;
	// System.Byte Vuforia.TargetFinder/TargetSearchResult::TrackingRating
	uint8_t ___TrackingRating_4;
	// System.IntPtr Vuforia.TargetFinder/TargetSearchResult::TargetSearchResultPtr
	intptr_t ___TargetSearchResultPtr_5;

public:
	inline static int32_t get_offset_of_TargetName_0() { return static_cast<int32_t>(offsetof(TargetSearchResult_t3441982613, ___TargetName_0)); }
	inline String_t* get_TargetName_0() const { return ___TargetName_0; }
	inline String_t** get_address_of_TargetName_0() { return &___TargetName_0; }
	inline void set_TargetName_0(String_t* value)
	{
		___TargetName_0 = value;
		Il2CppCodeGenWriteBarrier((&___TargetName_0), value);
	}

	inline static int32_t get_offset_of_UniqueTargetId_1() { return static_cast<int32_t>(offsetof(TargetSearchResult_t3441982613, ___UniqueTargetId_1)); }
	inline String_t* get_UniqueTargetId_1() const { return ___UniqueTargetId_1; }
	inline String_t** get_address_of_UniqueTargetId_1() { return &___UniqueTargetId_1; }
	inline void set_UniqueTargetId_1(String_t* value)
	{
		___UniqueTargetId_1 = value;
		Il2CppCodeGenWriteBarrier((&___UniqueTargetId_1), value);
	}

	inline static int32_t get_offset_of_TargetSize_2() { return static_cast<int32_t>(offsetof(TargetSearchResult_t3441982613, ___TargetSize_2)); }
	inline float get_TargetSize_2() const { return ___TargetSize_2; }
	inline float* get_address_of_TargetSize_2() { return &___TargetSize_2; }
	inline void set_TargetSize_2(float value)
	{
		___TargetSize_2 = value;
	}

	inline static int32_t get_offset_of_MetaData_3() { return static_cast<int32_t>(offsetof(TargetSearchResult_t3441982613, ___MetaData_3)); }
	inline String_t* get_MetaData_3() const { return ___MetaData_3; }
	inline String_t** get_address_of_MetaData_3() { return &___MetaData_3; }
	inline void set_MetaData_3(String_t* value)
	{
		___MetaData_3 = value;
		Il2CppCodeGenWriteBarrier((&___MetaData_3), value);
	}

	inline static int32_t get_offset_of_TrackingRating_4() { return static_cast<int32_t>(offsetof(TargetSearchResult_t3441982613, ___TrackingRating_4)); }
	inline uint8_t get_TrackingRating_4() const { return ___TrackingRating_4; }
	inline uint8_t* get_address_of_TrackingRating_4() { return &___TrackingRating_4; }
	inline void set_TrackingRating_4(uint8_t value)
	{
		___TrackingRating_4 = value;
	}

	inline static int32_t get_offset_of_TargetSearchResultPtr_5() { return static_cast<int32_t>(offsetof(TargetSearchResult_t3441982613, ___TargetSearchResultPtr_5)); }
	inline intptr_t get_TargetSearchResultPtr_5() const { return ___TargetSearchResultPtr_5; }
	inline intptr_t* get_address_of_TargetSearchResultPtr_5() { return &___TargetSearchResultPtr_5; }
	inline void set_TargetSearchResultPtr_5(intptr_t value)
	{
		___TargetSearchResultPtr_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuforia.TargetFinder/TargetSearchResult
struct TargetSearchResult_t3441982613_marshaled_pinvoke
{
	char* ___TargetName_0;
	char* ___UniqueTargetId_1;
	float ___TargetSize_2;
	char* ___MetaData_3;
	uint8_t ___TrackingRating_4;
	intptr_t ___TargetSearchResultPtr_5;
};
// Native definition for COM marshalling of Vuforia.TargetFinder/TargetSearchResult
struct TargetSearchResult_t3441982613_marshaled_com
{
	Il2CppChar* ___TargetName_0;
	Il2CppChar* ___UniqueTargetId_1;
	float ___TargetSize_2;
	Il2CppChar* ___MetaData_3;
	uint8_t ___TrackingRating_4;
	intptr_t ___TargetSearchResultPtr_5;
};
#endif // TARGETSEARCHRESULT_T3441982613_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef STEREOSCOPICEYE_T2238664036_H
#define STEREOSCOPICEYE_T2238664036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera/StereoscopicEye
struct  StereoscopicEye_t2238664036 
{
public:
	// System.Int32 UnityEngine.Camera/StereoscopicEye::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StereoscopicEye_t2238664036, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STEREOSCOPICEYE_T2238664036_H
#ifndef CONTACTPOINT_T3758755253_H
#define CONTACTPOINT_T3758755253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint
struct  ContactPoint_t3758755253 
{
public:
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t3722313464  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t3722313464  ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint_t3758755253, ___m_Point_0)); }
	inline Vector3_t3722313464  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t3722313464 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t3722313464  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint_t3758755253, ___m_Normal_1)); }
	inline Vector3_t3722313464  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3722313464  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisColliderInstanceID_2() { return static_cast<int32_t>(offsetof(ContactPoint_t3758755253, ___m_ThisColliderInstanceID_2)); }
	inline int32_t get_m_ThisColliderInstanceID_2() const { return ___m_ThisColliderInstanceID_2; }
	inline int32_t* get_address_of_m_ThisColliderInstanceID_2() { return &___m_ThisColliderInstanceID_2; }
	inline void set_m_ThisColliderInstanceID_2(int32_t value)
	{
		___m_ThisColliderInstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherColliderInstanceID_3() { return static_cast<int32_t>(offsetof(ContactPoint_t3758755253, ___m_OtherColliderInstanceID_3)); }
	inline int32_t get_m_OtherColliderInstanceID_3() const { return ___m_OtherColliderInstanceID_3; }
	inline int32_t* get_address_of_m_OtherColliderInstanceID_3() { return &___m_OtherColliderInstanceID_3; }
	inline void set_m_OtherColliderInstanceID_3(int32_t value)
	{
		___m_OtherColliderInstanceID_3 = value;
	}

	inline static int32_t get_offset_of_m_Separation_4() { return static_cast<int32_t>(offsetof(ContactPoint_t3758755253, ___m_Separation_4)); }
	inline float get_m_Separation_4() const { return ___m_Separation_4; }
	inline float* get_address_of_m_Separation_4() { return &___m_Separation_4; }
	inline void set_m_Separation_4(float value)
	{
		___m_Separation_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTPOINT_T3758755253_H
#ifndef RAYCASTRESULT_T3360306849_H
#define RAYCASTRESULT_T3360306849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t3360306849 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t1113636619 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t4150874583 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t3722313464  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t3722313464  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t2156229523  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___m_GameObject_0)); }
	inline GameObject_t1113636619 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_t1113636619 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_t1113636619 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_0), value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___module_1)); }
	inline BaseRaycaster_t4150874583 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_t4150874583 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_t4150874583 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((&___module_1), value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldPosition_7)); }
	inline Vector3_t3722313464  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t3722313464 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t3722313464  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldNormal_8)); }
	inline Vector3_t3722313464  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t3722313464 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t3722313464  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___screenPosition_9)); }
	inline Vector2_t2156229523  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_t2156229523 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_t2156229523  value)
	{
		___screenPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_pinvoke
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_com
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
#endif // RAYCASTRESULT_T3360306849_H
#ifndef PLANE_T1000493321_H
#define PLANE_T1000493321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Plane
struct  Plane_t1000493321 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t3722313464  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t1000493321, ___m_Normal_0)); }
	inline Vector3_t3722313464  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t3722313464  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t1000493321, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANE_T1000493321_H
#ifndef STATUS_T1100905814_H
#define STATUS_T1100905814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour/Status
struct  Status_t1100905814 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/Status::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Status_t1100905814, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATUS_T1100905814_H
#ifndef CAMERADEVICEMODE_T2478715656_H
#define CAMERADEVICEMODE_T2478715656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDeviceMode
struct  CameraDeviceMode_t2478715656 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDeviceMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraDeviceMode_t2478715656, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADEVICEMODE_T2478715656_H
#ifndef CAMERADIRECTION_T637748435_H
#define CAMERADIRECTION_T637748435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDirection
struct  CameraDirection_t637748435 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraDirection_t637748435, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADIRECTION_T637748435_H
#ifndef RAYCASTHIT2D_T2279581989_H
#define RAYCASTHIT2D_T2279581989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t2279581989 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t2156229523  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t2156229523  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t2156229523  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// UnityEngine.Collider2D UnityEngine.RaycastHit2D::m_Collider
	Collider2D_t2806799626 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Centroid_0)); }
	inline Vector2_t2156229523  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_t2156229523 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_t2156229523  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Point_1)); }
	inline Vector2_t2156229523  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_t2156229523 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_t2156229523  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Normal_2)); }
	inline Vector2_t2156229523  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_t2156229523 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_t2156229523  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Collider_5)); }
	inline Collider2D_t2806799626 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider2D_t2806799626 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider2D_t2806799626 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t2279581989_marshaled_pinvoke
{
	Vector2_t2156229523  ___m_Centroid_0;
	Vector2_t2156229523  ___m_Point_1;
	Vector2_t2156229523  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t2806799626 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t2279581989_marshaled_com
{
	Vector2_t2156229523  ___m_Centroid_0;
	Vector2_t2156229523  ___m_Point_1;
	Vector2_t2156229523  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t2806799626 * ___m_Collider_5;
};
#endif // RAYCASTHIT2D_T2279581989_H
#ifndef RAYCASTHIT_T1056001966_H
#define RAYCASTHIT_T1056001966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t1056001966 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t3722313464  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t3722313464  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t2156229523  ___m_UV_4;
	// UnityEngine.Collider UnityEngine.RaycastHit::m_Collider
	Collider_t1773347010 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Point_0)); }
	inline Vector3_t3722313464  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t3722313464 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t3722313464  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Normal_1)); }
	inline Vector3_t3722313464  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3722313464  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_UV_4)); }
	inline Vector2_t2156229523  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t2156229523 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t2156229523  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Collider_5)); }
	inline Collider_t1773347010 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider_t1773347010 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider_t1773347010 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1056001966_marshaled_pinvoke
{
	Vector3_t3722313464  ___m_Point_0;
	Vector3_t3722313464  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2156229523  ___m_UV_4;
	Collider_t1773347010 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1056001966_marshaled_com
{
	Vector3_t3722313464  ___m_Point_0;
	Vector3_t3722313464  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2156229523  ___m_UV_4;
	Collider_t1773347010 * ___m_Collider_5;
};
#endif // RAYCASTHIT_T1056001966_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef POSEAGEENTRY_T2181165958_H
#define POSEAGEENTRY_T2181165958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry
struct  PoseAgeEntry_t2181165958 
{
public:
	// Vuforia.HoloLensExtendedTrackingManager/PoseInfo Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry::Pose
	PoseInfo_t1612729179  ___Pose_0;
	// Vuforia.HoloLensExtendedTrackingManager/PoseInfo Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry::CameraPose
	PoseInfo_t1612729179  ___CameraPose_1;
	// System.Int32 Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry::Age
	int32_t ___Age_2;

public:
	inline static int32_t get_offset_of_Pose_0() { return static_cast<int32_t>(offsetof(PoseAgeEntry_t2181165958, ___Pose_0)); }
	inline PoseInfo_t1612729179  get_Pose_0() const { return ___Pose_0; }
	inline PoseInfo_t1612729179 * get_address_of_Pose_0() { return &___Pose_0; }
	inline void set_Pose_0(PoseInfo_t1612729179  value)
	{
		___Pose_0 = value;
	}

	inline static int32_t get_offset_of_CameraPose_1() { return static_cast<int32_t>(offsetof(PoseAgeEntry_t2181165958, ___CameraPose_1)); }
	inline PoseInfo_t1612729179  get_CameraPose_1() const { return ___CameraPose_1; }
	inline PoseInfo_t1612729179 * get_address_of_CameraPose_1() { return &___CameraPose_1; }
	inline void set_CameraPose_1(PoseInfo_t1612729179  value)
	{
		___CameraPose_1 = value;
	}

	inline static int32_t get_offset_of_Age_2() { return static_cast<int32_t>(offsetof(PoseAgeEntry_t2181165958, ___Age_2)); }
	inline int32_t get_Age_2() const { return ___Age_2; }
	inline int32_t* get_address_of_Age_2() { return &___Age_2; }
	inline void set_Age_2(int32_t value)
	{
		___Age_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSEAGEENTRY_T2181165958_H
#ifndef EYEWEARCALIBRATIONREADING_T664929988_H
#define EYEWEARCALIBRATIONREADING_T664929988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EyewearDevice/EyewearCalibrationReading
struct  EyewearCalibrationReading_t664929988 
{
public:
	// System.Single[] Vuforia.EyewearDevice/EyewearCalibrationReading::pose
	SingleU5BU5D_t1444911251* ___pose_0;
	// System.Single Vuforia.EyewearDevice/EyewearCalibrationReading::scale
	float ___scale_1;
	// System.Single Vuforia.EyewearDevice/EyewearCalibrationReading::centerX
	float ___centerX_2;
	// System.Single Vuforia.EyewearDevice/EyewearCalibrationReading::centerY
	float ___centerY_3;
	// Vuforia.EyewearDevice/EyewearCalibrationReading/AlignmentType Vuforia.EyewearDevice/EyewearCalibrationReading::type
	int32_t ___type_4;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(EyewearCalibrationReading_t664929988, ___pose_0)); }
	inline SingleU5BU5D_t1444911251* get_pose_0() const { return ___pose_0; }
	inline SingleU5BU5D_t1444911251** get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(SingleU5BU5D_t1444911251* value)
	{
		___pose_0 = value;
		Il2CppCodeGenWriteBarrier((&___pose_0), value);
	}

	inline static int32_t get_offset_of_scale_1() { return static_cast<int32_t>(offsetof(EyewearCalibrationReading_t664929988, ___scale_1)); }
	inline float get_scale_1() const { return ___scale_1; }
	inline float* get_address_of_scale_1() { return &___scale_1; }
	inline void set_scale_1(float value)
	{
		___scale_1 = value;
	}

	inline static int32_t get_offset_of_centerX_2() { return static_cast<int32_t>(offsetof(EyewearCalibrationReading_t664929988, ___centerX_2)); }
	inline float get_centerX_2() const { return ___centerX_2; }
	inline float* get_address_of_centerX_2() { return &___centerX_2; }
	inline void set_centerX_2(float value)
	{
		___centerX_2 = value;
	}

	inline static int32_t get_offset_of_centerY_3() { return static_cast<int32_t>(offsetof(EyewearCalibrationReading_t664929988, ___centerY_3)); }
	inline float get_centerY_3() const { return ___centerY_3; }
	inline float* get_address_of_centerY_3() { return &___centerY_3; }
	inline void set_centerY_3(float value)
	{
		___centerY_3 = value;
	}

	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(EyewearCalibrationReading_t664929988, ___type_4)); }
	inline int32_t get_type_4() const { return ___type_4; }
	inline int32_t* get_address_of_type_4() { return &___type_4; }
	inline void set_type_4(int32_t value)
	{
		___type_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuforia.EyewearDevice/EyewearCalibrationReading
struct EyewearCalibrationReading_t664929988_marshaled_pinvoke
{
	float* ___pose_0;
	float ___scale_1;
	float ___centerX_2;
	float ___centerY_3;
	int32_t ___type_4;
};
// Native definition for COM marshalling of Vuforia.EyewearDevice/EyewearCalibrationReading
struct EyewearCalibrationReading_t664929988_marshaled_com
{
	float* ___pose_0;
	float ___scale_1;
	float ___centerX_2;
	float ___centerY_3;
	int32_t ___type_4;
};
#endif // EYEWEARCALIBRATIONREADING_T664929988_H
#ifndef PLAYABLEBINDING_T354260709_H
#define PLAYABLEBINDING_T354260709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBinding
struct  PlayableBinding_t354260709 
{
public:
	union
	{
		struct
		{
			// System.String UnityEngine.Playables.PlayableBinding::<streamName>k__BackingField
			String_t* ___U3CstreamNameU3Ek__BackingField_2;
			// UnityEngine.Playables.DataStreamType UnityEngine.Playables.PlayableBinding::<streamType>k__BackingField
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			// UnityEngine.Object UnityEngine.Playables.PlayableBinding::<sourceObject>k__BackingField
			Object_t631007953 * ___U3CsourceObjectU3Ek__BackingField_4;
			// System.Type UnityEngine.Playables.PlayableBinding::<sourceBindingType>k__BackingField
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t354260709__padding[1];
	};

public:
	inline static int32_t get_offset_of_U3CstreamNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___U3CstreamNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CstreamNameU3Ek__BackingField_2() const { return ___U3CstreamNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CstreamNameU3Ek__BackingField_2() { return &___U3CstreamNameU3Ek__BackingField_2; }
	inline void set_U3CstreamNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CstreamNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstreamNameU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CstreamTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___U3CstreamTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CstreamTypeU3Ek__BackingField_3() const { return ___U3CstreamTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CstreamTypeU3Ek__BackingField_3() { return &___U3CstreamTypeU3Ek__BackingField_3; }
	inline void set_U3CstreamTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CstreamTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsourceObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___U3CsourceObjectU3Ek__BackingField_4)); }
	inline Object_t631007953 * get_U3CsourceObjectU3Ek__BackingField_4() const { return ___U3CsourceObjectU3Ek__BackingField_4; }
	inline Object_t631007953 ** get_address_of_U3CsourceObjectU3Ek__BackingField_4() { return &___U3CsourceObjectU3Ek__BackingField_4; }
	inline void set_U3CsourceObjectU3Ek__BackingField_4(Object_t631007953 * value)
	{
		___U3CsourceObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceObjectU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___U3CsourceBindingTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CsourceBindingTypeU3Ek__BackingField_5() const { return ___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return &___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline void set_U3CsourceBindingTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CsourceBindingTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceBindingTypeU3Ek__BackingField_5), value);
	}
};

struct PlayableBinding_t354260709_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t829358056* ___None_0;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_1;

public:
	inline static int32_t get_offset_of_None_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709_StaticFields, ___None_0)); }
	inline PlayableBindingU5BU5D_t829358056* get_None_0() const { return ___None_0; }
	inline PlayableBindingU5BU5D_t829358056** get_address_of_None_0() { return &___None_0; }
	inline void set_None_0(PlayableBindingU5BU5D_t829358056* value)
	{
		___None_0 = value;
		Il2CppCodeGenWriteBarrier((&___None_0), value);
	}

	inline static int32_t get_offset_of_DefaultDuration_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709_StaticFields, ___DefaultDuration_1)); }
	inline double get_DefaultDuration_1() const { return ___DefaultDuration_1; }
	inline double* get_address_of_DefaultDuration_1() { return &___DefaultDuration_1; }
	inline void set_DefaultDuration_1(double value)
	{
		___DefaultDuration_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t354260709_marshaled_pinvoke
{
	union
	{
		struct
		{
			char* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t631007953_marshaled_pinvoke ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t354260709__padding[1];
	};
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t354260709_marshaled_com
{
	union
	{
		struct
		{
			Il2CppChar* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t631007953_marshaled_com* ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t354260709__padding[1];
	};
};
#endif // PLAYABLEBINDING_T354260709_H
#ifndef CAMERAFIELD_T1483002240_H
#define CAMERAFIELD_T1483002240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraField
struct  CameraField_t1483002240 
{
public:
	// Vuforia.CameraDevice/CameraField/DataType Vuforia.CameraDevice/CameraField::Type
	int32_t ___Type_0;
	// System.String Vuforia.CameraDevice/CameraField::Key
	String_t* ___Key_1;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(CameraField_t1483002240, ___Type_0)); }
	inline int32_t get_Type_0() const { return ___Type_0; }
	inline int32_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(int32_t value)
	{
		___Type_0 = value;
	}

	inline static int32_t get_offset_of_Key_1() { return static_cast<int32_t>(offsetof(CameraField_t1483002240, ___Key_1)); }
	inline String_t* get_Key_1() const { return ___Key_1; }
	inline String_t** get_address_of_Key_1() { return &___Key_1; }
	inline void set_Key_1(String_t* value)
	{
		___Key_1 = value;
		Il2CppCodeGenWriteBarrier((&___Key_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuforia.CameraDevice/CameraField
struct CameraField_t1483002240_marshaled_pinvoke
{
	int32_t ___Type_0;
	char* ___Key_1;
};
// Native definition for COM marshalling of Vuforia.CameraDevice/CameraField
struct CameraField_t1483002240_marshaled_com
{
	int32_t ___Type_0;
	Il2CppChar* ___Key_1;
};
#endif // CAMERAFIELD_T1483002240_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef MESH_T3648964284_H
#define MESH_T3648964284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3648964284  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3648964284_H
#ifndef MIXEDREALITYCONTROLLER_T13217384_H
#define MIXEDREALITYCONTROLLER_T13217384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MixedRealityController
struct  MixedRealityController_t13217384  : public RuntimeObject
{
public:
	// Vuforia.VuforiaARController Vuforia.MixedRealityController::mVuforiaBehaviour
	VuforiaARController_t1876945237 * ___mVuforiaBehaviour_2;
	// Vuforia.DigitalEyewearARController Vuforia.MixedRealityController::mDigitalEyewearBehaviour
	DigitalEyewearARController_t1054226036 * ___mDigitalEyewearBehaviour_3;
	// Vuforia.VideoBackgroundManager Vuforia.MixedRealityController::mVideoBackgroundManager
	VideoBackgroundManager_t2198727358 * ___mVideoBackgroundManager_4;
	// System.Boolean Vuforia.MixedRealityController::mViewerHasBeenSetExternally
	bool ___mViewerHasBeenSetExternally_5;
	// Vuforia.IViewerParameters Vuforia.MixedRealityController::mViewerParameters
	RuntimeObject* ___mViewerParameters_6;
	// System.Boolean Vuforia.MixedRealityController::mFrameWorkHasBeenSetExternally
	bool ___mFrameWorkHasBeenSetExternally_7;
	// Vuforia.DigitalEyewearARController/StereoFramework Vuforia.MixedRealityController::mStereoFramework
	int32_t ___mStereoFramework_8;
	// System.Boolean Vuforia.MixedRealityController::mObjectTrackerStopped
	bool ___mObjectTrackerStopped_9;
	// System.Boolean Vuforia.MixedRealityController::mAutoStopCameraIfNotRequired
	bool ___mAutoStopCameraIfNotRequired_10;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_2() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mVuforiaBehaviour_2)); }
	inline VuforiaARController_t1876945237 * get_mVuforiaBehaviour_2() const { return ___mVuforiaBehaviour_2; }
	inline VuforiaARController_t1876945237 ** get_address_of_mVuforiaBehaviour_2() { return &___mVuforiaBehaviour_2; }
	inline void set_mVuforiaBehaviour_2(VuforiaARController_t1876945237 * value)
	{
		___mVuforiaBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_2), value);
	}

	inline static int32_t get_offset_of_mDigitalEyewearBehaviour_3() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mDigitalEyewearBehaviour_3)); }
	inline DigitalEyewearARController_t1054226036 * get_mDigitalEyewearBehaviour_3() const { return ___mDigitalEyewearBehaviour_3; }
	inline DigitalEyewearARController_t1054226036 ** get_address_of_mDigitalEyewearBehaviour_3() { return &___mDigitalEyewearBehaviour_3; }
	inline void set_mDigitalEyewearBehaviour_3(DigitalEyewearARController_t1054226036 * value)
	{
		___mDigitalEyewearBehaviour_3 = value;
		Il2CppCodeGenWriteBarrier((&___mDigitalEyewearBehaviour_3), value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundManager_4() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mVideoBackgroundManager_4)); }
	inline VideoBackgroundManager_t2198727358 * get_mVideoBackgroundManager_4() const { return ___mVideoBackgroundManager_4; }
	inline VideoBackgroundManager_t2198727358 ** get_address_of_mVideoBackgroundManager_4() { return &___mVideoBackgroundManager_4; }
	inline void set_mVideoBackgroundManager_4(VideoBackgroundManager_t2198727358 * value)
	{
		___mVideoBackgroundManager_4 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBackgroundManager_4), value);
	}

	inline static int32_t get_offset_of_mViewerHasBeenSetExternally_5() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mViewerHasBeenSetExternally_5)); }
	inline bool get_mViewerHasBeenSetExternally_5() const { return ___mViewerHasBeenSetExternally_5; }
	inline bool* get_address_of_mViewerHasBeenSetExternally_5() { return &___mViewerHasBeenSetExternally_5; }
	inline void set_mViewerHasBeenSetExternally_5(bool value)
	{
		___mViewerHasBeenSetExternally_5 = value;
	}

	inline static int32_t get_offset_of_mViewerParameters_6() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mViewerParameters_6)); }
	inline RuntimeObject* get_mViewerParameters_6() const { return ___mViewerParameters_6; }
	inline RuntimeObject** get_address_of_mViewerParameters_6() { return &___mViewerParameters_6; }
	inline void set_mViewerParameters_6(RuntimeObject* value)
	{
		___mViewerParameters_6 = value;
		Il2CppCodeGenWriteBarrier((&___mViewerParameters_6), value);
	}

	inline static int32_t get_offset_of_mFrameWorkHasBeenSetExternally_7() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mFrameWorkHasBeenSetExternally_7)); }
	inline bool get_mFrameWorkHasBeenSetExternally_7() const { return ___mFrameWorkHasBeenSetExternally_7; }
	inline bool* get_address_of_mFrameWorkHasBeenSetExternally_7() { return &___mFrameWorkHasBeenSetExternally_7; }
	inline void set_mFrameWorkHasBeenSetExternally_7(bool value)
	{
		___mFrameWorkHasBeenSetExternally_7 = value;
	}

	inline static int32_t get_offset_of_mStereoFramework_8() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mStereoFramework_8)); }
	inline int32_t get_mStereoFramework_8() const { return ___mStereoFramework_8; }
	inline int32_t* get_address_of_mStereoFramework_8() { return &___mStereoFramework_8; }
	inline void set_mStereoFramework_8(int32_t value)
	{
		___mStereoFramework_8 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerStopped_9() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mObjectTrackerStopped_9)); }
	inline bool get_mObjectTrackerStopped_9() const { return ___mObjectTrackerStopped_9; }
	inline bool* get_address_of_mObjectTrackerStopped_9() { return &___mObjectTrackerStopped_9; }
	inline void set_mObjectTrackerStopped_9(bool value)
	{
		___mObjectTrackerStopped_9 = value;
	}

	inline static int32_t get_offset_of_mAutoStopCameraIfNotRequired_10() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mAutoStopCameraIfNotRequired_10)); }
	inline bool get_mAutoStopCameraIfNotRequired_10() const { return ___mAutoStopCameraIfNotRequired_10; }
	inline bool* get_address_of_mAutoStopCameraIfNotRequired_10() { return &___mAutoStopCameraIfNotRequired_10; }
	inline void set_mAutoStopCameraIfNotRequired_10(bool value)
	{
		___mAutoStopCameraIfNotRequired_10 = value;
	}
};

struct MixedRealityController_t13217384_StaticFields
{
public:
	// Vuforia.MixedRealityController Vuforia.MixedRealityController::mInstance
	MixedRealityController_t13217384 * ___mInstance_1;

public:
	inline static int32_t get_offset_of_mInstance_1() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384_StaticFields, ___mInstance_1)); }
	inline MixedRealityController_t13217384 * get_mInstance_1() const { return ___mInstance_1; }
	inline MixedRealityController_t13217384 ** get_address_of_mInstance_1() { return &___mInstance_1; }
	inline void set_mInstance_1(MixedRealityController_t13217384 * value)
	{
		___mInstance_1 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYCONTROLLER_T13217384_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef VUFORIARUNTIMEUTILITIES_T399660591_H
#define VUFORIARUNTIMEUTILITIES_T399660591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRuntimeUtilities
struct  VuforiaRuntimeUtilities_t399660591  : public RuntimeObject
{
public:

public:
};

struct VuforiaRuntimeUtilities_t399660591_StaticFields
{
public:
	// Vuforia.VuforiaRuntimeUtilities/InitializableBool Vuforia.VuforiaRuntimeUtilities::sWebCamUsed
	int32_t ___sWebCamUsed_0;
	// Vuforia.VuforiaRuntimeUtilities/InitializableBool Vuforia.VuforiaRuntimeUtilities::sNativePluginSupport
	int32_t ___sNativePluginSupport_1;

public:
	inline static int32_t get_offset_of_sWebCamUsed_0() { return static_cast<int32_t>(offsetof(VuforiaRuntimeUtilities_t399660591_StaticFields, ___sWebCamUsed_0)); }
	inline int32_t get_sWebCamUsed_0() const { return ___sWebCamUsed_0; }
	inline int32_t* get_address_of_sWebCamUsed_0() { return &___sWebCamUsed_0; }
	inline void set_sWebCamUsed_0(int32_t value)
	{
		___sWebCamUsed_0 = value;
	}

	inline static int32_t get_offset_of_sNativePluginSupport_1() { return static_cast<int32_t>(offsetof(VuforiaRuntimeUtilities_t399660591_StaticFields, ___sNativePluginSupport_1)); }
	inline int32_t get_sNativePluginSupport_1() const { return ___sNativePluginSupport_1; }
	inline int32_t* get_address_of_sNativePluginSupport_1() { return &___sNativePluginSupport_1; }
	inline void set_sNativePluginSupport_1(int32_t value)
	{
		___sNativePluginSupport_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIARUNTIMEUTILITIES_T399660591_H
#ifndef CAMERADEVICE_T960297568_H
#define CAMERADEVICE_T960297568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice
struct  CameraDevice_t960297568  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image> Vuforia.CameraDevice::mCameraImages
	Dictionary_2_t3630620928 * ___mCameraImages_1;
	// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT> Vuforia.CameraDevice::mForcedCameraFormats
	List_1_t386988881 * ___mForcedCameraFormats_2;
	// System.Boolean Vuforia.CameraDevice::mCameraReady
	bool ___mCameraReady_4;
	// System.Boolean Vuforia.CameraDevice::mIsDirty
	bool ___mIsDirty_5;
	// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDevice::mActualCameraDirection
	int32_t ___mActualCameraDirection_6;
	// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDevice::mSelectedCameraDirection
	int32_t ___mSelectedCameraDirection_7;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.CameraDevice::mCameraDeviceMode
	int32_t ___mCameraDeviceMode_8;
	// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDevice::mVideoModeData
	VideoModeData_t2066817255  ___mVideoModeData_9;
	// System.Boolean Vuforia.CameraDevice::mVideoModeDataNeedsUpdate
	bool ___mVideoModeDataNeedsUpdate_10;
	// System.Boolean Vuforia.CameraDevice::mHasCameraDeviceModeBeenSet
	bool ___mHasCameraDeviceModeBeenSet_11;
	// System.Boolean Vuforia.CameraDevice::mCameraActive
	bool ___mCameraActive_12;
	// System.Boolean Vuforia.CameraDevice::mIsCameraMocked
	bool ___mIsCameraMocked_13;

public:
	inline static int32_t get_offset_of_mCameraImages_1() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraImages_1)); }
	inline Dictionary_2_t3630620928 * get_mCameraImages_1() const { return ___mCameraImages_1; }
	inline Dictionary_2_t3630620928 ** get_address_of_mCameraImages_1() { return &___mCameraImages_1; }
	inline void set_mCameraImages_1(Dictionary_2_t3630620928 * value)
	{
		___mCameraImages_1 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraImages_1), value);
	}

	inline static int32_t get_offset_of_mForcedCameraFormats_2() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mForcedCameraFormats_2)); }
	inline List_1_t386988881 * get_mForcedCameraFormats_2() const { return ___mForcedCameraFormats_2; }
	inline List_1_t386988881 ** get_address_of_mForcedCameraFormats_2() { return &___mForcedCameraFormats_2; }
	inline void set_mForcedCameraFormats_2(List_1_t386988881 * value)
	{
		___mForcedCameraFormats_2 = value;
		Il2CppCodeGenWriteBarrier((&___mForcedCameraFormats_2), value);
	}

	inline static int32_t get_offset_of_mCameraReady_4() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraReady_4)); }
	inline bool get_mCameraReady_4() const { return ___mCameraReady_4; }
	inline bool* get_address_of_mCameraReady_4() { return &___mCameraReady_4; }
	inline void set_mCameraReady_4(bool value)
	{
		___mCameraReady_4 = value;
	}

	inline static int32_t get_offset_of_mIsDirty_5() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mIsDirty_5)); }
	inline bool get_mIsDirty_5() const { return ___mIsDirty_5; }
	inline bool* get_address_of_mIsDirty_5() { return &___mIsDirty_5; }
	inline void set_mIsDirty_5(bool value)
	{
		___mIsDirty_5 = value;
	}

	inline static int32_t get_offset_of_mActualCameraDirection_6() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mActualCameraDirection_6)); }
	inline int32_t get_mActualCameraDirection_6() const { return ___mActualCameraDirection_6; }
	inline int32_t* get_address_of_mActualCameraDirection_6() { return &___mActualCameraDirection_6; }
	inline void set_mActualCameraDirection_6(int32_t value)
	{
		___mActualCameraDirection_6 = value;
	}

	inline static int32_t get_offset_of_mSelectedCameraDirection_7() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mSelectedCameraDirection_7)); }
	inline int32_t get_mSelectedCameraDirection_7() const { return ___mSelectedCameraDirection_7; }
	inline int32_t* get_address_of_mSelectedCameraDirection_7() { return &___mSelectedCameraDirection_7; }
	inline void set_mSelectedCameraDirection_7(int32_t value)
	{
		___mSelectedCameraDirection_7 = value;
	}

	inline static int32_t get_offset_of_mCameraDeviceMode_8() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraDeviceMode_8)); }
	inline int32_t get_mCameraDeviceMode_8() const { return ___mCameraDeviceMode_8; }
	inline int32_t* get_address_of_mCameraDeviceMode_8() { return &___mCameraDeviceMode_8; }
	inline void set_mCameraDeviceMode_8(int32_t value)
	{
		___mCameraDeviceMode_8 = value;
	}

	inline static int32_t get_offset_of_mVideoModeData_9() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mVideoModeData_9)); }
	inline VideoModeData_t2066817255  get_mVideoModeData_9() const { return ___mVideoModeData_9; }
	inline VideoModeData_t2066817255 * get_address_of_mVideoModeData_9() { return &___mVideoModeData_9; }
	inline void set_mVideoModeData_9(VideoModeData_t2066817255  value)
	{
		___mVideoModeData_9 = value;
	}

	inline static int32_t get_offset_of_mVideoModeDataNeedsUpdate_10() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mVideoModeDataNeedsUpdate_10)); }
	inline bool get_mVideoModeDataNeedsUpdate_10() const { return ___mVideoModeDataNeedsUpdate_10; }
	inline bool* get_address_of_mVideoModeDataNeedsUpdate_10() { return &___mVideoModeDataNeedsUpdate_10; }
	inline void set_mVideoModeDataNeedsUpdate_10(bool value)
	{
		___mVideoModeDataNeedsUpdate_10 = value;
	}

	inline static int32_t get_offset_of_mHasCameraDeviceModeBeenSet_11() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mHasCameraDeviceModeBeenSet_11)); }
	inline bool get_mHasCameraDeviceModeBeenSet_11() const { return ___mHasCameraDeviceModeBeenSet_11; }
	inline bool* get_address_of_mHasCameraDeviceModeBeenSet_11() { return &___mHasCameraDeviceModeBeenSet_11; }
	inline void set_mHasCameraDeviceModeBeenSet_11(bool value)
	{
		___mHasCameraDeviceModeBeenSet_11 = value;
	}

	inline static int32_t get_offset_of_mCameraActive_12() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraActive_12)); }
	inline bool get_mCameraActive_12() const { return ___mCameraActive_12; }
	inline bool* get_address_of_mCameraActive_12() { return &___mCameraActive_12; }
	inline void set_mCameraActive_12(bool value)
	{
		___mCameraActive_12 = value;
	}

	inline static int32_t get_offset_of_mIsCameraMocked_13() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mIsCameraMocked_13)); }
	inline bool get_mIsCameraMocked_13() const { return ___mIsCameraMocked_13; }
	inline bool* get_address_of_mIsCameraMocked_13() { return &___mIsCameraMocked_13; }
	inline void set_mIsCameraMocked_13(bool value)
	{
		___mIsCameraMocked_13 = value;
	}
};

struct CameraDevice_t960297568_StaticFields
{
public:
	// Vuforia.CameraDevice Vuforia.CameraDevice::mInstance
	CameraDevice_t960297568 * ___mInstance_0;
	// Vuforia.IWebCam Vuforia.CameraDevice::mWebCam
	RuntimeObject* ___mWebCam_3;

public:
	inline static int32_t get_offset_of_mInstance_0() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568_StaticFields, ___mInstance_0)); }
	inline CameraDevice_t960297568 * get_mInstance_0() const { return ___mInstance_0; }
	inline CameraDevice_t960297568 ** get_address_of_mInstance_0() { return &___mInstance_0; }
	inline void set_mInstance_0(CameraDevice_t960297568 * value)
	{
		___mInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_0), value);
	}

	inline static int32_t get_offset_of_mWebCam_3() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568_StaticFields, ___mWebCam_3)); }
	inline RuntimeObject* get_mWebCam_3() const { return ___mWebCam_3; }
	inline RuntimeObject** get_address_of_mWebCam_3() { return &___mWebCam_3; }
	inline void set_mWebCam_3(RuntimeObject* value)
	{
		___mWebCam_3 = value;
		Il2CppCodeGenWriteBarrier((&___mWebCam_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADEVICE_T960297568_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef VUMARKTARGETRESULTDATA_T2153299244_H
#define VUMARKTARGETRESULTDATA_T2153299244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/VuMarkTargetResultData
#pragma pack(push, tp, 1)
struct  VuMarkTargetResultData_t2153299244 
{
public:
	// Vuforia.TrackerData/PoseData Vuforia.TrackerData/VuMarkTargetResultData::pose
	PoseData_t3794839648  ___pose_0;
	// System.Double Vuforia.TrackerData/VuMarkTargetResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetResultData::targetID
	int32_t ___targetID_3;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetResultData::resultID
	int32_t ___resultID_4;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetResultData::unused
	int32_t ___unused_5;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t2153299244, ___pose_0)); }
	inline PoseData_t3794839648  get_pose_0() const { return ___pose_0; }
	inline PoseData_t3794839648 * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_t3794839648  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t2153299244, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t2153299244, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_targetID_3() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t2153299244, ___targetID_3)); }
	inline int32_t get_targetID_3() const { return ___targetID_3; }
	inline int32_t* get_address_of_targetID_3() { return &___targetID_3; }
	inline void set_targetID_3(int32_t value)
	{
		___targetID_3 = value;
	}

	inline static int32_t get_offset_of_resultID_4() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t2153299244, ___resultID_4)); }
	inline int32_t get_resultID_4() const { return ___resultID_4; }
	inline int32_t* get_address_of_resultID_4() { return &___resultID_4; }
	inline void set_resultID_4(int32_t value)
	{
		___resultID_4 = value;
	}

	inline static int32_t get_offset_of_unused_5() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t2153299244, ___unused_5)); }
	inline int32_t get_unused_5() const { return ___unused_5; }
	inline int32_t* get_address_of_unused_5() { return &___unused_5; }
	inline void set_unused_5(int32_t value)
	{
		___unused_5 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKTARGETRESULTDATA_T2153299244_H
#ifndef VUMARKTARGETDATA_T3266143771_H
#define VUMARKTARGETDATA_T3266143771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/VuMarkTargetData
#pragma pack(push, tp, 1)
struct  VuMarkTargetData_t3266143771 
{
public:
	// Vuforia.TrackerData/InstanceIdData Vuforia.TrackerData/VuMarkTargetData::instanceId
	InstanceIdData_t3520832738  ___instanceId_0;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetData::id
	int32_t ___id_1;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetData::templateId
	int32_t ___templateId_2;
	// UnityEngine.Vector3 Vuforia.TrackerData/VuMarkTargetData::size
	Vector3_t3722313464  ___size_3;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetData::unused
	int32_t ___unused_4;

public:
	inline static int32_t get_offset_of_instanceId_0() { return static_cast<int32_t>(offsetof(VuMarkTargetData_t3266143771, ___instanceId_0)); }
	inline InstanceIdData_t3520832738  get_instanceId_0() const { return ___instanceId_0; }
	inline InstanceIdData_t3520832738 * get_address_of_instanceId_0() { return &___instanceId_0; }
	inline void set_instanceId_0(InstanceIdData_t3520832738  value)
	{
		___instanceId_0 = value;
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(VuMarkTargetData_t3266143771, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_templateId_2() { return static_cast<int32_t>(offsetof(VuMarkTargetData_t3266143771, ___templateId_2)); }
	inline int32_t get_templateId_2() const { return ___templateId_2; }
	inline int32_t* get_address_of_templateId_2() { return &___templateId_2; }
	inline void set_templateId_2(int32_t value)
	{
		___templateId_2 = value;
	}

	inline static int32_t get_offset_of_size_3() { return static_cast<int32_t>(offsetof(VuMarkTargetData_t3266143771, ___size_3)); }
	inline Vector3_t3722313464  get_size_3() const { return ___size_3; }
	inline Vector3_t3722313464 * get_address_of_size_3() { return &___size_3; }
	inline void set_size_3(Vector3_t3722313464  value)
	{
		___size_3 = value;
	}

	inline static int32_t get_offset_of_unused_4() { return static_cast<int32_t>(offsetof(VuMarkTargetData_t3266143771, ___unused_4)); }
	inline int32_t get_unused_4() const { return ___unused_4; }
	inline int32_t* get_address_of_unused_4() { return &___unused_4; }
	inline void set_unused_4(int32_t value)
	{
		___unused_4 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKTARGETDATA_T3266143771_H
#ifndef WORDRESULTDATA_T1538379568_H
#define WORDRESULTDATA_T1538379568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/WordResultData
#pragma pack(push, tp, 1)
struct  WordResultData_t1538379568 
{
public:
	// Vuforia.TrackerData/PoseData Vuforia.TrackerData/WordResultData::pose
	PoseData_t3794839648  ___pose_0;
	// System.Double Vuforia.TrackerData/WordResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.TrackerData/WordResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.TrackerData/WordResultData::id
	int32_t ___id_3;
	// Vuforia.TrackerData/Obb2D Vuforia.TrackerData/WordResultData::orientedBoundingBox
	Obb2D_t1491623550  ___orientedBoundingBox_4;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(WordResultData_t1538379568, ___pose_0)); }
	inline PoseData_t3794839648  get_pose_0() const { return ___pose_0; }
	inline PoseData_t3794839648 * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_t3794839648  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(WordResultData_t1538379568, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(WordResultData_t1538379568, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(WordResultData_t1538379568, ___id_3)); }
	inline int32_t get_id_3() const { return ___id_3; }
	inline int32_t* get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(int32_t value)
	{
		___id_3 = value;
	}

	inline static int32_t get_offset_of_orientedBoundingBox_4() { return static_cast<int32_t>(offsetof(WordResultData_t1538379568, ___orientedBoundingBox_4)); }
	inline Obb2D_t1491623550  get_orientedBoundingBox_4() const { return ___orientedBoundingBox_4; }
	inline Obb2D_t1491623550 * get_address_of_orientedBoundingBox_4() { return &___orientedBoundingBox_4; }
	inline void set_orientedBoundingBox_4(Obb2D_t1491623550  value)
	{
		___orientedBoundingBox_4 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDRESULTDATA_T1538379568_H
#ifndef TRACKABLERESULTDATA_T452703160_H
#define TRACKABLERESULTDATA_T452703160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/TrackableResultData
#pragma pack(push, tp, 1)
struct  TrackableResultData_t452703160 
{
public:
	// Vuforia.TrackerData/PoseData Vuforia.TrackerData/TrackableResultData::pose
	PoseData_t3794839648  ___pose_0;
	// System.Double Vuforia.TrackerData/TrackableResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.TrackerData/TrackableResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.TrackerData/TrackableResultData::id
	int32_t ___id_3;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(TrackableResultData_t452703160, ___pose_0)); }
	inline PoseData_t3794839648  get_pose_0() const { return ___pose_0; }
	inline PoseData_t3794839648 * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_t3794839648  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(TrackableResultData_t452703160, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(TrackableResultData_t452703160, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(TrackableResultData_t452703160, ___id_3)); }
	inline int32_t get_id_3() const { return ___id_3; }
	inline int32_t* get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(int32_t value)
	{
		___id_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLERESULTDATA_T452703160_H
#ifndef FUNC_2_T3173551289_H
#define FUNC_2_T3173551289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Type,Vuforia.Tracker>
struct  Func_2_t3173551289  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3173551289_H
#ifndef PREDICATE_1_T3905400288_H
#define PREDICATE_1_T3905400288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<System.Object>
struct  Predicate_1_t3905400288  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T3905400288_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef FUNC_2_T3759279471_H
#define FUNC_2_T3759279471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Object,System.Boolean>
struct  Func_2_t3759279471  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3759279471_H
#ifndef CONVERTER_2_T2442480487_H
#define CONVERTER_2_T2442480487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Converter`2<System.Object,System.Object>
struct  Converter_2_t2442480487  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONVERTER_2_T2442480487_H
#ifndef EVENTFUNCTION_1_T1764640198_H
#define EVENTFUNCTION_1_T1764640198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct  EventFunction_1_t1764640198  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTFUNCTION_1_T1764640198_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_3)); }
	inline Navigation_t3049316579  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t3049316579  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_5)); }
	inline ColorBlock_t2139031574  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t2139031574  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_6)); }
	inline SpriteState_t1362986479  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t1362986479  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_9)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_15)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_2)); }
	inline List_1_t427135887 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t427135887 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t427135887 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef DROPDOWN_T2274391225_H
#define DROPDOWN_T2274391225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Dropdown
struct  Dropdown_t2274391225  : public Selectable_t3250028441
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t3704657025 * ___m_Template_16;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_t1901882714 * ___m_CaptionText_17;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_t2670269651 * ___m_CaptionImage_18;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_t1901882714 * ___m_ItemText_19;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_t2670269651 * ___m_ItemImage_20;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_21;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t1438173104 * ___m_Options_22;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t4040729994 * ___m_OnValueChanged_23;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t1113636619 * ___m_Dropdown_24;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t1113636619 * ___m_Blocker_25;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t2924027637 * ___m_Items_26;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t3520241082 * ___m_AlphaTweenRunner_27;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_28;

public:
	inline static int32_t get_offset_of_m_Template_16() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Template_16)); }
	inline RectTransform_t3704657025 * get_m_Template_16() const { return ___m_Template_16; }
	inline RectTransform_t3704657025 ** get_address_of_m_Template_16() { return &___m_Template_16; }
	inline void set_m_Template_16(RectTransform_t3704657025 * value)
	{
		___m_Template_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_Template_16), value);
	}

	inline static int32_t get_offset_of_m_CaptionText_17() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_CaptionText_17)); }
	inline Text_t1901882714 * get_m_CaptionText_17() const { return ___m_CaptionText_17; }
	inline Text_t1901882714 ** get_address_of_m_CaptionText_17() { return &___m_CaptionText_17; }
	inline void set_m_CaptionText_17(Text_t1901882714 * value)
	{
		___m_CaptionText_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_CaptionText_17), value);
	}

	inline static int32_t get_offset_of_m_CaptionImage_18() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_CaptionImage_18)); }
	inline Image_t2670269651 * get_m_CaptionImage_18() const { return ___m_CaptionImage_18; }
	inline Image_t2670269651 ** get_address_of_m_CaptionImage_18() { return &___m_CaptionImage_18; }
	inline void set_m_CaptionImage_18(Image_t2670269651 * value)
	{
		___m_CaptionImage_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_CaptionImage_18), value);
	}

	inline static int32_t get_offset_of_m_ItemText_19() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_ItemText_19)); }
	inline Text_t1901882714 * get_m_ItemText_19() const { return ___m_ItemText_19; }
	inline Text_t1901882714 ** get_address_of_m_ItemText_19() { return &___m_ItemText_19; }
	inline void set_m_ItemText_19(Text_t1901882714 * value)
	{
		___m_ItemText_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemText_19), value);
	}

	inline static int32_t get_offset_of_m_ItemImage_20() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_ItemImage_20)); }
	inline Image_t2670269651 * get_m_ItemImage_20() const { return ___m_ItemImage_20; }
	inline Image_t2670269651 ** get_address_of_m_ItemImage_20() { return &___m_ItemImage_20; }
	inline void set_m_ItemImage_20(Image_t2670269651 * value)
	{
		___m_ItemImage_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemImage_20), value);
	}

	inline static int32_t get_offset_of_m_Value_21() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Value_21)); }
	inline int32_t get_m_Value_21() const { return ___m_Value_21; }
	inline int32_t* get_address_of_m_Value_21() { return &___m_Value_21; }
	inline void set_m_Value_21(int32_t value)
	{
		___m_Value_21 = value;
	}

	inline static int32_t get_offset_of_m_Options_22() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Options_22)); }
	inline OptionDataList_t1438173104 * get_m_Options_22() const { return ___m_Options_22; }
	inline OptionDataList_t1438173104 ** get_address_of_m_Options_22() { return &___m_Options_22; }
	inline void set_m_Options_22(OptionDataList_t1438173104 * value)
	{
		___m_Options_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_Options_22), value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_23() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_OnValueChanged_23)); }
	inline DropdownEvent_t4040729994 * get_m_OnValueChanged_23() const { return ___m_OnValueChanged_23; }
	inline DropdownEvent_t4040729994 ** get_address_of_m_OnValueChanged_23() { return &___m_OnValueChanged_23; }
	inline void set_m_OnValueChanged_23(DropdownEvent_t4040729994 * value)
	{
		___m_OnValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_23), value);
	}

	inline static int32_t get_offset_of_m_Dropdown_24() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Dropdown_24)); }
	inline GameObject_t1113636619 * get_m_Dropdown_24() const { return ___m_Dropdown_24; }
	inline GameObject_t1113636619 ** get_address_of_m_Dropdown_24() { return &___m_Dropdown_24; }
	inline void set_m_Dropdown_24(GameObject_t1113636619 * value)
	{
		___m_Dropdown_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_Dropdown_24), value);
	}

	inline static int32_t get_offset_of_m_Blocker_25() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Blocker_25)); }
	inline GameObject_t1113636619 * get_m_Blocker_25() const { return ___m_Blocker_25; }
	inline GameObject_t1113636619 ** get_address_of_m_Blocker_25() { return &___m_Blocker_25; }
	inline void set_m_Blocker_25(GameObject_t1113636619 * value)
	{
		___m_Blocker_25 = value;
		Il2CppCodeGenWriteBarrier((&___m_Blocker_25), value);
	}

	inline static int32_t get_offset_of_m_Items_26() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Items_26)); }
	inline List_1_t2924027637 * get_m_Items_26() const { return ___m_Items_26; }
	inline List_1_t2924027637 ** get_address_of_m_Items_26() { return &___m_Items_26; }
	inline void set_m_Items_26(List_1_t2924027637 * value)
	{
		___m_Items_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_Items_26), value);
	}

	inline static int32_t get_offset_of_m_AlphaTweenRunner_27() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_AlphaTweenRunner_27)); }
	inline TweenRunner_1_t3520241082 * get_m_AlphaTweenRunner_27() const { return ___m_AlphaTweenRunner_27; }
	inline TweenRunner_1_t3520241082 ** get_address_of_m_AlphaTweenRunner_27() { return &___m_AlphaTweenRunner_27; }
	inline void set_m_AlphaTweenRunner_27(TweenRunner_1_t3520241082 * value)
	{
		___m_AlphaTweenRunner_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_AlphaTweenRunner_27), value);
	}

	inline static int32_t get_offset_of_validTemplate_28() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___validTemplate_28)); }
	inline bool get_validTemplate_28() const { return ___validTemplate_28; }
	inline bool* get_address_of_validTemplate_28() { return &___validTemplate_28; }
	inline void set_validTemplate_28(bool value)
	{
		___validTemplate_28 = value;
	}
};

struct Dropdown_t2274391225_StaticFields
{
public:
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t3270282352 * ___s_NoOptionData_29;

public:
	inline static int32_t get_offset_of_s_NoOptionData_29() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225_StaticFields, ___s_NoOptionData_29)); }
	inline OptionData_t3270282352 * get_s_NoOptionData_29() const { return ___s_NoOptionData_29; }
	inline OptionData_t3270282352 ** get_address_of_s_NoOptionData_29() { return &___s_NoOptionData_29; }
	inline void set_s_NoOptionData_29(OptionData_t3270282352 * value)
	{
		___s_NoOptionData_29 = value;
		Il2CppCodeGenWriteBarrier((&___s_NoOptionData_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DROPDOWN_T2274391225_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_t3710464795  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeNamedArgument_t287865710  m_Items[1];

public:
	inline CustomAttributeNamedArgument_t287865710  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t287865710 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeNamedArgument_t287865710  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CustomAttributeNamedArgument_t287865710  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t287865710 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeNamedArgument_t287865710  value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t1465843424  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeTypedArgument_t2723150157  m_Items[1];

public:
	inline CustomAttributeTypedArgument_t2723150157  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t2723150157 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeTypedArgument_t2723150157  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CustomAttributeTypedArgument_t2723150157  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t2723150157 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeTypedArgument_t2723150157  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t2600501292  m_Items[1];

public:
	inline Color32_t2600501292  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t2600501292 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t2600501292  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t2600501292  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t2600501292 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t2600501292  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_t2156229523  m_Items[1];

public:
	inline Vector2_t2156229523  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t2156229523  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t934056436  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_t3319028937  m_Items[1];

public:
	inline Vector4_t3319028937  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t3319028937 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t3319028937  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t3319028937  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t3319028937 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t3319028937  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
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
// Vuforia.VuforiaManager/TrackableIdPair[]
struct TrackableIdPairU5BU5D_t475764036  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TrackableIdPair_t4227350457  m_Items[1];

public:
	inline TrackableIdPair_t4227350457  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TrackableIdPair_t4227350457 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TrackableIdPair_t4227350457  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TrackableIdPair_t4227350457  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TrackableIdPair_t4227350457 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TrackableIdPair_t4227350457  value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m3280774074_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Func`2<System.Object,System.Object>::Invoke(!0)
extern "C"  RuntimeObject * Func_2_Invoke_m35332141_gshared (Func_2_t2447130374 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C"  void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);

// System.Int32 System.Array::get_Length()
extern "C"  int32_t Array_get_Length_m21610649 (RuntimeArray * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* ___paramName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::.ctor(System.Void*)
extern "C"  void IntPtr__ctor_m3384658186 (intptr_t* __this, void* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern "C"  void Component_GetComponentFastPath_m1180649031 (Component_t1923634451 * __this, Type_t * ___type0, intptr_t ___oneFurtherThanResultValue1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type,System.Boolean)
extern "C"  Component_t1923634451 * Component_GetComponentInChildren_m388868270 (Component_t1923634451 * __this, Type_t * ___t0, bool ___includeInactive1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInParent(System.Type)
extern "C"  Component_t1923634451 * Component_GetComponentInParent_m779177818 (Component_t1923634451 * __this, Type_t * ___t0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C"  String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C"  Component_t1923634451 * GameObject_AddComponent_m136524825 (GameObject_t1113636619 * __this, Type_t * ___componentType0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
extern "C"  void GameObject_GetComponentFastPath_m2620139331 (GameObject_t1113636619 * __this, Type_t * ___type0, intptr_t ___oneFurtherThanResultValue1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type,System.Boolean)
extern "C"  Component_t1923634451 * GameObject_GetComponentInChildren_m2567799249 (GameObject_t1113636619 * __this, Type_t * ___type0, bool ___includeInactive1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
extern "C"  Object_t631007953 * Object_FindObjectOfType_m67275058 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern "C"  void Object_CheckNullArgument_m4237608654 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg0, String_t* ___message1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
extern "C"  Object_t631007953 * Object_Internal_CloneSingle_m1021157572 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___data0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::GetBuiltinResource(System.Type,System.String)
extern "C"  Object_t631007953 * Resources_GetBuiltinResource_m3641967638 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, String_t* ___path1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C"  Object_t631007953 * Resources_Load_m3480190876 (RuntimeObject * __this /* static, unused */, String_t* ___path0, Type_t * ___systemTypeInstance1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C"  ScriptableObject_t2528358522 * ScriptableObject_CreateInstance_m2611081756 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice Vuforia.CameraDevice::get_Instance()
extern "C"  CameraDevice_t960297568 * CameraDevice_get_Instance_m2002290155 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDevice::GetSelectedCameraDirection(Vuforia.CameraDevice/CameraDirection&)
extern "C"  bool CameraDevice_GetSelectedCameraDirection_m557891554 (CameraDevice_t960297568 * __this, int32_t* ___cameraDirection0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDevice::GetSelectedVideoMode(Vuforia.CameraDevice/CameraDeviceMode&)
extern "C"  bool CameraDevice_GetSelectedVideoMode_m3911637174 (CameraDevice_t960297568 * __this, int32_t* ___mode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDevice::IsActive()
extern "C"  bool CameraDevice_IsActive_m3060040988 (CameraDevice_t960297568 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDevice::Stop()
extern "C"  bool CameraDevice_Stop_m1782631459 (CameraDevice_t960297568 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDevice::Deinit()
extern "C"  bool CameraDevice_Deinit_m726427492 (CameraDevice_t960297568 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.ITrackerManager Vuforia.TrackerManager::get_Instance()
extern "C"  RuntimeObject* TrackerManager_get_Instance_m777262631 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDevice::Init(Vuforia.CameraDevice/CameraDirection)
extern "C"  bool CameraDevice_Init_m2722714107 (CameraDevice_t960297568 * __this, int32_t ___cameraDirection0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDevice::SelectVideoMode(Vuforia.CameraDevice/CameraDeviceMode)
extern "C"  bool CameraDevice_SelectVideoMode_m3994320945 (CameraDevice_t960297568 * __this, int32_t ___mode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDevice::Start()
extern "C"  bool CameraDevice_Start_m2947498176 (CameraDevice_t960297568 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,Vuforia.Tracker>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m2802085635(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t858966067 *, Type_t *, Tracker_t2709586299 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3280774074_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsVuforiaEnabled()
extern "C"  bool VuforiaRuntimeUtilities_IsVuforiaEnabled_m1152377305 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackerManager::InitializeTrackerNative(System.Type)
extern "C"  bool TrackerManager_InitializeTrackerNative_m2902025084 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,Vuforia.Tracker>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m1661239861(__this, p0, method) ((  bool (*) (Dictionary_2_t858966067 *, Type_t *, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// !1 System.Collections.Generic.Dictionary`2<System.Type,Vuforia.Tracker>::get_Item(!0)
#define Dictionary_2_get_Item_m2573772253(__this, p0, method) ((  Tracker_t2709586299 * (*) (Dictionary_2_t858966067 *, Type_t *, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// !1 System.Collections.Generic.Dictionary`2<System.Type,System.Func`2<System.Type,Vuforia.Tracker>>::get_Item(!0)
#define Dictionary_2_get_Item_m1893916440(__this, p0, method) ((  Func_2_t3173551289 * (*) (Dictionary_2_t1322931057 *, Type_t *, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// !1 System.Func`2<System.Type,Vuforia.Tracker>::Invoke(!0)
#define Func_2_Invoke_m3689749930(__this, p0, method) ((  Tracker_t2709586299 * (*) (Func_2_t3173551289 *, Type_t *, const RuntimeMethod*))Func_2_Invoke_m35332141_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Vuforia.Tracker>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m3740867761(__this, p0, p1, method) ((  void (*) (Dictionary_2_t858966067 *, Type_t *, Tracker_t2709586299 *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method)
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* ___paramName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern "C"  RuntimeArray * GameObject_GetComponentsInternal_m4006738154 (GameObject_t1113636619 * __this, Type_t * ___type0, bool ___useSearchTypeAsArrayReturnType1, bool ___recursive2, bool ___includeInactive3, bool ___reverse4, RuntimeObject * ___resultList5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::DefaultDimensionForChannel(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  int32_t Mesh_DefaultDimensionForChannel_m576040980 (RuntimeObject * __this /* static, unused */, int32_t ___channel0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mesh::get_canAccess()
extern "C"  bool Mesh_get_canAccess_m2239225054 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mesh::HasChannel(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  bool Mesh_HasChannel_m4256962133 (Mesh_t3648964284 * __this, int32_t ___ch0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.Mesh::GetAllocArrayFromChannelImpl(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C"  RuntimeArray * Mesh_GetAllocArrayFromChannelImpl_m3084065604 (Mesh_t3648964284 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::PrintErrorCantAccessChannel(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  void Mesh_PrintErrorCantAccessChannel_m2109128075 (Mesh_t3648964284 * __this, int32_t ___ch0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Check::Source(System.Object)
extern "C"  void Check_Source_m4098695967 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___source0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor()
extern "C"  void InvalidOperationException__ctor_m2734335978 (InvalidOperationException_t56020091 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Check::SourceAndPredicate(System.Object,System.Object)
extern "C"  void Check_SourceAndPredicate_m2332465641 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___source0, RuntimeObject * ___predicate1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::GetEventChain(UnityEngine.GameObject,System.Collections.Generic.IList`1<UnityEngine.Transform>)
extern "C"  void ExecuteEvents_GetEventChain_m2404658789 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___root0, RuntimeObject* ___eventChain1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
#define List_1_get_Item_m2402360903(__this, p0, method) ((  Transform_t3600365921 * (*) (List_1_t777473367 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
#define List_1_get_Count_m3543896146(__this, method) ((  int32_t (*) (List_1_t777473367 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C"  Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T System.Array::InternalArray__get_Item<System.UInt64>(System.Int32)
extern "C"  uint64_t Array_InternalArray__get_Item_TisUInt64_t4134040092_m129291315_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUInt64_t4134040092_m129291315_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (uint64_t*)(&V_0));
		uint64_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Uri/UriScheme>(System.Int32)
extern "C"  UriScheme_t722425697  Array_InternalArray__get_Item_TisUriScheme_t722425697_m2816273040_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUriScheme_t722425697_m2816273040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UriScheme_t722425697  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (UriScheme_t722425697 *)(&V_0));
		UriScheme_t722425697  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.BeforeRenderHelper/OrderBlock>(System.Int32)
extern "C"  OrderBlock_t1585977831  Array_InternalArray__get_Item_TisOrderBlock_t1585977831_m2406385050_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisOrderBlock_t1585977831_m2406385050_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OrderBlock_t1585977831  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (OrderBlock_t1585977831 *)(&V_0));
		OrderBlock_t1585977831  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Camera/StereoscopicEye>(System.Int32)
extern "C"  int32_t Array_InternalArray__get_Item_TisStereoscopicEye_t2238664036_m3557206419_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisStereoscopicEye_t2238664036_m3557206419_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Color>(System.Int32)
extern "C"  Color_t2555686324  Array_InternalArray__get_Item_TisColor_t2555686324_m2985413820_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisColor_t2555686324_m2985413820_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Color_t2555686324  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Color_t2555686324 *)(&V_0));
		Color_t2555686324  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Color32>(System.Int32)
extern "C"  Color32_t2600501292  Array_InternalArray__get_Item_TisColor32_t2600501292_m1325986122_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisColor32_t2600501292_m1325986122_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Color32_t2600501292  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Color32_t2600501292 *)(&V_0));
		Color32_t2600501292  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.ContactPoint>(System.Int32)
extern "C"  ContactPoint_t3758755253  Array_InternalArray__get_Item_TisContactPoint_t3758755253_m2489897608_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisContactPoint_t3758755253_m2489897608_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ContactPoint_t3758755253  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ContactPoint_t3758755253 *)(&V_0));
		ContactPoint_t3758755253  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.EventSystems.RaycastResult>(System.Int32)
extern "C"  RaycastResult_t3360306849  Array_InternalArray__get_Item_TisRaycastResult_t3360306849_m1872700081_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisRaycastResult_t3360306849_m1872700081_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastResult_t3360306849  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (RaycastResult_t3360306849 *)(&V_0));
		RaycastResult_t3360306849  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Keyframe>(System.Int32)
extern "C"  Keyframe_t4206410242  Array_InternalArray__get_Item_TisKeyframe_t4206410242_m27698365_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisKeyframe_t4206410242_m27698365_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Keyframe_t4206410242  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Keyframe_t4206410242 *)(&V_0));
		Keyframe_t4206410242  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Matrix4x4>(System.Int32)
extern "C"  Matrix4x4_t1817901843  Array_InternalArray__get_Item_TisMatrix4x4_t1817901843_m580640555_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisMatrix4x4_t1817901843_m580640555_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_t1817901843  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Matrix4x4_t1817901843 *)(&V_0));
		Matrix4x4_t1817901843  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Plane>(System.Int32)
extern "C"  Plane_t1000493321  Array_InternalArray__get_Item_TisPlane_t1000493321_m2362885170_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisPlane_t1000493321_m2362885170_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Plane_t1000493321  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Plane_t1000493321 *)(&V_0));
		Plane_t1000493321  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Playables.PlayableBinding>(System.Int32)
extern "C"  PlayableBinding_t354260709  Array_InternalArray__get_Item_TisPlayableBinding_t354260709_m3837494573_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisPlayableBinding_t354260709_m3837494573_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableBinding_t354260709  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (PlayableBinding_t354260709 *)(&V_0));
		PlayableBinding_t354260709  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.RaycastHit>(System.Int32)
extern "C"  RaycastHit_t1056001966  Array_InternalArray__get_Item_TisRaycastHit_t1056001966_m3352067444_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisRaycastHit_t1056001966_m3352067444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t1056001966  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (RaycastHit_t1056001966 *)(&V_0));
		RaycastHit_t1056001966  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.RaycastHit2D>(System.Int32)
extern "C"  RaycastHit2D_t2279581989  Array_InternalArray__get_Item_TisRaycastHit2D_t2279581989_m2440275162_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisRaycastHit2D_t2279581989_m2440275162_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t2279581989  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (RaycastHit2D_t2279581989 *)(&V_0));
		RaycastHit2D_t2279581989  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.SendMouseEvents/HitInfo>(System.Int32)
extern "C"  HitInfo_t3229609740  Array_InternalArray__get_Item_TisHitInfo_t3229609740_m2260995172_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisHitInfo_t3229609740_m2260995172_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HitInfo_t3229609740  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (HitInfo_t3229609740 *)(&V_0));
		HitInfo_t3229609740  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.GameCenter.GcAchievementData>(System.Int32)
extern "C"  GcAchievementData_t675222246  Array_InternalArray__get_Item_TisGcAchievementData_t675222246_m2680268485_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisGcAchievementData_t675222246_m2680268485_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GcAchievementData_t675222246  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (GcAchievementData_t675222246 *)(&V_0));
		GcAchievementData_t675222246  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.SocialPlatforms.GameCenter.GcScoreData>(System.Int32)
extern "C"  GcScoreData_t2125309831  Array_InternalArray__get_Item_TisGcScoreData_t2125309831_m174676143_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisGcScoreData_t2125309831_m174676143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GcScoreData_t2125309831  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (GcScoreData_t2125309831 *)(&V_0));
		GcScoreData_t2125309831  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.UI.InputField/ContentType>(System.Int32)
extern "C"  int32_t Array_InternalArray__get_Item_TisContentType_t1787303396_m421427711_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisContentType_t1787303396_m421427711_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.UICharInfo>(System.Int32)
extern "C"  UICharInfo_t75501106  Array_InternalArray__get_Item_TisUICharInfo_t75501106_m1797321427_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUICharInfo_t75501106_m1797321427_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UICharInfo_t75501106  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (UICharInfo_t75501106 *)(&V_0));
		UICharInfo_t75501106  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.UILineInfo>(System.Int32)
extern "C"  UILineInfo_t4195266810  Array_InternalArray__get_Item_TisUILineInfo_t4195266810_m1305614921_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUILineInfo_t4195266810_m1305614921_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UILineInfo_t4195266810  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (UILineInfo_t4195266810 *)(&V_0));
		UILineInfo_t4195266810  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.UIVertex>(System.Int32)
extern "C"  UIVertex_t4057497605  Array_InternalArray__get_Item_TisUIVertex_t4057497605_m289307453_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUIVertex_t4057497605_m289307453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UIVertex_t4057497605  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (UIVertex_t4057497605 *)(&V_0));
		UIVertex_t4057497605  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.UnitySynchronizationContext/WorkRequest>(System.Int32)
extern "C"  WorkRequest_t1354518612  Array_InternalArray__get_Item_TisWorkRequest_t1354518612_m2694410850_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisWorkRequest_t1354518612_m2694410850_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WorkRequest_t1354518612  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (WorkRequest_t1354518612 *)(&V_0));
		WorkRequest_t1354518612  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Vector2>(System.Int32)
extern "C"  Vector2_t2156229523  Array_InternalArray__get_Item_TisVector2_t2156229523_m2502961026_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisVector2_t2156229523_m2502961026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Vector2_t2156229523 *)(&V_0));
		Vector2_t2156229523  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Vector3>(System.Int32)
extern "C"  Vector3_t3722313464  Array_InternalArray__get_Item_TisVector3_t3722313464_m2720091419_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisVector3_t3722313464_m2720091419_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Vector3_t3722313464 *)(&V_0));
		Vector3_t3722313464  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Vector4>(System.Int32)
extern "C"  Vector4_t3319028937  Array_InternalArray__get_Item_TisVector4_t3319028937_m1117939728_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisVector4_t3319028937_m1117939728_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t3319028937  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Vector4_t3319028937 *)(&V_0));
		Vector4_t3319028937  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.WebCamDevice>(System.Int32)
extern "C"  WebCamDevice_t1322781432  Array_InternalArray__get_Item_TisWebCamDevice_t1322781432_m2046557297_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisWebCamDevice_t1322781432_m2046557297_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebCamDevice_t1322781432  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (WebCamDevice_t1322781432 *)(&V_0));
		WebCamDevice_t1322781432  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.CameraDevice/CameraField>(System.Int32)
extern "C"  CameraField_t1483002240  Array_InternalArray__get_Item_TisCameraField_t1483002240_m4229449498_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisCameraField_t1483002240_m4229449498_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CameraField_t1483002240  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (CameraField_t1483002240 *)(&V_0));
		CameraField_t1483002240  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.EyewearDevice/EyewearCalibrationReading>(System.Int32)
extern "C"  EyewearCalibrationReading_t664929988  Array_InternalArray__get_Item_TisEyewearCalibrationReading_t664929988_m608053677_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisEyewearCalibrationReading_t664929988_m608053677_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EyewearCalibrationReading_t664929988  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (EyewearCalibrationReading_t664929988 *)(&V_0));
		EyewearCalibrationReading_t664929988  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData>(System.Int32)
extern "C"  EyewearCalibrationReadingData_t937256773  Array_InternalArray__get_Item_TisEyewearCalibrationReadingData_t937256773_m2689214400_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisEyewearCalibrationReadingData_t937256773_m2689214400_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EyewearCalibrationReadingData_t937256773  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (EyewearCalibrationReadingData_t937256773 *)(&V_0));
		EyewearCalibrationReadingData_t937256773  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>(System.Int32)
extern "C"  PoseAgeEntry_t2181165958  Array_InternalArray__get_Item_TisPoseAgeEntry_t2181165958_m1672129510_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisPoseAgeEntry_t2181165958_m1672129510_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PoseAgeEntry_t2181165958  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (PoseAgeEntry_t2181165958 *)(&V_0));
		PoseAgeEntry_t2181165958  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.HoloLensExtendedTrackingManager/PoseInfo>(System.Int32)
extern "C"  PoseInfo_t1612729179  Array_InternalArray__get_Item_TisPoseInfo_t1612729179_m3253150969_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisPoseInfo_t1612729179_m3253150969_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PoseInfo_t1612729179  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (PoseInfo_t1612729179 *)(&V_0));
		PoseInfo_t1612729179  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.Image/PIXEL_FORMAT>(System.Int32)
extern "C"  int32_t Array_InternalArray__get_Item_TisPIXEL_FORMAT_t3209881435_m1056154199_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisPIXEL_FORMAT_t3209881435_m1056154199_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.RectangleData>(System.Int32)
extern "C"  RectangleData_t1039179782  Array_InternalArray__get_Item_TisRectangleData_t1039179782_m3235823909_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisRectangleData_t1039179782_m3235823909_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RectangleData_t1039179782  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (RectangleData_t1039179782 *)(&V_0));
		RectangleData_t1039179782  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.TargetFinder/TargetSearchResult>(System.Int32)
extern "C"  TargetSearchResult_t3441982613  Array_InternalArray__get_Item_TisTargetSearchResult_t3441982613_m1391463760_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisTargetSearchResult_t3441982613_m1391463760_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TargetSearchResult_t3441982613  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (TargetSearchResult_t3441982613 *)(&V_0));
		TargetSearchResult_t3441982613  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.TrackableBehaviour/Status>(System.Int32)
extern "C"  int32_t Array_InternalArray__get_Item_TisStatus_t1100905814_m1160951035_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisStatus_t1100905814_m1160951035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.TrackerData/TrackableResultData>(System.Int32)
extern "C"  TrackableResultData_t452703160  Array_InternalArray__get_Item_TisTrackableResultData_t452703160_m3404038084_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisTrackableResultData_t452703160_m3404038084_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TrackableResultData_t452703160  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (TrackableResultData_t452703160 *)(&V_0));
		TrackableResultData_t452703160  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.TrackerData/VirtualButtonData>(System.Int32)
extern "C"  VirtualButtonData_t1117953748  Array_InternalArray__get_Item_TisVirtualButtonData_t1117953748_m2181106284_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisVirtualButtonData_t1117953748_m2181106284_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VirtualButtonData_t1117953748  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (VirtualButtonData_t1117953748 *)(&V_0));
		VirtualButtonData_t1117953748  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.TrackerData/VuMarkTargetData>(System.Int32)
extern "C"  VuMarkTargetData_t3266143771  Array_InternalArray__get_Item_TisVuMarkTargetData_t3266143771_m1368043268_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisVuMarkTargetData_t3266143771_m1368043268_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VuMarkTargetData_t3266143771  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (VuMarkTargetData_t3266143771 *)(&V_0));
		VuMarkTargetData_t3266143771  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.TrackerData/VuMarkTargetResultData>(System.Int32)
extern "C"  VuMarkTargetResultData_t2153299244  Array_InternalArray__get_Item_TisVuMarkTargetResultData_t2153299244_m4200557326_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisVuMarkTargetResultData_t2153299244_m4200557326_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VuMarkTargetResultData_t2153299244  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (VuMarkTargetResultData_t2153299244 *)(&V_0));
		VuMarkTargetResultData_t2153299244  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.TrackerData/WordData>(System.Int32)
extern "C"  WordData_t2624767814  Array_InternalArray__get_Item_TisWordData_t2624767814_m2315278711_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisWordData_t2624767814_m2315278711_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WordData_t2624767814  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (WordData_t2624767814 *)(&V_0));
		WordData_t2624767814  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.TrackerData/WordResultData>(System.Int32)
extern "C"  WordResultData_t1538379568  Array_InternalArray__get_Item_TisWordResultData_t1538379568_m1613121317_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisWordResultData_t1538379568_m1613121317_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WordResultData_t1538379568  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (WordResultData_t1538379568 *)(&V_0));
		WordResultData_t1538379568  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.VuforiaManager/TrackableIdPair>(System.Int32)
extern "C"  TrackableIdPair_t4227350457  Array_InternalArray__get_Item_TisTrackableIdPair_t4227350457_m281251552_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisTrackableIdPair_t4227350457_m281251552_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TrackableIdPair_t4227350457  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (TrackableIdPair_t4227350457 *)(&V_0));
		TrackableIdPair_t4227350457  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<Vuforia.WebCamProfile/ProfileData>(System.Int32)
extern "C"  ProfileData_t3519391925  Array_InternalArray__get_Item_TisProfileData_t3519391925_m544952548_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisProfileData_t3519391925_m544952548_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfileData_t3519391925  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, (String_t*)_stringLiteral797640427, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ProfileData_t3519391925 *)(&V_0));
		ProfileData_t3519391925  L_4 = V_0;
		return L_4;
	}
}
// T UnityEngine.AttributeHelperEngine::GetCustomAttributeOfType<System.Object>(System.Type)
extern "C"  RuntimeObject * AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m429013101_gshared (RuntimeObject * __this /* static, unused */, Type_t * ___klass0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m429013101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	ObjectU5BU5D_t2843939325* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		Type_t * L_2 = ___klass0;
		Type_t * L_3 = V_0;
		NullCheck((MemberInfo_t *)L_2);
		ObjectU5BU5D_t2843939325* L_4 = VirtFuncInvoker2< ObjectU5BU5D_t2843939325*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, (MemberInfo_t *)L_2, (Type_t *)L_3, (bool)1);
		V_1 = (ObjectU5BU5D_t2843939325*)L_4;
		ObjectU5BU5D_t2843939325* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_6 = V_1;
		NullCheck(L_6);
		if (!(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))))
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = 0;
		RuntimeObject * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_003d;
	}

IL_0031:
	{
		V_2 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)NULL, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_003d;
	}

IL_003d:
	{
		RuntimeObject * L_10 = V_2;
		return L_10;
	}
}
// T UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Component_GetComponent_TisRuntimeObject_m2906321015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CastHelper_1_t2613165452  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CastHelper_1_t2613165452 ));
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		intptr_t* L_2 = (intptr_t*)(&V_0)->get_address_of_onePointerFurtherThanT_1();
		intptr_t L_3;
		memset(&L_3, 0, sizeof(L_3));
		IntPtr__ctor_m3384658186((&L_3), (void*)(void*)L_2, /*hidden argument*/NULL);
		NullCheck((Component_t1923634451 *)__this);
		Component_GetComponentFastPath_m1180649031((Component_t1923634451 *)__this, (Type_t *)L_1, (intptr_t)L_3, /*hidden argument*/NULL);
		RuntimeObject * L_4 = (RuntimeObject *)(&V_0)->get_t_0();
		V_1 = (RuntimeObject *)L_4;
		goto IL_0032;
	}

IL_0032:
	{
		RuntimeObject * L_5 = V_1;
		return L_5;
	}
}
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C"  RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	{
		V_0 = (bool)0;
		bool L_0 = V_0;
		NullCheck((Component_t1923634451 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (Component_t1923634451 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Component_t1923634451 *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (RuntimeObject *)L_1;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject * L_2 = V_1;
		return L_2;
	}
}
// T UnityEngine.Component::GetComponentInChildren<System.Object>(System.Boolean)
extern "C"  RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m136716041_gshared (Component_t1923634451 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Component_GetComponentInChildren_TisRuntimeObject_m136716041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		NullCheck((Component_t1923634451 *)__this);
		Component_t1923634451 * L_3 = Component_GetComponentInChildren_m388868270((Component_t1923634451 *)__this, (Type_t *)L_1, (bool)L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001d;
	}

IL_001d:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// T UnityEngine.Component::GetComponentInParent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_m3491943679_gshared (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Component_GetComponentInParent_TisRuntimeObject_m3491943679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		NullCheck((Component_t1923634451 *)__this);
		Component_t1923634451 * L_2 = Component_GetComponentInParent_m779177818((Component_t1923634451 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001c;
	}

IL_001c:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
extern "C"  RuntimeObject * ExecuteEvents_ValidateEventData_TisRuntimeObject_m1594546529_gshared (RuntimeObject * __this /* static, unused */, BaseEventData_t3903027533 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_ValidateEventData_TisRuntimeObject_m1594546529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		BaseEventData_t3903027533 * L_0 = ___data0;
		if (((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))), IL2CPP_RGCTX_DATA(method->rgctx_data, 0))))
		{
			goto IL_003b;
		}
	}
	{
		BaseEventData_t3903027533 * L_1 = ___data0;
		NullCheck((RuntimeObject *)L_1);
		Type_t * L_2 = Object_GetType_m88164663((RuntimeObject *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Format_m2556382932(NULL /*static, unused*/, (String_t*)_stringLiteral2964872255, (RuntimeObject *)L_2, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_6 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_6, (String_t*)L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6);
	}

IL_003b:
	{
		BaseEventData_t3903027533 * L_7 = ___data0;
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))), IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0051;
	}

IL_0051:
	{
		RuntimeObject * L_8 = V_0;
		return L_8;
	}
}
// T UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_AddComponent_TisRuntimeObject_m3469369570_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		NullCheck((GameObject_t1113636619 *)__this);
		Component_t1923634451 * L_2 = GameObject_AddComponent_m136524825((GameObject_t1113636619 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0021;
	}

IL_0021:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponent_TisRuntimeObject_m2049753423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CastHelper_1_t2613165452  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CastHelper_1_t2613165452 ));
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		intptr_t* L_2 = (intptr_t*)(&V_0)->get_address_of_onePointerFurtherThanT_1();
		intptr_t L_3;
		memset(&L_3, 0, sizeof(L_3));
		IntPtr__ctor_m3384658186((&L_3), (void*)(void*)L_2, /*hidden argument*/NULL);
		NullCheck((GameObject_t1113636619 *)__this);
		GameObject_GetComponentFastPath_m2620139331((GameObject_t1113636619 *)__this, (Type_t *)L_1, (intptr_t)L_3, /*hidden argument*/NULL);
		RuntimeObject * L_4 = (RuntimeObject *)(&V_0)->get_t_0();
		V_1 = (RuntimeObject *)L_4;
		goto IL_0032;
	}

IL_0032:
	{
		RuntimeObject * L_5 = V_1;
		return L_5;
	}
}
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_m1513755678_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	{
		V_0 = (bool)0;
		bool L_0 = V_0;
		NullCheck((GameObject_t1113636619 *)__this);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (GameObject_t1113636619 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_t1113636619 *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (RuntimeObject *)L_1;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject * L_2 = V_1;
		return L_2;
	}
}
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>(System.Boolean)
extern "C"  RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_m1310240902_gshared (GameObject_t1113636619 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponentInChildren_TisRuntimeObject_m1310240902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		NullCheck((GameObject_t1113636619 *)__this);
		Component_t1923634451 * L_3 = GameObject_GetComponentInChildren_m2567799249((GameObject_t1113636619 *)__this, (Type_t *)L_1, (bool)L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001d;
	}

IL_001d:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// T UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C"  RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m1542987838_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_FindObjectOfType_TisRuntimeObject_m1542987838_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_t631007953 * L_2 = Object_FindObjectOfType_m67275058(NULL /*static, unused*/, (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.Object::Instantiate<System.Object>(T)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * ___original0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Object_Instantiate_TisRuntimeObject_m2446893047_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___original0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_CheckNullArgument_m4237608654(NULL /*static, unused*/, (RuntimeObject *)L_0, (String_t*)_stringLiteral2475671027, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___original0;
		Object_t631007953 * L_2 = Object_Internal_CloneSingle_m1021157572(NULL /*static, unused*/, (Object_t631007953 *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.Resources::GetBuiltinResource<System.Object>(System.String)
extern "C"  RuntimeObject * Resources_GetBuiltinResource_TisRuntimeObject_m3352626831_gshared (RuntimeObject * __this /* static, unused */, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Resources_GetBuiltinResource_TisRuntimeObject_m3352626831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___path0;
		Object_t631007953 * L_3 = Resources_GetBuiltinResource_m3641967638(NULL /*static, unused*/, (Type_t *)L_1, (String_t*)L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001c;
	}

IL_001c:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// T UnityEngine.Resources::Load<System.Object>(System.String)
extern "C"  RuntimeObject * Resources_Load_TisRuntimeObject_m1502289511_gshared (RuntimeObject * __this /* static, unused */, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Resources_Load_TisRuntimeObject_m1502289511_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		String_t* L_0 = ___path0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_1, /*hidden argument*/NULL);
		Object_t631007953 * L_3 = Resources_Load_m3480190876(NULL /*static, unused*/, (String_t*)L_0, (Type_t *)L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001c;
	}

IL_001c:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
extern "C"  RuntimeObject * ScriptableObject_CreateInstance_TisRuntimeObject_m1552711675_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptableObject_CreateInstance_TisRuntimeObject_m1552711675_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		ScriptableObject_t2528358522 * L_2 = ScriptableObject_CreateInstance_m2611081756(NULL /*static, unused*/, (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.UI.Dropdown::GetOrAddComponent<System.Object>(UnityEngine.GameObject)
extern "C"  RuntimeObject * Dropdown_GetOrAddComponent_TisRuntimeObject_m769901662_gshared (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___go0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Dropdown_GetOrAddComponent_TisRuntimeObject_m769901662_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___go0;
		NullCheck((GameObject_t1113636619 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (GameObject_t1113636619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_t1113636619 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (RuntimeObject *)L_1;
		RuntimeObject * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, (Object_t631007953 *)L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		GameObject_t1113636619 * L_4 = ___go0;
		NullCheck((GameObject_t1113636619 *)L_4);
		RuntimeObject * L_5 = ((  RuntimeObject * (*) (GameObject_t1113636619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((GameObject_t1113636619 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_5;
	}

IL_001f:
	{
		RuntimeObject * L_6 = V_0;
		V_1 = (RuntimeObject *)L_6;
		goto IL_0026;
	}

IL_0026:
	{
		RuntimeObject * L_7 = V_1;
		return L_7;
	}
}
// T Vuforia.MixedRealityController::InitializeDeviceTracker<System.Object>()
extern "C"  RuntimeObject * MixedRealityController_InitializeDeviceTracker_TisRuntimeObject_m3196132707_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityController_InitializeDeviceTracker_TisRuntimeObject_m3196132707_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_0 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck((CameraDevice_t960297568 *)L_0);
		bool L_1 = CameraDevice_GetSelectedCameraDirection_m557891554((CameraDevice_t960297568 *)L_0, (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0077;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_2 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck((CameraDevice_t960297568 *)L_2);
		bool L_3 = CameraDevice_GetSelectedVideoMode_m3911637174((CameraDevice_t960297568 *)L_2, (int32_t*)(&V_2), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0077;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_4 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck((CameraDevice_t960297568 *)L_4);
		bool L_5 = CameraDevice_IsActive_m3060040988((CameraDevice_t960297568 *)L_4, /*hidden argument*/NULL);
		bool L_6 = (bool)L_5;
		G_B3_0 = L_6;
		if (!L_6)
		{
			G_B4_0 = L_6;
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_7 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck((CameraDevice_t960297568 *)L_7);
		CameraDevice_Stop_m1782631459((CameraDevice_t960297568 *)L_7, /*hidden argument*/NULL);
		G_B4_0 = G_B3_0;
	}

IL_003c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_8 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck((CameraDevice_t960297568 *)L_8);
		CameraDevice_Deinit_m726427492((CameraDevice_t960297568 *)L_8, /*hidden argument*/NULL);
		RuntimeObject* L_9 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_9);
		RuntimeObject * L_10 = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (RuntimeObject*)L_9);
		V_0 = (RuntimeObject *)L_10;
		CameraDevice_t960297568 * L_11 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_12 = V_1;
		NullCheck((CameraDevice_t960297568 *)L_11);
		CameraDevice_Init_m2722714107((CameraDevice_t960297568 *)L_11, (int32_t)L_12, /*hidden argument*/NULL);
		CameraDevice_t960297568 * L_13 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_14 = V_2;
		NullCheck((CameraDevice_t960297568 *)L_13);
		CameraDevice_SelectVideoMode_m3994320945((CameraDevice_t960297568 *)L_13, (int32_t)L_14, /*hidden argument*/NULL);
		if (!G_B4_0)
		{
			goto IL_0077;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_15 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck((CameraDevice_t960297568 *)L_15);
		CameraDevice_Start_m2947498176((CameraDevice_t960297568 *)L_15, /*hidden argument*/NULL);
	}

IL_0077:
	{
		RuntimeObject * L_16 = V_0;
		return L_16;
	}
}
// T Vuforia.TrackerManager::GetTracker<System.Object>()
extern "C"  RuntimeObject * TrackerManager_GetTracker_TisRuntimeObject_m1491635230_gshared (TrackerManager_t1703337244 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackerManager_GetTracker_TisRuntimeObject_m1491635230_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tracker_t2709586299 * V_0 = NULL;
	{
		Dictionary_2_t858966067 * L_0 = (Dictionary_2_t858966067 *)__this->get_mTrackers_2();
		Type_t * L_1 = ((  Type_t * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		NullCheck((Dictionary_2_t858966067 *)L_0);
		bool L_2 = Dictionary_2_TryGetValue_m2802085635((Dictionary_2_t858966067 *)L_0, (Type_t *)L_1, (Tracker_t2709586299 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2802085635_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, (RuntimeObject *)_stringLiteral2521874635, /*hidden argument*/NULL);
	}

IL_001e:
	{
		Tracker_t2709586299 * L_3 = V_0;
		return ((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// T Vuforia.TrackerManager::InitTracker<System.Object>()
extern "C"  RuntimeObject * TrackerManager_InitTracker_TisRuntimeObject_m1487467454_gshared (TrackerManager_t1703337244 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackerManager_InitTracker_TisRuntimeObject_m1487467454_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsVuforiaEnabled_m1152377305(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_1;
		return L_1;
	}

IL_0011:
	{
		bool L_2 = ((  bool (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_3, /*hidden argument*/NULL);
		bool L_5 = TrackerManager_InitializeTrackerNative_m2902025084(NULL /*static, unused*/, (Type_t *)L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, (RuntimeObject *)_stringLiteral3741637024, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_6 = V_1;
		return L_6;
	}

IL_003d:
	{
		Type_t * L_7 = ((  Type_t * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_0 = (Type_t *)L_7;
		Dictionary_2_t858966067 * L_8 = (Dictionary_2_t858966067 *)__this->get_mTrackers_2();
		Type_t * L_9 = V_0;
		NullCheck((Dictionary_2_t858966067 *)L_8);
		bool L_10 = Dictionary_2_ContainsKey_m1661239861((Dictionary_2_t858966067 *)L_8, (Type_t *)L_9, /*hidden argument*/Dictionary_2_ContainsKey_m1661239861_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_0065;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, (RuntimeObject *)_stringLiteral1345897578, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_11 = V_1;
		return L_11;
	}

IL_0065:
	{
		Dictionary_2_t858966067 * L_12 = (Dictionary_2_t858966067 *)__this->get_mTrackers_2();
		Type_t * L_13 = V_0;
		NullCheck((Dictionary_2_t858966067 *)L_12);
		Tracker_t2709586299 * L_14 = Dictionary_2_get_Item_m2573772253((Dictionary_2_t858966067 *)L_12, (Type_t *)L_13, /*hidden argument*/Dictionary_2_get_Item_m2573772253_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_009a;
		}
	}
	{
		Dictionary_2_t858966067 * L_15 = (Dictionary_2_t858966067 *)__this->get_mTrackers_2();
		Type_t * L_16 = V_0;
		Dictionary_2_t1322931057 * L_17 = (Dictionary_2_t1322931057 *)__this->get_mTrackerCreators_3();
		Type_t * L_18 = V_0;
		NullCheck((Dictionary_2_t1322931057 *)L_17);
		Func_2_t3173551289 * L_19 = Dictionary_2_get_Item_m1893916440((Dictionary_2_t1322931057 *)L_17, (Type_t *)L_18, /*hidden argument*/Dictionary_2_get_Item_m1893916440_RuntimeMethod_var);
		RuntimeTypeHandle_t3027515415  L_20 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_20, /*hidden argument*/NULL);
		NullCheck((Func_2_t3173551289 *)L_19);
		Tracker_t2709586299 * L_22 = Func_2_Invoke_m3689749930((Func_2_t3173551289 *)L_19, (Type_t *)L_21, /*hidden argument*/Func_2_Invoke_m3689749930_RuntimeMethod_var);
		NullCheck((Dictionary_2_t858966067 *)L_15);
		Dictionary_2_set_Item_m3740867761((Dictionary_2_t858966067 *)L_15, (Type_t *)L_16, (Tracker_t2709586299 *)L_22, /*hidden argument*/Dictionary_2_set_Item_m3740867761_RuntimeMethod_var);
	}

IL_009a:
	{
		Dictionary_2_t858966067 * L_23 = (Dictionary_2_t858966067 *)__this->get_mTrackers_2();
		Type_t * L_24 = V_0;
		NullCheck((Dictionary_2_t858966067 *)L_23);
		Tracker_t2709586299 * L_25 = Dictionary_2_get_Item_m2573772253((Dictionary_2_t858966067 *)L_23, (Type_t *)L_24, /*hidden argument*/Dictionary_2_get_Item_m2573772253_RuntimeMethod_var);
		return ((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_25, IL2CPP_RGCTX_DATA(method->rgctx_data, 3))), IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
	}
}
// T Vuforia.VuforiaRuntimeUtilities::InitializeAndStartTracker<System.Object>()
extern "C"  RuntimeObject * VuforiaRuntimeUtilities_InitializeAndStartTracker_TisRuntimeObject_m1608240810_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * G_B2_0 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject * L_1 = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (RuntimeObject*)L_0);
		RuntimeObject * L_2 = (RuntimeObject *)L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_3 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject * L_4 = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2), (RuntimeObject*)L_3);
		G_B2_0 = L_4;
	}

IL_001d:
	{
		V_0 = (RuntimeObject *)G_B2_0;
		RuntimeObject * L_5 = V_0;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		RuntimeObject * L_6 = V_0;
		NullCheck((Tracker_t2709586299 *)L_6);
		bool L_7 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean Vuforia.Tracker::get_IsActive() */, (Tracker_t2709586299 *)L_6);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		RuntimeObject * L_8 = V_0;
		NullCheck((Tracker_t2709586299 *)L_8);
		VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean Vuforia.Tracker::Start() */, (Tracker_t2709586299 *)L_8);
	}

IL_003f:
	{
		RuntimeObject * L_9 = V_0;
		return L_9;
	}
}
// T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
extern "C"  ObjectU5BU5D_t2843939325* Array_FindAll_TisRuntimeObject_m3566631088_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___array0, Predicate_1_t3905400288 * ___match1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_FindAll_TisRuntimeObject_m3566631088_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t2843939325* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	ObjectU5BU5D_t2843939325* V_3 = NULL;
	int32_t V_4 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral4007973390, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		Predicate_1_t3905400288 * L_2 = ___match1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, (String_t*)_stringLiteral461028519, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0022:
	{
		V_0 = (int32_t)0;
		ObjectU5BU5D_t2843939325* L_4 = ___array0;
		NullCheck(L_4);
		V_1 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))));
		ObjectU5BU5D_t2843939325* L_5 = ___array0;
		V_3 = (ObjectU5BU5D_t2843939325*)L_5;
		V_4 = (int32_t)0;
		goto IL_005e;
	}

IL_0037:
	{
		ObjectU5BU5D_t2843939325* L_6 = V_3;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = (RuntimeObject *)L_9;
		Predicate_1_t3905400288 * L_10 = ___match1;
		RuntimeObject * L_11 = V_2;
		NullCheck((Predicate_1_t3905400288 *)L_10);
		bool L_12 = ((  bool (*) (Predicate_1_t3905400288 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Predicate_1_t3905400288 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_13 = V_1;
		int32_t L_14 = V_0;
		int32_t L_15 = (int32_t)L_14;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		RuntimeObject * L_16 = V_2;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (RuntimeObject *)L_16);
	}

IL_0058:
	{
		int32_t L_17 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_005e:
	{
		int32_t L_18 = V_4;
		ObjectU5BU5D_t2843939325* L_19 = V_3;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_20 = V_0;
		((  void (*) (RuntimeObject * /* static, unused */, ObjectU5BU5D_t2843939325**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(NULL /*static, unused*/, (ObjectU5BU5D_t2843939325**)(&V_1), (int32_t)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		ObjectU5BU5D_t2843939325* L_21 = V_1;
		return L_21;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Object>(System.Object[])
extern "C"  ObjectU5BU5D_t2843939325* CustomAttributeData_UnboxValues_TisRuntimeObject_m160061819_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___values0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___values0;
		NullCheck(L_0);
		V_0 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))));
		V_1 = (int32_t)0;
		goto IL_0023;
	}

IL_0010:
	{
		ObjectU5BU5D_t2843939325* L_1 = V_0;
		int32_t L_2 = V_1;
		ObjectU5BU5D_t2843939325* L_3 = ___values0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_7 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_8 = V_1;
		ObjectU5BU5D_t2843939325* L_9 = ___values0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_10 = V_0;
		return L_10;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeNamedArgument>(System.Object[])
extern "C"  CustomAttributeNamedArgumentU5BU5D_t3710464795* CustomAttributeData_UnboxValues_TisCustomAttributeNamedArgument_t287865710_m2244692512_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___values0, const RuntimeMethod* method)
{
	CustomAttributeNamedArgumentU5BU5D_t3710464795* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___values0;
		NullCheck(L_0);
		V_0 = (CustomAttributeNamedArgumentU5BU5D_t3710464795*)((CustomAttributeNamedArgumentU5BU5D_t3710464795*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))));
		V_1 = (int32_t)0;
		goto IL_0023;
	}

IL_0010:
	{
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_1 = V_0;
		int32_t L_2 = V_1;
		ObjectU5BU5D_t2843939325* L_3 = ___values0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (CustomAttributeNamedArgument_t287865710 )((*(CustomAttributeNamedArgument_t287865710 *)((CustomAttributeNamedArgument_t287865710 *)UnBox(L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_7 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_8 = V_1;
		ObjectU5BU5D_t2843939325* L_9 = ___values0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		CustomAttributeNamedArgumentU5BU5D_t3710464795* L_10 = V_0;
		return L_10;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeTypedArgument>(System.Object[])
extern "C"  CustomAttributeTypedArgumentU5BU5D_t1465843424* CustomAttributeData_UnboxValues_TisCustomAttributeTypedArgument_t2723150157_m679789813_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___values0, const RuntimeMethod* method)
{
	CustomAttributeTypedArgumentU5BU5D_t1465843424* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___values0;
		NullCheck(L_0);
		V_0 = (CustomAttributeTypedArgumentU5BU5D_t1465843424*)((CustomAttributeTypedArgumentU5BU5D_t1465843424*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))));
		V_1 = (int32_t)0;
		goto IL_0023;
	}

IL_0010:
	{
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_1 = V_0;
		int32_t L_2 = V_1;
		ObjectU5BU5D_t2843939325* L_3 = ___values0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (CustomAttributeTypedArgument_t2723150157 )((*(CustomAttributeTypedArgument_t2723150157 *)((CustomAttributeTypedArgument_t2723150157 *)UnBox(L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_7 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_8 = V_1;
		ObjectU5BU5D_t2843939325* L_9 = ___values0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		CustomAttributeTypedArgumentU5BU5D_t1465843424* L_10 = V_0;
		return L_10;
	}
}
// T[] UnityEngine.Component::GetComponents<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* Component_GetComponents_TisRuntimeObject_m539078962_gshared (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	{
		NullCheck((Component_t1923634451 *)__this);
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142((Component_t1923634451 *)__this, /*hidden argument*/NULL);
		NullCheck((GameObject_t1113636619 *)L_0);
		ObjectU5BU5D_t2843939325* L_1 = ((  ObjectU5BU5D_t2843939325* (*) (GameObject_t1113636619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_t1113636619 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t2843939325*)L_1;
		goto IL_0012;
	}

IL_0012:
	{
		ObjectU5BU5D_t2843939325* L_2 = V_0;
		return L_2;
	}
}
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m1664944732_gshared (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	{
		NullCheck((Component_t1923634451 *)__this);
		ObjectU5BU5D_t2843939325* L_0 = ((  ObjectU5BU5D_t2843939325* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Component_t1923634451 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t2843939325*)L_0;
		goto IL_000e;
	}

IL_000e:
	{
		ObjectU5BU5D_t2843939325* L_1 = V_0;
		return L_1;
	}
}
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C"  ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared (Component_t1923634451 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	{
		NullCheck((Component_t1923634451 *)__this);
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142((Component_t1923634451 *)__this, /*hidden argument*/NULL);
		bool L_1 = ___includeInactive0;
		NullCheck((GameObject_t1113636619 *)L_0);
		ObjectU5BU5D_t2843939325* L_2 = ((  ObjectU5BU5D_t2843939325* (*) (GameObject_t1113636619 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_t1113636619 *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t2843939325*)L_2;
		goto IL_0013;
	}

IL_0013:
	{
		ObjectU5BU5D_t2843939325* L_3 = V_0;
		return L_3;
	}
}
// T[] UnityEngine.GameObject::GetComponents<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* GameObject_GetComponents_TisRuntimeObject_m1550324888_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponents_TisRuntimeObject_m1550324888_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		NullCheck((GameObject_t1113636619 *)__this);
		RuntimeArray * L_2 = GameObject_GetComponentsInternal_m4006738154((GameObject_t1113636619 *)__this, (Type_t *)L_1, (bool)1, (bool)0, (bool)1, (bool)0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0021;
	}

IL_0021:
	{
		ObjectU5BU5D_t2843939325* L_3 = V_0;
		return L_3;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* GameObject_GetComponentsInChildren_TisRuntimeObject_m1461871634_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	{
		NullCheck((GameObject_t1113636619 *)__this);
		ObjectU5BU5D_t2843939325* L_0 = ((  ObjectU5BU5D_t2843939325* (*) (GameObject_t1113636619 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_t1113636619 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t2843939325*)L_0;
		goto IL_000e;
	}

IL_000e:
	{
		ObjectU5BU5D_t2843939325* L_1 = V_0;
		return L_1;
	}
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C"  ObjectU5BU5D_t2843939325* GameObject_GetComponentsInChildren_TisRuntimeObject_m836045_gshared (GameObject_t1113636619 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameObject_GetComponentsInChildren_TisRuntimeObject_m836045_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, (RuntimeTypeHandle_t3027515415 )L_0, /*hidden argument*/NULL);
		bool L_2 = ___includeInactive0;
		NullCheck((GameObject_t1113636619 *)__this);
		RuntimeArray * L_3 = GameObject_GetComponentsInternal_m4006738154((GameObject_t1113636619 *)__this, (Type_t *)L_1, (bool)1, (bool)1, (bool)L_2, (bool)0, (RuntimeObject *)NULL, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0021;
	}

IL_0021:
	{
		ObjectU5BU5D_t2843939325* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  ObjectU5BU5D_t2843939325* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_m3566760165_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_m576040980(NULL /*static, unused*/, (int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t3648964284 *)__this);
		ObjectU5BU5D_t2843939325* L_3 = ((  ObjectU5BU5D_t2843939325* (*) (Mesh_t3648964284 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t3648964284 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (ObjectU5BU5D_t2843939325*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		ObjectU5BU5D_t2843939325* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<System.Object>(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C"  ObjectU5BU5D_t2843939325* Mesh_GetAllocArrayFromChannel_TisRuntimeObject_m1538119140_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	{
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_0 = Mesh_get_canAccess_m2239225054((Mesh_t3648964284 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_2 = Mesh_HasChannel_m4256962133((Mesh_t3648964284 *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t3648964284 *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m3084065604((Mesh_t3648964284 *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		Mesh_PrintErrorCantAccessChannel_m2109128075((Mesh_t3648964284 *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		V_0 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0));
		goto IL_0048;
	}

IL_0048:
	{
		ObjectU5BU5D_t2843939325* L_8 = V_0;
		return L_8;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Color32>(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C"  Color32U5BU5D_t3850468773* Mesh_GetAllocArrayFromChannel_TisColor32_t2600501292_m3180365313_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Color32U5BU5D_t3850468773* V_0 = NULL;
	{
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_0 = Mesh_get_canAccess_m2239225054((Mesh_t3648964284 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_2 = Mesh_HasChannel_m4256962133((Mesh_t3648964284 *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t3648964284 *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m3084065604((Mesh_t3648964284 *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Color32U5BU5D_t3850468773*)((Color32U5BU5D_t3850468773*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		Mesh_PrintErrorCantAccessChannel_m2109128075((Mesh_t3648964284 *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		V_0 = (Color32U5BU5D_t3850468773*)((Color32U5BU5D_t3850468773*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0));
		goto IL_0048;
	}

IL_0048:
	{
		Color32U5BU5D_t3850468773* L_8 = V_0;
		return L_8;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector2>(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  Vector2U5BU5D_t1457185986* Mesh_GetAllocArrayFromChannel_TisVector2_t2156229523_m1057679375_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector2U5BU5D_t1457185986* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_m576040980(NULL /*static, unused*/, (int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t3648964284 *)__this);
		Vector2U5BU5D_t1457185986* L_3 = ((  Vector2U5BU5D_t1457185986* (*) (Mesh_t3648964284 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t3648964284 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector2U5BU5D_t1457185986*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2U5BU5D_t1457185986* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector2>(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C"  Vector2U5BU5D_t1457185986* Mesh_GetAllocArrayFromChannel_TisVector2_t2156229523_m1394090975_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Vector2U5BU5D_t1457185986* V_0 = NULL;
	{
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_0 = Mesh_get_canAccess_m2239225054((Mesh_t3648964284 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_2 = Mesh_HasChannel_m4256962133((Mesh_t3648964284 *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t3648964284 *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m3084065604((Mesh_t3648964284 *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Vector2U5BU5D_t1457185986*)((Vector2U5BU5D_t1457185986*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		Mesh_PrintErrorCantAccessChannel_m2109128075((Mesh_t3648964284 *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		V_0 = (Vector2U5BU5D_t1457185986*)((Vector2U5BU5D_t1457185986*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0));
		goto IL_0048;
	}

IL_0048:
	{
		Vector2U5BU5D_t1457185986* L_8 = V_0;
		return L_8;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  Vector3U5BU5D_t1718750761* Mesh_GetAllocArrayFromChannel_TisVector3_t3722313464_m4289135201_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector3U5BU5D_t1718750761* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_m576040980(NULL /*static, unused*/, (int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t3648964284 *)__this);
		Vector3U5BU5D_t1718750761* L_3 = ((  Vector3U5BU5D_t1718750761* (*) (Mesh_t3648964284 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t3648964284 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector3U5BU5D_t1718750761*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3U5BU5D_t1718750761* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector3>(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C"  Vector3U5BU5D_t1718750761* Mesh_GetAllocArrayFromChannel_TisVector3_t3722313464_m2332439905_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Vector3U5BU5D_t1718750761* V_0 = NULL;
	{
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_0 = Mesh_get_canAccess_m2239225054((Mesh_t3648964284 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_2 = Mesh_HasChannel_m4256962133((Mesh_t3648964284 *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t3648964284 *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m3084065604((Mesh_t3648964284 *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Vector3U5BU5D_t1718750761*)((Vector3U5BU5D_t1718750761*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		Mesh_PrintErrorCantAccessChannel_m2109128075((Mesh_t3648964284 *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		V_0 = (Vector3U5BU5D_t1718750761*)((Vector3U5BU5D_t1718750761*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0));
		goto IL_0048;
	}

IL_0048:
	{
		Vector3U5BU5D_t1718750761* L_8 = V_0;
		return L_8;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  Vector4U5BU5D_t934056436* Mesh_GetAllocArrayFromChannel_TisVector4_t3319028937_m3479135907_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, const RuntimeMethod* method)
{
	Vector4U5BU5D_t934056436* V_0 = NULL;
	{
		int32_t L_0 = ___channel0;
		int32_t L_1 = ___channel0;
		int32_t L_2 = Mesh_DefaultDimensionForChannel_m576040980(NULL /*static, unused*/, (int32_t)L_1, /*hidden argument*/NULL);
		NullCheck((Mesh_t3648964284 *)__this);
		Vector4U5BU5D_t934056436* L_3 = ((  Vector4U5BU5D_t934056436* (*) (Mesh_t3648964284 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Mesh_t3648964284 *)__this, (int32_t)L_0, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector4U5BU5D_t934056436*)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		Vector4U5BU5D_t934056436* L_4 = V_0;
		return L_4;
	}
}
// T[] UnityEngine.Mesh::GetAllocArrayFromChannel<UnityEngine.Vector4>(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
extern "C"  Vector4U5BU5D_t934056436* Mesh_GetAllocArrayFromChannel_TisVector4_t3319028937_m1010044762_gshared (Mesh_t3648964284 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, const RuntimeMethod* method)
{
	Vector4U5BU5D_t934056436* V_0 = NULL;
	{
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_0 = Mesh_get_canAccess_m2239225054((Mesh_t3648964284 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_1 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		bool L_2 = Mesh_HasChannel_m4256962133((Mesh_t3648964284 *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___channel0;
		int32_t L_4 = ___format1;
		int32_t L_5 = ___dim2;
		NullCheck((Mesh_t3648964284 *)__this);
		RuntimeArray * L_6 = Mesh_GetAllocArrayFromChannelImpl_m3084065604((Mesh_t3648964284 *)__this, (int32_t)L_3, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		V_0 = (Vector4U5BU5D_t934056436*)((Vector4U5BU5D_t934056436*)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0048;
	}

IL_002d:
	{
		goto IL_003c;
	}

IL_0033:
	{
		int32_t L_7 = ___channel0;
		NullCheck((Mesh_t3648964284 *)__this);
		Mesh_PrintErrorCantAccessChannel_m2109128075((Mesh_t3648964284 *)__this, (int32_t)L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		V_0 = (Vector4U5BU5D_t934056436*)((Vector4U5BU5D_t934056436*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)0));
		goto IL_0048;
	}

IL_0048:
	{
		Vector4U5BU5D_t934056436* L_8 = V_0;
		return L_8;
	}
}
// T[] Vuforia.UnityComponentExtensions::GetComponentsOnlyInChildren<System.Object>(UnityEngine.Component)
extern "C"  ObjectU5BU5D_t2843939325* UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m2620794288_gshared (RuntimeObject * __this /* static, unused */, Component_t1923634451 * ___obj0, const RuntimeMethod* method)
{
	{
		Component_t1923634451 * L_0 = ___obj0;
		ObjectU5BU5D_t2843939325* L_1 = ((  ObjectU5BU5D_t2843939325* (*) (RuntimeObject * /* static, unused */, Component_t1923634451 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (Component_t1923634451 *)L_0, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_1;
	}
}
// T[] Vuforia.UnityComponentExtensions::GetComponentsOnlyInChildren<System.Object>(UnityEngine.Component,System.Boolean)
extern "C"  ObjectU5BU5D_t2843939325* UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m2620669067_gshared (RuntimeObject * __this /* static, unused */, Component_t1923634451 * ___obj0, bool ___includeInactive1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m2620669067_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t257213610 * V_0 = NULL;
	ObjectU5BU5D_t2843939325* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		List_1_t257213610 * L_0 = (List_1_t257213610 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (List_1_t257213610 *)L_0;
		Component_t1923634451 * L_1 = ___obj0;
		bool L_2 = ___includeInactive1;
		NullCheck((Component_t1923634451 *)L_1);
		ObjectU5BU5D_t2843939325* L_3 = ((  ObjectU5BU5D_t2843939325* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Component_t1923634451 *)L_1, (bool)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_1 = (ObjectU5BU5D_t2843939325*)L_3;
		V_2 = (int32_t)0;
		goto IL_003d;
	}

IL_0012:
	{
		ObjectU5BU5D_t2843939325* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		RuntimeObject * L_8 = V_3;
		NullCheck((Component_t1923634451 *)L_8);
		GameObject_t1113636619 * L_9 = Component_get_gameObject_m442555142((Component_t1923634451 *)L_8, /*hidden argument*/NULL);
		Component_t1923634451 * L_10 = ___obj0;
		NullCheck((Component_t1923634451 *)L_10);
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142((Component_t1923634451 *)L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, (Object_t631007953 *)L_9, (Object_t631007953 *)L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0039;
		}
	}
	{
		List_1_t257213610 * L_13 = V_0;
		RuntimeObject * L_14 = V_3;
		NullCheck((List_1_t257213610 *)L_13);
		((  void (*) (List_1_t257213610 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t257213610 *)L_13, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
	}

IL_0039:
	{
		int32_t L_15 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_003d:
	{
		int32_t L_16 = V_2;
		ObjectU5BU5D_t2843939325* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_0012;
		}
	}
	{
		List_1_t257213610 * L_18 = V_0;
		NullCheck((List_1_t257213610 *)L_18);
		ObjectU5BU5D_t2843939325* L_19 = ((  ObjectU5BU5D_t2843939325* (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5)->methodPointer)((List_1_t257213610 *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
		return L_19;
	}
}
// TOutput[] System.Array::ConvertAll<System.Object,System.Object>(TInput[],System.Converter`2<TInput,TOutput>)
extern "C"  ObjectU5BU5D_t2843939325* Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m2417852296_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* ___array0, Converter_2_t2442480487 * ___converter1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m2417852296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, (String_t*)_stringLiteral4007973390, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		Converter_2_t2442480487 * L_2 = ___converter1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, (String_t*)_stringLiteral879148213, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0022:
	{
		ObjectU5BU5D_t2843939325* L_4 = ___array0;
		NullCheck(L_4);
		V_0 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))));
		V_1 = (int32_t)0;
		goto IL_004a;
	}

IL_0032:
	{
		ObjectU5BU5D_t2843939325* L_5 = V_0;
		int32_t L_6 = V_1;
		Converter_2_t2442480487 * L_7 = ___converter1;
		ObjectU5BU5D_t2843939325* L_8 = ___array0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck((Converter_2_t2442480487 *)L_7);
		RuntimeObject * L_12 = ((  RuntimeObject * (*) (Converter_2_t2442480487 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Converter_2_t2442480487 *)L_7, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (RuntimeObject *)L_12);
		int32_t L_13 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004a:
	{
		int32_t L_14 = V_1;
		ObjectU5BU5D_t2843939325* L_15 = ___array0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0032;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_16 = V_0;
		return L_16;
	}
}
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C"  RuntimeObject * Enumerable_First_TisRuntimeObject_m3835263318_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_First_TisRuntimeObject_m3835263318_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_3);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_5, (int32_t)0);
		return L_6;
	}

IL_0026:
	{
		InvalidOperationException_t56020091 * L_7 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_002c:
	{
		RuntimeObject* L_8 = ___source0;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 2), (RuntimeObject*)L_8);
		V_1 = (RuntimeObject*)L_9;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			NullCheck((RuntimeObject*)L_10);
			bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
			if (!L_11)
			{
				goto IL_004a;
			}
		}

IL_003e:
		{
			RuntimeObject* L_12 = V_1;
			NullCheck((RuntimeObject*)L_12);
			RuntimeObject * L_13 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 3), (RuntimeObject*)L_12);
			V_2 = (RuntimeObject *)L_13;
			IL2CPP_LEAVE(0x62, FINALLY_004f);
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_1;
			if (!L_14)
			{
				goto IL_005b;
			}
		}

IL_0055:
		{
			RuntimeObject* L_15 = V_1;
			NullCheck((RuntimeObject*)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
		}

IL_005b:
		{
			IL2CPP_END_FINALLY(79)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005c:
	{
		InvalidOperationException_t56020091 * L_16 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16);
	}

IL_0062:
	{
		RuntimeObject * L_17 = V_2;
		return L_17;
	}
}
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Linq.Enumerable/Fallback)
extern "C"  RuntimeObject * Enumerable_First_TisRuntimeObject_m2925268555_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Func_2_t3759279471 * ___predicate1, int32_t ___fallback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_First_TisRuntimeObject_m2925268555_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___source0;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0);
		V_1 = (RuntimeObject*)L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0026;
		}

IL_000c:
		{
			RuntimeObject* L_2 = V_1;
			NullCheck((RuntimeObject*)L_2);
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_2);
			V_0 = (RuntimeObject *)L_3;
			Func_2_t3759279471 * L_4 = ___predicate1;
			RuntimeObject * L_5 = V_0;
			NullCheck((Func_2_t3759279471 *)L_4);
			bool L_6 = ((  bool (*) (Func_2_t3759279471 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_2_t3759279471 *)L_4, (RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			if (!L_6)
			{
				goto IL_0026;
			}
		}

IL_001f:
		{
			RuntimeObject * L_7 = V_0;
			V_2 = (RuntimeObject *)L_7;
			IL2CPP_LEAVE(0x58, FINALLY_0036);
		}

IL_0026:
		{
			RuntimeObject* L_8 = V_1;
			NullCheck((RuntimeObject*)L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
			if (L_9)
			{
				goto IL_000c;
			}
		}

IL_0031:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0036);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0036;
	}

FINALLY_0036:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			if (L_10)
			{
				goto IL_003a;
			}
		}

IL_0039:
		{
			IL2CPP_END_FINALLY(54)
		}

IL_003a:
		{
			RuntimeObject* L_11 = V_1;
			NullCheck((RuntimeObject*)L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
			IL2CPP_END_FINALLY(54)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(54)
	{
		IL2CPP_JUMP_TBL(0x58, IL_0058)
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0041:
	{
		int32_t L_12 = ___fallback2;
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_004e;
		}
	}
	{
		InvalidOperationException_t56020091 * L_13 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13);
	}

IL_004e:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_14 = V_3;
		return L_14;
	}

IL_0058:
	{
		RuntimeObject * L_15 = V_2;
		return L_15;
	}
}
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C"  RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_m47611933_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_FirstOrDefault_TisRuntimeObject_m47611933_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_1);
		V_1 = (RuntimeObject*)L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_0012:
		{
			RuntimeObject* L_3 = V_1;
			NullCheck((RuntimeObject*)L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_3);
			V_0 = (RuntimeObject *)L_4;
			RuntimeObject * L_5 = V_0;
			V_2 = (RuntimeObject *)L_5;
			IL2CPP_LEAVE(0x45, FINALLY_0030);
		}

IL_0020:
		{
			RuntimeObject* L_6 = V_1;
			NullCheck((RuntimeObject*)L_6);
			bool L_7 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			if (L_7)
			{
				goto IL_0012;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_8 = V_1;
			if (L_8)
			{
				goto IL_0034;
			}
		}

IL_0033:
		{
			IL2CPP_END_FINALLY(48)
		}

IL_0034:
		{
			RuntimeObject* L_9 = V_1;
			NullCheck((RuntimeObject*)L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_9);
			IL2CPP_END_FINALLY(48)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_JUMP_TBL(0x45, IL_0045)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003b:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_10 = V_3;
		return L_10;
	}

IL_0045:
	{
		RuntimeObject * L_11 = V_2;
		return L_11;
	}
}
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
extern "C"  RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_m1933006213_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, Func_2_t3759279471 * ___predicate1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		Func_2_t3759279471 * L_1 = ___predicate1;
		Check_SourceAndPredicate_m2332465641(NULL /*static, unused*/, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___source0;
		Func_2_t3759279471 * L_3 = ___predicate1;
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t3759279471 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (RuntimeObject*)L_2, (Func_2_t3759279471 *)L_3, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_4;
	}
}
// TSource[] System.Linq.Enumerable::ToArray<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C"  Int32U5BU5D_t385246372* Enumerable_ToArray_TisInt32_t2950945753_m2311522548_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	Int32U5BU5D_t385246372* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_3);
		V_1 = (Int32U5BU5D_t385246372*)((Int32U5BU5D_t385246372*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)L_4));
		RuntimeObject* L_5 = V_0;
		Int32U5BU5D_t385246372* L_6 = V_1;
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker2< Int32U5BU5D_t385246372*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Int32>::CopyTo(!0[],System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_5, (Int32U5BU5D_t385246372*)L_6, (int32_t)0);
		Int32U5BU5D_t385246372* L_7 = V_1;
		return L_7;
	}

IL_0029:
	{
		RuntimeObject* L_8 = ___source0;
		List_1_t128053199 * L_9 = (List_1_t128053199 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		((  void (*) (List_1_t128053199 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_9, (RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		NullCheck((List_1_t128053199 *)L_9);
		Int32U5BU5D_t385246372* L_10 = ((  Int32U5BU5D_t385246372* (*) (List_1_t128053199 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t128053199 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		return L_10;
	}
}
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C"  ObjectU5BU5D_t2843939325* Enumerable_ToArray_TisRuntimeObject_m3447781822_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	ObjectU5BU5D_t2843939325* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_3);
		V_1 = (ObjectU5BU5D_t2843939325*)((ObjectU5BU5D_t2843939325*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)L_4));
		RuntimeObject* L_5 = V_0;
		ObjectU5BU5D_t2843939325* L_6 = V_1;
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker2< ObjectU5BU5D_t2843939325*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::CopyTo(!0[],System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_5, (ObjectU5BU5D_t2843939325*)L_6, (int32_t)0);
		ObjectU5BU5D_t2843939325* L_7 = V_1;
		return L_7;
	}

IL_0029:
	{
		RuntimeObject* L_8 = ___source0;
		List_1_t257213610 * L_9 = (List_1_t257213610 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		((  void (*) (List_1_t257213610 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_9, (RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		NullCheck((List_1_t257213610 *)L_9);
		ObjectU5BU5D_t2843939325* L_10 = ((  ObjectU5BU5D_t2843939325* (*) (List_1_t257213610 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t257213610 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		return L_10;
	}
}
// TSource[] System.Linq.Enumerable::ToArray<Vuforia.VuforiaManager/TrackableIdPair>(System.Collections.Generic.IEnumerable`1<TSource>)
extern "C"  TrackableIdPairU5BU5D_t475764036* Enumerable_ToArray_TisTrackableIdPair_t4227350457_m4292962904_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___source0, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	TrackableIdPairU5BU5D_t475764036* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		Check_Source_m4098695967(NULL /*static, unused*/, (RuntimeObject *)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___source0;
		V_0 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Vuforia.VuforiaManager/TrackableIdPair>::get_Count() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_3);
		V_1 = (TrackableIdPairU5BU5D_t475764036*)((TrackableIdPairU5BU5D_t475764036*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (uint32_t)L_4));
		RuntimeObject* L_5 = V_0;
		TrackableIdPairU5BU5D_t475764036* L_6 = V_1;
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker2< TrackableIdPairU5BU5D_t475764036*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<Vuforia.VuforiaManager/TrackableIdPair>::CopyTo(!0[],System.Int32) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_5, (TrackableIdPairU5BU5D_t475764036*)L_6, (int32_t)0);
		TrackableIdPairU5BU5D_t475764036* L_7 = V_1;
		return L_7;
	}

IL_0029:
	{
		RuntimeObject* L_8 = ___source0;
		List_1_t1404457903 * L_9 = (List_1_t1404457903 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 2));
		((  void (*) (List_1_t1404457903 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(L_9, (RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		NullCheck((List_1_t1404457903 *)L_9);
		TrackableIdPairU5BU5D_t475764036* L_10 = ((  TrackableIdPairU5BU5D_t475764036* (*) (List_1_t1404457903 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t1404457903 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		return L_10;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
extern "C"  GameObject_t1113636619 * ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m3266560969_gshared (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___root0, BaseEventData_t3903027533 * ___eventData1, EventFunction_1_t1764640198 * ___callbackFunction2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m3266560969_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_t3600365921 * V_1 = NULL;
	GameObject_t1113636619 * V_2 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var);
		List_1_t777473367 * L_1 = ((ExecuteEvents_t3484638744_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		ExecuteEvents_GetEventChain_m2404658789(NULL /*static, unused*/, (GameObject_t1113636619 *)L_0, (RuntimeObject*)L_1, /*hidden argument*/NULL);
		V_0 = (int32_t)0;
		goto IL_0043;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var);
		List_1_t777473367 * L_2 = ((ExecuteEvents_t3484638744_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		int32_t L_3 = V_0;
		NullCheck((List_1_t777473367 *)L_2);
		Transform_t3600365921 * L_4 = List_1_get_Item_m2402360903((List_1_t777473367 *)L_2, (int32_t)L_3, /*hidden argument*/List_1_get_Item_m2402360903_RuntimeMethod_var);
		V_1 = (Transform_t3600365921 *)L_4;
		Transform_t3600365921 * L_5 = V_1;
		NullCheck((Component_t1923634451 *)L_5);
		GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142((Component_t1923634451 *)L_5, /*hidden argument*/NULL);
		BaseEventData_t3903027533 * L_7 = ___eventData1;
		EventFunction_1_t1764640198 * L_8 = ___callbackFunction2;
		bool L_9 = ((  bool (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, BaseEventData_t3903027533 *, EventFunction_1_t1764640198 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (GameObject_t1113636619 *)L_6, (BaseEventData_t3903027533 *)L_7, (EventFunction_1_t1764640198 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		Transform_t3600365921 * L_10 = V_1;
		NullCheck((Component_t1923634451 *)L_10);
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142((Component_t1923634451 *)L_10, /*hidden argument*/NULL);
		V_2 = (GameObject_t1113636619 *)L_11;
		goto IL_005a;
	}

IL_003e:
	{
		int32_t L_12 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0043:
	{
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var);
		List_1_t777473367 * L_14 = ((ExecuteEvents_t3484638744_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		NullCheck((List_1_t777473367 *)L_14);
		int32_t L_15 = List_1_get_Count_m3543896146((List_1_t777473367 *)L_14, /*hidden argument*/List_1_get_Count_m3543896146_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		V_2 = (GameObject_t1113636619 *)NULL;
		goto IL_005a;
	}

IL_005a:
	{
		GameObject_t1113636619 * L_16 = V_2;
		return L_16;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
extern "C"  GameObject_t1113636619 * ExecuteEvents_GetEventHandler_TisRuntimeObject_m3687647312_gshared (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_GetEventHandler_TisRuntimeObject_m3687647312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	Transform_t3600365921 * V_1 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, (Object_t631007953 *)L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		V_0 = (GameObject_t1113636619 *)NULL;
		goto IL_0058;
	}

IL_0014:
	{
		GameObject_t1113636619 * L_2 = ___root0;
		NullCheck((GameObject_t1113636619 *)L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730((GameObject_t1113636619 *)L_2, /*hidden argument*/NULL);
		V_1 = (Transform_t3600365921 *)L_3;
		goto IL_0045;
	}

IL_0020:
	{
		Transform_t3600365921 * L_4 = V_1;
		NullCheck((Component_t1923634451 *)L_4);
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142((Component_t1923634451 *)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var);
		bool L_6 = ((  bool (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(NULL /*static, unused*/, (GameObject_t1113636619 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		Transform_t3600365921 * L_7 = V_1;
		NullCheck((Component_t1923634451 *)L_7);
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142((Component_t1923634451 *)L_7, /*hidden argument*/NULL);
		V_0 = (GameObject_t1113636619 *)L_8;
		goto IL_0058;
	}

IL_003d:
	{
		Transform_t3600365921 * L_9 = V_1;
		NullCheck((Transform_t3600365921 *)L_9);
		Transform_t3600365921 * L_10 = Transform_get_parent_m835071599((Transform_t3600365921 *)L_9, /*hidden argument*/NULL);
		V_1 = (Transform_t3600365921 *)L_10;
	}

IL_0045:
	{
		Transform_t3600365921 * L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, (Object_t631007953 *)L_11, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0020;
		}
	}
	{
		V_0 = (GameObject_t1113636619 *)NULL;
		goto IL_0058;
	}

IL_0058:
	{
		GameObject_t1113636619 * L_13 = V_0;
		return L_13;
	}
}
