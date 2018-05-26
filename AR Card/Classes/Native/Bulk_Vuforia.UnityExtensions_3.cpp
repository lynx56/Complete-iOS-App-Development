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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Vuforia.VuMarkTargetImpl
struct VuMarkTargetImpl_t1052843922;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// Vuforia.VuMarkTemplateImpl
struct VuMarkTemplateImpl_t667343433;
// Vuforia.TrackableImpl
struct TrackableImpl_t3595316917;
// System.String
struct String_t;
// Vuforia.DisabledExtendedTrackingImpl
struct DisabledExtendedTrackingImpl_t4193346383;
// Vuforia.VuMarkTargetImpl/VuMarkSetTargetSize
struct VuMarkSetTargetSize_t4198822840;
// Vuforia.VuMarkTemplate
struct VuMarkTemplate_t3623118391;
// Vuforia.ObjectTargetImpl
struct ObjectTargetImpl_t3614635090;
// Vuforia.IExtendedTracking
struct IExtendedTracking_t3078834738;
// Vuforia.ITargetSize
struct ITargetSize_t197627644;
// Vuforia.InstanceIdImpl
struct InstanceIdImpl_t2824054591;
// Vuforia.InstanceId
struct InstanceId_t2455430337;
// Vuforia.Image
struct Image_t745056343;
// System.Type
struct Type_t;
// Vuforia.IVuforiaWrapper
struct IVuforiaWrapper_t2381307640;
// Vuforia.DisabledSetTargetSize
struct DisabledSetTargetSize_t3520378128;
// Vuforia.DataSet
struct DataSet_t3286034874;
// Vuforia.DataSetExtendedTrackingImpl
struct DataSetExtendedTrackingImpl_t3413727792;
// Vuforia.DataSetObjectTargetImpl
struct DataSetObjectTargetImpl_t2835536742;
// System.Action`1<UnityEngine.Vector3>
struct Action_1_t3894781059;
// Vuforia.CustomDataSetTargetSize
struct CustomDataSetTargetSize_t2186564284;
// System.Text.StringBuilder
struct StringBuilder_t;
// Vuforia.WebCam
struct WebCam_t2427002488;
// Vuforia.TextureRenderer
struct TextureRenderer_t3278815845;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1709987734;
// System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor>
struct Func_3_t3440825513;
// UnityEngine.Camera
struct Camera_t4157153871;
// Vuforia.WebCamProfile
struct WebCamProfile_t4166408645;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t4294070825;
// Vuforia.IWebCamTexAdaptor
struct IWebCamTexAdaptor_t3823546776;
// System.Func`3<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>
struct Func_3_t917206208;
// Vuforia.DefaultWebCamTexAdaptor
struct DefaultWebCamTexAdaptor_t2452636845;
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773;
// UnityEngine.RenderTexture
struct RenderTexture_t2108887433;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// Vuforia.VuforiaRenderer
struct VuforiaRenderer_t3433045970;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.Object
struct Object_t631007953;
// Vuforia.CameraDevice
struct CameraDevice_t960297568;
// Vuforia.WebCamARController
struct WebCamARController_t3718642882;
// Vuforia.ARController
struct ARController_t116632334;
// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t2151848540;
// UnityEngine.Component
struct Component_t1923634451;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// Vuforia.VuforiaConfiguration
struct VuforiaConfiguration_t1763229349;
// Vuforia.VuforiaConfiguration/WebCamConfiguration
struct WebCamConfiguration_t1101614731;
// Vuforia.WebCamARController/<>c
struct U3CU3Ec_t3582055403;
// Vuforia.WebCamTexAdaptor
struct WebCamTexAdaptor_t3430449046;
// Vuforia.IPlayModeEditorUtility
struct IPlayModeEditorUtility_t752570519;
// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_t3304648224;
// System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_t571830913;
// UnityEngine.WebCamTexture
struct WebCamTexture_t1514609158;
// UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843;
// Vuforia.WireframeBehaviour
struct WireframeBehaviour_t1831066704;
// UnityEngine.Material
struct Material_t340375123;
// Vuforia.VuforiaManager
struct VuforiaManager_t1653423889;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.MeshFilter
struct MeshFilter_t3523625662;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// Vuforia.WireframeTrackableEventHandler
struct WireframeTrackableEventHandler_t2143753312;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1113559212;
// Vuforia.ITrackableEventHandler
struct ITrackableEventHandler_t1495975588;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487;
// Vuforia.WireframeBehaviour[]
struct WireframeBehaviourU5BU5D_t4114094193;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Collider
struct Collider_t1773347010;
// Vuforia.WordBehaviour
struct WordBehaviour_t209462683;
// Vuforia.Word
struct Word_t1116038618;
// Vuforia.WordImpl
struct WordImpl_t2494369133;
// Vuforia.RectangleData[]
struct RectangleDataU5BU5D_t804827427;
// Vuforia.WordList
struct WordList_t3693642253;
// Vuforia.WordManager
struct WordManager_t3100853168;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>
struct Dictionary_2_t2529487133;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1968819495;
// System.Collections.Generic.List`1<Vuforia.WordResult>
struct List_1_t817881248;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<Vuforia.Word>
struct List_1_t2588113360;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordBehaviour>
struct Dictionary_2_t3393143310;
// System.Collections.Generic.List`1<Vuforia.WordBehaviour>
struct List_1_t1681537425;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordBehaviour>>
struct Dictionary_2_t1466793724;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>
struct IEnumerable_1_t2620626691;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.WordResult>
struct ValueCollection_t4245531451;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t3684863813;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word>
struct IEnumerable_1_t95891507;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordBehaviour>
struct IEnumerable_1_t3484282868;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<Vuforia.WordBehaviour>>
struct ValueCollection_t3182838042;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1848589470;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<Vuforia.WordBehaviour>>
struct KeyCollection_t1656469195;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t322220623;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t827303578;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1417781964;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.WordBehaviour>
struct KeyCollection_t3582818781;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t2158494966;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1930798642;
// Vuforia.TrackerData/WordData[]
struct WordDataU5BU5D_t3131491555;
// Vuforia.TrackerData/WordResultData[]
struct WordResultDataU5BU5D_t2333646353;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackerData/WordData>
struct IEnumerable_1_t1604620703;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackerData/WordResultData>
struct IEnumerable_1_t518232457;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.WordBehaviour>
struct ValueCollection_t814220332;
// Vuforia.WordResultImpl
struct WordResultImpl_t709252498;
// Vuforia.WordResult
struct WordResult_t3640773802;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.WordResult>
struct KeyCollection_t2719162604;
// Vuforia.VuforiaARController
struct VuforiaARController_t1876945237;
// Vuforia.WSAUnityPlayer
struct WSAUnityPlayer_t3135728299;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// Vuforia.WordBehaviour[]
struct WordBehaviourU5BU5D_t3948822938;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t763310475;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordBehaviour,System.Collections.DictionaryEntry>
struct Transform_1_t3553161782;
// System.Collections.Generic.List`1<Vuforia.WordBehaviour>[]
struct List_1U5BU5D_t2849440012;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<Vuforia.WordBehaviour>,System.Collections.DictionaryEntry>
struct Transform_1_t1699851728;
// Vuforia.WebCamProfile/ProfileData[]
struct ProfileDataU5BU5D_t362536152;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.Collections.DictionaryEntry>
struct Transform_1_t3507915164;
// Vuforia.WordResult[]
struct WordResultU5BU5D_t1041344879;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,System.Collections.DictionaryEntry>
struct Transform_1_t645683723;
// Vuforia.Word[]
struct WordU5BU5D_t2708870527;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_t1617499438;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct Dictionary_2_t3630620928;
// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT>
struct List_1_t386988881;
// Vuforia.IWebCam
struct IWebCam_t3734514901;
// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>
struct List_1_t905170877;
// System.Action
struct Action_t1264377477;
// System.Action`1<System.Boolean>
struct Action_1_t269755560;
// Vuforia.ICameraConfiguration
struct ICameraConfiguration_t283990539;
// Vuforia.DigitalEyewearARController
struct DigitalEyewearARController_t1054226036;
// Vuforia.VideoBackgroundManager
struct VideoBackgroundManager_t2198727358;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t3956019502;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// Vuforia.WorldCenterTrackableBehaviour
struct WorldCenterTrackableBehaviour_t632567575;
// Vuforia.VuMarkBehaviour
struct VuMarkBehaviour_t1178230459;
// Vuforia.TrackerData/TrackableResultData[]
struct TrackableResultDataU5BU5D_t4273811049;
// Vuforia.TrackerData/VuMarkTargetData[]
struct VuMarkTargetDataU5BU5D_t4015091482;
// Vuforia.TrackerData/VuMarkTargetResultData[]
struct VuMarkTargetResultDataU5BU5D_t2157423781;
// System.Collections.Generic.LinkedList`1<Vuforia.VuforiaManager/TrackableIdPair>
struct LinkedList_1_t3066996466;
// Vuforia.LateLatchingManager
struct LateLatchingManager_t3198550161;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>
struct Dictionary_2_t1340713322;
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct GenericVuforiaConfiguration_t3697830469;
// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration
struct DigitalEyewearConfiguration_t546560202;
// Vuforia.VuforiaConfiguration/DatabaseLoadConfiguration
struct DatabaseLoadConfiguration_t449697234;
// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration
struct VideoBackgroundConfiguration_t3392414655;
// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration
struct DeviceTrackerConfiguration_t721467671;
// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration
struct SmartTerrainConfiguration_t1514074484;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// System.Action`1<Vuforia.VuforiaBehaviour>
struct Action_1_t2324316135;
// Vuforia.Trackable
struct Trackable_t2451999991;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_t2968050330;

extern RuntimeClass* DisabledExtendedTrackingImpl_t4193346383_il2cpp_TypeInfo_var;
extern RuntimeClass* VuMarkSetTargetSize_t4198822840_il2cpp_TypeInfo_var;
extern RuntimeClass* InstanceIdImpl_t2824054591_il2cpp_TypeInfo_var;
extern const uint32_t VuMarkTargetImpl__ctor_m2963334285_MetadataUsageId;
extern RuntimeClass* VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var;
extern const uint32_t VuMarkTargetImpl_get_InstanceImage_m2552028378_MetadataUsageId;
extern const RuntimeType* ImageHeaderData_t3550119865_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Marshal_t1757017490_il2cpp_TypeInfo_var;
extern RuntimeClass* ImageHeaderData_t3550119865_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var;
extern RuntimeClass* IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var;
extern const uint32_t VuMarkTargetImpl_CallNativeGetInstanceImage_m1381867968_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Image_t745056343_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1256203510;
extern const uint32_t VuMarkTargetImpl_CreateInstanceImage_m848615665_MetadataUsageId;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern const uint32_t VuMarkTargetImpl_AllocateImage_m2193152031_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t VuMarkSetTargetSize__ctor_m2263671013_MetadataUsageId;
extern RuntimeClass* ObjectTarget_t3212252422_il2cpp_TypeInfo_var;
extern const uint32_t VuMarkSetTargetSize_GetSize_m2524402891_MetadataUsageId;
extern const uint32_t VuMarkSetTargetSize_GetLargestSizeComponent_m1501563452_MetadataUsageId;
extern RuntimeClass* DataSetExtendedTrackingImpl_t3413727792_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t3894781059_il2cpp_TypeInfo_var;
extern RuntimeClass* CustomDataSetTargetSize_t2186564284_il2cpp_TypeInfo_var;
extern const RuntimeMethod* VuMarkTemplateImpl_UpdateOrigin_m437485930_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m3730744496_RuntimeMethod_var;
extern const uint32_t VuMarkTemplateImpl__ctor_m2434547980_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral757602046;
extern const uint32_t VuMarkTemplateImpl_get_VuMarkUserData_m523386316_MetadataUsageId;
extern const uint32_t VuMarkTemplateImpl_set_TrackingFromRuntimeAppearance_m1654671822_MetadataUsageId;
extern const RuntimeType* Vector2_t2156229523_0_0_0_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral168135706;
extern const uint32_t VuMarkTemplateImpl_UpdateOrigin_m437485930_MetadataUsageId;
extern RuntimeClass* IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var;
extern const uint32_t WebCam_get_DidUpdateThisFrame_m2722596423_MetadataUsageId;
extern const uint32_t WebCam_get_IsPlaying_m2513986056_MetadataUsageId;
extern const uint32_t WebCam_ComputeResampledTextureSize_m321498482_MetadataUsageId;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeClass* WebCamProfile_t4166408645_il2cpp_TypeInfo_var;
extern RuntimeClass* DefaultWebCamTexAdaptor_t2452636845_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Func_3_Invoke_m2574976179_RuntimeMethod_var;
extern const uint32_t WebCam__ctor_m2427464772_MetadataUsageId;
extern const uint32_t WebCam_StartCamera_m784729827_MetadataUsageId;
extern const uint32_t WebCam_StopCamera_m1511219799_MetadataUsageId;
extern RuntimeClass* VuforiaRenderer_t3433045970_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern RuntimeClass* CameraDevice_t960297568_il2cpp_TypeInfo_var;
extern const uint32_t WebCam_RenderFrame_m2496994751_MetadataUsageId;
extern const uint32_t WebCam_OnDestroy_m332336637_MetadataUsageId;
extern RuntimeClass* TextureRenderer_t3278815845_il2cpp_TypeInfo_var;
extern const uint32_t WebCam_Update_m3572144808_MetadataUsageId;
extern RuntimeClass* U3CU3Ec_t3582055403_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_3_t3440825513_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__7_0_m3175983664_RuntimeMethod_var;
extern const RuntimeMethod* Func_3__ctor_m3165450366_RuntimeMethod_var;
extern const uint32_t WebCamARController__ctor_m751483383_MetadataUsageId;
extern RuntimeClass* WebCamARController_t3718642882_il2cpp_TypeInfo_var;
extern const uint32_t WebCamARController_get_Instance_m1980552932_MetadataUsageId;
extern const uint32_t WebCamARController_RegisterARController_m2119076139_MetadataUsageId;
extern RuntimeClass* WebCam_t2427002488_il2cpp_TypeInfo_var;
extern const RuntimeMethod* UnityComponentExtensions_GetComponentsOnlyInChildren_TisCamera_t4157153871_m2275549933_RuntimeMethod_var;
extern const uint32_t WebCamARController_InitCamera_m1118184140_MetadataUsageId;
extern RuntimeClass* VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var;
extern const uint32_t WebCamARController_Awake_m4020518652_MetadataUsageId;
extern const uint32_t WebCamARController_OnLevelWasLoaded_m3407873239_MetadataUsageId;
extern const uint32_t WebCamARController_OnDestroy_m1720525424_MetadataUsageId;
extern const uint32_t WebCamARController_Update_m2251066661_MetadataUsageId;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern const uint32_t WebCamARController__cctor_m3035936290_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m4266389493_MetadataUsageId;
extern RuntimeClass* WebCamTexAdaptor_t3430449046_il2cpp_TypeInfo_var;
extern const uint32_t U3CU3Ec_U3C_ctorU3Eb__7_0_m3175983664_MetadataUsageId;
extern RuntimeClass* IPlayModeEditorUtility_t752570519_il2cpp_TypeInfo_var;
extern const uint32_t WebCamProfile__ctor_m820471938_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1260807329_RuntimeMethod_var;
extern const uint32_t WebCamProfile_GetProfile_m3959388229_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m4190276240_RuntimeMethod_var;
extern const uint32_t WebCamProfile_ProfileAvailable_m801322015_MetadataUsageId;
extern RuntimeClass* WebCamTexture_t1514609158_il2cpp_TypeInfo_var;
extern const uint32_t WebCamTexAdaptor__ctor_m852957585_MetadataUsageId;
extern String_t* _stringLiteral2036431799;
extern const uint32_t WebCamTexAdaptor_CheckPermissions_m4247082500_MetadataUsageId;
extern RuntimeClass* Material_t340375123_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1571861241;
extern const uint32_t WireframeBehaviour_Start_m3567912005_MetadataUsageId;
extern RuntimeClass* VuforiaManager_t1653423889_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponentsInChildren_TisCamera_t4157153871_m926460427_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisMeshFilter_t3523625662_m569847836_RuntimeMethod_var;
extern String_t* _stringLiteral3957048425;
extern const uint32_t WireframeBehaviour_OnRenderObject_m913596852_MetadataUsageId;
extern RuntimeClass* Matrix4x4_t1817901843_il2cpp_TypeInfo_var;
extern const uint32_t WireframeBehaviour_OnDrawGizmos_m1837418945_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408_RuntimeMethod_var;
extern const uint32_t WireframeTrackableEventHandler_Start_m3436697873_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisWireframeBehaviour_t1831066704_m2022065013_RuntimeMethod_var;
extern String_t* _stringLiteral3820270571;
extern String_t* _stringLiteral3073488411;
extern const uint32_t WireframeTrackableEventHandler_OnTrackingFound_m2813716415_MetadataUsageId;
extern String_t* _stringLiteral3483481617;
extern const uint32_t WireframeTrackableEventHandler_OnTrackingLost_m1967211472_MetadataUsageId;
extern RuntimeClass* Word_t1116038618_il2cpp_TypeInfo_var;
extern const uint32_t WordBehaviour_InitializeWord_m2807202778_MetadataUsageId;
extern String_t* _stringLiteral1699185095;
extern const uint32_t WordBehaviour_OnValidate_m1427201977_MetadataUsageId;
extern const uint32_t WordImpl_GetLetterMask_m742086191_MetadataUsageId;
extern const RuntimeType* RectangleData_t1039179782_0_0_0_var;
extern RuntimeClass* RectangleDataU5BU5D_t804827427_il2cpp_TypeInfo_var;
extern RuntimeClass* RectangleData_t1039179782_il2cpp_TypeInfo_var;
extern const uint32_t WordImpl_GetLetterBoundingBoxes_m1855461210_MetadataUsageId;
extern const uint32_t WordImpl_InitImageHeader_m3006118628_MetadataUsageId;
extern String_t* _stringLiteral1198487051;
extern const uint32_t WordImpl_CreateLetterMask_m224036644_MetadataUsageId;
extern const uint32_t WordImpl_AllocateImage_m3294391543_MetadataUsageId;
extern const uint32_t WordList_LoadWordListFile_m552733683_MetadataUsageId;
extern const uint32_t WordList_AddWordsFromFile_m1862212695_MetadataUsageId;
extern const uint32_t WordList_AddWord_m3472006904_MetadataUsageId;
extern const uint32_t WordList_RemoveWord_m1834798121_MetadataUsageId;
extern const uint32_t WordList_ContainsWord_m11318312_MetadataUsageId;
extern const uint32_t WordList_UnloadAllLists_m2054322083_MetadataUsageId;
extern const uint32_t WordList_GetFilterMode_m3017865745_MetadataUsageId;
extern const uint32_t WordList_SetFilterMode_m3971204164_MetadataUsageId;
extern const uint32_t WordList_LoadFilterListFile_m4022350524_MetadataUsageId;
extern const uint32_t WordList_AddWordToFilterList_m3119197720_MetadataUsageId;
extern const uint32_t WordList_RemoveWordFromFilterList_m4182495724_MetadataUsageId;
extern const uint32_t WordList_ClearFilterList_m677150615_MetadataUsageId;
extern const uint32_t WordList_GetFilterListWordCount_m1175049309_MetadataUsageId;
extern const uint32_t WordList_GetFilterListWord_m2986794681_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2529487133_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t817881248_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2588113360_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3393143310_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1681537425_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t1466793724_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2165170305_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3369957770_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3294312876_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1385716975_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1720454467_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m713463042_RuntimeMethod_var;
extern const uint32_t WordManager__ctor_m3858017893_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Values_m1988163935_RuntimeMethod_var;
extern const uint32_t WordManager_GetActiveWordResults_m1333943077_MetadataUsageId;
extern RuntimeClass* Trackable_t2451999991_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m670017294_RuntimeMethod_var;
extern const uint32_t WordManager_TryGetWordBehaviour_m156595532_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Values_m2758663250_RuntimeMethod_var;
extern const RuntimeMethod* ValueCollection_GetEnumerator_m1627817905_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1070017454_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m2418638764_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2310817316_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2347494636_RuntimeMethod_var;
extern const uint32_t WordManager_GetTrackableBehaviours_m552120407_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Keys_m1811193429_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToArray_TisString_t_m1789351813_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m142719623_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m2027764343_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m591231568_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2708548481_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m1957493530_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m82523697_RuntimeMethod_var;
extern const uint32_t WordManager_DestroyWordBehaviour_m1980736901_MetadataUsageId;
extern const RuntimeType* WordBehaviour_t209462683_0_0_0_var;
extern RuntimeClass* WordBehaviourU5BU5D_t3948822938_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Enumerable_ToList_TisWordBehaviour_t209462683_m3926744422_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m4104309222_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1934944160_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1854802932_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1166863020_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m700246627_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m2084030734_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m2175596614_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m4131072563_RuntimeMethod_var;
extern String_t* _stringLiteral3255970859;
extern const uint32_t WordManager_InitializeWordBehaviourTemplates_m3961783150_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m1982020868_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m726756076_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Keys_m176267334_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToArray_TisInt32_t2950945753_m2311522548_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m3370583836_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m74906818_RuntimeMethod_var;
extern const uint32_t WordManager_RemoveDestroyedTrackables_m1969970407_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Values_m1751666622_RuntimeMethod_var;
extern const RuntimeMethod* ValueCollection_GetEnumerator_m3310874610_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2440865922_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3670481143_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m329372891_RuntimeMethod_var;
extern const uint32_t WordManager_SetWordBehavioursToNotFound_m3508151847_MetadataUsageId;
extern const RuntimeMethod* List_1_Clear_m3053871591_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m3489354309_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Clear_m3931322809_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Clear_m1313596732_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Clear_m3720299519_RuntimeMethod_var;
extern const uint32_t WordManager_CleanupWordBehaviours_m1453892895_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t1604620703_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t3057338282_il2cpp_TypeInfo_var;
extern RuntimeClass* WordImpl_t2494369133_il2cpp_TypeInfo_var;
extern RuntimeClass* WordResultImpl_t709252498_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t128053199_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t518232457_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1970950036_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m452890411_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m417576055_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m309338820_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1628857705_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m697420525_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Keys_m2166097550_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToList_TisInt32_t2950945753_m1435865193_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m731136149_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m4088456620_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m2934014725_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m2551113427_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3459031900_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m1088040339_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2218650275_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m222348240_RuntimeMethod_var;
extern const uint32_t WordManager_UpdateWords_m4081984760_MetadataUsageId;
extern RuntimeClass* VuforiaARController_t1876945237_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const uint32_t WordManager_UpdateWordResultPoses_m3056067080_MetadataUsageId;
extern const RuntimeMethod* List_1__ctor_m3158419898_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2302738403_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2736178487_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m1056585745_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2288170636_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3471433355_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2482267928_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m4042749952_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2572193847_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1326660095_RuntimeMethod_var;
extern const uint32_t WordManager_AssociateWordResultsWithBehaviours_m461350755_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m2771048759_RuntimeMethod_var;
extern const uint32_t WordManager_UnregisterLostWords_m2200841016_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m2773471309_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2154097776_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m1922373331_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m1813463021_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3012356852_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1336168494_RuntimeMethod_var;
extern const uint32_t WordManager_UpdateWordBehaviourPoses_m234614189_MetadataUsageId;
extern const RuntimeMethod* Enumerable_First_TisWordBehaviour_t209462683_m4288152383_RuntimeMethod_var;
extern String_t* _stringLiteral508940442;
extern const uint32_t WordManager_AssociateWordBehaviour_m1817390297_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Count_m2971063614_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m2705235964_RuntimeMethod_var;
extern const uint32_t WordManager_AssociateWordBehaviour_m859919092_MetadataUsageId;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisWordBehaviour_t209462683_m2132343485_RuntimeMethod_var;
extern const uint32_t WordManager_InstantiateWordBehaviour_m2264733916_MetadataUsageId;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_AddComponent_TisWordBehaviour_t209462683_m808492541_RuntimeMethod_var;
extern String_t* _stringLiteral1861372873;
extern String_t* _stringLiteral277781720;
extern const uint32_t WordManager_CreateWordBehaviour_m3530259637_MetadataUsageId;

struct ByteU5BU5D_t4116647657;
struct CameraU5BU5D_t1709987734;
struct WebCamDeviceU5BU5D_t4294070825;
struct Int32U5BU5D_t385246372;
struct Color32U5BU5D_t3850468773;
struct Vector3U5BU5D_t1718750761;
struct ColliderU5BU5D_t4234922487;
struct WireframeBehaviourU5BU5D_t4114094193;
struct RendererU5BU5D_t3210418286;
struct RectangleDataU5BU5D_t804827427;
struct StringU5BU5D_t1281789340;
struct WordBehaviourU5BU5D_t3948822938;
struct ObjectU5BU5D_t1417781964;
struct WordDataU5BU5D_t3131491555;
struct WordResultDataU5BU5D_t2333646353;


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
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef DICTIONARY_2_T3393143310_H
#define DICTIONARY_2_T3393143310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordBehaviour>
struct  Dictionary_2_t3393143310  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	WordBehaviourU5BU5D_t3948822938* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3393143310, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3393143310, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3393143310, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3393143310, ___valueSlots_7)); }
	inline WordBehaviourU5BU5D_t3948822938* get_valueSlots_7() const { return ___valueSlots_7; }
	inline WordBehaviourU5BU5D_t3948822938** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(WordBehaviourU5BU5D_t3948822938* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3393143310, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3393143310, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3393143310, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3393143310, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3393143310, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3393143310, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3393143310, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3393143310_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3553161782 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3393143310_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3553161782 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3553161782 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3553161782 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3393143310_H
#ifndef LIST_1_T1681537425_H
#define LIST_1_T1681537425_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Vuforia.WordBehaviour>
struct  List_1_t1681537425  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WordBehaviourU5BU5D_t3948822938* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1681537425, ____items_1)); }
	inline WordBehaviourU5BU5D_t3948822938* get__items_1() const { return ____items_1; }
	inline WordBehaviourU5BU5D_t3948822938** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WordBehaviourU5BU5D_t3948822938* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1681537425, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1681537425, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1681537425_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	WordBehaviourU5BU5D_t3948822938* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1681537425_StaticFields, ___EmptyArray_4)); }
	inline WordBehaviourU5BU5D_t3948822938* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline WordBehaviourU5BU5D_t3948822938** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(WordBehaviourU5BU5D_t3948822938* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1681537425_H
#ifndef DICTIONARY_2_T1466793724_H
#define DICTIONARY_2_T1466793724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordBehaviour>>
struct  Dictionary_2_t1466793724  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	List_1U5BU5D_t2849440012* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1466793724, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1466793724, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1466793724, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1466793724, ___valueSlots_7)); }
	inline List_1U5BU5D_t2849440012* get_valueSlots_7() const { return ___valueSlots_7; }
	inline List_1U5BU5D_t2849440012** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(List_1U5BU5D_t2849440012* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1466793724, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1466793724, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1466793724, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1466793724, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1466793724, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1466793724, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1466793724, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1466793724_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1699851728 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1466793724_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1699851728 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1699851728 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1699851728 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1466793724_H
#ifndef VALUECOLLECTION_T4245531451_H
#define VALUECOLLECTION_T4245531451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.WordResult>
struct  ValueCollection_t4245531451  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t2529487133 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t4245531451, ___dictionary_0)); }
	inline Dictionary_2_t2529487133 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2529487133 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2529487133 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUECOLLECTION_T4245531451_H
#ifndef VALUECOLLECTION_T3182838042_H
#define VALUECOLLECTION_T3182838042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<Vuforia.WordBehaviour>>
struct  ValueCollection_t3182838042  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t1466793724 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t3182838042, ___dictionary_0)); }
	inline Dictionary_2_t1466793724 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1466793724 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1466793724 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUECOLLECTION_T3182838042_H
#ifndef KEYCOLLECTION_T1656469195_H
#define KEYCOLLECTION_T1656469195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<Vuforia.WordBehaviour>>
struct  KeyCollection_t1656469195  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t1466793724 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t1656469195, ___dictionary_0)); }
	inline Dictionary_2_t1466793724 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1466793724 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1466793724 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T1656469195_H
#ifndef KEYCOLLECTION_T3582818781_H
#define KEYCOLLECTION_T3582818781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.WordBehaviour>
struct  KeyCollection_t3582818781  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t3393143310 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t3582818781, ___dictionary_0)); }
	inline Dictionary_2_t3393143310 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t3393143310 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t3393143310 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T3582818781_H
#ifndef VALUECOLLECTION_T814220332_H
#define VALUECOLLECTION_T814220332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.WordBehaviour>
struct  ValueCollection_t814220332  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t3393143310 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t814220332, ___dictionary_0)); }
	inline Dictionary_2_t3393143310 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t3393143310 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t3393143310 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUECOLLECTION_T814220332_H
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
#ifndef U3CU3EC_T3582055403_H
#define U3CU3EC_T3582055403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamARController/<>c
struct  U3CU3Ec_t3582055403  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3582055403_StaticFields
{
public:
	// Vuforia.WebCamARController/<>c Vuforia.WebCamARController/<>c::<>9
	U3CU3Ec_t3582055403 * ___U3CU3E9_0;
	// System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor> Vuforia.WebCamARController/<>c::<>9__7_0
	Func_3_t3440825513 * ___U3CU3E9__7_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3582055403_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3582055403 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3582055403 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3582055403 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3582055403_StaticFields, ___U3CU3E9__7_0_1)); }
	inline Func_3_t3440825513 * get_U3CU3E9__7_0_1() const { return ___U3CU3E9__7_0_1; }
	inline Func_3_t3440825513 ** get_address_of_U3CU3E9__7_0_1() { return &___U3CU3E9__7_0_1; }
	inline void set_U3CU3E9__7_0_1(Func_3_t3440825513 * value)
	{
		___U3CU3E9__7_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__7_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T3582055403_H
#ifndef ARCONTROLLER_T116632334_H
#define ARCONTROLLER_T116632334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ARController
struct  ARController_t116632334  : public RuntimeObject
{
public:
	// Vuforia.VuforiaBehaviour Vuforia.ARController::mVuforiaBehaviour
	VuforiaBehaviour_t2151848540 * ___mVuforiaBehaviour_0;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_0() { return static_cast<int32_t>(offsetof(ARController_t116632334, ___mVuforiaBehaviour_0)); }
	inline VuforiaBehaviour_t2151848540 * get_mVuforiaBehaviour_0() const { return ___mVuforiaBehaviour_0; }
	inline VuforiaBehaviour_t2151848540 ** get_address_of_mVuforiaBehaviour_0() { return &___mVuforiaBehaviour_0; }
	inline void set_mVuforiaBehaviour_0(VuforiaBehaviour_t2151848540 * value)
	{
		___mVuforiaBehaviour_0 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARCONTROLLER_T116632334_H
#ifndef WEBCAMCONFIGURATION_T1101614731_H
#define WEBCAMCONFIGURATION_T1101614731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration/WebCamConfiguration
struct  WebCamConfiguration_t1101614731  : public RuntimeObject
{
public:
	// System.String Vuforia.VuforiaConfiguration/WebCamConfiguration::deviceNameSetInEditor
	String_t* ___deviceNameSetInEditor_0;
	// System.Boolean Vuforia.VuforiaConfiguration/WebCamConfiguration::flipHorizontally
	bool ___flipHorizontally_1;
	// System.Boolean Vuforia.VuforiaConfiguration/WebCamConfiguration::turnOffWebCam
	bool ___turnOffWebCam_2;
	// System.Int32 Vuforia.VuforiaConfiguration/WebCamConfiguration::renderTextureLayer
	int32_t ___renderTextureLayer_3;

public:
	inline static int32_t get_offset_of_deviceNameSetInEditor_0() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t1101614731, ___deviceNameSetInEditor_0)); }
	inline String_t* get_deviceNameSetInEditor_0() const { return ___deviceNameSetInEditor_0; }
	inline String_t** get_address_of_deviceNameSetInEditor_0() { return &___deviceNameSetInEditor_0; }
	inline void set_deviceNameSetInEditor_0(String_t* value)
	{
		___deviceNameSetInEditor_0 = value;
		Il2CppCodeGenWriteBarrier((&___deviceNameSetInEditor_0), value);
	}

	inline static int32_t get_offset_of_flipHorizontally_1() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t1101614731, ___flipHorizontally_1)); }
	inline bool get_flipHorizontally_1() const { return ___flipHorizontally_1; }
	inline bool* get_address_of_flipHorizontally_1() { return &___flipHorizontally_1; }
	inline void set_flipHorizontally_1(bool value)
	{
		___flipHorizontally_1 = value;
	}

	inline static int32_t get_offset_of_turnOffWebCam_2() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t1101614731, ___turnOffWebCam_2)); }
	inline bool get_turnOffWebCam_2() const { return ___turnOffWebCam_2; }
	inline bool* get_address_of_turnOffWebCam_2() { return &___turnOffWebCam_2; }
	inline void set_turnOffWebCam_2(bool value)
	{
		___turnOffWebCam_2 = value;
	}

	inline static int32_t get_offset_of_renderTextureLayer_3() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t1101614731, ___renderTextureLayer_3)); }
	inline int32_t get_renderTextureLayer_3() const { return ___renderTextureLayer_3; }
	inline int32_t* get_address_of_renderTextureLayer_3() { return &___renderTextureLayer_3; }
	inline void set_renderTextureLayer_3(int32_t value)
	{
		___renderTextureLayer_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMCONFIGURATION_T1101614731_H
#ifndef WEBCAMTEXADAPTOR_T3430449046_H
#define WEBCAMTEXADAPTOR_T3430449046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamTexAdaptor
struct  WebCamTexAdaptor_t3430449046  : public RuntimeObject
{
public:
	// UnityEngine.WebCamTexture Vuforia.WebCamTexAdaptor::mWebCamTexture
	WebCamTexture_t1514609158 * ___mWebCamTexture_0;
	// UnityEngine.AsyncOperation Vuforia.WebCamTexAdaptor::mCheckCameraPermissions
	AsyncOperation_t1445031843 * ___mCheckCameraPermissions_1;

public:
	inline static int32_t get_offset_of_mWebCamTexture_0() { return static_cast<int32_t>(offsetof(WebCamTexAdaptor_t3430449046, ___mWebCamTexture_0)); }
	inline WebCamTexture_t1514609158 * get_mWebCamTexture_0() const { return ___mWebCamTexture_0; }
	inline WebCamTexture_t1514609158 ** get_address_of_mWebCamTexture_0() { return &___mWebCamTexture_0; }
	inline void set_mWebCamTexture_0(WebCamTexture_t1514609158 * value)
	{
		___mWebCamTexture_0 = value;
		Il2CppCodeGenWriteBarrier((&___mWebCamTexture_0), value);
	}

	inline static int32_t get_offset_of_mCheckCameraPermissions_1() { return static_cast<int32_t>(offsetof(WebCamTexAdaptor_t3430449046, ___mCheckCameraPermissions_1)); }
	inline AsyncOperation_t1445031843 * get_mCheckCameraPermissions_1() const { return ___mCheckCameraPermissions_1; }
	inline AsyncOperation_t1445031843 ** get_address_of_mCheckCameraPermissions_1() { return &___mCheckCameraPermissions_1; }
	inline void set_mCheckCameraPermissions_1(AsyncOperation_t1445031843 * value)
	{
		___mCheckCameraPermissions_1 = value;
		Il2CppCodeGenWriteBarrier((&___mCheckCameraPermissions_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMTEXADAPTOR_T3430449046_H
#ifndef DICTIONARY_2_T3304648224_H
#define DICTIONARY_2_T3304648224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>
struct  Dictionary_2_t3304648224  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ProfileDataU5BU5D_t362536152* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___valueSlots_7)); }
	inline ProfileDataU5BU5D_t362536152* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ProfileDataU5BU5D_t362536152** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ProfileDataU5BU5D_t362536152* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3304648224_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3507915164 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3304648224_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3507915164 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3507915164 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3507915164 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3304648224_H
#ifndef WORDLIST_T3693642253_H
#define WORDLIST_T3693642253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordList
struct  WordList_t3693642253  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDLIST_T3693642253_H
#ifndef DICTIONARY_2_T2529487133_H
#define DICTIONARY_2_T2529487133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>
struct  Dictionary_2_t2529487133  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	WordResultU5BU5D_t1041344879* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2529487133, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2529487133, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2529487133, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2529487133, ___valueSlots_7)); }
	inline WordResultU5BU5D_t1041344879* get_valueSlots_7() const { return ___valueSlots_7; }
	inline WordResultU5BU5D_t1041344879** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(WordResultU5BU5D_t1041344879* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2529487133, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2529487133, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2529487133, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2529487133, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2529487133, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2529487133, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2529487133, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2529487133_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t645683723 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2529487133_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t645683723 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t645683723 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t645683723 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2529487133_H
#ifndef TEXTURERENDERER_T3278815845_H
#define TEXTURERENDERER_T3278815845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TextureRenderer
struct  TextureRenderer_t3278815845  : public RuntimeObject
{
public:
	// UnityEngine.Camera Vuforia.TextureRenderer::mTextureBufferCamera
	Camera_t4157153871 * ___mTextureBufferCamera_0;
	// System.Int32 Vuforia.TextureRenderer::mTextureWidth
	int32_t ___mTextureWidth_1;
	// System.Int32 Vuforia.TextureRenderer::mTextureHeight
	int32_t ___mTextureHeight_2;

public:
	inline static int32_t get_offset_of_mTextureBufferCamera_0() { return static_cast<int32_t>(offsetof(TextureRenderer_t3278815845, ___mTextureBufferCamera_0)); }
	inline Camera_t4157153871 * get_mTextureBufferCamera_0() const { return ___mTextureBufferCamera_0; }
	inline Camera_t4157153871 ** get_address_of_mTextureBufferCamera_0() { return &___mTextureBufferCamera_0; }
	inline void set_mTextureBufferCamera_0(Camera_t4157153871 * value)
	{
		___mTextureBufferCamera_0 = value;
		Il2CppCodeGenWriteBarrier((&___mTextureBufferCamera_0), value);
	}

	inline static int32_t get_offset_of_mTextureWidth_1() { return static_cast<int32_t>(offsetof(TextureRenderer_t3278815845, ___mTextureWidth_1)); }
	inline int32_t get_mTextureWidth_1() const { return ___mTextureWidth_1; }
	inline int32_t* get_address_of_mTextureWidth_1() { return &___mTextureWidth_1; }
	inline void set_mTextureWidth_1(int32_t value)
	{
		___mTextureWidth_1 = value;
	}

	inline static int32_t get_offset_of_mTextureHeight_2() { return static_cast<int32_t>(offsetof(TextureRenderer_t3278815845, ___mTextureHeight_2)); }
	inline int32_t get_mTextureHeight_2() const { return ___mTextureHeight_2; }
	inline int32_t* get_address_of_mTextureHeight_2() { return &___mTextureHeight_2; }
	inline void set_mTextureHeight_2(int32_t value)
	{
		___mTextureHeight_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURERENDERER_T3278815845_H
#ifndef LIST_1_T817881248_H
#define LIST_1_T817881248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Vuforia.WordResult>
struct  List_1_t817881248  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WordResultU5BU5D_t1041344879* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t817881248, ____items_1)); }
	inline WordResultU5BU5D_t1041344879* get__items_1() const { return ____items_1; }
	inline WordResultU5BU5D_t1041344879** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WordResultU5BU5D_t1041344879* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t817881248, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t817881248, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t817881248_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	WordResultU5BU5D_t1041344879* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t817881248_StaticFields, ___EmptyArray_4)); }
	inline WordResultU5BU5D_t1041344879* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline WordResultU5BU5D_t1041344879** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(WordResultU5BU5D_t1041344879* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T817881248_H
#ifndef LIST_1_T2588113360_H
#define LIST_1_T2588113360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Vuforia.Word>
struct  List_1_t2588113360  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WordU5BU5D_t2708870527* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2588113360, ____items_1)); }
	inline WordU5BU5D_t2708870527* get__items_1() const { return ____items_1; }
	inline WordU5BU5D_t2708870527** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WordU5BU5D_t2708870527* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2588113360, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2588113360, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2588113360_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	WordU5BU5D_t2708870527* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2588113360_StaticFields, ___EmptyArray_4)); }
	inline WordU5BU5D_t2708870527* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline WordU5BU5D_t2708870527** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(WordU5BU5D_t2708870527* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2588113360_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
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
#ifndef DISABLEDEXTENDEDTRACKINGIMPL_T4193346383_H
#define DISABLEDEXTENDEDTRACKINGIMPL_T4193346383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DisabledExtendedTrackingImpl
struct  DisabledExtendedTrackingImpl_t4193346383  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISABLEDEXTENDEDTRACKINGIMPL_T4193346383_H
#ifndef TRACKABLEIMPL_T3595316917_H
#define TRACKABLEIMPL_T3595316917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableImpl
struct  TrackableImpl_t3595316917  : public RuntimeObject
{
public:
	// System.String Vuforia.TrackableImpl::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int32 Vuforia.TrackableImpl::<ID>k__BackingField
	int32_t ___U3CIDU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableImpl_t3595316917, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CIDU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TrackableImpl_t3595316917, ___U3CIDU3Ek__BackingField_1)); }
	inline int32_t get_U3CIDU3Ek__BackingField_1() const { return ___U3CIDU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CIDU3Ek__BackingField_1() { return &___U3CIDU3Ek__BackingField_1; }
	inline void set_U3CIDU3Ek__BackingField_1(int32_t value)
	{
		___U3CIDU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEIMPL_T3595316917_H
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
#ifndef WSAUNITYPLAYER_T3135728299_H
#define WSAUNITYPLAYER_T3135728299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WSAUnityPlayer
struct  WSAUnityPlayer_t3135728299  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WSAUNITYPLAYER_T3135728299_H
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
#ifndef KEYCOLLECTION_T2719162604_H
#define KEYCOLLECTION_T2719162604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.WordResult>
struct  KeyCollection_t2719162604  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t2529487133 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t2719162604, ___dictionary_0)); }
	inline Dictionary_2_t2529487133 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2529487133 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2529487133 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T2719162604_H
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
#ifndef WORDRESULT_T3640773802_H
#define WORDRESULT_T3640773802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordResult
struct  WordResult_t3640773802  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDRESULT_T3640773802_H
#ifndef AUTOROTATIONSTATE_T2150317116_H
#define AUTOROTATIONSTATE_T2150317116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManager/AutoRotationState
struct  AutoRotationState_t2150317116 
{
public:
	// System.Boolean Vuforia.VuforiaManager/AutoRotationState::setOnPause
	bool ___setOnPause_0;
	// System.Boolean Vuforia.VuforiaManager/AutoRotationState::autorotateToPortrait
	bool ___autorotateToPortrait_1;
	// System.Boolean Vuforia.VuforiaManager/AutoRotationState::autorotateToPortraitUpsideDown
	bool ___autorotateToPortraitUpsideDown_2;
	// System.Boolean Vuforia.VuforiaManager/AutoRotationState::autorotateToLandscapeLeft
	bool ___autorotateToLandscapeLeft_3;
	// System.Boolean Vuforia.VuforiaManager/AutoRotationState::autorotateToLandscapeRight
	bool ___autorotateToLandscapeRight_4;

public:
	inline static int32_t get_offset_of_setOnPause_0() { return static_cast<int32_t>(offsetof(AutoRotationState_t2150317116, ___setOnPause_0)); }
	inline bool get_setOnPause_0() const { return ___setOnPause_0; }
	inline bool* get_address_of_setOnPause_0() { return &___setOnPause_0; }
	inline void set_setOnPause_0(bool value)
	{
		___setOnPause_0 = value;
	}

	inline static int32_t get_offset_of_autorotateToPortrait_1() { return static_cast<int32_t>(offsetof(AutoRotationState_t2150317116, ___autorotateToPortrait_1)); }
	inline bool get_autorotateToPortrait_1() const { return ___autorotateToPortrait_1; }
	inline bool* get_address_of_autorotateToPortrait_1() { return &___autorotateToPortrait_1; }
	inline void set_autorotateToPortrait_1(bool value)
	{
		___autorotateToPortrait_1 = value;
	}

	inline static int32_t get_offset_of_autorotateToPortraitUpsideDown_2() { return static_cast<int32_t>(offsetof(AutoRotationState_t2150317116, ___autorotateToPortraitUpsideDown_2)); }
	inline bool get_autorotateToPortraitUpsideDown_2() const { return ___autorotateToPortraitUpsideDown_2; }
	inline bool* get_address_of_autorotateToPortraitUpsideDown_2() { return &___autorotateToPortraitUpsideDown_2; }
	inline void set_autorotateToPortraitUpsideDown_2(bool value)
	{
		___autorotateToPortraitUpsideDown_2 = value;
	}

	inline static int32_t get_offset_of_autorotateToLandscapeLeft_3() { return static_cast<int32_t>(offsetof(AutoRotationState_t2150317116, ___autorotateToLandscapeLeft_3)); }
	inline bool get_autorotateToLandscapeLeft_3() const { return ___autorotateToLandscapeLeft_3; }
	inline bool* get_address_of_autorotateToLandscapeLeft_3() { return &___autorotateToLandscapeLeft_3; }
	inline void set_autorotateToLandscapeLeft_3(bool value)
	{
		___autorotateToLandscapeLeft_3 = value;
	}

	inline static int32_t get_offset_of_autorotateToLandscapeRight_4() { return static_cast<int32_t>(offsetof(AutoRotationState_t2150317116, ___autorotateToLandscapeRight_4)); }
	inline bool get_autorotateToLandscapeRight_4() const { return ___autorotateToLandscapeRight_4; }
	inline bool* get_address_of_autorotateToLandscapeRight_4() { return &___autorotateToLandscapeRight_4; }
	inline void set_autorotateToLandscapeRight_4(bool value)
	{
		___autorotateToLandscapeRight_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuforia.VuforiaManager/AutoRotationState
struct AutoRotationState_t2150317116_marshaled_pinvoke
{
	int32_t ___setOnPause_0;
	int32_t ___autorotateToPortrait_1;
	int32_t ___autorotateToPortraitUpsideDown_2;
	int32_t ___autorotateToLandscapeLeft_3;
	int32_t ___autorotateToLandscapeRight_4;
};
// Native definition for COM marshalling of Vuforia.VuforiaManager/AutoRotationState
struct AutoRotationState_t2150317116_marshaled_com
{
	int32_t ___setOnPause_0;
	int32_t ___autorotateToPortrait_1;
	int32_t ___autorotateToPortraitUpsideDown_2;
	int32_t ___autorotateToLandscapeLeft_3;
	int32_t ___autorotateToLandscapeRight_4;
};
#endif // AUTOROTATIONSTATE_T2150317116_H
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
#ifndef WEBCAMARCONTROLLER_T3718642882_H
#define WEBCAMARCONTROLLER_T3718642882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamARController
struct  WebCamARController_t3718642882  : public ARController_t116632334
{
public:
	// System.Int32 Vuforia.WebCamARController::RenderTextureLayer
	int32_t ___RenderTextureLayer_1;
	// System.String Vuforia.WebCamARController::mDeviceNameSetInEditor
	String_t* ___mDeviceNameSetInEditor_2;
	// System.Boolean Vuforia.WebCamARController::mFlipHorizontally
	bool ___mFlipHorizontally_3;
	// Vuforia.WebCam Vuforia.WebCamARController::mWebCamImpl
	WebCam_t2427002488 * ___mWebCamImpl_4;
	// System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor> Vuforia.WebCamARController::mWebCamTexAdaptorProvider
	Func_3_t3440825513 * ___mWebCamTexAdaptorProvider_5;

public:
	inline static int32_t get_offset_of_RenderTextureLayer_1() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882, ___RenderTextureLayer_1)); }
	inline int32_t get_RenderTextureLayer_1() const { return ___RenderTextureLayer_1; }
	inline int32_t* get_address_of_RenderTextureLayer_1() { return &___RenderTextureLayer_1; }
	inline void set_RenderTextureLayer_1(int32_t value)
	{
		___RenderTextureLayer_1 = value;
	}

	inline static int32_t get_offset_of_mDeviceNameSetInEditor_2() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882, ___mDeviceNameSetInEditor_2)); }
	inline String_t* get_mDeviceNameSetInEditor_2() const { return ___mDeviceNameSetInEditor_2; }
	inline String_t** get_address_of_mDeviceNameSetInEditor_2() { return &___mDeviceNameSetInEditor_2; }
	inline void set_mDeviceNameSetInEditor_2(String_t* value)
	{
		___mDeviceNameSetInEditor_2 = value;
		Il2CppCodeGenWriteBarrier((&___mDeviceNameSetInEditor_2), value);
	}

	inline static int32_t get_offset_of_mFlipHorizontally_3() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882, ___mFlipHorizontally_3)); }
	inline bool get_mFlipHorizontally_3() const { return ___mFlipHorizontally_3; }
	inline bool* get_address_of_mFlipHorizontally_3() { return &___mFlipHorizontally_3; }
	inline void set_mFlipHorizontally_3(bool value)
	{
		___mFlipHorizontally_3 = value;
	}

	inline static int32_t get_offset_of_mWebCamImpl_4() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882, ___mWebCamImpl_4)); }
	inline WebCam_t2427002488 * get_mWebCamImpl_4() const { return ___mWebCamImpl_4; }
	inline WebCam_t2427002488 ** get_address_of_mWebCamImpl_4() { return &___mWebCamImpl_4; }
	inline void set_mWebCamImpl_4(WebCam_t2427002488 * value)
	{
		___mWebCamImpl_4 = value;
		Il2CppCodeGenWriteBarrier((&___mWebCamImpl_4), value);
	}

	inline static int32_t get_offset_of_mWebCamTexAdaptorProvider_5() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882, ___mWebCamTexAdaptorProvider_5)); }
	inline Func_3_t3440825513 * get_mWebCamTexAdaptorProvider_5() const { return ___mWebCamTexAdaptorProvider_5; }
	inline Func_3_t3440825513 ** get_address_of_mWebCamTexAdaptorProvider_5() { return &___mWebCamTexAdaptorProvider_5; }
	inline void set_mWebCamTexAdaptorProvider_5(Func_3_t3440825513 * value)
	{
		___mWebCamTexAdaptorProvider_5 = value;
		Il2CppCodeGenWriteBarrier((&___mWebCamTexAdaptorProvider_5), value);
	}
};

struct WebCamARController_t3718642882_StaticFields
{
public:
	// Vuforia.WebCamARController Vuforia.WebCamARController::mInstance
	WebCamARController_t3718642882 * ___mInstance_6;
	// System.Object Vuforia.WebCamARController::mPadlock
	RuntimeObject * ___mPadlock_7;

public:
	inline static int32_t get_offset_of_mInstance_6() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882_StaticFields, ___mInstance_6)); }
	inline WebCamARController_t3718642882 * get_mInstance_6() const { return ___mInstance_6; }
	inline WebCamARController_t3718642882 ** get_address_of_mInstance_6() { return &___mInstance_6; }
	inline void set_mInstance_6(WebCamARController_t3718642882 * value)
	{
		___mInstance_6 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_6), value);
	}

	inline static int32_t get_offset_of_mPadlock_7() { return static_cast<int32_t>(offsetof(WebCamARController_t3718642882_StaticFields, ___mPadlock_7)); }
	inline RuntimeObject * get_mPadlock_7() const { return ___mPadlock_7; }
	inline RuntimeObject ** get_address_of_mPadlock_7() { return &___mPadlock_7; }
	inline void set_mPadlock_7(RuntimeObject * value)
	{
		___mPadlock_7 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMARCONTROLLER_T3718642882_H
#ifndef KEYVALUEPAIR_2_T3864465891_H
#define KEYVALUEPAIR_2_T3864465891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Vuforia.WordBehaviour>>
struct  KeyValuePair_2_t3864465891 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_t1681537425 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3864465891, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3864465891, ___value_1)); }
	inline List_1_t1681537425 * get_value_1() const { return ___value_1; }
	inline List_1_t1681537425 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(List_1_t1681537425 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3864465891_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef ENUMERATOR_T2017297076_H
#define ENUMERATOR_T2017297076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct  Enumerator_t2017297076 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t128053199 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2017297076, ___l_0)); }
	inline List_1_t128053199 * get_l_0() const { return ___l_0; }
	inline List_1_t128053199 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t128053199 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2017297076, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2017297076, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2017297076, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2017297076_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef ENUMERATOR_T3570781302_H
#define ENUMERATOR_T3570781302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Vuforia.WordBehaviour>
struct  Enumerator_t3570781302 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1681537425 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	WordBehaviour_t209462683 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t3570781302, ___l_0)); }
	inline List_1_t1681537425 * get_l_0() const { return ___l_0; }
	inline List_1_t1681537425 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t1681537425 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3570781302, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3570781302, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3570781302, ___current_3)); }
	inline WordBehaviour_t209462683 * get_current_3() const { return ___current_3; }
	inline WordBehaviour_t209462683 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(WordBehaviour_t209462683 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3570781302_H
#ifndef ENUMERATOR_T182389941_H
#define ENUMERATOR_T182389941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Vuforia.Word>
struct  Enumerator_t182389941 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2588113360 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t182389941, ___l_0)); }
	inline List_1_t2588113360 * get_l_0() const { return ___l_0; }
	inline List_1_t2588113360 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2588113360 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t182389941, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t182389941, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t182389941, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T182389941_H
#ifndef ENUMERATOR_T2707125125_H
#define ENUMERATOR_T2707125125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Vuforia.WordResult>
struct  Enumerator_t2707125125 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t817881248 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	WordResult_t3640773802 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2707125125, ___l_0)); }
	inline List_1_t817881248 * get_l_0() const { return ___l_0; }
	inline List_1_t817881248 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t817881248 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2707125125, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2707125125, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2707125125, ___current_3)); }
	inline WordResult_t3640773802 * get_current_3() const { return ___current_3; }
	inline WordResult_t3640773802 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(WordResult_t3640773802 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2707125125_H
#ifndef KEYVALUEPAIR_2_T1495848181_H
#define KEYVALUEPAIR_2_T1495848181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordBehaviour>
struct  KeyValuePair_2_t1495848181 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	WordBehaviour_t209462683 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1495848181, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1495848181, ___value_1)); }
	inline WordBehaviour_t209462683 * get_value_1() const { return ___value_1; }
	inline WordBehaviour_t209462683 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(WordBehaviour_t209462683 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1495848181_H
#ifndef KEYVALUEPAIR_2_T71524366_H
#define KEYVALUEPAIR_2_T71524366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t71524366 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t71524366, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t71524366, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T71524366_H
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
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
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
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
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
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
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
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
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
#ifndef OBJECTTARGETIMPL_T3614635090_H
#define OBJECTTARGETIMPL_T3614635090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectTargetImpl
struct  ObjectTargetImpl_t3614635090  : public TrackableImpl_t3595316917
{
public:
	// Vuforia.IExtendedTracking Vuforia.ObjectTargetImpl::mExtTrackingImpl
	RuntimeObject* ___mExtTrackingImpl_2;
	// Vuforia.ITargetSize Vuforia.ObjectTargetImpl::mTargetSizeImpl
	RuntimeObject* ___mTargetSizeImpl_3;

public:
	inline static int32_t get_offset_of_mExtTrackingImpl_2() { return static_cast<int32_t>(offsetof(ObjectTargetImpl_t3614635090, ___mExtTrackingImpl_2)); }
	inline RuntimeObject* get_mExtTrackingImpl_2() const { return ___mExtTrackingImpl_2; }
	inline RuntimeObject** get_address_of_mExtTrackingImpl_2() { return &___mExtTrackingImpl_2; }
	inline void set_mExtTrackingImpl_2(RuntimeObject* value)
	{
		___mExtTrackingImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___mExtTrackingImpl_2), value);
	}

	inline static int32_t get_offset_of_mTargetSizeImpl_3() { return static_cast<int32_t>(offsetof(ObjectTargetImpl_t3614635090, ___mTargetSizeImpl_3)); }
	inline RuntimeObject* get_mTargetSizeImpl_3() const { return ___mTargetSizeImpl_3; }
	inline RuntimeObject** get_address_of_mTargetSizeImpl_3() { return &___mTargetSizeImpl_3; }
	inline void set_mTargetSizeImpl_3(RuntimeObject* value)
	{
		___mTargetSizeImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTargetSizeImpl_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTTARGETIMPL_T3614635090_H
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
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
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
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef STORAGETYPE_T857810839_H
#define STORAGETYPE_T857810839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaUnity/StorageType
struct  StorageType_t857810839 
{
public:
	// System.Int32 Vuforia.VuforiaUnity/StorageType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StorageType_t857810839, ___value___1)); }
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
#endif // STORAGETYPE_T857810839_H
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
#ifndef ENUMERATOR_T1052358789_H
#define ENUMERATOR_T1052358789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.WordBehaviour>
struct  Enumerator_t1052358789 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t3393143310 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t1495848181  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t1052358789, ___dictionary_0)); }
	inline Dictionary_2_t3393143310 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t3393143310 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t3393143310 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1052358789, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t1052358789, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1052358789, ___current_3)); }
	inline KeyValuePair_2_t1495848181  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t1495848181 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t1495848181  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1052358789_H
#ifndef ENUMERATOR_T3923002270_H
#define ENUMERATOR_T3923002270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct  Enumerator_t3923002270 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t1968819495 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t71524366  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t3923002270, ___dictionary_0)); }
	inline Dictionary_2_t1968819495 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1968819495 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1968819495 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3923002270, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t3923002270, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3923002270, ___current_3)); }
	inline KeyValuePair_2_t71524366  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t71524366 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t71524366  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3923002270_H
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
#ifndef WORDFILTERMODE_T1058214526_H
#define WORDFILTERMODE_T1058214526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordFilterMode
struct  WordFilterMode_t1058214526 
{
public:
	// System.Int32 Vuforia.WordFilterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WordFilterMode_t1058214526, ___value___1)); }
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
#endif // WORDFILTERMODE_T1058214526_H
#ifndef BOUNDS_T2266837910_H
#define BOUNDS_T2266837910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2266837910 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3722313464  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3722313464  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Center_0)); }
	inline Vector3_t3722313464  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3722313464 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3722313464  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Extents_1)); }
	inline Vector3_t3722313464  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3722313464 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3722313464  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T2266837910_H
#ifndef WORDTEMPLATEMODE_T435619688_H
#define WORDTEMPLATEMODE_T435619688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordTemplateMode
struct  WordTemplateMode_t435619688 
{
public:
	// System.Int32 Vuforia.WordTemplateMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WordTemplateMode_t435619688, ___value___1)); }
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
#endif // WORDTEMPLATEMODE_T435619688_H
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___1)); }
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
#endif // TEXTUREFORMAT_T2701165832_H
#ifndef VIDEOBACKGROUNDREFLECTION_T736962841_H
#define VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoBackgroundReflection
struct  VideoBackgroundReflection_t736962841 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/VideoBackgroundReflection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VideoBackgroundReflection_t736962841, ___value___1)); }
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
#endif // VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifndef ORIENTEDBOUNDINGBOX_T2769728497_H
#define ORIENTEDBOUNDINGBOX_T2769728497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.OrientedBoundingBox
struct  OrientedBoundingBox_t2769728497 
{
public:
	// UnityEngine.Vector2 Vuforia.OrientedBoundingBox::<Center>k__BackingField
	Vector2_t2156229523  ___U3CCenterU3Ek__BackingField_0;
	// UnityEngine.Vector2 Vuforia.OrientedBoundingBox::<HalfExtents>k__BackingField
	Vector2_t2156229523  ___U3CHalfExtentsU3Ek__BackingField_1;
	// System.Single Vuforia.OrientedBoundingBox::<Rotation>k__BackingField
	float ___U3CRotationU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCenterU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(OrientedBoundingBox_t2769728497, ___U3CCenterU3Ek__BackingField_0)); }
	inline Vector2_t2156229523  get_U3CCenterU3Ek__BackingField_0() const { return ___U3CCenterU3Ek__BackingField_0; }
	inline Vector2_t2156229523 * get_address_of_U3CCenterU3Ek__BackingField_0() { return &___U3CCenterU3Ek__BackingField_0; }
	inline void set_U3CCenterU3Ek__BackingField_0(Vector2_t2156229523  value)
	{
		___U3CCenterU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CHalfExtentsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(OrientedBoundingBox_t2769728497, ___U3CHalfExtentsU3Ek__BackingField_1)); }
	inline Vector2_t2156229523  get_U3CHalfExtentsU3Ek__BackingField_1() const { return ___U3CHalfExtentsU3Ek__BackingField_1; }
	inline Vector2_t2156229523 * get_address_of_U3CHalfExtentsU3Ek__BackingField_1() { return &___U3CHalfExtentsU3Ek__BackingField_1; }
	inline void set_U3CHalfExtentsU3Ek__BackingField_1(Vector2_t2156229523  value)
	{
		___U3CHalfExtentsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CRotationU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(OrientedBoundingBox_t2769728497, ___U3CRotationU3Ek__BackingField_2)); }
	inline float get_U3CRotationU3Ek__BackingField_2() const { return ___U3CRotationU3Ek__BackingField_2; }
	inline float* get_address_of_U3CRotationU3Ek__BackingField_2() { return &___U3CRotationU3Ek__BackingField_2; }
	inline void set_U3CRotationU3Ek__BackingField_2(float value)
	{
		___U3CRotationU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORIENTEDBOUNDINGBOX_T2769728497_H
#ifndef WORDPREFABCREATIONMODE_T3691738946_H
#define WORDPREFABCREATIONMODE_T3691738946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordPrefabCreationMode
struct  WordPrefabCreationMode_t3691738946 
{
public:
	// System.Int32 Vuforia.WordPrefabCreationMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WordPrefabCreationMode_t3691738946, ___value___1)); }
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
#endif // WORDPREFABCREATIONMODE_T3691738946_H
#ifndef DATASETEXTENDEDTRACKINGIMPL_T3413727792_H
#define DATASETEXTENDEDTRACKINGIMPL_T3413727792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSetExtendedTrackingImpl
struct  DataSetExtendedTrackingImpl_t3413727792  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.DataSetExtendedTrackingImpl::mId
	int32_t ___mId_0;
	// System.IntPtr Vuforia.DataSetExtendedTrackingImpl::mDataSetPtr
	intptr_t ___mDataSetPtr_1;

public:
	inline static int32_t get_offset_of_mId_0() { return static_cast<int32_t>(offsetof(DataSetExtendedTrackingImpl_t3413727792, ___mId_0)); }
	inline int32_t get_mId_0() const { return ___mId_0; }
	inline int32_t* get_address_of_mId_0() { return &___mId_0; }
	inline void set_mId_0(int32_t value)
	{
		___mId_0 = value;
	}

	inline static int32_t get_offset_of_mDataSetPtr_1() { return static_cast<int32_t>(offsetof(DataSetExtendedTrackingImpl_t3413727792, ___mDataSetPtr_1)); }
	inline intptr_t get_mDataSetPtr_1() const { return ___mDataSetPtr_1; }
	inline intptr_t* get_address_of_mDataSetPtr_1() { return &___mDataSetPtr_1; }
	inline void set_mDataSetPtr_1(intptr_t value)
	{
		___mDataSetPtr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASETEXTENDEDTRACKINGIMPL_T3413727792_H
#ifndef DATASETOBJECTTARGETIMPL_T2835536742_H
#define DATASETOBJECTTARGETIMPL_T2835536742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSetObjectTargetImpl
struct  DataSetObjectTargetImpl_t2835536742  : public ObjectTargetImpl_t3614635090
{
public:
	// Vuforia.DataSet Vuforia.DataSetObjectTargetImpl::mDataSet
	DataSet_t3286034874 * ___mDataSet_4;

public:
	inline static int32_t get_offset_of_mDataSet_4() { return static_cast<int32_t>(offsetof(DataSetObjectTargetImpl_t2835536742, ___mDataSet_4)); }
	inline DataSet_t3286034874 * get_mDataSet_4() const { return ___mDataSet_4; }
	inline DataSet_t3286034874 ** get_address_of_mDataSet_4() { return &___mDataSet_4; }
	inline void set_mDataSet_4(DataSet_t3286034874 * value)
	{
		___mDataSet_4 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSet_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASETOBJECTTARGETIMPL_T2835536742_H
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
#ifndef DISABLEDSETTARGETSIZE_T3520378128_H
#define DISABLEDSETTARGETSIZE_T3520378128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DisabledSetTargetSize
struct  DisabledSetTargetSize_t3520378128  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Vuforia.DisabledSetTargetSize::mSize
	Vector3_t3722313464  ___mSize_0;

public:
	inline static int32_t get_offset_of_mSize_0() { return static_cast<int32_t>(offsetof(DisabledSetTargetSize_t3520378128, ___mSize_0)); }
	inline Vector3_t3722313464  get_mSize_0() const { return ___mSize_0; }
	inline Vector3_t3722313464 * get_address_of_mSize_0() { return &___mSize_0; }
	inline void set_mSize_0(Vector3_t3722313464  value)
	{
		___mSize_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISABLEDSETTARGETSIZE_T3520378128_H
#ifndef VIDEOTEXTUREINFO_T1805965052_H
#define VIDEOTEXTUREINFO_T1805965052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoTextureInfo
#pragma pack(push, tp, 1)
struct  VideoTextureInfo_t1805965052 
{
public:
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoTextureInfo::textureSize
	Vec2I_t3527036565  ___textureSize_0;
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoTextureInfo::imageSize
	Vec2I_t3527036565  ___imageSize_1;

public:
	inline static int32_t get_offset_of_textureSize_0() { return static_cast<int32_t>(offsetof(VideoTextureInfo_t1805965052, ___textureSize_0)); }
	inline Vec2I_t3527036565  get_textureSize_0() const { return ___textureSize_0; }
	inline Vec2I_t3527036565 * get_address_of_textureSize_0() { return &___textureSize_0; }
	inline void set_textureSize_0(Vec2I_t3527036565  value)
	{
		___textureSize_0 = value;
	}

	inline static int32_t get_offset_of_imageSize_1() { return static_cast<int32_t>(offsetof(VideoTextureInfo_t1805965052, ___imageSize_1)); }
	inline Vec2I_t3527036565  get_imageSize_1() const { return ___imageSize_1; }
	inline Vec2I_t3527036565 * get_address_of_imageSize_1() { return &___imageSize_1; }
	inline void set_imageSize_1(Vec2I_t3527036565  value)
	{
		___imageSize_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOTEXTUREINFO_T1805965052_H
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
#ifndef VIDEOBGCFGDATA_T994527297_H
#define VIDEOBGCFGDATA_T994527297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoBGCfgData
#pragma pack(push, tp, 1)
struct  VideoBGCfgData_t994527297 
{
public:
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoBGCfgData::position
	Vec2I_t3527036565  ___position_0;
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoBGCfgData::size
	Vec2I_t3527036565  ___size_1;
	// System.Int32 Vuforia.VuforiaRenderer/VideoBGCfgData::enabled
	int32_t ___enabled_2;
	// System.Int32 Vuforia.VuforiaRenderer/VideoBGCfgData::reflectionInteger
	int32_t ___reflectionInteger_3;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(VideoBGCfgData_t994527297, ___position_0)); }
	inline Vec2I_t3527036565  get_position_0() const { return ___position_0; }
	inline Vec2I_t3527036565 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vec2I_t3527036565  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(VideoBGCfgData_t994527297, ___size_1)); }
	inline Vec2I_t3527036565  get_size_1() const { return ___size_1; }
	inline Vec2I_t3527036565 * get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(Vec2I_t3527036565  value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_enabled_2() { return static_cast<int32_t>(offsetof(VideoBGCfgData_t994527297, ___enabled_2)); }
	inline int32_t get_enabled_2() const { return ___enabled_2; }
	inline int32_t* get_address_of_enabled_2() { return &___enabled_2; }
	inline void set_enabled_2(int32_t value)
	{
		___enabled_2 = value;
	}

	inline static int32_t get_offset_of_reflectionInteger_3() { return static_cast<int32_t>(offsetof(VideoBGCfgData_t994527297, ___reflectionInteger_3)); }
	inline int32_t get_reflectionInteger_3() const { return ___reflectionInteger_3; }
	inline int32_t* get_address_of_reflectionInteger_3() { return &___reflectionInteger_3; }
	inline void set_reflectionInteger_3(int32_t value)
	{
		___reflectionInteger_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBGCFGDATA_T994527297_H
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
#ifndef WORLDCENTERMODE_T3672819471_H
#define WORLDCENTERMODE_T3672819471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaARController/WorldCenterMode
struct  WorldCenterMode_t3672819471 
{
public:
	// System.Int32 Vuforia.VuforiaARController/WorldCenterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WorldCenterMode_t3672819471, ___value___1)); }
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
#endif // WORLDCENTERMODE_T3672819471_H
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
#ifndef IMAGEHEADERDATA_T3550119865_H
#define IMAGEHEADERDATA_T3550119865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/ImageHeaderData
#pragma pack(push, tp, 1)
struct  ImageHeaderData_t3550119865 
{
public:
	// System.IntPtr Vuforia.TrackerData/ImageHeaderData::data
	intptr_t ___data_0;
	// System.Int32 Vuforia.TrackerData/ImageHeaderData::width
	int32_t ___width_1;
	// System.Int32 Vuforia.TrackerData/ImageHeaderData::height
	int32_t ___height_2;
	// System.Int32 Vuforia.TrackerData/ImageHeaderData::stride
	int32_t ___stride_3;
	// System.Int32 Vuforia.TrackerData/ImageHeaderData::bufferWidth
	int32_t ___bufferWidth_4;
	// System.Int32 Vuforia.TrackerData/ImageHeaderData::bufferHeight
	int32_t ___bufferHeight_5;
	// System.Int32 Vuforia.TrackerData/ImageHeaderData::format
	int32_t ___format_6;
	// System.Int32 Vuforia.TrackerData/ImageHeaderData::reallocate
	int32_t ___reallocate_7;
	// System.Int32 Vuforia.TrackerData/ImageHeaderData::updated
	int32_t ___updated_8;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(ImageHeaderData_t3550119865, ___data_0)); }
	inline intptr_t get_data_0() const { return ___data_0; }
	inline intptr_t* get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(intptr_t value)
	{
		___data_0 = value;
	}

	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(ImageHeaderData_t3550119865, ___width_1)); }
	inline int32_t get_width_1() const { return ___width_1; }
	inline int32_t* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(int32_t value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(ImageHeaderData_t3550119865, ___height_2)); }
	inline int32_t get_height_2() const { return ___height_2; }
	inline int32_t* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(int32_t value)
	{
		___height_2 = value;
	}

	inline static int32_t get_offset_of_stride_3() { return static_cast<int32_t>(offsetof(ImageHeaderData_t3550119865, ___stride_3)); }
	inline int32_t get_stride_3() const { return ___stride_3; }
	inline int32_t* get_address_of_stride_3() { return &___stride_3; }
	inline void set_stride_3(int32_t value)
	{
		___stride_3 = value;
	}

	inline static int32_t get_offset_of_bufferWidth_4() { return static_cast<int32_t>(offsetof(ImageHeaderData_t3550119865, ___bufferWidth_4)); }
	inline int32_t get_bufferWidth_4() const { return ___bufferWidth_4; }
	inline int32_t* get_address_of_bufferWidth_4() { return &___bufferWidth_4; }
	inline void set_bufferWidth_4(int32_t value)
	{
		___bufferWidth_4 = value;
	}

	inline static int32_t get_offset_of_bufferHeight_5() { return static_cast<int32_t>(offsetof(ImageHeaderData_t3550119865, ___bufferHeight_5)); }
	inline int32_t get_bufferHeight_5() const { return ___bufferHeight_5; }
	inline int32_t* get_address_of_bufferHeight_5() { return &___bufferHeight_5; }
	inline void set_bufferHeight_5(int32_t value)
	{
		___bufferHeight_5 = value;
	}

	inline static int32_t get_offset_of_format_6() { return static_cast<int32_t>(offsetof(ImageHeaderData_t3550119865, ___format_6)); }
	inline int32_t get_format_6() const { return ___format_6; }
	inline int32_t* get_address_of_format_6() { return &___format_6; }
	inline void set_format_6(int32_t value)
	{
		___format_6 = value;
	}

	inline static int32_t get_offset_of_reallocate_7() { return static_cast<int32_t>(offsetof(ImageHeaderData_t3550119865, ___reallocate_7)); }
	inline int32_t get_reallocate_7() const { return ___reallocate_7; }
	inline int32_t* get_address_of_reallocate_7() { return &___reallocate_7; }
	inline void set_reallocate_7(int32_t value)
	{
		___reallocate_7 = value;
	}

	inline static int32_t get_offset_of_updated_8() { return static_cast<int32_t>(offsetof(ImageHeaderData_t3550119865, ___updated_8)); }
	inline int32_t get_updated_8() const { return ___updated_8; }
	inline int32_t* get_address_of_updated_8() { return &___updated_8; }
	inline void set_updated_8(int32_t value)
	{
		___updated_8 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGEHEADERDATA_T3550119865_H
#ifndef ASYNCOPERATION_T1445031843_H
#define ASYNCOPERATION_T1445031843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t1445031843  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_t1617499438 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_completeCallback_1)); }
	inline Action_1_t1617499438 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_t1617499438 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_t1617499438 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T1445031843_H
#ifndef USERAUTHORIZATION_T2950000085_H
#define USERAUTHORIZATION_T2950000085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UserAuthorization
struct  UserAuthorization_t2950000085 
{
public:
	// System.Int32 UnityEngine.UserAuthorization::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UserAuthorization_t2950000085, ___value___1)); }
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
#endif // USERAUTHORIZATION_T2950000085_H
#ifndef FRAMESTATE_T2717258284_H
#define FRAMESTATE_T2717258284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/FrameState
#pragma pack(push, tp, 1)
struct  FrameState_t2717258284 
{
public:
	// System.IntPtr Vuforia.TrackerData/FrameState::trackableDataArray
	intptr_t ___trackableDataArray_0;
	// System.IntPtr Vuforia.TrackerData/FrameState::vbDataArray
	intptr_t ___vbDataArray_1;
	// System.IntPtr Vuforia.TrackerData/FrameState::wordResultArray
	intptr_t ___wordResultArray_2;
	// System.IntPtr Vuforia.TrackerData/FrameState::newWordDataArray
	intptr_t ___newWordDataArray_3;
	// System.IntPtr Vuforia.TrackerData/FrameState::vuMarkResultArray
	intptr_t ___vuMarkResultArray_4;
	// System.IntPtr Vuforia.TrackerData/FrameState::newVuMarkDataArray
	intptr_t ___newVuMarkDataArray_5;
	// System.IntPtr Vuforia.TrackerData/FrameState::illuminationData
	intptr_t ___illuminationData_6;
	// System.Int32 Vuforia.TrackerData/FrameState::numTrackableResults
	int32_t ___numTrackableResults_7;
	// System.Int32 Vuforia.TrackerData/FrameState::numVirtualButtonResults
	int32_t ___numVirtualButtonResults_8;
	// System.Int32 Vuforia.TrackerData/FrameState::frameIndex
	int32_t ___frameIndex_9;
	// System.Int32 Vuforia.TrackerData/FrameState::numWordResults
	int32_t ___numWordResults_10;
	// System.Int32 Vuforia.TrackerData/FrameState::numNewWords
	int32_t ___numNewWords_11;
	// System.Int32 Vuforia.TrackerData/FrameState::numVuMarkResults
	int32_t ___numVuMarkResults_12;
	// System.Int32 Vuforia.TrackerData/FrameState::numNewVuMarks
	int32_t ___numNewVuMarks_13;
	// System.Int32 Vuforia.TrackerData/FrameState::deviceTrackableId
	int32_t ___deviceTrackableId_14;

public:
	inline static int32_t get_offset_of_trackableDataArray_0() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___trackableDataArray_0)); }
	inline intptr_t get_trackableDataArray_0() const { return ___trackableDataArray_0; }
	inline intptr_t* get_address_of_trackableDataArray_0() { return &___trackableDataArray_0; }
	inline void set_trackableDataArray_0(intptr_t value)
	{
		___trackableDataArray_0 = value;
	}

	inline static int32_t get_offset_of_vbDataArray_1() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___vbDataArray_1)); }
	inline intptr_t get_vbDataArray_1() const { return ___vbDataArray_1; }
	inline intptr_t* get_address_of_vbDataArray_1() { return &___vbDataArray_1; }
	inline void set_vbDataArray_1(intptr_t value)
	{
		___vbDataArray_1 = value;
	}

	inline static int32_t get_offset_of_wordResultArray_2() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___wordResultArray_2)); }
	inline intptr_t get_wordResultArray_2() const { return ___wordResultArray_2; }
	inline intptr_t* get_address_of_wordResultArray_2() { return &___wordResultArray_2; }
	inline void set_wordResultArray_2(intptr_t value)
	{
		___wordResultArray_2 = value;
	}

	inline static int32_t get_offset_of_newWordDataArray_3() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___newWordDataArray_3)); }
	inline intptr_t get_newWordDataArray_3() const { return ___newWordDataArray_3; }
	inline intptr_t* get_address_of_newWordDataArray_3() { return &___newWordDataArray_3; }
	inline void set_newWordDataArray_3(intptr_t value)
	{
		___newWordDataArray_3 = value;
	}

	inline static int32_t get_offset_of_vuMarkResultArray_4() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___vuMarkResultArray_4)); }
	inline intptr_t get_vuMarkResultArray_4() const { return ___vuMarkResultArray_4; }
	inline intptr_t* get_address_of_vuMarkResultArray_4() { return &___vuMarkResultArray_4; }
	inline void set_vuMarkResultArray_4(intptr_t value)
	{
		___vuMarkResultArray_4 = value;
	}

	inline static int32_t get_offset_of_newVuMarkDataArray_5() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___newVuMarkDataArray_5)); }
	inline intptr_t get_newVuMarkDataArray_5() const { return ___newVuMarkDataArray_5; }
	inline intptr_t* get_address_of_newVuMarkDataArray_5() { return &___newVuMarkDataArray_5; }
	inline void set_newVuMarkDataArray_5(intptr_t value)
	{
		___newVuMarkDataArray_5 = value;
	}

	inline static int32_t get_offset_of_illuminationData_6() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___illuminationData_6)); }
	inline intptr_t get_illuminationData_6() const { return ___illuminationData_6; }
	inline intptr_t* get_address_of_illuminationData_6() { return &___illuminationData_6; }
	inline void set_illuminationData_6(intptr_t value)
	{
		___illuminationData_6 = value;
	}

	inline static int32_t get_offset_of_numTrackableResults_7() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___numTrackableResults_7)); }
	inline int32_t get_numTrackableResults_7() const { return ___numTrackableResults_7; }
	inline int32_t* get_address_of_numTrackableResults_7() { return &___numTrackableResults_7; }
	inline void set_numTrackableResults_7(int32_t value)
	{
		___numTrackableResults_7 = value;
	}

	inline static int32_t get_offset_of_numVirtualButtonResults_8() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___numVirtualButtonResults_8)); }
	inline int32_t get_numVirtualButtonResults_8() const { return ___numVirtualButtonResults_8; }
	inline int32_t* get_address_of_numVirtualButtonResults_8() { return &___numVirtualButtonResults_8; }
	inline void set_numVirtualButtonResults_8(int32_t value)
	{
		___numVirtualButtonResults_8 = value;
	}

	inline static int32_t get_offset_of_frameIndex_9() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___frameIndex_9)); }
	inline int32_t get_frameIndex_9() const { return ___frameIndex_9; }
	inline int32_t* get_address_of_frameIndex_9() { return &___frameIndex_9; }
	inline void set_frameIndex_9(int32_t value)
	{
		___frameIndex_9 = value;
	}

	inline static int32_t get_offset_of_numWordResults_10() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___numWordResults_10)); }
	inline int32_t get_numWordResults_10() const { return ___numWordResults_10; }
	inline int32_t* get_address_of_numWordResults_10() { return &___numWordResults_10; }
	inline void set_numWordResults_10(int32_t value)
	{
		___numWordResults_10 = value;
	}

	inline static int32_t get_offset_of_numNewWords_11() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___numNewWords_11)); }
	inline int32_t get_numNewWords_11() const { return ___numNewWords_11; }
	inline int32_t* get_address_of_numNewWords_11() { return &___numNewWords_11; }
	inline void set_numNewWords_11(int32_t value)
	{
		___numNewWords_11 = value;
	}

	inline static int32_t get_offset_of_numVuMarkResults_12() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___numVuMarkResults_12)); }
	inline int32_t get_numVuMarkResults_12() const { return ___numVuMarkResults_12; }
	inline int32_t* get_address_of_numVuMarkResults_12() { return &___numVuMarkResults_12; }
	inline void set_numVuMarkResults_12(int32_t value)
	{
		___numVuMarkResults_12 = value;
	}

	inline static int32_t get_offset_of_numNewVuMarks_13() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___numNewVuMarks_13)); }
	inline int32_t get_numNewVuMarks_13() const { return ___numNewVuMarks_13; }
	inline int32_t* get_address_of_numNewVuMarks_13() { return &___numNewVuMarks_13; }
	inline void set_numNewVuMarks_13(int32_t value)
	{
		___numNewVuMarks_13 = value;
	}

	inline static int32_t get_offset_of_deviceTrackableId_14() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___deviceTrackableId_14)); }
	inline int32_t get_deviceTrackableId_14() const { return ___deviceTrackableId_14; }
	inline int32_t* get_address_of_deviceTrackableId_14() { return &___deviceTrackableId_14; }
	inline void set_deviceTrackableId_14(int32_t value)
	{
		___deviceTrackableId_14 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMESTATE_T2717258284_H
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
#ifndef INITERROR_T3420749710_H
#define INITERROR_T3420749710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaUnity/InitError
struct  InitError_t3420749710 
{
public:
	// System.Int32 Vuforia.VuforiaUnity/InitError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InitError_t3420749710, ___value___1)); }
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
#endif // INITERROR_T3420749710_H
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
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
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
#endif // DATETIMEKIND_T3468814247_H
#ifndef INSTANCEIDTYPE_T420283664_H
#define INSTANCEIDTYPE_T420283664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.InstanceIdType
struct  InstanceIdType_t420283664 
{
public:
	// System.Int32 Vuforia.InstanceIdType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InstanceIdType_t420283664, ___value___1)); }
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
#endif // INSTANCEIDTYPE_T420283664_H
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
#ifndef ENUMERATOR_T2086727927_H
#define ENUMERATOR_T2086727927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t2086727927 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t132545152 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2530217319  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___dictionary_0)); }
	inline Dictionary_2_t132545152 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t132545152 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t132545152 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___current_3)); }
	inline KeyValuePair_2_t2530217319  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2530217319 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2530217319  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2086727927_H
#ifndef ENUMERATOR_T3420976499_H
#define ENUMERATOR_T3420976499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<Vuforia.WordBehaviour>>
struct  Enumerator_t3420976499 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t1466793724 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t3864465891  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t3420976499, ___dictionary_0)); }
	inline Dictionary_2_t1466793724 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1466793724 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1466793724 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3420976499, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t3420976499, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3420976499, ___current_3)); }
	inline KeyValuePair_2_t3864465891  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t3864465891 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t3864465891  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3420976499_H
#ifndef DATASETTARGETSIZE_T648464127_H
#define DATASETTARGETSIZE_T648464127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSetTargetSize
struct  DataSetTargetSize_t648464127  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Vuforia.DataSetTargetSize::mSize
	Vector3_t3722313464  ___mSize_0;
	// System.String Vuforia.DataSetTargetSize::mName
	String_t* ___mName_1;
	// Vuforia.DataSet Vuforia.DataSetTargetSize::mDataSet
	DataSet_t3286034874 * ___mDataSet_2;

public:
	inline static int32_t get_offset_of_mSize_0() { return static_cast<int32_t>(offsetof(DataSetTargetSize_t648464127, ___mSize_0)); }
	inline Vector3_t3722313464  get_mSize_0() const { return ___mSize_0; }
	inline Vector3_t3722313464 * get_address_of_mSize_0() { return &___mSize_0; }
	inline void set_mSize_0(Vector3_t3722313464  value)
	{
		___mSize_0 = value;
	}

	inline static int32_t get_offset_of_mName_1() { return static_cast<int32_t>(offsetof(DataSetTargetSize_t648464127, ___mName_1)); }
	inline String_t* get_mName_1() const { return ___mName_1; }
	inline String_t** get_address_of_mName_1() { return &___mName_1; }
	inline void set_mName_1(String_t* value)
	{
		___mName_1 = value;
		Il2CppCodeGenWriteBarrier((&___mName_1), value);
	}

	inline static int32_t get_offset_of_mDataSet_2() { return static_cast<int32_t>(offsetof(DataSetTargetSize_t648464127, ___mDataSet_2)); }
	inline DataSet_t3286034874 * get_mDataSet_2() const { return ___mDataSet_2; }
	inline DataSet_t3286034874 ** get_address_of_mDataSet_2() { return &___mDataSet_2; }
	inline void set_mDataSet_2(DataSet_t3286034874 * value)
	{
		___mDataSet_2 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSet_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASETTARGETSIZE_T648464127_H
#ifndef WORDRESULTIMPL_T709252498_H
#define WORDRESULTIMPL_T709252498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordResultImpl
struct  WordResultImpl_t709252498  : public WordResult_t3640773802
{
public:
	// Vuforia.OrientedBoundingBox Vuforia.WordResultImpl::mObb
	OrientedBoundingBox_t2769728497  ___mObb_0;
	// UnityEngine.Vector3 Vuforia.WordResultImpl::mPosition
	Vector3_t3722313464  ___mPosition_1;
	// UnityEngine.Quaternion Vuforia.WordResultImpl::mOrientation
	Quaternion_t2301928331  ___mOrientation_2;
	// Vuforia.Word Vuforia.WordResultImpl::mWord
	RuntimeObject* ___mWord_3;
	// Vuforia.TrackableBehaviour/Status Vuforia.WordResultImpl::mStatus
	int32_t ___mStatus_4;

public:
	inline static int32_t get_offset_of_mObb_0() { return static_cast<int32_t>(offsetof(WordResultImpl_t709252498, ___mObb_0)); }
	inline OrientedBoundingBox_t2769728497  get_mObb_0() const { return ___mObb_0; }
	inline OrientedBoundingBox_t2769728497 * get_address_of_mObb_0() { return &___mObb_0; }
	inline void set_mObb_0(OrientedBoundingBox_t2769728497  value)
	{
		___mObb_0 = value;
	}

	inline static int32_t get_offset_of_mPosition_1() { return static_cast<int32_t>(offsetof(WordResultImpl_t709252498, ___mPosition_1)); }
	inline Vector3_t3722313464  get_mPosition_1() const { return ___mPosition_1; }
	inline Vector3_t3722313464 * get_address_of_mPosition_1() { return &___mPosition_1; }
	inline void set_mPosition_1(Vector3_t3722313464  value)
	{
		___mPosition_1 = value;
	}

	inline static int32_t get_offset_of_mOrientation_2() { return static_cast<int32_t>(offsetof(WordResultImpl_t709252498, ___mOrientation_2)); }
	inline Quaternion_t2301928331  get_mOrientation_2() const { return ___mOrientation_2; }
	inline Quaternion_t2301928331 * get_address_of_mOrientation_2() { return &___mOrientation_2; }
	inline void set_mOrientation_2(Quaternion_t2301928331  value)
	{
		___mOrientation_2 = value;
	}

	inline static int32_t get_offset_of_mWord_3() { return static_cast<int32_t>(offsetof(WordResultImpl_t709252498, ___mWord_3)); }
	inline RuntimeObject* get_mWord_3() const { return ___mWord_3; }
	inline RuntimeObject** get_address_of_mWord_3() { return &___mWord_3; }
	inline void set_mWord_3(RuntimeObject* value)
	{
		___mWord_3 = value;
		Il2CppCodeGenWriteBarrier((&___mWord_3), value);
	}

	inline static int32_t get_offset_of_mStatus_4() { return static_cast<int32_t>(offsetof(WordResultImpl_t709252498, ___mStatus_4)); }
	inline int32_t get_mStatus_4() const { return ___mStatus_4; }
	inline int32_t* get_address_of_mStatus_4() { return &___mStatus_4; }
	inline void set_mStatus_4(int32_t value)
	{
		___mStatus_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDRESULTIMPL_T709252498_H
#ifndef VUMARKTARGETIMPL_T1052843922_H
#define VUMARKTARGETIMPL_T1052843922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuMarkTargetImpl
struct  VuMarkTargetImpl_t1052843922  : public ObjectTargetImpl_t3614635090
{
public:
	// Vuforia.VuMarkTemplateImpl Vuforia.VuMarkTargetImpl::mVuMarkTemplate
	VuMarkTemplateImpl_t667343433 * ___mVuMarkTemplate_4;
	// Vuforia.InstanceIdImpl Vuforia.VuMarkTargetImpl::mInstanceId
	InstanceIdImpl_t2824054591 * ___mInstanceId_5;
	// Vuforia.Image Vuforia.VuMarkTargetImpl::mInstanceImage
	Image_t745056343 * ___mInstanceImage_6;
	// Vuforia.TrackerData/ImageHeaderData Vuforia.VuMarkTargetImpl::mInstanceImageHeader
	ImageHeaderData_t3550119865  ___mInstanceImageHeader_7;

public:
	inline static int32_t get_offset_of_mVuMarkTemplate_4() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t1052843922, ___mVuMarkTemplate_4)); }
	inline VuMarkTemplateImpl_t667343433 * get_mVuMarkTemplate_4() const { return ___mVuMarkTemplate_4; }
	inline VuMarkTemplateImpl_t667343433 ** get_address_of_mVuMarkTemplate_4() { return &___mVuMarkTemplate_4; }
	inline void set_mVuMarkTemplate_4(VuMarkTemplateImpl_t667343433 * value)
	{
		___mVuMarkTemplate_4 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkTemplate_4), value);
	}

	inline static int32_t get_offset_of_mInstanceId_5() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t1052843922, ___mInstanceId_5)); }
	inline InstanceIdImpl_t2824054591 * get_mInstanceId_5() const { return ___mInstanceId_5; }
	inline InstanceIdImpl_t2824054591 ** get_address_of_mInstanceId_5() { return &___mInstanceId_5; }
	inline void set_mInstanceId_5(InstanceIdImpl_t2824054591 * value)
	{
		___mInstanceId_5 = value;
		Il2CppCodeGenWriteBarrier((&___mInstanceId_5), value);
	}

	inline static int32_t get_offset_of_mInstanceImage_6() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t1052843922, ___mInstanceImage_6)); }
	inline Image_t745056343 * get_mInstanceImage_6() const { return ___mInstanceImage_6; }
	inline Image_t745056343 ** get_address_of_mInstanceImage_6() { return &___mInstanceImage_6; }
	inline void set_mInstanceImage_6(Image_t745056343 * value)
	{
		___mInstanceImage_6 = value;
		Il2CppCodeGenWriteBarrier((&___mInstanceImage_6), value);
	}

	inline static int32_t get_offset_of_mInstanceImageHeader_7() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t1052843922, ___mInstanceImageHeader_7)); }
	inline ImageHeaderData_t3550119865  get_mInstanceImageHeader_7() const { return ___mInstanceImageHeader_7; }
	inline ImageHeaderData_t3550119865 * get_address_of_mInstanceImageHeader_7() { return &___mInstanceImageHeader_7; }
	inline void set_mInstanceImageHeader_7(ImageHeaderData_t3550119865  value)
	{
		___mInstanceImageHeader_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKTARGETIMPL_T1052843922_H
#ifndef VUMARKTEMPLATEIMPL_T667343433_H
#define VUMARKTEMPLATEIMPL_T667343433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuMarkTemplateImpl
struct  VuMarkTemplateImpl_t667343433  : public DataSetObjectTargetImpl_t2835536742
{
public:
	// System.String Vuforia.VuMarkTemplateImpl::mUserData
	String_t* ___mUserData_5;
	// UnityEngine.Vector2 Vuforia.VuMarkTemplateImpl::mOrigin
	Vector2_t2156229523  ___mOrigin_6;
	// System.Boolean Vuforia.VuMarkTemplateImpl::mTrackingFromRuntimeAppearance
	bool ___mTrackingFromRuntimeAppearance_7;

public:
	inline static int32_t get_offset_of_mUserData_5() { return static_cast<int32_t>(offsetof(VuMarkTemplateImpl_t667343433, ___mUserData_5)); }
	inline String_t* get_mUserData_5() const { return ___mUserData_5; }
	inline String_t** get_address_of_mUserData_5() { return &___mUserData_5; }
	inline void set_mUserData_5(String_t* value)
	{
		___mUserData_5 = value;
		Il2CppCodeGenWriteBarrier((&___mUserData_5), value);
	}

	inline static int32_t get_offset_of_mOrigin_6() { return static_cast<int32_t>(offsetof(VuMarkTemplateImpl_t667343433, ___mOrigin_6)); }
	inline Vector2_t2156229523  get_mOrigin_6() const { return ___mOrigin_6; }
	inline Vector2_t2156229523 * get_address_of_mOrigin_6() { return &___mOrigin_6; }
	inline void set_mOrigin_6(Vector2_t2156229523  value)
	{
		___mOrigin_6 = value;
	}

	inline static int32_t get_offset_of_mTrackingFromRuntimeAppearance_7() { return static_cast<int32_t>(offsetof(VuMarkTemplateImpl_t667343433, ___mTrackingFromRuntimeAppearance_7)); }
	inline bool get_mTrackingFromRuntimeAppearance_7() const { return ___mTrackingFromRuntimeAppearance_7; }
	inline bool* get_address_of_mTrackingFromRuntimeAppearance_7() { return &___mTrackingFromRuntimeAppearance_7; }
	inline void set_mTrackingFromRuntimeAppearance_7(bool value)
	{
		___mTrackingFromRuntimeAppearance_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKTEMPLATEIMPL_T667343433_H
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
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
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
#ifndef VUMARKSETTARGETSIZE_T4198822840_H
#define VUMARKSETTARGETSIZE_T4198822840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuMarkTargetImpl/VuMarkSetTargetSize
struct  VuMarkSetTargetSize_t4198822840  : public DisabledSetTargetSize_t3520378128
{
public:
	// Vuforia.VuMarkTemplate Vuforia.VuMarkTargetImpl/VuMarkSetTargetSize::mTemplate
	RuntimeObject* ___mTemplate_1;

public:
	inline static int32_t get_offset_of_mTemplate_1() { return static_cast<int32_t>(offsetof(VuMarkSetTargetSize_t4198822840, ___mTemplate_1)); }
	inline RuntimeObject* get_mTemplate_1() const { return ___mTemplate_1; }
	inline RuntimeObject** get_address_of_mTemplate_1() { return &___mTemplate_1; }
	inline void set_mTemplate_1(RuntimeObject* value)
	{
		___mTemplate_1 = value;
		Il2CppCodeGenWriteBarrier((&___mTemplate_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKSETTARGETSIZE_T4198822840_H
#ifndef INSTANCEIDIMPL_T2824054591_H
#define INSTANCEIDIMPL_T2824054591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.InstanceIdImpl
struct  InstanceIdImpl_t2824054591  : public RuntimeObject
{
public:
	// Vuforia.InstanceIdType Vuforia.InstanceIdImpl::mDataType
	int32_t ___mDataType_0;
	// System.Byte[] Vuforia.InstanceIdImpl::mBuffer
	ByteU5BU5D_t4116647657* ___mBuffer_1;
	// System.UInt64 Vuforia.InstanceIdImpl::mNumericValue
	uint64_t ___mNumericValue_2;
	// System.UInt32 Vuforia.InstanceIdImpl::mDataLength
	uint32_t ___mDataLength_3;
	// System.String Vuforia.InstanceIdImpl::mCachedStringValue
	String_t* ___mCachedStringValue_4;

public:
	inline static int32_t get_offset_of_mDataType_0() { return static_cast<int32_t>(offsetof(InstanceIdImpl_t2824054591, ___mDataType_0)); }
	inline int32_t get_mDataType_0() const { return ___mDataType_0; }
	inline int32_t* get_address_of_mDataType_0() { return &___mDataType_0; }
	inline void set_mDataType_0(int32_t value)
	{
		___mDataType_0 = value;
	}

	inline static int32_t get_offset_of_mBuffer_1() { return static_cast<int32_t>(offsetof(InstanceIdImpl_t2824054591, ___mBuffer_1)); }
	inline ByteU5BU5D_t4116647657* get_mBuffer_1() const { return ___mBuffer_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_mBuffer_1() { return &___mBuffer_1; }
	inline void set_mBuffer_1(ByteU5BU5D_t4116647657* value)
	{
		___mBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___mBuffer_1), value);
	}

	inline static int32_t get_offset_of_mNumericValue_2() { return static_cast<int32_t>(offsetof(InstanceIdImpl_t2824054591, ___mNumericValue_2)); }
	inline uint64_t get_mNumericValue_2() const { return ___mNumericValue_2; }
	inline uint64_t* get_address_of_mNumericValue_2() { return &___mNumericValue_2; }
	inline void set_mNumericValue_2(uint64_t value)
	{
		___mNumericValue_2 = value;
	}

	inline static int32_t get_offset_of_mDataLength_3() { return static_cast<int32_t>(offsetof(InstanceIdImpl_t2824054591, ___mDataLength_3)); }
	inline uint32_t get_mDataLength_3() const { return ___mDataLength_3; }
	inline uint32_t* get_address_of_mDataLength_3() { return &___mDataLength_3; }
	inline void set_mDataLength_3(uint32_t value)
	{
		___mDataLength_3 = value;
	}

	inline static int32_t get_offset_of_mCachedStringValue_4() { return static_cast<int32_t>(offsetof(InstanceIdImpl_t2824054591, ___mCachedStringValue_4)); }
	inline String_t* get_mCachedStringValue_4() const { return ___mCachedStringValue_4; }
	inline String_t** get_address_of_mCachedStringValue_4() { return &___mCachedStringValue_4; }
	inline void set_mCachedStringValue_4(String_t* value)
	{
		___mCachedStringValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___mCachedStringValue_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEIDIMPL_T2824054591_H
#ifndef IMAGE_T745056343_H
#define IMAGE_T745056343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Image
struct  Image_t745056343  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.Image::mWidth
	int32_t ___mWidth_0;
	// System.Int32 Vuforia.Image::mHeight
	int32_t ___mHeight_1;
	// System.Int32 Vuforia.Image::mStride
	int32_t ___mStride_2;
	// System.Int32 Vuforia.Image::mBufferWidth
	int32_t ___mBufferWidth_3;
	// System.Int32 Vuforia.Image::mBufferHeight
	int32_t ___mBufferHeight_4;
	// Vuforia.Image/PIXEL_FORMAT Vuforia.Image::mPixelFormat
	int32_t ___mPixelFormat_5;
	// System.Byte[] Vuforia.Image::mData
	ByteU5BU5D_t4116647657* ___mData_6;
	// System.IntPtr Vuforia.Image::mUnmanagedData
	intptr_t ___mUnmanagedData_7;
	// System.Boolean Vuforia.Image::mDataSet
	bool ___mDataSet_8;
	// UnityEngine.Color32[] Vuforia.Image::mPixel32
	Color32U5BU5D_t3850468773* ___mPixel32_9;

public:
	inline static int32_t get_offset_of_mWidth_0() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mWidth_0)); }
	inline int32_t get_mWidth_0() const { return ___mWidth_0; }
	inline int32_t* get_address_of_mWidth_0() { return &___mWidth_0; }
	inline void set_mWidth_0(int32_t value)
	{
		___mWidth_0 = value;
	}

	inline static int32_t get_offset_of_mHeight_1() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mHeight_1)); }
	inline int32_t get_mHeight_1() const { return ___mHeight_1; }
	inline int32_t* get_address_of_mHeight_1() { return &___mHeight_1; }
	inline void set_mHeight_1(int32_t value)
	{
		___mHeight_1 = value;
	}

	inline static int32_t get_offset_of_mStride_2() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mStride_2)); }
	inline int32_t get_mStride_2() const { return ___mStride_2; }
	inline int32_t* get_address_of_mStride_2() { return &___mStride_2; }
	inline void set_mStride_2(int32_t value)
	{
		___mStride_2 = value;
	}

	inline static int32_t get_offset_of_mBufferWidth_3() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mBufferWidth_3)); }
	inline int32_t get_mBufferWidth_3() const { return ___mBufferWidth_3; }
	inline int32_t* get_address_of_mBufferWidth_3() { return &___mBufferWidth_3; }
	inline void set_mBufferWidth_3(int32_t value)
	{
		___mBufferWidth_3 = value;
	}

	inline static int32_t get_offset_of_mBufferHeight_4() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mBufferHeight_4)); }
	inline int32_t get_mBufferHeight_4() const { return ___mBufferHeight_4; }
	inline int32_t* get_address_of_mBufferHeight_4() { return &___mBufferHeight_4; }
	inline void set_mBufferHeight_4(int32_t value)
	{
		___mBufferHeight_4 = value;
	}

	inline static int32_t get_offset_of_mPixelFormat_5() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mPixelFormat_5)); }
	inline int32_t get_mPixelFormat_5() const { return ___mPixelFormat_5; }
	inline int32_t* get_address_of_mPixelFormat_5() { return &___mPixelFormat_5; }
	inline void set_mPixelFormat_5(int32_t value)
	{
		___mPixelFormat_5 = value;
	}

	inline static int32_t get_offset_of_mData_6() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mData_6)); }
	inline ByteU5BU5D_t4116647657* get_mData_6() const { return ___mData_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_mData_6() { return &___mData_6; }
	inline void set_mData_6(ByteU5BU5D_t4116647657* value)
	{
		___mData_6 = value;
		Il2CppCodeGenWriteBarrier((&___mData_6), value);
	}

	inline static int32_t get_offset_of_mUnmanagedData_7() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mUnmanagedData_7)); }
	inline intptr_t get_mUnmanagedData_7() const { return ___mUnmanagedData_7; }
	inline intptr_t* get_address_of_mUnmanagedData_7() { return &___mUnmanagedData_7; }
	inline void set_mUnmanagedData_7(intptr_t value)
	{
		___mUnmanagedData_7 = value;
	}

	inline static int32_t get_offset_of_mDataSet_8() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mDataSet_8)); }
	inline bool get_mDataSet_8() const { return ___mDataSet_8; }
	inline bool* get_address_of_mDataSet_8() { return &___mDataSet_8; }
	inline void set_mDataSet_8(bool value)
	{
		___mDataSet_8 = value;
	}

	inline static int32_t get_offset_of_mPixel32_9() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mPixel32_9)); }
	inline Color32U5BU5D_t3850468773* get_mPixel32_9() const { return ___mPixel32_9; }
	inline Color32U5BU5D_t3850468773** get_address_of_mPixel32_9() { return &___mPixel32_9; }
	inline void set_mPixel32_9(Color32U5BU5D_t3850468773* value)
	{
		___mPixel32_9 = value;
		Il2CppCodeGenWriteBarrier((&___mPixel32_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T745056343_H
#ifndef VUFORIAARCONTROLLER_T1876945237_H
#define VUFORIAARCONTROLLER_T1876945237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaARController
struct  VuforiaARController_t1876945237  : public ARController_t116632334
{
public:
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaARController::CameraDeviceModeSetting
	int32_t ___CameraDeviceModeSetting_1;
	// System.Int32 Vuforia.VuforiaARController::MaxSimultaneousImageTargets
	int32_t ___MaxSimultaneousImageTargets_2;
	// System.Int32 Vuforia.VuforiaARController::MaxSimultaneousObjectTargets
	int32_t ___MaxSimultaneousObjectTargets_3;
	// System.Boolean Vuforia.VuforiaARController::UseDelayedLoadingObjectTargets
	bool ___UseDelayedLoadingObjectTargets_4;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaARController::CameraDirection
	int32_t ___CameraDirection_5;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaARController::MirrorVideoBackground
	int32_t ___MirrorVideoBackground_6;
	// Vuforia.VuforiaARController/WorldCenterMode Vuforia.VuforiaARController::mWorldCenterMode
	int32_t ___mWorldCenterMode_7;
	// Vuforia.TrackableBehaviour Vuforia.VuforiaARController::mWorldCenter
	TrackableBehaviour_t1113559212 * ___mWorldCenter_8;
	// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler> Vuforia.VuforiaARController::mVideoBgEventHandlers
	List_1_t905170877 * ___mVideoBgEventHandlers_9;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaInitialized
	Action_t1264377477 * ___mOnVuforiaInitialized_10;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaStarted
	Action_t1264377477 * ___mOnVuforiaStarted_11;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaDeinitialized
	Action_t1264377477 * ___mOnVuforiaDeinitialized_12;
	// System.Action Vuforia.VuforiaARController::mOnTrackablesUpdated
	Action_t1264377477 * ___mOnTrackablesUpdated_13;
	// System.Action Vuforia.VuforiaARController::mRenderOnUpdate
	Action_t1264377477 * ___mRenderOnUpdate_14;
	// System.Action`1<System.Boolean> Vuforia.VuforiaARController::mOnPause
	Action_1_t269755560 * ___mOnPause_15;
	// System.Boolean Vuforia.VuforiaARController::mPaused
	bool ___mPaused_16;
	// System.Action Vuforia.VuforiaARController::mOnBackgroundTextureChanged
	Action_t1264377477 * ___mOnBackgroundTextureChanged_17;
	// System.Boolean Vuforia.VuforiaARController::mStartHasBeenInvoked
	bool ___mStartHasBeenInvoked_18;
	// System.Boolean Vuforia.VuforiaARController::mHasStarted
	bool ___mHasStarted_19;
	// Vuforia.ICameraConfiguration Vuforia.VuforiaARController::mCameraConfiguration
	RuntimeObject* ___mCameraConfiguration_20;
	// Vuforia.DigitalEyewearARController Vuforia.VuforiaARController::mEyewearBehaviour
	DigitalEyewearARController_t1054226036 * ___mEyewearBehaviour_21;
	// Vuforia.VideoBackgroundManager Vuforia.VuforiaARController::mVideoBackgroundMgr
	VideoBackgroundManager_t2198727358 * ___mVideoBackgroundMgr_22;
	// System.Boolean Vuforia.VuforiaARController::mCheckStopCamera
	bool ___mCheckStopCamera_23;
	// UnityEngine.Material Vuforia.VuforiaARController::mClearMaterial
	Material_t340375123 * ___mClearMaterial_24;
	// System.Boolean Vuforia.VuforiaARController::mMetalRendering
	bool ___mMetalRendering_25;
	// System.Boolean Vuforia.VuforiaARController::mHasStartedOnce
	bool ___mHasStartedOnce_26;
	// System.Boolean Vuforia.VuforiaARController::mWasEnabledBeforePause
	bool ___mWasEnabledBeforePause_27;
	// System.Boolean Vuforia.VuforiaARController::mObjectTrackerWasActiveBeforePause
	bool ___mObjectTrackerWasActiveBeforePause_28;
	// System.Boolean Vuforia.VuforiaARController::mObjectTrackerWasActiveBeforeDisabling
	bool ___mObjectTrackerWasActiveBeforeDisabling_29;
	// System.Int32 Vuforia.VuforiaARController::mLastUpdatedFrame
	int32_t ___mLastUpdatedFrame_30;
	// System.Collections.Generic.List`1<System.Type> Vuforia.VuforiaARController::mTrackersRequestedToDeinit
	List_1_t3956019502 * ___mTrackersRequestedToDeinit_31;

public:
	inline static int32_t get_offset_of_CameraDeviceModeSetting_1() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___CameraDeviceModeSetting_1)); }
	inline int32_t get_CameraDeviceModeSetting_1() const { return ___CameraDeviceModeSetting_1; }
	inline int32_t* get_address_of_CameraDeviceModeSetting_1() { return &___CameraDeviceModeSetting_1; }
	inline void set_CameraDeviceModeSetting_1(int32_t value)
	{
		___CameraDeviceModeSetting_1 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousImageTargets_2() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___MaxSimultaneousImageTargets_2)); }
	inline int32_t get_MaxSimultaneousImageTargets_2() const { return ___MaxSimultaneousImageTargets_2; }
	inline int32_t* get_address_of_MaxSimultaneousImageTargets_2() { return &___MaxSimultaneousImageTargets_2; }
	inline void set_MaxSimultaneousImageTargets_2(int32_t value)
	{
		___MaxSimultaneousImageTargets_2 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousObjectTargets_3() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___MaxSimultaneousObjectTargets_3)); }
	inline int32_t get_MaxSimultaneousObjectTargets_3() const { return ___MaxSimultaneousObjectTargets_3; }
	inline int32_t* get_address_of_MaxSimultaneousObjectTargets_3() { return &___MaxSimultaneousObjectTargets_3; }
	inline void set_MaxSimultaneousObjectTargets_3(int32_t value)
	{
		___MaxSimultaneousObjectTargets_3 = value;
	}

	inline static int32_t get_offset_of_UseDelayedLoadingObjectTargets_4() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___UseDelayedLoadingObjectTargets_4)); }
	inline bool get_UseDelayedLoadingObjectTargets_4() const { return ___UseDelayedLoadingObjectTargets_4; }
	inline bool* get_address_of_UseDelayedLoadingObjectTargets_4() { return &___UseDelayedLoadingObjectTargets_4; }
	inline void set_UseDelayedLoadingObjectTargets_4(bool value)
	{
		___UseDelayedLoadingObjectTargets_4 = value;
	}

	inline static int32_t get_offset_of_CameraDirection_5() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___CameraDirection_5)); }
	inline int32_t get_CameraDirection_5() const { return ___CameraDirection_5; }
	inline int32_t* get_address_of_CameraDirection_5() { return &___CameraDirection_5; }
	inline void set_CameraDirection_5(int32_t value)
	{
		___CameraDirection_5 = value;
	}

	inline static int32_t get_offset_of_MirrorVideoBackground_6() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___MirrorVideoBackground_6)); }
	inline int32_t get_MirrorVideoBackground_6() const { return ___MirrorVideoBackground_6; }
	inline int32_t* get_address_of_MirrorVideoBackground_6() { return &___MirrorVideoBackground_6; }
	inline void set_MirrorVideoBackground_6(int32_t value)
	{
		___MirrorVideoBackground_6 = value;
	}

	inline static int32_t get_offset_of_mWorldCenterMode_7() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mWorldCenterMode_7)); }
	inline int32_t get_mWorldCenterMode_7() const { return ___mWorldCenterMode_7; }
	inline int32_t* get_address_of_mWorldCenterMode_7() { return &___mWorldCenterMode_7; }
	inline void set_mWorldCenterMode_7(int32_t value)
	{
		___mWorldCenterMode_7 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_8() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mWorldCenter_8)); }
	inline TrackableBehaviour_t1113559212 * get_mWorldCenter_8() const { return ___mWorldCenter_8; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mWorldCenter_8() { return &___mWorldCenter_8; }
	inline void set_mWorldCenter_8(TrackableBehaviour_t1113559212 * value)
	{
		___mWorldCenter_8 = value;
		Il2CppCodeGenWriteBarrier((&___mWorldCenter_8), value);
	}

	inline static int32_t get_offset_of_mVideoBgEventHandlers_9() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mVideoBgEventHandlers_9)); }
	inline List_1_t905170877 * get_mVideoBgEventHandlers_9() const { return ___mVideoBgEventHandlers_9; }
	inline List_1_t905170877 ** get_address_of_mVideoBgEventHandlers_9() { return &___mVideoBgEventHandlers_9; }
	inline void set_mVideoBgEventHandlers_9(List_1_t905170877 * value)
	{
		___mVideoBgEventHandlers_9 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBgEventHandlers_9), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaInitialized_10() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnVuforiaInitialized_10)); }
	inline Action_t1264377477 * get_mOnVuforiaInitialized_10() const { return ___mOnVuforiaInitialized_10; }
	inline Action_t1264377477 ** get_address_of_mOnVuforiaInitialized_10() { return &___mOnVuforiaInitialized_10; }
	inline void set_mOnVuforiaInitialized_10(Action_t1264377477 * value)
	{
		___mOnVuforiaInitialized_10 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaInitialized_10), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaStarted_11() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnVuforiaStarted_11)); }
	inline Action_t1264377477 * get_mOnVuforiaStarted_11() const { return ___mOnVuforiaStarted_11; }
	inline Action_t1264377477 ** get_address_of_mOnVuforiaStarted_11() { return &___mOnVuforiaStarted_11; }
	inline void set_mOnVuforiaStarted_11(Action_t1264377477 * value)
	{
		___mOnVuforiaStarted_11 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaStarted_11), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaDeinitialized_12() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnVuforiaDeinitialized_12)); }
	inline Action_t1264377477 * get_mOnVuforiaDeinitialized_12() const { return ___mOnVuforiaDeinitialized_12; }
	inline Action_t1264377477 ** get_address_of_mOnVuforiaDeinitialized_12() { return &___mOnVuforiaDeinitialized_12; }
	inline void set_mOnVuforiaDeinitialized_12(Action_t1264377477 * value)
	{
		___mOnVuforiaDeinitialized_12 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaDeinitialized_12), value);
	}

	inline static int32_t get_offset_of_mOnTrackablesUpdated_13() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnTrackablesUpdated_13)); }
	inline Action_t1264377477 * get_mOnTrackablesUpdated_13() const { return ___mOnTrackablesUpdated_13; }
	inline Action_t1264377477 ** get_address_of_mOnTrackablesUpdated_13() { return &___mOnTrackablesUpdated_13; }
	inline void set_mOnTrackablesUpdated_13(Action_t1264377477 * value)
	{
		___mOnTrackablesUpdated_13 = value;
		Il2CppCodeGenWriteBarrier((&___mOnTrackablesUpdated_13), value);
	}

	inline static int32_t get_offset_of_mRenderOnUpdate_14() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mRenderOnUpdate_14)); }
	inline Action_t1264377477 * get_mRenderOnUpdate_14() const { return ___mRenderOnUpdate_14; }
	inline Action_t1264377477 ** get_address_of_mRenderOnUpdate_14() { return &___mRenderOnUpdate_14; }
	inline void set_mRenderOnUpdate_14(Action_t1264377477 * value)
	{
		___mRenderOnUpdate_14 = value;
		Il2CppCodeGenWriteBarrier((&___mRenderOnUpdate_14), value);
	}

	inline static int32_t get_offset_of_mOnPause_15() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnPause_15)); }
	inline Action_1_t269755560 * get_mOnPause_15() const { return ___mOnPause_15; }
	inline Action_1_t269755560 ** get_address_of_mOnPause_15() { return &___mOnPause_15; }
	inline void set_mOnPause_15(Action_1_t269755560 * value)
	{
		___mOnPause_15 = value;
		Il2CppCodeGenWriteBarrier((&___mOnPause_15), value);
	}

	inline static int32_t get_offset_of_mPaused_16() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mPaused_16)); }
	inline bool get_mPaused_16() const { return ___mPaused_16; }
	inline bool* get_address_of_mPaused_16() { return &___mPaused_16; }
	inline void set_mPaused_16(bool value)
	{
		___mPaused_16 = value;
	}

	inline static int32_t get_offset_of_mOnBackgroundTextureChanged_17() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnBackgroundTextureChanged_17)); }
	inline Action_t1264377477 * get_mOnBackgroundTextureChanged_17() const { return ___mOnBackgroundTextureChanged_17; }
	inline Action_t1264377477 ** get_address_of_mOnBackgroundTextureChanged_17() { return &___mOnBackgroundTextureChanged_17; }
	inline void set_mOnBackgroundTextureChanged_17(Action_t1264377477 * value)
	{
		___mOnBackgroundTextureChanged_17 = value;
		Il2CppCodeGenWriteBarrier((&___mOnBackgroundTextureChanged_17), value);
	}

	inline static int32_t get_offset_of_mStartHasBeenInvoked_18() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mStartHasBeenInvoked_18)); }
	inline bool get_mStartHasBeenInvoked_18() const { return ___mStartHasBeenInvoked_18; }
	inline bool* get_address_of_mStartHasBeenInvoked_18() { return &___mStartHasBeenInvoked_18; }
	inline void set_mStartHasBeenInvoked_18(bool value)
	{
		___mStartHasBeenInvoked_18 = value;
	}

	inline static int32_t get_offset_of_mHasStarted_19() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mHasStarted_19)); }
	inline bool get_mHasStarted_19() const { return ___mHasStarted_19; }
	inline bool* get_address_of_mHasStarted_19() { return &___mHasStarted_19; }
	inline void set_mHasStarted_19(bool value)
	{
		___mHasStarted_19 = value;
	}

	inline static int32_t get_offset_of_mCameraConfiguration_20() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mCameraConfiguration_20)); }
	inline RuntimeObject* get_mCameraConfiguration_20() const { return ___mCameraConfiguration_20; }
	inline RuntimeObject** get_address_of_mCameraConfiguration_20() { return &___mCameraConfiguration_20; }
	inline void set_mCameraConfiguration_20(RuntimeObject* value)
	{
		___mCameraConfiguration_20 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraConfiguration_20), value);
	}

	inline static int32_t get_offset_of_mEyewearBehaviour_21() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mEyewearBehaviour_21)); }
	inline DigitalEyewearARController_t1054226036 * get_mEyewearBehaviour_21() const { return ___mEyewearBehaviour_21; }
	inline DigitalEyewearARController_t1054226036 ** get_address_of_mEyewearBehaviour_21() { return &___mEyewearBehaviour_21; }
	inline void set_mEyewearBehaviour_21(DigitalEyewearARController_t1054226036 * value)
	{
		___mEyewearBehaviour_21 = value;
		Il2CppCodeGenWriteBarrier((&___mEyewearBehaviour_21), value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundMgr_22() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mVideoBackgroundMgr_22)); }
	inline VideoBackgroundManager_t2198727358 * get_mVideoBackgroundMgr_22() const { return ___mVideoBackgroundMgr_22; }
	inline VideoBackgroundManager_t2198727358 ** get_address_of_mVideoBackgroundMgr_22() { return &___mVideoBackgroundMgr_22; }
	inline void set_mVideoBackgroundMgr_22(VideoBackgroundManager_t2198727358 * value)
	{
		___mVideoBackgroundMgr_22 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBackgroundMgr_22), value);
	}

	inline static int32_t get_offset_of_mCheckStopCamera_23() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mCheckStopCamera_23)); }
	inline bool get_mCheckStopCamera_23() const { return ___mCheckStopCamera_23; }
	inline bool* get_address_of_mCheckStopCamera_23() { return &___mCheckStopCamera_23; }
	inline void set_mCheckStopCamera_23(bool value)
	{
		___mCheckStopCamera_23 = value;
	}

	inline static int32_t get_offset_of_mClearMaterial_24() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mClearMaterial_24)); }
	inline Material_t340375123 * get_mClearMaterial_24() const { return ___mClearMaterial_24; }
	inline Material_t340375123 ** get_address_of_mClearMaterial_24() { return &___mClearMaterial_24; }
	inline void set_mClearMaterial_24(Material_t340375123 * value)
	{
		___mClearMaterial_24 = value;
		Il2CppCodeGenWriteBarrier((&___mClearMaterial_24), value);
	}

	inline static int32_t get_offset_of_mMetalRendering_25() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mMetalRendering_25)); }
	inline bool get_mMetalRendering_25() const { return ___mMetalRendering_25; }
	inline bool* get_address_of_mMetalRendering_25() { return &___mMetalRendering_25; }
	inline void set_mMetalRendering_25(bool value)
	{
		___mMetalRendering_25 = value;
	}

	inline static int32_t get_offset_of_mHasStartedOnce_26() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mHasStartedOnce_26)); }
	inline bool get_mHasStartedOnce_26() const { return ___mHasStartedOnce_26; }
	inline bool* get_address_of_mHasStartedOnce_26() { return &___mHasStartedOnce_26; }
	inline void set_mHasStartedOnce_26(bool value)
	{
		___mHasStartedOnce_26 = value;
	}

	inline static int32_t get_offset_of_mWasEnabledBeforePause_27() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mWasEnabledBeforePause_27)); }
	inline bool get_mWasEnabledBeforePause_27() const { return ___mWasEnabledBeforePause_27; }
	inline bool* get_address_of_mWasEnabledBeforePause_27() { return &___mWasEnabledBeforePause_27; }
	inline void set_mWasEnabledBeforePause_27(bool value)
	{
		___mWasEnabledBeforePause_27 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforePause_28() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mObjectTrackerWasActiveBeforePause_28)); }
	inline bool get_mObjectTrackerWasActiveBeforePause_28() const { return ___mObjectTrackerWasActiveBeforePause_28; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforePause_28() { return &___mObjectTrackerWasActiveBeforePause_28; }
	inline void set_mObjectTrackerWasActiveBeforePause_28(bool value)
	{
		___mObjectTrackerWasActiveBeforePause_28 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforeDisabling_29() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mObjectTrackerWasActiveBeforeDisabling_29)); }
	inline bool get_mObjectTrackerWasActiveBeforeDisabling_29() const { return ___mObjectTrackerWasActiveBeforeDisabling_29; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforeDisabling_29() { return &___mObjectTrackerWasActiveBeforeDisabling_29; }
	inline void set_mObjectTrackerWasActiveBeforeDisabling_29(bool value)
	{
		___mObjectTrackerWasActiveBeforeDisabling_29 = value;
	}

	inline static int32_t get_offset_of_mLastUpdatedFrame_30() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mLastUpdatedFrame_30)); }
	inline int32_t get_mLastUpdatedFrame_30() const { return ___mLastUpdatedFrame_30; }
	inline int32_t* get_address_of_mLastUpdatedFrame_30() { return &___mLastUpdatedFrame_30; }
	inline void set_mLastUpdatedFrame_30(int32_t value)
	{
		___mLastUpdatedFrame_30 = value;
	}

	inline static int32_t get_offset_of_mTrackersRequestedToDeinit_31() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mTrackersRequestedToDeinit_31)); }
	inline List_1_t3956019502 * get_mTrackersRequestedToDeinit_31() const { return ___mTrackersRequestedToDeinit_31; }
	inline List_1_t3956019502 ** get_address_of_mTrackersRequestedToDeinit_31() { return &___mTrackersRequestedToDeinit_31; }
	inline void set_mTrackersRequestedToDeinit_31(List_1_t3956019502 * value)
	{
		___mTrackersRequestedToDeinit_31 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackersRequestedToDeinit_31), value);
	}
};

struct VuforiaARController_t1876945237_StaticFields
{
public:
	// Vuforia.VuforiaARController Vuforia.VuforiaARController::mInstance
	VuforiaARController_t1876945237 * ___mInstance_32;
	// System.Object Vuforia.VuforiaARController::mPadlock
	RuntimeObject * ___mPadlock_33;

public:
	inline static int32_t get_offset_of_mInstance_32() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237_StaticFields, ___mInstance_32)); }
	inline VuforiaARController_t1876945237 * get_mInstance_32() const { return ___mInstance_32; }
	inline VuforiaARController_t1876945237 ** get_address_of_mInstance_32() { return &___mInstance_32; }
	inline void set_mInstance_32(VuforiaARController_t1876945237 * value)
	{
		___mInstance_32 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_32), value);
	}

	inline static int32_t get_offset_of_mPadlock_33() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237_StaticFields, ___mPadlock_33)); }
	inline RuntimeObject * get_mPadlock_33() const { return ___mPadlock_33; }
	inline RuntimeObject ** get_address_of_mPadlock_33() { return &___mPadlock_33; }
	inline void set_mPadlock_33(RuntimeObject * value)
	{
		___mPadlock_33 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_33), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAARCONTROLLER_T1876945237_H
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
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef VUFORIAMANAGER_T1653423889_H
#define VUFORIAMANAGER_T1653423889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManager
struct  VuforiaManager_t1653423889  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.VuforiaManager::<VideoBackgroundTextureSet>k__BackingField
	bool ___U3CVideoBackgroundTextureSetU3Ek__BackingField_0;
	// Vuforia.VuforiaARController/WorldCenterMode Vuforia.VuforiaManager::mWorldCenterMode
	int32_t ___mWorldCenterMode_2;
	// Vuforia.WorldCenterTrackableBehaviour Vuforia.VuforiaManager::mWorldCenter
	RuntimeObject* ___mWorldCenter_3;
	// Vuforia.VuMarkBehaviour Vuforia.VuforiaManager::mVuMarkWorldCenter
	VuMarkBehaviour_t1178230459 * ___mVuMarkWorldCenter_4;
	// UnityEngine.Transform Vuforia.VuforiaManager::mARCameraTransform
	Transform_t3600365921 * ___mARCameraTransform_5;
	// UnityEngine.Transform Vuforia.VuforiaManager::mCentralAnchorPoint
	Transform_t3600365921 * ___mCentralAnchorPoint_6;
	// Vuforia.TrackerData/TrackableResultData[] Vuforia.VuforiaManager::mTrackableResultDataArray
	TrackableResultDataU5BU5D_t4273811049* ___mTrackableResultDataArray_7;
	// Vuforia.TrackerData/WordData[] Vuforia.VuforiaManager::mWordDataArray
	WordDataU5BU5D_t3131491555* ___mWordDataArray_8;
	// Vuforia.TrackerData/WordResultData[] Vuforia.VuforiaManager::mWordResultDataArray
	WordResultDataU5BU5D_t2333646353* ___mWordResultDataArray_9;
	// Vuforia.TrackerData/VuMarkTargetData[] Vuforia.VuforiaManager::mVuMarkDataArray
	VuMarkTargetDataU5BU5D_t4015091482* ___mVuMarkDataArray_10;
	// Vuforia.TrackerData/VuMarkTargetResultData[] Vuforia.VuforiaManager::mVuMarkResultDataArray
	VuMarkTargetResultDataU5BU5D_t2157423781* ___mVuMarkResultDataArray_11;
	// System.Collections.Generic.LinkedList`1<Vuforia.VuforiaManager/TrackableIdPair> Vuforia.VuforiaManager::mWCTrackableFoundQueue
	LinkedList_1_t3066996466 * ___mWCTrackableFoundQueue_12;
	// System.IntPtr Vuforia.VuforiaManager::mImageHeaderData
	intptr_t ___mImageHeaderData_13;
	// System.Int32 Vuforia.VuforiaManager::mNumImageHeaders
	int32_t ___mNumImageHeaders_14;
	// System.Int32 Vuforia.VuforiaManager::mInjectedFrameIdx
	int32_t ___mInjectedFrameIdx_15;
	// System.IntPtr Vuforia.VuforiaManager::mLastProcessedFrameStatePtr
	intptr_t ___mLastProcessedFrameStatePtr_16;
	// System.Boolean Vuforia.VuforiaManager::mInitialized
	bool ___mInitialized_17;
	// System.Boolean Vuforia.VuforiaManager::mPaused
	bool ___mPaused_18;
	// Vuforia.TrackerData/FrameState Vuforia.VuforiaManager::mFrameState
	FrameState_t2717258284  ___mFrameState_19;
	// Vuforia.VuforiaManager/AutoRotationState Vuforia.VuforiaManager::mAutoRotationState
	AutoRotationState_t2150317116  ___mAutoRotationState_20;
	// System.Boolean Vuforia.VuforiaManager::mVideoBackgroundNeedsRedrawing
	bool ___mVideoBackgroundNeedsRedrawing_21;
	// System.Int32 Vuforia.VuforiaManager::mDiscardStatesForRendering
	int32_t ___mDiscardStatesForRendering_22;
	// System.Int32 Vuforia.VuforiaManager::mLastFrameIdx
	int32_t ___mLastFrameIdx_23;
	// System.Boolean Vuforia.VuforiaManager::mIsSeeThroughDevice
	bool ___mIsSeeThroughDevice_24;
	// Vuforia.LateLatchingManager Vuforia.VuforiaManager::mLateLatchingManager
	LateLatchingManager_t3198550161 * ___mLateLatchingManager_25;

public:
	inline static int32_t get_offset_of_U3CVideoBackgroundTextureSetU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___U3CVideoBackgroundTextureSetU3Ek__BackingField_0)); }
	inline bool get_U3CVideoBackgroundTextureSetU3Ek__BackingField_0() const { return ___U3CVideoBackgroundTextureSetU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CVideoBackgroundTextureSetU3Ek__BackingField_0() { return &___U3CVideoBackgroundTextureSetU3Ek__BackingField_0; }
	inline void set_U3CVideoBackgroundTextureSetU3Ek__BackingField_0(bool value)
	{
		___U3CVideoBackgroundTextureSetU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_mWorldCenterMode_2() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mWorldCenterMode_2)); }
	inline int32_t get_mWorldCenterMode_2() const { return ___mWorldCenterMode_2; }
	inline int32_t* get_address_of_mWorldCenterMode_2() { return &___mWorldCenterMode_2; }
	inline void set_mWorldCenterMode_2(int32_t value)
	{
		___mWorldCenterMode_2 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_3() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mWorldCenter_3)); }
	inline RuntimeObject* get_mWorldCenter_3() const { return ___mWorldCenter_3; }
	inline RuntimeObject** get_address_of_mWorldCenter_3() { return &___mWorldCenter_3; }
	inline void set_mWorldCenter_3(RuntimeObject* value)
	{
		___mWorldCenter_3 = value;
		Il2CppCodeGenWriteBarrier((&___mWorldCenter_3), value);
	}

	inline static int32_t get_offset_of_mVuMarkWorldCenter_4() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mVuMarkWorldCenter_4)); }
	inline VuMarkBehaviour_t1178230459 * get_mVuMarkWorldCenter_4() const { return ___mVuMarkWorldCenter_4; }
	inline VuMarkBehaviour_t1178230459 ** get_address_of_mVuMarkWorldCenter_4() { return &___mVuMarkWorldCenter_4; }
	inline void set_mVuMarkWorldCenter_4(VuMarkBehaviour_t1178230459 * value)
	{
		___mVuMarkWorldCenter_4 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkWorldCenter_4), value);
	}

	inline static int32_t get_offset_of_mARCameraTransform_5() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mARCameraTransform_5)); }
	inline Transform_t3600365921 * get_mARCameraTransform_5() const { return ___mARCameraTransform_5; }
	inline Transform_t3600365921 ** get_address_of_mARCameraTransform_5() { return &___mARCameraTransform_5; }
	inline void set_mARCameraTransform_5(Transform_t3600365921 * value)
	{
		___mARCameraTransform_5 = value;
		Il2CppCodeGenWriteBarrier((&___mARCameraTransform_5), value);
	}

	inline static int32_t get_offset_of_mCentralAnchorPoint_6() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mCentralAnchorPoint_6)); }
	inline Transform_t3600365921 * get_mCentralAnchorPoint_6() const { return ___mCentralAnchorPoint_6; }
	inline Transform_t3600365921 ** get_address_of_mCentralAnchorPoint_6() { return &___mCentralAnchorPoint_6; }
	inline void set_mCentralAnchorPoint_6(Transform_t3600365921 * value)
	{
		___mCentralAnchorPoint_6 = value;
		Il2CppCodeGenWriteBarrier((&___mCentralAnchorPoint_6), value);
	}

	inline static int32_t get_offset_of_mTrackableResultDataArray_7() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mTrackableResultDataArray_7)); }
	inline TrackableResultDataU5BU5D_t4273811049* get_mTrackableResultDataArray_7() const { return ___mTrackableResultDataArray_7; }
	inline TrackableResultDataU5BU5D_t4273811049** get_address_of_mTrackableResultDataArray_7() { return &___mTrackableResultDataArray_7; }
	inline void set_mTrackableResultDataArray_7(TrackableResultDataU5BU5D_t4273811049* value)
	{
		___mTrackableResultDataArray_7 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableResultDataArray_7), value);
	}

	inline static int32_t get_offset_of_mWordDataArray_8() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mWordDataArray_8)); }
	inline WordDataU5BU5D_t3131491555* get_mWordDataArray_8() const { return ___mWordDataArray_8; }
	inline WordDataU5BU5D_t3131491555** get_address_of_mWordDataArray_8() { return &___mWordDataArray_8; }
	inline void set_mWordDataArray_8(WordDataU5BU5D_t3131491555* value)
	{
		___mWordDataArray_8 = value;
		Il2CppCodeGenWriteBarrier((&___mWordDataArray_8), value);
	}

	inline static int32_t get_offset_of_mWordResultDataArray_9() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mWordResultDataArray_9)); }
	inline WordResultDataU5BU5D_t2333646353* get_mWordResultDataArray_9() const { return ___mWordResultDataArray_9; }
	inline WordResultDataU5BU5D_t2333646353** get_address_of_mWordResultDataArray_9() { return &___mWordResultDataArray_9; }
	inline void set_mWordResultDataArray_9(WordResultDataU5BU5D_t2333646353* value)
	{
		___mWordResultDataArray_9 = value;
		Il2CppCodeGenWriteBarrier((&___mWordResultDataArray_9), value);
	}

	inline static int32_t get_offset_of_mVuMarkDataArray_10() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mVuMarkDataArray_10)); }
	inline VuMarkTargetDataU5BU5D_t4015091482* get_mVuMarkDataArray_10() const { return ___mVuMarkDataArray_10; }
	inline VuMarkTargetDataU5BU5D_t4015091482** get_address_of_mVuMarkDataArray_10() { return &___mVuMarkDataArray_10; }
	inline void set_mVuMarkDataArray_10(VuMarkTargetDataU5BU5D_t4015091482* value)
	{
		___mVuMarkDataArray_10 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkDataArray_10), value);
	}

	inline static int32_t get_offset_of_mVuMarkResultDataArray_11() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mVuMarkResultDataArray_11)); }
	inline VuMarkTargetResultDataU5BU5D_t2157423781* get_mVuMarkResultDataArray_11() const { return ___mVuMarkResultDataArray_11; }
	inline VuMarkTargetResultDataU5BU5D_t2157423781** get_address_of_mVuMarkResultDataArray_11() { return &___mVuMarkResultDataArray_11; }
	inline void set_mVuMarkResultDataArray_11(VuMarkTargetResultDataU5BU5D_t2157423781* value)
	{
		___mVuMarkResultDataArray_11 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkResultDataArray_11), value);
	}

	inline static int32_t get_offset_of_mWCTrackableFoundQueue_12() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mWCTrackableFoundQueue_12)); }
	inline LinkedList_1_t3066996466 * get_mWCTrackableFoundQueue_12() const { return ___mWCTrackableFoundQueue_12; }
	inline LinkedList_1_t3066996466 ** get_address_of_mWCTrackableFoundQueue_12() { return &___mWCTrackableFoundQueue_12; }
	inline void set_mWCTrackableFoundQueue_12(LinkedList_1_t3066996466 * value)
	{
		___mWCTrackableFoundQueue_12 = value;
		Il2CppCodeGenWriteBarrier((&___mWCTrackableFoundQueue_12), value);
	}

	inline static int32_t get_offset_of_mImageHeaderData_13() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mImageHeaderData_13)); }
	inline intptr_t get_mImageHeaderData_13() const { return ___mImageHeaderData_13; }
	inline intptr_t* get_address_of_mImageHeaderData_13() { return &___mImageHeaderData_13; }
	inline void set_mImageHeaderData_13(intptr_t value)
	{
		___mImageHeaderData_13 = value;
	}

	inline static int32_t get_offset_of_mNumImageHeaders_14() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mNumImageHeaders_14)); }
	inline int32_t get_mNumImageHeaders_14() const { return ___mNumImageHeaders_14; }
	inline int32_t* get_address_of_mNumImageHeaders_14() { return &___mNumImageHeaders_14; }
	inline void set_mNumImageHeaders_14(int32_t value)
	{
		___mNumImageHeaders_14 = value;
	}

	inline static int32_t get_offset_of_mInjectedFrameIdx_15() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mInjectedFrameIdx_15)); }
	inline int32_t get_mInjectedFrameIdx_15() const { return ___mInjectedFrameIdx_15; }
	inline int32_t* get_address_of_mInjectedFrameIdx_15() { return &___mInjectedFrameIdx_15; }
	inline void set_mInjectedFrameIdx_15(int32_t value)
	{
		___mInjectedFrameIdx_15 = value;
	}

	inline static int32_t get_offset_of_mLastProcessedFrameStatePtr_16() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mLastProcessedFrameStatePtr_16)); }
	inline intptr_t get_mLastProcessedFrameStatePtr_16() const { return ___mLastProcessedFrameStatePtr_16; }
	inline intptr_t* get_address_of_mLastProcessedFrameStatePtr_16() { return &___mLastProcessedFrameStatePtr_16; }
	inline void set_mLastProcessedFrameStatePtr_16(intptr_t value)
	{
		___mLastProcessedFrameStatePtr_16 = value;
	}

	inline static int32_t get_offset_of_mInitialized_17() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mInitialized_17)); }
	inline bool get_mInitialized_17() const { return ___mInitialized_17; }
	inline bool* get_address_of_mInitialized_17() { return &___mInitialized_17; }
	inline void set_mInitialized_17(bool value)
	{
		___mInitialized_17 = value;
	}

	inline static int32_t get_offset_of_mPaused_18() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mPaused_18)); }
	inline bool get_mPaused_18() const { return ___mPaused_18; }
	inline bool* get_address_of_mPaused_18() { return &___mPaused_18; }
	inline void set_mPaused_18(bool value)
	{
		___mPaused_18 = value;
	}

	inline static int32_t get_offset_of_mFrameState_19() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mFrameState_19)); }
	inline FrameState_t2717258284  get_mFrameState_19() const { return ___mFrameState_19; }
	inline FrameState_t2717258284 * get_address_of_mFrameState_19() { return &___mFrameState_19; }
	inline void set_mFrameState_19(FrameState_t2717258284  value)
	{
		___mFrameState_19 = value;
	}

	inline static int32_t get_offset_of_mAutoRotationState_20() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mAutoRotationState_20)); }
	inline AutoRotationState_t2150317116  get_mAutoRotationState_20() const { return ___mAutoRotationState_20; }
	inline AutoRotationState_t2150317116 * get_address_of_mAutoRotationState_20() { return &___mAutoRotationState_20; }
	inline void set_mAutoRotationState_20(AutoRotationState_t2150317116  value)
	{
		___mAutoRotationState_20 = value;
	}

	inline static int32_t get_offset_of_mVideoBackgroundNeedsRedrawing_21() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mVideoBackgroundNeedsRedrawing_21)); }
	inline bool get_mVideoBackgroundNeedsRedrawing_21() const { return ___mVideoBackgroundNeedsRedrawing_21; }
	inline bool* get_address_of_mVideoBackgroundNeedsRedrawing_21() { return &___mVideoBackgroundNeedsRedrawing_21; }
	inline void set_mVideoBackgroundNeedsRedrawing_21(bool value)
	{
		___mVideoBackgroundNeedsRedrawing_21 = value;
	}

	inline static int32_t get_offset_of_mDiscardStatesForRendering_22() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mDiscardStatesForRendering_22)); }
	inline int32_t get_mDiscardStatesForRendering_22() const { return ___mDiscardStatesForRendering_22; }
	inline int32_t* get_address_of_mDiscardStatesForRendering_22() { return &___mDiscardStatesForRendering_22; }
	inline void set_mDiscardStatesForRendering_22(int32_t value)
	{
		___mDiscardStatesForRendering_22 = value;
	}

	inline static int32_t get_offset_of_mLastFrameIdx_23() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mLastFrameIdx_23)); }
	inline int32_t get_mLastFrameIdx_23() const { return ___mLastFrameIdx_23; }
	inline int32_t* get_address_of_mLastFrameIdx_23() { return &___mLastFrameIdx_23; }
	inline void set_mLastFrameIdx_23(int32_t value)
	{
		___mLastFrameIdx_23 = value;
	}

	inline static int32_t get_offset_of_mIsSeeThroughDevice_24() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mIsSeeThroughDevice_24)); }
	inline bool get_mIsSeeThroughDevice_24() const { return ___mIsSeeThroughDevice_24; }
	inline bool* get_address_of_mIsSeeThroughDevice_24() { return &___mIsSeeThroughDevice_24; }
	inline void set_mIsSeeThroughDevice_24(bool value)
	{
		___mIsSeeThroughDevice_24 = value;
	}

	inline static int32_t get_offset_of_mLateLatchingManager_25() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mLateLatchingManager_25)); }
	inline LateLatchingManager_t3198550161 * get_mLateLatchingManager_25() const { return ___mLateLatchingManager_25; }
	inline LateLatchingManager_t3198550161 ** get_address_of_mLateLatchingManager_25() { return &___mLateLatchingManager_25; }
	inline void set_mLateLatchingManager_25(LateLatchingManager_t3198550161 * value)
	{
		___mLateLatchingManager_25 = value;
		Il2CppCodeGenWriteBarrier((&___mLateLatchingManager_25), value);
	}
};

struct VuforiaManager_t1653423889_StaticFields
{
public:
	// Vuforia.VuforiaManager Vuforia.VuforiaManager::sInstance
	VuforiaManager_t1653423889 * ___sInstance_1;

public:
	inline static int32_t get_offset_of_sInstance_1() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889_StaticFields, ___sInstance_1)); }
	inline VuforiaManager_t1653423889 * get_sInstance_1() const { return ___sInstance_1; }
	inline VuforiaManager_t1653423889 ** get_address_of_sInstance_1() { return &___sInstance_1; }
	inline void set_sInstance_1(VuforiaManager_t1653423889 * value)
	{
		___sInstance_1 = value;
		Il2CppCodeGenWriteBarrier((&___sInstance_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAMANAGER_T1653423889_H
#ifndef WORDIMPL_T2494369133_H
#define WORDIMPL_T2494369133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordImpl
struct  WordImpl_t2494369133  : public TrackableImpl_t3595316917
{
public:
	// System.String Vuforia.WordImpl::mText
	String_t* ___mText_2;
	// UnityEngine.Vector2 Vuforia.WordImpl::mSize
	Vector2_t2156229523  ___mSize_3;
	// Vuforia.Image Vuforia.WordImpl::mLetterMask
	Image_t745056343 * ___mLetterMask_4;
	// Vuforia.TrackerData/ImageHeaderData Vuforia.WordImpl::mLetterImageHeader
	ImageHeaderData_t3550119865  ___mLetterImageHeader_5;
	// Vuforia.RectangleData[] Vuforia.WordImpl::mLetterBoundingBoxes
	RectangleDataU5BU5D_t804827427* ___mLetterBoundingBoxes_6;

public:
	inline static int32_t get_offset_of_mText_2() { return static_cast<int32_t>(offsetof(WordImpl_t2494369133, ___mText_2)); }
	inline String_t* get_mText_2() const { return ___mText_2; }
	inline String_t** get_address_of_mText_2() { return &___mText_2; }
	inline void set_mText_2(String_t* value)
	{
		___mText_2 = value;
		Il2CppCodeGenWriteBarrier((&___mText_2), value);
	}

	inline static int32_t get_offset_of_mSize_3() { return static_cast<int32_t>(offsetof(WordImpl_t2494369133, ___mSize_3)); }
	inline Vector2_t2156229523  get_mSize_3() const { return ___mSize_3; }
	inline Vector2_t2156229523 * get_address_of_mSize_3() { return &___mSize_3; }
	inline void set_mSize_3(Vector2_t2156229523  value)
	{
		___mSize_3 = value;
	}

	inline static int32_t get_offset_of_mLetterMask_4() { return static_cast<int32_t>(offsetof(WordImpl_t2494369133, ___mLetterMask_4)); }
	inline Image_t745056343 * get_mLetterMask_4() const { return ___mLetterMask_4; }
	inline Image_t745056343 ** get_address_of_mLetterMask_4() { return &___mLetterMask_4; }
	inline void set_mLetterMask_4(Image_t745056343 * value)
	{
		___mLetterMask_4 = value;
		Il2CppCodeGenWriteBarrier((&___mLetterMask_4), value);
	}

	inline static int32_t get_offset_of_mLetterImageHeader_5() { return static_cast<int32_t>(offsetof(WordImpl_t2494369133, ___mLetterImageHeader_5)); }
	inline ImageHeaderData_t3550119865  get_mLetterImageHeader_5() const { return ___mLetterImageHeader_5; }
	inline ImageHeaderData_t3550119865 * get_address_of_mLetterImageHeader_5() { return &___mLetterImageHeader_5; }
	inline void set_mLetterImageHeader_5(ImageHeaderData_t3550119865  value)
	{
		___mLetterImageHeader_5 = value;
	}

	inline static int32_t get_offset_of_mLetterBoundingBoxes_6() { return static_cast<int32_t>(offsetof(WordImpl_t2494369133, ___mLetterBoundingBoxes_6)); }
	inline RectangleDataU5BU5D_t804827427* get_mLetterBoundingBoxes_6() const { return ___mLetterBoundingBoxes_6; }
	inline RectangleDataU5BU5D_t804827427** get_address_of_mLetterBoundingBoxes_6() { return &___mLetterBoundingBoxes_6; }
	inline void set_mLetterBoundingBoxes_6(RectangleDataU5BU5D_t804827427* value)
	{
		___mLetterBoundingBoxes_6 = value;
		Il2CppCodeGenWriteBarrier((&___mLetterBoundingBoxes_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDIMPL_T2494369133_H
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
#ifndef PROFILECOLLECTION_T901995765_H
#define PROFILECOLLECTION_T901995765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamProfile/ProfileCollection
struct  ProfileCollection_t901995765 
{
public:
	// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile/ProfileCollection::DefaultProfile
	ProfileData_t3519391925  ___DefaultProfile_0;
	// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData> Vuforia.WebCamProfile/ProfileCollection::Profiles
	Dictionary_2_t3304648224 * ___Profiles_1;

public:
	inline static int32_t get_offset_of_DefaultProfile_0() { return static_cast<int32_t>(offsetof(ProfileCollection_t901995765, ___DefaultProfile_0)); }
	inline ProfileData_t3519391925  get_DefaultProfile_0() const { return ___DefaultProfile_0; }
	inline ProfileData_t3519391925 * get_address_of_DefaultProfile_0() { return &___DefaultProfile_0; }
	inline void set_DefaultProfile_0(ProfileData_t3519391925  value)
	{
		___DefaultProfile_0 = value;
	}

	inline static int32_t get_offset_of_Profiles_1() { return static_cast<int32_t>(offsetof(ProfileCollection_t901995765, ___Profiles_1)); }
	inline Dictionary_2_t3304648224 * get_Profiles_1() const { return ___Profiles_1; }
	inline Dictionary_2_t3304648224 ** get_address_of_Profiles_1() { return &___Profiles_1; }
	inline void set_Profiles_1(Dictionary_2_t3304648224 * value)
	{
		___Profiles_1 = value;
		Il2CppCodeGenWriteBarrier((&___Profiles_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuforia.WebCamProfile/ProfileCollection
struct ProfileCollection_t901995765_marshaled_pinvoke
{
	ProfileData_t3519391925  ___DefaultProfile_0;
	Dictionary_2_t3304648224 * ___Profiles_1;
};
// Native definition for COM marshalling of Vuforia.WebCamProfile/ProfileCollection
struct ProfileCollection_t901995765_marshaled_com
{
	ProfileData_t3519391925  ___DefaultProfile_0;
	Dictionary_2_t3304648224 * ___Profiles_1;
};
#endif // PROFILECOLLECTION_T901995765_H
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
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef WORDMANAGER_T3100853168_H
#define WORDMANAGER_T3100853168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordManager
struct  WordManager_t3100853168  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult> Vuforia.WordManager::mTrackedWords
	Dictionary_2_t2529487133 * ___mTrackedWords_0;
	// System.Collections.Generic.List`1<Vuforia.WordResult> Vuforia.WordManager::mNewWords
	List_1_t817881248 * ___mNewWords_1;
	// System.Collections.Generic.List`1<Vuforia.Word> Vuforia.WordManager::mLostWords
	List_1_t2588113360 * ___mLostWords_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordBehaviour> Vuforia.WordManager::mActiveWordBehaviours
	Dictionary_2_t3393143310 * ___mActiveWordBehaviours_3;
	// System.Collections.Generic.List`1<Vuforia.WordBehaviour> Vuforia.WordManager::mWordBehavioursMarkedForDeletion
	List_1_t1681537425 * ___mWordBehavioursMarkedForDeletion_4;
	// System.Collections.Generic.List`1<Vuforia.Word> Vuforia.WordManager::mWaitingQueue
	List_1_t2588113360 * ___mWaitingQueue_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordBehaviour>> Vuforia.WordManager::mWordBehaviours
	Dictionary_2_t1466793724 * ___mWordBehaviours_7;
	// System.Boolean Vuforia.WordManager::mAutomaticTemplate
	bool ___mAutomaticTemplate_8;
	// System.Int32 Vuforia.WordManager::mMaxInstances
	int32_t ___mMaxInstances_9;
	// Vuforia.WordPrefabCreationMode Vuforia.WordManager::mWordPrefabCreationMode
	int32_t ___mWordPrefabCreationMode_10;
	// Vuforia.VuforiaARController Vuforia.WordManager::mVuforiaBehaviour
	VuforiaARController_t1876945237 * ___mVuforiaBehaviour_11;

public:
	inline static int32_t get_offset_of_mTrackedWords_0() { return static_cast<int32_t>(offsetof(WordManager_t3100853168, ___mTrackedWords_0)); }
	inline Dictionary_2_t2529487133 * get_mTrackedWords_0() const { return ___mTrackedWords_0; }
	inline Dictionary_2_t2529487133 ** get_address_of_mTrackedWords_0() { return &___mTrackedWords_0; }
	inline void set_mTrackedWords_0(Dictionary_2_t2529487133 * value)
	{
		___mTrackedWords_0 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackedWords_0), value);
	}

	inline static int32_t get_offset_of_mNewWords_1() { return static_cast<int32_t>(offsetof(WordManager_t3100853168, ___mNewWords_1)); }
	inline List_1_t817881248 * get_mNewWords_1() const { return ___mNewWords_1; }
	inline List_1_t817881248 ** get_address_of_mNewWords_1() { return &___mNewWords_1; }
	inline void set_mNewWords_1(List_1_t817881248 * value)
	{
		___mNewWords_1 = value;
		Il2CppCodeGenWriteBarrier((&___mNewWords_1), value);
	}

	inline static int32_t get_offset_of_mLostWords_2() { return static_cast<int32_t>(offsetof(WordManager_t3100853168, ___mLostWords_2)); }
	inline List_1_t2588113360 * get_mLostWords_2() const { return ___mLostWords_2; }
	inline List_1_t2588113360 ** get_address_of_mLostWords_2() { return &___mLostWords_2; }
	inline void set_mLostWords_2(List_1_t2588113360 * value)
	{
		___mLostWords_2 = value;
		Il2CppCodeGenWriteBarrier((&___mLostWords_2), value);
	}

	inline static int32_t get_offset_of_mActiveWordBehaviours_3() { return static_cast<int32_t>(offsetof(WordManager_t3100853168, ___mActiveWordBehaviours_3)); }
	inline Dictionary_2_t3393143310 * get_mActiveWordBehaviours_3() const { return ___mActiveWordBehaviours_3; }
	inline Dictionary_2_t3393143310 ** get_address_of_mActiveWordBehaviours_3() { return &___mActiveWordBehaviours_3; }
	inline void set_mActiveWordBehaviours_3(Dictionary_2_t3393143310 * value)
	{
		___mActiveWordBehaviours_3 = value;
		Il2CppCodeGenWriteBarrier((&___mActiveWordBehaviours_3), value);
	}

	inline static int32_t get_offset_of_mWordBehavioursMarkedForDeletion_4() { return static_cast<int32_t>(offsetof(WordManager_t3100853168, ___mWordBehavioursMarkedForDeletion_4)); }
	inline List_1_t1681537425 * get_mWordBehavioursMarkedForDeletion_4() const { return ___mWordBehavioursMarkedForDeletion_4; }
	inline List_1_t1681537425 ** get_address_of_mWordBehavioursMarkedForDeletion_4() { return &___mWordBehavioursMarkedForDeletion_4; }
	inline void set_mWordBehavioursMarkedForDeletion_4(List_1_t1681537425 * value)
	{
		___mWordBehavioursMarkedForDeletion_4 = value;
		Il2CppCodeGenWriteBarrier((&___mWordBehavioursMarkedForDeletion_4), value);
	}

	inline static int32_t get_offset_of_mWaitingQueue_5() { return static_cast<int32_t>(offsetof(WordManager_t3100853168, ___mWaitingQueue_5)); }
	inline List_1_t2588113360 * get_mWaitingQueue_5() const { return ___mWaitingQueue_5; }
	inline List_1_t2588113360 ** get_address_of_mWaitingQueue_5() { return &___mWaitingQueue_5; }
	inline void set_mWaitingQueue_5(List_1_t2588113360 * value)
	{
		___mWaitingQueue_5 = value;
		Il2CppCodeGenWriteBarrier((&___mWaitingQueue_5), value);
	}

	inline static int32_t get_offset_of_mWordBehaviours_7() { return static_cast<int32_t>(offsetof(WordManager_t3100853168, ___mWordBehaviours_7)); }
	inline Dictionary_2_t1466793724 * get_mWordBehaviours_7() const { return ___mWordBehaviours_7; }
	inline Dictionary_2_t1466793724 ** get_address_of_mWordBehaviours_7() { return &___mWordBehaviours_7; }
	inline void set_mWordBehaviours_7(Dictionary_2_t1466793724 * value)
	{
		___mWordBehaviours_7 = value;
		Il2CppCodeGenWriteBarrier((&___mWordBehaviours_7), value);
	}

	inline static int32_t get_offset_of_mAutomaticTemplate_8() { return static_cast<int32_t>(offsetof(WordManager_t3100853168, ___mAutomaticTemplate_8)); }
	inline bool get_mAutomaticTemplate_8() const { return ___mAutomaticTemplate_8; }
	inline bool* get_address_of_mAutomaticTemplate_8() { return &___mAutomaticTemplate_8; }
	inline void set_mAutomaticTemplate_8(bool value)
	{
		___mAutomaticTemplate_8 = value;
	}

	inline static int32_t get_offset_of_mMaxInstances_9() { return static_cast<int32_t>(offsetof(WordManager_t3100853168, ___mMaxInstances_9)); }
	inline int32_t get_mMaxInstances_9() const { return ___mMaxInstances_9; }
	inline int32_t* get_address_of_mMaxInstances_9() { return &___mMaxInstances_9; }
	inline void set_mMaxInstances_9(int32_t value)
	{
		___mMaxInstances_9 = value;
	}

	inline static int32_t get_offset_of_mWordPrefabCreationMode_10() { return static_cast<int32_t>(offsetof(WordManager_t3100853168, ___mWordPrefabCreationMode_10)); }
	inline int32_t get_mWordPrefabCreationMode_10() const { return ___mWordPrefabCreationMode_10; }
	inline int32_t* get_address_of_mWordPrefabCreationMode_10() { return &___mWordPrefabCreationMode_10; }
	inline void set_mWordPrefabCreationMode_10(int32_t value)
	{
		___mWordPrefabCreationMode_10 = value;
	}

	inline static int32_t get_offset_of_mVuforiaBehaviour_11() { return static_cast<int32_t>(offsetof(WordManager_t3100853168, ___mVuforiaBehaviour_11)); }
	inline VuforiaARController_t1876945237 * get_mVuforiaBehaviour_11() const { return ___mVuforiaBehaviour_11; }
	inline VuforiaARController_t1876945237 ** get_address_of_mVuforiaBehaviour_11() { return &___mVuforiaBehaviour_11; }
	inline void set_mVuforiaBehaviour_11(VuforiaARController_t1876945237 * value)
	{
		___mVuforiaBehaviour_11 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDMANAGER_T3100853168_H
#ifndef ENUMERATOR_T2537713152_H
#define ENUMERATOR_T2537713152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>
struct  Enumerator_t2537713152 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::host_enumerator
	Enumerator_t3923002270  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t2537713152, ___host_enumerator_0)); }
	inline Enumerator_t3923002270  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t3923002270 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t3923002270  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2537713152_H
#ifndef ENUMERATOR_T3962036967_H
#define ENUMERATOR_T3962036967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.WordBehaviour>
struct  Enumerator_t3962036967 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::host_enumerator
	Enumerator_t1052358789  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t3962036967, ___host_enumerator_0)); }
	inline Enumerator_t1052358789  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t1052358789 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t1052358789  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3962036967_H
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
#ifndef DATASET_T3286034874_H
#define DATASET_T3286034874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSet
struct  DataSet_t3286034874  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.DataSet::mDataSetPtr
	intptr_t ___mDataSetPtr_0;
	// System.String Vuforia.DataSet::mPath
	String_t* ___mPath_1;
	// Vuforia.VuforiaUnity/StorageType Vuforia.DataSet::mStorageType
	int32_t ___mStorageType_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable> Vuforia.DataSet::mTrackablesDict
	Dictionary_2_t1340713322 * ___mTrackablesDict_3;

public:
	inline static int32_t get_offset_of_mDataSetPtr_0() { return static_cast<int32_t>(offsetof(DataSet_t3286034874, ___mDataSetPtr_0)); }
	inline intptr_t get_mDataSetPtr_0() const { return ___mDataSetPtr_0; }
	inline intptr_t* get_address_of_mDataSetPtr_0() { return &___mDataSetPtr_0; }
	inline void set_mDataSetPtr_0(intptr_t value)
	{
		___mDataSetPtr_0 = value;
	}

	inline static int32_t get_offset_of_mPath_1() { return static_cast<int32_t>(offsetof(DataSet_t3286034874, ___mPath_1)); }
	inline String_t* get_mPath_1() const { return ___mPath_1; }
	inline String_t** get_address_of_mPath_1() { return &___mPath_1; }
	inline void set_mPath_1(String_t* value)
	{
		___mPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___mPath_1), value);
	}

	inline static int32_t get_offset_of_mStorageType_2() { return static_cast<int32_t>(offsetof(DataSet_t3286034874, ___mStorageType_2)); }
	inline int32_t get_mStorageType_2() const { return ___mStorageType_2; }
	inline int32_t* get_address_of_mStorageType_2() { return &___mStorageType_2; }
	inline void set_mStorageType_2(int32_t value)
	{
		___mStorageType_2 = value;
	}

	inline static int32_t get_offset_of_mTrackablesDict_3() { return static_cast<int32_t>(offsetof(DataSet_t3286034874, ___mTrackablesDict_3)); }
	inline Dictionary_2_t1340713322 * get_mTrackablesDict_3() const { return ___mTrackablesDict_3; }
	inline Dictionary_2_t1340713322 ** get_address_of_mTrackablesDict_3() { return &___mTrackablesDict_3; }
	inline void set_mTrackablesDict_3(Dictionary_2_t1340713322 * value)
	{
		___mTrackablesDict_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackablesDict_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASET_T3286034874_H
#ifndef ENUMERATOR_T701438809_H
#define ENUMERATOR_T701438809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct  Enumerator_t701438809 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::host_enumerator
	Enumerator_t2086727927  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t701438809, ___host_enumerator_0)); }
	inline Enumerator_t2086727927  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t2086727927 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t2086727927  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T701438809_H
#ifndef ENUMERATOR_T2035687381_H
#define ENUMERATOR_T2035687381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Collections.Generic.List`1<Vuforia.WordBehaviour>>
struct  Enumerator_t2035687381 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::host_enumerator
	Enumerator_t3420976499  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t2035687381, ___host_enumerator_0)); }
	inline Enumerator_t3420976499  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t3420976499 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t3420976499  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2035687381_H
#ifndef VUFORIARENDERER_T3433045970_H
#define VUFORIARENDERER_T3433045970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer
struct  VuforiaRenderer_t3433045970  : public RuntimeObject
{
public:
	// Vuforia.VuforiaRenderer/VideoBGCfgData Vuforia.VuforiaRenderer::mVideoBGConfig
	VideoBGCfgData_t994527297  ___mVideoBGConfig_1;
	// System.Boolean Vuforia.VuforiaRenderer::mVideoBGConfigSet
	bool ___mVideoBGConfigSet_2;
	// UnityEngine.Texture Vuforia.VuforiaRenderer::mVideoBackgroundTexture
	Texture_t3661962703 * ___mVideoBackgroundTexture_3;
	// System.Boolean Vuforia.VuforiaRenderer::mBackgroundTextureHasChanged
	bool ___mBackgroundTextureHasChanged_4;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaRenderer::mLastSetReflection
	int32_t ___mLastSetReflection_5;
	// System.IntPtr Vuforia.VuforiaRenderer::mNativeRenderingCallback
	intptr_t ___mNativeRenderingCallback_6;

public:
	inline static int32_t get_offset_of_mVideoBGConfig_1() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mVideoBGConfig_1)); }
	inline VideoBGCfgData_t994527297  get_mVideoBGConfig_1() const { return ___mVideoBGConfig_1; }
	inline VideoBGCfgData_t994527297 * get_address_of_mVideoBGConfig_1() { return &___mVideoBGConfig_1; }
	inline void set_mVideoBGConfig_1(VideoBGCfgData_t994527297  value)
	{
		___mVideoBGConfig_1 = value;
	}

	inline static int32_t get_offset_of_mVideoBGConfigSet_2() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mVideoBGConfigSet_2)); }
	inline bool get_mVideoBGConfigSet_2() const { return ___mVideoBGConfigSet_2; }
	inline bool* get_address_of_mVideoBGConfigSet_2() { return &___mVideoBGConfigSet_2; }
	inline void set_mVideoBGConfigSet_2(bool value)
	{
		___mVideoBGConfigSet_2 = value;
	}

	inline static int32_t get_offset_of_mVideoBackgroundTexture_3() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mVideoBackgroundTexture_3)); }
	inline Texture_t3661962703 * get_mVideoBackgroundTexture_3() const { return ___mVideoBackgroundTexture_3; }
	inline Texture_t3661962703 ** get_address_of_mVideoBackgroundTexture_3() { return &___mVideoBackgroundTexture_3; }
	inline void set_mVideoBackgroundTexture_3(Texture_t3661962703 * value)
	{
		___mVideoBackgroundTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBackgroundTexture_3), value);
	}

	inline static int32_t get_offset_of_mBackgroundTextureHasChanged_4() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mBackgroundTextureHasChanged_4)); }
	inline bool get_mBackgroundTextureHasChanged_4() const { return ___mBackgroundTextureHasChanged_4; }
	inline bool* get_address_of_mBackgroundTextureHasChanged_4() { return &___mBackgroundTextureHasChanged_4; }
	inline void set_mBackgroundTextureHasChanged_4(bool value)
	{
		___mBackgroundTextureHasChanged_4 = value;
	}

	inline static int32_t get_offset_of_mLastSetReflection_5() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mLastSetReflection_5)); }
	inline int32_t get_mLastSetReflection_5() const { return ___mLastSetReflection_5; }
	inline int32_t* get_address_of_mLastSetReflection_5() { return &___mLastSetReflection_5; }
	inline void set_mLastSetReflection_5(int32_t value)
	{
		___mLastSetReflection_5 = value;
	}

	inline static int32_t get_offset_of_mNativeRenderingCallback_6() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mNativeRenderingCallback_6)); }
	inline intptr_t get_mNativeRenderingCallback_6() const { return ___mNativeRenderingCallback_6; }
	inline intptr_t* get_address_of_mNativeRenderingCallback_6() { return &___mNativeRenderingCallback_6; }
	inline void set_mNativeRenderingCallback_6(intptr_t value)
	{
		___mNativeRenderingCallback_6 = value;
	}
};

struct VuforiaRenderer_t3433045970_StaticFields
{
public:
	// Vuforia.VuforiaRenderer Vuforia.VuforiaRenderer::sInstance
	VuforiaRenderer_t3433045970 * ___sInstance_0;

public:
	inline static int32_t get_offset_of_sInstance_0() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970_StaticFields, ___sInstance_0)); }
	inline VuforiaRenderer_t3433045970 * get_sInstance_0() const { return ___sInstance_0; }
	inline VuforiaRenderer_t3433045970 ** get_address_of_sInstance_0() { return &___sInstance_0; }
	inline void set_sInstance_0(VuforiaRenderer_t3433045970 * value)
	{
		___sInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___sInstance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIARENDERER_T3433045970_H
#ifndef CUSTOMDATASETTARGETSIZE_T2186564284_H
#define CUSTOMDATASETTARGETSIZE_T2186564284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CustomDataSetTargetSize
struct  CustomDataSetTargetSize_t2186564284  : public DataSetTargetSize_t648464127
{
public:
	// System.Boolean Vuforia.CustomDataSetTargetSize::mInvokeBeforeNativeCall
	bool ___mInvokeBeforeNativeCall_3;
	// System.Action`1<UnityEngine.Vector3> Vuforia.CustomDataSetTargetSize::mSetSizeAction
	Action_1_t3894781059 * ___mSetSizeAction_4;

public:
	inline static int32_t get_offset_of_mInvokeBeforeNativeCall_3() { return static_cast<int32_t>(offsetof(CustomDataSetTargetSize_t2186564284, ___mInvokeBeforeNativeCall_3)); }
	inline bool get_mInvokeBeforeNativeCall_3() const { return ___mInvokeBeforeNativeCall_3; }
	inline bool* get_address_of_mInvokeBeforeNativeCall_3() { return &___mInvokeBeforeNativeCall_3; }
	inline void set_mInvokeBeforeNativeCall_3(bool value)
	{
		___mInvokeBeforeNativeCall_3 = value;
	}

	inline static int32_t get_offset_of_mSetSizeAction_4() { return static_cast<int32_t>(offsetof(CustomDataSetTargetSize_t2186564284, ___mSetSizeAction_4)); }
	inline Action_1_t3894781059 * get_mSetSizeAction_4() const { return ___mSetSizeAction_4; }
	inline Action_1_t3894781059 ** get_address_of_mSetSizeAction_4() { return &___mSetSizeAction_4; }
	inline void set_mSetSizeAction_4(Action_1_t3894781059 * value)
	{
		___mSetSizeAction_4 = value;
		Il2CppCodeGenWriteBarrier((&___mSetSizeAction_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMDATASETTARGETSIZE_T2186564284_H
#ifndef WEBCAM_T2427002488_H
#define WEBCAM_T2427002488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCam
struct  WebCam_t2427002488  : public RuntimeObject
{
public:
	// UnityEngine.Camera[] Vuforia.WebCam::mARCameras
	CameraU5BU5D_t1709987734* ___mARCameras_0;
	// System.Int32[] Vuforia.WebCam::mOriginalCameraCullMask
	Int32U5BU5D_t385246372* ___mOriginalCameraCullMask_1;
	// Vuforia.IWebCamTexAdaptor Vuforia.WebCam::mWebCamTexture
	RuntimeObject* ___mWebCamTexture_2;
	// Vuforia.CameraDevice/VideoModeData Vuforia.WebCam::mVideoModeData
	VideoModeData_t2066817255  ___mVideoModeData_3;
	// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.WebCam::mVideoTextureInfo
	VideoTextureInfo_t1805965052  ___mVideoTextureInfo_4;
	// Vuforia.TextureRenderer Vuforia.WebCam::mTextureRenderer
	TextureRenderer_t3278815845 * ___mTextureRenderer_5;
	// UnityEngine.Texture2D Vuforia.WebCam::mBufferReadTexture
	Texture2D_t3840446185 * ___mBufferReadTexture_6;
	// UnityEngine.Rect Vuforia.WebCam::mReadPixelsRect
	Rect_t2360479859  ___mReadPixelsRect_7;
	// Vuforia.WebCamProfile/ProfileData Vuforia.WebCam::mWebCamProfile
	ProfileData_t3519391925  ___mWebCamProfile_8;
	// System.Boolean Vuforia.WebCam::mFlipHorizontally
	bool ___mFlipHorizontally_9;
	// System.Boolean Vuforia.WebCam::mIsDirty
	bool ___mIsDirty_10;
	// System.Int32 Vuforia.WebCam::mLastFrameIdx
	int32_t ___mLastFrameIdx_11;
	// System.Int32 Vuforia.WebCam::mRenderTextureLayer
	int32_t ___mRenderTextureLayer_12;
	// System.Boolean Vuforia.WebCam::mWebcamPlaying
	bool ___mWebcamPlaying_13;
	// System.Boolean Vuforia.WebCam::<IsTextureSizeAvailable>k__BackingField
	bool ___U3CIsTextureSizeAvailableU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_mARCameras_0() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mARCameras_0)); }
	inline CameraU5BU5D_t1709987734* get_mARCameras_0() const { return ___mARCameras_0; }
	inline CameraU5BU5D_t1709987734** get_address_of_mARCameras_0() { return &___mARCameras_0; }
	inline void set_mARCameras_0(CameraU5BU5D_t1709987734* value)
	{
		___mARCameras_0 = value;
		Il2CppCodeGenWriteBarrier((&___mARCameras_0), value);
	}

	inline static int32_t get_offset_of_mOriginalCameraCullMask_1() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mOriginalCameraCullMask_1)); }
	inline Int32U5BU5D_t385246372* get_mOriginalCameraCullMask_1() const { return ___mOriginalCameraCullMask_1; }
	inline Int32U5BU5D_t385246372** get_address_of_mOriginalCameraCullMask_1() { return &___mOriginalCameraCullMask_1; }
	inline void set_mOriginalCameraCullMask_1(Int32U5BU5D_t385246372* value)
	{
		___mOriginalCameraCullMask_1 = value;
		Il2CppCodeGenWriteBarrier((&___mOriginalCameraCullMask_1), value);
	}

	inline static int32_t get_offset_of_mWebCamTexture_2() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mWebCamTexture_2)); }
	inline RuntimeObject* get_mWebCamTexture_2() const { return ___mWebCamTexture_2; }
	inline RuntimeObject** get_address_of_mWebCamTexture_2() { return &___mWebCamTexture_2; }
	inline void set_mWebCamTexture_2(RuntimeObject* value)
	{
		___mWebCamTexture_2 = value;
		Il2CppCodeGenWriteBarrier((&___mWebCamTexture_2), value);
	}

	inline static int32_t get_offset_of_mVideoModeData_3() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mVideoModeData_3)); }
	inline VideoModeData_t2066817255  get_mVideoModeData_3() const { return ___mVideoModeData_3; }
	inline VideoModeData_t2066817255 * get_address_of_mVideoModeData_3() { return &___mVideoModeData_3; }
	inline void set_mVideoModeData_3(VideoModeData_t2066817255  value)
	{
		___mVideoModeData_3 = value;
	}

	inline static int32_t get_offset_of_mVideoTextureInfo_4() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mVideoTextureInfo_4)); }
	inline VideoTextureInfo_t1805965052  get_mVideoTextureInfo_4() const { return ___mVideoTextureInfo_4; }
	inline VideoTextureInfo_t1805965052 * get_address_of_mVideoTextureInfo_4() { return &___mVideoTextureInfo_4; }
	inline void set_mVideoTextureInfo_4(VideoTextureInfo_t1805965052  value)
	{
		___mVideoTextureInfo_4 = value;
	}

	inline static int32_t get_offset_of_mTextureRenderer_5() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mTextureRenderer_5)); }
	inline TextureRenderer_t3278815845 * get_mTextureRenderer_5() const { return ___mTextureRenderer_5; }
	inline TextureRenderer_t3278815845 ** get_address_of_mTextureRenderer_5() { return &___mTextureRenderer_5; }
	inline void set_mTextureRenderer_5(TextureRenderer_t3278815845 * value)
	{
		___mTextureRenderer_5 = value;
		Il2CppCodeGenWriteBarrier((&___mTextureRenderer_5), value);
	}

	inline static int32_t get_offset_of_mBufferReadTexture_6() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mBufferReadTexture_6)); }
	inline Texture2D_t3840446185 * get_mBufferReadTexture_6() const { return ___mBufferReadTexture_6; }
	inline Texture2D_t3840446185 ** get_address_of_mBufferReadTexture_6() { return &___mBufferReadTexture_6; }
	inline void set_mBufferReadTexture_6(Texture2D_t3840446185 * value)
	{
		___mBufferReadTexture_6 = value;
		Il2CppCodeGenWriteBarrier((&___mBufferReadTexture_6), value);
	}

	inline static int32_t get_offset_of_mReadPixelsRect_7() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mReadPixelsRect_7)); }
	inline Rect_t2360479859  get_mReadPixelsRect_7() const { return ___mReadPixelsRect_7; }
	inline Rect_t2360479859 * get_address_of_mReadPixelsRect_7() { return &___mReadPixelsRect_7; }
	inline void set_mReadPixelsRect_7(Rect_t2360479859  value)
	{
		___mReadPixelsRect_7 = value;
	}

	inline static int32_t get_offset_of_mWebCamProfile_8() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mWebCamProfile_8)); }
	inline ProfileData_t3519391925  get_mWebCamProfile_8() const { return ___mWebCamProfile_8; }
	inline ProfileData_t3519391925 * get_address_of_mWebCamProfile_8() { return &___mWebCamProfile_8; }
	inline void set_mWebCamProfile_8(ProfileData_t3519391925  value)
	{
		___mWebCamProfile_8 = value;
	}

	inline static int32_t get_offset_of_mFlipHorizontally_9() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mFlipHorizontally_9)); }
	inline bool get_mFlipHorizontally_9() const { return ___mFlipHorizontally_9; }
	inline bool* get_address_of_mFlipHorizontally_9() { return &___mFlipHorizontally_9; }
	inline void set_mFlipHorizontally_9(bool value)
	{
		___mFlipHorizontally_9 = value;
	}

	inline static int32_t get_offset_of_mIsDirty_10() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mIsDirty_10)); }
	inline bool get_mIsDirty_10() const { return ___mIsDirty_10; }
	inline bool* get_address_of_mIsDirty_10() { return &___mIsDirty_10; }
	inline void set_mIsDirty_10(bool value)
	{
		___mIsDirty_10 = value;
	}

	inline static int32_t get_offset_of_mLastFrameIdx_11() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mLastFrameIdx_11)); }
	inline int32_t get_mLastFrameIdx_11() const { return ___mLastFrameIdx_11; }
	inline int32_t* get_address_of_mLastFrameIdx_11() { return &___mLastFrameIdx_11; }
	inline void set_mLastFrameIdx_11(int32_t value)
	{
		___mLastFrameIdx_11 = value;
	}

	inline static int32_t get_offset_of_mRenderTextureLayer_12() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mRenderTextureLayer_12)); }
	inline int32_t get_mRenderTextureLayer_12() const { return ___mRenderTextureLayer_12; }
	inline int32_t* get_address_of_mRenderTextureLayer_12() { return &___mRenderTextureLayer_12; }
	inline void set_mRenderTextureLayer_12(int32_t value)
	{
		___mRenderTextureLayer_12 = value;
	}

	inline static int32_t get_offset_of_mWebcamPlaying_13() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___mWebcamPlaying_13)); }
	inline bool get_mWebcamPlaying_13() const { return ___mWebcamPlaying_13; }
	inline bool* get_address_of_mWebcamPlaying_13() { return &___mWebcamPlaying_13; }
	inline void set_mWebcamPlaying_13(bool value)
	{
		___mWebcamPlaying_13 = value;
	}

	inline static int32_t get_offset_of_U3CIsTextureSizeAvailableU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(WebCam_t2427002488, ___U3CIsTextureSizeAvailableU3Ek__BackingField_14)); }
	inline bool get_U3CIsTextureSizeAvailableU3Ek__BackingField_14() const { return ___U3CIsTextureSizeAvailableU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIsTextureSizeAvailableU3Ek__BackingField_14() { return &___U3CIsTextureSizeAvailableU3Ek__BackingField_14; }
	inline void set_U3CIsTextureSizeAvailableU3Ek__BackingField_14(bool value)
	{
		___U3CIsTextureSizeAvailableU3Ek__BackingField_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAM_T2427002488_H
#ifndef WEBCAMPROFILE_T4166408645_H
#define WEBCAMPROFILE_T4166408645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamProfile
struct  WebCamProfile_t4166408645  : public RuntimeObject
{
public:
	// Vuforia.WebCamProfile/ProfileCollection Vuforia.WebCamProfile::mProfileCollection
	ProfileCollection_t901995765  ___mProfileCollection_0;

public:
	inline static int32_t get_offset_of_mProfileCollection_0() { return static_cast<int32_t>(offsetof(WebCamProfile_t4166408645, ___mProfileCollection_0)); }
	inline ProfileCollection_t901995765  get_mProfileCollection_0() const { return ___mProfileCollection_0; }
	inline ProfileCollection_t901995765 * get_address_of_mProfileCollection_0() { return &___mProfileCollection_0; }
	inline void set_mProfileCollection_0(ProfileCollection_t901995765  value)
	{
		___mProfileCollection_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMPROFILE_T4166408645_H
#ifndef DEFAULTWEBCAMTEXADAPTOR_T2452636845_H
#define DEFAULTWEBCAMTEXADAPTOR_T2452636845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DefaultWebCamTexAdaptor
struct  DefaultWebCamTexAdaptor_t2452636845  : public RuntimeObject
{
public:
	// UnityEngine.Texture2D Vuforia.DefaultWebCamTexAdaptor::mTexture
	Texture2D_t3840446185 * ___mTexture_0;
	// System.Boolean Vuforia.DefaultWebCamTexAdaptor::mPseudoPlaying
	bool ___mPseudoPlaying_1;
	// System.Double Vuforia.DefaultWebCamTexAdaptor::mMsBetweenFrames
	double ___mMsBetweenFrames_2;
	// System.DateTime Vuforia.DefaultWebCamTexAdaptor::mLastFrame
	DateTime_t3738529785  ___mLastFrame_3;

public:
	inline static int32_t get_offset_of_mTexture_0() { return static_cast<int32_t>(offsetof(DefaultWebCamTexAdaptor_t2452636845, ___mTexture_0)); }
	inline Texture2D_t3840446185 * get_mTexture_0() const { return ___mTexture_0; }
	inline Texture2D_t3840446185 ** get_address_of_mTexture_0() { return &___mTexture_0; }
	inline void set_mTexture_0(Texture2D_t3840446185 * value)
	{
		___mTexture_0 = value;
		Il2CppCodeGenWriteBarrier((&___mTexture_0), value);
	}

	inline static int32_t get_offset_of_mPseudoPlaying_1() { return static_cast<int32_t>(offsetof(DefaultWebCamTexAdaptor_t2452636845, ___mPseudoPlaying_1)); }
	inline bool get_mPseudoPlaying_1() const { return ___mPseudoPlaying_1; }
	inline bool* get_address_of_mPseudoPlaying_1() { return &___mPseudoPlaying_1; }
	inline void set_mPseudoPlaying_1(bool value)
	{
		___mPseudoPlaying_1 = value;
	}

	inline static int32_t get_offset_of_mMsBetweenFrames_2() { return static_cast<int32_t>(offsetof(DefaultWebCamTexAdaptor_t2452636845, ___mMsBetweenFrames_2)); }
	inline double get_mMsBetweenFrames_2() const { return ___mMsBetweenFrames_2; }
	inline double* get_address_of_mMsBetweenFrames_2() { return &___mMsBetweenFrames_2; }
	inline void set_mMsBetweenFrames_2(double value)
	{
		___mMsBetweenFrames_2 = value;
	}

	inline static int32_t get_offset_of_mLastFrame_3() { return static_cast<int32_t>(offsetof(DefaultWebCamTexAdaptor_t2452636845, ___mLastFrame_3)); }
	inline DateTime_t3738529785  get_mLastFrame_3() const { return ___mLastFrame_3; }
	inline DateTime_t3738529785 * get_address_of_mLastFrame_3() { return &___mLastFrame_3; }
	inline void set_mLastFrame_3(DateTime_t3738529785  value)
	{
		___mLastFrame_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTWEBCAMTEXADAPTOR_T2452636845_H
#ifndef WEBCAMTEXTURE_T1514609158_H
#define WEBCAMTEXTURE_T1514609158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WebCamTexture
struct  WebCamTexture_t1514609158  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMTEXTURE_T1514609158_H
#ifndef RENDERTEXTURE_T2108887433_H
#define RENDERTEXTURE_T2108887433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t2108887433  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T2108887433_H
#ifndef VUFORIACONFIGURATION_T1763229349_H
#define VUFORIACONFIGURATION_T1763229349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration
struct  VuforiaConfiguration_t1763229349  : public ScriptableObject_t2528358522
{
public:
	// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::vuforia
	GenericVuforiaConfiguration_t3697830469 * ___vuforia_4;
	// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration Vuforia.VuforiaConfiguration::digitalEyewear
	DigitalEyewearConfiguration_t546560202 * ___digitalEyewear_5;
	// Vuforia.VuforiaConfiguration/DatabaseLoadConfiguration Vuforia.VuforiaConfiguration::databaseLoad
	DatabaseLoadConfiguration_t449697234 * ___databaseLoad_6;
	// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration Vuforia.VuforiaConfiguration::videoBackground
	VideoBackgroundConfiguration_t3392414655 * ___videoBackground_7;
	// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration Vuforia.VuforiaConfiguration::deviceTracker
	DeviceTrackerConfiguration_t721467671 * ___deviceTracker_8;
	// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration Vuforia.VuforiaConfiguration::smartTerrain
	SmartTerrainConfiguration_t1514074484 * ___smartTerrain_9;
	// Vuforia.VuforiaConfiguration/WebCamConfiguration Vuforia.VuforiaConfiguration::webcam
	WebCamConfiguration_t1101614731 * ___webcam_10;

public:
	inline static int32_t get_offset_of_vuforia_4() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___vuforia_4)); }
	inline GenericVuforiaConfiguration_t3697830469 * get_vuforia_4() const { return ___vuforia_4; }
	inline GenericVuforiaConfiguration_t3697830469 ** get_address_of_vuforia_4() { return &___vuforia_4; }
	inline void set_vuforia_4(GenericVuforiaConfiguration_t3697830469 * value)
	{
		___vuforia_4 = value;
		Il2CppCodeGenWriteBarrier((&___vuforia_4), value);
	}

	inline static int32_t get_offset_of_digitalEyewear_5() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___digitalEyewear_5)); }
	inline DigitalEyewearConfiguration_t546560202 * get_digitalEyewear_5() const { return ___digitalEyewear_5; }
	inline DigitalEyewearConfiguration_t546560202 ** get_address_of_digitalEyewear_5() { return &___digitalEyewear_5; }
	inline void set_digitalEyewear_5(DigitalEyewearConfiguration_t546560202 * value)
	{
		___digitalEyewear_5 = value;
		Il2CppCodeGenWriteBarrier((&___digitalEyewear_5), value);
	}

	inline static int32_t get_offset_of_databaseLoad_6() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___databaseLoad_6)); }
	inline DatabaseLoadConfiguration_t449697234 * get_databaseLoad_6() const { return ___databaseLoad_6; }
	inline DatabaseLoadConfiguration_t449697234 ** get_address_of_databaseLoad_6() { return &___databaseLoad_6; }
	inline void set_databaseLoad_6(DatabaseLoadConfiguration_t449697234 * value)
	{
		___databaseLoad_6 = value;
		Il2CppCodeGenWriteBarrier((&___databaseLoad_6), value);
	}

	inline static int32_t get_offset_of_videoBackground_7() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___videoBackground_7)); }
	inline VideoBackgroundConfiguration_t3392414655 * get_videoBackground_7() const { return ___videoBackground_7; }
	inline VideoBackgroundConfiguration_t3392414655 ** get_address_of_videoBackground_7() { return &___videoBackground_7; }
	inline void set_videoBackground_7(VideoBackgroundConfiguration_t3392414655 * value)
	{
		___videoBackground_7 = value;
		Il2CppCodeGenWriteBarrier((&___videoBackground_7), value);
	}

	inline static int32_t get_offset_of_deviceTracker_8() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___deviceTracker_8)); }
	inline DeviceTrackerConfiguration_t721467671 * get_deviceTracker_8() const { return ___deviceTracker_8; }
	inline DeviceTrackerConfiguration_t721467671 ** get_address_of_deviceTracker_8() { return &___deviceTracker_8; }
	inline void set_deviceTracker_8(DeviceTrackerConfiguration_t721467671 * value)
	{
		___deviceTracker_8 = value;
		Il2CppCodeGenWriteBarrier((&___deviceTracker_8), value);
	}

	inline static int32_t get_offset_of_smartTerrain_9() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___smartTerrain_9)); }
	inline SmartTerrainConfiguration_t1514074484 * get_smartTerrain_9() const { return ___smartTerrain_9; }
	inline SmartTerrainConfiguration_t1514074484 ** get_address_of_smartTerrain_9() { return &___smartTerrain_9; }
	inline void set_smartTerrain_9(SmartTerrainConfiguration_t1514074484 * value)
	{
		___smartTerrain_9 = value;
		Il2CppCodeGenWriteBarrier((&___smartTerrain_9), value);
	}

	inline static int32_t get_offset_of_webcam_10() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___webcam_10)); }
	inline WebCamConfiguration_t1101614731 * get_webcam_10() const { return ___webcam_10; }
	inline WebCamConfiguration_t1101614731 ** get_address_of_webcam_10() { return &___webcam_10; }
	inline void set_webcam_10(WebCamConfiguration_t1101614731 * value)
	{
		___webcam_10 = value;
		Il2CppCodeGenWriteBarrier((&___webcam_10), value);
	}
};

struct VuforiaConfiguration_t1763229349_StaticFields
{
public:
	// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::mInstance
	VuforiaConfiguration_t1763229349 * ___mInstance_2;
	// System.Object Vuforia.VuforiaConfiguration::mPadlock
	RuntimeObject * ___mPadlock_3;

public:
	inline static int32_t get_offset_of_mInstance_2() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349_StaticFields, ___mInstance_2)); }
	inline VuforiaConfiguration_t1763229349 * get_mInstance_2() const { return ___mInstance_2; }
	inline VuforiaConfiguration_t1763229349 ** get_address_of_mInstance_2() { return &___mInstance_2; }
	inline void set_mInstance_2(VuforiaConfiguration_t1763229349 * value)
	{
		___mInstance_2 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_2), value);
	}

	inline static int32_t get_offset_of_mPadlock_3() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349_StaticFields, ___mPadlock_3)); }
	inline RuntimeObject * get_mPadlock_3() const { return ___mPadlock_3; }
	inline RuntimeObject ** get_address_of_mPadlock_3() { return &___mPadlock_3; }
	inline void set_mPadlock_3(RuntimeObject * value)
	{
		___mPadlock_3 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIACONFIGURATION_T1763229349_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef MESHFILTER_T3523625662_H
#define MESHFILTER_T3523625662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t3523625662  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T3523625662_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef ACTION_1_T3894781059_H
#define ACTION_1_T3894781059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.Vector3>
struct  Action_1_t3894781059  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3894781059_H
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
#ifndef FUNC_3_T3440825513_H
#define FUNC_3_T3440825513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor>
struct  Func_3_t3440825513  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_3_T3440825513_H
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
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
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
#ifndef VUFORIABEHAVIOUR_T2151848540_H
#define VUFORIABEHAVIOUR_T2151848540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaBehaviour
struct  VuforiaBehaviour_t2151848540  : public MonoBehaviour_t3962482529
{
public:
	// Vuforia.VuforiaARController/WorldCenterMode Vuforia.VuforiaBehaviour::mWorldCenterMode
	int32_t ___mWorldCenterMode_3;
	// Vuforia.TrackableBehaviour Vuforia.VuforiaBehaviour::mWorldCenter
	TrackableBehaviour_t1113559212 * ___mWorldCenter_4;
	// System.Action Vuforia.VuforiaBehaviour::AwakeEvent
	Action_t1264377477 * ___AwakeEvent_7;
	// System.Action Vuforia.VuforiaBehaviour::OnEnableEvent
	Action_t1264377477 * ___OnEnableEvent_8;
	// System.Action Vuforia.VuforiaBehaviour::StartEvent
	Action_t1264377477 * ___StartEvent_9;
	// System.Action Vuforia.VuforiaBehaviour::UpdateEvent
	Action_t1264377477 * ___UpdateEvent_10;
	// System.Action Vuforia.VuforiaBehaviour::OnLevelWasLoadedEvent
	Action_t1264377477 * ___OnLevelWasLoadedEvent_11;
	// System.Action`1<System.Boolean> Vuforia.VuforiaBehaviour::OnApplicationPauseEvent
	Action_1_t269755560 * ___OnApplicationPauseEvent_12;
	// System.Action Vuforia.VuforiaBehaviour::OnDisableEvent
	Action_t1264377477 * ___OnDisableEvent_13;
	// System.Action Vuforia.VuforiaBehaviour::OnDestroyEvent
	Action_t1264377477 * ___OnDestroyEvent_14;

public:
	inline static int32_t get_offset_of_mWorldCenterMode_3() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___mWorldCenterMode_3)); }
	inline int32_t get_mWorldCenterMode_3() const { return ___mWorldCenterMode_3; }
	inline int32_t* get_address_of_mWorldCenterMode_3() { return &___mWorldCenterMode_3; }
	inline void set_mWorldCenterMode_3(int32_t value)
	{
		___mWorldCenterMode_3 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_4() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___mWorldCenter_4)); }
	inline TrackableBehaviour_t1113559212 * get_mWorldCenter_4() const { return ___mWorldCenter_4; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mWorldCenter_4() { return &___mWorldCenter_4; }
	inline void set_mWorldCenter_4(TrackableBehaviour_t1113559212 * value)
	{
		___mWorldCenter_4 = value;
		Il2CppCodeGenWriteBarrier((&___mWorldCenter_4), value);
	}

	inline static int32_t get_offset_of_AwakeEvent_7() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___AwakeEvent_7)); }
	inline Action_t1264377477 * get_AwakeEvent_7() const { return ___AwakeEvent_7; }
	inline Action_t1264377477 ** get_address_of_AwakeEvent_7() { return &___AwakeEvent_7; }
	inline void set_AwakeEvent_7(Action_t1264377477 * value)
	{
		___AwakeEvent_7 = value;
		Il2CppCodeGenWriteBarrier((&___AwakeEvent_7), value);
	}

	inline static int32_t get_offset_of_OnEnableEvent_8() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___OnEnableEvent_8)); }
	inline Action_t1264377477 * get_OnEnableEvent_8() const { return ___OnEnableEvent_8; }
	inline Action_t1264377477 ** get_address_of_OnEnableEvent_8() { return &___OnEnableEvent_8; }
	inline void set_OnEnableEvent_8(Action_t1264377477 * value)
	{
		___OnEnableEvent_8 = value;
		Il2CppCodeGenWriteBarrier((&___OnEnableEvent_8), value);
	}

	inline static int32_t get_offset_of_StartEvent_9() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___StartEvent_9)); }
	inline Action_t1264377477 * get_StartEvent_9() const { return ___StartEvent_9; }
	inline Action_t1264377477 ** get_address_of_StartEvent_9() { return &___StartEvent_9; }
	inline void set_StartEvent_9(Action_t1264377477 * value)
	{
		___StartEvent_9 = value;
		Il2CppCodeGenWriteBarrier((&___StartEvent_9), value);
	}

	inline static int32_t get_offset_of_UpdateEvent_10() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___UpdateEvent_10)); }
	inline Action_t1264377477 * get_UpdateEvent_10() const { return ___UpdateEvent_10; }
	inline Action_t1264377477 ** get_address_of_UpdateEvent_10() { return &___UpdateEvent_10; }
	inline void set_UpdateEvent_10(Action_t1264377477 * value)
	{
		___UpdateEvent_10 = value;
		Il2CppCodeGenWriteBarrier((&___UpdateEvent_10), value);
	}

	inline static int32_t get_offset_of_OnLevelWasLoadedEvent_11() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___OnLevelWasLoadedEvent_11)); }
	inline Action_t1264377477 * get_OnLevelWasLoadedEvent_11() const { return ___OnLevelWasLoadedEvent_11; }
	inline Action_t1264377477 ** get_address_of_OnLevelWasLoadedEvent_11() { return &___OnLevelWasLoadedEvent_11; }
	inline void set_OnLevelWasLoadedEvent_11(Action_t1264377477 * value)
	{
		___OnLevelWasLoadedEvent_11 = value;
		Il2CppCodeGenWriteBarrier((&___OnLevelWasLoadedEvent_11), value);
	}

	inline static int32_t get_offset_of_OnApplicationPauseEvent_12() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___OnApplicationPauseEvent_12)); }
	inline Action_1_t269755560 * get_OnApplicationPauseEvent_12() const { return ___OnApplicationPauseEvent_12; }
	inline Action_1_t269755560 ** get_address_of_OnApplicationPauseEvent_12() { return &___OnApplicationPauseEvent_12; }
	inline void set_OnApplicationPauseEvent_12(Action_1_t269755560 * value)
	{
		___OnApplicationPauseEvent_12 = value;
		Il2CppCodeGenWriteBarrier((&___OnApplicationPauseEvent_12), value);
	}

	inline static int32_t get_offset_of_OnDisableEvent_13() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___OnDisableEvent_13)); }
	inline Action_t1264377477 * get_OnDisableEvent_13() const { return ___OnDisableEvent_13; }
	inline Action_t1264377477 ** get_address_of_OnDisableEvent_13() { return &___OnDisableEvent_13; }
	inline void set_OnDisableEvent_13(Action_t1264377477 * value)
	{
		___OnDisableEvent_13 = value;
		Il2CppCodeGenWriteBarrier((&___OnDisableEvent_13), value);
	}

	inline static int32_t get_offset_of_OnDestroyEvent_14() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___OnDestroyEvent_14)); }
	inline Action_t1264377477 * get_OnDestroyEvent_14() const { return ___OnDestroyEvent_14; }
	inline Action_t1264377477 ** get_address_of_OnDestroyEvent_14() { return &___OnDestroyEvent_14; }
	inline void set_OnDestroyEvent_14(Action_t1264377477 * value)
	{
		___OnDestroyEvent_14 = value;
		Il2CppCodeGenWriteBarrier((&___OnDestroyEvent_14), value);
	}
};

struct VuforiaBehaviour_t2151848540_StaticFields
{
public:
	// Vuforia.VuforiaBehaviour Vuforia.VuforiaBehaviour::mVuforiaBehaviour
	VuforiaBehaviour_t2151848540 * ___mVuforiaBehaviour_2;
	// System.Action`1<Vuforia.VuforiaBehaviour> Vuforia.VuforiaBehaviour::BehaviourCreated
	Action_1_t2324316135 * ___BehaviourCreated_5;
	// System.Action`1<Vuforia.VuforiaBehaviour> Vuforia.VuforiaBehaviour::BehaviourDestroyed
	Action_1_t2324316135 * ___BehaviourDestroyed_6;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_2() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540_StaticFields, ___mVuforiaBehaviour_2)); }
	inline VuforiaBehaviour_t2151848540 * get_mVuforiaBehaviour_2() const { return ___mVuforiaBehaviour_2; }
	inline VuforiaBehaviour_t2151848540 ** get_address_of_mVuforiaBehaviour_2() { return &___mVuforiaBehaviour_2; }
	inline void set_mVuforiaBehaviour_2(VuforiaBehaviour_t2151848540 * value)
	{
		___mVuforiaBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_2), value);
	}

	inline static int32_t get_offset_of_BehaviourCreated_5() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540_StaticFields, ___BehaviourCreated_5)); }
	inline Action_1_t2324316135 * get_BehaviourCreated_5() const { return ___BehaviourCreated_5; }
	inline Action_1_t2324316135 ** get_address_of_BehaviourCreated_5() { return &___BehaviourCreated_5; }
	inline void set_BehaviourCreated_5(Action_1_t2324316135 * value)
	{
		___BehaviourCreated_5 = value;
		Il2CppCodeGenWriteBarrier((&___BehaviourCreated_5), value);
	}

	inline static int32_t get_offset_of_BehaviourDestroyed_6() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540_StaticFields, ___BehaviourDestroyed_6)); }
	inline Action_1_t2324316135 * get_BehaviourDestroyed_6() const { return ___BehaviourDestroyed_6; }
	inline Action_1_t2324316135 ** get_address_of_BehaviourDestroyed_6() { return &___BehaviourDestroyed_6; }
	inline void set_BehaviourDestroyed_6(Action_1_t2324316135 * value)
	{
		___BehaviourDestroyed_6 = value;
		Il2CppCodeGenWriteBarrier((&___BehaviourDestroyed_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIABEHAVIOUR_T2151848540_H
#ifndef WIREFRAMETRACKABLEEVENTHANDLER_T2143753312_H
#define WIREFRAMETRACKABLEEVENTHANDLER_T2143753312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WireframeTrackableEventHandler
struct  WireframeTrackableEventHandler_t2143753312  : public MonoBehaviour_t3962482529
{
public:
	// Vuforia.TrackableBehaviour Vuforia.WireframeTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1113559212 * ___mTrackableBehaviour_2;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_2() { return static_cast<int32_t>(offsetof(WireframeTrackableEventHandler_t2143753312, ___mTrackableBehaviour_2)); }
	inline TrackableBehaviour_t1113559212 * get_mTrackableBehaviour_2() const { return ___mTrackableBehaviour_2; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mTrackableBehaviour_2() { return &___mTrackableBehaviour_2; }
	inline void set_mTrackableBehaviour_2(TrackableBehaviour_t1113559212 * value)
	{
		___mTrackableBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableBehaviour_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIREFRAMETRACKABLEEVENTHANDLER_T2143753312_H
#ifndef WIREFRAMEBEHAVIOUR_T1831066704_H
#define WIREFRAMEBEHAVIOUR_T1831066704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WireframeBehaviour
struct  WireframeBehaviour_t1831066704  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Material Vuforia.WireframeBehaviour::lineMaterial
	Material_t340375123 * ___lineMaterial_2;
	// System.Boolean Vuforia.WireframeBehaviour::ShowLines
	bool ___ShowLines_3;
	// UnityEngine.Color Vuforia.WireframeBehaviour::LineColor
	Color_t2555686324  ___LineColor_4;
	// UnityEngine.Material Vuforia.WireframeBehaviour::mLineMaterial
	Material_t340375123 * ___mLineMaterial_5;

public:
	inline static int32_t get_offset_of_lineMaterial_2() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t1831066704, ___lineMaterial_2)); }
	inline Material_t340375123 * get_lineMaterial_2() const { return ___lineMaterial_2; }
	inline Material_t340375123 ** get_address_of_lineMaterial_2() { return &___lineMaterial_2; }
	inline void set_lineMaterial_2(Material_t340375123 * value)
	{
		___lineMaterial_2 = value;
		Il2CppCodeGenWriteBarrier((&___lineMaterial_2), value);
	}

	inline static int32_t get_offset_of_ShowLines_3() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t1831066704, ___ShowLines_3)); }
	inline bool get_ShowLines_3() const { return ___ShowLines_3; }
	inline bool* get_address_of_ShowLines_3() { return &___ShowLines_3; }
	inline void set_ShowLines_3(bool value)
	{
		___ShowLines_3 = value;
	}

	inline static int32_t get_offset_of_LineColor_4() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t1831066704, ___LineColor_4)); }
	inline Color_t2555686324  get_LineColor_4() const { return ___LineColor_4; }
	inline Color_t2555686324 * get_address_of_LineColor_4() { return &___LineColor_4; }
	inline void set_LineColor_4(Color_t2555686324  value)
	{
		___LineColor_4 = value;
	}

	inline static int32_t get_offset_of_mLineMaterial_5() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t1831066704, ___mLineMaterial_5)); }
	inline Material_t340375123 * get_mLineMaterial_5() const { return ___mLineMaterial_5; }
	inline Material_t340375123 ** get_address_of_mLineMaterial_5() { return &___mLineMaterial_5; }
	inline void set_mLineMaterial_5(Material_t340375123 * value)
	{
		___mLineMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((&___mLineMaterial_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIREFRAMEBEHAVIOUR_T1831066704_H
#ifndef TRACKABLEBEHAVIOUR_T1113559212_H
#define TRACKABLEBEHAVIOUR_T1113559212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour
struct  TrackableBehaviour_t1113559212  : public MonoBehaviour_t3962482529
{
public:
	// System.Double Vuforia.TrackableBehaviour::<TimeStamp>k__BackingField
	double ___U3CTimeStampU3Ek__BackingField_2;
	// System.String Vuforia.TrackableBehaviour::mTrackableName
	String_t* ___mTrackableName_3;
	// System.Boolean Vuforia.TrackableBehaviour::mPreserveChildSize
	bool ___mPreserveChildSize_4;
	// System.Boolean Vuforia.TrackableBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_5;
	// UnityEngine.Vector3 Vuforia.TrackableBehaviour::mPreviousScale
	Vector3_t3722313464  ___mPreviousScale_6;
	// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::mStatus
	int32_t ___mStatus_7;
	// Vuforia.Trackable Vuforia.TrackableBehaviour::mTrackable
	RuntimeObject* ___mTrackable_8;
	// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler> Vuforia.TrackableBehaviour::mTrackableEventHandlers
	List_1_t2968050330 * ___mTrackableEventHandlers_9;

public:
	inline static int32_t get_offset_of_U3CTimeStampU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___U3CTimeStampU3Ek__BackingField_2)); }
	inline double get_U3CTimeStampU3Ek__BackingField_2() const { return ___U3CTimeStampU3Ek__BackingField_2; }
	inline double* get_address_of_U3CTimeStampU3Ek__BackingField_2() { return &___U3CTimeStampU3Ek__BackingField_2; }
	inline void set_U3CTimeStampU3Ek__BackingField_2(double value)
	{
		___U3CTimeStampU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_mTrackableName_3() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableName_3)); }
	inline String_t* get_mTrackableName_3() const { return ___mTrackableName_3; }
	inline String_t** get_address_of_mTrackableName_3() { return &___mTrackableName_3; }
	inline void set_mTrackableName_3(String_t* value)
	{
		___mTrackableName_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableName_3), value);
	}

	inline static int32_t get_offset_of_mPreserveChildSize_4() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreserveChildSize_4)); }
	inline bool get_mPreserveChildSize_4() const { return ___mPreserveChildSize_4; }
	inline bool* get_address_of_mPreserveChildSize_4() { return &___mPreserveChildSize_4; }
	inline void set_mPreserveChildSize_4(bool value)
	{
		___mPreserveChildSize_4 = value;
	}

	inline static int32_t get_offset_of_mInitializedInEditor_5() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mInitializedInEditor_5)); }
	inline bool get_mInitializedInEditor_5() const { return ___mInitializedInEditor_5; }
	inline bool* get_address_of_mInitializedInEditor_5() { return &___mInitializedInEditor_5; }
	inline void set_mInitializedInEditor_5(bool value)
	{
		___mInitializedInEditor_5 = value;
	}

	inline static int32_t get_offset_of_mPreviousScale_6() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreviousScale_6)); }
	inline Vector3_t3722313464  get_mPreviousScale_6() const { return ___mPreviousScale_6; }
	inline Vector3_t3722313464 * get_address_of_mPreviousScale_6() { return &___mPreviousScale_6; }
	inline void set_mPreviousScale_6(Vector3_t3722313464  value)
	{
		___mPreviousScale_6 = value;
	}

	inline static int32_t get_offset_of_mStatus_7() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mStatus_7)); }
	inline int32_t get_mStatus_7() const { return ___mStatus_7; }
	inline int32_t* get_address_of_mStatus_7() { return &___mStatus_7; }
	inline void set_mStatus_7(int32_t value)
	{
		___mStatus_7 = value;
	}

	inline static int32_t get_offset_of_mTrackable_8() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackable_8)); }
	inline RuntimeObject* get_mTrackable_8() const { return ___mTrackable_8; }
	inline RuntimeObject** get_address_of_mTrackable_8() { return &___mTrackable_8; }
	inline void set_mTrackable_8(RuntimeObject* value)
	{
		___mTrackable_8 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackable_8), value);
	}

	inline static int32_t get_offset_of_mTrackableEventHandlers_9() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableEventHandlers_9)); }
	inline List_1_t2968050330 * get_mTrackableEventHandlers_9() const { return ___mTrackableEventHandlers_9; }
	inline List_1_t2968050330 ** get_address_of_mTrackableEventHandlers_9() { return &___mTrackableEventHandlers_9; }
	inline void set_mTrackableEventHandlers_9(List_1_t2968050330 * value)
	{
		___mTrackableEventHandlers_9 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableEventHandlers_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEBEHAVIOUR_T1113559212_H
#ifndef WORDBEHAVIOUR_T209462683_H
#define WORDBEHAVIOUR_T209462683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordBehaviour
struct  WordBehaviour_t209462683  : public TrackableBehaviour_t1113559212
{
public:
	// Vuforia.WordTemplateMode Vuforia.WordBehaviour::mMode
	int32_t ___mMode_10;
	// System.String Vuforia.WordBehaviour::mSpecificWord
	String_t* ___mSpecificWord_11;
	// Vuforia.Word Vuforia.WordBehaviour::mWord
	RuntimeObject* ___mWord_12;

public:
	inline static int32_t get_offset_of_mMode_10() { return static_cast<int32_t>(offsetof(WordBehaviour_t209462683, ___mMode_10)); }
	inline int32_t get_mMode_10() const { return ___mMode_10; }
	inline int32_t* get_address_of_mMode_10() { return &___mMode_10; }
	inline void set_mMode_10(int32_t value)
	{
		___mMode_10 = value;
	}

	inline static int32_t get_offset_of_mSpecificWord_11() { return static_cast<int32_t>(offsetof(WordBehaviour_t209462683, ___mSpecificWord_11)); }
	inline String_t* get_mSpecificWord_11() const { return ___mSpecificWord_11; }
	inline String_t** get_address_of_mSpecificWord_11() { return &___mSpecificWord_11; }
	inline void set_mSpecificWord_11(String_t* value)
	{
		___mSpecificWord_11 = value;
		Il2CppCodeGenWriteBarrier((&___mSpecificWord_11), value);
	}

	inline static int32_t get_offset_of_mWord_12() { return static_cast<int32_t>(offsetof(WordBehaviour_t209462683, ___mWord_12)); }
	inline RuntimeObject* get_mWord_12() const { return ___mWord_12; }
	inline RuntimeObject** get_address_of_mWord_12() { return &___mWord_12; }
	inline void set_mWord_12(RuntimeObject* value)
	{
		___mWord_12 = value;
		Il2CppCodeGenWriteBarrier((&___mWord_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDBEHAVIOUR_T209462683_H
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
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
// UnityEngine.Camera[]
struct CameraU5BU5D_t1709987734  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Camera_t4157153871 * m_Items[1];

public:
	inline Camera_t4157153871 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_t4157153871 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_t4157153871 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Camera_t4157153871 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_t4157153871 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_t4157153871 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t4294070825  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WebCamDevice_t1322781432  m_Items[1];

public:
	inline WebCamDevice_t1322781432  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebCamDevice_t1322781432 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebCamDevice_t1322781432  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline WebCamDevice_t1322781432  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebCamDevice_t1322781432 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebCamDevice_t1322781432  value)
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
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t1773347010 * m_Items[1];

public:
	inline Collider_t1773347010 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Collider_t1773347010 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Vuforia.WireframeBehaviour[]
struct WireframeBehaviourU5BU5D_t4114094193  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WireframeBehaviour_t1831066704 * m_Items[1];

public:
	inline WireframeBehaviour_t1831066704 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WireframeBehaviour_t1831066704 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WireframeBehaviour_t1831066704 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline WireframeBehaviour_t1831066704 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WireframeBehaviour_t1831066704 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WireframeBehaviour_t1831066704 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t2627027031 * m_Items[1];

public:
	inline Renderer_t2627027031 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Renderer_t2627027031 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Vuforia.RectangleData[]
struct RectangleDataU5BU5D_t804827427  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RectangleData_t1039179782  m_Items[1];

public:
	inline RectangleData_t1039179782  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RectangleData_t1039179782 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RectangleData_t1039179782  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RectangleData_t1039179782  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RectangleData_t1039179782 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RectangleData_t1039179782  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Vuforia.WordBehaviour[]
struct WordBehaviourU5BU5D_t3948822938  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WordBehaviour_t209462683 * m_Items[1];

public:
	inline WordBehaviour_t209462683 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WordBehaviour_t209462683 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WordBehaviour_t209462683 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline WordBehaviour_t209462683 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WordBehaviour_t209462683 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WordBehaviour_t209462683 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_t1417781964  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_t631007953 * m_Items[1];

public:
	inline Object_t631007953 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_t631007953 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_t631007953 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Object_t631007953 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_t631007953 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_t631007953 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Vuforia.TrackerData/WordData[]
struct WordDataU5BU5D_t3131491555  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WordData_t2624767814  m_Items[1];

public:
	inline WordData_t2624767814  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WordData_t2624767814 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WordData_t2624767814  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline WordData_t2624767814  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WordData_t2624767814 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WordData_t2624767814  value)
	{
		m_Items[index] = value;
	}
};
// Vuforia.TrackerData/WordResultData[]
struct WordResultDataU5BU5D_t2333646353  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WordResultData_t1538379568  m_Items[1];

public:
	inline WordResultData_t1538379568  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WordResultData_t1538379568 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WordResultData_t1538379568  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline WordResultData_t1538379568  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WordResultData_t1538379568 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WordResultData_t1538379568  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Action`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m3730744496_gshared (Action_1_t3894781059 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !2 System.Func`3<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>::Invoke(!0,!1)
extern "C"  RuntimeObject * Func_3_Invoke_m1710983919_gshared (Func_3_t917206208 * __this, RuntimeObject * p0, ProfileData_t3519391925  p1, const RuntimeMethod* method);
// System.Void System.Func`3<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_3__ctor_m1845711009_gshared (Func_3_t917206208 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// T[] Vuforia.UnityComponentExtensions::GetComponentsOnlyInChildren<System.Object>(UnityEngine.Component)
extern "C"  ObjectU5BU5D_t2843939325* UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m2620794288_gshared (RuntimeObject * __this /* static, unused */, Component_t1923634451 * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m3004143623_gshared (Dictionary_2_t571830913 * __this, RuntimeObject * p0, ProfileData_t3519391925 * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m757242677_gshared (Dictionary_2_t571830913 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* GameObject_GetComponentsInChildren_TisRuntimeObject_m1461871634_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C"  ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared (Component_t1923634451 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m2601736566_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C"  ValueCollection_t3684863813 * Dictionary_2_get_Values_m683714624_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m3411363121_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C"  ValueCollection_t1848589470 * Dictionary_2_get_Values_m2492087945_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
extern "C"  Enumerator_t701438809  ValueCollection_GetEnumerator_m3808619909_gshared (ValueCollection_t1848589470 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m2014973879_gshared (Enumerator_t701438809 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1_AddRange_m3709462088_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m181298207_gshared (Enumerator_t701438809 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m1051275336_gshared (Enumerator_t701438809 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C"  KeyCollection_t322220623 * Dictionary_2_get_Keys_m2217135091_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  ObjectU5BU5D_t2843939325* Enumerable_ToArray_TisRuntimeObject_m3447781822_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C"  bool List_1_Contains_m2654125393_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C"  bool List_1_Remove_m1416767016_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
extern "C"  bool Dictionary_2_Remove_m1786738978_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  List_1_t257213610 * Enumerable_ToList_TisRuntimeObject_m1551499789_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C"  void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C"  void List_1_Clear_m3697625829_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m2730968292_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C"  KeyCollection_t2158494966 * Dictionary_2_get_Keys_m1840317613_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  Int32U5BU5D_t385246372* Enumerable_ToArray_TisInt32_t2950945753_m2311522548_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m107019914_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
extern "C"  bool Dictionary_2_Remove_m4193450060_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::GetEnumerator()
extern "C"  Enumerator_t2537713152  ValueCollection_GetEnumerator_m616748621_gshared (ValueCollection_t3684863813 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m2250080680_gshared (Enumerator_t2537713152 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2602845255_gshared (Enumerator_t2537713152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3503748991_gshared (Enumerator_t2537713152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m212974362_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m1938428402_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m2382293057_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m2059424751_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C"  void List_1__ctor_m1628857705_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
extern "C"  void List_1_Add_m697420525_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  List_1_t128053199 * Enumerable_ToList_TisInt32_t2950945753_m1435865193_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C"  Enumerator_t2017297076  List_1_GetEnumerator_m731136149_gshared (List_1_t128053199 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
extern "C"  int32_t Enumerator_get_Current_m4088456620_gshared (Enumerator_t2017297076 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
extern "C"  bool List_1_Contains_m2934014725_gshared (List_1_t128053199 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2218650275_gshared (Enumerator_t2017297076 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
extern "C"  void Enumerator_Dispose_m222348240_gshared (Enumerator_t2017297076 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1__ctor_m1328752868_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C"  Enumerator_t3923002270  Dictionary_2_GetEnumerator_m1087370259_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C"  KeyValuePair_2_t71524366  Enumerator_get_Current_m3431285658_gshared (Enumerator_t3923002270 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1839753989_gshared (KeyValuePair_2_t71524366 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3495598764_gshared (KeyValuePair_2_t71524366 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m3398155861_gshared (Enumerator_t3923002270 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m562365603_gshared (Enumerator_t3923002270 * __this, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  RuntimeObject * Enumerable_First_TisRuntimeObject_m3835263318_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m3300912776_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);

// System.String Vuforia.TrackableImpl::get_Name()
extern "C"  String_t* TrackableImpl_get_Name_m420167445 (TrackableImpl_t3595316917 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DisabledExtendedTrackingImpl::.ctor()
extern "C"  void DisabledExtendedTrackingImpl__ctor_m2179332291 (DisabledExtendedTrackingImpl_t4193346383 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkTargetImpl/VuMarkSetTargetSize::.ctor(Vuforia.VuMarkTemplate)
extern "C"  void VuMarkSetTargetSize__ctor_m2263671013 (VuMarkSetTargetSize_t4198822840 * __this, RuntimeObject* ___template0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetImpl::.ctor(System.String,System.Int32,Vuforia.IExtendedTracking,Vuforia.ITargetSize)
extern "C"  void ObjectTargetImpl__ctor_m2073027769 (ObjectTargetImpl_t3614635090 * __this, String_t* ___name0, int32_t ___id1, RuntimeObject* ___trackingImpl2, RuntimeObject* ___sizeImpl3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.InstanceIdImpl::.ctor(System.Byte[],System.UInt64,Vuforia.InstanceIdType,System.UInt32)
extern "C"  void InstanceIdImpl__ctor_m2187318971 (InstanceIdImpl_t2824054591 * __this, ByteU5BU5D_t4116647657* ___buffer0, uint64_t ___numericValue1, int32_t ___dataType2, uint32_t ___dataLength3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsVuforiaEnabled()
extern "C"  bool VuforiaRuntimeUtilities_IsVuforiaEnabled_m1152377305 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkTargetImpl::CreateInstanceImage()
extern "C"  void VuMarkTargetImpl_CreateInstanceImage_m848615665 (VuMarkTargetImpl_t1052843922 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
extern "C"  int32_t Marshal_SizeOf_m3069307747 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
extern "C"  intptr_t Marshal_AllocHGlobal_m491131085 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr(System.Object,System.IntPtr,System.Boolean)
extern "C"  void Marshal_StructureToPtr_m2294149499 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, intptr_t p1, bool p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.IVuforiaWrapper Vuforia.VuforiaWrapper::get_Instance()
extern "C"  RuntimeObject* VuforiaWrapper_get_Instance_m2947582594 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.TrackableImpl::get_ID()
extern "C"  int32_t TrackableImpl_get_ID_m2679724236 (TrackableImpl_t3595316917 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
extern "C"  RuntimeObject * Marshal_PtrToStructure_m771949023 (RuntimeObject * __this /* static, unused */, intptr_t p0, Type_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
extern "C"  void Marshal_FreeHGlobal_m1757369653 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuMarkTargetImpl::CallNativeGetInstanceImage()
extern "C"  int32_t VuMarkTargetImpl_CallNativeGetInstanceImage_m1381867968 (VuMarkTargetImpl_t1052843922 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Image::.ctor()
extern "C"  void Image__ctor_m1696742014 (Image_t745056343 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkTargetImpl::SetImageValues(Vuforia.TrackerData/ImageHeaderData,Vuforia.Image)
extern "C"  void VuMarkTargetImpl_SetImageValues_m2669079400 (RuntimeObject * __this /* static, unused */, ImageHeaderData_t3550119865  ___imageHeader0, Image_t745056343 * ___image1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkTargetImpl::AllocateImage(Vuforia.Image)
extern "C"  void VuMarkTargetImpl_AllocateImage_m2193152031 (RuntimeObject * __this /* static, unused */, Image_t745056343 * ___image0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.Image::get_UnmanagedData()
extern "C"  intptr_t Image_get_UnmanagedData_m3708296414 (Image_t745056343 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Image::CopyPixelsFromUnmanagedBuffer()
extern "C"  void Image_CopyPixelsFromUnmanagedBuffer_m557743584 (Image_t745056343 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Image::set_Width(System.Int32)
extern "C"  void Image_set_Width_m2860119284 (Image_t745056343 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Image::set_Height(System.Int32)
extern "C"  void Image_set_Height_m443427373 (Image_t745056343 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Image::set_Stride(System.Int32)
extern "C"  void Image_set_Stride_m3635796939 (Image_t745056343 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Image::set_BufferWidth(System.Int32)
extern "C"  void Image_set_BufferWidth_m3848581627 (Image_t745056343 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Image::set_BufferHeight(System.Int32)
extern "C"  void Image_set_BufferHeight_m1072814985 (Image_t745056343 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Image::set_PixelFormat(Vuforia.Image/PIXEL_FORMAT)
extern "C"  void Image_set_PixelFormat_m2634889912 (Image_t745056343 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.Image::get_BufferWidth()
extern "C"  int32_t Image_get_BufferWidth_m2324972437 (Image_t745056343 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.Image::get_BufferHeight()
extern "C"  int32_t Image_get_BufferHeight_m1709821308 (Image_t745056343 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image/PIXEL_FORMAT Vuforia.Image::get_PixelFormat()
extern "C"  int32_t Image_get_PixelFormat_m4039465001 (Image_t745056343 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Image::set_Pixels(System.Byte[])
extern "C"  void Image_set_Pixels_m1525806273 (Image_t745056343 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Image::set_UnmanagedData(System.IntPtr)
extern "C"  void Image_set_UnmanagedData_m697184426 (Image_t745056343 * __this, intptr_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DisabledSetTargetSize::.ctor(UnityEngine.Vector3)
extern "C"  void DisabledSetTargetSize__ctor_m2661789762 (DisabledSetTargetSize_t3520378128 * __this, Vector3_t3722313464  ___size0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.DataSet::get_DataSetPtr()
extern "C"  intptr_t DataSet_get_DataSetPtr_m282888524 (DataSet_t3286034874 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetExtendedTrackingImpl::.ctor(System.IntPtr,System.Int32)
extern "C"  void DataSetExtendedTrackingImpl__ctor_m2878729262 (DataSetExtendedTrackingImpl_t3413727792 * __this, intptr_t ___datasetPtr0, int32_t ___id1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetObjectTargetImpl::.ctor(System.String,System.Int32,Vuforia.DataSet,Vuforia.IExtendedTracking,Vuforia.ITargetSize)
extern "C"  void DataSetObjectTargetImpl__ctor_m4106348816 (DataSetObjectTargetImpl_t2835536742 * __this, String_t* ___name0, int32_t ___id1, DataSet_t3286034874 * ___dataSet2, RuntimeObject* ___extendedTracking3, RuntimeObject* ___targetSize4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m3730744496(__this, p0, p1, method) ((  void (*) (Action_1_t3894781059 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m3730744496_gshared)(__this, p0, p1, method)
// System.Void Vuforia.CustomDataSetTargetSize::.ctor(System.String,Vuforia.DataSet,System.Action`1<UnityEngine.Vector3>,System.Boolean)
extern "C"  void CustomDataSetTargetSize__ctor_m2005176850 (CustomDataSetTargetSize_t2186564284 * __this, String_t* ___name0, DataSet_t3286034874 * ___dataSet1, Action_1_t3894781059 * ___setSizeAction2, bool ___invokeBeforeNativeCall3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetImpl::set_TargetSize(Vuforia.ITargetSize)
extern "C"  void ObjectTargetImpl_set_TargetSize_m551209353 (ObjectTargetImpl_t3614635090 * __this, RuntimeObject* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C"  void StringBuilder__ctor_m2367297767 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCam::get_IsTextureSizeAvailable()
extern "C"  bool WebCam_get_IsTextureSizeAvailable_m2013217807 (WebCam_t2427002488 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.TextureRenderer::get_Width()
extern "C"  int32_t TextureRenderer_get_Width_m3088621639 (TextureRenderer_t3278815845 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.TextureRenderer::get_Height()
extern "C"  int32_t TextureRenderer_get_Height_m721659918 (TextureRenderer_t3278815845 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRenderer/Vec2I::.ctor(System.Int32,System.Int32)
extern "C"  void Vec2I__ctor_m1553072655 (Vec2I_t3527036565 * __this, int32_t ___v10, int32_t ___v21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsPlayMode()
extern "C"  bool VuforiaRuntimeUtilities_IsPlayMode_m4165764373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C"  int32_t Camera_get_cullingMask_m679085748 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
extern "C"  void Camera_set_cullingMask_m1402455777 (Camera_t4157153871 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamProfile::.ctor()
extern "C"  void WebCamProfile__ctor_m820471938 (WebCamProfile_t4166408645 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
extern "C"  WebCamDeviceU5BU5D_t4294070825* WebCamTexture_get_devices_m844246756 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WebCamDevice::get_name()
extern "C"  String_t* WebCamDevice_get_name_m3782173082 (WebCamDevice_t1322781432 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
extern "C"  bool String_Equals_m2270643605 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::GetProfile(System.String)
extern "C"  ProfileData_t3519391925  WebCamProfile_GetProfile_m3959388229 (WebCamProfile_t4166408645 * __this, String_t* ___webcamName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !2 System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor>::Invoke(!0,!1)
#define Func_3_Invoke_m2574976179(__this, p0, p1, method) ((  RuntimeObject* (*) (Func_3_t3440825513 *, String_t*, ProfileData_t3519391925 , const RuntimeMethod*))Func_3_Invoke_m1710983919_gshared)(__this, p0, p1, method)
// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::get_Default()
extern "C"  ProfileData_t3519391925  WebCamProfile_get_Default_m3789142228 (WebCamProfile_t4166408645 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DefaultWebCamTexAdaptor::.ctor(System.Int32,Vuforia.VuforiaRenderer/Vec2I)
extern "C"  void DefaultWebCamTexAdaptor__ctor_m299475590 (DefaultWebCamTexAdaptor_t2452636845 * __this, int32_t ___requestedFPS0, Vec2I_t3527036565  ___requestedTextureSize1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCam::StartCamera()
extern "C"  void WebCam_StartCamera_m784729827 (WebCam_t2427002488 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCam::StopCamera()
extern "C"  void WebCam_StopCamera_m1511219799 (WebCam_t2427002488 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture Vuforia.TextureRenderer::Render()
extern "C"  RenderTexture_t2108887433 * TextureRenderer_Render_m2768706254 (TextureRenderer_t3278815845 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_set_active_m1437732586 (RuntimeObject * __this /* static, unused */, RenderTexture_t2108887433 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
extern "C"  void Texture2D_ReadPixels_m1510783487 (Texture2D_t3840446185 * __this, Rect_t2360479859  p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32()
extern "C"  Color32U5BU5D_t3850468773* Texture2D_GetPixels32_m647746242 (Texture2D_t3840446185 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_ReleaseTemporary_m2400081536 (RuntimeObject * __this /* static, unused */, RenderTexture_t2108887433 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer Vuforia.VuforiaRenderer::get_Instance()
extern "C"  VuforiaRenderer_t3433045970 * VuforiaRenderer_get_Instance_m1013623488 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture Vuforia.VuforiaRenderer::get_VideoBackgroundTexture()
extern "C"  Texture_t3661962703 * VuforiaRenderer_get_VideoBackgroundTexture_m954851426 (VuforiaRenderer_t3433045970 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice Vuforia.CameraDevice::get_Instance()
extern "C"  CameraDevice_t960297568 * CameraDevice_get_Instance_m2002290155 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image Vuforia.CameraDevice::GetCameraImage(Vuforia.Image/PIXEL_FORMAT)
extern "C"  Image_t745056343 * CameraDevice_GetCameraImage_m151166382 (CameraDevice_t960297568 * __this, int32_t ___format0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
extern "C"  int32_t Texture2D_get_format_m2371899271 (Texture2D_t3840446185 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Texture2D::Resize(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C"  bool Texture2D_Resize_m2702227255 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] Vuforia.Image::GetPixels32()
extern "C"  Color32U5BU5D_t3850468773* Image_GetPixels32_m1416524729 (Image_t745056343 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[])
extern "C"  void Texture2D_SetPixels32_m1141065075 (Texture2D_t3840446185 * __this, Color32U5BU5D_t3850468773* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply()
extern "C"  void Texture2D_Apply_m2271746283 (Texture2D_t3840446185 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCam::set_IsTextureSizeAvailable(System.Boolean)
extern "C"  void WebCam_set_IsTextureSizeAvailable_m2087388218 (WebCam_t2427002488 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextureRenderer::Destroy()
extern "C"  void TextureRenderer_Destroy_m719921383 (TextureRenderer_t3278815845 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCam::ComputeResampledTextureSize()
extern "C"  void WebCam_ComputeResampledTextureSize_m321498482 (WebCam_t2427002488 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextureRenderer::.ctor(UnityEngine.Texture,System.Int32,Vuforia.VuforiaRenderer/Vec2I)
extern "C"  void TextureRenderer__ctor_m495126481 (TextureRenderer_t3278815845 * __this, Texture_t3661962703 * ___textureToRender0, int32_t ___renderTextureLayer1, Vec2I_t3527036565  ___requestedTextureSize2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C"  void Texture2D__ctor_m373113269 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor>::.ctor(System.Object,System.IntPtr)
#define Func_3__ctor_m3165450366(__this, p0, p1, method) ((  void (*) (Func_3_t3440825513 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_m1845711009_gshared)(__this, p0, p1, method)
// System.Void Vuforia.ARController::.ctor()
extern "C"  void ARController__ctor_m2746373751 (ARController_t116632334 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C"  void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamARController::.ctor()
extern "C"  void WebCamARController__ctor_m751483383 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C"  void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.WebCamARController Vuforia.WebCamARController::get_Instance()
extern "C"  WebCamARController_t3718642882 * WebCamARController_get_Instance_m1980552932 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ARController::Register(Vuforia.ARController)
extern "C"  void ARController_Register_m1901857971 (RuntimeObject * __this /* static, unused */, ARController_t116632334 * ___controller0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCam::get_IsPlaying()
extern "C"  bool WebCam_get_IsPlaying_m2513986056 (WebCam_t2427002488 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::set_runInBackground(System.Boolean)
extern "C"  void Application_set_runInBackground_m2169704730 (RuntimeObject * __this /* static, unused */, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaBehaviour Vuforia.ARController::get_VuforiaBehaviour()
extern "C"  VuforiaBehaviour_t2151848540 * ARController_get_VuforiaBehaviour_m4257639924 (ARController_t116632334 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T[] Vuforia.UnityComponentExtensions::GetComponentsOnlyInChildren<UnityEngine.Camera>(UnityEngine.Component)
#define UnityComponentExtensions_GetComponentsOnlyInChildren_TisCamera_t4157153871_m2275549933(__this /* static, unused */, ___obj0, method) ((  CameraU5BU5D_t1709987734* (*) (RuntimeObject * /* static, unused */, Component_t1923634451 *, const RuntimeMethod*))UnityComponentExtensions_GetComponentsOnlyInChildren_TisRuntimeObject_m2620794288_gshared)(__this /* static, unused */, ___obj0, method)
// System.Void Vuforia.WebCam::.ctor(UnityEngine.Camera[],System.Int32,System.String,System.Boolean,System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor>)
extern "C"  void WebCam__ctor_m2427464772 (WebCam_t2427002488 * __this, CameraU5BU5D_t1709987734* ___arCameras0, int32_t ___renderTextureLayer1, String_t* ___webcamDeviceName2, bool ___flipHorizontally3, Func_3_t3440825513 * ___webCamTexProvider4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::get_Instance()
extern "C"  VuforiaConfiguration_t1763229349 * VuforiaConfiguration_get_Instance_m3335903280 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaConfiguration/WebCamConfiguration Vuforia.VuforiaConfiguration::get_WebCam()
extern "C"  WebCamConfiguration_t1101614731 * VuforiaConfiguration_get_WebCam_m946983315 (VuforiaConfiguration_t1763229349 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaConfiguration/WebCamConfiguration::get_RenderTextureLayer()
extern "C"  int32_t WebCamConfiguration_get_RenderTextureLayer_m1149468349 (WebCamConfiguration_t1101614731 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaConfiguration/WebCamConfiguration::get_DeviceNameSetInEditor()
extern "C"  String_t* WebCamConfiguration_get_DeviceNameSetInEditor_m553266002 (WebCamConfiguration_t1101614731 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaConfiguration/WebCamConfiguration::get_FlipHorizontally()
extern "C"  bool WebCamConfiguration_get_FlipHorizontally_m4118647777 (WebCamConfiguration_t1101614731 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCam::ResetPlaying()
extern "C"  void WebCam_ResetPlaying_m697251242 (WebCam_t2427002488 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCam::OnDestroy()
extern "C"  void WebCam_OnDestroy_m332336637 (WebCam_t2427002488 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCam::Update()
extern "C"  void WebCam_Update_m3572144808 (WebCam_t2427002488 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamARController/<>c::.ctor()
extern "C"  void U3CU3Ec__ctor_m3450078098 (U3CU3Ec_t3582055403 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptor::.ctor(System.String,Vuforia.WebCamProfile/ProfileData)
extern "C"  void WebCamTexAdaptor__ctor_m852957585 (WebCamTexAdaptor_t3430449046 * __this, String_t* ___deviceName0, ProfileData_t3519391925  ___profile1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.IPlayModeEditorUtility Vuforia.PlayModeEditorUtility::get_Instance()
extern "C"  RuntimeObject* PlayModeEditorUtility_get_Instance_m334266941 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower()
extern "C"  String_t* String_ToLower_m2029374922 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m1260807329(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t3304648224 *, String_t*, ProfileData_t3519391925 *, const RuntimeMethod*))Dictionary_2_TryGetValue_m3004143623_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m4190276240(__this, p0, method) ((  bool (*) (Dictionary_2_t3304648224 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m757242677_gshared)(__this, p0, method)
// System.Void Vuforia.WebCamProfile/ProfileCollection::.ctor(Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>)
extern "C"  void ProfileCollection__ctor_m3713293092 (ProfileCollection_t901995765 * __this, ProfileData_t3519391925  ___defaultProfile0, Dictionary_2_t3304648224 * ___profiles1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamTexture::get_didUpdateThisFrame()
extern "C"  bool WebCamTexture_get_didUpdateThisFrame_m567567483 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamTexture::get_isPlaying()
extern "C"  bool WebCamTexture_get_isPlaying_m3525118025 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::.ctor()
extern "C"  void WebCamTexture__ctor_m2601640589 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_deviceName(System.String)
extern "C"  void WebCamTexture_set_deviceName_m2479609938 (WebCamTexture_t1514609158 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_requestedFPS(System.Single)
extern "C"  void WebCamTexture_set_requestedFPS_m1422816314 (WebCamTexture_t1514609158 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_requestedWidth(System.Int32)
extern "C"  void WebCamTexture_set_requestedWidth_m1301971691 (WebCamTexture_t1514609158 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_requestedHeight(System.Int32)
extern "C"  void WebCamTexture_set_requestedHeight_m3636279808 (WebCamTexture_t1514609158 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::HasUserAuthorization(UnityEngine.UserAuthorization)
extern "C"  bool Application_HasUserAuthorization_m3146187033 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Application::RequestUserAuthorization(UnityEngine.UserAuthorization)
extern "C"  AsyncOperation_t1445031843 * Application_RequestUserAuthorization_m1407144003 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Play()
extern "C"  void WebCamTexture_Play_m3866603461 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Stop()
extern "C"  void WebCamTexture_Stop_m3471034432 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
extern "C"  bool AsyncOperation_get_isDone_m412925263 (AsyncOperation_t1445031843 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C"  void Material__ctor_m249231841 (Material_t340375123 * __this, Material_t340375123 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaManager Vuforia.VuforiaManager::get_Instance()
extern "C"  VuforiaManager_t1653423889 * VuforiaManager_get_Instance_m100367560 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManager::get_ARCameraTransform()
extern "C"  Transform_t3600365921 * VuforiaManager_get_ARCameraTransform_m958890547 (VuforiaManager_t1653423889 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Camera>()
#define GameObject_GetComponentsInChildren_TisCamera_t4157153871_m926460427(__this, method) ((  CameraU5BU5D_t1709987734* (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m1461871634_gshared)(__this, method)
// UnityEngine.Camera UnityEngine.Camera::get_current()
extern "C"  Camera_t4157153871 * Camera_get_current_m929992396 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
#define Component_GetComponent_TisMeshFilter_t3523625662_m569847836(__this, method) ((  MeshFilter_t3523625662 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
extern "C"  Mesh_t3648964284 * MeshFilter_get_sharedMesh_m1726897210 (MeshFilter_t3523625662 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C"  Vector3U5BU5D_t1718750761* Mesh_get_vertices_m3585684815 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Mesh::get_triangles()
extern "C"  Int32U5BU5D_t385246372* Mesh_get_triangles_m3059934743 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PushMatrix()
extern "C"  void GL_PushMatrix_m1848274883 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
extern "C"  Matrix4x4_t1817901843  Transform_get_localToWorldMatrix_m4155710351 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::MultMatrix(UnityEngine.Matrix4x4)
extern "C"  void GL_MultMatrix_m3576884247 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
extern "C"  bool Material_SetPass_m686253719 (Material_t340375123 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C"  void Material_SetColor_m2020215303 (Material_t340375123 * __this, String_t* p0, Color_t2555686324  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Begin(System.Int32)
extern "C"  void GL_Begin_m1290681325 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Vertex(UnityEngine.Vector3)
extern "C"  void GL_Vertex_m691990801 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::End()
extern "C"  void GL_End_m539612367 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PopMatrix()
extern "C"  void GL_PopMatrix_m3416050869 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C"  bool Behaviour_get_enabled_m753527255 (Behaviour_t1437897464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
extern "C"  Vector3_t3722313464  Transform_get_lossyScale_m465496651 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Matrix4x4_t1817901843  Matrix4x4_TRS_m3801934620 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Quaternion_t2301928331  p1, Vector3_t3722313464  p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::set_matrix(UnityEngine.Matrix4x4)
extern "C"  void Gizmos_set_matrix_m3287403258 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
extern "C"  void Gizmos_set_color_m3399737545 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Gizmos_DrawLine_m3273476787 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C"  Color_t2555686324  Color_get_green_m490390750 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<Vuforia.TrackableBehaviour>()
#define Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408(__this, method) ((  TrackableBehaviour_t1113559212 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void Vuforia.TrackableBehaviour::RegisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C"  void TrackableBehaviour_RegisterTrackableEventHandler_m2462783619 (TrackableBehaviour_t1113559212 * __this, RuntimeObject* ___trackableEventHandler0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackingFound()
extern "C"  void WireframeTrackableEventHandler_OnTrackingFound_m2813716415 (WireframeTrackableEventHandler_t2143753312 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackingLost()
extern "C"  void WireframeTrackableEventHandler_OnTrackingLost_m1967211472 (WireframeTrackableEventHandler_t2143753312 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>(System.Boolean)
#define Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, p0, method) ((  RendererU5BU5D_t3210418286* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method)
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>(System.Boolean)
#define Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, p0, method) ((  ColliderU5BU5D_t4234922487* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method)
// !!0[] UnityEngine.Component::GetComponentsInChildren<Vuforia.WireframeBehaviour>(System.Boolean)
#define Component_GetComponentsInChildren_TisWireframeBehaviour_t1831066704_m2022065013(__this, p0, method) ((  WireframeBehaviourU5BU5D_t4114094193* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method)
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C"  void Renderer_set_enabled_m1727253150 (Renderer_t2627027031 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C"  void Collider_set_enabled_m1517463283 (Collider_t1773347010 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C"  void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TrackableBehaviour::get_TrackableName()
extern "C"  String_t* TrackableBehaviour_get_TrackableName_m3644057705 (TrackableBehaviour_t1113559212 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C"  Vector3_t3722313464  Vector3_get_one_m1629952498 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Mesh::get_bounds()
extern "C"  Bounds_t2266837910  Mesh_get_bounds_m2004960313 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern "C"  Vector3_t3722313464  Bounds_get_size_m1178783246 (Bounds_t2266837910 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordBehaviour::get_IsSpecificWordMode()
extern "C"  bool WordBehaviour_get_IsSpecificWordMode_m1655719650 (WordBehaviour_t209462683 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::.ctor()
extern "C"  void TrackableBehaviour__ctor_m1563377757 (TrackableBehaviour_t1113559212 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableImpl::.ctor(System.String,System.Int32)
extern "C"  void TrackableImpl__ctor_m3299709682 (TrackableImpl_t3595316917 * __this, String_t* ___name0, int32_t ___id1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::CreateLetterMask()
extern "C"  void WordImpl_CreateLetterMask_m224036644 (WordImpl_t2494369133 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IntPtr::ToInt64()
extern "C"  int64_t IntPtr_ToInt64_m192765549 (intptr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::.ctor(System.Int64)
extern "C"  void IntPtr__ctor_m987476171 (intptr_t* __this, int64_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.WordImpl::get_Size()
extern "C"  Vector2_t2156229523  WordImpl_get_Size_m1421284971 (WordImpl_t2494369133 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::InitImageHeader()
extern "C"  void WordImpl_InitImageHeader_m3006118628 (WordImpl_t2494369133 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::SetImageValues(Vuforia.TrackerData/ImageHeaderData,Vuforia.Image)
extern "C"  void WordImpl_SetImageValues_m958209948 (RuntimeObject * __this /* static, unused */, ImageHeaderData_t3550119865  ___imageHeader0, Image_t745056343 * ___image1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::AllocateImage(Vuforia.Image)
extern "C"  void WordImpl_AllocateImage_m3294391543 (RuntimeObject * __this /* static, unused */, Image_t745056343 * ___image0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordList::LoadWordListFile(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  bool WordList_LoadWordListFile_m552733683 (WordList_t3693642253 * __this, String_t* ___relativePath0, int32_t ___storageType1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaRuntimeUtilities::GetStoragePath(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  String_t* VuforiaRuntimeUtilities_GetStoragePath_m3854718746 (RuntimeObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WordList::AddWordsFromFile(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  int32_t WordList_AddWordsFromFile_m1862212695 (WordList_t3693642253 * __this, String_t* ___path0, int32_t ___storageType1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::StringToHGlobalUni(System.String)
extern "C"  intptr_t Marshal_StringToHGlobalUni_m3584015089 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordList::LoadFilterListFile(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  bool WordList_LoadFilterListFile_m4022350524 (WordList_t3693642253 * __this, String_t* ___path0, int32_t ___storageType1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringUni(System.IntPtr)
extern "C"  String_t* Marshal_PtrToStringUni_m175561854 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::.ctor()
#define Dictionary_2__ctor_m2165170305(__this, method) ((  void (*) (Dictionary_2_t2529487133 *, const RuntimeMethod*))Dictionary_2__ctor_m2601736566_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::.ctor()
#define List_1__ctor_m3369957770(__this, method) ((  void (*) (List_1_t817881248 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Word>::.ctor()
#define List_1__ctor_m3294312876(__this, method) ((  void (*) (List_1_t2588113360 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordBehaviour>::.ctor()
#define Dictionary_2__ctor_m1385716975(__this, method) ((  void (*) (Dictionary_2_t3393143310 *, const RuntimeMethod*))Dictionary_2__ctor_m2601736566_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordBehaviour>::.ctor()
#define List_1__ctor_m1720454467(__this, method) ((  void (*) (List_1_t1681537425 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordBehaviour>>::.ctor()
#define Dictionary_2__ctor_m713463042(__this, method) ((  void (*) (Dictionary_2_t1466793724 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::get_Values()
#define Dictionary_2_get_Values_m1988163935(__this, method) ((  ValueCollection_t4245531451 * (*) (Dictionary_2_t2529487133 *, const RuntimeMethod*))Dictionary_2_get_Values_m683714624_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordBehaviour>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m670017294(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t3393143310 *, int32_t, WordBehaviour_t209462683 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3411363121_gshared)(__this, p0, p1, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordBehaviour>>::get_Values()
#define Dictionary_2_get_Values_m2758663250(__this, method) ((  ValueCollection_t3182838042 * (*) (Dictionary_2_t1466793724 *, const RuntimeMethod*))Dictionary_2_get_Values_m2492087945_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<Vuforia.WordBehaviour>>::GetEnumerator()
#define ValueCollection_GetEnumerator_m1627817905(__this, method) ((  Enumerator_t2035687381  (*) (ValueCollection_t3182838042 *, const RuntimeMethod*))ValueCollection_GetEnumerator_m3808619909_gshared)(__this, method)
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Collections.Generic.List`1<Vuforia.WordBehaviour>>::get_Current()
#define Enumerator_get_Current_m1070017454(__this, method) ((  List_1_t1681537425 * (*) (Enumerator_t2035687381 *, const RuntimeMethod*))Enumerator_get_Current_m2014973879_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordBehaviour>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m2418638764(__this, p0, method) ((  void (*) (List_1_t1681537425 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3709462088_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Collections.Generic.List`1<Vuforia.WordBehaviour>>::MoveNext()
#define Enumerator_MoveNext_m2310817316(__this, method) ((  bool (*) (Enumerator_t2035687381 *, const RuntimeMethod*))Enumerator_MoveNext_m181298207_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,System.Collections.Generic.List`1<Vuforia.WordBehaviour>>::Dispose()
#define Enumerator_Dispose_m2347494636(__this, method) ((  void (*) (Enumerator_t2035687381 *, const RuntimeMethod*))Enumerator_Dispose_m1051275336_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordBehaviour>>::get_Keys()
#define Dictionary_2_get_Keys_m1811193429(__this, method) ((  KeyCollection_t1656469195 * (*) (Dictionary_2_t1466793724 *, const RuntimeMethod*))Dictionary_2_get_Keys_m2217135091_gshared)(__this, method)
// !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToArray_TisString_t_m1789351813(__this /* static, unused */, p0, method) ((  StringU5BU5D_t1281789340* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m3447781822_gshared)(__this /* static, unused */, p0, method)
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordBehaviour>>::get_Item(!0)
#define Dictionary_2_get_Item_m142719623(__this, p0, method) ((  List_1_t1681537425 * (*) (Dictionary_2_t1466793724 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.WordBehaviour>::Contains(!0)
#define List_1_Contains_m2027764343(__this, p0, method) ((  bool (*) (List_1_t1681537425 *, WordBehaviour_t209462683 *, const RuntimeMethod*))List_1_Contains_m2654125393_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.WordBehaviour>::Remove(!0)
#define List_1_Remove_m591231568(__this, p0, method) ((  bool (*) (List_1_t1681537425 *, WordBehaviour_t209462683 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.WordBehaviour>::get_Count()
#define List_1_get_Count_m2708548481(__this, method) ((  int32_t (*) (List_1_t1681537425 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordBehaviour>>::Remove(!0)
#define Dictionary_2_Remove_m1957493530(__this, p0, method) ((  bool (*) (Dictionary_2_t1466793724 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m1786738978_gshared)(__this, p0, method)
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Vuforia.WordBehaviour>::Add(!0)
#define List_1_Add_m82523697(__this, p0, method) ((  void (*) (List_1_t1681537425 *, WordBehaviour_t209462683 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void Vuforia.TrackableBehaviour::UnregisterTrackable()
extern "C"  void TrackableBehaviour_UnregisterTrackable_m1272061837 (TrackableBehaviour_t1113559212 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManager::InitializeWordBehaviourTemplates()
extern "C"  void WordManager_InitializeWordBehaviourTemplates_m3961783150 (WordManager_t3100853168 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<Vuforia.WordBehaviour>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisWordBehaviour_t209462683_m3926744422(__this /* static, unused */, p0, method) ((  List_1_t1681537425 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m1551499789_gshared)(__this /* static, unused */, p0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordBehaviour>>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m4104309222(__this, p0, method) ((  bool (*) (Dictionary_2_t1466793724 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Vuforia.WordBehaviour>::GetEnumerator()
#define List_1_GetEnumerator_m1934944160(__this, method) ((  Enumerator_t3570781302  (*) (List_1_t1681537425 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Vuforia.WordBehaviour>::get_Current()
#define Enumerator_get_Current_m1854802932(__this, method) ((  WordBehaviour_t209462683 * (*) (Enumerator_t3570781302 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<Vuforia.WordBehaviour>::MoveNext()
#define Enumerator_MoveNext_m1166863020(__this, method) ((  bool (*) (Enumerator_t3570781302 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.WordBehaviour>::Dispose()
#define Enumerator_Dispose_m700246627(__this, method) ((  void (*) (Enumerator_t3570781302 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
extern "C"  ObjectU5BU5D_t1417781964* Object_FindObjectsOfType_m2295101757 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordBehaviour::get_IsTemplateMode()
extern "C"  bool WordBehaviour_get_IsTemplateMode_m4072507390 (WordBehaviour_t209462683 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.WordBehaviour::get_SpecificWord()
extern "C"  String_t* WordBehaviour_get_SpecificWord_m632314555 (WordBehaviour_t209462683 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLowerInvariant()
extern "C"  String_t* String_ToLowerInvariant_m110751226 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordBehaviour>>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m2084030734(__this, p0, p1, method) ((  void (*) (Dictionary_2_t1466793724 *, String_t*, List_1_t1681537425 *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method)
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordBehaviour Vuforia.WordManager::CreateWordBehaviour()
extern "C"  WordBehaviour_t209462683 * WordManager_CreateWordBehaviour_m3530259637 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordBehaviour>>::Add(!0,!1)
#define Dictionary_2_Add_m2175596614(__this, p0, p1, method) ((  void (*) (Dictionary_2_t1466793724 *, String_t*, List_1_t1681537425 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordBehaviour>::Clear()
#define List_1_Clear_m4131072563(__this, method) ((  void (*) (List_1_t1681537425 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<Vuforia.WordBehaviour>::get_Item(System.Int32)
#define List_1_get_Item_m1982020868(__this, p0, method) ((  WordBehaviour_t209462683 * (*) (List_1_t1681537425 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordBehaviour>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m726756076(__this, p0, method) ((  void (*) (List_1_t1681537425 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2730968292_gshared)(__this, p0, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordBehaviour>::get_Keys()
#define Dictionary_2_get_Keys_m176267334(__this, method) ((  KeyCollection_t3582818781 * (*) (Dictionary_2_t3393143310 *, const RuntimeMethod*))Dictionary_2_get_Keys_m1840317613_gshared)(__this, method)
// !!0[] System.Linq.Enumerable::ToArray<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToArray_TisInt32_t2950945753_m2311522548(__this /* static, unused */, p0, method) ((  Int32U5BU5D_t385246372* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisInt32_t2950945753_m2311522548_gshared)(__this /* static, unused */, p0, method)
// !1 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordBehaviour>::get_Item(!0)
#define Dictionary_2_get_Item_m3370583836(__this, p0, method) ((  WordBehaviour_t209462683 * (*) (Dictionary_2_t3393143310 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m107019914_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordBehaviour>::Remove(!0)
#define Dictionary_2_Remove_m74906818(__this, p0, method) ((  bool (*) (Dictionary_2_t3393143310 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m4193450060_gshared)(__this, p0, method)
// System.Void Vuforia.WordManager::UpdateWords(System.Collections.Generic.IEnumerable`1<Vuforia.TrackerData/WordData>,System.Collections.Generic.IEnumerable`1<Vuforia.TrackerData/WordResultData>)
extern "C"  void WordManager_UpdateWords_m4081984760 (WordManager_t3100853168 * __this, RuntimeObject* ___newWordData0, RuntimeObject* ___wordResults1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManager::UpdateWordResultPoses(UnityEngine.Transform,System.Collections.Generic.IEnumerable`1<Vuforia.TrackerData/WordResultData>)
extern "C"  void WordManager_UpdateWordResultPoses_m3056067080 (WordManager_t3100853168 * __this, Transform_t3600365921 * ___arCameraTransform0, RuntimeObject* ___wordResults1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordBehaviour>::get_Values()
#define Dictionary_2_get_Values_m1751666622(__this, method) ((  ValueCollection_t814220332 * (*) (Dictionary_2_t3393143310 *, const RuntimeMethod*))Dictionary_2_get_Values_m683714624_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.WordBehaviour>::GetEnumerator()
#define ValueCollection_GetEnumerator_m3310874610(__this, method) ((  Enumerator_t3962036967  (*) (ValueCollection_t814220332 *, const RuntimeMethod*))ValueCollection_GetEnumerator_m616748621_gshared)(__this, method)
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.WordBehaviour>::get_Current()
#define Enumerator_get_Current_m2440865922(__this, method) ((  WordBehaviour_t209462683 * (*) (Enumerator_t3962036967 *, const RuntimeMethod*))Enumerator_get_Current_m2250080680_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.WordBehaviour>::MoveNext()
#define Enumerator_MoveNext_m3670481143(__this, method) ((  bool (*) (Enumerator_t3962036967 *, const RuntimeMethod*))Enumerator_MoveNext_m2602845255_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.WordBehaviour>::Dispose()
#define Enumerator_Dispose_m329372891(__this, method) ((  void (*) (Enumerator_t3962036967 *, const RuntimeMethod*))Enumerator_Dispose_m3503748991_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::Clear()
#define List_1_Clear_m3053871591(__this, method) ((  void (*) (List_1_t817881248 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Word>::Clear()
#define List_1_Clear_m3489354309(__this, method) ((  void (*) (List_1_t2588113360 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::Clear()
#define Dictionary_2_Clear_m3931322809(__this, method) ((  void (*) (Dictionary_2_t2529487133 *, const RuntimeMethod*))Dictionary_2_Clear_m212974362_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordBehaviour>::Clear()
#define Dictionary_2_Clear_m1313596732(__this, method) ((  void (*) (Dictionary_2_t3393143310 *, const RuntimeMethod*))Dictionary_2_Clear_m212974362_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordBehaviour>>::Clear()
#define Dictionary_2_Clear_m3720299519(__this, method) ((  void (*) (Dictionary_2_t1466793724 *, const RuntimeMethod*))Dictionary_2_Clear_m1938428402_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m452890411(__this, p0, method) ((  bool (*) (Dictionary_2_t2529487133 *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m2382293057_gshared)(__this, p0, method)
// System.Void Vuforia.WordImpl::.ctor(System.Int32,System.String,UnityEngine.Vector2)
extern "C"  void WordImpl__ctor_m518897599 (WordImpl_t2494369133 * __this, int32_t ___id0, String_t* ___text1, Vector2_t2156229523  ___size2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::.ctor(Vuforia.Word)
extern "C"  void WordResultImpl__ctor_m3731373850 (WordResultImpl_t709252498 * __this, RuntimeObject* ___word0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::Add(!0,!1)
#define Dictionary_2_Add_m417576055(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2529487133 *, int32_t, WordResult_t3640773802 *, const RuntimeMethod*))Dictionary_2_Add_m2059424751_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordResult>::Add(!0)
#define List_1_Add_m309338820(__this, p0, method) ((  void (*) (List_1_t817881248 *, WordResult_t3640773802 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
#define List_1__ctor_m1628857705(__this, method) ((  void (*) (List_1_t128053199 *, const RuntimeMethod*))List_1__ctor_m1628857705_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
#define List_1_Add_m697420525(__this, p0, method) ((  void (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_Add_m697420525_gshared)(__this, p0, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::get_Keys()
#define Dictionary_2_get_Keys_m2166097550(__this, method) ((  KeyCollection_t2719162604 * (*) (Dictionary_2_t2529487133 *, const RuntimeMethod*))Dictionary_2_get_Keys_m1840317613_gshared)(__this, method)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisInt32_t2950945753_m1435865193(__this /* static, unused */, p0, method) ((  List_1_t128053199 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisInt32_t2950945753_m1435865193_gshared)(__this /* static, unused */, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
#define List_1_GetEnumerator_m731136149(__this, method) ((  Enumerator_t2017297076  (*) (List_1_t128053199 *, const RuntimeMethod*))List_1_GetEnumerator_m731136149_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
#define Enumerator_get_Current_m4088456620(__this, method) ((  int32_t (*) (Enumerator_t2017297076 *, const RuntimeMethod*))Enumerator_get_Current_m4088456620_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
#define List_1_Contains_m2934014725(__this, p0, method) ((  bool (*) (List_1_t128053199 *, int32_t, const RuntimeMethod*))List_1_Contains_m2934014725_gshared)(__this, p0, method)
// !1 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::get_Item(!0)
#define Dictionary_2_get_Item_m2551113427(__this, p0, method) ((  WordResult_t3640773802 * (*) (Dictionary_2_t2529487133 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m107019914_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Word>::Add(!0)
#define List_1_Add_m3459031900(__this, p0, method) ((  void (*) (List_1_t2588113360 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::Remove(!0)
#define Dictionary_2_Remove_m1088040339(__this, p0, method) ((  bool (*) (Dictionary_2_t2529487133 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m4193450060_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
#define Enumerator_MoveNext_m2218650275(__this, method) ((  bool (*) (Enumerator_t2017297076 *, const RuntimeMethod*))Enumerator_MoveNext_m2218650275_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
#define Enumerator_Dispose_m222348240(__this, method) ((  void (*) (Enumerator_t2017297076 *, const RuntimeMethod*))Enumerator_Dispose_m222348240_gshared)(__this, method)
// System.Void Vuforia.WordManager::UnregisterLostWords()
extern "C"  void WordManager_UnregisterLostWords_m2200841016 (WordManager_t3100853168 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManager::AssociateWordResultsWithBehaviours()
extern "C"  void WordManager_AssociateWordResultsWithBehaviours_m461350755 (WordManager_t3100853168 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaARController Vuforia.VuforiaARController::get_Instance()
extern "C"  VuforiaARController_t1876945237 * VuforiaARController_get_Instance_m1100644214 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.VuforiaARController::GetVideoBackgroundRectInViewPort()
extern "C"  Rect_t2360479859  VuforiaARController_GetVideoBackgroundRectInViewPort_m1517317621 (VuforiaARController_t1876945237 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaARController::get_VideoBackGroundMirrored()
extern "C"  int32_t VuforiaARController_get_VideoBackGroundMirrored_m2793229335 (VuforiaARController_t1876945237 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDevice::GetVideoMode()
extern "C"  VideoModeData_t2066817255  CameraDevice_GetVideoMode_m3070743689 (CameraDevice_t960297568 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Transform_TransformPoint_m226827784 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t2301928331  Quaternion_op_Multiply_m1294064023 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
extern "C"  Vector3_t3722313464  Vector3_get_left_m2428419009 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  Quaternion_AngleAxis_m1767165696 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetPose(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void WordResultImpl_SetPose_m1787749657 (WordResultImpl_t709252498 * __this, Vector3_t3722313464  ___position0, Quaternion_t2301928331  ___orientation1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.TrackableBehaviour/Status Vuforia.TrackerData/WordResultData::get_status()
extern "C"  int32_t WordResultData_get_status_m203402271 (WordResultData_t1538379568 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetStatus(Vuforia.TrackableBehaviour/Status)
extern "C"  void WordResultImpl_SetStatus_m1510737358 (WordResultImpl_t709252498 * __this, int32_t ___status0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.OrientedBoundingBox::.ctor(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  void OrientedBoundingBox__ctor_m1736506094 (OrientedBoundingBox_t2769728497 * __this, Vector2_t2156229523  ___center0, Vector2_t2156229523  ___halfExtents1, float ___rotation2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.OrientedBoundingBox Vuforia.VuforiaRuntimeUtilities::CameraFrameToScreenSpaceCoordinates(Vuforia.OrientedBoundingBox,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C"  OrientedBoundingBox_t2769728497  VuforiaRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m626826678 (RuntimeObject * __this /* static, unused */, OrientedBoundingBox_t2769728497  ___cameraFrameObb0, Rect_t2360479859  ___bgTextureViewPortRect1, bool ___isTextureMirrored2, VideoModeData_t2066817255  ___videoModeData3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetObb(Vuforia.OrientedBoundingBox)
extern "C"  void WordResultImpl_SetObb_m3870243631 (WordResultImpl_t709252498 * __this, OrientedBoundingBox_t2769728497  ___obb0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManager::UpdateWordBehaviourPoses()
extern "C"  void WordManager_UpdateWordBehaviourPoses_m234614189 (WordManager_t3100853168 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Vuforia.Word>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1__ctor_m3158419898(__this, p0, method) ((  void (*) (List_1_t2588113360 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1328752868_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Vuforia.Word>::GetEnumerator()
#define List_1_GetEnumerator_m2302738403(__this, method) ((  Enumerator_t182389941  (*) (List_1_t2588113360 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Vuforia.Word>::get_Current()
#define Enumerator_get_Current_m2736178487(__this, method) ((  RuntimeObject* (*) (Enumerator_t182389941 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// Vuforia.WordBehaviour Vuforia.WordManager::AssociateWordBehaviour(Vuforia.WordResult)
extern "C"  WordBehaviour_t209462683 * WordManager_AssociateWordBehaviour_m1817390297 (WordManager_t3100853168 * __this, WordResult_t3640773802 * ___wordResult0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<Vuforia.Word>::Remove(!0)
#define List_1_Remove_m1056585745(__this, p0, method) ((  bool (*) (List_1_t2588113360 *, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<Vuforia.Word>::MoveNext()
#define Enumerator_MoveNext_m2288170636(__this, method) ((  bool (*) (Enumerator_t182389941 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.Word>::Dispose()
#define Enumerator_Dispose_m3471433355(__this, method) ((  void (*) (Enumerator_t182389941 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Vuforia.WordResult>::GetEnumerator()
#define List_1_GetEnumerator_m2482267928(__this, method) ((  Enumerator_t2707125125  (*) (List_1_t817881248 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Vuforia.WordResult>::get_Current()
#define Enumerator_get_Current_m4042749952(__this, method) ((  WordResult_t3640773802 * (*) (Enumerator_t2707125125 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<Vuforia.WordResult>::MoveNext()
#define Enumerator_MoveNext_m2572193847(__this, method) ((  bool (*) (Enumerator_t2707125125 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.WordResult>::Dispose()
#define Enumerator_Dispose_m1326660095(__this, method) ((  void (*) (Enumerator_t2707125125 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordBehaviour>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m2771048759(__this, p0, method) ((  bool (*) (Dictionary_2_t3393143310 *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m2382293057_gshared)(__this, p0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordBehaviour>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m2773471309(__this, method) ((  Enumerator_t1052358789  (*) (Dictionary_2_t3393143310 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m1087370259_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.WordBehaviour>::get_Current()
#define Enumerator_get_Current_m2154097776(__this, method) ((  KeyValuePair_2_t1495848181  (*) (Enumerator_t1052358789 *, const RuntimeMethod*))Enumerator_get_Current_m3431285658_gshared)(__this, method)
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordBehaviour>::get_Key()
#define KeyValuePair_2_get_Key_m1922373331(__this, method) ((  int32_t (*) (KeyValuePair_2_t1495848181 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1839753989_gshared)(__this, method)
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordBehaviour>::get_Value()
#define KeyValuePair_2_get_Value_m1813463021(__this, method) ((  WordBehaviour_t209462683 * (*) (KeyValuePair_2_t1495848181 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3495598764_gshared)(__this, method)
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Quaternion_op_Multiply_m2607404835 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.WordBehaviour>::MoveNext()
#define Enumerator_MoveNext_m3012356852(__this, method) ((  bool (*) (Enumerator_t1052358789 *, const RuntimeMethod*))Enumerator_MoveNext_m3398155861_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.WordBehaviour>::Dispose()
#define Enumerator_Dispose_m1336168494(__this, method) ((  void (*) (Enumerator_t1052358789 *, const RuntimeMethod*))Enumerator_Dispose_m562365603_gshared)(__this, method)
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordBehaviour Vuforia.WordManager::AssociateWordBehaviour(Vuforia.WordResult,Vuforia.WordBehaviour)
extern "C"  WordBehaviour_t209462683 * WordManager_AssociateWordBehaviour_m859919092 (WordManager_t3100853168 * __this, WordResult_t3640773802 * ___wordResult0, WordBehaviour_t209462683 * ___wordBehaviourTemplate1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 System.Linq.Enumerable::First<Vuforia.WordBehaviour>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_First_TisWordBehaviour_t209462683_m4288152383(__this /* static, unused */, p0, method) ((  WordBehaviour_t209462683 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_m3835263318_gshared)(__this /* static, unused */, p0, method)
// Vuforia.WordBehaviour Vuforia.WordManager::InstantiateWordBehaviour(Vuforia.WordBehaviour)
extern "C"  WordBehaviour_t209462683 * WordManager_InstantiateWordBehaviour_m2264733916 (RuntimeObject * __this /* static, unused */, WordBehaviour_t209462683 * ___input0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordBehaviour>::get_Count()
#define Dictionary_2_get_Count_m2971063614(__this, method) ((  int32_t (*) (Dictionary_2_t3393143310 *, const RuntimeMethod*))Dictionary_2_get_Count_m3300912776_gshared)(__this, method)
// System.Void Vuforia.WordBehaviour::InitializeWord(Vuforia.Word)
extern "C"  void WordBehaviour_InitializeWord_m2807202778 (WordBehaviour_t209462683 * __this, RuntimeObject* ___word0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordBehaviour>::Add(!0,!1)
#define Dictionary_2_Add_m2705235964(__this, p0, p1, method) ((  void (*) (Dictionary_2_t3393143310 *, int32_t, WordBehaviour_t209462683 *, const RuntimeMethod*))Dictionary_2_Add_m2059424751_gshared)(__this, p0, p1, method)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t1113636619_m4070250708(__this /* static, unused */, p0, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.GameObject::GetComponent<Vuforia.WordBehaviour>()
#define GameObject_GetComponent_TisWordBehaviour_t209462683_m2132343485(__this, method) ((  WordBehaviour_t209462683 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C"  void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<Vuforia.WordBehaviour>()
#define GameObject_AddComponent_TisWordBehaviour_t209462683_m808492541(__this, method) ((  WordBehaviour_t209462683 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// System.Void Vuforia.WordResult::.ctor()
extern "C"  void WordResult__ctor_m1058569109 (WordResult_t3640773802 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.VuMarkTargetImpl::.ctor(System.Int32,System.Byte[],System.UInt64,Vuforia.InstanceIdType,System.UInt32,Vuforia.VuMarkTemplateImpl)
extern "C"  void VuMarkTargetImpl__ctor_m2963334285 (VuMarkTargetImpl_t1052843922 * __this, int32_t ___id0, ByteU5BU5D_t4116647657* ___buffer1, uint64_t ___numericValue2, int32_t ___dataType3, uint32_t ___dataLength4, VuMarkTemplateImpl_t667343433 * ___template5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTargetImpl__ctor_m2963334285_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VuMarkTemplateImpl_t667343433 * L_0 = ___template5;
		NullCheck(L_0);
		String_t* L_1 = TrackableImpl_get_Name_m420167445(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___id0;
		DisabledExtendedTrackingImpl_t4193346383 * L_3 = (DisabledExtendedTrackingImpl_t4193346383 *)il2cpp_codegen_object_new(DisabledExtendedTrackingImpl_t4193346383_il2cpp_TypeInfo_var);
		DisabledExtendedTrackingImpl__ctor_m2179332291(L_3, /*hidden argument*/NULL);
		VuMarkTemplateImpl_t667343433 * L_4 = ___template5;
		VuMarkSetTargetSize_t4198822840 * L_5 = (VuMarkSetTargetSize_t4198822840 *)il2cpp_codegen_object_new(VuMarkSetTargetSize_t4198822840_il2cpp_TypeInfo_var);
		VuMarkSetTargetSize__ctor_m2263671013(L_5, L_4, /*hidden argument*/NULL);
		ObjectTargetImpl__ctor_m2073027769(__this, L_1, L_2, L_3, L_5, /*hidden argument*/NULL);
		VuMarkTemplateImpl_t667343433 * L_6 = ___template5;
		__this->set_mVuMarkTemplate_4(L_6);
		ByteU5BU5D_t4116647657* L_7 = ___buffer1;
		uint64_t L_8 = ___numericValue2;
		int32_t L_9 = ___dataType3;
		uint32_t L_10 = ___dataLength4;
		InstanceIdImpl_t2824054591 * L_11 = (InstanceIdImpl_t2824054591 *)il2cpp_codegen_object_new(InstanceIdImpl_t2824054591_il2cpp_TypeInfo_var);
		InstanceIdImpl__ctor_m2187318971(L_11, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		__this->set_mInstanceId_5(L_11);
		return;
	}
}
// Vuforia.InstanceId Vuforia.VuMarkTargetImpl::get_InstanceId()
extern "C"  RuntimeObject* VuMarkTargetImpl_get_InstanceId_m3227271934 (VuMarkTargetImpl_t1052843922 * __this, const RuntimeMethod* method)
{
	{
		InstanceIdImpl_t2824054591 * L_0 = __this->get_mInstanceId_5();
		return L_0;
	}
}
// Vuforia.VuMarkTemplate Vuforia.VuMarkTargetImpl::get_Template()
extern "C"  RuntimeObject* VuMarkTargetImpl_get_Template_m1728243798 (VuMarkTargetImpl_t1052843922 * __this, const RuntimeMethod* method)
{
	{
		VuMarkTemplateImpl_t667343433 * L_0 = __this->get_mVuMarkTemplate_4();
		return L_0;
	}
}
// Vuforia.Image Vuforia.VuMarkTargetImpl::get_InstanceImage()
extern "C"  Image_t745056343 * VuMarkTargetImpl_get_InstanceImage_m2552028378 (VuMarkTargetImpl_t1052843922 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTargetImpl_get_InstanceImage_m2552028378_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsVuforiaEnabled_m1152377305(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (Image_t745056343 *)NULL;
	}

IL_0009:
	{
		Image_t745056343 * L_1 = __this->get_mInstanceImage_6();
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		VuMarkTargetImpl_CreateInstanceImage_m848615665(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		Image_t745056343 * L_2 = __this->get_mInstanceImage_6();
		return L_2;
	}
}
// System.Int32 Vuforia.VuMarkTargetImpl::CallNativeGetInstanceImage()
extern "C"  int32_t VuMarkTargetImpl_CallNativeGetInstanceImage_m1381867968 (VuMarkTargetImpl_t1052843922 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTargetImpl_CallNativeGetInstanceImage_m1381867968_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (ImageHeaderData_t3550119865_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_2 = Marshal_SizeOf_m3069307747(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		intptr_t L_3 = Marshal_AllocHGlobal_m491131085(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		ImageHeaderData_t3550119865  L_4 = __this->get_mInstanceImageHeader_7();
		ImageHeaderData_t3550119865  L_5 = L_4;
		RuntimeObject * L_6 = Box(ImageHeaderData_t3550119865_il2cpp_TypeInfo_var, &L_5);
		intptr_t L_7 = V_0;
		Marshal_StructureToPtr_m2294149499(NULL /*static, unused*/, L_6, L_7, (bool)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_8 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_9 = TrackableImpl_get_ID_m2679724236(__this, /*hidden argument*/NULL);
		intptr_t L_10 = V_0;
		NullCheck(L_8);
		int32_t L_11 = InterfaceFuncInvoker2< int32_t, int32_t, intptr_t >::Invoke(229 /* System.Int32 Vuforia.IVuforiaWrapper::VuMarkTargetGetInstanceImage(System.Int32,System.IntPtr) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		intptr_t L_12 = V_0;
		RuntimeTypeHandle_t3027515415  L_13 = { reinterpret_cast<intptr_t> (ImageHeaderData_t3550119865_0_0_0_var) };
		Type_t * L_14 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		RuntimeObject * L_15 = Marshal_PtrToStructure_m771949023(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
		__this->set_mInstanceImageHeader_7(((*(ImageHeaderData_t3550119865 *)((ImageHeaderData_t3550119865 *)UnBox(L_15, ImageHeaderData_t3550119865_il2cpp_TypeInfo_var)))));
		intptr_t L_16 = V_0;
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Void Vuforia.VuMarkTargetImpl::CreateInstanceImage()
extern "C"  void VuMarkTargetImpl_CreateInstanceImage_m848615665 (VuMarkTargetImpl_t1052843922 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTargetImpl_CreateInstanceImage_m848615665_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Image_t745056343 * V_0 = NULL;
	{
		ImageHeaderData_t3550119865 * L_0 = __this->get_address_of_mInstanceImageHeader_7();
		il2cpp_codegen_initobj(L_0, sizeof(ImageHeaderData_t3550119865 ));
		ImageHeaderData_t3550119865 * L_1 = __this->get_address_of_mInstanceImageHeader_7();
		L_1->set_width_1(0);
		ImageHeaderData_t3550119865 * L_2 = __this->get_address_of_mInstanceImageHeader_7();
		L_2->set_height_2(0);
		ImageHeaderData_t3550119865 * L_3 = __this->get_address_of_mInstanceImageHeader_7();
		L_3->set_format_6(((int32_t)16));
		int32_t L_4 = VuMarkTargetImpl_CallNativeGetInstanceImage_m1381867968(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral1256203510, /*hidden argument*/NULL);
		return;
	}

IL_0044:
	{
		Image_t745056343 * L_5 = (Image_t745056343 *)il2cpp_codegen_object_new(Image_t745056343_il2cpp_TypeInfo_var);
		Image__ctor_m1696742014(L_5, /*hidden argument*/NULL);
		__this->set_mInstanceImage_6(L_5);
		Image_t745056343 * L_6 = __this->get_mInstanceImage_6();
		V_0 = L_6;
		ImageHeaderData_t3550119865  L_7 = __this->get_mInstanceImageHeader_7();
		Image_t745056343 * L_8 = V_0;
		VuMarkTargetImpl_SetImageValues_m2669079400(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		Image_t745056343 * L_9 = V_0;
		VuMarkTargetImpl_AllocateImage_m2193152031(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		ImageHeaderData_t3550119865 * L_10 = __this->get_address_of_mInstanceImageHeader_7();
		Image_t745056343 * L_11 = V_0;
		NullCheck(L_11);
		intptr_t L_12 = Image_get_UnmanagedData_m3708296414(L_11, /*hidden argument*/NULL);
		L_10->set_data_0(L_12);
		int32_t L_13 = VuMarkTargetImpl_CallNativeGetInstanceImage_m1381867968(__this, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_008c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral1256203510, /*hidden argument*/NULL);
		return;
	}

IL_008c:
	{
		Image_t745056343 * L_14 = V_0;
		NullCheck(L_14);
		Image_CopyPixelsFromUnmanagedBuffer_m557743584(L_14, /*hidden argument*/NULL);
		Image_t745056343 * L_15 = V_0;
		__this->set_mInstanceImage_6(L_15);
		return;
	}
}
// System.Void Vuforia.VuMarkTargetImpl::SetImageValues(Vuforia.TrackerData/ImageHeaderData,Vuforia.Image)
extern "C"  void VuMarkTargetImpl_SetImageValues_m2669079400 (RuntimeObject * __this /* static, unused */, ImageHeaderData_t3550119865  ___imageHeader0, Image_t745056343 * ___image1, const RuntimeMethod* method)
{
	{
		Image_t745056343 * L_0 = ___image1;
		ImageHeaderData_t3550119865  L_1 = ___imageHeader0;
		int32_t L_2 = L_1.get_width_1();
		NullCheck(L_0);
		Image_set_Width_m2860119284(L_0, L_2, /*hidden argument*/NULL);
		Image_t745056343 * L_3 = ___image1;
		ImageHeaderData_t3550119865  L_4 = ___imageHeader0;
		int32_t L_5 = L_4.get_height_2();
		NullCheck(L_3);
		Image_set_Height_m443427373(L_3, L_5, /*hidden argument*/NULL);
		Image_t745056343 * L_6 = ___image1;
		ImageHeaderData_t3550119865  L_7 = ___imageHeader0;
		int32_t L_8 = L_7.get_stride_3();
		NullCheck(L_6);
		Image_set_Stride_m3635796939(L_6, L_8, /*hidden argument*/NULL);
		Image_t745056343 * L_9 = ___image1;
		ImageHeaderData_t3550119865  L_10 = ___imageHeader0;
		int32_t L_11 = L_10.get_bufferWidth_4();
		NullCheck(L_9);
		Image_set_BufferWidth_m3848581627(L_9, L_11, /*hidden argument*/NULL);
		Image_t745056343 * L_12 = ___image1;
		ImageHeaderData_t3550119865  L_13 = ___imageHeader0;
		int32_t L_14 = L_13.get_bufferHeight_5();
		NullCheck(L_12);
		Image_set_BufferHeight_m1072814985(L_12, L_14, /*hidden argument*/NULL);
		Image_t745056343 * L_15 = ___image1;
		ImageHeaderData_t3550119865  L_16 = ___imageHeader0;
		int32_t L_17 = L_16.get_format_6();
		NullCheck(L_15);
		Image_set_PixelFormat_m2634889912(L_15, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuMarkTargetImpl::AllocateImage(Vuforia.Image)
extern "C"  void VuMarkTargetImpl_AllocateImage_m2193152031 (RuntimeObject * __this /* static, unused */, Image_t745056343 * ___image0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTargetImpl_AllocateImage_m2193152031_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		Image_t745056343 * L_1 = ___image0;
		NullCheck(L_1);
		int32_t L_2 = Image_get_BufferWidth_m2324972437(L_1, /*hidden argument*/NULL);
		Image_t745056343 * L_3 = ___image0;
		NullCheck(L_3);
		int32_t L_4 = Image_get_BufferHeight_m1709821308(L_3, /*hidden argument*/NULL);
		Image_t745056343 * L_5 = ___image0;
		NullCheck(L_5);
		int32_t L_6 = Image_get_PixelFormat_m4039465001(L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_7 = InterfaceFuncInvoker3< int32_t, int32_t, int32_t, int32_t >::Invoke(144 /* System.Int32 Vuforia.IVuforiaWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_0, L_2, L_4, L_6);
		V_0 = L_7;
		Image_t745056343 * L_8 = ___image0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		Image_set_Pixels_m1525806273(L_8, ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_9)), /*hidden argument*/NULL);
		Image_t745056343 * L_10 = ___image0;
		NullCheck(L_10);
		intptr_t L_11 = Image_get_UnmanagedData_m3708296414(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		Image_t745056343 * L_12 = ___image0;
		int32_t L_13 = V_0;
		intptr_t L_14 = Marshal_AllocHGlobal_m491131085(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Image_set_UnmanagedData_m697184426(L_12, L_14, /*hidden argument*/NULL);
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
// System.Void Vuforia.VuMarkTargetImpl/VuMarkSetTargetSize::.ctor(Vuforia.VuMarkTemplate)
extern "C"  void VuMarkSetTargetSize__ctor_m2263671013 (VuMarkSetTargetSize_t4198822840 * __this, RuntimeObject* ___template0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkSetTargetSize__ctor_m2263671013_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		DisabledSetTargetSize__ctor_m2661789762(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___template0;
		__this->set_mTemplate_1(L_1);
		return;
	}
}
// UnityEngine.Vector3 Vuforia.VuMarkTargetImpl/VuMarkSetTargetSize::GetSize()
extern "C"  Vector3_t3722313464  VuMarkSetTargetSize_GetSize_m2524402891 (VuMarkSetTargetSize_t4198822840 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkSetTargetSize_GetSize_m2524402891_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_mTemplate_1();
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = InterfaceFuncInvoker0< Vector3_t3722313464  >::Invoke(3 /* UnityEngine.Vector3 Vuforia.ObjectTarget::GetSize() */, ObjectTarget_t3212252422_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Single Vuforia.VuMarkTargetImpl/VuMarkSetTargetSize::GetLargestSizeComponent()
extern "C"  float VuMarkSetTargetSize_GetLargestSizeComponent_m1501563452 (VuMarkSetTargetSize_t4198822840 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkSetTargetSize_GetLargestSizeComponent_m1501563452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_mTemplate_1();
		NullCheck(L_0);
		float L_1 = InterfaceFuncInvoker0< float >::Invoke(4 /* System.Single Vuforia.ObjectTarget::GetLargestSizeComponent() */, ObjectTarget_t3212252422_il2cpp_TypeInfo_var, L_0);
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
// System.Void Vuforia.VuMarkTemplateImpl::.ctor(System.String,System.Int32,Vuforia.DataSet)
extern "C"  void VuMarkTemplateImpl__ctor_m2434547980 (VuMarkTemplateImpl_t667343433 * __this, String_t* ___name0, int32_t ___id1, DataSet_t3286034874 * ___dataSet2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTemplateImpl__ctor_m2434547980_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = ___id1;
		DataSet_t3286034874 * L_2 = ___dataSet2;
		DataSet_t3286034874 * L_3 = ___dataSet2;
		NullCheck(L_3);
		intptr_t L_4 = DataSet_get_DataSetPtr_m282888524(L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___id1;
		DataSetExtendedTrackingImpl_t3413727792 * L_6 = (DataSetExtendedTrackingImpl_t3413727792 *)il2cpp_codegen_object_new(DataSetExtendedTrackingImpl_t3413727792_il2cpp_TypeInfo_var);
		DataSetExtendedTrackingImpl__ctor_m2878729262(L_6, L_4, L_5, /*hidden argument*/NULL);
		DataSetObjectTargetImpl__ctor_m4106348816(__this, L_0, L_1, L_2, L_6, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		String_t* L_7 = ___name0;
		DataSet_t3286034874 * L_8 = ___dataSet2;
		intptr_t L_9 = (intptr_t)VuMarkTemplateImpl_UpdateOrigin_m437485930_RuntimeMethod_var;
		Action_1_t3894781059 * L_10 = (Action_1_t3894781059 *)il2cpp_codegen_object_new(Action_1_t3894781059_il2cpp_TypeInfo_var);
		Action_1__ctor_m3730744496(L_10, __this, L_9, /*hidden argument*/Action_1__ctor_m3730744496_RuntimeMethod_var);
		CustomDataSetTargetSize_t2186564284 * L_11 = (CustomDataSetTargetSize_t2186564284 *)il2cpp_codegen_object_new(CustomDataSetTargetSize_t2186564284_il2cpp_TypeInfo_var);
		CustomDataSetTargetSize__ctor_m2005176850(L_11, L_7, L_8, L_10, (bool)0, /*hidden argument*/NULL);
		ObjectTargetImpl_set_TargetSize_m551209353(__this, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.String Vuforia.VuMarkTemplateImpl::get_VuMarkUserData()
extern "C"  String_t* VuMarkTemplateImpl_get_VuMarkUserData_m523386316 (VuMarkTemplateImpl_t667343433 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTemplateImpl_get_VuMarkUserData_m523386316_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = __this->get_mUserData_5();
		if (L_0)
		{
			goto IL_006f;
		}
	}
	{
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_1, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		DataSet_t3286034874 * L_3 = ((DataSetObjectTargetImpl_t2835536742 *)__this)->get_mDataSet_4();
		NullCheck(L_3);
		intptr_t L_4 = DataSet_get_DataSetPtr_m282888524(L_3, /*hidden argument*/NULL);
		String_t* L_5 = TrackableImpl_get_Name_m420167445(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_6 = V_0;
		NullCheck(L_2);
		int32_t L_7 = InterfaceFuncInvoker4< int32_t, intptr_t, String_t*, StringBuilder_t *, uint32_t >::Invoke(231 /* System.Int32 Vuforia.IVuforiaWrapper::VuMarkTemplateGetVuMarkUserData(System.IntPtr,System.String,System.Text.StringBuilder,System.UInt32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_2, L_4, L_5, L_6, 0);
		V_1 = L_7;
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		__this->set_mUserData_5(_stringLiteral757602046);
		goto IL_006f;
	}

IL_003e:
	{
		int32_t L_9 = V_1;
		StringBuilder_t * L_10 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_10, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_11 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		DataSet_t3286034874 * L_12 = ((DataSetObjectTargetImpl_t2835536742 *)__this)->get_mDataSet_4();
		NullCheck(L_12);
		intptr_t L_13 = DataSet_get_DataSetPtr_m282888524(L_12, /*hidden argument*/NULL);
		String_t* L_14 = TrackableImpl_get_Name_m420167445(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_15 = V_0;
		int32_t L_16 = V_1;
		NullCheck(L_11);
		InterfaceFuncInvoker4< int32_t, intptr_t, String_t*, StringBuilder_t *, uint32_t >::Invoke(231 /* System.Int32 Vuforia.IVuforiaWrapper::VuMarkTemplateGetVuMarkUserData(System.IntPtr,System.String,System.Text.StringBuilder,System.UInt32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_11, L_13, L_14, L_15, L_16);
		StringBuilder_t * L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		__this->set_mUserData_5(L_18);
	}

IL_006f:
	{
		String_t* L_19 = __this->get_mUserData_5();
		return L_19;
	}
}
// System.Boolean Vuforia.VuMarkTemplateImpl::get_TrackingFromRuntimeAppearance()
extern "C"  bool VuMarkTemplateImpl_get_TrackingFromRuntimeAppearance_m611236549 (VuMarkTemplateImpl_t667343433 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mTrackingFromRuntimeAppearance_7();
		return L_0;
	}
}
// System.Void Vuforia.VuMarkTemplateImpl::set_TrackingFromRuntimeAppearance(System.Boolean)
extern "C"  void VuMarkTemplateImpl_set_TrackingFromRuntimeAppearance_m1654671822 (VuMarkTemplateImpl_t667343433 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTemplateImpl_set_TrackingFromRuntimeAppearance_m1654671822_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		DataSet_t3286034874 * L_1 = ((DataSetObjectTargetImpl_t2835536742 *)__this)->get_mDataSet_4();
		NullCheck(L_1);
		intptr_t L_2 = DataSet_get_DataSetPtr_m282888524(L_1, /*hidden argument*/NULL);
		String_t* L_3 = TrackableImpl_get_Name_m420167445(__this, /*hidden argument*/NULL);
		bool L_4 = ___value0;
		NullCheck(L_0);
		int32_t L_5 = InterfaceFuncInvoker3< int32_t, intptr_t, String_t*, bool >::Invoke(232 /* System.Int32 Vuforia.IVuforiaWrapper::VuMarkTemplateSetTrackingFromRuntimeAppearance(System.IntPtr,System.String,System.Boolean) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_0, L_2, L_3, L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}
	{
		bool L_6 = ___value0;
		__this->set_mTrackingFromRuntimeAppearance_7(L_6);
	}

IL_0026:
	{
		return;
	}
}
// UnityEngine.Vector2 Vuforia.VuMarkTemplateImpl::get_Origin()
extern "C"  Vector2_t2156229523  VuMarkTemplateImpl_get_Origin_m995404167 (VuMarkTemplateImpl_t667343433 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0 = __this->get_mOrigin_6();
		return L_0;
	}
}
// System.Void Vuforia.VuMarkTemplateImpl::UpdateOrigin(UnityEngine.Vector3)
extern "C"  void VuMarkTemplateImpl_UpdateOrigin_m437485930 (VuMarkTemplateImpl_t667343433 * __this, Vector3_t3722313464  ___newSize0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTemplateImpl_UpdateOrigin_m437485930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (Vector2_t2156229523_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_2 = Marshal_SizeOf_m3069307747(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		intptr_t L_3 = Marshal_AllocHGlobal_m491131085(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		DataSet_t3286034874 * L_5 = ((DataSetObjectTargetImpl_t2835536742 *)__this)->get_mDataSet_4();
		NullCheck(L_5);
		intptr_t L_6 = DataSet_get_DataSetPtr_m282888524(L_5, /*hidden argument*/NULL);
		String_t* L_7 = TrackableImpl_get_Name_m420167445(__this, /*hidden argument*/NULL);
		intptr_t L_8 = V_0;
		NullCheck(L_4);
		int32_t L_9 = InterfaceFuncInvoker3< int32_t, intptr_t, String_t*, intptr_t >::Invoke(230 /* System.Int32 Vuforia.IVuforiaWrapper::VuMarkTemplateGetOrigin(System.IntPtr,System.String,System.IntPtr) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_4, L_6, L_7, L_8);
		if (L_9)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_10 = TrackableImpl_get_Name_m420167445(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral168135706, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return;
	}

IL_0049:
	{
		intptr_t L_12 = V_0;
		RuntimeTypeHandle_t3027515415  L_13 = { reinterpret_cast<intptr_t> (Vector2_t2156229523_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		RuntimeObject * L_15 = Marshal_PtrToStructure_m771949023(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
		__this->set_mOrigin_6(((*(Vector2_t2156229523 *)((Vector2_t2156229523 *)UnBox(L_15, Vector2_t2156229523_il2cpp_TypeInfo_var)))));
		intptr_t L_16 = V_0;
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
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
// System.Boolean Vuforia.WebCam::get_DidUpdateThisFrame()
extern "C"  bool WebCam_get_DidUpdateThisFrame_m2722596423 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam_get_DidUpdateThisFrame_m2722596423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = WebCam_get_IsTextureSizeAvailable_m2013217807(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_mWebCamTexture_2();
		NullCheck(L_1);
		bool L_2 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Vuforia.IWebCamTexAdaptor::get_DidUpdateThisFrame() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Boolean Vuforia.WebCam::get_IsPlaying()
extern "C"  bool WebCam_get_IsPlaying_m2513986056 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam_get_IsPlaying_m2513986056_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_mWebCamTexture_2();
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Vuforia.IWebCamTexAdaptor::get_IsPlaying() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 Vuforia.WebCam::get_ActualWidth()
extern "C"  int32_t WebCam_get_ActualWidth_m1009219810 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	{
		TextureRenderer_t3278815845 * L_0 = __this->get_mTextureRenderer_5();
		NullCheck(L_0);
		int32_t L_1 = TextureRenderer_get_Width_m3088621639(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.WebCam::get_ActualHeight()
extern "C"  int32_t WebCam_get_ActualHeight_m4039447561 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	{
		TextureRenderer_t3278815845 * L_0 = __this->get_mTextureRenderer_5();
		NullCheck(L_0);
		int32_t L_1 = TextureRenderer_get_Height_m721659918(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Vuforia.WebCam::get_IsTextureSizeAvailable()
extern "C"  bool WebCam_get_IsTextureSizeAvailable_m2013217807 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsTextureSizeAvailableU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Vuforia.WebCam::set_IsTextureSizeAvailable(System.Boolean)
extern "C"  void WebCam_set_IsTextureSizeAvailable_m2087388218 (WebCam_t2427002488 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsTextureSizeAvailableU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.Boolean Vuforia.WebCam::get_FlipHorizontally()
extern "C"  bool WebCam_get_FlipHorizontally_m1687226069 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mFlipHorizontally_9();
		return L_0;
	}
}
// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCam::get_ResampledTextureSize()
extern "C"  Vec2I_t3527036565  WebCam_get_ResampledTextureSize_m744105525 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	{
		ProfileData_t3519391925 * L_0 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565  L_1 = L_0->get_ResampledTextureSize_1();
		return L_1;
	}
}
// System.Void Vuforia.WebCam::ComputeResampledTextureSize()
extern "C"  void WebCam_ComputeResampledTextureSize_m321498482 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam_ComputeResampledTextureSize_m321498482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	ProfileData_t3519391925  V_3;
	memset(&V_3, 0, sizeof(V_3));
	ProfileData_t3519391925  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		RuntimeObject* L_0 = __this->get_mWebCamTexture_2();
		NullCheck(L_0);
		Texture_t3661962703 * L_1 = InterfaceFuncInvoker0< Texture_t3661962703 * >::Invoke(2 /* UnityEngine.Texture Vuforia.IWebCamTexAdaptor::get_Texture() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_height() */, L_1);
		RuntimeObject* L_3 = __this->get_mWebCamTexture_2();
		NullCheck(L_3);
		Texture_t3661962703 * L_4 = InterfaceFuncInvoker0< Texture_t3661962703 * >::Invoke(2 /* UnityEngine.Texture Vuforia.IWebCamTexAdaptor::get_Texture() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_4);
		V_0 = ((float)((float)(((float)((float)L_2)))/(float)(((float)((float)L_5)))));
		ProfileData_t3519391925 * L_6 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565 * L_7 = L_6->get_address_of_ResampledTextureSize_1();
		int32_t L_8 = L_7->get_x_0();
		float L_9 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply((float)(((float)((float)L_8))), (float)L_9));
		float L_10 = V_1;
		V_2 = (((int32_t)((int32_t)L_10)));
		float L_11 = V_1;
		float L_12 = fabsf(((float)il2cpp_codegen_subtract((float)(480.0f), (float)L_11)));
		if ((!(((float)L_12) <= ((float)(1.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		V_2 = ((int32_t)480);
	}

IL_0054:
	{
		float L_13 = V_1;
		float L_14 = fabsf(((float)il2cpp_codegen_subtract((float)(360.0f), (float)L_13)));
		if ((!(((float)L_14) <= ((float)(1.0f)))))
		{
			goto IL_006d;
		}
	}
	{
		V_2 = ((int32_t)360);
	}

IL_006d:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(ProfileData_t3519391925 ));
		ProfileData_t3519391925 * L_15 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565  L_16 = L_15->get_RequestedTextureSize_0();
		(&V_4)->set_RequestedTextureSize_0(L_16);
		ProfileData_t3519391925 * L_17 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565 * L_18 = L_17->get_address_of_ResampledTextureSize_1();
		int32_t L_19 = L_18->get_x_0();
		int32_t L_20 = V_2;
		Vec2I_t3527036565  L_21;
		memset(&L_21, 0, sizeof(L_21));
		Vec2I__ctor_m1553072655((&L_21), L_19, L_20, /*hidden argument*/NULL);
		(&V_4)->set_ResampledTextureSize_1(L_21);
		ProfileData_t3519391925 * L_22 = __this->get_address_of_mWebCamProfile_8();
		int32_t L_23 = L_22->get_RequestedFPS_2();
		(&V_4)->set_RequestedFPS_2(L_23);
		ProfileData_t3519391925  L_24 = V_4;
		V_3 = L_24;
		ProfileData_t3519391925  L_25 = V_3;
		__this->set_mWebCamProfile_8(L_25);
		return;
	}
}
// System.Void Vuforia.WebCam::.ctor(UnityEngine.Camera[],System.Int32,System.String,System.Boolean,System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor>)
extern "C"  void WebCam__ctor_m2427464772 (WebCam_t2427002488 * __this, CameraU5BU5D_t1709987734* ___arCameras0, int32_t ___renderTextureLayer1, String_t* ___webcamDeviceName2, bool ___flipHorizontally3, Func_3_t3440825513 * ___webCamTexProvider4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam__ctor_m2427464772_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebCamProfile_t4166408645 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	WebCamDeviceU5BU5D_t4294070825* V_3 = NULL;
	int32_t V_4 = 0;
	WebCamDevice_t1322781432  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		__this->set_mIsDirty_10((bool)1);
		__this->set_mLastFrameIdx_11((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_013e;
		}
	}
	{
		int32_t L_1 = ___renderTextureLayer1;
		__this->set_mRenderTextureLayer_12(L_1);
		CameraU5BU5D_t1709987734* L_2 = ___arCameras0;
		__this->set_mARCameras_0(L_2);
		CameraU5BU5D_t1709987734* L_3 = __this->get_mARCameras_0();
		NullCheck(L_3);
		__this->set_mOriginalCameraCullMask_1(((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))))));
		V_1 = 0;
		goto IL_007c;
	}

IL_0043:
	{
		Int32U5BU5D_t385246372* L_4 = __this->get_mOriginalCameraCullMask_1();
		int32_t L_5 = V_1;
		CameraU5BU5D_t1709987734* L_6 = __this->get_mARCameras_0();
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Camera_t4157153871 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		int32_t L_10 = Camera_get_cullingMask_m679085748(L_9, /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (int32_t)L_10);
		CameraU5BU5D_t1709987734* L_11 = __this->get_mARCameras_0();
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Camera_t4157153871 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Camera_t4157153871 * L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = Camera_get_cullingMask_m679085748(L_15, /*hidden argument*/NULL);
		int32_t L_17 = __this->get_mRenderTextureLayer_12();
		NullCheck(L_15);
		Camera_set_cullingMask_m1402455777(L_15, ((int32_t)((int32_t)L_16&(int32_t)((~((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_17&(int32_t)((int32_t)31))))))))), /*hidden argument*/NULL);
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_007c:
	{
		int32_t L_19 = V_1;
		CameraU5BU5D_t1709987734* L_20 = __this->get_mARCameras_0();
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_0043;
		}
	}
	{
		WebCamProfile_t4166408645 * L_21 = (WebCamProfile_t4166408645 *)il2cpp_codegen_object_new(WebCamProfile_t4166408645_il2cpp_TypeInfo_var);
		WebCamProfile__ctor_m820471938(L_21, /*hidden argument*/NULL);
		V_0 = L_21;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_22 = VuforiaRuntimeUtilities_IsVuforiaEnabled_m1152377305(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0109;
		}
	}
	{
		WebCamDeviceU5BU5D_t4294070825* L_23 = WebCamTexture_get_devices_m844246756(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_23);
		if (!(((RuntimeArray *)L_23)->max_length))
		{
			goto IL_0109;
		}
	}
	{
		V_2 = (bool)0;
		WebCamDeviceU5BU5D_t4294070825* L_24 = WebCamTexture_get_devices_m844246756(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_24;
		V_4 = 0;
		goto IL_00ca;
	}

IL_00a9:
	{
		WebCamDeviceU5BU5D_t4294070825* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		WebCamDevice_t1322781432  L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_5 = L_28;
		String_t* L_29 = WebCamDevice_get_name_m3782173082((&V_5), /*hidden argument*/NULL);
		String_t* L_30 = ___webcamDeviceName2;
		NullCheck(L_29);
		bool L_31 = String_Equals_m2270643605(L_29, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00c4;
		}
	}
	{
		V_2 = (bool)1;
	}

IL_00c4:
	{
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00ca:
	{
		int32_t L_33 = V_4;
		WebCamDeviceU5BU5D_t4294070825* L_34 = V_3;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_34)->max_length)))))))
		{
			goto IL_00a9;
		}
	}
	{
		bool L_35 = V_2;
		if (L_35)
		{
			goto IL_00e6;
		}
	}
	{
		WebCamDeviceU5BU5D_t4294070825* L_36 = WebCamTexture_get_devices_m844246756(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_36);
		String_t* L_37 = WebCamDevice_get_name_m3782173082(((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		___webcamDeviceName2 = L_37;
	}

IL_00e6:
	{
		WebCamProfile_t4166408645 * L_38 = V_0;
		String_t* L_39 = ___webcamDeviceName2;
		NullCheck(L_38);
		ProfileData_t3519391925  L_40 = WebCamProfile_GetProfile_m3959388229(L_38, L_39, /*hidden argument*/NULL);
		__this->set_mWebCamProfile_8(L_40);
		Func_3_t3440825513 * L_41 = ___webCamTexProvider4;
		String_t* L_42 = ___webcamDeviceName2;
		ProfileData_t3519391925  L_43 = __this->get_mWebCamProfile_8();
		NullCheck(L_41);
		RuntimeObject* L_44 = Func_3_Invoke_m2574976179(L_41, L_42, L_43, /*hidden argument*/Func_3_Invoke_m2574976179_RuntimeMethod_var);
		__this->set_mWebCamTexture_2(L_44);
		goto IL_0136;
	}

IL_0109:
	{
		WebCamProfile_t4166408645 * L_45 = V_0;
		NullCheck(L_45);
		ProfileData_t3519391925  L_46 = WebCamProfile_get_Default_m3789142228(L_45, /*hidden argument*/NULL);
		__this->set_mWebCamProfile_8(L_46);
		ProfileData_t3519391925 * L_47 = __this->get_address_of_mWebCamProfile_8();
		int32_t L_48 = L_47->get_RequestedFPS_2();
		ProfileData_t3519391925 * L_49 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565  L_50 = L_49->get_RequestedTextureSize_0();
		DefaultWebCamTexAdaptor_t2452636845 * L_51 = (DefaultWebCamTexAdaptor_t2452636845 *)il2cpp_codegen_object_new(DefaultWebCamTexAdaptor_t2452636845_il2cpp_TypeInfo_var);
		DefaultWebCamTexAdaptor__ctor_m299475590(L_51, L_48, L_50, /*hidden argument*/NULL);
		__this->set_mWebCamTexture_2(L_51);
	}

IL_0136:
	{
		bool L_52 = ___flipHorizontally3;
		__this->set_mFlipHorizontally_9(L_52);
	}

IL_013e:
	{
		return;
	}
}
// System.Void Vuforia.WebCam::StartCamera()
extern "C"  void WebCam_StartCamera_m784729827 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam_StartCamera_m784729827_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_mWebcamPlaying_13((bool)1);
		RuntimeObject* L_0 = __this->get_mWebCamTexture_2();
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Vuforia.IWebCamTexAdaptor::get_IsPlaying() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_2 = __this->get_mWebCamTexture_2();
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Vuforia.IWebCamTexAdaptor::Play() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_2);
	}

IL_001f:
	{
		return;
	}
}
// System.Void Vuforia.WebCam::StopCamera()
extern "C"  void WebCam_StopCamera_m1511219799 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam_StopCamera_m1511219799_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_mWebcamPlaying_13((bool)0);
		RuntimeObject* L_0 = __this->get_mWebCamTexture_2();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void Vuforia.IWebCamTexAdaptor::Stop() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void Vuforia.WebCam::ResetPlaying()
extern "C"  void WebCam_ResetPlaying_m697251242 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mWebcamPlaying_13();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		WebCam_StartCamera_m784729827(__this, /*hidden argument*/NULL);
		return;
	}

IL_000f:
	{
		WebCam_StopCamera_m1511219799(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color32[] Vuforia.WebCam::GetPixels32AndBufferFrame()
extern "C"  Color32U5BU5D_t3850468773* WebCam_GetPixels32AndBufferFrame_m3124949850 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	RenderTexture_t2108887433 * V_0 = NULL;
	{
		TextureRenderer_t3278815845 * L_0 = __this->get_mTextureRenderer_5();
		NullCheck(L_0);
		RenderTexture_t2108887433 * L_1 = TextureRenderer_Render_m2768706254(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RenderTexture_t2108887433 * L_2 = V_0;
		RenderTexture_set_active_m1437732586(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_3 = __this->get_mBufferReadTexture_6();
		Rect_t2360479859  L_4 = __this->get_mReadPixelsRect_7();
		NullCheck(L_3);
		Texture2D_ReadPixels_m1510783487(L_3, L_4, 0, 0, (bool)0, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_5 = __this->get_mBufferReadTexture_6();
		NullCheck(L_5);
		Color32U5BU5D_t3850468773* L_6 = Texture2D_GetPixels32_m647746242(L_5, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_7 = V_0;
		RenderTexture_ReleaseTemporary_m2400081536(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void Vuforia.WebCam::RenderFrame(System.Int32)
extern "C"  void WebCam_RenderFrame_m2496994751 (WebCam_t2427002488 * __this, int32_t ___frameIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam_RenderFrame_m2496994751_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture_t3661962703 * V_0 = NULL;
	Texture2D_t3840446185 * V_1 = NULL;
	Image_t745056343 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_mLastFrameIdx_11();
		int32_t L_1 = ___frameIndex0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0092;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRenderer_t3433045970_il2cpp_TypeInfo_var);
		VuforiaRenderer_t3433045970 * L_2 = VuforiaRenderer_get_Instance_m1013623488(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Texture_t3661962703 * L_3 = VuforiaRenderer_get_VideoBackgroundTexture_m954851426(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Texture_t3661962703 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_008b;
		}
	}
	{
		Texture_t3661962703 * L_6 = V_0;
		if (!((Texture2D_t3840446185 *)IsInstSealed((RuntimeObject*)L_6, Texture2D_t3840446185_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}
	{
		Texture_t3661962703 * L_7 = V_0;
		V_1 = ((Texture2D_t3840446185 *)CastclassSealed((RuntimeObject*)L_7, Texture2D_t3840446185_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_8 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		Image_t745056343 * L_9 = CameraDevice_GetCameraImage_m151166382(L_8, ((int32_t)16), /*hidden argument*/NULL);
		V_2 = L_9;
		Image_t745056343 * L_10 = V_2;
		if (!L_10)
		{
			goto IL_008b;
		}
	}
	{
		Texture2D_t3840446185 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_11);
		Image_t745056343 * L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14 = Image_get_BufferWidth_m2324972437(L_13, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0064;
		}
	}
	{
		Texture2D_t3840446185 * L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_height() */, L_15);
		Image_t745056343 * L_17 = V_2;
		NullCheck(L_17);
		int32_t L_18 = Image_get_BufferHeight_m1709821308(L_17, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)L_18))))
		{
			goto IL_0064;
		}
	}
	{
		Texture2D_t3840446185 * L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = Texture2D_get_format_m2371899271(L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_20) == ((int32_t)3)))
		{
			goto IL_0079;
		}
	}

IL_0064:
	{
		Texture2D_t3840446185 * L_21 = V_1;
		Image_t745056343 * L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = Image_get_BufferWidth_m2324972437(L_22, /*hidden argument*/NULL);
		Image_t745056343 * L_24 = V_2;
		NullCheck(L_24);
		int32_t L_25 = Image_get_BufferHeight_m1709821308(L_24, /*hidden argument*/NULL);
		NullCheck(L_21);
		Texture2D_Resize_m2702227255(L_21, L_23, L_25, 3, (bool)0, /*hidden argument*/NULL);
	}

IL_0079:
	{
		Texture2D_t3840446185 * L_26 = V_1;
		Image_t745056343 * L_27 = V_2;
		NullCheck(L_27);
		Color32U5BU5D_t3850468773* L_28 = Image_GetPixels32_m1416524729(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		Texture2D_SetPixels32_m1141065075(L_26, L_28, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_29 = V_1;
		NullCheck(L_29);
		Texture2D_Apply_m2271746283(L_29, /*hidden argument*/NULL);
	}

IL_008b:
	{
		int32_t L_30 = ___frameIndex0;
		__this->set_mLastFrameIdx_11(L_30);
	}

IL_0092:
	{
		return;
	}
}
// Vuforia.CameraDevice/VideoModeData Vuforia.WebCam::GetVideoMode()
extern "C"  VideoModeData_t2066817255  WebCam_GetVideoMode_m2800376222 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	{
		VideoModeData_t2066817255  L_0 = __this->get_mVideoModeData_3();
		return L_0;
	}
}
// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.WebCam::GetVideoTextureInfo()
extern "C"  VideoTextureInfo_t1805965052  WebCam_GetVideoTextureInfo_m3653413215 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	{
		VideoTextureInfo_t1805965052  L_0 = __this->get_mVideoTextureInfo_4();
		return L_0;
	}
}
// System.Boolean Vuforia.WebCam::IsRendererDirty()
extern "C"  bool WebCam_IsRendererDirty_m3358873122 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	{
		bool L_0 = WebCam_get_IsTextureSizeAvailable_m2013217807(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->get_mIsDirty_10();
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		int32_t L_2 = G_B3_0;
		G_B4_0 = L_2;
		if (!L_2)
		{
			G_B5_0 = L_2;
			goto IL_001b;
		}
	}
	{
		__this->set_mIsDirty_10((bool)0);
		G_B5_0 = G_B4_0;
	}

IL_001b:
	{
		return (bool)G_B5_0;
	}
}
// System.Void Vuforia.WebCam::OnDestroy()
extern "C"  void WebCam_OnDestroy_m332336637 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam_OnDestroy_m332336637_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0059;
		}
	}
	{
		V_0 = 0;
		goto IL_0034;
	}

IL_000b:
	{
		CameraU5BU5D_t1709987734* L_1 = __this->get_mARCameras_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Camera_t4157153871 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		CameraU5BU5D_t1709987734* L_6 = __this->get_mARCameras_0();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Camera_t4157153871 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Int32U5BU5D_t385246372* L_10 = __this->get_mOriginalCameraCullMask_1();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		Camera_set_cullingMask_m1402455777(L_9, L_13, /*hidden argument*/NULL);
	}

IL_0030:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0034:
	{
		int32_t L_15 = V_0;
		CameraU5BU5D_t1709987734* L_16 = __this->get_mARCameras_0();
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_000b;
		}
	}
	{
		WebCam_set_IsTextureSizeAvailable_m2087388218(__this, (bool)0, /*hidden argument*/NULL);
		TextureRenderer_t3278815845 * L_17 = __this->get_mTextureRenderer_5();
		if (!L_17)
		{
			goto IL_0059;
		}
	}
	{
		TextureRenderer_t3278815845 * L_18 = __this->get_mTextureRenderer_5();
		NullCheck(L_18);
		TextureRenderer_Destroy_m719921383(L_18, /*hidden argument*/NULL);
	}

IL_0059:
	{
		return;
	}
}
// System.Void Vuforia.WebCam::Update()
extern "C"  void WebCam_Update_m3572144808 (WebCam_t2427002488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCam_Update_m3572144808_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vec2I_t3527036565  V_0;
	memset(&V_0, 0, sizeof(V_0));
	VideoModeData_t2066817255  V_1;
	memset(&V_1, 0, sizeof(V_1));
	VideoTextureInfo_t1805965052  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0170;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_mWebCamTexture_2();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(5 /* System.Void Vuforia.IWebCamTexAdaptor::CheckPermissions() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_1);
		bool L_2 = WebCam_get_IsTextureSizeAvailable_m2013217807(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0170;
		}
	}
	{
		RuntimeObject* L_3 = __this->get_mWebCamTexture_2();
		NullCheck(L_3);
		bool L_4 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Vuforia.IWebCamTexAdaptor::get_DidUpdateThisFrame() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_3);
		if (!L_4)
		{
			goto IL_0170;
		}
	}
	{
		WebCam_set_IsTextureSizeAvailable_m2087388218(__this, (bool)1, /*hidden argument*/NULL);
		ProfileData_t3519391925 * L_5 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565 * L_6 = L_5->get_address_of_ResampledTextureSize_1();
		int32_t L_7 = L_6->get_y_1();
		if (L_7)
		{
			goto IL_00b2;
		}
	}
	{
		WebCam_ComputeResampledTextureSize_m321498482(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_8 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		InterfaceFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 Vuforia.IVuforiaWrapper::CameraDeviceStopCamera() */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_8);
		RuntimeObject* L_9 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Vuforia.IVuforiaWrapper::CameraDeviceDeinitCamera() */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_9);
		RuntimeObject* L_10 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		ProfileData_t3519391925 * L_11 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565 * L_12 = L_11->get_address_of_ResampledTextureSize_1();
		int32_t L_13 = L_12->get_x_0();
		ProfileData_t3519391925 * L_14 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565 * L_15 = L_14->get_address_of_ResampledTextureSize_1();
		int32_t L_16 = L_15->get_y_1();
		NullCheck(L_10);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(14 /* System.Void Vuforia.IVuforiaWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_10, L_13, L_16);
		RuntimeObject* L_17 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_17);
		InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(12 /* System.Int32 Vuforia.IVuforiaWrapper::CameraDeviceInitCamera(System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_17, 1);
		RuntimeObject* L_18 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(13 /* System.Int32 Vuforia.IVuforiaWrapper::CameraDeviceSelectVideoMode(System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_18, (-1));
		RuntimeObject* L_19 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_19);
		InterfaceFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 Vuforia.IVuforiaWrapper::CameraDeviceStartCamera() */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_19);
	}

IL_00b2:
	{
		ProfileData_t3519391925 * L_20 = __this->get_address_of_mWebCamProfile_8();
		Vec2I_t3527036565  L_21 = L_20->get_ResampledTextureSize_1();
		V_0 = L_21;
		il2cpp_codegen_initobj((&V_1), sizeof(VideoModeData_t2066817255 ));
		Vec2I_t3527036565  L_22 = V_0;
		int32_t L_23 = L_22.get_x_0();
		(&V_1)->set_width_0(L_23);
		Vec2I_t3527036565  L_24 = V_0;
		int32_t L_25 = L_24.get_y_1();
		(&V_1)->set_height_1(L_25);
		ProfileData_t3519391925 * L_26 = __this->get_address_of_mWebCamProfile_8();
		int32_t L_27 = L_26->get_RequestedFPS_2();
		(&V_1)->set_frameRate_2((((float)((float)L_27))));
		VideoModeData_t2066817255  L_28 = V_1;
		__this->set_mVideoModeData_3(L_28);
		il2cpp_codegen_initobj((&V_2), sizeof(VideoTextureInfo_t1805965052 ));
		Vec2I_t3527036565  L_29 = V_0;
		(&V_2)->set_imageSize_1(L_29);
		Vec2I_t3527036565  L_30 = V_0;
		(&V_2)->set_textureSize_0(L_30);
		VideoTextureInfo_t1805965052  L_31 = V_2;
		__this->set_mVideoTextureInfo_4(L_31);
		RuntimeObject* L_32 = __this->get_mWebCamTexture_2();
		NullCheck(L_32);
		Texture_t3661962703 * L_33 = InterfaceFuncInvoker0< Texture_t3661962703 * >::Invoke(2 /* UnityEngine.Texture Vuforia.IWebCamTexAdaptor::get_Texture() */, IWebCamTexAdaptor_t3823546776_il2cpp_TypeInfo_var, L_32);
		int32_t L_34 = __this->get_mRenderTextureLayer_12();
		Vec2I_t3527036565  L_35 = V_0;
		TextureRenderer_t3278815845 * L_36 = (TextureRenderer_t3278815845 *)il2cpp_codegen_object_new(TextureRenderer_t3278815845_il2cpp_TypeInfo_var);
		TextureRenderer__ctor_m495126481(L_36, L_33, L_34, L_35, /*hidden argument*/NULL);
		__this->set_mTextureRenderer_5(L_36);
		Vec2I_t3527036565  L_37 = V_0;
		int32_t L_38 = L_37.get_x_0();
		Vec2I_t3527036565  L_39 = V_0;
		int32_t L_40 = L_39.get_y_1();
		Texture2D_t3840446185 * L_41 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_41, L_38, L_40, /*hidden argument*/NULL);
		__this->set_mBufferReadTexture_6(L_41);
		Vec2I_t3527036565  L_42 = V_0;
		int32_t L_43 = L_42.get_x_0();
		Vec2I_t3527036565  L_44 = V_0;
		int32_t L_45 = L_44.get_y_1();
		Rect_t2360479859  L_46;
		memset(&L_46, 0, sizeof(L_46));
		Rect__ctor_m2614021312((&L_46), (0.0f), (0.0f), (((float)((float)L_43))), (((float)((float)L_45))), /*hidden argument*/NULL);
		__this->set_mReadPixelsRect_7(L_46);
	}

IL_0170:
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
// System.Void Vuforia.WebCamARController::.ctor()
extern "C"  void WebCamARController__ctor_m751483383 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController__ctor_m751483383_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_3_t3440825513 * G_B2_0 = NULL;
	WebCamARController_t3718642882 * G_B2_1 = NULL;
	Func_3_t3440825513 * G_B1_0 = NULL;
	WebCamARController_t3718642882 * G_B1_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3582055403_il2cpp_TypeInfo_var);
		Func_3_t3440825513 * L_0 = ((U3CU3Ec_t3582055403_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3582055403_il2cpp_TypeInfo_var))->get_U3CU3E9__7_0_1();
		Func_3_t3440825513 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3582055403_il2cpp_TypeInfo_var);
		U3CU3Ec_t3582055403 * L_2 = ((U3CU3Ec_t3582055403_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3582055403_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		intptr_t L_3 = (intptr_t)U3CU3Ec_U3C_ctorU3Eb__7_0_m3175983664_RuntimeMethod_var;
		Func_3_t3440825513 * L_4 = (Func_3_t3440825513 *)il2cpp_codegen_object_new(Func_3_t3440825513_il2cpp_TypeInfo_var);
		Func_3__ctor_m3165450366(L_4, L_2, L_3, /*hidden argument*/Func_3__ctor_m3165450366_RuntimeMethod_var);
		Func_3_t3440825513 * L_5 = L_4;
		((U3CU3Ec_t3582055403_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3582055403_il2cpp_TypeInfo_var))->set_U3CU3E9__7_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_mWebCamTexAdaptorProvider_5(G_B2_0);
		ARController__ctor_m2746373751(__this, /*hidden argument*/NULL);
		return;
	}
}
// Vuforia.WebCamARController Vuforia.WebCamARController::get_Instance()
extern "C"  WebCamARController_t3718642882 * WebCamARController_get_Instance_m1980552932 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_get_Instance_m1980552932_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
		WebCamARController_t3718642882 * L_0 = ((WebCamARController_t3718642882_StaticFields*)il2cpp_codegen_static_fields_for(WebCamARController_t3718642882_il2cpp_TypeInfo_var))->get_mInstance_6();
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
		RuntimeObject * L_1 = ((WebCamARController_t3718642882_StaticFields*)il2cpp_codegen_static_fields_for(WebCamARController_t3718642882_il2cpp_TypeInfo_var))->get_mPadlock_7();
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
			WebCamARController_t3718642882 * L_3 = ((WebCamARController_t3718642882_StaticFields*)il2cpp_codegen_static_fields_for(WebCamARController_t3718642882_il2cpp_TypeInfo_var))->get_mInstance_6();
			if (L_3)
			{
				goto IL_0024;
			}
		}

IL_001a:
		{
			WebCamARController_t3718642882 * L_4 = (WebCamARController_t3718642882 *)il2cpp_codegen_object_new(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
			WebCamARController__ctor_m751483383(L_4, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
			((WebCamARController_t3718642882_StaticFields*)il2cpp_codegen_static_fields_for(WebCamARController_t3718642882_il2cpp_TypeInfo_var))->set_mInstance_6(L_4);
		}

IL_0024:
		{
			IL2CPP_LEAVE(0x2D, FINALLY_0026);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		RuntimeObject * L_5 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
		WebCamARController_t3718642882 * L_6 = ((WebCamARController_t3718642882_StaticFields*)il2cpp_codegen_static_fields_for(WebCamARController_t3718642882_il2cpp_TypeInfo_var))->get_mInstance_6();
		return L_6;
	}
}
// System.Void Vuforia.WebCamARController::RegisterARController()
extern "C"  void WebCamARController_RegisterARController_m2119076139 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_RegisterARController_m2119076139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebCamARController_t3718642882_il2cpp_TypeInfo_var);
		WebCamARController_t3718642882 * L_0 = WebCamARController_get_Instance_m1980552932(NULL /*static, unused*/, /*hidden argument*/NULL);
		ARController_Register_m1901857971(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String Vuforia.WebCamARController::get_DeviceName()
extern "C"  String_t* WebCamARController_get_DeviceName_m370257792 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mDeviceNameSetInEditor_2();
		return L_0;
	}
}
// System.Void Vuforia.WebCamARController::set_DeviceName(System.String)
extern "C"  void WebCamARController_set_DeviceName_m150226649 (WebCamARController_t3718642882 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_mDeviceNameSetInEditor_2(L_0);
		return;
	}
}
// System.Boolean Vuforia.WebCamARController::get_FlipHorizontally()
extern "C"  bool WebCamARController_get_FlipHorizontally_m2274555993 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mFlipHorizontally_3();
		return L_0;
	}
}
// System.Void Vuforia.WebCamARController::set_FlipHorizontally(System.Boolean)
extern "C"  void WebCamARController_set_FlipHorizontally_m357972424 (WebCamARController_t3718642882 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_mFlipHorizontally_3(L_0);
		return;
	}
}
// System.Boolean Vuforia.WebCamARController::get_IsPlaying()
extern "C"  bool WebCamARController_get_IsPlaying_m1662877527 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	{
		WebCam_t2427002488 * L_0 = __this->get_mWebCamImpl_4();
		NullCheck(L_0);
		bool L_1 = WebCam_get_IsPlaying_m2513986056(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Vuforia.WebCam Vuforia.WebCamARController::get_ImplementationClass()
extern "C"  WebCam_t2427002488 * WebCamARController_get_ImplementationClass_m2936222632 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	{
		WebCam_t2427002488 * L_0 = __this->get_mWebCamImpl_4();
		return L_0;
	}
}
// System.Void Vuforia.WebCamARController::InitCamera()
extern "C"  void WebCamARController_InitCamera_m1118184140 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_InitCamera_m1118184140_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CameraU5BU5D_t1709987734* V_0 = NULL;
	{
		WebCam_t2427002488 * L_0 = __this->get_mWebCamImpl_4();
		if (L_0)
		{
			goto IL_003e;
		}
	}
	{
		Application_set_runInBackground_m2169704730(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
		VuforiaBehaviour_t2151848540 * L_1 = ARController_get_VuforiaBehaviour_m4257639924(__this, /*hidden argument*/NULL);
		CameraU5BU5D_t1709987734* L_2 = UnityComponentExtensions_GetComponentsOnlyInChildren_TisCamera_t4157153871_m2275549933(NULL /*static, unused*/, L_1, /*hidden argument*/UnityComponentExtensions_GetComponentsOnlyInChildren_TisCamera_t4157153871_m2275549933_RuntimeMethod_var);
		V_0 = L_2;
		CameraU5BU5D_t1709987734* L_3 = V_0;
		int32_t L_4 = __this->get_RenderTextureLayer_1();
		String_t* L_5 = __this->get_mDeviceNameSetInEditor_2();
		bool L_6 = __this->get_mFlipHorizontally_3();
		Func_3_t3440825513 * L_7 = __this->get_mWebCamTexAdaptorProvider_5();
		WebCam_t2427002488 * L_8 = (WebCam_t2427002488 *)il2cpp_codegen_object_new(WebCam_t2427002488_il2cpp_TypeInfo_var);
		WebCam__ctor_m2427464772(L_8, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		__this->set_mWebCamImpl_4(L_8);
	}

IL_003e:
	{
		return;
	}
}
// System.Void Vuforia.WebCamARController::SetWebCamTexAdaptorProvider(System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor>)
extern "C"  void WebCamARController_SetWebCamTexAdaptorProvider_m3011708764 (WebCamARController_t3718642882 * __this, Func_3_t3440825513 * ___provider0, const RuntimeMethod* method)
{
	{
		Func_3_t3440825513 * L_0 = ___provider0;
		__this->set_mWebCamTexAdaptorProvider_5(L_0);
		return;
	}
}
// System.Void Vuforia.WebCamARController::Awake()
extern "C"  void WebCamARController_Awake_m4020518652 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_Awake_m4020518652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebCamConfiguration_t1101614731 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var);
		VuforiaConfiguration_t1763229349 * L_0 = VuforiaConfiguration_get_Instance_m3335903280(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		WebCamConfiguration_t1101614731 * L_1 = VuforiaConfiguration_get_WebCam_m946983315(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		WebCamConfiguration_t1101614731 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = WebCamConfiguration_get_RenderTextureLayer_m1149468349(L_2, /*hidden argument*/NULL);
		__this->set_RenderTextureLayer_1(L_3);
		WebCamConfiguration_t1101614731 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = WebCamConfiguration_get_DeviceNameSetInEditor_m553266002(L_4, /*hidden argument*/NULL);
		__this->set_mDeviceNameSetInEditor_2(L_5);
		WebCamConfiguration_t1101614731 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = WebCamConfiguration_get_FlipHorizontally_m4118647777(L_6, /*hidden argument*/NULL);
		__this->set_mFlipHorizontally_3(L_7);
		return;
	}
}
// System.Void Vuforia.WebCamARController::OnLevelWasLoaded()
extern "C"  void WebCamARController_OnLevelWasLoaded_m3407873239 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_OnLevelWasLoaded_m3407873239_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		WebCam_t2427002488 * L_1 = __this->get_mWebCamImpl_4();
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		WebCam_t2427002488 * L_2 = __this->get_mWebCamImpl_4();
		NullCheck(L_2);
		WebCam_ResetPlaying_m697251242(L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Vuforia.WebCamARController::OnDestroy()
extern "C"  void WebCamARController_OnDestroy_m1720525424 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_OnDestroy_m1720525424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		WebCam_t2427002488 * L_1 = __this->get_mWebCamImpl_4();
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		WebCam_t2427002488 * L_2 = __this->get_mWebCamImpl_4();
		NullCheck(L_2);
		WebCam_OnDestroy_m332336637(L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Vuforia.WebCamARController::Update()
extern "C"  void WebCamARController_Update_m2251066661 (WebCamARController_t3718642882 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController_Update_m2251066661_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		WebCam_t2427002488 * L_1 = __this->get_mWebCamImpl_4();
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		WebCam_t2427002488 * L_2 = __this->get_mWebCamImpl_4();
		NullCheck(L_2);
		WebCam_Update_m3572144808(L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Vuforia.WebCamARController::.cctor()
extern "C"  void WebCamARController__cctor_m3035936290 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamARController__cctor_m3035936290_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_0, /*hidden argument*/NULL);
		((WebCamARController_t3718642882_StaticFields*)il2cpp_codegen_static_fields_for(WebCamARController_t3718642882_il2cpp_TypeInfo_var))->set_mPadlock_7(L_0);
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
// System.Void Vuforia.WebCamARController/<>c::.cctor()
extern "C"  void U3CU3Ec__cctor_m4266389493 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m4266389493_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3582055403 * L_0 = (U3CU3Ec_t3582055403 *)il2cpp_codegen_object_new(U3CU3Ec_t3582055403_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3450078098(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3582055403_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3582055403_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.WebCamARController/<>c::.ctor()
extern "C"  void U3CU3Ec__ctor_m3450078098 (U3CU3Ec_t3582055403 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// Vuforia.IWebCamTexAdaptor Vuforia.WebCamARController/<>c::<.ctor>b__7_0(System.String,Vuforia.WebCamProfile/ProfileData)
extern "C"  RuntimeObject* U3CU3Ec_U3C_ctorU3Eb__7_0_m3175983664 (U3CU3Ec_t3582055403 * __this, String_t* ___name0, ProfileData_t3519391925  ___profileData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_ctorU3Eb__7_0_m3175983664_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		ProfileData_t3519391925  L_1 = ___profileData1;
		WebCamTexAdaptor_t3430449046 * L_2 = (WebCamTexAdaptor_t3430449046 *)il2cpp_codegen_object_new(WebCamTexAdaptor_t3430449046_il2cpp_TypeInfo_var);
		WebCamTexAdaptor__ctor_m852957585(L_2, L_0, L_1, /*hidden argument*/NULL);
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
// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::get_Default()
extern "C"  ProfileData_t3519391925  WebCamProfile_get_Default_m3789142228 (WebCamProfile_t4166408645 * __this, const RuntimeMethod* method)
{
	{
		ProfileCollection_t901995765  L_0 = __this->get_mProfileCollection_0();
		ProfileData_t3519391925  L_1 = L_0.get_DefaultProfile_0();
		return L_1;
	}
}
// System.Void Vuforia.WebCamProfile::.ctor()
extern "C"  void WebCamProfile__ctor_m820471938 (WebCamProfile_t4166408645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamProfile__ctor_m820471938_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = PlayModeEditorUtility_get_Instance_m334266941(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ProfileCollection_t901995765  L_1 = InterfaceFuncInvoker0< ProfileCollection_t901995765  >::Invoke(1 /* Vuforia.WebCamProfile/ProfileCollection Vuforia.IPlayModeEditorUtility::LoadAndParseWebcamProfiles() */, IPlayModeEditorUtility_t752570519_il2cpp_TypeInfo_var, L_0);
		__this->set_mProfileCollection_0(L_1);
		return;
	}
}
// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::GetProfile(System.String)
extern "C"  ProfileData_t3519391925  WebCamProfile_GetProfile_m3959388229 (WebCamProfile_t4166408645 * __this, String_t* ___webcamName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamProfile_GetProfile_m3959388229_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ProfileData_t3519391925  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		ProfileCollection_t901995765  L_0 = __this->get_mProfileCollection_0();
		Dictionary_2_t3304648224 * L_1 = L_0.get_Profiles_1();
		String_t* L_2 = ___webcamName0;
		NullCheck(L_2);
		String_t* L_3 = String_ToLower_m2029374922(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4 = Dictionary_2_TryGetValue_m1260807329(L_1, L_3, (&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1260807329_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		ProfileData_t3519391925  L_5 = V_0;
		return L_5;
	}

IL_001c:
	{
		ProfileCollection_t901995765  L_6 = __this->get_mProfileCollection_0();
		ProfileData_t3519391925  L_7 = L_6.get_DefaultProfile_0();
		return L_7;
	}
}
// System.Boolean Vuforia.WebCamProfile::ProfileAvailable(System.String)
extern "C"  bool WebCamProfile_ProfileAvailable_m801322015 (WebCamProfile_t4166408645 * __this, String_t* ___webcamName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamProfile_ProfileAvailable_m801322015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ProfileCollection_t901995765  L_0 = __this->get_mProfileCollection_0();
		Dictionary_2_t3304648224 * L_1 = L_0.get_Profiles_1();
		String_t* L_2 = ___webcamName0;
		NullCheck(L_2);
		String_t* L_3 = String_ToLower_m2029374922(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4 = Dictionary_2_ContainsKey_m4190276240(L_1, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m4190276240_RuntimeMethod_var);
		return L_4;
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
// Conversion methods for marshalling of: Vuforia.WebCamProfile/ProfileCollection
extern "C" void ProfileCollection_t901995765_marshal_pinvoke(const ProfileCollection_t901995765& unmarshaled, ProfileCollection_t901995765_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception);
}
extern "C" void ProfileCollection_t901995765_marshal_pinvoke_back(const ProfileCollection_t901995765_marshaled_pinvoke& marshaled, ProfileCollection_t901995765& unmarshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception);
}
// Conversion method for clean up from marshalling of: Vuforia.WebCamProfile/ProfileCollection
extern "C" void ProfileCollection_t901995765_marshal_pinvoke_cleanup(ProfileCollection_t901995765_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Vuforia.WebCamProfile/ProfileCollection
extern "C" void ProfileCollection_t901995765_marshal_com(const ProfileCollection_t901995765& unmarshaled, ProfileCollection_t901995765_marshaled_com& marshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception);
}
extern "C" void ProfileCollection_t901995765_marshal_com_back(const ProfileCollection_t901995765_marshaled_com& marshaled, ProfileCollection_t901995765& unmarshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception);
}
// Conversion method for clean up from marshalling of: Vuforia.WebCamProfile/ProfileCollection
extern "C" void ProfileCollection_t901995765_marshal_com_cleanup(ProfileCollection_t901995765_marshaled_com& marshaled)
{
}
// System.Void Vuforia.WebCamProfile/ProfileCollection::.ctor(Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>)
extern "C"  void ProfileCollection__ctor_m3713293092 (ProfileCollection_t901995765 * __this, ProfileData_t3519391925  ___defaultProfile0, Dictionary_2_t3304648224 * ___profiles1, const RuntimeMethod* method)
{
	{
		ProfileData_t3519391925  L_0 = ___defaultProfile0;
		__this->set_DefaultProfile_0(L_0);
		Dictionary_2_t3304648224 * L_1 = ___profiles1;
		__this->set_Profiles_1(L_1);
		return;
	}
}
extern "C"  void ProfileCollection__ctor_m3713293092_AdjustorThunk (RuntimeObject * __this, ProfileData_t3519391925  ___defaultProfile0, Dictionary_2_t3304648224 * ___profiles1, const RuntimeMethod* method)
{
	ProfileCollection_t901995765 * _thisAdjusted = reinterpret_cast<ProfileCollection_t901995765 *>(__this + 1);
	ProfileCollection__ctor_m3713293092(_thisAdjusted, ___defaultProfile0, ___profiles1, method);
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
// System.Boolean Vuforia.WebCamTexAdaptor::get_DidUpdateThisFrame()
extern "C"  bool WebCamTexAdaptor_get_DidUpdateThisFrame_m3597507630 (WebCamTexAdaptor_t3430449046 * __this, const RuntimeMethod* method)
{
	{
		WebCamTexture_t1514609158 * L_0 = __this->get_mWebCamTexture_0();
		NullCheck(L_0);
		bool L_1 = WebCamTexture_get_didUpdateThisFrame_m567567483(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Vuforia.WebCamTexAdaptor::get_IsPlaying()
extern "C"  bool WebCamTexAdaptor_get_IsPlaying_m1243887004 (WebCamTexAdaptor_t3430449046 * __this, const RuntimeMethod* method)
{
	{
		WebCamTexture_t1514609158 * L_0 = __this->get_mWebCamTexture_0();
		NullCheck(L_0);
		bool L_1 = WebCamTexture_get_isPlaying_m3525118025(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Texture Vuforia.WebCamTexAdaptor::get_Texture()
extern "C"  Texture_t3661962703 * WebCamTexAdaptor_get_Texture_m2106402337 (WebCamTexAdaptor_t3430449046 * __this, const RuntimeMethod* method)
{
	{
		WebCamTexture_t1514609158 * L_0 = __this->get_mWebCamTexture_0();
		return L_0;
	}
}
// System.Void Vuforia.WebCamTexAdaptor::.ctor(System.String,Vuforia.WebCamProfile/ProfileData)
extern "C"  void WebCamTexAdaptor__ctor_m852957585 (WebCamTexAdaptor_t3430449046 * __this, String_t* ___deviceName0, ProfileData_t3519391925  ___profile1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamTexAdaptor__ctor_m852957585_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		WebCamTexture_t1514609158 * L_0 = (WebCamTexture_t1514609158 *)il2cpp_codegen_object_new(WebCamTexture_t1514609158_il2cpp_TypeInfo_var);
		WebCamTexture__ctor_m2601640589(L_0, /*hidden argument*/NULL);
		__this->set_mWebCamTexture_0(L_0);
		WebCamTexture_t1514609158 * L_1 = __this->get_mWebCamTexture_0();
		String_t* L_2 = ___deviceName0;
		NullCheck(L_1);
		WebCamTexture_set_deviceName_m2479609938(L_1, L_2, /*hidden argument*/NULL);
		WebCamTexture_t1514609158 * L_3 = __this->get_mWebCamTexture_0();
		ProfileData_t3519391925  L_4 = ___profile1;
		int32_t L_5 = L_4.get_RequestedFPS_2();
		NullCheck(L_3);
		WebCamTexture_set_requestedFPS_m1422816314(L_3, (((float)((float)L_5))), /*hidden argument*/NULL);
		WebCamTexture_t1514609158 * L_6 = __this->get_mWebCamTexture_0();
		ProfileData_t3519391925  L_7 = ___profile1;
		Vec2I_t3527036565  L_8 = L_7.get_RequestedTextureSize_0();
		int32_t L_9 = L_8.get_x_0();
		NullCheck(L_6);
		WebCamTexture_set_requestedWidth_m1301971691(L_6, L_9, /*hidden argument*/NULL);
		WebCamTexture_t1514609158 * L_10 = __this->get_mWebCamTexture_0();
		ProfileData_t3519391925  L_11 = ___profile1;
		Vec2I_t3527036565  L_12 = L_11.get_RequestedTextureSize_0();
		int32_t L_13 = L_12.get_y_1();
		NullCheck(L_10);
		WebCamTexture_set_requestedHeight_m3636279808(L_10, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WebCamTexAdaptor::Play()
extern "C"  void WebCamTexAdaptor_Play_m2085954092 (WebCamTexAdaptor_t3430449046 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = Application_HasUserAuthorization_m3146187033(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		AsyncOperation_t1445031843 * L_1 = Application_RequestUserAuthorization_m1407144003(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		__this->set_mCheckCameraPermissions_1(L_1);
		return;
	}

IL_0015:
	{
		WebCamTexture_t1514609158 * L_2 = __this->get_mWebCamTexture_0();
		NullCheck(L_2);
		WebCamTexture_Play_m3866603461(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WebCamTexAdaptor::Stop()
extern "C"  void WebCamTexAdaptor_Stop_m3089842407 (WebCamTexAdaptor_t3430449046 * __this, const RuntimeMethod* method)
{
	{
		WebCamTexture_t1514609158 * L_0 = __this->get_mWebCamTexture_0();
		NullCheck(L_0);
		WebCamTexture_Stop_m3471034432(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WebCamTexAdaptor::CheckPermissions()
extern "C"  void WebCamTexAdaptor_CheckPermissions_m4247082500 (WebCamTexAdaptor_t3430449046 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamTexAdaptor_CheckPermissions_m4247082500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncOperation_t1445031843 * L_0 = __this->get_mCheckCameraPermissions_1();
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		AsyncOperation_t1445031843 * L_1 = __this->get_mCheckCameraPermissions_1();
		NullCheck(L_1);
		bool L_2 = AsyncOperation_get_isDone_m412925263(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		bool L_3 = Application_HasUserAuthorization_m3146187033(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		WebCamTexture_t1514609158 * L_4 = __this->get_mWebCamTexture_0();
		NullCheck(L_4);
		WebCamTexture_Play_m3866603461(L_4, /*hidden argument*/NULL);
		goto IL_0039;
	}

IL_002a:
	{
		RuntimeObject* L_5 = PlayModeEditorUtility_get_Instance_m334266941(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void Vuforia.IPlayModeEditorUtility::ShowErrorInMouseOverWindow(System.String) */, IPlayModeEditorUtility_t752570519_il2cpp_TypeInfo_var, L_5, _stringLiteral2036431799);
	}

IL_0039:
	{
		__this->set_mCheckCameraPermissions_1((AsyncOperation_t1445031843 *)NULL);
	}

IL_0040:
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
// System.Void Vuforia.WireframeBehaviour::Start()
extern "C"  void WireframeBehaviour_Start_m3567912005 (WireframeBehaviour_t1831066704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireframeBehaviour_Start_m3567912005_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_t340375123 * L_0 = __this->get_lineMaterial_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Material_t340375123 * L_2 = __this->get_lineMaterial_2();
		Material_t340375123 * L_3 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m249231841(L_3, L_2, /*hidden argument*/NULL);
		__this->set_mLineMaterial_5(L_3);
		return;
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral1571861241, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WireframeBehaviour::OnRenderObject()
extern "C"  void WireframeBehaviour_OnRenderObject_m913596852 (WireframeBehaviour_t1831066704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireframeBehaviour_OnRenderObject_m913596852_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	MeshFilter_t3523625662 * V_1 = NULL;
	Vector3U5BU5D_t1718750761* V_2 = NULL;
	Int32U5BU5D_t385246372* V_3 = NULL;
	CameraU5BU5D_t1709987734* V_4 = NULL;
	int32_t V_5 = 0;
	Camera_t4157153871 * V_6 = NULL;
	int32_t V_7 = 0;
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t3722313464  V_9;
	memset(&V_9, 0, sizeof(V_9));
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaManager_t1653423889_il2cpp_TypeInfo_var);
		VuforiaManager_t1653423889 * L_0 = VuforiaManager_get_Instance_m100367560(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = VuforiaManager_get_ARCameraTransform_m958890547(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		CameraU5BU5D_t1709987734* L_3 = GameObject_GetComponentsInChildren_TisCamera_t4157153871_m926460427(L_2, /*hidden argument*/GameObject_GetComponentsInChildren_TisCamera_t4157153871_m926460427_RuntimeMethod_var);
		V_0 = (bool)0;
		V_4 = L_3;
		V_5 = 0;
		goto IL_003a;
	}

IL_001d:
	{
		CameraU5BU5D_t1709987734* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Camera_t4157153871 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_6 = L_7;
		Camera_t4157153871 * L_8 = Camera_get_current_m929992396(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t4157153871 * L_9 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0034;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0034:
	{
		int32_t L_11 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003a:
	{
		int32_t L_12 = V_5;
		CameraU5BU5D_t1709987734* L_13 = V_4;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))))))
		{
			goto IL_001d;
		}
	}
	{
		bool L_14 = V_0;
		if (L_14)
		{
			goto IL_0046;
		}
	}
	{
		return;
	}

IL_0046:
	{
		bool L_15 = __this->get_ShowLines_3();
		if (L_15)
		{
			goto IL_004f;
		}
	}
	{
		return;
	}

IL_004f:
	{
		MeshFilter_t3523625662 * L_16 = Component_GetComponent_TisMeshFilter_t3523625662_m569847836(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t3523625662_m569847836_RuntimeMethod_var);
		V_1 = L_16;
		MeshFilter_t3523625662 * L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_005f;
		}
	}
	{
		return;
	}

IL_005f:
	{
		Material_t340375123 * L_19 = __this->get_mLineMaterial_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_19, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0078;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral1571861241, /*hidden argument*/NULL);
		return;
	}

IL_0078:
	{
		MeshFilter_t3523625662 * L_21 = V_1;
		NullCheck(L_21);
		Mesh_t3648964284 * L_22 = MeshFilter_get_sharedMesh_m1726897210(L_21, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_23 = L_22;
		NullCheck(L_23);
		Vector3U5BU5D_t1718750761* L_24 = Mesh_get_vertices_m3585684815(L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		NullCheck(L_23);
		Int32U5BU5D_t385246372* L_25 = Mesh_get_triangles_m3059934743(L_23, /*hidden argument*/NULL);
		V_3 = L_25;
		GL_PushMatrix_m1848274883(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_26 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Matrix4x4_t1817901843  L_27 = Transform_get_localToWorldMatrix_m4155710351(L_26, /*hidden argument*/NULL);
		GL_MultMatrix_m3576884247(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		Material_t340375123 * L_28 = __this->get_mLineMaterial_5();
		NullCheck(L_28);
		Material_SetPass_m686253719(L_28, 0, /*hidden argument*/NULL);
		Material_t340375123 * L_29 = __this->get_mLineMaterial_5();
		Color_t2555686324  L_30 = __this->get_LineColor_4();
		NullCheck(L_29);
		Material_SetColor_m2020215303(L_29, _stringLiteral3957048425, L_30, /*hidden argument*/NULL);
		GL_Begin_m1290681325(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		V_7 = 0;
		goto IL_0121;
	}

IL_00ce:
	{
		Vector3U5BU5D_t1718750761* L_31 = V_2;
		Int32U5BU5D_t385246372* L_32 = V_3;
		int32_t L_33 = V_7;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		int32_t L_36 = L_35;
		Vector3_t3722313464  L_37 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_8 = L_37;
		Vector3U5BU5D_t1718750761* L_38 = V_2;
		Int32U5BU5D_t385246372* L_39 = V_3;
		int32_t L_40 = V_7;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_38);
		int32_t L_43 = L_42;
		Vector3_t3722313464  L_44 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_9 = L_44;
		Vector3U5BU5D_t1718750761* L_45 = V_2;
		Int32U5BU5D_t385246372* L_46 = V_3;
		int32_t L_47 = V_7;
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)2));
		int32_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_45);
		int32_t L_50 = L_49;
		Vector3_t3722313464  L_51 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		Vector3_t3722313464  L_52 = V_8;
		GL_Vertex_m691990801(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		Vector3_t3722313464  L_53 = V_9;
		GL_Vertex_m691990801(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		Vector3_t3722313464  L_54 = V_9;
		GL_Vertex_m691990801(NULL /*static, unused*/, L_54, /*hidden argument*/NULL);
		Vector3_t3722313464  L_55 = L_51;
		GL_Vertex_m691990801(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
		GL_Vertex_m691990801(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
		Vector3_t3722313464  L_56 = V_8;
		GL_Vertex_m691990801(NULL /*static, unused*/, L_56, /*hidden argument*/NULL);
		int32_t L_57 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)3));
	}

IL_0121:
	{
		int32_t L_58 = V_7;
		Int32U5BU5D_t385246372* L_59 = V_3;
		NullCheck(L_59);
		if ((((int32_t)L_58) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_59)->max_length)))))))
		{
			goto IL_00ce;
		}
	}
	{
		GL_End_m539612367(NULL /*static, unused*/, /*hidden argument*/NULL);
		GL_PopMatrix_m3416050869(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WireframeBehaviour::OnDrawGizmos()
extern "C"  void WireframeBehaviour_OnDrawGizmos_m1837418945 (WireframeBehaviour_t1831066704 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireframeBehaviour_OnDrawGizmos_m1837418945_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MeshFilter_t3523625662 * V_0 = NULL;
	Mesh_t3648964284 * V_1 = NULL;
	Vector3U5BU5D_t1718750761* V_2 = NULL;
	Int32U5BU5D_t385246372* V_3 = NULL;
	int32_t V_4 = 0;
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		bool L_0 = __this->get_ShowLines_3();
		if (!L_0)
		{
			goto IL_00de;
		}
	}
	{
		bool L_1 = Behaviour_get_enabled_m753527255(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00de;
		}
	}
	{
		MeshFilter_t3523625662 * L_2 = Component_GetComponent_TisMeshFilter_t3523625662_m569847836(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t3523625662_m569847836_RuntimeMethod_var);
		V_0 = L_2;
		MeshFilter_t3523625662 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_t3600365921 * L_9 = GameObject_get_transform_m1369836730(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Quaternion_t2301928331  L_10 = Transform_get_rotation_m3502953881(L_9, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_t3600365921 * L_12 = GameObject_get_transform_m1369836730(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = Transform_get_lossyScale_m465496651(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t1817901843_il2cpp_TypeInfo_var);
		Matrix4x4_t1817901843  L_14 = Matrix4x4_TRS_m3801934620(NULL /*static, unused*/, L_7, L_10, L_13, /*hidden argument*/NULL);
		Gizmos_set_matrix_m3287403258(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		Color_t2555686324  L_15 = __this->get_LineColor_4();
		Gizmos_set_color_m3399737545(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		MeshFilter_t3523625662 * L_16 = V_0;
		NullCheck(L_16);
		Mesh_t3648964284 * L_17 = MeshFilter_get_sharedMesh_m1726897210(L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		Mesh_t3648964284 * L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_18, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00de;
		}
	}
	{
		Mesh_t3648964284 * L_20 = V_1;
		NullCheck(L_20);
		Vector3U5BU5D_t1718750761* L_21 = Mesh_get_vertices_m3585684815(L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		Mesh_t3648964284 * L_22 = V_1;
		NullCheck(L_22);
		Int32U5BU5D_t385246372* L_23 = Mesh_get_triangles_m3059934743(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		V_4 = 0;
		goto IL_00d7;
	}

IL_008e:
	{
		Vector3U5BU5D_t1718750761* L_24 = V_2;
		Int32U5BU5D_t385246372* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_24);
		int32_t L_29 = L_28;
		Vector3_t3722313464  L_30 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_5 = L_30;
		Vector3U5BU5D_t1718750761* L_31 = V_2;
		Int32U5BU5D_t385246372* L_32 = V_3;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		int32_t L_36 = L_35;
		Vector3_t3722313464  L_37 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_6 = L_37;
		Vector3U5BU5D_t1718750761* L_38 = V_2;
		Int32U5BU5D_t385246372* L_39 = V_3;
		int32_t L_40 = V_4;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)2));
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_38);
		int32_t L_43 = L_42;
		Vector3_t3722313464  L_44 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_7 = L_44;
		Vector3_t3722313464  L_45 = V_5;
		Vector3_t3722313464  L_46 = V_6;
		Gizmos_DrawLine_m3273476787(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		Vector3_t3722313464  L_47 = V_6;
		Vector3_t3722313464  L_48 = V_7;
		Gizmos_DrawLine_m3273476787(NULL /*static, unused*/, L_47, L_48, /*hidden argument*/NULL);
		Vector3_t3722313464  L_49 = V_7;
		Vector3_t3722313464  L_50 = V_5;
		Gizmos_DrawLine_m3273476787(NULL /*static, unused*/, L_49, L_50, /*hidden argument*/NULL);
		int32_t L_51 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)3));
	}

IL_00d7:
	{
		int32_t L_52 = V_4;
		Int32U5BU5D_t385246372* L_53 = V_3;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_53)->max_length)))))))
		{
			goto IL_008e;
		}
	}

IL_00de:
	{
		return;
	}
}
// System.Void Vuforia.WireframeBehaviour::.ctor()
extern "C"  void WireframeBehaviour__ctor_m2452166919 (WireframeBehaviour_t1831066704 * __this, const RuntimeMethod* method)
{
	{
		__this->set_ShowLines_3((bool)1);
		Color_t2555686324  L_0 = Color_get_green_m490390750(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_LineColor_4(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.WireframeTrackableEventHandler::Start()
extern "C"  void WireframeTrackableEventHandler_Start_m3436697873 (WireframeTrackableEventHandler_t2143753312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireframeTrackableEventHandler_Start_m3436697873_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableBehaviour_t1113559212 * L_0 = Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408(__this, /*hidden argument*/Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408_RuntimeMethod_var);
		__this->set_mTrackableBehaviour_2(L_0);
		TrackableBehaviour_t1113559212 * L_1 = __this->get_mTrackableBehaviour_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_3 = __this->get_mTrackableBehaviour_2();
		NullCheck(L_3);
		TrackableBehaviour_RegisterTrackableEventHandler_m2462783619(L_3, __this, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/Status)
extern "C"  void WireframeTrackableEventHandler_OnTrackableStateChanged_m519024718 (WireframeTrackableEventHandler_t2143753312 * __this, int32_t ___previousStatus0, int32_t ___newStatus1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___newStatus1;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___newStatus1;
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_000f;
		}
	}

IL_0008:
	{
		WireframeTrackableEventHandler_OnTrackingFound_m2813716415(__this, /*hidden argument*/NULL);
		return;
	}

IL_000f:
	{
		WireframeTrackableEventHandler_OnTrackingLost_m1967211472(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackingFound()
extern "C"  void WireframeTrackableEventHandler_OnTrackingFound_m2813716415 (WireframeTrackableEventHandler_t2143753312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireframeTrackableEventHandler_OnTrackingFound_m2813716415_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t4234922487* V_0 = NULL;
	WireframeBehaviourU5BU5D_t4114094193* V_1 = NULL;
	RendererU5BU5D_t3210418286* V_2 = NULL;
	int32_t V_3 = 0;
	ColliderU5BU5D_t4234922487* V_4 = NULL;
	WireframeBehaviourU5BU5D_t4114094193* V_5 = NULL;
	{
		RendererU5BU5D_t3210418286* L_0 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var);
		ColliderU5BU5D_t4234922487* L_1 = Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var);
		V_0 = L_1;
		WireframeBehaviourU5BU5D_t4114094193* L_2 = Component_GetComponentsInChildren_TisWireframeBehaviour_t1831066704_m2022065013(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisWireframeBehaviour_t1831066704_m2022065013_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0029;
	}

IL_001c:
	{
		RendererU5BU5D_t3210418286* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Renderer_t2627027031 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Renderer_set_enabled_m1727253150(L_6, (bool)1, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_8 = V_3;
		RendererU5BU5D_t3210418286* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		ColliderU5BU5D_t4234922487* L_10 = V_0;
		V_4 = L_10;
		V_3 = 0;
		goto IL_0044;
	}

IL_0036:
	{
		ColliderU5BU5D_t4234922487* L_11 = V_4;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Collider_t1773347010 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Collider_set_enabled_m1517463283(L_14, (bool)1, /*hidden argument*/NULL);
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0044:
	{
		int32_t L_16 = V_3;
		ColliderU5BU5D_t4234922487* L_17 = V_4;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		WireframeBehaviourU5BU5D_t4114094193* L_18 = V_1;
		V_5 = L_18;
		V_3 = 0;
		goto IL_0060;
	}

IL_0052:
	{
		WireframeBehaviourU5BU5D_t4114094193* L_19 = V_5;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		WireframeBehaviour_t1831066704 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Behaviour_set_enabled_m20417929(L_22, (bool)1, /*hidden argument*/NULL);
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0060:
	{
		int32_t L_24 = V_3;
		WireframeBehaviourU5BU5D_t4114094193* L_25 = V_5;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_0052;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_26 = __this->get_mTrackableBehaviour_2();
		NullCheck(L_26);
		String_t* L_27 = TrackableBehaviour_get_TrackableName_m3644057705(L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3820270571, L_27, _stringLiteral3073488411, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackingLost()
extern "C"  void WireframeTrackableEventHandler_OnTrackingLost_m1967211472 (WireframeTrackableEventHandler_t2143753312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WireframeTrackableEventHandler_OnTrackingLost_m1967211472_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t4234922487* V_0 = NULL;
	WireframeBehaviourU5BU5D_t4114094193* V_1 = NULL;
	RendererU5BU5D_t3210418286* V_2 = NULL;
	int32_t V_3 = 0;
	ColliderU5BU5D_t4234922487* V_4 = NULL;
	WireframeBehaviourU5BU5D_t4114094193* V_5 = NULL;
	{
		RendererU5BU5D_t3210418286* L_0 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var);
		ColliderU5BU5D_t4234922487* L_1 = Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var);
		V_0 = L_1;
		WireframeBehaviourU5BU5D_t4114094193* L_2 = Component_GetComponentsInChildren_TisWireframeBehaviour_t1831066704_m2022065013(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisWireframeBehaviour_t1831066704_m2022065013_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0029;
	}

IL_001c:
	{
		RendererU5BU5D_t3210418286* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Renderer_t2627027031 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Renderer_set_enabled_m1727253150(L_6, (bool)0, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_8 = V_3;
		RendererU5BU5D_t3210418286* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		ColliderU5BU5D_t4234922487* L_10 = V_0;
		V_4 = L_10;
		V_3 = 0;
		goto IL_0044;
	}

IL_0036:
	{
		ColliderU5BU5D_t4234922487* L_11 = V_4;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Collider_t1773347010 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Collider_set_enabled_m1517463283(L_14, (bool)0, /*hidden argument*/NULL);
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0044:
	{
		int32_t L_16 = V_3;
		ColliderU5BU5D_t4234922487* L_17 = V_4;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		WireframeBehaviourU5BU5D_t4114094193* L_18 = V_1;
		V_5 = L_18;
		V_3 = 0;
		goto IL_0060;
	}

IL_0052:
	{
		WireframeBehaviourU5BU5D_t4114094193* L_19 = V_5;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		WireframeBehaviour_t1831066704 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Behaviour_set_enabled_m20417929(L_22, (bool)0, /*hidden argument*/NULL);
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0060:
	{
		int32_t L_24 = V_3;
		WireframeBehaviourU5BU5D_t4114094193* L_25 = V_5;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_0052;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_26 = __this->get_mTrackableBehaviour_2();
		NullCheck(L_26);
		String_t* L_27 = TrackableBehaviour_get_TrackableName_m3644057705(L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3820270571, L_27, _stringLiteral3483481617, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WireframeTrackableEventHandler::.ctor()
extern "C"  void WireframeTrackableEventHandler__ctor_m2994238637 (WireframeTrackableEventHandler_t2143753312 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.WordBehaviour::InternalUnregisterTrackable()
extern "C"  void WordBehaviour_InternalUnregisterTrackable_m4231627840 (WordBehaviour_t209462683 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		V_0 = (RuntimeObject*)NULL;
		__this->set_mWord_12((RuntimeObject*)NULL);
		RuntimeObject* L_0 = V_0;
		((TrackableBehaviour_t1113559212 *)__this)->set_mTrackable_8(L_0);
		return;
	}
}
// Vuforia.Word Vuforia.WordBehaviour::get_Word()
extern "C"  RuntimeObject* WordBehaviour_get_Word_m480999125 (WordBehaviour_t209462683 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_mWord_12();
		return L_0;
	}
}
// System.Boolean Vuforia.WordBehaviour::get_IsTemplateMode()
extern "C"  bool WordBehaviour_get_IsTemplateMode_m4072507390 (WordBehaviour_t209462683 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mMode_10();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Vuforia.WordBehaviour::get_IsSpecificWordMode()
extern "C"  bool WordBehaviour_get_IsSpecificWordMode_m1655719650 (WordBehaviour_t209462683 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mMode_10();
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.String Vuforia.WordBehaviour::get_SpecificWord()
extern "C"  String_t* WordBehaviour_get_SpecificWord_m632314555 (WordBehaviour_t209462683 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mSpecificWord_11();
		return L_0;
	}
}
// System.Void Vuforia.WordBehaviour::InitializeWord(Vuforia.Word)
extern "C"  void WordBehaviour_InitializeWord_m2807202778 (WordBehaviour_t209462683 * __this, RuntimeObject* ___word0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordBehaviour_InitializeWord_m2807202778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	MeshFilter_t3523625662 * V_1 = NULL;
	float V_2 = 0.0f;
	RuntimeObject* V_3 = NULL;
	Bounds_t2266837910  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector2_t2156229523  G_B2_0;
	memset(&G_B2_0, 0, sizeof(G_B2_0));
	Vector2_t2156229523  G_B1_0;
	memset(&G_B1_0, 0, sizeof(G_B1_0));
	{
		RuntimeObject* L_0 = ___word0;
		RuntimeObject* L_1 = L_0;
		V_3 = L_1;
		__this->set_mWord_12(L_1);
		RuntimeObject* L_2 = V_3;
		((TrackableBehaviour_t1113559212 *)__this)->set_mTrackable_8(L_2);
		RuntimeObject* L_3 = ___word0;
		NullCheck(L_3);
		String_t* L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Vuforia.Word::get_StringValue() */, Word_t1116038618_il2cpp_TypeInfo_var, L_3);
		((TrackableBehaviour_t1113559212 *)__this)->set_mTrackableName_3(L_4);
		RuntimeObject* L_5 = ___word0;
		NullCheck(L_5);
		Vector2_t2156229523  L_6 = InterfaceFuncInvoker0< Vector2_t2156229523  >::Invoke(1 /* UnityEngine.Vector2 Vuforia.Word::get_Size() */, Word_t1116038618_il2cpp_TypeInfo_var, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_7;
		MeshFilter_t3523625662 * L_8 = Component_GetComponent_TisMeshFilter_t3523625662_m569847836(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t3523625662_m569847836_RuntimeMethod_var);
		V_1 = L_8;
		MeshFilter_t3523625662 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_9, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		G_B1_0 = L_6;
		if (!L_10)
		{
			G_B2_0 = L_6;
			goto IL_004d;
		}
	}
	{
		MeshFilter_t3523625662 * L_11 = V_1;
		NullCheck(L_11);
		Mesh_t3648964284 * L_12 = MeshFilter_get_sharedMesh_m1726897210(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Bounds_t2266837910  L_13 = Mesh_get_bounds_m2004960313(L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		Vector3_t3722313464  L_14 = Bounds_get_size_m1178783246((&V_4), /*hidden argument*/NULL);
		V_0 = L_14;
		G_B2_0 = G_B1_0;
	}

IL_004d:
	{
		float L_15 = G_B2_0.get_y_1();
		Vector3_t3722313464  L_16 = V_0;
		float L_17 = L_16.get_z_3();
		V_2 = ((float)((float)L_15/(float)L_17));
		Transform_t3600365921 * L_18 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_19 = V_2;
		float L_20 = V_2;
		float L_21 = V_2;
		Vector3_t3722313464  L_22;
		memset(&L_22, 0, sizeof(L_22));
		Vector3__ctor_m3353183577((&L_22), L_19, L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_localScale_m3053443106(L_18, L_22, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WordBehaviour::OnValidate()
extern "C"  void WordBehaviour_OnValidate_m1427201977 (WordBehaviour_t209462683 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordBehaviour_OnValidate_m1427201977_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = WordBehaviour_get_IsSpecificWordMode_m1655719650(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_1 = __this->get_mSpecificWord_11();
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral1699185095, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void Vuforia.WordBehaviour::.ctor()
extern "C"  void WordBehaviour__ctor_m2666050740 (WordBehaviour_t209462683 * __this, const RuntimeMethod* method)
{
	{
		TrackableBehaviour__ctor_m1563377757(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.WordImpl::.ctor(System.Int32,System.String,UnityEngine.Vector2)
extern "C"  void WordImpl__ctor_m518897599 (WordImpl_t2494369133 * __this, int32_t ___id0, String_t* ___text1, Vector2_t2156229523  ___size2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___text1;
		int32_t L_1 = ___id0;
		TrackableImpl__ctor_m3299709682(__this, L_0, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___text1;
		__this->set_mText_2(L_2);
		Vector2_t2156229523  L_3 = ___size2;
		__this->set_mSize_3(L_3);
		return;
	}
}
// System.String Vuforia.WordImpl::get_StringValue()
extern "C"  String_t* WordImpl_get_StringValue_m539642155 (WordImpl_t2494369133 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mText_2();
		return L_0;
	}
}
// UnityEngine.Vector2 Vuforia.WordImpl::get_Size()
extern "C"  Vector2_t2156229523  WordImpl_get_Size_m1421284971 (WordImpl_t2494369133 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0 = __this->get_mSize_3();
		return L_0;
	}
}
// Vuforia.Image Vuforia.WordImpl::GetLetterMask()
extern "C"  Image_t745056343 * WordImpl_GetLetterMask_m742086191 (WordImpl_t2494369133 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordImpl_GetLetterMask_m742086191_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsVuforiaEnabled_m1152377305(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (Image_t745056343 *)NULL;
	}

IL_0009:
	{
		Image_t745056343 * L_1 = __this->get_mLetterMask_4();
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		WordImpl_CreateLetterMask_m224036644(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		Image_t745056343 * L_2 = __this->get_mLetterMask_4();
		return L_2;
	}
}
// Vuforia.RectangleData[] Vuforia.WordImpl::GetLetterBoundingBoxes()
extern "C"  RectangleDataU5BU5D_t804827427* WordImpl_GetLetterBoundingBoxes_m1855461210 (WordImpl_t2494369133 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordImpl_GetLetterBoundingBoxes_m1855461210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	intptr_t V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsVuforiaEnabled_m1152377305(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return ((RectangleDataU5BU5D_t804827427*)SZArrayNew(RectangleDataU5BU5D_t804827427_il2cpp_TypeInfo_var, (uint32_t)0));
	}

IL_000e:
	{
		RectangleDataU5BU5D_t804827427* L_1 = __this->get_mLetterBoundingBoxes_6();
		if (L_1)
		{
			goto IL_00ba;
		}
	}
	{
		String_t* L_2 = __this->get_mText_2();
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m3847582255(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		__this->set_mLetterBoundingBoxes_6(((RectangleDataU5BU5D_t804827427*)SZArrayNew(RectangleDataU5BU5D_t804827427_il2cpp_TypeInfo_var, (uint32_t)L_4)));
		int32_t L_5 = V_0;
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (RectangleData_t1039179782_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_8 = Marshal_SizeOf_m3069307747(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		intptr_t L_9 = Marshal_AllocHGlobal_m491131085(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_8)), /*hidden argument*/NULL);
		V_1 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_10 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_11 = TrackableImpl_get_ID_m2679724236(__this, /*hidden argument*/NULL);
		intptr_t L_12 = V_1;
		NullCheck(L_10);
		InterfaceFuncInvoker2< int32_t, int32_t, intptr_t >::Invoke(233 /* System.Int32 Vuforia.IVuforiaWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_10, L_11, L_12);
		int64_t L_13 = IntPtr_ToInt64_m192765549((&V_1), /*hidden argument*/NULL);
		IntPtr__ctor_m987476171((&V_2), L_13, /*hidden argument*/NULL);
		V_3 = 0;
		goto IL_00b0;
	}

IL_006c:
	{
		RectangleDataU5BU5D_t804827427* L_14 = __this->get_mLetterBoundingBoxes_6();
		int32_t L_15 = V_3;
		intptr_t L_16 = V_2;
		RuntimeTypeHandle_t3027515415  L_17 = { reinterpret_cast<intptr_t> (RectangleData_t1039179782_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		RuntimeObject * L_19 = Marshal_PtrToStructure_m771949023(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (RectangleData_t1039179782 )((*(RectangleData_t1039179782 *)((RectangleData_t1039179782 *)UnBox(L_19, RectangleData_t1039179782_il2cpp_TypeInfo_var)))));
		int64_t L_20 = IntPtr_ToInt64_m192765549((&V_2), /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_21 = { reinterpret_cast<intptr_t> (RectangleData_t1039179782_0_0_0_var) };
		Type_t * L_22 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		int32_t L_23 = Marshal_SizeOf_m3069307747(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		IntPtr__ctor_m987476171((&V_2), ((int64_t)il2cpp_codegen_add((int64_t)L_20, (int64_t)(((int64_t)((int64_t)L_23))))), /*hidden argument*/NULL);
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00b0:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_0;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_006c;
		}
	}
	{
		intptr_t L_27 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
	}

IL_00ba:
	{
		RectangleDataU5BU5D_t804827427* L_28 = __this->get_mLetterBoundingBoxes_6();
		return L_28;
	}
}
// System.Void Vuforia.WordImpl::InitImageHeader()
extern "C"  void WordImpl_InitImageHeader_m3006118628 (WordImpl_t2494369133 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordImpl_InitImageHeader_m3006118628_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ImageHeaderData_t3550119865 * L_0 = __this->get_address_of_mLetterImageHeader_5();
		il2cpp_codegen_initobj(L_0, sizeof(ImageHeaderData_t3550119865 ));
		ImageHeaderData_t3550119865 * L_1 = __this->get_address_of_mLetterImageHeader_5();
		ImageHeaderData_t3550119865 * L_2 = __this->get_address_of_mLetterImageHeader_5();
		Vector2_t2156229523  L_3 = WordImpl_get_Size_m1421284971(__this, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_0();
		int32_t L_5 = (((int32_t)((int32_t)((float)il2cpp_codegen_add((float)L_4, (float)(1.0f))))));
		V_0 = L_5;
		L_2->set_bufferWidth_4(L_5);
		int32_t L_6 = V_0;
		L_1->set_width_1(L_6);
		ImageHeaderData_t3550119865 * L_7 = __this->get_address_of_mLetterImageHeader_5();
		ImageHeaderData_t3550119865 * L_8 = __this->get_address_of_mLetterImageHeader_5();
		Vector2_t2156229523  L_9 = WordImpl_get_Size_m1421284971(__this, /*hidden argument*/NULL);
		float L_10 = L_9.get_y_1();
		int32_t L_11 = (((int32_t)((int32_t)((float)il2cpp_codegen_add((float)L_10, (float)(1.0f))))));
		V_0 = L_11;
		L_8->set_bufferHeight_5(L_11);
		int32_t L_12 = V_0;
		L_7->set_height_2(L_12);
		ImageHeaderData_t3550119865 * L_13 = __this->get_address_of_mLetterImageHeader_5();
		L_13->set_format_6(4);
		Image_t745056343 * L_14 = (Image_t745056343 *)il2cpp_codegen_object_new(Image_t745056343_il2cpp_TypeInfo_var);
		Image__ctor_m1696742014(L_14, /*hidden argument*/NULL);
		__this->set_mLetterMask_4(L_14);
		return;
	}
}
// System.Void Vuforia.WordImpl::CreateLetterMask()
extern "C"  void WordImpl_CreateLetterMask_m224036644 (WordImpl_t2494369133 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordImpl_CreateLetterMask_m224036644_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Image_t745056343 * V_0 = NULL;
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		WordImpl_InitImageHeader_m3006118628(__this, /*hidden argument*/NULL);
		Image_t745056343 * L_0 = __this->get_mLetterMask_4();
		V_0 = L_0;
		ImageHeaderData_t3550119865  L_1 = __this->get_mLetterImageHeader_5();
		Image_t745056343 * L_2 = V_0;
		WordImpl_SetImageValues_m958209948(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		Image_t745056343 * L_3 = V_0;
		WordImpl_AllocateImage_m3294391543(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		ImageHeaderData_t3550119865 * L_4 = __this->get_address_of_mLetterImageHeader_5();
		Image_t745056343 * L_5 = V_0;
		NullCheck(L_5);
		intptr_t L_6 = Image_get_UnmanagedData_m3708296414(L_5, /*hidden argument*/NULL);
		L_4->set_data_0(L_6);
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (ImageHeaderData_t3550119865_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_9 = Marshal_SizeOf_m3069307747(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		intptr_t L_10 = Marshal_AllocHGlobal_m491131085(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		ImageHeaderData_t3550119865  L_11 = __this->get_mLetterImageHeader_5();
		ImageHeaderData_t3550119865  L_12 = L_11;
		RuntimeObject * L_13 = Box(ImageHeaderData_t3550119865_il2cpp_TypeInfo_var, &L_12);
		intptr_t L_14 = V_1;
		Marshal_StructureToPtr_m2294149499(NULL /*static, unused*/, L_13, L_14, (bool)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_15 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_16 = TrackableImpl_get_ID_m2679724236(__this, /*hidden argument*/NULL);
		intptr_t L_17 = V_1;
		NullCheck(L_15);
		InterfaceFuncInvoker2< int32_t, int32_t, intptr_t >::Invoke(234 /* System.Int32 Vuforia.IVuforiaWrapper::WordGetLetterMask(System.Int32,System.IntPtr) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_15, L_16, L_17);
		intptr_t L_18 = V_1;
		RuntimeTypeHandle_t3027515415  L_19 = { reinterpret_cast<intptr_t> (ImageHeaderData_t3550119865_0_0_0_var) };
		Type_t * L_20 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		RuntimeObject * L_21 = Marshal_PtrToStructure_m771949023(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/NULL);
		__this->set_mLetterImageHeader_5(((*(ImageHeaderData_t3550119865 *)((ImageHeaderData_t3550119865 *)UnBox(L_21, ImageHeaderData_t3550119865_il2cpp_TypeInfo_var)))));
		ImageHeaderData_t3550119865 * L_22 = __this->get_address_of_mLetterImageHeader_5();
		int32_t L_23 = L_22->get_reallocate_7();
		if ((!(((uint32_t)L_23) == ((uint32_t)1))))
		{
			goto IL_009d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral1198487051, /*hidden argument*/NULL);
		return;
	}

IL_009d:
	{
		Image_t745056343 * L_24 = V_0;
		NullCheck(L_24);
		Image_CopyPixelsFromUnmanagedBuffer_m557743584(L_24, /*hidden argument*/NULL);
		Image_t745056343 * L_25 = V_0;
		__this->set_mLetterMask_4(L_25);
		intptr_t L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WordImpl::SetImageValues(Vuforia.TrackerData/ImageHeaderData,Vuforia.Image)
extern "C"  void WordImpl_SetImageValues_m958209948 (RuntimeObject * __this /* static, unused */, ImageHeaderData_t3550119865  ___imageHeader0, Image_t745056343 * ___image1, const RuntimeMethod* method)
{
	{
		Image_t745056343 * L_0 = ___image1;
		ImageHeaderData_t3550119865  L_1 = ___imageHeader0;
		int32_t L_2 = L_1.get_width_1();
		NullCheck(L_0);
		Image_set_Width_m2860119284(L_0, L_2, /*hidden argument*/NULL);
		Image_t745056343 * L_3 = ___image1;
		ImageHeaderData_t3550119865  L_4 = ___imageHeader0;
		int32_t L_5 = L_4.get_height_2();
		NullCheck(L_3);
		Image_set_Height_m443427373(L_3, L_5, /*hidden argument*/NULL);
		Image_t745056343 * L_6 = ___image1;
		ImageHeaderData_t3550119865  L_7 = ___imageHeader0;
		int32_t L_8 = L_7.get_stride_3();
		NullCheck(L_6);
		Image_set_Stride_m3635796939(L_6, L_8, /*hidden argument*/NULL);
		Image_t745056343 * L_9 = ___image1;
		ImageHeaderData_t3550119865  L_10 = ___imageHeader0;
		int32_t L_11 = L_10.get_bufferWidth_4();
		NullCheck(L_9);
		Image_set_BufferWidth_m3848581627(L_9, L_11, /*hidden argument*/NULL);
		Image_t745056343 * L_12 = ___image1;
		ImageHeaderData_t3550119865  L_13 = ___imageHeader0;
		int32_t L_14 = L_13.get_bufferHeight_5();
		NullCheck(L_12);
		Image_set_BufferHeight_m1072814985(L_12, L_14, /*hidden argument*/NULL);
		Image_t745056343 * L_15 = ___image1;
		ImageHeaderData_t3550119865  L_16 = ___imageHeader0;
		int32_t L_17 = L_16.get_format_6();
		NullCheck(L_15);
		Image_set_PixelFormat_m2634889912(L_15, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WordImpl::AllocateImage(Vuforia.Image)
extern "C"  void WordImpl_AllocateImage_m3294391543 (RuntimeObject * __this /* static, unused */, Image_t745056343 * ___image0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordImpl_AllocateImage_m3294391543_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_t745056343 * L_0 = ___image0;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		Image_t745056343 * L_2 = ___image0;
		NullCheck(L_2);
		int32_t L_3 = Image_get_BufferWidth_m2324972437(L_2, /*hidden argument*/NULL);
		Image_t745056343 * L_4 = ___image0;
		NullCheck(L_4);
		int32_t L_5 = Image_get_BufferHeight_m1709821308(L_4, /*hidden argument*/NULL);
		Image_t745056343 * L_6 = ___image0;
		NullCheck(L_6);
		int32_t L_7 = Image_get_PixelFormat_m4039465001(L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_8 = InterfaceFuncInvoker3< int32_t, int32_t, int32_t, int32_t >::Invoke(144 /* System.Int32 Vuforia.IVuforiaWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_1, L_3, L_5, L_7);
		NullCheck(L_0);
		Image_set_Pixels_m1525806273(L_0, ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_8)), /*hidden argument*/NULL);
		Image_t745056343 * L_9 = ___image0;
		NullCheck(L_9);
		intptr_t L_10 = Image_get_UnmanagedData_m3708296414(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		Image_t745056343 * L_11 = ___image0;
		RuntimeObject* L_12 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		Image_t745056343 * L_13 = ___image0;
		NullCheck(L_13);
		int32_t L_14 = Image_get_BufferWidth_m2324972437(L_13, /*hidden argument*/NULL);
		Image_t745056343 * L_15 = ___image0;
		NullCheck(L_15);
		int32_t L_16 = Image_get_BufferHeight_m1709821308(L_15, /*hidden argument*/NULL);
		Image_t745056343 * L_17 = ___image0;
		NullCheck(L_17);
		int32_t L_18 = Image_get_PixelFormat_m4039465001(L_17, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_19 = InterfaceFuncInvoker3< int32_t, int32_t, int32_t, int32_t >::Invoke(144 /* System.Int32 Vuforia.IVuforiaWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_12, L_14, L_16, L_18);
		intptr_t L_20 = Marshal_AllocHGlobal_m491131085(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		NullCheck(L_11);
		Image_set_UnmanagedData_m697184426(L_11, L_20, /*hidden argument*/NULL);
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
// System.Boolean Vuforia.WordList::LoadWordListFile(System.String)
extern "C"  bool WordList_LoadWordListFile_m936177783 (WordList_t3693642253 * __this, String_t* ___relativePath0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___relativePath0;
		bool L_1 = WordList_LoadWordListFile_m552733683(__this, L_0, 1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Vuforia.WordList::LoadWordListFile(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  bool WordList_LoadWordListFile_m552733683 (WordList_t3693642253 * __this, String_t* ___relativePath0, int32_t ___storageType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordList_LoadWordListFile_m552733683_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___relativePath0;
		int32_t L_1 = ___storageType1;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		String_t* L_2 = VuforiaRuntimeUtilities_GetStoragePath_m3854718746(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		___relativePath0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = ___relativePath0;
		int32_t L_5 = ___storageType1;
		NullCheck(L_3);
		int32_t L_6 = InterfaceFuncInvoker2< int32_t, String_t*, int32_t >::Invoke(244 /* System.Int32 Vuforia.IVuforiaWrapper::WordListLoadWordList(System.String,System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_3, L_4, L_5);
		return (bool)((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
	}
}
// System.Int32 Vuforia.WordList::AddWordsFromFile(System.String)
extern "C"  int32_t WordList_AddWordsFromFile_m1113514891 (WordList_t3693642253 * __this, String_t* ___relativePath0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___relativePath0;
		int32_t L_1 = WordList_AddWordsFromFile_m1862212695(__this, L_0, 1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.WordList::AddWordsFromFile(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  int32_t WordList_AddWordsFromFile_m1862212695 (WordList_t3693642253 * __this, String_t* ___path0, int32_t ___storageType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordList_AddWordsFromFile_m1862212695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___path0;
		int32_t L_1 = ___storageType1;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		String_t* L_2 = VuforiaRuntimeUtilities_GetStoragePath_m3854718746(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		___path0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = ___path0;
		int32_t L_5 = ___storageType1;
		NullCheck(L_3);
		int32_t L_6 = InterfaceFuncInvoker2< int32_t, String_t*, int32_t >::Invoke(235 /* System.Int32 Vuforia.IVuforiaWrapper::WordListAddWordsFromFile(System.String,System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Boolean Vuforia.WordList::AddWord(System.String)
extern "C"  bool WordList_AddWord_m3472006904 (WordList_t3693642253 * __this, String_t* ___word0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordList_AddWord_m3472006904_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___word0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		intptr_t L_1 = Marshal_StringToHGlobalUni_m3584015089(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(237 /* System.Int32 Vuforia.IVuforiaWrapper::WordListAddWordU(System.IntPtr) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_2, L_3);
		intptr_t L_5 = V_0;
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean Vuforia.WordList::RemoveWord(System.String)
extern "C"  bool WordList_RemoveWord_m1834798121 (WordList_t3693642253 * __this, String_t* ___word0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordList_RemoveWord_m1834798121_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___word0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		intptr_t L_1 = Marshal_StringToHGlobalUni_m3584015089(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(246 /* System.Int32 Vuforia.IVuforiaWrapper::WordListRemoveWordU(System.IntPtr) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_2, L_3);
		intptr_t L_5 = V_0;
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean Vuforia.WordList::ContainsWord(System.String)
extern "C"  bool WordList_ContainsWord_m11318312 (WordList_t3693642253 * __this, String_t* ___word0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordList_ContainsWord_m11318312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___word0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		intptr_t L_1 = Marshal_StringToHGlobalUni_m3584015089(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(239 /* System.Int32 Vuforia.IVuforiaWrapper::WordListContainsWordU(System.IntPtr) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_2, L_3);
		intptr_t L_5 = V_0;
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean Vuforia.WordList::UnloadAllLists()
extern "C"  bool WordList_UnloadAllLists_m2054322083 (WordList_t3693642253 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordList_UnloadAllLists_m2054322083_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(248 /* System.Int32 Vuforia.IVuforiaWrapper::WordListUnloadAllLists() */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_0);
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}
}
// Vuforia.WordFilterMode Vuforia.WordList::GetFilterMode()
extern "C"  int32_t WordList_GetFilterMode_m3017865745 (WordList_t3693642253 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordList_GetFilterMode_m3017865745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(242 /* System.Int32 Vuforia.IVuforiaWrapper::WordListGetFilterMode() */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_0);
		return (int32_t)(L_1);
	}
}
// System.Boolean Vuforia.WordList::SetFilterMode(Vuforia.WordFilterMode)
extern "C"  bool WordList_SetFilterMode_m3971204164 (WordList_t3693642253 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordList_SetFilterMode_m3971204164_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = ___mode0;
		NullCheck(L_0);
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(247 /* System.Int32 Vuforia.IVuforiaWrapper::WordListSetFilterMode(System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_0, L_1);
		return (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean Vuforia.WordList::LoadFilterListFile(System.String)
extern "C"  bool WordList_LoadFilterListFile_m1565208809 (WordList_t3693642253 * __this, String_t* ___relativePath0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___relativePath0;
		bool L_1 = WordList_LoadFilterListFile_m4022350524(__this, L_0, 1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Vuforia.WordList::LoadFilterListFile(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  bool WordList_LoadFilterListFile_m4022350524 (WordList_t3693642253 * __this, String_t* ___path0, int32_t ___storageType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordList_LoadFilterListFile_m4022350524_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___path0;
		int32_t L_1 = ___storageType1;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		String_t* L_2 = VuforiaRuntimeUtilities_GetStoragePath_m3854718746(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		___path0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = ___path0;
		int32_t L_5 = ___storageType1;
		NullCheck(L_3);
		int32_t L_6 = InterfaceFuncInvoker2< int32_t, String_t*, int32_t >::Invoke(243 /* System.Int32 Vuforia.IVuforiaWrapper::WordListLoadFilterList(System.String,System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_3, L_4, L_5);
		return (bool)((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean Vuforia.WordList::AddWordToFilterList(System.String)
extern "C"  bool WordList_AddWordToFilterList_m3119197720 (WordList_t3693642253 * __this, String_t* ___word0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordList_AddWordToFilterList_m3119197720_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___word0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		intptr_t L_1 = Marshal_StringToHGlobalUni_m3584015089(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(236 /* System.Int32 Vuforia.IVuforiaWrapper::WordListAddWordToFilterListU(System.IntPtr) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_2, L_3);
		intptr_t L_5 = V_0;
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean Vuforia.WordList::RemoveWordFromFilterList(System.String)
extern "C"  bool WordList_RemoveWordFromFilterList_m4182495724 (WordList_t3693642253 * __this, String_t* ___word0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordList_RemoveWordFromFilterList_m4182495724_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___word0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		intptr_t L_1 = Marshal_StringToHGlobalUni_m3584015089(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(245 /* System.Int32 Vuforia.IVuforiaWrapper::WordListRemoveWordFromFilterListU(System.IntPtr) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_2, L_3);
		intptr_t L_5 = V_0;
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean Vuforia.WordList::ClearFilterList()
extern "C"  bool WordList_ClearFilterList_m677150615 (WordList_t3693642253 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordList_ClearFilterList_m677150615_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(238 /* System.Int32 Vuforia.IVuforiaWrapper::WordListClearFilterList() */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_0);
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}
}
// System.Int32 Vuforia.WordList::GetFilterListWordCount()
extern "C"  int32_t WordList_GetFilterListWordCount_m1175049309 (WordList_t3693642253 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordList_GetFilterListWordCount_m1175049309_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(240 /* System.Int32 Vuforia.IVuforiaWrapper::WordListGetFilterListWordCount() */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String Vuforia.WordList::GetFilterListWord(System.Int32)
extern "C"  String_t* WordList_GetFilterListWord_m2986794681 (WordList_t3693642253 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordList_GetFilterListWord_m2986794681_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t2763746413_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m2947582594(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		intptr_t L_2 = InterfaceFuncInvoker1< intptr_t, int32_t >::Invoke(241 /* System.IntPtr Vuforia.IVuforiaWrapper::WordListGetFilterListWordU(System.Int32) */, IVuforiaWrapper_t2381307640_il2cpp_TypeInfo_var, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		String_t* L_3 = Marshal_PtrToStringUni_m175561854(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Vuforia.WordList::.ctor()
extern "C"  void WordList__ctor_m3277779240 (WordList_t3693642253 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.WordManager::.ctor()
extern "C"  void WordManager__ctor_m3858017893 (WordManager_t3100853168 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManager__ctor_m3858017893_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2529487133 * L_0 = (Dictionary_2_t2529487133 *)il2cpp_codegen_object_new(Dictionary_2_t2529487133_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2165170305(L_0, /*hidden argument*/Dictionary_2__ctor_m2165170305_RuntimeMethod_var);
		__this->set_mTrackedWords_0(L_0);
		List_1_t817881248 * L_1 = (List_1_t817881248 *)il2cpp_codegen_object_new(List_1_t817881248_il2cpp_TypeInfo_var);
		List_1__ctor_m3369957770(L_1, /*hidden argument*/List_1__ctor_m3369957770_RuntimeMethod_var);
		__this->set_mNewWords_1(L_1);
		List_1_t2588113360 * L_2 = (List_1_t2588113360 *)il2cpp_codegen_object_new(List_1_t2588113360_il2cpp_TypeInfo_var);
		List_1__ctor_m3294312876(L_2, /*hidden argument*/List_1__ctor_m3294312876_RuntimeMethod_var);
		__this->set_mLostWords_2(L_2);
		Dictionary_2_t3393143310 * L_3 = (Dictionary_2_t3393143310 *)il2cpp_codegen_object_new(Dictionary_2_t3393143310_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1385716975(L_3, /*hidden argument*/Dictionary_2__ctor_m1385716975_RuntimeMethod_var);
		__this->set_mActiveWordBehaviours_3(L_3);
		List_1_t1681537425 * L_4 = (List_1_t1681537425 *)il2cpp_codegen_object_new(List_1_t1681537425_il2cpp_TypeInfo_var);
		List_1__ctor_m1720454467(L_4, /*hidden argument*/List_1__ctor_m1720454467_RuntimeMethod_var);
		__this->set_mWordBehavioursMarkedForDeletion_4(L_4);
		List_1_t2588113360 * L_5 = (List_1_t2588113360 *)il2cpp_codegen_object_new(List_1_t2588113360_il2cpp_TypeInfo_var);
		List_1__ctor_m3294312876(L_5, /*hidden argument*/List_1__ctor_m3294312876_RuntimeMethod_var);
		__this->set_mWaitingQueue_5(L_5);
		Dictionary_2_t1466793724 * L_6 = (Dictionary_2_t1466793724 *)il2cpp_codegen_object_new(Dictionary_2_t1466793724_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m713463042(L_6, /*hidden argument*/Dictionary_2__ctor_m713463042_RuntimeMethod_var);
		__this->set_mWordBehaviours_7(L_6);
		__this->set_mMaxInstances_9(1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManager::GetActiveWordResults()
extern "C"  RuntimeObject* WordManager_GetActiveWordResults_m1333943077 (WordManager_t3100853168 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManager_GetActiveWordResults_m1333943077_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2529487133 * L_0 = __this->get_mTrackedWords_0();
		NullCheck(L_0);
		ValueCollection_t4245531451 * L_1 = Dictionary_2_get_Values_m1988163935(L_0, /*hidden argument*/Dictionary_2_get_Values_m1988163935_RuntimeMethod_var);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManager::GetNewWords()
extern "C"  RuntimeObject* WordManager_GetNewWords_m1715601661 (WordManager_t3100853168 * __this, const RuntimeMethod* method)
{
	{
		List_1_t817881248 * L_0 = __this->get_mNewWords_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<Vuforia.Word> Vuforia.WordManager::GetLostWords()
extern "C"  RuntimeObject* WordManager_GetLostWords_m3703326773 (WordManager_t3100853168 * __this, const RuntimeMethod* method)
{
	{
		List_1_t2588113360 * L_0 = __this->get_mLostWords_2();
		return L_0;
	}
}
// System.Boolean Vuforia.WordManager::TryGetWordBehaviour(Vuforia.Word,Vuforia.WordBehaviour&)
extern "C"  bool WordManager_TryGetWordBehaviour_m156595532 (WordManager_t3100853168 * __this, RuntimeObject* ___word0, WordBehaviour_t209462683 ** ___behaviour1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManager_TryGetWordBehaviour_m156595532_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3393143310 * L_0 = __this->get_mActiveWordBehaviours_3();
		RuntimeObject* L_1 = ___word0;
		NullCheck(L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Vuforia.Trackable::get_ID() */, Trackable_t2451999991_il2cpp_TypeInfo_var, L_1);
		WordBehaviour_t209462683 ** L_3 = ___behaviour1;
		NullCheck(L_0);
		bool L_4 = Dictionary_2_TryGetValue_m670017294(L_0, L_2, L_3, /*hidden argument*/Dictionary_2_TryGetValue_m670017294_RuntimeMethod_var);
		return L_4;
	}
}
// System.Collections.Generic.IEnumerable`1<Vuforia.WordBehaviour> Vuforia.WordManager::GetTrackableBehaviours()
extern "C"  RuntimeObject* WordManager_GetTrackableBehaviours_m552120407 (WordManager_t3100853168 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManager_GetTrackableBehaviours_m552120407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t1681537425 * V_0 = NULL;
	Enumerator_t2035687381  V_1;
	memset(&V_1, 0, sizeof(V_1));
	List_1_t1681537425 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t1681537425 * L_0 = (List_1_t1681537425 *)il2cpp_codegen_object_new(List_1_t1681537425_il2cpp_TypeInfo_var);
		List_1__ctor_m1720454467(L_0, /*hidden argument*/List_1__ctor_m1720454467_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t1466793724 * L_1 = __this->get_mWordBehaviours_7();
		NullCheck(L_1);
		ValueCollection_t3182838042 * L_2 = Dictionary_2_get_Values_m2758663250(L_1, /*hidden argument*/Dictionary_2_get_Values_m2758663250_RuntimeMethod_var);
		NullCheck(L_2);
		Enumerator_t2035687381  L_3 = ValueCollection_GetEnumerator_m1627817905(L_2, /*hidden argument*/ValueCollection_GetEnumerator_m1627817905_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0028;
		}

IL_0019:
		{
			List_1_t1681537425 * L_4 = Enumerator_get_Current_m1070017454((&V_1), /*hidden argument*/Enumerator_get_Current_m1070017454_RuntimeMethod_var);
			V_2 = L_4;
			List_1_t1681537425 * L_5 = V_0;
			List_1_t1681537425 * L_6 = V_2;
			NullCheck(L_5);
			List_1_AddRange_m2418638764(L_5, L_6, /*hidden argument*/List_1_AddRange_m2418638764_RuntimeMethod_var);
		}

IL_0028:
		{
			bool L_7 = Enumerator_MoveNext_m2310817316((&V_1), /*hidden argument*/Enumerator_MoveNext_m2310817316_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0019;
			}
		}

IL_0031:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0033);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2347494636((&V_1), /*hidden argument*/Enumerator_Dispose_m2347494636_RuntimeMethod_var);
		IL2CPP_END_FINALLY(51)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0041:
	{
		List_1_t1681537425 * L_8 = V_0;
		return L_8;
	}
}
// System.Void Vuforia.WordManager::DestroyWordBehaviour(Vuforia.WordBehaviour,System.Boolean)
extern "C"  void WordManager_DestroyWordBehaviour_m1980736901 (WordManager_t3100853168 * __this, WordBehaviour_t209462683 * ___behaviour0, bool ___destroyGameObject1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManager_DestroyWordBehaviour_m1980736901_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		Dictionary_2_t1466793724 * L_0 = __this->get_mWordBehaviours_7();
		NullCheck(L_0);
		KeyCollection_t1656469195 * L_1 = Dictionary_2_get_Keys_m1811193429(L_0, /*hidden argument*/Dictionary_2_get_Keys_m1811193429_RuntimeMethod_var);
		StringU5BU5D_t1281789340* L_2 = Enumerable_ToArray_TisString_t_m1789351813(NULL /*static, unused*/, L_1, /*hidden argument*/Enumerable_ToArray_TisString_t_m1789351813_RuntimeMethod_var);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0086;
	}

IL_0015:
	{
		StringU5BU5D_t1281789340* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		Dictionary_2_t1466793724 * L_7 = __this->get_mWordBehaviours_7();
		String_t* L_8 = V_2;
		NullCheck(L_7);
		List_1_t1681537425 * L_9 = Dictionary_2_get_Item_m142719623(L_7, L_8, /*hidden argument*/Dictionary_2_get_Item_m142719623_RuntimeMethod_var);
		WordBehaviour_t209462683 * L_10 = ___behaviour0;
		NullCheck(L_9);
		bool L_11 = List_1_Contains_m2027764343(L_9, L_10, /*hidden argument*/List_1_Contains_m2027764343_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0082;
		}
	}
	{
		Dictionary_2_t1466793724 * L_12 = __this->get_mWordBehaviours_7();
		String_t* L_13 = V_2;
		NullCheck(L_12);
		List_1_t1681537425 * L_14 = Dictionary_2_get_Item_m142719623(L_12, L_13, /*hidden argument*/Dictionary_2_get_Item_m142719623_RuntimeMethod_var);
		WordBehaviour_t209462683 * L_15 = ___behaviour0;
		NullCheck(L_14);
		List_1_Remove_m591231568(L_14, L_15, /*hidden argument*/List_1_Remove_m591231568_RuntimeMethod_var);
		Dictionary_2_t1466793724 * L_16 = __this->get_mWordBehaviours_7();
		String_t* L_17 = V_2;
		NullCheck(L_16);
		List_1_t1681537425 * L_18 = Dictionary_2_get_Item_m142719623(L_16, L_17, /*hidden argument*/Dictionary_2_get_Item_m142719623_RuntimeMethod_var);
		NullCheck(L_18);
		int32_t L_19 = List_1_get_Count_m2708548481(L_18, /*hidden argument*/List_1_get_Count_m2708548481_RuntimeMethod_var);
		if (L_19)
		{
			goto IL_0060;
		}
	}
	{
		Dictionary_2_t1466793724 * L_20 = __this->get_mWordBehaviours_7();
		String_t* L_21 = V_2;
		NullCheck(L_20);
		Dictionary_2_Remove_m1957493530(L_20, L_21, /*hidden argument*/Dictionary_2_Remove_m1957493530_RuntimeMethod_var);
	}

IL_0060:
	{
		bool L_22 = ___destroyGameObject1;
		if (!L_22)
		{
			goto IL_007c;
		}
	}
	{
		WordBehaviour_t209462683 * L_23 = ___behaviour0;
		NullCheck(L_23);
		GameObject_t1113636619 * L_24 = Component_get_gameObject_m442555142(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		List_1_t1681537425 * L_25 = __this->get_mWordBehavioursMarkedForDeletion_4();
		WordBehaviour_t209462683 * L_26 = ___behaviour0;
		NullCheck(L_25);
		List_1_Add_m82523697(L_25, L_26, /*hidden argument*/List_1_Add_m82523697_RuntimeMethod_var);
		goto IL_0082;
	}

IL_007c:
	{
		WordBehaviour_t209462683 * L_27 = ___behaviour0;
		NullCheck(L_27);
		TrackableBehaviour_UnregisterTrackable_m1272061837(L_27, /*hidden argument*/NULL);
	}

IL_0082:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0086:
	{
		int32_t L_29 = V_1;
		StringU5BU5D_t1281789340* L_30 = V_0;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.WordManager::InitializeWordBehaviourTemplates(Vuforia.WordPrefabCreationMode,System.Int32)
extern "C"  void WordManager_InitializeWordBehaviourTemplates_m2074281505 (WordManager_t3100853168 * __this, int32_t ___wordPrefabCreationMode0, int32_t ___maxInstances1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___wordPrefabCreationMode0;
		__this->set_mWordPrefabCreationMode_10(L_0);
		int32_t L_1 = ___maxInstances1;
		__this->set_mMaxInstances_9(L_1);
		WordManager_InitializeWordBehaviourTemplates_m3961783150(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WordManager::InitializeWordBehaviourTemplates()
extern "C"  void WordManager_InitializeWordBehaviourTemplates_m3961783150 (WordManager_t3100853168 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManager_InitializeWordBehaviourTemplates_m3961783150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t1681537425 * V_0 = NULL;
	Enumerator_t3570781302  V_1;
	memset(&V_1, 0, sizeof(V_1));
	WordBehaviour_t209462683 * V_2 = NULL;
	WordBehaviourU5BU5D_t3948822938* V_3 = NULL;
	int32_t V_4 = 0;
	WordBehaviour_t209462683 * V_5 = NULL;
	String_t* V_6 = NULL;
	WordBehaviour_t209462683 * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	String_t* G_B15_0 = NULL;
	{
		int32_t L_0 = __this->get_mWordPrefabCreationMode_10();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_015e;
		}
	}
	{
		List_1_t1681537425 * L_1 = __this->get_mWordBehavioursMarkedForDeletion_4();
		List_1_t1681537425 * L_2 = Enumerable_ToList_TisWordBehaviour_t209462683_m3926744422(NULL /*static, unused*/, L_1, /*hidden argument*/Enumerable_ToList_TisWordBehaviour_t209462683_m3926744422_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = __this->get_mAutomaticTemplate_8();
		if (!L_3)
		{
			goto IL_008e;
		}
	}
	{
		Dictionary_2_t1466793724 * L_4 = __this->get_mWordBehaviours_7();
		NullCheck(L_4);
		bool L_5 = Dictionary_2_ContainsKey_m4104309222(L_4, _stringLiteral3255970859, /*hidden argument*/Dictionary_2_ContainsKey_m4104309222_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_008e;
		}
	}
	{
		Dictionary_2_t1466793724 * L_6 = __this->get_mWordBehaviours_7();
		NullCheck(L_6);
		List_1_t1681537425 * L_7 = Dictionary_2_get_Item_m142719623(L_6, _stringLiteral3255970859, /*hidden argument*/Dictionary_2_get_Item_m142719623_RuntimeMethod_var);
		NullCheck(L_7);
		Enumerator_t3570781302  L_8 = List_1_GetEnumerator_m1934944160(L_7, /*hidden argument*/List_1_GetEnumerator_m1934944160_RuntimeMethod_var);
		V_1 = L_8;
	}

IL_0048:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0064;
		}

IL_004a:
		{
			WordBehaviour_t209462683 * L_9 = Enumerator_get_Current_m1854802932((&V_1), /*hidden argument*/Enumerator_get_Current_m1854802932_RuntimeMethod_var);
			V_2 = L_9;
			List_1_t1681537425 * L_10 = V_0;
			WordBehaviour_t209462683 * L_11 = V_2;
			NullCheck(L_10);
			List_1_Add_m82523697(L_10, L_11, /*hidden argument*/List_1_Add_m82523697_RuntimeMethod_var);
			WordBehaviour_t209462683 * L_12 = V_2;
			NullCheck(L_12);
			GameObject_t1113636619 * L_13 = Component_get_gameObject_m442555142(L_12, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			Object_Destroy_m565254235(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		}

IL_0064:
		{
			bool L_14 = Enumerator_MoveNext_m1166863020((&V_1), /*hidden argument*/Enumerator_MoveNext_m1166863020_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_004a;
			}
		}

IL_006d:
		{
			IL2CPP_LEAVE(0x7D, FINALLY_006f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006f;
	}

FINALLY_006f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m700246627((&V_1), /*hidden argument*/Enumerator_Dispose_m700246627_RuntimeMethod_var);
		IL2CPP_END_FINALLY(111)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(111)
	{
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007d:
	{
		Dictionary_2_t1466793724 * L_15 = __this->get_mWordBehaviours_7();
		NullCheck(L_15);
		Dictionary_2_Remove_m1957493530(L_15, _stringLiteral3255970859, /*hidden argument*/Dictionary_2_Remove_m1957493530_RuntimeMethod_var);
	}

IL_008e:
	{
		RuntimeTypeHandle_t3027515415  L_16 = { reinterpret_cast<intptr_t> (WordBehaviour_t209462683_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t1417781964* L_18 = Object_FindObjectsOfType_m2295101757(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_3 = ((WordBehaviourU5BU5D_t3948822938*)Castclass((RuntimeObject*)L_18, WordBehaviourU5BU5D_t3948822938_il2cpp_TypeInfo_var));
		V_4 = 0;
		goto IL_011a;
	}

IL_00a8:
	{
		WordBehaviourU5BU5D_t3948822938* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		WordBehaviour_t209462683 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = L_22;
		List_1_t1681537425 * L_23 = V_0;
		WordBehaviour_t209462683 * L_24 = V_5;
		NullCheck(L_23);
		bool L_25 = List_1_Contains_m2027764343(L_23, L_24, /*hidden argument*/List_1_Contains_m2027764343_RuntimeMethod_var);
		if (L_25)
		{
			goto IL_0114;
		}
	}
	{
		WordBehaviour_t209462683 * L_26 = V_5;
		NullCheck(L_26);
		bool L_27 = WordBehaviour_get_IsTemplateMode_m4072507390(L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00cf;
		}
	}
	{
		WordBehaviour_t209462683 * L_28 = V_5;
		NullCheck(L_28);
		String_t* L_29 = WordBehaviour_get_SpecificWord_m632314555(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		String_t* L_30 = String_ToLowerInvariant_m110751226(L_29, /*hidden argument*/NULL);
		G_B15_0 = L_30;
		goto IL_00d4;
	}

IL_00cf:
	{
		G_B15_0 = _stringLiteral3255970859;
	}

IL_00d4:
	{
		V_6 = G_B15_0;
		Dictionary_2_t1466793724 * L_31 = __this->get_mWordBehaviours_7();
		String_t* L_32 = V_6;
		NullCheck(L_31);
		bool L_33 = Dictionary_2_ContainsKey_m4104309222(L_31, L_32, /*hidden argument*/Dictionary_2_ContainsKey_m4104309222_RuntimeMethod_var);
		if (L_33)
		{
			goto IL_0114;
		}
	}
	{
		Dictionary_2_t1466793724 * L_34 = __this->get_mWordBehaviours_7();
		String_t* L_35 = V_6;
		List_1_t1681537425 * L_36 = (List_1_t1681537425 *)il2cpp_codegen_object_new(List_1_t1681537425_il2cpp_TypeInfo_var);
		List_1__ctor_m1720454467(L_36, /*hidden argument*/List_1__ctor_m1720454467_RuntimeMethod_var);
		List_1_t1681537425 * L_37 = L_36;
		WordBehaviour_t209462683 * L_38 = V_5;
		NullCheck(L_37);
		List_1_Add_m82523697(L_37, L_38, /*hidden argument*/List_1_Add_m82523697_RuntimeMethod_var);
		NullCheck(L_34);
		Dictionary_2_set_Item_m2084030734(L_34, L_35, L_37, /*hidden argument*/Dictionary_2_set_Item_m2084030734_RuntimeMethod_var);
		String_t* L_39 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_40 = String_op_Equality_m920492651(NULL /*static, unused*/, L_39, _stringLiteral3255970859, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0114;
		}
	}
	{
		__this->set_mAutomaticTemplate_8((bool)0);
	}

IL_0114:
	{
		int32_t L_41 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_011a:
	{
		int32_t L_42 = V_4;
		WordBehaviourU5BU5D_t3948822938* L_43 = V_3;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_43)->max_length)))))))
		{
			goto IL_00a8;
		}
	}
	{
		Dictionary_2_t1466793724 * L_44 = __this->get_mWordBehaviours_7();
		NullCheck(L_44);
		bool L_45 = Dictionary_2_ContainsKey_m4104309222(L_44, _stringLiteral3255970859, /*hidden argument*/Dictionary_2_ContainsKey_m4104309222_RuntimeMethod_var);
		if (L_45)
		{
			goto IL_015e;
		}
	}
	{
		WordBehaviour_t209462683 * L_46 = WordManager_CreateWordBehaviour_m3530259637(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_7 = L_46;
		Dictionary_2_t1466793724 * L_47 = __this->get_mWordBehaviours_7();
		List_1_t1681537425 * L_48 = (List_1_t1681537425 *)il2cpp_codegen_object_new(List_1_t1681537425_il2cpp_TypeInfo_var);
		List_1__ctor_m1720454467(L_48, /*hidden argument*/List_1__ctor_m1720454467_RuntimeMethod_var);
		List_1_t1681537425 * L_49 = L_48;
		WordBehaviour_t209462683 * L_50 = V_7;
		NullCheck(L_49);
		List_1_Add_m82523697(L_49, L_50, /*hidden argument*/List_1_Add_m82523697_RuntimeMethod_var);
		NullCheck(L_47);
		Dictionary_2_Add_m2175596614(L_47, _stringLiteral3255970859, L_49, /*hidden argument*/Dictionary_2_Add_m2175596614_RuntimeMethod_var);
		__this->set_mAutomaticTemplate_8((bool)1);
	}

IL_015e:
	{
		List_1_t1681537425 * L_51 = __this->get_mWordBehavioursMarkedForDeletion_4();
		NullCheck(L_51);
		List_1_Clear_m4131072563(L_51, /*hidden argument*/List_1_Clear_m4131072563_RuntimeMethod_var);
		return;
	}
}
// System.Void Vuforia.WordManager::RemoveDestroyedTrackables()
extern "C"  void WordManager_RemoveDestroyedTrackables_m1969970407 (WordManager_t3100853168 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManager_RemoveDestroyedTrackables_m1969970407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t2035687381  V_0;
	memset(&V_0, 0, sizeof(V_0));
	List_1_t1681537425 * V_1 = NULL;
	int32_t V_2 = 0;
	StringU5BU5D_t1281789340* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	Int32U5BU5D_t385246372* V_6 = NULL;
	int32_t V_7 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t1466793724 * L_0 = __this->get_mWordBehaviours_7();
		NullCheck(L_0);
		ValueCollection_t3182838042 * L_1 = Dictionary_2_get_Values_m2758663250(L_0, /*hidden argument*/Dictionary_2_get_Values_m2758663250_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t2035687381  L_2 = ValueCollection_GetEnumerator_m1627817905(L_1, /*hidden argument*/ValueCollection_GetEnumerator_m1627817905_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_0013:
		{
			List_1_t1681537425 * L_3 = Enumerator_get_Current_m1070017454((&V_0), /*hidden argument*/Enumerator_get_Current_m1070017454_RuntimeMethod_var);
			V_1 = L_3;
			List_1_t1681537425 * L_4 = V_1;
			NullCheck(L_4);
			int32_t L_5 = List_1_get_Count_m2708548481(L_4, /*hidden argument*/List_1_get_Count_m2708548481_RuntimeMethod_var);
			V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
			goto IL_0040;
		}

IL_0026:
		{
			List_1_t1681537425 * L_6 = V_1;
			int32_t L_7 = V_2;
			NullCheck(L_6);
			WordBehaviour_t209462683 * L_8 = List_1_get_Item_m1982020868(L_6, L_7, /*hidden argument*/List_1_get_Item_m1982020868_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_9 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_8, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_003c;
			}
		}

IL_0035:
		{
			List_1_t1681537425 * L_10 = V_1;
			int32_t L_11 = V_2;
			NullCheck(L_10);
			List_1_RemoveAt_m726756076(L_10, L_11, /*hidden argument*/List_1_RemoveAt_m726756076_RuntimeMethod_var);
		}

IL_003c:
		{
			int32_t L_12 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
		}

IL_0040:
		{
			int32_t L_13 = V_2;
			if ((((int32_t)L_13) >= ((int32_t)0)))
			{
				goto IL_0026;
			}
		}

IL_0044:
		{
			bool L_14 = Enumerator_MoveNext_m2310817316((&V_0), /*hidden argument*/Enumerator_MoveNext_m2310817316_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0013;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2347494636((&V_0), /*hidden argument*/Enumerator_Dispose_m2347494636_RuntimeMethod_var);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005d:
	{
		Dictionary_2_t1466793724 * L_15 = __this->get_mWordBehaviours_7();
		NullCheck(L_15);
		KeyCollection_t1656469195 * L_16 = Dictionary_2_get_Keys_m1811193429(L_15, /*hidden argument*/Dictionary_2_get_Keys_m1811193429_RuntimeMethod_var);
		StringU5BU5D_t1281789340* L_17 = Enumerable_ToArray_TisString_t_m1789351813(NULL /*static, unused*/, L_16, /*hidden argument*/Enumerable_ToArray_TisString_t_m1789351813_RuntimeMethod_var);
		V_3 = L_17;
		V_4 = 0;
		goto IL_00a1;
	}

IL_0073:
	{
		StringU5BU5D_t1281789340* L_18 = V_3;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		String_t* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_5 = L_21;
		Dictionary_2_t1466793724 * L_22 = __this->get_mWordBehaviours_7();
		String_t* L_23 = V_5;
		NullCheck(L_22);
		List_1_t1681537425 * L_24 = Dictionary_2_get_Item_m142719623(L_22, L_23, /*hidden argument*/Dictionary_2_get_Item_m142719623_RuntimeMethod_var);
		NullCheck(L_24);
		int32_t L_25 = List_1_get_Count_m2708548481(L_24, /*hidden argument*/List_1_get_Count_m2708548481_RuntimeMethod_var);
		if (L_25)
		{
			goto IL_009b;
		}
	}
	{
		Dictionary_2_t1466793724 * L_26 = __this->get_mWordBehaviours_7();
		String_t* L_27 = V_5;
		NullCheck(L_26);
		Dictionary_2_Remove_m1957493530(L_26, L_27, /*hidden argument*/Dictionary_2_Remove_m1957493530_RuntimeMethod_var);
	}

IL_009b:
	{
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00a1:
	{
		int32_t L_29 = V_4;
		StringU5BU5D_t1281789340* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))))))
		{
			goto IL_0073;
		}
	}
	{
		Dictionary_2_t3393143310 * L_31 = __this->get_mActiveWordBehaviours_3();
		NullCheck(L_31);
		KeyCollection_t3582818781 * L_32 = Dictionary_2_get_Keys_m176267334(L_31, /*hidden argument*/Dictionary_2_get_Keys_m176267334_RuntimeMethod_var);
		Int32U5BU5D_t385246372* L_33 = Enumerable_ToArray_TisInt32_t2950945753_m2311522548(NULL /*static, unused*/, L_32, /*hidden argument*/Enumerable_ToArray_TisInt32_t2950945753_m2311522548_RuntimeMethod_var);
		V_6 = L_33;
		V_4 = 0;
		goto IL_00ef;
	}

IL_00bf:
	{
		Int32U5BU5D_t385246372* L_34 = V_6;
		int32_t L_35 = V_4;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		int32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_7 = L_37;
		Dictionary_2_t3393143310 * L_38 = __this->get_mActiveWordBehaviours_3();
		int32_t L_39 = V_7;
		NullCheck(L_38);
		WordBehaviour_t209462683 * L_40 = Dictionary_2_get_Item_m3370583836(L_38, L_39, /*hidden argument*/Dictionary_2_get_Item_m3370583836_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_41 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_40, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_00e9;
		}
	}
	{
		Dictionary_2_t3393143310 * L_42 = __this->get_mActiveWordBehaviours_3();
		int32_t L_43 = V_7;
		NullCheck(L_42);
		Dictionary_2_Remove_m74906818(L_42, L_43, /*hidden argument*/Dictionary_2_Remove_m74906818_RuntimeMethod_var);
	}

IL_00e9:
	{
		int32_t L_44 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_00ef:
	{
		int32_t L_45 = V_4;
		Int32U5BU5D_t385246372* L_46 = V_6;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_46)->max_length)))))))
		{
			goto IL_00bf;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.WordManager::UpdateWords(UnityEngine.Transform,Vuforia.TrackerData/WordData[],Vuforia.TrackerData/WordResultData[])
extern "C"  void WordManager_UpdateWords_m281946653 (WordManager_t3100853168 * __this, Transform_t3600365921 * ___arCameraTransform0, WordDataU5BU5D_t3131491555* ___newWordData1, WordResultDataU5BU5D_t2333646353* ___wordResults2, const RuntimeMethod* method)
{
	{
		WordDataU5BU5D_t3131491555* L_0 = ___newWordData1;
		WordResultDataU5BU5D_t2333646353* L_1 = ___wordResults2;
		WordManager_UpdateWords_m4081984760(__this, (RuntimeObject*)(RuntimeObject*)L_0, (RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = ___arCameraTransform0;
		WordResultDataU5BU5D_t2333646353* L_3 = ___wordResults2;
		WordManager_UpdateWordResultPoses_m3056067080(__this, L_2, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WordManager::SetWordBehavioursToNotFound()
extern "C"  void WordManager_SetWordBehavioursToNotFound_m3508151847 (WordManager_t3100853168 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManager_SetWordBehavioursToNotFound_m3508151847_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3962036967  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t3393143310 * L_0 = __this->get_mActiveWordBehaviours_3();
		NullCheck(L_0);
		ValueCollection_t814220332 * L_1 = Dictionary_2_get_Values_m1751666622(L_0, /*hidden argument*/Dictionary_2_get_Values_m1751666622_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t3962036967  L_2 = ValueCollection_GetEnumerator_m3310874610(L_1, /*hidden argument*/ValueCollection_GetEnumerator_m3310874610_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_0013:
		{
			WordBehaviour_t209462683 * L_3 = Enumerator_get_Current_m2440865922((&V_0), /*hidden argument*/Enumerator_get_Current_m2440865922_RuntimeMethod_var);
			NullCheck(L_3);
			VirtActionInvoker1< int32_t >::Invoke(5 /* System.Void Vuforia.TrackableBehaviour::OnTrackerUpdate(Vuforia.TrackableBehaviour/Status) */, L_3, (-1));
		}

IL_0020:
		{
			bool L_4 = Enumerator_MoveNext_m3670481143((&V_0), /*hidden argument*/Enumerator_MoveNext_m3670481143_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0013;
			}
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x39, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m329372891((&V_0), /*hidden argument*/Enumerator_Dispose_m329372891_RuntimeMethod_var);
		IL2CPP_END_FINALLY(43)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_JUMP_TBL(0x39, IL_0039)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0039:
	{
		return;
	}
}
// System.Void Vuforia.WordManager::CleanupWordBehaviours()
extern "C"  void WordManager_CleanupWordBehaviours_m1453892895 (WordManager_t3100853168 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManager_CleanupWordBehaviours_m1453892895_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t817881248 * L_0 = __this->get_mNewWords_1();
		NullCheck(L_0);
		List_1_Clear_m3053871591(L_0, /*hidden argument*/List_1_Clear_m3053871591_RuntimeMethod_var);
		List_1_t2588113360 * L_1 = __this->get_mLostWords_2();
		NullCheck(L_1);
		List_1_Clear_m3489354309(L_1, /*hidden argument*/List_1_Clear_m3489354309_RuntimeMethod_var);
		List_1_t2588113360 * L_2 = __this->get_mWaitingQueue_5();
		NullCheck(L_2);
		List_1_Clear_m3489354309(L_2, /*hidden argument*/List_1_Clear_m3489354309_RuntimeMethod_var);
		Dictionary_2_t2529487133 * L_3 = __this->get_mTrackedWords_0();
		NullCheck(L_3);
		Dictionary_2_Clear_m3931322809(L_3, /*hidden argument*/Dictionary_2_Clear_m3931322809_RuntimeMethod_var);
		Dictionary_2_t3393143310 * L_4 = __this->get_mActiveWordBehaviours_3();
		NullCheck(L_4);
		Dictionary_2_Clear_m1313596732(L_4, /*hidden argument*/Dictionary_2_Clear_m1313596732_RuntimeMethod_var);
		Dictionary_2_t1466793724 * L_5 = __this->get_mWordBehaviours_7();
		NullCheck(L_5);
		Dictionary_2_Clear_m3720299519(L_5, /*hidden argument*/Dictionary_2_Clear_m3720299519_RuntimeMethod_var);
		return;
	}
}
// System.Void Vuforia.WordManager::UpdateWords(System.Collections.Generic.IEnumerable`1<Vuforia.TrackerData/WordData>,System.Collections.Generic.IEnumerable`1<Vuforia.TrackerData/WordResultData>)
extern "C"  void WordManager_UpdateWords_m4081984760 (WordManager_t3100853168 * __this, RuntimeObject* ___newWordData0, RuntimeObject* ___wordResults1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManager_UpdateWords_m4081984760_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t128053199 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	WordData_t2624767814  V_2;
	memset(&V_2, 0, sizeof(V_2));
	WordResultImpl_t709252498 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	WordResultData_t1538379568  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Enumerator_t2017297076  V_6;
	memset(&V_6, 0, sizeof(V_6));
	int32_t V_7 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t817881248 * L_0 = __this->get_mNewWords_1();
		NullCheck(L_0);
		List_1_Clear_m3053871591(L_0, /*hidden argument*/List_1_Clear_m3053871591_RuntimeMethod_var);
		List_1_t2588113360 * L_1 = __this->get_mLostWords_2();
		NullCheck(L_1);
		List_1_Clear_m3489354309(L_1, /*hidden argument*/List_1_Clear_m3489354309_RuntimeMethod_var);
		RuntimeObject* L_2 = ___newWordData0;
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Vuforia.TrackerData/WordData>::GetEnumerator() */, IEnumerable_1_t1604620703_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0079;
		}

IL_001f:
		{
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			WordData_t2624767814  L_5 = InterfaceFuncInvoker0< WordData_t2624767814  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Vuforia.TrackerData/WordData>::get_Current() */, IEnumerator_1_t3057338282_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			Dictionary_2_t2529487133 * L_6 = __this->get_mTrackedWords_0();
			WordData_t2624767814  L_7 = V_2;
			int32_t L_8 = L_7.get_id_1();
			NullCheck(L_6);
			bool L_9 = Dictionary_2_ContainsKey_m452890411(L_6, L_8, /*hidden argument*/Dictionary_2_ContainsKey_m452890411_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0079;
			}
		}

IL_0039:
		{
			WordData_t2624767814  L_10 = V_2;
			int32_t L_11 = L_10.get_id_1();
			WordData_t2624767814  L_12 = V_2;
			intptr_t L_13 = L_12.get_stringValue_0();
			IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
			String_t* L_14 = Marshal_PtrToStringUni_m175561854(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
			WordData_t2624767814  L_15 = V_2;
			Vector2_t2156229523  L_16 = L_15.get_size_2();
			WordImpl_t2494369133 * L_17 = (WordImpl_t2494369133 *)il2cpp_codegen_object_new(WordImpl_t2494369133_il2cpp_TypeInfo_var);
			WordImpl__ctor_m518897599(L_17, L_11, L_14, L_16, /*hidden argument*/NULL);
			WordResultImpl_t709252498 * L_18 = (WordResultImpl_t709252498 *)il2cpp_codegen_object_new(WordResultImpl_t709252498_il2cpp_TypeInfo_var);
			WordResultImpl__ctor_m3731373850(L_18, L_17, /*hidden argument*/NULL);
			V_3 = L_18;
			Dictionary_2_t2529487133 * L_19 = __this->get_mTrackedWords_0();
			WordData_t2624767814  L_20 = V_2;
			int32_t L_21 = L_20.get_id_1();
			WordResultImpl_t709252498 * L_22 = V_3;
			NullCheck(L_19);
			Dictionary_2_Add_m417576055(L_19, L_21, L_22, /*hidden argument*/Dictionary_2_Add_m417576055_RuntimeMethod_var);
			List_1_t817881248 * L_23 = __this->get_mNewWords_1();
			WordResultImpl_t709252498 * L_24 = V_3;
			NullCheck(L_23);
			List_1_Add_m309338820(L_23, L_24, /*hidden argument*/List_1_Add_m309338820_RuntimeMethod_var);
		}

IL_0079:
		{
			RuntimeObject* L_25 = V_1;
			NullCheck(L_25);
			bool L_26 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_001f;
			}
		}

IL_0081:
		{
			IL2CPP_LEAVE(0x8D, FINALLY_0083);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0083;
	}

FINALLY_0083:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_27 = V_1;
			if (!L_27)
			{
				goto IL_008c;
			}
		}

IL_0086:
		{
			RuntimeObject* L_28 = V_1;
			NullCheck(L_28);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_28);
		}

IL_008c:
		{
			IL2CPP_END_FINALLY(131)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(131)
	{
		IL2CPP_JUMP_TBL(0x8D, IL_008d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008d:
	{
		List_1_t128053199 * L_29 = (List_1_t128053199 *)il2cpp_codegen_object_new(List_1_t128053199_il2cpp_TypeInfo_var);
		List_1__ctor_m1628857705(L_29, /*hidden argument*/List_1__ctor_m1628857705_RuntimeMethod_var);
		V_0 = L_29;
		RuntimeObject* L_30 = ___wordResults1;
		NullCheck(L_30);
		RuntimeObject* L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Vuforia.TrackerData/WordResultData>::GetEnumerator() */, IEnumerable_1_t518232457_il2cpp_TypeInfo_var, L_30);
		V_4 = L_31;
	}

IL_009b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b3;
		}

IL_009d:
		{
			RuntimeObject* L_32 = V_4;
			NullCheck(L_32);
			WordResultData_t1538379568  L_33 = InterfaceFuncInvoker0< WordResultData_t1538379568  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Vuforia.TrackerData/WordResultData>::get_Current() */, IEnumerator_1_t1970950036_il2cpp_TypeInfo_var, L_32);
			V_5 = L_33;
			List_1_t128053199 * L_34 = V_0;
			WordResultData_t1538379568  L_35 = V_5;
			int32_t L_36 = L_35.get_id_3();
			NullCheck(L_34);
			List_1_Add_m697420525(L_34, L_36, /*hidden argument*/List_1_Add_m697420525_RuntimeMethod_var);
		}

IL_00b3:
		{
			RuntimeObject* L_37 = V_4;
			NullCheck(L_37);
			bool L_38 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_37);
			if (L_38)
			{
				goto IL_009d;
			}
		}

IL_00bc:
		{
			IL2CPP_LEAVE(0xCA, FINALLY_00be);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00be;
	}

FINALLY_00be:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_39 = V_4;
			if (!L_39)
			{
				goto IL_00c9;
			}
		}

IL_00c2:
		{
			RuntimeObject* L_40 = V_4;
			NullCheck(L_40);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_40);
		}

IL_00c9:
		{
			IL2CPP_END_FINALLY(190)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(190)
	{
		IL2CPP_JUMP_TBL(0xCA, IL_00ca)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ca:
	{
		Dictionary_2_t2529487133 * L_41 = __this->get_mTrackedWords_0();
		NullCheck(L_41);
		KeyCollection_t2719162604 * L_42 = Dictionary_2_get_Keys_m2166097550(L_41, /*hidden argument*/Dictionary_2_get_Keys_m2166097550_RuntimeMethod_var);
		List_1_t128053199 * L_43 = Enumerable_ToList_TisInt32_t2950945753_m1435865193(NULL /*static, unused*/, L_42, /*hidden argument*/Enumerable_ToList_TisInt32_t2950945753_m1435865193_RuntimeMethod_var);
		NullCheck(L_43);
		Enumerator_t2017297076  L_44 = List_1_GetEnumerator_m731136149(L_43, /*hidden argument*/List_1_GetEnumerator_m731136149_RuntimeMethod_var);
		V_6 = L_44;
	}

IL_00e1:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0121;
		}

IL_00e3:
		{
			int32_t L_45 = Enumerator_get_Current_m4088456620((&V_6), /*hidden argument*/Enumerator_get_Current_m4088456620_RuntimeMethod_var);
			V_7 = L_45;
			List_1_t128053199 * L_46 = V_0;
			int32_t L_47 = V_7;
			NullCheck(L_46);
			bool L_48 = List_1_Contains_m2934014725(L_46, L_47, /*hidden argument*/List_1_Contains_m2934014725_RuntimeMethod_var);
			if (L_48)
			{
				goto IL_0121;
			}
		}

IL_00f6:
		{
			List_1_t2588113360 * L_49 = __this->get_mLostWords_2();
			Dictionary_2_t2529487133 * L_50 = __this->get_mTrackedWords_0();
			int32_t L_51 = V_7;
			NullCheck(L_50);
			WordResult_t3640773802 * L_52 = Dictionary_2_get_Item_m2551113427(L_50, L_51, /*hidden argument*/Dictionary_2_get_Item_m2551113427_RuntimeMethod_var);
			NullCheck(L_52);
			RuntimeObject* L_53 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuforia.Word Vuforia.WordResult::get_Word() */, L_52);
			NullCheck(L_49);
			List_1_Add_m3459031900(L_49, L_53, /*hidden argument*/List_1_Add_m3459031900_RuntimeMethod_var);
			Dictionary_2_t2529487133 * L_54 = __this->get_mTrackedWords_0();
			int32_t L_55 = V_7;
			NullCheck(L_54);
			Dictionary_2_Remove_m1088040339(L_54, L_55, /*hidden argument*/Dictionary_2_Remove_m1088040339_RuntimeMethod_var);
		}

IL_0121:
		{
			bool L_56 = Enumerator_MoveNext_m2218650275((&V_6), /*hidden argument*/Enumerator_MoveNext_m2218650275_RuntimeMethod_var);
			if (L_56)
			{
				goto IL_00e3;
			}
		}

IL_012a:
		{
			IL2CPP_LEAVE(0x13A, FINALLY_012c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_012c;
	}

FINALLY_012c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m222348240((&V_6), /*hidden argument*/Enumerator_Dispose_m222348240_RuntimeMethod_var);
		IL2CPP_END_FINALLY(300)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(300)
	{
		IL2CPP_JUMP_TBL(0x13A, IL_013a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_013a:
	{
		int32_t L_57 = __this->get_mWordPrefabCreationMode_10();
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_014f;
		}
	}
	{
		WordManager_UnregisterLostWords_m2200841016(__this, /*hidden argument*/NULL);
		WordManager_AssociateWordResultsWithBehaviours_m461350755(__this, /*hidden argument*/NULL);
	}

IL_014f:
	{
		return;
	}
}
// System.Void Vuforia.WordManager::UpdateWordResultPoses(UnityEngine.Transform,System.Collections.Generic.IEnumerable`1<Vuforia.TrackerData/WordResultData>)
extern "C"  void WordManager_UpdateWordResultPoses_m3056067080 (WordManager_t3100853168 * __this, Transform_t3600365921 * ___arCameraTransform0, RuntimeObject* ___wordResults1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManager_UpdateWordResultPoses_m3056067080_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	VideoModeData_t2066817255  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	WordResultData_t1538379568  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Quaternion_t2301928331  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Quaternion_t2301928331  V_7;
	memset(&V_7, 0, sizeof(V_7));
	OrientedBoundingBox_t2769728497  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		VuforiaARController_t1876945237 * L_0 = __this->get_mVuforiaBehaviour_11();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t1876945237_il2cpp_TypeInfo_var);
		VuforiaARController_t1876945237 * L_1 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_mVuforiaBehaviour_11(L_1);
	}

IL_0013:
	{
		VuforiaARController_t1876945237 * L_2 = __this->get_mVuforiaBehaviour_11();
		NullCheck(L_2);
		Rect_t2360479859  L_3 = VuforiaARController_GetVideoBackgroundRectInViewPort_m1517317621(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		VuforiaARController_t1876945237 * L_4 = __this->get_mVuforiaBehaviour_11();
		NullCheck(L_4);
		int32_t L_5 = VuforiaARController_get_VideoBackGroundMirrored_m2793229335(L_4, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)1))? 1 : 0);
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_6 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		VideoModeData_t2066817255  L_7 = CameraDevice_GetVideoMode_m3070743689(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		RuntimeObject* L_8 = ___wordResults1;
		NullCheck(L_8);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Vuforia.TrackerData/WordResultData>::GetEnumerator() */, IEnumerable_1_t518232457_il2cpp_TypeInfo_var, L_8);
		V_3 = L_9;
	}

IL_0040:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00fa;
		}

IL_0045:
		{
			RuntimeObject* L_10 = V_3;
			NullCheck(L_10);
			WordResultData_t1538379568  L_11 = InterfaceFuncInvoker0< WordResultData_t1538379568  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Vuforia.TrackerData/WordResultData>::get_Current() */, IEnumerator_1_t1970950036_il2cpp_TypeInfo_var, L_10);
			V_4 = L_11;
			Dictionary_2_t2529487133 * L_12 = __this->get_mTrackedWords_0();
			WordResultData_t1538379568  L_13 = V_4;
			int32_t L_14 = L_13.get_id_3();
			NullCheck(L_12);
			WordResult_t3640773802 * L_15 = Dictionary_2_get_Item_m2551113427(L_12, L_14, /*hidden argument*/Dictionary_2_get_Item_m2551113427_RuntimeMethod_var);
			Transform_t3600365921 * L_16 = ___arCameraTransform0;
			WordResultData_t1538379568  L_17 = V_4;
			PoseData_t3794839648  L_18 = L_17.get_pose_0();
			Vector3_t3722313464  L_19 = L_18.get_position_0();
			NullCheck(L_16);
			Vector3_t3722313464  L_20 = Transform_TransformPoint_m226827784(L_16, L_19, /*hidden argument*/NULL);
			V_5 = L_20;
			WordResultData_t1538379568  L_21 = V_4;
			PoseData_t3794839648  L_22 = L_21.get_pose_0();
			Quaternion_t2301928331  L_23 = L_22.get_orientation_1();
			V_6 = L_23;
			Transform_t3600365921 * L_24 = ___arCameraTransform0;
			NullCheck(L_24);
			Quaternion_t2301928331  L_25 = Transform_get_rotation_m3502953881(L_24, /*hidden argument*/NULL);
			Quaternion_t2301928331  L_26 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
			Quaternion_t2301928331  L_27 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
			Vector3_t3722313464  L_28 = Vector3_get_left_m2428419009(NULL /*static, unused*/, /*hidden argument*/NULL);
			Quaternion_t2301928331  L_29 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, (270.0f), L_28, /*hidden argument*/NULL);
			Quaternion_t2301928331  L_30 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_27, L_29, /*hidden argument*/NULL);
			V_7 = L_30;
			WordResultImpl_t709252498 * L_31 = ((WordResultImpl_t709252498 *)CastclassClass((RuntimeObject*)L_15, WordResultImpl_t709252498_il2cpp_TypeInfo_var));
			Vector3_t3722313464  L_32 = V_5;
			Quaternion_t2301928331  L_33 = V_7;
			NullCheck(L_31);
			WordResultImpl_SetPose_m1787749657(L_31, L_32, L_33, /*hidden argument*/NULL);
			WordResultImpl_t709252498 * L_34 = L_31;
			int32_t L_35 = WordResultData_get_status_m203402271((&V_4), /*hidden argument*/NULL);
			NullCheck(L_34);
			WordResultImpl_SetStatus_m1510737358(L_34, L_35, /*hidden argument*/NULL);
			WordResultData_t1538379568  L_36 = V_4;
			Obb2D_t1491623550  L_37 = L_36.get_orientedBoundingBox_4();
			Vector2_t2156229523  L_38 = L_37.get_center_0();
			WordResultData_t1538379568  L_39 = V_4;
			Obb2D_t1491623550  L_40 = L_39.get_orientedBoundingBox_4();
			Vector2_t2156229523  L_41 = L_40.get_halfExtents_1();
			WordResultData_t1538379568  L_42 = V_4;
			Obb2D_t1491623550  L_43 = L_42.get_orientedBoundingBox_4();
			float L_44 = L_43.get_rotation_2();
			OrientedBoundingBox__ctor_m1736506094((&V_8), L_38, L_41, L_44, /*hidden argument*/NULL);
			OrientedBoundingBox_t2769728497  L_45 = V_8;
			Rect_t2360479859  L_46 = V_0;
			bool L_47 = V_1;
			VideoModeData_t2066817255  L_48 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
			OrientedBoundingBox_t2769728497  L_49 = VuforiaRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m626826678(NULL /*static, unused*/, L_45, L_46, L_47, L_48, /*hidden argument*/NULL);
			NullCheck(L_34);
			WordResultImpl_SetObb_m3870243631(L_34, L_49, /*hidden argument*/NULL);
		}

IL_00fa:
		{
			RuntimeObject* L_50 = V_3;
			NullCheck(L_50);
			bool L_51 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_50);
			if (L_51)
			{
				goto IL_0045;
			}
		}

IL_0105:
		{
			IL2CPP_LEAVE(0x111, FINALLY_0107);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0107;
	}

FINALLY_0107:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_52 = V_3;
			if (!L_52)
			{
				goto IL_0110;
			}
		}

IL_010a:
		{
			RuntimeObject* L_53 = V_3;
			NullCheck(L_53);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_53);
		}

IL_0110:
		{
			IL2CPP_END_FINALLY(263)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(263)
	{
		IL2CPP_JUMP_TBL(0x111, IL_0111)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0111:
	{
		int32_t L_54 = __this->get_mWordPrefabCreationMode_10();
		if ((!(((uint32_t)L_54) == ((uint32_t)1))))
		{
			goto IL_0120;
		}
	}
	{
		WordManager_UpdateWordBehaviourPoses_m234614189(__this, /*hidden argument*/NULL);
	}

IL_0120:
	{
		return;
	}
}
// System.Void Vuforia.WordManager::AssociateWordResultsWithBehaviours()
extern "C"  void WordManager_AssociateWordResultsWithBehaviours_m461350755 (WordManager_t3100853168 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManager_AssociateWordResultsWithBehaviours_m461350755_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t182389941  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	WordResult_t3640773802 * V_2 = NULL;
	Enumerator_t2707125125  V_3;
	memset(&V_3, 0, sizeof(V_3));
	WordResult_t3640773802 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2588113360 * L_0 = __this->get_mWaitingQueue_5();
		List_1_t2588113360 * L_1 = (List_1_t2588113360 *)il2cpp_codegen_object_new(List_1_t2588113360_il2cpp_TypeInfo_var);
		List_1__ctor_m3158419898(L_1, L_0, /*hidden argument*/List_1__ctor_m3158419898_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t182389941  L_2 = List_1_GetEnumerator_m2302738403(L_1, /*hidden argument*/List_1_GetEnumerator_m2302738403_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006b;
		}

IL_0013:
		{
			RuntimeObject* L_3 = Enumerator_get_Current_m2736178487((&V_0), /*hidden argument*/Enumerator_get_Current_m2736178487_RuntimeMethod_var);
			V_1 = L_3;
			Dictionary_2_t2529487133 * L_4 = __this->get_mTrackedWords_0();
			RuntimeObject* L_5 = V_1;
			NullCheck(L_5);
			int32_t L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Vuforia.Trackable::get_ID() */, Trackable_t2451999991_il2cpp_TypeInfo_var, L_5);
			NullCheck(L_4);
			bool L_7 = Dictionary_2_ContainsKey_m452890411(L_4, L_6, /*hidden argument*/Dictionary_2_ContainsKey_m452890411_RuntimeMethod_var);
			if (!L_7)
			{
				goto IL_005e;
			}
		}

IL_002e:
		{
			Dictionary_2_t2529487133 * L_8 = __this->get_mTrackedWords_0();
			RuntimeObject* L_9 = V_1;
			NullCheck(L_9);
			int32_t L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Vuforia.Trackable::get_ID() */, Trackable_t2451999991_il2cpp_TypeInfo_var, L_9);
			NullCheck(L_8);
			WordResult_t3640773802 * L_11 = Dictionary_2_get_Item_m2551113427(L_8, L_10, /*hidden argument*/Dictionary_2_get_Item_m2551113427_RuntimeMethod_var);
			V_2 = L_11;
			WordResult_t3640773802 * L_12 = V_2;
			WordBehaviour_t209462683 * L_13 = WordManager_AssociateWordBehaviour_m1817390297(__this, L_12, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_14 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_13, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_006b;
			}
		}

IL_004f:
		{
			List_1_t2588113360 * L_15 = __this->get_mWaitingQueue_5();
			RuntimeObject* L_16 = V_1;
			NullCheck(L_15);
			List_1_Remove_m1056585745(L_15, L_16, /*hidden argument*/List_1_Remove_m1056585745_RuntimeMethod_var);
			goto IL_006b;
		}

IL_005e:
		{
			List_1_t2588113360 * L_17 = __this->get_mWaitingQueue_5();
			RuntimeObject* L_18 = V_1;
			NullCheck(L_17);
			List_1_Remove_m1056585745(L_17, L_18, /*hidden argument*/List_1_Remove_m1056585745_RuntimeMethod_var);
		}

IL_006b:
		{
			bool L_19 = Enumerator_MoveNext_m2288170636((&V_0), /*hidden argument*/Enumerator_MoveNext_m2288170636_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_0013;
			}
		}

IL_0074:
		{
			IL2CPP_LEAVE(0x84, FINALLY_0076);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0076;
	}

FINALLY_0076:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3471433355((&V_0), /*hidden argument*/Enumerator_Dispose_m3471433355_RuntimeMethod_var);
		IL2CPP_END_FINALLY(118)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(118)
	{
		IL2CPP_JUMP_TBL(0x84, IL_0084)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0084:
	{
		List_1_t817881248 * L_20 = __this->get_mNewWords_1();
		NullCheck(L_20);
		Enumerator_t2707125125  L_21 = List_1_GetEnumerator_m2482267928(L_20, /*hidden argument*/List_1_GetEnumerator_m2482267928_RuntimeMethod_var);
		V_3 = L_21;
	}

IL_0090:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00bd;
		}

IL_0092:
		{
			WordResult_t3640773802 * L_22 = Enumerator_get_Current_m4042749952((&V_3), /*hidden argument*/Enumerator_get_Current_m4042749952_RuntimeMethod_var);
			V_4 = L_22;
			WordResult_t3640773802 * L_23 = V_4;
			WordBehaviour_t209462683 * L_24 = WordManager_AssociateWordBehaviour_m1817390297(__this, L_23, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_25 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_24, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_00bd;
			}
		}

IL_00ab:
		{
			List_1_t2588113360 * L_26 = __this->get_mWaitingQueue_5();
			WordResult_t3640773802 * L_27 = V_4;
			NullCheck(L_27);
			RuntimeObject* L_28 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuforia.Word Vuforia.WordResult::get_Word() */, L_27);
			NullCheck(L_26);
			List_1_Add_m3459031900(L_26, L_28, /*hidden argument*/List_1_Add_m3459031900_RuntimeMethod_var);
		}

IL_00bd:
		{
			bool L_29 = Enumerator_MoveNext_m2572193847((&V_3), /*hidden argument*/Enumerator_MoveNext_m2572193847_RuntimeMethod_var);
			if (L_29)
			{
				goto IL_0092;
			}
		}

IL_00c6:
		{
			IL2CPP_LEAVE(0xD6, FINALLY_00c8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c8;
	}

FINALLY_00c8:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1326660095((&V_3), /*hidden argument*/Enumerator_Dispose_m1326660095_RuntimeMethod_var);
		IL2CPP_END_FINALLY(200)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(200)
	{
		IL2CPP_JUMP_TBL(0xD6, IL_00d6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d6:
	{
		return;
	}
}
// System.Void Vuforia.WordManager::UnregisterLostWords()
extern "C"  void WordManager_UnregisterLostWords_m2200841016 (WordManager_t3100853168 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManager_UnregisterLostWords_m2200841016_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t182389941  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2588113360 * L_0 = __this->get_mLostWords_2();
		NullCheck(L_0);
		Enumerator_t182389941  L_1 = List_1_GetEnumerator_m2302738403(L_0, /*hidden argument*/List_1_GetEnumerator_m2302738403_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0058;
		}

IL_000e:
		{
			RuntimeObject* L_2 = Enumerator_get_Current_m2736178487((&V_0), /*hidden argument*/Enumerator_get_Current_m2736178487_RuntimeMethod_var);
			V_1 = L_2;
			Dictionary_2_t3393143310 * L_3 = __this->get_mActiveWordBehaviours_3();
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			int32_t L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Vuforia.Trackable::get_ID() */, Trackable_t2451999991_il2cpp_TypeInfo_var, L_4);
			NullCheck(L_3);
			bool L_6 = Dictionary_2_ContainsKey_m2771048759(L_3, L_5, /*hidden argument*/Dictionary_2_ContainsKey_m2771048759_RuntimeMethod_var);
			if (!L_6)
			{
				goto IL_0058;
			}
		}

IL_0029:
		{
			Dictionary_2_t3393143310 * L_7 = __this->get_mActiveWordBehaviours_3();
			RuntimeObject* L_8 = V_1;
			NullCheck(L_8);
			int32_t L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Vuforia.Trackable::get_ID() */, Trackable_t2451999991_il2cpp_TypeInfo_var, L_8);
			NullCheck(L_7);
			WordBehaviour_t209462683 * L_10 = Dictionary_2_get_Item_m3370583836(L_7, L_9, /*hidden argument*/Dictionary_2_get_Item_m3370583836_RuntimeMethod_var);
			WordBehaviour_t209462683 * L_11 = L_10;
			NullCheck(L_11);
			VirtActionInvoker1< int32_t >::Invoke(5 /* System.Void Vuforia.TrackableBehaviour::OnTrackerUpdate(Vuforia.TrackableBehaviour/Status) */, L_11, (-1));
			NullCheck(L_11);
			TrackableBehaviour_UnregisterTrackable_m1272061837(L_11, /*hidden argument*/NULL);
			Dictionary_2_t3393143310 * L_12 = __this->get_mActiveWordBehaviours_3();
			RuntimeObject* L_13 = V_1;
			NullCheck(L_13);
			int32_t L_14 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Vuforia.Trackable::get_ID() */, Trackable_t2451999991_il2cpp_TypeInfo_var, L_13);
			NullCheck(L_12);
			Dictionary_2_Remove_m74906818(L_12, L_14, /*hidden argument*/Dictionary_2_Remove_m74906818_RuntimeMethod_var);
		}

IL_0058:
		{
			bool L_15 = Enumerator_MoveNext_m2288170636((&V_0), /*hidden argument*/Enumerator_MoveNext_m2288170636_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_000e;
			}
		}

IL_0061:
		{
			IL2CPP_LEAVE(0x71, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3471433355((&V_0), /*hidden argument*/Enumerator_Dispose_m3471433355_RuntimeMethod_var);
		IL2CPP_END_FINALLY(99)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_JUMP_TBL(0x71, IL_0071)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0071:
	{
		return;
	}
}
// System.Void Vuforia.WordManager::UpdateWordBehaviourPoses()
extern "C"  void WordManager_UpdateWordBehaviourPoses_m234614189 (WordManager_t3100853168 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManager_UpdateWordBehaviourPoses_m234614189_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1052358789  V_0;
	memset(&V_0, 0, sizeof(V_0));
	KeyValuePair_2_t1495848181  V_1;
	memset(&V_1, 0, sizeof(V_1));
	WordResult_t3640773802 * V_2 = NULL;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Quaternion_t2301928331  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector2_t2156229523  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t3393143310 * L_0 = __this->get_mActiveWordBehaviours_3();
		NullCheck(L_0);
		Enumerator_t1052358789  L_1 = Dictionary_2_GetEnumerator_m2773471309(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m2773471309_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00db;
		}

IL_0011:
		{
			KeyValuePair_2_t1495848181  L_2 = Enumerator_get_Current_m2154097776((&V_0), /*hidden argument*/Enumerator_get_Current_m2154097776_RuntimeMethod_var);
			V_1 = L_2;
			Dictionary_2_t2529487133 * L_3 = __this->get_mTrackedWords_0();
			int32_t L_4 = KeyValuePair_2_get_Key_m1922373331((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m1922373331_RuntimeMethod_var);
			NullCheck(L_3);
			bool L_5 = Dictionary_2_ContainsKey_m452890411(L_3, L_4, /*hidden argument*/Dictionary_2_ContainsKey_m452890411_RuntimeMethod_var);
			if (!L_5)
			{
				goto IL_00db;
			}
		}

IL_0030:
		{
			Dictionary_2_t2529487133 * L_6 = __this->get_mTrackedWords_0();
			int32_t L_7 = KeyValuePair_2_get_Key_m1922373331((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m1922373331_RuntimeMethod_var);
			NullCheck(L_6);
			WordResult_t3640773802 * L_8 = Dictionary_2_get_Item_m2551113427(L_6, L_7, /*hidden argument*/Dictionary_2_get_Item_m2551113427_RuntimeMethod_var);
			V_2 = L_8;
			WordResult_t3640773802 * L_9 = V_2;
			NullCheck(L_9);
			Vector3_t3722313464  L_10 = VirtFuncInvoker0< Vector3_t3722313464  >::Invoke(6 /* UnityEngine.Vector3 Vuforia.WordResult::get_Position() */, L_9);
			V_3 = L_10;
			WordResult_t3640773802 * L_11 = V_2;
			NullCheck(L_11);
			Quaternion_t2301928331  L_12 = VirtFuncInvoker0< Quaternion_t2301928331  >::Invoke(7 /* UnityEngine.Quaternion Vuforia.WordResult::get_Orientation() */, L_11);
			V_4 = L_12;
			WordResult_t3640773802 * L_13 = V_2;
			NullCheck(L_13);
			RuntimeObject* L_14 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuforia.Word Vuforia.WordResult::get_Word() */, L_13);
			NullCheck(L_14);
			Vector2_t2156229523  L_15 = InterfaceFuncInvoker0< Vector2_t2156229523  >::Invoke(1 /* UnityEngine.Vector2 Vuforia.Word::get_Size() */, Word_t1116038618_il2cpp_TypeInfo_var, L_14);
			V_5 = L_15;
			WordBehaviour_t209462683 * L_16 = KeyValuePair_2_get_Value_m1813463021((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m1813463021_RuntimeMethod_var);
			NullCheck(L_16);
			Transform_t3600365921 * L_17 = Component_get_transform_m3162698980(L_16, /*hidden argument*/NULL);
			Quaternion_t2301928331  L_18 = V_4;
			NullCheck(L_17);
			Transform_set_rotation_m3524318132(L_17, L_18, /*hidden argument*/NULL);
			WordBehaviour_t209462683 * L_19 = KeyValuePair_2_get_Value_m1813463021((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m1813463021_RuntimeMethod_var);
			NullCheck(L_19);
			Transform_t3600365921 * L_20 = Component_get_transform_m3162698980(L_19, /*hidden argument*/NULL);
			NullCheck(L_20);
			Quaternion_t2301928331  L_21 = Transform_get_rotation_m3502953881(L_20, /*hidden argument*/NULL);
			Vector2_t2156229523  L_22 = V_5;
			float L_23 = L_22.get_x_0();
			Vector2_t2156229523  L_24 = V_5;
			float L_25 = L_24.get_y_1();
			Vector3_t3722313464  L_26;
			memset(&L_26, 0, sizeof(L_26));
			Vector3__ctor_m3353183577((&L_26), ((float)il2cpp_codegen_multiply((float)((-L_23)), (float)(0.5f))), (0.0f), ((float)il2cpp_codegen_multiply((float)((-L_25)), (float)(0.5f))), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
			Vector3_t3722313464  L_27 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_21, L_26, /*hidden argument*/NULL);
			V_6 = L_27;
			WordBehaviour_t209462683 * L_28 = KeyValuePair_2_get_Value_m1813463021((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m1813463021_RuntimeMethod_var);
			NullCheck(L_28);
			Transform_t3600365921 * L_29 = Component_get_transform_m3162698980(L_28, /*hidden argument*/NULL);
			Vector3_t3722313464  L_30 = V_3;
			Vector3_t3722313464  L_31 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
			Vector3_t3722313464  L_32 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
			NullCheck(L_29);
			Transform_set_position_m3387557959(L_29, L_32, /*hidden argument*/NULL);
			WordBehaviour_t209462683 * L_33 = KeyValuePair_2_get_Value_m1813463021((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m1813463021_RuntimeMethod_var);
			WordResult_t3640773802 * L_34 = V_2;
			NullCheck(L_34);
			int32_t L_35 = VirtFuncInvoker0< int32_t >::Invoke(8 /* Vuforia.TrackableBehaviour/Status Vuforia.WordResult::get_CurrentStatus() */, L_34);
			NullCheck(L_33);
			VirtActionInvoker1< int32_t >::Invoke(5 /* System.Void Vuforia.TrackableBehaviour::OnTrackerUpdate(Vuforia.TrackableBehaviour/Status) */, L_33, L_35);
		}

IL_00db:
		{
			bool L_36 = Enumerator_MoveNext_m3012356852((&V_0), /*hidden argument*/Enumerator_MoveNext_m3012356852_RuntimeMethod_var);
			if (L_36)
			{
				goto IL_0011;
			}
		}

IL_00e7:
		{
			IL2CPP_LEAVE(0xF7, FINALLY_00e9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e9;
	}

FINALLY_00e9:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1336168494((&V_0), /*hidden argument*/Enumerator_Dispose_m1336168494_RuntimeMethod_var);
		IL2CPP_END_FINALLY(233)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(233)
	{
		IL2CPP_JUMP_TBL(0xF7, IL_00f7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00f7:
	{
		return;
	}
}
// Vuforia.WordBehaviour Vuforia.WordManager::AssociateWordBehaviour(Vuforia.WordResult)
extern "C"  WordBehaviour_t209462683 * WordManager_AssociateWordBehaviour_m1817390297 (WordManager_t3100853168 * __this, WordResult_t3640773802 * ___wordResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManager_AssociateWordBehaviour_m1817390297_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	List_1_t1681537425 * V_1 = NULL;
	Enumerator_t3570781302  V_2;
	memset(&V_2, 0, sizeof(V_2));
	WordBehaviour_t209462683 * V_3 = NULL;
	WordBehaviour_t209462683 * V_4 = NULL;
	WordBehaviour_t209462683 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		WordResult_t3640773802 * L_0 = ___wordResult0;
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuforia.Word Vuforia.WordResult::get_Word() */, L_0);
		NullCheck(L_1);
		String_t* L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Vuforia.Word::get_StringValue() */, Word_t1116038618_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		String_t* L_3 = String_ToLowerInvariant_m110751226(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Dictionary_2_t1466793724 * L_4 = __this->get_mWordBehaviours_7();
		String_t* L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = Dictionary_2_ContainsKey_m4104309222(L_4, L_5, /*hidden argument*/Dictionary_2_ContainsKey_m4104309222_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		Dictionary_2_t1466793724 * L_7 = __this->get_mWordBehaviours_7();
		String_t* L_8 = V_0;
		NullCheck(L_7);
		List_1_t1681537425 * L_9 = Dictionary_2_get_Item_m142719623(L_7, L_8, /*hidden argument*/Dictionary_2_get_Item_m142719623_RuntimeMethod_var);
		V_1 = L_9;
		goto IL_0065;
	}

IL_002e:
	{
		Dictionary_2_t1466793724 * L_10 = __this->get_mWordBehaviours_7();
		NullCheck(L_10);
		bool L_11 = Dictionary_2_ContainsKey_m4104309222(L_10, _stringLiteral3255970859, /*hidden argument*/Dictionary_2_ContainsKey_m4104309222_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0053;
		}
	}
	{
		Dictionary_2_t1466793724 * L_12 = __this->get_mWordBehaviours_7();
		NullCheck(L_12);
		List_1_t1681537425 * L_13 = Dictionary_2_get_Item_m142719623(L_12, _stringLiteral3255970859, /*hidden argument*/Dictionary_2_get_Item_m142719623_RuntimeMethod_var);
		V_1 = L_13;
		goto IL_0065;
	}

IL_0053:
	{
		String_t* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral508940442, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		return (WordBehaviour_t209462683 *)NULL;
	}

IL_0065:
	{
		List_1_t1681537425 * L_16 = V_1;
		NullCheck(L_16);
		Enumerator_t3570781302  L_17 = List_1_GetEnumerator_m1934944160(L_16, /*hidden argument*/List_1_GetEnumerator_m1934944160_RuntimeMethod_var);
		V_2 = L_17;
	}

IL_006c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008a;
		}

IL_006e:
		{
			WordBehaviour_t209462683 * L_18 = Enumerator_get_Current_m1854802932((&V_2), /*hidden argument*/Enumerator_get_Current_m1854802932_RuntimeMethod_var);
			V_3 = L_18;
			WordBehaviour_t209462683 * L_19 = V_3;
			NullCheck(L_19);
			RuntimeObject* L_20 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuforia.Trackable Vuforia.TrackableBehaviour::get_Trackable() */, L_19);
			if (L_20)
			{
				goto IL_008a;
			}
		}

IL_007e:
		{
			WordResult_t3640773802 * L_21 = ___wordResult0;
			WordBehaviour_t209462683 * L_22 = V_3;
			WordBehaviour_t209462683 * L_23 = WordManager_AssociateWordBehaviour_m859919092(__this, L_21, L_22, /*hidden argument*/NULL);
			V_4 = L_23;
			IL2CPP_LEAVE(0xD2, FINALLY_0095);
		}

IL_008a:
		{
			bool L_24 = Enumerator_MoveNext_m1166863020((&V_2), /*hidden argument*/Enumerator_MoveNext_m1166863020_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_006e;
			}
		}

IL_0093:
		{
			IL2CPP_LEAVE(0xA3, FINALLY_0095);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0095;
	}

FINALLY_0095:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m700246627((&V_2), /*hidden argument*/Enumerator_Dispose_m700246627_RuntimeMethod_var);
		IL2CPP_END_FINALLY(149)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(149)
	{
		IL2CPP_JUMP_TBL(0xD2, IL_00d2)
		IL2CPP_JUMP_TBL(0xA3, IL_00a3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a3:
	{
		List_1_t1681537425 * L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = List_1_get_Count_m2708548481(L_25, /*hidden argument*/List_1_get_Count_m2708548481_RuntimeMethod_var);
		int32_t L_27 = __this->get_mMaxInstances_9();
		if ((((int32_t)L_26) >= ((int32_t)L_27)))
		{
			goto IL_00d0;
		}
	}
	{
		List_1_t1681537425 * L_28 = V_1;
		WordBehaviour_t209462683 * L_29 = Enumerable_First_TisWordBehaviour_t209462683_m4288152383(NULL /*static, unused*/, L_28, /*hidden argument*/Enumerable_First_TisWordBehaviour_t209462683_m4288152383_RuntimeMethod_var);
		WordBehaviour_t209462683 * L_30 = WordManager_InstantiateWordBehaviour_m2264733916(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		V_5 = L_30;
		List_1_t1681537425 * L_31 = V_1;
		WordBehaviour_t209462683 * L_32 = V_5;
		NullCheck(L_31);
		List_1_Add_m82523697(L_31, L_32, /*hidden argument*/List_1_Add_m82523697_RuntimeMethod_var);
		WordResult_t3640773802 * L_33 = ___wordResult0;
		WordBehaviour_t209462683 * L_34 = V_5;
		WordBehaviour_t209462683 * L_35 = WordManager_AssociateWordBehaviour_m859919092(__this, L_33, L_34, /*hidden argument*/NULL);
		return L_35;
	}

IL_00d0:
	{
		return (WordBehaviour_t209462683 *)NULL;
	}

IL_00d2:
	{
		WordBehaviour_t209462683 * L_36 = V_4;
		return L_36;
	}
}
// Vuforia.WordBehaviour Vuforia.WordManager::AssociateWordBehaviour(Vuforia.WordResult,Vuforia.WordBehaviour)
extern "C"  WordBehaviour_t209462683 * WordManager_AssociateWordBehaviour_m859919092 (WordManager_t3100853168 * __this, WordResult_t3640773802 * ___wordResult0, WordBehaviour_t209462683 * ___wordBehaviourTemplate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManager_AssociateWordBehaviour_m859919092_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	WordBehaviour_t209462683 * V_1 = NULL;
	{
		Dictionary_2_t3393143310 * L_0 = __this->get_mActiveWordBehaviours_3();
		NullCheck(L_0);
		int32_t L_1 = Dictionary_2_get_Count_m2971063614(L_0, /*hidden argument*/Dictionary_2_get_Count_m2971063614_RuntimeMethod_var);
		int32_t L_2 = __this->get_mMaxInstances_9();
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0015;
		}
	}
	{
		return (WordBehaviour_t209462683 *)NULL;
	}

IL_0015:
	{
		WordResult_t3640773802 * L_3 = ___wordResult0;
		NullCheck(L_3);
		RuntimeObject* L_4 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuforia.Word Vuforia.WordResult::get_Word() */, L_3);
		V_0 = L_4;
		WordBehaviour_t209462683 * L_5 = ___wordBehaviourTemplate1;
		V_1 = L_5;
		WordBehaviour_t209462683 * L_6 = V_1;
		RuntimeObject* L_7 = V_0;
		NullCheck(L_6);
		WordBehaviour_InitializeWord_m2807202778(L_6, L_7, /*hidden argument*/NULL);
		Dictionary_2_t3393143310 * L_8 = __this->get_mActiveWordBehaviours_3();
		RuntimeObject* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Vuforia.Trackable::get_ID() */, Trackable_t2451999991_il2cpp_TypeInfo_var, L_9);
		WordBehaviour_t209462683 * L_11 = V_1;
		NullCheck(L_8);
		Dictionary_2_Add_m2705235964(L_8, L_10, L_11, /*hidden argument*/Dictionary_2_Add_m2705235964_RuntimeMethod_var);
		WordBehaviour_t209462683 * L_12 = V_1;
		return L_12;
	}
}
// Vuforia.WordBehaviour Vuforia.WordManager::InstantiateWordBehaviour(Vuforia.WordBehaviour)
extern "C"  WordBehaviour_t209462683 * WordManager_InstantiateWordBehaviour_m2264733916 (RuntimeObject * __this /* static, unused */, WordBehaviour_t209462683 * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManager_InstantiateWordBehaviour_m2264733916_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WordBehaviour_t209462683 * L_0 = ___input0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_2 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_1, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		NullCheck(L_2);
		WordBehaviour_t209462683 * L_3 = GameObject_GetComponent_TisWordBehaviour_t209462683_m2132343485(L_2, /*hidden argument*/GameObject_GetComponent_TisWordBehaviour_t209462683_m2132343485_RuntimeMethod_var);
		return L_3;
	}
}
// Vuforia.WordBehaviour Vuforia.WordManager::CreateWordBehaviour()
extern "C"  WordBehaviour_t209462683 * WordManager_CreateWordBehaviour_m3530259637 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordManager_CreateWordBehaviour_m3530259637_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_0, _stringLiteral1861372873, /*hidden argument*/NULL);
		NullCheck(L_0);
		WordBehaviour_t209462683 * L_1 = GameObject_AddComponent_TisWordBehaviour_t209462683_m808492541(L_0, /*hidden argument*/GameObject_AddComponent_TisWordBehaviour_t209462683_m808492541_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral277781720, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.WordResult::.ctor()
extern "C"  void WordResult__ctor_m1058569109 (WordResult_t3640773802 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.WordResultImpl::.ctor(Vuforia.Word)
extern "C"  void WordResultImpl__ctor_m3731373850 (WordResultImpl_t709252498 * __this, RuntimeObject* ___word0, const RuntimeMethod* method)
{
	{
		WordResult__ctor_m1058569109(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___word0;
		__this->set_mWord_3(L_0);
		return;
	}
}
// Vuforia.Word Vuforia.WordResultImpl::get_Word()
extern "C"  RuntimeObject* WordResultImpl_get_Word_m1911128312 (WordResultImpl_t709252498 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_mWord_3();
		return L_0;
	}
}
// UnityEngine.Vector3 Vuforia.WordResultImpl::get_Position()
extern "C"  Vector3_t3722313464  WordResultImpl_get_Position_m4087395152 (WordResultImpl_t709252498 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = __this->get_mPosition_1();
		return L_0;
	}
}
// UnityEngine.Quaternion Vuforia.WordResultImpl::get_Orientation()
extern "C"  Quaternion_t2301928331  WordResultImpl_get_Orientation_m2248909624 (WordResultImpl_t709252498 * __this, const RuntimeMethod* method)
{
	{
		Quaternion_t2301928331  L_0 = __this->get_mOrientation_2();
		return L_0;
	}
}
// Vuforia.OrientedBoundingBox Vuforia.WordResultImpl::get_Obb()
extern "C"  OrientedBoundingBox_t2769728497  WordResultImpl_get_Obb_m2773296960 (WordResultImpl_t709252498 * __this, const RuntimeMethod* method)
{
	{
		OrientedBoundingBox_t2769728497  L_0 = __this->get_mObb_0();
		return L_0;
	}
}
// Vuforia.TrackableBehaviour/Status Vuforia.WordResultImpl::get_CurrentStatus()
extern "C"  int32_t WordResultImpl_get_CurrentStatus_m3548536234 (WordResultImpl_t709252498 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mStatus_4();
		return L_0;
	}
}
// System.Void Vuforia.WordResultImpl::SetPose(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void WordResultImpl_SetPose_m1787749657 (WordResultImpl_t709252498 * __this, Vector3_t3722313464  ___position0, Quaternion_t2301928331  ___orientation1, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = ___position0;
		__this->set_mPosition_1(L_0);
		Quaternion_t2301928331  L_1 = ___orientation1;
		__this->set_mOrientation_2(L_1);
		return;
	}
}
// System.Void Vuforia.WordResultImpl::SetObb(Vuforia.OrientedBoundingBox)
extern "C"  void WordResultImpl_SetObb_m3870243631 (WordResultImpl_t709252498 * __this, OrientedBoundingBox_t2769728497  ___obb0, const RuntimeMethod* method)
{
	{
		OrientedBoundingBox_t2769728497  L_0 = ___obb0;
		__this->set_mObb_0(L_0);
		return;
	}
}
// System.Void Vuforia.WordResultImpl::SetStatus(Vuforia.TrackableBehaviour/Status)
extern "C"  void WordResultImpl_SetStatus_m1510737358 (WordResultImpl_t709252498 * __this, int32_t ___status0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___status0;
		__this->set_mStatus_4(L_0);
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
// System.Void Vuforia.WSAUnityPlayer::LoadNativeLibraries()
extern "C"  void WSAUnityPlayer_LoadNativeLibraries_m3240794706 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer::InitializePlatform()
extern "C"  void WSAUnityPlayer_InitializePlatform_m618442718 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// Vuforia.VuforiaUnity/InitError Vuforia.WSAUnityPlayer::InitializeVuforia(System.String)
extern "C"  int32_t WSAUnityPlayer_InitializeVuforia_m1469206804 (WSAUnityPlayer_t3135728299 * __this, String_t* ___licenseKey0, const RuntimeMethod* method)
{
	{
		return (int32_t)((-1));
	}
}
// System.Void Vuforia.WSAUnityPlayer::StartScene()
extern "C"  void WSAUnityPlayer_StartScene_m426981829 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer::Update()
extern "C"  void WSAUnityPlayer_Update_m2619224026 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer::Dispose()
extern "C"  void WSAUnityPlayer_Dispose_m2347149042 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer::OnPause()
extern "C"  void WSAUnityPlayer_OnPause_m33757750 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer::OnResume()
extern "C"  void WSAUnityPlayer_OnResume_m1549828269 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer::OnDestroy()
extern "C"  void WSAUnityPlayer_OnDestroy_m3595342806 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer::.ctor()
extern "C"  void WSAUnityPlayer__ctor_m3852159652 (WSAUnityPlayer_t3135728299 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
